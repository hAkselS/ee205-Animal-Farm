///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Mammal.h
/// @version 1.0
///
/// @author  Aksel Sloan <@aksel@hawaii.edu>
/// @date   21_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include "Animal.h"
#include "config.h"
#include "Color.h"
#include "Weight.h"

class Mammal : public Animal {
public:
    static const std::string MAMMAL_NAME;
protected:      ///member variables
    Color color = Color::UNKNOWN_COLOR;
public:         ///constructors
    Mammal( const t_weight newMaxWeight, const std::string newSpecies )
    : Animal( newMaxWeight, MAMMAL_NAME, newSpecies ) {};


};


