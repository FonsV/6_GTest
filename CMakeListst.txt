cmake_minimum_required(VERSION 3.10)
project(GTestExample)

# Enable testing and find Google Test
enable_testing()
find_package(GTest REQUIRED)

# Create the executable
add_executable(GTestExample GTest.cpp)

# Link GTest and pthreads
target_link_libraries(GTestExample GTest::GTest GTest::Main pthread)

# Register the test
add_test(NAME RunAllTests COMMAND GTestExample)
