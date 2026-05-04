#ifndef __SWIFT_AMR_H_
#define __SWIFT_AMR_H_
#ifdef __cplusplus
extern "C" {
#endif
void SwiftAmr_DecoderInit(void);
int SwiftAmr_decode(const unsigned char *inputBuffer,
                                           int inputBufferUsage,
                                           short *outputBuffer,
                                           long lastDecoderState);
#ifdef __cplusplus
}
#endif
#endif
