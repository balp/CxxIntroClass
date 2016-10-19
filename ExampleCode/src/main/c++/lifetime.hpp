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


#ifndef lifetime_hpp
#define lifetime_hpp
#include <iostream>

class LifeTimeA {
public:
    LifeTimeA() { std::cout << "LifeTimeA" << std::endl; }
    ~LifeTimeA() { std::cout << "~LifeTimeA" << std::endl; }
};

class LifeTimeB : public LifeTimeA {
public:
    LifeTimeB() { std::cout << "LifeTimeB" << std::endl; }
    ~LifeTimeB() { std::cout << "~LifeTimeB" << std::endl; }
};

class LifeTimeC : public LifeTimeA {
public:
    LifeTimeC() { std::cout << "LifeTimeC" << std::endl; }
    ~LifeTimeC() { std::cout << "~LifeTimeC" << std::endl; }
};


class PollyTimeA {
public:
    PollyTimeA() { std::cout << "PollyTimeA" << std::endl; }
    virtual ~PollyTimeA() { std::cout << "~PollyTimeA" << std::endl; }
};

class PollyTimeB : public PollyTimeA {
public:
    PollyTimeB() { std::cout << "PollyTimeB" << std::endl; }
    virtual ~PollyTimeB() { std::cout << "~PollyTimeB" << std::endl; }
};

class PollyTimeC : public PollyTimeA {
public:
    PollyTimeC() { std::cout << "PollyTimeC" << std::endl; }
    virtual ~PollyTimeC() { std::cout << "~PollyTimeC" << std::endl; }
};




#endif /* lifetime_hpp */
