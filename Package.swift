import PackageDescription

let package = Package(
    name: "swift-and-c",
    targets: [
      Target(name: "module3", dependencies: []),
      Target(name: "module2", dependencies: []),
      Target(name: "module1", dependencies: [
        .Target(name: "module2"),
        .Target(name: "module3")
      ])
  ]
)
