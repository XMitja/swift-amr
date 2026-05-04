// swift-tools-version: 6.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "SwiftAmr",
    platforms: [
        .iOS(.v26),
    ],
    products: [
        .library(
            name: "CSwiftAmr",
            targets: ["CSwiftAmr"]
        ),
        .library(
            name: "SwiftAmr",
            targets: ["SwiftAmr", "CSwiftAmr"]
        ),
    ],
	dependencies: [],
    targets: [
        .target(
            name: "CSwiftAmr",
            dependencies: [],
            exclude: [],
            sources: [
                "amrdecode.c",
				"interf_dec.c",
				"sp_dec.c",
			],
            publicHeadersPath: "include",
		),
        .target(
            name: "SwiftAmr",
			dependencies: ["CSwiftAmr"],
        ),
        .testTarget(
            name: "SwiftAmrTests",
            dependencies: ["SwiftAmr"]
        ),
    ],
    swiftLanguageModes: [.v6]
)
