include_directories ( src/main/c++ )
add_library( hello
    src/main/c++/shapes.cpp
    src/main/c++/hello.cpp
    src/main/c++/hello.hpp
    src/main/c++/iterator.cpp
    src/main/c++/iterator.hpp
    src/main/c++/lifetime.cpp
    src/main/c++/lifetime.hpp
    src/main/c++/Templates.cpp
    src/main/c++/Templates.hpp
)

add_executable ( hellotest
    src/test/c++/hellotest.cpp
    src/test/c++/scope.cpp
    src/test/c++/collections.cpp
    src/test/c++/algoritms.cpp
)
target_link_libraries( hellotest hello gtest gtest_main )

add_test(NAME hellotest COMMAND $<TARGET_FILE:hellotest> )
