///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Animal.cpp
/// @version 1.0
///
/// @author  Aksel Sloan <@aksel@hawaii.edu>
/// @date   21_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include "Animal.h"
#include "Weight.h"

        ///constructors
        ///minimal
Animal::Animal(const float newMaxWeight, std::string const newClassification, const std::string newSpecies) : weight(Weight::POUND, newMaxWeight ) { //use unit / max constructor
    //@todo validation
    classification = newClassification;
    species = newSpecies;

}
