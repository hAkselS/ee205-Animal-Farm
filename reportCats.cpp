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
#include <string.h>
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


/*

void printCat ( const int currentCat ){
    if ( currentCat < 0 || currentCat >= MAX_CATS ){
        fprintf( stderr, "%s: Bad Cat [%d]\n", PROGRAM_NAME, currentCat);
        return;
    }
    printf("  /\\_/\\  (\n");
    printf(" ( ^.^ ) _)\n");
    printf("   \\\"/  (\n");
    printf(" ( | | )\n");
    printf("(__d b__)\n");

    printf( "current Cat [%i]\n",          currentCat );
    printf( "name = [%s]\n",               cats[ currentCat ].name );
    printf( "gender = [%s]\n",             genderString (cats[ currentCat ].gender ) );
    printf( "breed = [%s]\n",              breedString(  cats[ currentCat ].breed ) );
    printf( "fixed = [%i]\n",              cats[ currentCat ].isFixed );
    printf( "weight = [%.2f]\n",           cats[ currentCat ].weight );
    printf( "collar color 1 = [%s]\n",   colorString( cats[ currentCat ].collarColor1 ) );
    printf( "collar color 2 = [%s]\n",    colorString( cats[ currentCat ].collarColor2 ) );
    printf( "license number = [%llu]\n",   cats[ currentCat ].license );
    return;
}

void printAllCats ( ){
    for ( int i = 0; i <  numCats; i++ ){
        printCat( i );
    }
    return;
}

int findCat ( const char catName [] ){
    for ( int currentCat = 0; currentCat <  MAX_CATS; currentCat++ ){
        if ( strcmp ( cats[ currentCat ].name, catName ) == 0){
            printf( "[%s] is cat number [%i]\n", cats[currentCat].name, currentCat);
            return currentCat;
        }
    }
    fprintf( stderr, "%s: error 425, this cat does not exist!\n", PROGRAM_NAME );
    return 0;
}
*/



