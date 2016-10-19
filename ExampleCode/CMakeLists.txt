include_directories ( src/main/c++ )
add_library( hello
    src/main/c++/shapes.cxx
    src/main/c++/hello.cpp
    src/main/c++/hello.h
    )

add_executable ( hellotest src/test/c++/hellotest.cpp )
target_link_libraries( hellotest hello gtest gtest_main )

add_test(NAME hellotest COMMAND $<TARGET_FILE:hellotest> )
