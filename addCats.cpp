///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCats.cpp
/// @version 1.0
///
/// @author  Aksel Sloan <@aksel@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "catDatabase.h"
#include "addCats.h"
#include "config.h"

//#define DEBUG
//#define DEBUG2


bool addCat (  const char catName[],
               const enum Gender catGender,
               const enum Breed catBreed,
               const bool catIsFixed,
               const float catWeight,
               const enum Color catCollarColor1,
               const enum Color catCollarColor2,
               const unsigned long long catLicense ){

#ifdef DEBUG2
    printf("numCats = [%i]\n", numCats);
#endif

    if (  validateName( catName ) == false ) {
        return false;
    }
    if ( validateWeight( catWeight ) == false ) {
        return false;
    }
    if ( validateNumCats () == false ) {
        return false;
    }

    strcpy( cats[ numCats ].name , catName );
#ifdef DEBUG
    // printf( "the first letter is %c\n" , nameArray[ numCats ][ 0 ] );
  // printf( "the next letter is %c\n" , nameArray[ numCats ][ 1 ] );
#endif

    cats[ numCats ].gender = catGender;
#ifdef DEBUG
    printf( "The gender is [%i]\n", cats[ numCats ].gender );
#endif

    cats[ numCats ].breed = catBreed;
#ifdef DEBUG
    printf( "The breed is [%i]\n", cats[ numCats ].breed );
#endif

    cats[ numCats ].isFixed = catIsFixed;
#ifdef DEBUG
    printf( "isFixed = [%i] (0 is false)\n", cats[ numCats ].isFixed );
#endif

    cats[ numCats ].weight = catWeight;
#ifdef DEBUG
    printf( "cat weight = [%.2f]\n" , cats[ numCats ].weight);
#endif

    cats[ numCats ].collarColor1 = catCollarColor1;

    cats[ numCats ].collarColor2 = catCollarColor2;

    cats[ numCats ].license = catLicense;


    numCats++; //numCats goes to 10 when cats 0-9 are added
    //note the 10th cat does not exist
    return true;
}


