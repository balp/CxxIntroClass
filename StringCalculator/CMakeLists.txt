include_directories ( src/main/c++ )
add_library( stringcalculator
    src/main/c++/stringcalculator.cpp
    src/main/c++/stringcalculator.hpp
    )

add_executable ( stringcalculatortest src/test/c++/stringcalculatortest.cpp )
target_link_libraries( stringcalculatortest stringcalculator gtest gtest_main )

add_test(NAME stringcalculatortest COMMAND $<TARGET_FILE:stringcalculatortest> )
