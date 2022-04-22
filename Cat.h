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
#include <istream>
#include "config.h"

/*
class Cat {
private:
    bool zeroMemberVars();      //return true if it zeros successfully

protected:          //MEMBER VARIABLES
    std::string     catName                     ;
    enum Gender     catGender                   ;
    enum Breed      catBreed                    ;
    bool            catIsFixed                  ;
    Weight          catWeight                   ;

public:             //PUBLIC MEMBER VARIABLES
    Cat*            next                        ; //pointer to cat class

                    //CONSTRUCTORS
    Cat();          //make a cat with "default" values

    Cat( std::string newName, const Gender newGender, const Breed newBreed, const Weight newWeight ); // may have problem here with enum Gender to Gender

                    //DESTRUCTORS
    ~Cat();

public:             //SETTERS
    bool setName( std::string newName );
    bool setGender( const enum Gender newGender );
    bool setBreed( const enum Breed newBreed );
    bool fixCat ( );
    bool setWeight( const Weight newWeight );

public:             //GETTERS
    std::string getName() const noexcept;  //what does const noexpect do???
    Gender getGender() const noexcept;     //why can I leave off enum here??
    Breed getBreed() const noexcept;
    bool isFixed() const noexcept;
    Weight getWeight() const noexcept;


public:             //STATIC PUBLIC METHODS
    static bool validateName        ( const std::string newName );   //validate input cat name
    static bool validateWeight      ( const Weight newWeight );
    static bool validateGender      ( const enum Gender newGender );
    static bool validateBreed       ( const enum Breed newBreed );
    //omit validating enums for now
public:             //PUBLIC METHODS
    bool validateCat() const noexcept;
    void printCat() const noexcept;
};
 */