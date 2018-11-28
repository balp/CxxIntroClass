//
//  algoritms.cpp
//  BasicCppEnvironment
//
//  Created by Anders Arnholm on 2016-10-26.
//
//

#include <algorithm>
#include <numeric>
#include <vector>
#include <gtest/gtest.h>



TEST(vector, accumulate)
{
    std::vector<int> int_vector = {1,2,3,4,5,6,7,8,9,10};
    int sum = std::accumulate(int_vector.begin(),
                            int_vector.end(),
                              1,
                            [](int &a, int &b){return a+b;}
                              );
    EXPECT_EQ(56, sum);
}

TEST(vector, accumulate_newloop)
{
    std::vector<int> int_vector = {1,2,3,4,5,6,7,8,9,10};
    int sum2 = 0;
    for( auto n : int_vector) {
        sum2 += n;
    }
    EXPECT_EQ(55, sum2);
}

TEST(vector, accumulate_oldloop)
{
    std::vector<int> int_vector = {1,2,3,4,5,6,7,8,9,10};
    int sum3 = 0;
    for( auto iter = int_vector.begin();
        iter != int_vector.end();
        ++iter) {
        sum3 += *iter;
    }
    EXPECT_EQ(55, sum3);
    
    
}
