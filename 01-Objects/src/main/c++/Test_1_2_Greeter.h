//
// Created by balp on 2016-10-11.
//

#ifndef BASICCPPENVIRONMENT_TEST_1_2_GREETER_H
#define BASICCPPENVIRONMENT_TEST_1_2_GREETER_H

#include <string>

class Test_1_2_Greeter {
public:
    Test_1_2_Greeter(std::string name) : name(name) {}
    std::string greet() { return "Hello " + name + "!"; }
private:
    std::string name;
};


#endif //BASICCPPENVIRONMENT_TEST_1_2_GREETER_H
