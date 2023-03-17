target_sources(
    UtilA
    PUBLIC
    "${CMAKE_CURRENT_LIST_DIR}/greet.h"
)

target_include_directories(
    UtilA
    PRIVATE
    "${CMAKE_CURRENT_LIST_DIR}"
)
