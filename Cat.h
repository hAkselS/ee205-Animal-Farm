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

#include "config.h"


class Cat {
private:
    bool zeroMemberVars();      //return true if it zeros successfully

protected:          //MEMBER VARIABLES
    char            catName[MAX_NAME_LEN]       ;
    enum Gender     catGender                   ;
    enum Breed      catBreed                    ;
    bool            catIsFixed                  ;
    Weight          catWeight                   ;

public:             //PUBLIC MEMBER VARIABLES
    Cat*            next                        ; //pointer to cat class

                    //CONSTRUCTORS
    Cat();          //make a cat with "default" values

    Cat( const char* newName, const Gender newGender, const Breed newBreed, const Weight newWeight ); // may have problem here with enum Gender to Gender

                    //DESTRUCTORS
    ~Cat();

public:             //SETTERS
    void setName( const char* newName );
    void setGender( const enum Gender newGender );
    void setBreed( const enum Breed newBreed );
    void fixCat ( );
    void setWeight( const Weight newWeight );

public:             //GETTERS
    const char* getName() const noexcept;  //what does const noexpect do???
    Gender getGender() const noexcept;     //why can I leave off enum here??
    Breed getBreed() const noexcept;
    bool isFixed() const noexcept;
    Weight getWeight() const noexcept;


public:             //METHODS
    static bool validateName        ( const char* newName );   //validate input cat name
    static bool validateWeight      ( const Weight newWeight );
    //omit validating enums for now
};