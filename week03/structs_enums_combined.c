////////////////////////////////////////////
///                 STRUCTS              ///
////////////////////////////////////////////

#include <stdio.h>

// enum data type
enum opal_card_type {
    ADULT,
    STUDENT,
    CONCESSION,
};

// STEP 1: DEFINITION
// Example struct of a person with 3 fields
struct person {
    int shoe_size;
    double height;
    char first_name_initial;
    enum opal_card_type card;
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
    person1.shoe_size = 100;
    person1.height = 160;
    person1.first_name_initial = 'p';
    person1.card = STUDENT;

    // Print out values for each person
    printf("%d %.2lf %c", person1.shoe_size, person1.height, person1.first_name_initial);
    
}
