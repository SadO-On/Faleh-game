// swift-tools-version: 5.9
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "Faleh-game-package",
    platforms: [
        .iOS(.v17),
],
    products: [
        // Products define the executables and libraries a package produces, making them visible to other packages.
        .library(
            name: "Faleh-game-package",
            type: .dynamic,
            targets: ["Faleh-game-package"]),
    ],
    dependencies: [
        .package(url: "https://github.com/airbnb/lottie-spm.git", from: "4.4.1"),
        .package(url: "https://github.com/canopas/UIPilot.git", .upToNextMajor(from: "2.0.2"))
    ],
    targets: [
        // Targets are the basic building blocks of a package, defining a module or a test suite.
        // Targets can depend on other targets in this package and products from dependencies.
        .target(
            name: "Faleh-game-package",
        dependencies: [
            .target(name: "Shared"),
            .product(name: "Lottie", package: "lottie-spm"),
            .byName(name: "UIPilot")
        ]
        ),
        
        .binaryTarget(name: "Shared", path: "./Sources/shared.xcframework")
    ]
)

