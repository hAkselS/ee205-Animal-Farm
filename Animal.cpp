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

const std::string Animal::KINGDOM_NAME = "Animalia";
        ///constructors
        ///minimal
Animal::Animal(const float newMaxWeight, std::string const newClassification, const std::string newSpecies)/* : Weight(Weight::POUND, newMaxWeight )*/ { //use unit / max constructor
    //@todo validation and fixing weight constructor
    classification = newClassification;
    species = newSpecies;

}

Animal::Animal(const Gender newGender, const float newWeight, const float newMaxWeight,
               const std::string newClassification, const std::string newSpecies)  {
}


///getters
std::string Animal::getKingdom() const noexcept {
    return KINGDOM_NAME;
}

std::string Animal::getClassification() const noexcept {
    return classification;
}

std::string Animal::getSpecies() const noexcept {
    return species;
}

Gender Animal::getGender() const noexcept {
    return gender;
}

void Animal::dump() const {
    cout << setw(80) << setfill( '=' ) << "" << endl ;
    cout << setfill( ' ' ) ;
    cout << left ;
    cout << boolalpha ;
    FORMAT_LINE_FOR_DUMP( "Animal", "this" )        << this                 << endl;
    FORMAT_LINE_FOR_DUMP( "Animal", "kingdom" )        << getKingdom()                 << endl;
    FORMAT_LINE_FOR_DUMP( "Animal", "classification" )        << getClassification()                 << endl;
    FORMAT_LINE_FOR_DUMP( "Animal", "species" )        << getSpecies()                 << endl;
    //FORMAT_LINE_FOR_DUMP( "Animal", "gender" )        << getGender()                 << endl;
    //FORMAT_LINE_FOR_DUMP( "Animal", "weight" )        << getWeight()  << "out of" << getMaxWeight() << getUnits()               << endl;

}



