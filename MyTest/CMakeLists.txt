cmake_minimum_required(VERSION 3.11)
set(CMAKE_CXX_STANDARD 14)

project(ExampleGTest LANGUAGES CXX)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
FetchContent_MakeAvailable(googletest)

add_executable( ${PROJECT_NAME} src/MyMathTestFixture.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include)

target_link_libraries(${PROJECT_NAME} sub::MyMathLibrary)
target_link_libraries(${PROJECT_NAME} gtest_main gmock_main)


include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME})