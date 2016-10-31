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

#include "stringcalculator.hpp"

#include <gtest/gtest.h>

TEST(stringcalc, emptystring)
{
    StringCalculator calc;
    EXPECT_EQ(0, calc.calc(""));
}

TEST(stringcalc, one)
{
    StringCalculator calc;
    EXPECT_EQ(1, calc.calc("1"));
}


TEST(stringcalc, calc_1_1_2)
{
    StringCalculator calc;
    EXPECT_EQ(2, calc.calc("1,1"));
}
