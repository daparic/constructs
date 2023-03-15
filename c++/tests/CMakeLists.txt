# https://matgomes.com/integrate-google-test-into-cmake/
# include(FetchContent)
# FetchContent_Declare(
#     googletest
#     GIT_REPOSITORY https://github.com/google/googletest.git
#     GIT_TAG release-1.11.0
# )
# FetchContent_MakeAvailable(googletest)
# add_library(GMock::GMock INTERFACE IMPORTED)
# target_link_libraries(GMock::GMock INTERFACE gmock_main)

add_executable(main_test main_test.cpp)

target_link_libraries(main_test
    PRIVATE
    GMock::GMock
)

add_test(main_gtests main_test)
