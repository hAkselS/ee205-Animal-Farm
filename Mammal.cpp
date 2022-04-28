///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Mammal.cpp
/// @version 1.0
///
/// @author  Aksel Sloan <@aksel@hawaii.edu>
/// @date   21_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "Mammal.h"

const std::string Mammal::MAMMAL_NAME = "Mammilian";



void Mammal::dump() const noexcept {
    Animal::dump();
    FORMAT_LINE_FOR_DUMP( "Mammal", "color" ) << getColor() << std::endl;
}

bool Mammal::validate() const noexcept {
    return Animal::validate();
}

