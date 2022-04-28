///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Cat.cpp
/// @version 1.0
///
/// @author  Aksel Sloan <@aksel@hawaii.edu>
/// @date   02_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <cstring>
#include <stdexcept>
#include <iostream>
#include <iomanip>
#include <cassert>
#include "Cat.h"
#include "config.h"
#include "Mammal.h"

using namespace std;

const string Cat::SPECIES_NAME = "Felus Catus";
const t_weight Cat::MAX_WEIGHT = 40; //now that's a fat cat


            ///getters and setter
string Cat::getCatName() const {
    return catName;
}

void Cat::setCatName( string newName ) {
    validateName(newName);
    catName = newName;

}

bool Cat::validateName(string newName) {
    assert( !newName.empty() );
    return true;
}

bool Cat::isFixedCheck() const {
    return isCatFixed;
}

void Cat::fixCat() {
    assert( !isCatFixed );
    isCatFixed = true;
}

void Cat::dump() const noexcept {
    Mammal::dump();
    FORMAT_LINE_FOR_DUMP( "Cat", "name") << getCatName() << std::endl;
    FORMAT_LINE_FOR_DUMP( "Cat", "is fixed") << isCatFixed << std::endl;
}

string Cat::speak() const {
    return "Meow";
}




