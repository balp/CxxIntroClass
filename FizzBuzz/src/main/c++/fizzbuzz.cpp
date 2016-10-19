#include <string>
#include "fizzbuzz.h"

namespace {
    class FizzBuzz {
    public:
        static std::string fizzbuzz(int number) {
            if ((number % 5) == 0 && (number % 3) == 0) {
                return "fizzbuzz";
            }
            if ((number % 5) == 0) {
                return "buzz";
            }
            if ((number % 3) == 0) {
                return "fizz";
            }
            return std::to_string(number);
        }
    };
}

std::string fizzbuzz(int number)
{
    return FizzBuzz::fizzbuzz(number);
}
