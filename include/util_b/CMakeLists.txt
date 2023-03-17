target_sources(
    UtilB
    PUBLIC
    "${CMAKE_CURRENT_LIST_DIR}/greet.h"
)

target_include_directories(
    UtilB
    PRIVATE
    "${CMAKE_CURRENT_LIST_DIR}"
)
