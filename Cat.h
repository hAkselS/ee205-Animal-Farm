///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Cat.h
/// @version 1.0
///
/// @author  Aksel Sloan <@aksel@hawaii.edu>
/// @date   02_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include <iostream>
#include "config.h"
#include "Mammal.h"

class Cat : public Mammal {
public:
    static const std::string      SPECIES_NAME;
    static const t_weight MAX_WEIGHT;

protected:     ///protected member variables
    string catName;
    bool isCatFixed;

public:       ///constructors
    Cat( const string newName) : Mammal( MAX_WEIGHT, SPECIES_NAME ){
        assert( !newName.empty() );
        catName = newName;
        isCatFixed = false;
    };

    Cat( const string newName, const Color newColor, bool stateOfFix, Gender newGender, const t_weight newWeight)
            : Mammal( newColor, newGender, newWeight, MAX_WEIGHT, SPECIES_NAME ) {
        assert( !newName.empty() );
        catName = newName;
        isCatFixed = stateOfFix;
    };


};
