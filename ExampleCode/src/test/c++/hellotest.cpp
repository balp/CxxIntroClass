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
