///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file reportCats.cpp
/// @version 1.0
///
/// @author  Aksel Sloan <@aksel@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include <stdbool.h>
#include <stdio.h>
#include <cstring>
#include <iostream>
#include "catDatabase.h"
#include "reportCats.h"
#include "config.h"



using namespace std;

bool printDatabase (){
    int catIndex = 0;
    Cat* pCatIndex = nullptr;

    for ( pCatIndex = catabaseHeadPtr; pCatIndex != nullptr; pCatIndex = pCatIndex -> next ){
        pCatIndex -> printCat();

    }
    return true;
}

Cat* findCatByName ( const char* findName ){
    //validate the name entered
    Cat* pCatIndex = nullptr;
    for ( pCatIndex = catabaseHeadPtr; pCatIndex != nullptr; pCatIndex = pCatIndex->next ){
        if ( strcmp( findName, pCatIndex->getName()) == 0 ){
            return pCatIndex;
        }
    }
    cout << PROGRAM_NAME << ": [" << findName << "] is not in database" << endl;
    return nullptr; ///case that the cat was not found
}