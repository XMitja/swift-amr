#include "interf_dec.h"
#include <stdint.h>
#include <string.h>

const short block_size[16] = {12, 13, 15, 17, 19, 20, 26, 31,
                              5,  0,  0,  0,  0,  0,  0,  0};

static void *decState;
void SwiftAmr_DecoderInit(void) {
  decState = Decoder_Interface_init();
}

int SwiftAmr_decode(const unsigned char *inputBuffer,
                                           int inputBufferUsage,
                                           short *outputBuffer,
                                           long lastDecoderState) {
  unsigned char analysis[32];
  int frameCount = 0;
  int decMode;
  int readSize;
  int position = 0;

  for (position = 0; position < inputBufferUsage;) {
    analysis[0] = inputBuffer[position];
    position++;

    decMode = (analysis[0] >> 3) & 0x000F;
    readSize = block_size[decMode];

    memcpy(&analysis[1], &inputBuffer[position], readSize);
    Decoder_Interface_Decode(decState, analysis,
                             &outputBuffer[frameCount * 160], 0);
    frameCount++;
    position += readSize;
  }

  return frameCount * 160;
}
