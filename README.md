# `util_b`

A small library mimicking a utility library.

If the above does not ring any bells, check out [CMake PAUL's organization page](https://github.com/cmake-paul) first.

## Usage

Include this repository via

```cmake
include(FetchContent)

FetchContent_Declare(
    UtilB
    GIT_REPOSITORY https://github.com/cmake-paul/util_b.git
    GIT_TAG main
)

FetchContent_MakeAvailable(UtilB)
```

Then link against the target `UtilB`.
