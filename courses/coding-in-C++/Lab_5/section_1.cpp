#include <iostream>
#include <cstdint>
#include <limits>


/*------------------------------- templates ----------------------------------*/


template <typename T> // reference used to generealize code/functions
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;

    return ;
}

template <typename T, int U>
void array_print(T (&array)[U]) {
    for(int i=0; i<U; i++) {
        std::cout << array[i] << "\n";
    }

    return;
}

template <typename T, int U>
T array_smallest(T (&array)[U]) {
    T temp_smallest = array[0];
    for(int i=1; i<U; i++) {
        if(array[i] < temp_smallest) {
            temp_smallest = array[i];
        }
    }
    return temp_smallest;
}

/*
template <typename T, typename U>
void print_metadata(string label1, T value1, string label2, U value2) {

    return;
}
*/

/*-------------------------------- main --------------------------------------*/

int main() {
    int array[] = {2, 1, 3, 4, 5, 6, 7};

    std::cout << "smallest value in array:\t" << array_smallest(array) << "\n";
    array_print(array);

    return 0;
}