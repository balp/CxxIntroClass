//
//  collections.cpp
//  BasicCppEnvironment
//
//  Created by Anders Arnholm on 2016-10-25.
//
//

#include "gtest/gtest.h"

#include <array>
#include <vector>
#include <deque>

TEST(array, arrayexample) // C++11
{
    std::array<int, 5> int_array = {{1,2,3,4,5}};
    EXPECT_EQ(5, int_array.size());
    EXPECT_EQ(5, int_array[4]);
    std::array<int, 5> int_array2 = {{1,2,3}};
    EXPECT_EQ(5, int_array2.size());
    EXPECT_EQ(0, int_array2[4]);
    //EXPECT_EQ(0, int_array2[5]); // No bounds checking!!!
    //EXPECT_EQ(0, int_array2.at(5)); // Out of bound error
    EXPECT_THROW(int_array2.at(5), std::out_of_range);
    
    std::array<std::array<int, 5>, 2> int_array3
        = {{{{1,2,3,4,5}}, {{1,2,3,4,5}}}};
    EXPECT_EQ(2, int_array3.size());
    int_array3[1][4];
}

TEST(vector, vectorexample)
{
    std::vector<int> int_vector = {{1,2,3,4,5}};
    EXPECT_EQ(5, int_vector.size());
    EXPECT_EQ(5, int_vector[4]);
    std::vector<int> int_vector2 = {{1,2,3}};
    EXPECT_EQ(3, int_vector2.size());
    EXPECT_EQ(0, int_vector2[4]);
    EXPECT_EQ(0, int_vector2[5]); // No bounds checking!!!
    //EXPECT_EQ(0, int_array2.at(5)); // Out of bound error
    EXPECT_THROW(int_vector2.at(5), std::out_of_range);
    int_vector2.push_back(4);
    int_vector2.push_back(5);
    EXPECT_EQ(5, int_vector2.size());
}


TEST(deque, deque)
{
    std::deque<std::string> stringdeque = {{ "one", "two", "three" }};
    
    EXPECT_EQ("one", stringdeque.front());
    stringdeque.pop_front();
    EXPECT_EQ("two", stringdeque.front());
    stringdeque.pop_front();
    stringdeque.push_front("extra");
    EXPECT_EQ("extra", stringdeque.front());
}

TEST(deque, loop)
{
    std::deque<std::string> stringdeque = {{ "one", "two", "three" }};
    for(auto value : stringdeque) {
        EXPECT_EQ(value, stringdeque.front());
        stringdeque.pop_front();
    }
}


