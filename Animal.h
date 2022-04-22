///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Animal.h
/// @version 1.0
///
/// @author  Aksel Sloan <@aksel@hawaii.edu>
/// @date   21_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include <iostream>
#include "config.h"
#include "Node.h"
#include "Weight.h"

using namespace std;
class Animal : public Node {
private:    ///private member variables
    string species;
    string classification;
    Gender gender = Gender::UNKNOWN_GENDER;
    Breed breed = Breed::UNKNOWN_BREED;
    Weight weight;
public:     ///public member variables
    static string KINGDOM_NAME;

public:     ///constructors
    ///minimal constructor
    Animal( const float nexMaxWeight, const std::string newClassification, const std::string newSpecies  );
    ///maximal constructor
    Animal ( const Gender newGender, const float newWeight, const float newMaxWeight,
             const std::string newClassification, const std::string newSpecies );

};



