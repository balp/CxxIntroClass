//
//  value.cpp
//  BasicCppEnvironment
//
//  Created by Anders Arnholm on 2016-11-02.
//
//
#include <memory>
#include <gtest/gtest.h>
static int static_i = 9;


int add(int i)
{
    
    ++i;
    return i;
}


TEST(callby, value)
{
    int i = 1;
    
    EXPECT_EQ(2, add(i));
    EXPECT_EQ(1, i);
    
}

int add_ref(int& i)
{
    ++i;
    return i+1;
}
TEST(callby, reference)
{
    int i = 1;
    int& j = i;
    EXPECT_EQ(3, add_ref(j));
    EXPECT_EQ(2, i);
    
}

int add_ptr(int* i)
{
    ++(*i);
    return (*i)+1;
}

TEST(ptr, one)
{
    int i;
    int* ptr_i = &i;
    
    EXPECT_EQ(ptr_i, &i);
    EXPECT_EQ(3, add_ptr(ptr_i));
    EXPECT_EQ(2, i);
    EXPECT_EQ(9 , static_i);
    
}

class object {
public:
    object() {}
    ~object() {};
    int get() const {
        return 1;
    }
};
TEST(dynmemory, new_)
{
    std::shared_ptr<object> sptr(new object());
    std::shared_ptr<object> sptr2(sptr);
    EXPECT_EQ(1, sptr->get());
    EXPECT_EQ(1, (*sptr).get());
    
    
    std::unique_ptr<object> optr(new object());
    std::unique_ptr<object> optr2(std::move(optr));
    EXPECT_NE(nullptr, optr);
    // delete optr;
}
