///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.cpp
/// @version 1.0
///
/// @author  Aksel Sloan <@aksel@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include "catDatabase.h"
#include "config.h"
#include "Cat.h"

#define DEBUG  ///remove before flight

using namespace std;
Cat* catabaseHeadPtr = nullptr;
NumCats numCats = 0;

extern bool validateDatabase (){
    int validCats = 0;
    Cat* pCatIndex = nullptr;

    for ( pCatIndex = catabaseHeadPtr; pCatIndex != nullptr; pCatIndex = pCatIndex -> next ){
        if (!pCatIndex->validateCat()){     //if validateCat == false
            cout << PROGRAM_NAME << ": invalid cat in database" << endl;
            return false;

        }

        validCats ++;
    }
    #ifdef DEBUG
    cout << PROGRAM_NAME << ": there are [" << validCats << "] valid cats" << endl;
    #endif
    return true;
}

//enum to string converters
//const char* genderString ( const enum Gender catGender ){
//    switch ( catGender ){
//        case 0:
//            return "unknown gender";
//            break;
//        case 1:
//            return "female";
//            break;
//        case 2:
//            return "male";
//            break;
//    }
//    return "no information";
//}
/*
const char* breedString ( const enum Breed catBreed ){
    switch ( catBreed ){
        case 0:
            return "unknown breed";
            break;
        case 1:
            return "maine coon";
            break;
        case 2:
            return "manx";
            break;
        case 3:
            return "shorthair";
            break;
        case 4:
            return "persian";
            break;
        case 5:
            return "sphynx";
            break;
    }
    return "no information";
}*/
/*
const char* colorString ( const enum Color collarColor ){
    switch ( collarColor ){
        case 0:
            return "black";
            break;
        case 1:
            return "white";
            break;
        case 2:
            return "red";
            break;
        case 3:
            return "blue";
            break;
        case 4:
            return "green";
            break;
        case 5:
            return "pink";
            break;
    }
    return "no information";
}*/

void validateMe( ){
    printf( "you're doing great, hunny\n" );
}



