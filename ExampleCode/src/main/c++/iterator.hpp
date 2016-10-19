//
//  interator.hpp
//  BasicCppEnvironment
//
//  Created by Anders Arnholm on 2016-10-19.
//
//

#ifndef interator_hpp
#define interator_hpp

#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <assert.h>

template<typename T>
class ptr_iterator
: public std::iterator<std::forward_iterator_tag, T>
{
    typedef ptr_iterator<T>  iterator;
    T* pos_;
public:
    ptr_iterator() : pos_(nullptr) {}
    ptr_iterator(T* v) : pos_(v) {}
    ~ptr_iterator() {}
    
    iterator  operator++(int) /* postfix */         { return pos_++; }
    iterator& operator++()    /* prefix */          { ++pos_; return *this; }
    T& operator* () const                    { return *pos_; }
    T*   operator->() const                    { return pos_; }
    iterator  operator+ (size_t v)   const { return pos_ + v; }
    bool      operator==(const iterator& rhs) const { return pos_ == rhs.pos_; }
    bool      operator!=(const iterator& rhs) const { return pos_ != rhs.pos_; }
};

template<typename T>
ptr_iterator<T> begin(T *val) { return ptr_iterator<T>(val); }


template<typename T, typename Tsize>
ptr_iterator<T> end(T *val, Tsize size) { return ptr_iterator<T>(val) + size; }

#endif /* interator_hpp */
