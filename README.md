# Bond via vcpkg

This repository contains a Visual Studio 2017 project that consumes
[Bond][bond], "a cross-platform framework for working with schematized
data", via the [vcpkg][vcpkg], a tool to "get C and C++ libraries on
Windows".

It's mostly used to validate that the Bond port in vcpkg is working
correctly.

# Getting Started

1. Ensure that Visual Studio 2017 is installed.
1. [Acquire and build][vcpkg-build] vcpkg.
1. Install the Bond port. In the vcpkg directory, run `.\vcpkg install bond`
1. Create the [vcpkg integration NuGet package][vcpkg-integrate]. In the
   vcpkg directory, run`.\vcpkg integrate project`
1. Clone this repository: `git clone --recursive
   https://github.com/chwarr/bond-via-vcpkg.git`
1. Open the `bond-via-vcpkg.sln`solution in this repository.
1. It's likely that the vcpkg NuGet package will have a different name and
   path from the one included in this project. Remove the
   `vcpkg.S.src.vcpkg` package and add the one created in step 4.
1. Build and enjoy!

# Known Issues

The vcpkg NuGet integration package is used. This has a different name and
path on different machines, so it may need to be adjusted. See the
[Getting Started](#getting-started) steps for details.

[bond]: https://github.com/Microsoft/bond
[vcpkg]: https://github.com/Microsoft/vcpkg
[vcpkg-build]: https://github.com/Microsoft/vcpkg/blob/master/README.md#quick-start
[vcpkg-integrate]: https://github.com/Microsoft/vcpkg/blob/master/docs/users/integration.md#linking-nuget-file
