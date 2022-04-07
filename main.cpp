///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 07d - AnimalFarm0 - EE 205 - Spr 2022
///
/// Usage: This C file will define a function that can store cat data.
///   catData base will hold difference aspects of each cat such as
///   the cats weight, gender name and color
/// Input: when calling this function:
///    catDatabase ( char array, enum , enum , bool , float )
///
///
///
/// Compilation:
///
/// @file catDatabase.c
/// @version 1.0
///
///
/// @author Aksel Sloan <aksel@hawaii.edu>
/// @date   16  February 2022
/////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cassert>
#include <cstring>
#include "catDatabase.h"
#include "addCats.h"
#include "reportCats.h"
#include "updateCats.h"
#include "deleteCats.h"
#include "Cat.h"

#define DEBUG

using namespace std;
int main(){
    cout << "Starting Animal Farm 1" << endl;

#ifdef DEBUG

    //check that default values are working
    Cat testCatOne = Cat();
    assert(testCatOne.getName() != nullptr );   //name doesn't point to null
    assert(strcmp(testCatOne.getName(), "") == 0); //name is empty
    assert(testCatOne.getGender() == UNKNOWN_GENDER);
    assert(testCatOne.getBreed() == UNKNOWN_BREED);
    assert(testCatOne.isFixed() == false);
    assert(testCatOne.getWeight() == UNKNOWN_WEIGHT);
    assert(!testCatOne.isFixed());
    assert(!testCatOne.validateCat());  // The default cat is invalid
    testCatOne.validateCat();
    testCatOne.printCat();


    Cat testCatTwo = Cat( "chilibean", MALE, SPHYNX, 7.7 );
    testCatTwo.fixCat();
    testCatTwo.printCat();

    Cat testCatThree = Cat( "kale", FEMALE, SHORTHAIR, 4.2);
    testCatThree.printCat();
    Cat testCatFour = Cat( "bobLeSponge", MALE, PERSIAN, 4.9);
    testCatFour.printCat();
    Cat testCatFive = Cat( "kennedy", MALE, SHORTHAIR, 5.2);
    testCatFive.printCat();
    Cat testCatSix = Cat( "gary", MALE, MAINE_COON, 6.9);
    testCatSix.printCat();
    Cat testCatSeven = Cat( "missNo", FEMALE, MANX, 8.8);
    //Cat testCatSeven = Cat( "missNo", UNKNOWN_GENDER, UNKNOWN_BREED, -8.8); //MANX
    testCatSeven.printCat();
    testCatSeven.validateCat();
    //testCatOne.validateCat();

#endif

    addCat( new Cat( "cherrypie", FEMALE, MANX, 7.6) );
    addCat( new Cat( "siberia", MALE, SHORTHAIR, 400) );
    addCat( new Cat( "obama", MALE, MAINE_COON, 35) );

    printDatabase();
    validateDatabase();

#ifdef DEBUG
    addCat( new Cat( "dirtydan", UNKNOWN_GENDER, UNKNOWN_BREED, -1) );
#endif

    validateDatabase();
    printDatabase();


    printf("  /\\_/\\  (\n");
    printf(" ( ^.^ ) _)\n");
    printf("   \\\"/  (\n");
    printf(" ( | | )\n");
    printf("(__d b__)\n");

    cout << "Finished with Animal Farm 1" << endl;

}
