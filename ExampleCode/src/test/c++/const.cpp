//
//  const.cpp
//  BasicCppEnvironment
//
//  Created by Anders Arnholm on 2016-11-01.
//
//

#include <gtest/gtest.h>

namespace  {
    const int int_func() {
        return 0;
    }
    
    class A {
    public:
        A() : a(0) {}
        int a;
    };
    
    class object {
    private:
        const int const_value = 1234;
        int _value;
        A _a;
        
    public:
        object(int value) : _value(value) {}
        const A& get_a() const {
            return _a;
        }
        
        A& get_a() {
            return _a;
        }
        
        
        int get() const
        {
            
            return _value * const_value;
        }
        void set(int value)
        {
            _value = value;
        }
    };
}


TEST(constants, variable)
{
    const int one = 1;
    EXPECT_EQ(1, one);
    
    int const two = 2;
    EXPECT_EQ(2, two);
    
    
    int three = int_func();
    EXPECT_EQ(3, three);
}


TEST(constants, classobjects)
{
    object one(1);
    const object two(2);
    A& mya = one.get_a();
    EXPECT_EQ(1234, one.get());
    EXPECT_EQ(2468, two.get());
    one.set(2);
    EXPECT_EQ(2468, one.get());
    //two.set(1);
    mya.a = 2;
    EXPECT_EQ(2, mya.a);
    const A& mya2 = two.get_a();
    EXPECT_EQ(2, mya2.a);
}
