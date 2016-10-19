#include <string>
#include "fizzbuzz.h"

namespace {
    class FizzBuzz {
    public:
        static std::string fizzbuzz(int number) {
            return std::to_string(number);
        }
    };
}

std::string fizzbuzz(int number)
{
    return FizzBuzz::fizzbuzz(number);
}
