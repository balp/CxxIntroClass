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

#ifndef STRINGCALCULATOR_H
#define STRINGCALCULATOR_H

#include <string>
#include <vector>
#include <numeric>

// using namespace std;

class StringCalculator {
public:
    int calc(std::string input) {
        if (input.empty()) {
            return 0;
        }
        std::vector<std::string> strings = spit_string(input);
        int sum = 0;
        for ( auto number : strings) {
            sum += std::stoi(number);
        }
        return sum;
    }
private:
    std::vector<std::string> spit_string(std::string input) {
        std::vector<std::string> result;
        std::string::size_type prev_pos = 0, pos = 0;
        while ((pos = input.find(',', pos)) != std::string::npos) {
            std::string number(input.substr(prev_pos, pos-prev_pos));
            result.push_back(number);
            prev_pos = ++pos;
        }
        result.push_back(input.substr(prev_pos, pos-prev_pos));
        return result;
    }
};

#endif // STRINGCALCULATOR_H
