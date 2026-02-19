#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*-------------------------------------------------------------------------------*/

/*
Section I:

    Types of following expressions:
    - x     - integer value
    - p     - adress of p (integer pointer)
    - *p    - integer value of x
    - pp    - adress of pp (integer pointer)
    - *pp   - adress of p (integer pointer)
    - **pp  - integer value of x 

*/

/*
int main(void) {
    int x = 10;
    int *p = &x;
    int **pp = &p;

    printf("Section I:\n\n\tInitial print:\n\t- x = %d\n\t", x);
    printf("- x via p = %d\n\t", *p);
    printf("- x via pp = %d\n\t", **pp);

    **pp = 42;

    printf("\n\tAfter changing via pp:\n\t- x = %d\n\t", x);
    printf("- x via p = %d\n\t", *p);
    printf("- x via pp = %d\n\n", **pp);

    return 0;
}
*/

/*-------------------------------------------------------------------------------*/

/*
Section II:

    Commands to execute:
    - gcc particle.c -o particle      -> compiling into executable file
    - ./particle <input>              -> executing with input   

*/


int main(int argc, char **argv) {
    
    printf("\n\n");

    for(int i=1; i<argc; i++) {
        printf("Argument %d at address '%p' has content: ", i, argv[i]);
        printf("%s", argv[i]);
        int length = strlen(argv[i])-1;
        printf(" (length: %d)\n", length);
    }

    printf("\n\n");

    return 0;
}


/*-------------------------------------------------------------------------------*/

//Section III:

/*
int main(void) {
    srand(time(NULL));

    int particles[10] = {0};
    int temp_particles[10] = {0};
    int *ptr = &particles[0];
    int *temp_ptr = & temp_particles[0];

    int amount_particles = 3;
    particles[2] = 1;
    particles[4] = 1;
    particles[6] = 1;

    int cycles = 0;

    printf("\n-------------------\nCycle: %d ", cycles);

    for(int i=0; i<10; i++) {  // printing for time 0
        printf("%d", *(ptr+i));
    }

    printf("\n-------------------\n");

    while (amount_particles > 1)
    {
        cycles++;
        for (int i = 1; i < 9; i++) // runs through array except borders
        {
            if((*(ptr+i))==1) {
                (*(ptr+i))--;
                if((rand()%2) == 1) {
                    (*(temp_ptr+i+1))++;
                }
                else {
                    (*(temp_ptr+i-1))++;
                }
            }
        }

        if(*ptr == 1) { // lower array border
            (*ptr)--;
            (*(temp_ptr+1))++;
        }

        if((*(ptr+9)) == 1) { // upper array border
            (*(ptr+9))--;
            (*(temp_ptr+8))++;
        }

        for(int i=0; i<10; i++) { // delete conflicting particles
            if((*(temp_ptr+i)) == 2) {
                *(temp_ptr+i) = 0;
            }
        }
        
        printf("Cycle: %d ", cycles);

        for (int i = 0; i < 10; i++) { // copy temp into particles; clear temp; print particles
            *(ptr + i) = *(temp_ptr + i);
            *(temp_ptr + i) = 0;
            
            printf("%d", *(ptr+i));
        }

        printf("\n-------------------\n");

        amount_particles =  0;
        for(int i = 0; i < 10; i++) { // calculates amount of particles left
            if(*(ptr + i) == 1) {
                amount_particles++;
            }
        }
    }

    printf("Finished with one particle left after %d cycles...\n", cycles);

    return 0;
}
*/