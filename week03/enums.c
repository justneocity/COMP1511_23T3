#include <stdio.h>

// STEP 1: DEFINITION
enum opal_card_type {
    ADULT,
    STUDENT,
    CONCESSION,
};

enum day_of_week {
    MONDAY, // 0
    TUESDAY, // 1
    WEDNESDAY = 4, // 4
    THURSDAY, // 5
};

/* extra case if you want to resue STUDENT in another enum
enum uni_member {
    STUDENT
}*/

/*
this is equivalent to the enum above
#define ADULT 0
#define STUDENT 1 
#define CONCESSION 2
*/

// What if we want to start enumeration not at 0?

int main(void) {

    // STEP 2: DECLARATION
    int i;
    enum opal_card_type card1;
    enum opal_card_type card2;
    /*               
        ⬇                 ⬇
    type or variable     name given to variable */

    // STEP 3: INITIALISATION
    card1 = STUDENT;
    card2 = CONCESSION;

    // We might want to use enums.. how?
    // Let's say for different card types, we charge different amount:
    // e.g
    if (card1 == STUDENT) {
        // charge $2
    } else if (card1 == ADULT) {
        // charge $4
    }
    
}