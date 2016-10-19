//
//  scope.cpp
//  BasicCppEnvironment
//
//  Created by Anders Arnholm on 2016-10-19.
//
//

#include <stdio.h>
#include "gtest/gtest.h"

TEST(scope, local)
{
    int local = 0;
    EXPECT_EQ(0, local);
}

int function(int formal)
{
    return formal;
}

int global;
void set_global(int value)
{
    global = value;
}
