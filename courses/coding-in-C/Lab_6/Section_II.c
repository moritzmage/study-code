#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct car {
    float curr_fuel_level;
    float max_fuel_level;
};

int refuel(struct car* temp_car, float added_fuel);
int print_fuel_level(struct car temp_car);

//----------------------------------------------------------------------------------------------

int main(void) {
    struct car example_car;
    example_car.max_fuel_level = 80;
    example_car.curr_fuel_level = 5.7;

    print_fuel_level(example_car);
    refuel(&example_car, 35);
    print_fuel_level(example_car);
    refuel(&example_car, 55);
    print_fuel_level(example_car);

    return 0;
}

//----------------------------------------------------------------------------------------------



//----------------------------------------------------------------------------------------------

int refuel(struct car *temp_car, float added_fuel) {
    if(((*temp_car).curr_fuel_level + added_fuel) < (*temp_car).max_fuel_level) {
        (*temp_car).curr_fuel_level += added_fuel;
    }
    else {
        (*temp_car).curr_fuel_level = (*temp_car).max_fuel_level;
    }

    return 0;
}

int print_fuel_level(struct car temp_car) {
    printf("%.1fl / %.0fl -> %.0f%%\n[", temp_car.curr_fuel_level, temp_car.max_fuel_level, (temp_car.curr_fuel_level/temp_car.max_fuel_level)*100);
    for (int i = 0; i < 16; i++) {
        if((((temp_car.curr_fuel_level/temp_car.max_fuel_level)*16)/i) >= 1) {
            printf("O");
        }
        else {
            printf(" ");
        }
    }
    printf("]\n\n");


    return 0;
}