project(MyLibrary)
add_library(${PROJECT_NAME} src/MyMath.cpp)
add_library(sub::MyMathLibrary ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include)