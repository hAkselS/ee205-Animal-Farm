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
#include <cassert>
#include "Animal.h"
#include "Weight.h"

const std::string Animal::KINGDOM_NAME = "Animalia";
        ///constructors
        ///minimal
Animal::Animal(const t_weight newMaxWeight, std::string const newClassification, const std::string newSpecies) { //use unit / max constructor
    //@todo validation
    weightClass.setMaxWeight( newMaxWeight ); //set things, don't use a constructor
    setClassification( newClassification );
    species = newSpecies;

}

Animal::Animal(const Gender newGender, const float newWeight, const float newMaxWeight,
               const std::string newClassification, const std::string newSpecies)
               : Animal( newMaxWeight ,newClassification, newSpecies ){
    weightClass.setWeight( newWeight, Weight::POUND );
    gender = newGender;
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

Gender Animal::getGender() const noexcept { //@todo, get this working (more specifically the put to operator)
    return gender;
}
            ///setters
void Animal::setClassification(std::string newClassification) {
    assert( !newClassification.empty());
    classification = newClassification;
}


            ///dump
void Animal::dump() const {
    cout << setw(80) << setfill( '=' ) << "" << endl ;
    cout << setfill( ' ' ) ;
    cout << left ;
    cout << boolalpha ;
    FORMAT_LINE_FOR_DUMP( "Animal", "this" )        << this                 << endl;
    FORMAT_LINE_FOR_DUMP( "Animal", "kingdom" )        << getKingdom()                 << endl;
    FORMAT_LINE_FOR_DUMP( "Animal", "classification" )        << getClassification()                 << endl;
    FORMAT_LINE_FOR_DUMP( "Animal", "species" )        << getSpecies()                 << endl; //@todo, ask mark about this
    // FORMAT_LINE_FOR_DUMP( "Animal", "gender" )        << getGender() /*gender doesnt work either*/                 << endl;
    FORMAT_LINE_FOR_DUMP( "Animal", "weight" )    << weightClass.getWeight()  << " out of " << weightClass.getMaxWeight() << " " << weightClass.getUnits() << endl;

}

bool Animal::validateAnimal() const {
    assert( !classification.empty() );
    assert( !species.empty() );
    if ( weightClass.bIsKnown ){
        assert( weightClass.getWeight() > 0 );
        if ( weightClass.bHasMax ){
            assert( weightClass.getMaxWeight() > weightClass.getWeight() );
        }
    }
    if ( weightClass.bHasMax ){
        assert( weightClass.getMaxWeight() > 0 );
    }
    return true;
}





///put to operator
//how should I deal with this? seems like only one definition of put to operator per cpp

/// Output Gender as a formatted string
///
/// @param lhs_stream The output stream to write to (usually `cout`).  `
///                   `lhs` stands for Left Hand Side and means the left side
///                   of the `<<` operator.
/// @param rhs_Gender The Gender to output.
///                   `rhs` stands for Right Hand Side and means the right
///                   side of the `<<` operator.
/// @return `Unknown gender`, `Female` or `Male`.
inline std::ostream& operator<<( std::ostream& lhs_stream, const Gender& rhs_Gender ) {
    switch (rhs_Gender) {
        case Gender::UNKNOWN_GENDER:
            lhs_stream << "Unknown gender";
            break;
        case Gender::MALE:
            lhs_stream << "Male";
            break;
        case Gender::FEMALE:
            lhs_stream << "Female";
            break;
        default:

            throw std::out_of_range(PROGRAM_NAME ": Gender not mapped to a string");
    }
    return lhs_stream;
}

