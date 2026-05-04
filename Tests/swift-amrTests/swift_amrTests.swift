import Testing
import Foundation
@testable import SwiftAmr

@Test func example() async throws {
    // Write your test here and use APIs like `#expect(...)` to check expected conditions.
    // Swift Testing Documentation
    // https://developer.apple.com/documentation/testing
    Task { @MainActor in
        let input = Data()
        let output = UnsafeMutableBufferPointer<Int16>.allocate(capacity: 1280)
        let ret = AmrCodec.I.decode(input, output: output)
        #expect(ret == 0)
    }
}
