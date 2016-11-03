//
//  constexpr.cpp
//  BasicCppEnvironment
//
//  Created by Anders Arnholm on 2016-11-02.
//
//

#include "gtest/gtest.h"

constexpr int factorial(int n)
{
    return n <= 1? 1 : (n * factorial(n - 1));
}

TEST(constexpression, recusrive)
{
    EXPECT_EQ(24, factorial(4));
}

class conststr {
    const char* p;
    std::size_t sz;
public:
    template<std::size_t N>
    constexpr conststr(const char(&a)[N]): p(a), sz(N - 1) {}
    constexpr char operator[](std::size_t n) const
    {
        return n < sz? p[n] : throw std::out_of_range("");
    }
    constexpr std::size_t size() const { return sz; }
};

constexpr std::size_t countlower(conststr s, std::size_t n = 0,
                                 std::size_t c = 0)
{
    return n == s.size()? c :
    'a' <= s[n] && s[n] <= 'z'? countlower(s, n + 1, c + 1) :
    countlower(s, n + 1, c);
}

TEST(constexpression, conststr)
{
    EXPECT_EQ(9, countlower("Hello, world!"));
}
