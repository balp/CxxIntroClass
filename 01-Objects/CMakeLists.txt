include_directories ( src/main/c++ )

add_executable ( objectstest src/test/c++/objectstest.cpp )
target_link_libraries( objectstest gtest gtest_main )

add_test(NAME hellotest COMMAND $<TARGET_FILE:hellotest> )