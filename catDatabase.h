///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.h
/// @version 1.0
///
/// @author  Aksel Sloan <@aksel@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include <stdio.h>
#include <stdbool.h>
#include "config.h"
#include "Cat.h"


//global variables
extern NumCats     numCats;

extern Cat* catabaseHeadPtr;



//create a struct
struct Cats {
    char                 name[MAX_NAME_LEN];
    enum Gender          gender;
    enum Breed           breed;
    bool                 isFixed;
    Weight                weight;
    enum Color           collarColor1;
    enum Color           collarColor2;
    unsigned long long   license;
};

//allow other codes to access instance of Cats structure, cats

//extern struct Cats   cats[];


//functions declared in catDatabase.c
//validation functions
//extern bool validateCat       (  const char inputCatName[],
//                                 const float inputCatWeight );
//extern bool validateName      (  const char inputCatName[] );
//extern bool validateWeight    (  const float inputCatWeight );
//extern bool validateIndex     (  const int currentCat );
//extern bool validateNumCats   ( );

//enum to string functions
extern const char* genderString ( const enum Gender catGender );
extern const char* breedString ( const enum Breed catBreed );
extern const char* colorString ( const enum Color collarColor );

extern void initializeCats();
