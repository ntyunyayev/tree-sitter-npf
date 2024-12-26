// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterNpf",
    products: [
        .library(name: "TreeSitterNpf", targets: ["TreeSitterNpf"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterNpf",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterNpfTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterNpf",
            ],
            path: "bindings/swift/TreeSitterNpfTests"
        )
    ],
    cLanguageStandard: .c11
)
