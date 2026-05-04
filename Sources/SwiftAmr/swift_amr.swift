import AVFoundation
@_exported import CSwiftAmr

public final class AmrCodec: Sendable {
    public static let I = AmrCodec()
    private init() {
        SwiftAmr_DecoderInit()
    }

    public func decode(_ input: Data, output: UnsafeMutableBufferPointer<Int16>) -> Int {
        input.withUnsafeBytes { inputBuffer in
            let ret = SwiftAmr_decode(
                inputBuffer.baseAddress, Int32(input.count), output.baseAddress, 0)
            return Int(ret)
        }
    }
}
