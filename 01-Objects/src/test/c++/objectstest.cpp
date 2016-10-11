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

#include "Test_1_1_Greeter.h"
#include "Test_1_2_Greeter.h"

#include "gtest/gtest.h"
using namespace std;

/**
 * 1.1: Implement a class 'Test_1_1_Object', with a public method 'greet'
 *      that returns a the string 'Hello Name!'
 */

TEST(Objects, SimpleObject)
{
    const string expected = "Hello Name!";
    Test_1_1_Greeter greeter;
    EXPECT_EQ(expected, greeter.greet());

}

/**
 * 1.2: Implement a class Test_1_2_Greeter with a constructor taking a string as
 *      argument and returning the string "Hello <argument>!" where <argument> is
 *      replaces by the string sent to the constructor.
 */

TEST(Objects, T1_2_Greeter)
{
    const string expected = "Hello Balp!";
    Test_1_2_Greeter greeter("Balp");
    EXPECT_EQ(expected, greeter.greet());

}