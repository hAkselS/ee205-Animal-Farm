///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file deleteCats.cpp
/// @version 1.0
///
/// @author  Aksel Sloan <@aksel@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include <cassert>
#include <iostream>
#include <stdexcept>

#include "config.h"
#include "deleteCats.h"
#include "catDatabase.h"
#include "Cat.h"

using namespace std ;

bool deleteCat ( Cat* doomedCat ){
    if (doomedCat == nullptr){
        cout << PROGRAM_NAME << "this cat does not exist" << endl;
        return false;
    }
    ///validate database???
    //if we want to delete the first cat
    if ( doomedCat == catabaseHeadPtr ){
        catabaseHeadPtr = catabaseHeadPtr -> next;
        delete doomedCat;
        numCats --;
        assert(validateDatabase());
        return true;
    }

    Cat* pCatIndex = catabaseHeadPtr;
    while ( pCatIndex != nullptr ){
        if ( pCatIndex -> next == doomedCat ){
            pCatIndex -> next = doomedCat -> next;
            delete doomedCat;
            numCats --;
            assert(validateDatabase());
            return true;
        }
        pCatIndex = pCatIndex -> next;
    }
    cout << PROGRAM_NAME << ": unable to delete cat" << endl;
    return true;
}

bool deleteAllCats () {
    while ( catabaseHeadPtr != nullptr ) {
        deleteCat(catabaseHeadPtr);
    }
    return true;
}
