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
    assert( doomedCat != nullptr);
    ///validate database???
    //if we want to delete the first cat
    if ( doomedCat == catabaseHeadPtr ){
        catabaseHeadPtr = catabaseHeadPtr -> next;
        delete doomedCat;
        numCats --;
        assert(validateDatabase());
        return true;
    }

}


