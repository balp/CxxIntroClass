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
    std::vector<int> int_vector = {1,2,3,4,5,6,7,8,9,0};
    int sum = std::accumulate(int_vector.begin(),
                            int_vector.end(),
                              0,
                            [](int &a, int &b){return a+b;});
    EXPECT_EQ(45, sum);
    
}
