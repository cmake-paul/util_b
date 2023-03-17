include(FetchContent)

FetchContent_Declare(
    Common
    GIT_REPOSITORY https://github.com/cmake-paul/common.git
    GIT_TAG main
)

FetchContent_MakeAvailable(Common)

add_library(UtilB)

add_subdirectory(include)
add_subdirectory(src)

target_link_libraries(
    UtilB
    PRIVATE
    CommonUmbrella
)
