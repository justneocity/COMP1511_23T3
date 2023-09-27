////////////////////////////////////////////
///                 STRUCTS              ///
////////////////////////////////////////////

#include <stdio.h>

// STEP 1: DEFINITION

// Example struct of a person with 3 fields
struct person {
    int shoe_size;
    double height;
    char first_name_initial;
};

int main(void) {

    // STEP 2: DECLARATION
    struct person person1;
    // struct person person2;
    /*      
       ⬇           ⬇
       type        name given to variabl
    (of variable)*/  

    // STEP 3: INITIALISATION
    person1.shoe_size = 10;
    person1.height = 160;
    person1.first_name_initial = 'p';

    // create another person variable of type struct person
    struct person person2;

    person2.shoe_size = 11;
    person2.height = 180.0;
    person2.first_name_initial = 't';

    // Print out values for each person
    printf("person1: %d %.2lf %c\n", person1.shoe_size, person1.height, person1.first_name_initial);
    printf("person2: %d %.2lf %c\n", person2.shoe_size, person2.height, person2.first_name_initial);
    
}
