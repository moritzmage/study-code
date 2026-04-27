#include <iostream>
#include <cstdint>
#include <limits>

namespace validation {
    bool isAdult(u_int8_t age = 0) {
        if(age >= 18) {
            return true;
        }
        else {
            return false;
        }
    }

    bool isSenior(u_int8_t age = 0) {
        if(age >= 65) {
            return true;
        }
        else {
            return false;
        }
    }
}

int main() {
    int age_input;

    std::cout << "Please enter your age: "; // Eingabe überprüfen (u.a. ob nicht zu groß für uint8t); dann static cast zu uint8t

    std::cin >> age_input;
    
    // std::cout << age_input << "\n";

    if (validation::isSenior(age_input) == true) {
        std::cout << "You are " << age_input << " years old.\nThat means that you are a senior citizen.\n";
    }
    else if(validation::isAdult(age_input) == true) {
        std::cout << "You are " << age_input << " years old.\nThat means that you are an adult.\n";
    }
    else {
        std::cout << "You are " << age_input << " years old.\nThat means that you are still a kid or teenager.\n";
    }



    return 0;
}


// [strg] + [f5] to run & debug