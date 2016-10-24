//
//  Templates.hpp
//  BasicCppEnvironment
//
//  Created by Anders Arnholm on 2016-10-23.
//
//

#ifndef Templates_hpp
#define Templates_hpp
#include <vector>

namespace Templates {
    template <typename T>
    T min(std::vector<T> input) {
        T minvalue = input[0];
        for( T t : input) {
            if ( t < minvalue ) {
                minvalue = t;
            }
        }
        return minvalue;
    }
    
    template <class T>
    class Stack {
    private:
        std::vector<T> elems;
    public:
        void push(T const&);
        void pop();
        T top() const;
        bool empty() const{
            return elems.empty();
        } 
    };
    
    template <class T>
    void Stack<T>::push (T const& elem)
    {
        // append copy of passed element
        elems.push_back(elem);
    }
    
    template <class T>
    void Stack<T>::pop ()
    {
        if (elems.empty()) {
            throw std::out_of_range("Stack<>::pop(): empty stack");
        }
        // remove last element
        elems.pop_back();
    }
    
    template <class T>
    T Stack<T>::top () const
    {
        if (elems.empty()) {
            throw std::out_of_range("Stack<>::top(): empty stack");
        }
        // return copy of last element 
        return elems.back();      
    }
}


#endif /* Templates_hpp */
