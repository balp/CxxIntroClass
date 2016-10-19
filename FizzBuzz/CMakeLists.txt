include_directories ( src/main/c++ )
add_library( fizzbuzz
    src/main/c++/fizzbuzz.cpp
    src/main/c++/fizzbuzz.h
    )

add_executable ( fizzbuzztest src/test/c++/fizzbuzztest.cpp )
target_link_libraries( fizzbuzztest fizzbuzz gtest gtest_main )

add_test(NAME fizzbuzztest COMMAND $<TARGET_FILE:fizzbuzztest> )
