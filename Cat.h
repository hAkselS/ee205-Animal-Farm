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
    const std::string SPECIES_NAME = "Felus Catus";
    const t_weight MAX_WEIGHT = 25;

protected:     ///public member variables
    string catName;
    bool isCatFixed;

    ///heres where I am, @todo write cat construtors


};
