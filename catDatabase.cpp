///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.cpp
/// @version 1.0
///
/// @author  Aksel Sloan <@aksel@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "catDatabase.h"
#include "config.h"

//#define DEBUG


//instantiation of Cats struct
struct Cats cats[ MAX_CATS ];

int numCats = 0;

//validation functions
bool validateName ( const char inputCatName[] ){
    //add check for null
    if ( strlen ( inputCatName ) < 1 ){
        fprintf( stderr, "%s: error 421.5, cats must have a name!\n", PROGRAM_NAME );
        return false;
    }
    if ( strlen ( inputCatName ) >= MAX_NAME_LEN ){
        fprintf( stderr, "%s: error 422.5, cat name is too long!\n", PROGRAM_NAME );
        return false;
    }

    int j;
    for ( j = 0 ; j < MAX_CATS ; j++ ){
        if ( strcmp ( cats[ j ].name, inputCatName ) == 0 ){
            fprintf( stderr, "%s: error 423.5, cats must have a unique name!\n", PROGRAM_NAME );
            return false;
        }
    }
    return true;
}


bool validateWeight ( const float inputCatWeight ){
    if ( inputCatWeight <= 0 ){
        fprintf( stderr, "%s: error 424.5, cat weight must be > 0!\n", PROGRAM_NAME  );
        return false;
    }
    return true;
}

bool validateIndex ( const int currentCat ){
    if ( currentCat >= MAX_CATS  || currentCat < 0 ){
        fprintf( stderr, "%s: error 430, cat out of index range!\n", PROGRAM_NAME  );
        return false;
    }
    return true;
}

bool validateNumCats ( ){
    if ( numCats >= MAX_CATS ){
        fprintf( stderr,  "%s: error 420.5, too many cats!\n", PROGRAM_NAME  );
        return false;
    }
    return true;
}

bool validateCat (   const char inputCatName[],
                     const float inputCatWeight ){
    //number of cats validation
    if ( numCats >= MAX_CATS ){
        fprintf( stderr, "%s: error 420, too many cats!\n", PROGRAM_NAME  );
        return false;
    }
    //name validation
    if ( strlen ( inputCatName ) < 1 ){
        fprintf( stderr, "%s: error 421.5, cats must have a name!\n", PROGRAM_NAME  );
        return false;
    }
    if ( strlen ( inputCatName ) >= MAX_NAME_LEN ){
        fprintf( stderr, "%s: error 422.5, cat name is too long!\n", PROGRAM_NAME  );
        return false;
    }

    int j;
    for ( j = 0 ; j < MAX_CATS ; j++ ){
        if ( strcmp ( cats[ j ].name, inputCatName ) == 0 ){
            fprintf( stderr, "%s: error 423.5, cats must have a unique name!\n", PROGRAM_NAME  );
            return false;
        }
    }
    //weight validation
    if ( inputCatWeight <= 0 ){
        fprintf( stderr, "%s: error 424.5, cat weight must be > 0!\n", PROGRAM_NAME  );
        return false;
    }
    return true;
}

void initializeCats(){} //finish me

//enum to string converters
const char* genderString ( const enum Gender catGender ){
    switch ( catGender ){
        case 0:
            return "unknown gender";
            break;
        case 1:
            return "female";
            break;
        case 2:
            return "male";
            break;
    }
    return "no information";
}

const char* breedString ( const enum Breed catBreed ){
    switch ( catBreed ){
        case 0:
            return "unknown breed";
            break;
        case 1:
            return "maine coon";
            break;
        case 2:
            return "manx";
            break;
        case 3:
            return "shorthair";
            break;
        case 4:
            return "persian";
            break;
        case 5:
            return "sphynx";
            break;
    }
    return "no information";
}

const char* colorString ( const enum Color collarColor ){
    switch ( collarColor ){
        case 0:
            return "black";
            break;
        case 1:
            return "white";
            break;
        case 2:
            return "red";
            break;
        case 3:
            return "blue";
            break;
        case 4:
            return "green";
            break;
        case 5:
            return "pink";
            break;
    }
    return "no information";
}

void validateMe( ){
    printf( "you're doing great, hunny\n" );
}


