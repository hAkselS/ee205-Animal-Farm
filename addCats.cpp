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

#include <iostream>
#include <cassert>
#include "Cat.h"
#include "catDatabase.h"
#include "addCats.h"
#include "config.h"

#define DEBUG
using namespace std;

///Linked list

bool addCat ( Cat* newCat){
    assert ( newCat != nullptr );
    if( newCat -> validateCat()) {
        newCat -> next = catabaseHeadPtr;
        catabaseHeadPtr = newCat;
        numCats ++;
        #ifdef DEBUG
                cout << PROGRAM_NAME << ": Added cat [" << newCat -> getName() << "]" << endl;
        #endif
    }
    //mark checks if cat is in database already ///@TODO validate database
   else{
        cout << PROGRAM_NAME << ": bad cat! [" << newCat -> getName() << "] not added" << endl;
   }




    return true;
}




//#define DEBUG
//#define DEBUG2
/*


bool addCat (  const char catName[],
               const enum Gender catGender,
               const enum Breed catBreed,
               const bool catIsFixed,
               const float catWeight,
               const enum Color catCollarColor1,
               const enum Color catCollarColor2,
               const unsigned long long catLicense ){



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


    cats[ numCats ].gender = catGender;


    cats[ numCats ].breed = catBreed;


    cats[ numCats ].isFixed = catIsFixed;


    cats[ numCats ].weight = catWeight;


    cats[ numCats ].collarColor1 = catCollarColor1;

    cats[ numCats ].collarColor2 = catCollarColor2;

    cats[ numCats ].license = catLicense;


    numCats++; //numCats goes to 10 when cats 0-9 are added
    //note the 10th cat does not exist
    return true;
}


*/
