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
/*
#include <stdio.h>
#include <cstring>
#include <stdexcept>
#include <iostream>
#include <iomanip>
#include <cassert>
#include "Cat.h"
#include "config.h"
#include "catDatabase.h"

using namespace std;

bool Cat::zeroMemberVars() {
    catName     =       "";
    catGender   =       Gender::UNKNOWN_GENDER;
    catBreed    =       Breed::UNKNOWN_BREED;
    catIsFixed  =       false;
    catWeight   =       UNKNOWN_WEIGHT;
    next        =       nullptr;
    return true;
}

///CONSTRUCTORS
Cat::Cat() {
    zeroMemberVars();
}

Cat::Cat( std::string newName, const Gender newGender, const Breed newBreed, const Weight newWeight) : Cat () {
    if (validateName( newName )
        && validateGender( newGender )
        && validateBreed( newBreed )
        && validateWeight( newWeight ) ){

        setName( newName );
        setGender(newGender);
        setBreed(newBreed);
        setWeight(newWeight);
    }

}

///DESTRUCTORS
Cat::~Cat() {
    zeroMemberVars();
}


///SETTERS
bool Cat::setName( std::string newName ) {
    if ( !validateName( newName ) ){
        return false;
    }
    catName = newName;
    return true;
}

bool Cat::setGender( const enum Gender newGender ) {
    if ( newGender == Gender::UNKNOWN_GENDER){
        cout << PROGRAM_NAME << ": cat gender cannot be updated to unknown" << endl;
        return false;
    }
    if ( Cat::catGender != Gender::UNKNOWN_GENDER ){
        cout << PROGRAM_NAME << ": cat gender cannot be changed" << endl;
        return false;
    }
    Cat::catGender = newGender;  //why use Cat:: in this line if were already in a cat function???
    return true;
}

bool Cat::setBreed( const enum Breed newBreed ) {
    if ( newBreed == Breed::UNKNOWN_BREED){
        cout << PROGRAM_NAME << ": cat breed cannot be updated to unknown" << endl;
        return false;
    }
    if ( Cat::catBreed != Breed::UNKNOWN_BREED ) {
        cout << PROGRAM_NAME << ": cat breed cannot be changed" << endl;
        return false;
    }
    Cat::catBreed = newBreed;
    return true;
}

bool Cat::fixCat (){
    if ( catIsFixed ){
        cout << PROGRAM_NAME << ": cat cannot be fixed twice" << endl;
        return false;
    }
    Cat::catIsFixed = true;
    return true;
}

bool Cat::setWeight( const Weight newWeight ){
    if (!validateWeight( newWeight )){
        return false;
    }   //why doesn't this have Cat:: ???
    Cat::catWeight = newWeight;
    return true;
}

///GETTERS
std::string Cat::getName() const noexcept {
    return catName;
}

Gender Cat::getGender() const noexcept {
    return catGender;
}

Breed Cat::getBreed() const noexcept {
    return catBreed;
}

bool Cat::isFixed() const noexcept {
    return catIsFixed;
}

Weight Cat::getWeight() const noexcept {
    return catWeight;
}

///VALIDATION
bool Cat::validateName( std::string newName) {
    if (newName == "" ){
        cout << PROGRAM_NAME << ": cannot set empty name" << endl;
        return false;
    }
    if ( newName.length() >= MAX_NAME_LEN ){
        cout << PROGRAM_NAME << ": name cannot be longer than max name length" << endl;
        return false;
    }
   return true;
}

bool Cat::validateWeight(const Weight newWeight) {
    if ( newWeight <= 0 ){
        cout << PROGRAM_NAME << ": Cats must have weight greater than 0" << endl;
        return false;
    }
    else
        return true;
}

bool Cat::validateGender( const enum Gender newGender ) {
    if ( newGender == Gender::UNKNOWN_GENDER ){
        cout << PROGRAM_NAME << ": Gender must be known" << endl;
        return false;
    }
    else
        return true;
}

bool Cat::validateBreed( const enum Breed newBreed) {
    if ( newBreed == Breed::UNKNOWN_BREED) {
        cout << PROGRAM_NAME << ": Gender must be known" << endl;
        return false;
    }
    else
        return true;
}

//what the point of validating the enums???

//PUBLIC METHODS
bool Cat::validateCat() const noexcept {

    if (validateName(catName)
        && validateWeight(catWeight)
        && validateGender( catGender )
        && validateBreed( catBreed ) ){
        return true;
    }

    else
        cout << PROGRAM_NAME << ": bad cat!" << endl;  //how to I get this to print the name of the bad cat???

        return false;
}
///put to operator for printing classes
/// Output Gender as a formatted string
///
/// @param lhs_stream The output stream to write to (usually `cout`).  `
///                   `lhs` stands for Left Hand Side and means the left side
///                   of the `<<` operator.
/// @param rhs_Gender The Gender to output.
///                   `rhs` stands for Right Hand Side and means the right
///                   side of the `<<` operator.
/// @return `Unknown gender`, `Female` or `Male`.
inline std::ostream& operator<<( std::ostream& lhs_stream, const Gender& rhs_Gender ){
    switch( rhs_Gender ) {
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
            /// @throw out_of_range If the enum is not mapped to a string.
            throw std::out_of_range( PROGRAM_NAME ": Gender not mapped to a string" );
    }
    return lhs_stream;
}
///put to oporator for breed
inline std::ostream& operator<<( std::ostream& lhs_stream, const Breed& rhs_Breed ){
    switch( rhs_Breed ) {
        case Breed::UNKNOWN_BREED:
            lhs_stream << "Unknown breed";
            break;
        case Breed::MAINE_COON:
            lhs_stream << "Main Coon";
            break;
        case Breed::MANX:
            lhs_stream << "Manx";
            break;
        case Breed::SHORTHAIR:
            lhs_stream << "Shorthair";
            break;
        case Breed::PERSIAN:
            lhs_stream << "Persian";
            break;
        case Breed::SPHYNX:
            lhs_stream << "Sphynx";
            break;
        default:
            /// @throw out_of_range If the enum is not mapped to a string.
            throw std::out_of_range( PROGRAM_NAME ": Breed not mapped to a string" );
    }
    return lhs_stream;
}

/// Format a line for printing the members of a class
#define FORMAT_LINE( className, member ) cout << setw(8) << (className) << setw(20) << (member) << setw(52)

void Cat::printCat() const noexcept {
    //assert( validateCat()) ;   //this will work only if we add good cats only
    cout << setw(80) << setfill( '=' ) << "" << endl ;
    cout << setfill( ' ' ) ;
    cout << left ;
    cout << boolalpha ;
    FORMAT_LINE( "Cat", "name" )         << getName()                           << endl ;
    FORMAT_LINE( "Cat", "gender" )       << getGender()  << endl ; ///this may need fixing
    FORMAT_LINE( "Cat", "breed" )        << getBreed()     << endl ;
    FORMAT_LINE( "Cat", "isFixed" )      << isFixed()                           << endl ;
    FORMAT_LINE( "Cat", "weight" )       << getWeight()                         << endl ;

}


*/



