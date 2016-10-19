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

#include "fizzbuzz.h"
#include "gtest/gtest.h"

TEST(fizzbuzz, test_one)
{
    EXPECT_EQ("1", fizzbuzz(1));
}

TEST(fizzbuzz, test_two)
{
    EXPECT_EQ("2", fizzbuzz(2));
}

TEST(fizzbuzz, test_tree)
{
    EXPECT_EQ("fizz", fizzbuzz(3));
}

TEST(fizzbuzz, test_five)
{
    EXPECT_EQ("buzz", fizzbuzz(5));
}

TEST(fizzbuzz, test_fithteen)
{
    EXPECT_EQ("fizzbuzz", fizzbuzz(15));
}

