/*
 * Copyright (c) 2016 Anders Arnholm <anders.arnholm@hiq.se>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#include <string>

#include "hello.hpp"
#include "iterator.hpp"
#include "lifetime.hpp"
#include "Templates.hpp"
#include "gtest/gtest.h"

double area();

using namespace std;

TEST(BasicTest, ReturnsHelloWorld)
{
  const string expected = "Hello World!";
  const Hello hello;
  EXPECT_EQ(expected, hello.greeting());
}

TEST(AreaTest, simple)
{
    std::string a = "a";
    std::string b = "b";
    std::string ab = a + b;
    
    EXPECT_EQ(24.84, area());
}

int iterator_sum()
{
    const static size_t size = 10;
    int r = 0;
    uint8_t *data = new uint8_t[size];
    ptr_iterator<uint8_t> first(data);
    ptr_iterator<uint8_t> last(first + size);
    for( ptr_iterator<uint8_t> p = first
        ; p != last
        ; ++p) {
        auto t = *p;
        r += t;
        
    }
    return r;
}


TEST(lifetime, nonevirtual) {
    {
        LifeTimeA *p = new LifeTimeA();
        delete p;
    }
    {
        LifeTimeA *p = new LifeTimeB();
        delete p;
    }
    {
        LifeTimeB *p = new LifeTimeB();
        delete p;
    }
    {
        LifeTimeA *p = new LifeTimeC();
        delete p;
    }
    {
        LifeTimeC *p = new LifeTimeC();
        delete p;
    }
}

TEST(lifetime, polly) {
    {
        PollyTimeA *p = new PollyTimeA();
        delete p;
    }
    {
        PollyTimeA *p = new PollyTimeB();
        delete p;
    }
    {
        PollyTimeB *p = new PollyTimeB();
        delete p;
    }
    {
        PollyTimeA *p = new PollyTimeC();
        delete p;
    }
    {
        PollyTimeC *p = new PollyTimeC();
        delete p;
    }
}

TEST(lifetime, one) {
    LifeTimeA a;
    LifeTimeA* p = new LifeTimeA();
    delete p;
}

TEST(lifetime, loop) {
    for (int i = 0; i < 10 ; ++i) {
        LifeTimeA a;
    }
}

TEST(vector_template, intvector)
{
    std::vector<int> v = {3,2,1};
    EXPECT_EQ(1, Templates::min(v));
}

TEST(stack_template, top)
{
    Templates::Stack<int> intStack;
    intStack.push(1);
    EXPECT_EQ(1, intStack.top());
}

TEST(stack_template, pop_empty_stack)
{
    Templates::Stack<int> intStack;
    intStack.push(1);
    EXPECT_EQ(1, intStack.top());
    intStack.pop();
    ASSERT_THROW(intStack.top(), std::out_of_range);
}

TEST(stack_template, is_stack)
{
    Templates::Stack<int> intStack;
    intStack.push(1);
    intStack.push(2);
    EXPECT_EQ(2, intStack.top());
    intStack.pop();
    EXPECT_EQ(1, intStack.top());
    intStack.pop();
    ASSERT_THROW(intStack.top(), std::out_of_range);
}

TEST(is_void, voidisvoid)
{
    EXPECT_TRUE(Templates::is_void<void>::value);
}

TEST(is_void, intisntvoid)
{
    EXPECT_FALSE(Templates::is_void<int64_t>::value);
}


