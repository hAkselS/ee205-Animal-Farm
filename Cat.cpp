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
#include <iostream>
#include <cstring>
#include "Cat.h"
#include "config.h"

using namespace std;

bool Cat::zeroMemberVars() {
    memset( catName, 0, MAX_NAME_LEN);
    catGender   =       UNKNOWN_GENDER;
    catBreed    =       UNKNOWN_BREED;
    catIsFixed  =       false;
    catWeight   =       UNKNOWN_WEIGHT;
    next        =       nullptr;
    return true;
}

//CONSTRUCTORS
Cat::Cat() {
    zeroMemberVars();
}

Cat::Cat(const char *newName, const Gender newGender, const Breed newBreed, const Weight newWeight) {


}

//DESTRUCTORS
Cat::~Cat() {
    zeroMemberVars();
}


//SETTERS
void Cat::setName(const char *newName) {
    validateName( newName );                    //validate new name

    memset( catName, 0, MAX_NAME_LEN);  //destroy old name

    strcpy( catName, newName );        //destination, source
}

void Cat::setGender( const enum Gender newGender ) {
    Cat::catGender = newGender;
}

void Cat::setBreed( const enum Breed newBreed ) {
    Cat::catBreed = newBreed;
}

void Cat::fixCat (){
    Cat::catIsFixed = true;
}

void Cat::setWeight( const Weight newWeight ){
    validateWeight( newWeight );    //why doesn't this have Cat:: ???
    Cat::catWeight = newWeight;
}

//GETTERS
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
    return 0;
}

//VALIDATION
bool Cat::validateName(const char *newName) {
    if ( newName == nullptr ){      //check for empty name
        cout << PROGRAM_NAME << "Cat name cannot equal null" << endl;
        return false;
    }
    if ( strlen( newName ) <= 0 ){
        cout << PROGRAM_NAME << "Cat name must be more than 0 characters" << endl;
        return false;
    }
    if( strlen( newName ) >= MAX_NAME_LEN) {
        cout << PROGRAM_NAME << "Cat name cannot be longer than max name length" << endl;
        return false;
    }
    return true;
}

bool Cat::validateWeight(const Weight newWeight) {
    if ( newWeight <= 0 ){
        cout << PROGRAM_NAME << "Cats must have weight greater than 0" << endl;
        return false;
    }
    return true;
}

//what the point of validating the enums???




