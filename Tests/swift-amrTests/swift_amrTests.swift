import Testing
import Foundation
@testable import SwiftAmr

@Test func example() async throws {
    let input = Data()
    let output = UnsafeMutableBufferPointer<Int16>.allocate(capacity: 1280)
    let ret = AmrCodec.I.decode(input, output: output)
    #expect(ret == 0)
}
