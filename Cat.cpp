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
#include "catDatabase.h"

using namespace std;

bool Cat::zeroMemberVars() {
    memset( catName, 0, MAX_NAME_LEN);
    catGender   =       UNKNOWN_GENDER;
    catBreed    =       UNKNOWN_BREED;
    catIsFixed  =       false;
    catWeight   =       UNKNOWN_WEIGHT;
    next        =       nullptr;
    //@TODO include color and color color
    return true;
}

///CONSTRUCTORS
Cat::Cat() {
    zeroMemberVars();
}

Cat::Cat(const char *newName, const Gender newGender, const Breed newBreed, const Weight newWeight) {
        setName(newName);
        setGender(newGender);
        setBreed(newBreed);
        setWeight(newWeight);
        //assert(validateCat());
        ///@TODO dont allow cat 7 to be added
}

///DESTRUCTORS
Cat::~Cat() {
    zeroMemberVars();
}


///SETTERS
bool Cat::setName(const char *newName) {
    if (!validateName( newName )){
        return false;
    }                    //validate new name

    memset( catName, 0, MAX_NAME_LEN);  //destroy old name

    strcpy( catName, newName );        //destination, source
    return true;
}

bool Cat::setGender( const enum Gender newGender ) {
    if ( newGender == UNKNOWN_GENDER){
        cout << PROGRAM_NAME << ": cat gender cannot be updated to unknown" << endl;
        return false;
    }
    if ( Cat::catGender != UNKNOWN_GENDER ){
        cout << PROGRAM_NAME << ": cat gender cannot be changed" << endl;
        return false;
    }
    Cat::catGender = newGender;  //why use Cat:: in this line if were already in a cat function???
    return true;
}

bool Cat::setBreed( const enum Breed newBreed ) {
    if ( newBreed == UNKNOWN_BREED){
        cout << PROGRAM_NAME << ": cat breed cannot be updated to unknown" << endl;
        return false;
    }
    if ( Cat::catBreed != UNKNOWN_BREED ) {
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
const char *Cat::getName() const noexcept {
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
bool Cat::validateName(const char *newName) {
    if ( newName == nullptr ){      //check for empty name
        cout << PROGRAM_NAME << ": Cat name cannot equal null" << endl;
        return false;
    }
    if ( strlen( newName ) <= 0 ){
        cout << PROGRAM_NAME << ": Cat name must be more than 0 characters" << endl;
        return false;
    }
    if( strlen( newName ) >= MAX_NAME_LEN) {
        cout << PROGRAM_NAME << ": Cat name cannot be longer than max name length" << endl;
        return false;
    }

    else
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
    if ( newGender == UNKNOWN_GENDER ){
        cout << PROGRAM_NAME << ": Gender must be known" << endl;
        return false;
    }
    else
        return true;
}

bool Cat::validateBreed( const enum Breed newBreed) {
    if ( newBreed == UNKNOWN_BREED) {
        cout << PROGRAM_NAME << ": Gender must be known" << endl;
        return false;
    }
    else
        return true;
}

//what the point of validating the enums???

//PUBLIC METHODS
bool Cat::validateCat() const noexcept {        //@TODO: only prints first error, not all errors
                                                //@TODO: want to print out what cat were looking at
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

/// Format a line for printing the members of a class
#define FORMAT_LINE( className, member ) cout << setw(8) << (className) << setw(20) << (member) << setw(52)
/// @returns true if everything worked correctly.  false if something goes
///          wrong
void Cat::printCat() const noexcept {
    //assert( validateCat()) ;   //this will work only if we add good cats only
    cout << setw(80) << setfill( '=' ) << "" << endl ;
    cout << setfill( ' ' ) ;
    cout << left ;
    cout << boolalpha ;
    FORMAT_LINE( "Cat", "name" )         << getName()                           << endl ;
    FORMAT_LINE( "Cat", "gender" )       << genderString(getGender())  << endl ;
    FORMAT_LINE( "Cat", "breed" )        << breedString(getBreed())     << endl ;
    FORMAT_LINE( "Cat", "isFixed" )      << isFixed()                           << endl ;
    FORMAT_LINE( "Cat", "weight" )       << getWeight()                         << endl ;

}






