#include <string>
#include "fizzbuzz.h"

inline static bool diviable_by_five(int number) {
    return ( number % 5 ) == 0;
}

inline static bool diviable_by_three(int number) {
    return ( number % 3 ) == 0;
}


std::string fizzbuzz(int number)
{
    if( diviable_by_five(number)
       && diviable_by_three(number)) {
        return "fizzbuzz";
    }
    if(diviable_by_five(number)) {
        return "buzz";
    }
    if(diviable_by_three(number)) {
        return "fizz";
    }
    return std::to_string(number);
}
