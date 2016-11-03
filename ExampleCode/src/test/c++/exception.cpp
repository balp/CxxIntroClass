//
//  exception.cpp
//  BasicCppEnvironment
//
//  Created by Anders Arnholm on 2016-11-02.
//
//
#include <exception>
#include <gtest/gtest.h>

namespace {
    class myException : public std::exception {
        virtual const char* what() const throw()
        {
            return "My exception happened";
        }
    };
    
    class A {
    public:
        A() {
            char str[] = "";
            throw std::out_of_range(str);
        }
    };
}

TEST(myexception, raise)
{
    EXPECT_THROW(throw myException(), myException);
    
    try {
        throw std::out_of_range("");
    } catch (std::out_of_range ex) {
        
        
    }
    A a;
    
}
