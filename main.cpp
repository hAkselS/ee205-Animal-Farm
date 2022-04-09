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
    ///Production code
    addCat( new Cat( "Loki", MALE, PERSIAN, 1.0 )) ;
    addCat( new Cat( "Milo", MALE, MANX , 1.1 )) ;
    addCat( new Cat( "Bella", FEMALE, MAINE_COON, 1.2 )) ;
    addCat( new Cat( "Kali", FEMALE, SHORTHAIR, 1.3 )) ;
    addCat( new Cat( "Trin", FEMALE, MANX, 1.4 )) ;
    addCat( new Cat( "Chili", MALE, SHORTHAIR, 1.5 )) ;

    printDatabase();

#ifdef DEBUG
    cout << "########################END PRODUCTION OUTPUT########################" << endl;

    //check that default values are working
    Cat testCatOne = Cat();
    ///test 1
    assert(testCatOne.getName() != nullptr );   //name doesn't point to null
    assert(strcmp(testCatOne.getName(), "") == 0); //name is empty
    assert(testCatOne.getGender() == UNKNOWN_GENDER);
    assert(testCatOne.getBreed() == UNKNOWN_BREED);
    assert(testCatOne.isFixed() == false);
    assert(testCatOne.getWeight() == UNKNOWN_WEIGHT);
    assert(!testCatOne.isFixed());
    assert(!testCatOne.validateCat());  // The default cat is invalid
    //testCatOne.printCat();
    cout << PROGRAM_NAME << ": test 1 passed" << endl;
    ///test 2
    assert(!testCatOne.validateCat());
    cout << PROGRAM_NAME << ": test 2 passed" << endl;
    ///test 3
    assert(!testCatOne.setName(nullptr ));
    cout << PROGRAM_NAME << ": test 3 passed" << endl;
    ///test 4
    assert(!testCatOne.setName(""));
    cout << PROGRAM_NAME << ": test 4 passed" << endl;
    ///test 5
    assert(testCatOne.setName("A"));
    cout << PROGRAM_NAME << ": test 5 passed" << endl;
    ///test 6
    assert(testCatOne.setName("0123456789012345678"));
    cout << PROGRAM_NAME << ": test 6 passed" << endl;
    ///test 7
    assert(!testCatOne.setName("01234567890123456789"));
    cout << PROGRAM_NAME << ": test 7 passed" << endl;
    ///test 8
    Cat testCatTwo = Cat();
    assert(testCatTwo.setGender( MALE ));
    cout << PROGRAM_NAME << ": test 8 passed" << endl;
    ///test 9
    assert(!testCatTwo.setGender( FEMALE ));
    cout << PROGRAM_NAME << ": test 9 passed" << endl;
    ///test 10
    assert(testCatTwo.setBreed( MANX ));
    cout << PROGRAM_NAME << ": test 10 passed" << endl;
    ///test 11
    assert(!testCatTwo.setBreed( SHORTHAIR ));
    cout << PROGRAM_NAME << ": test 11 passed" << endl;
    ///test 12
    assert(!testCatTwo.isFixed());
    testCatTwo.fixCat();
    assert(testCatTwo.isFixed());
    cout << PROGRAM_NAME << ": test 12 passed" << endl;
    ///test 13
    assert(!testCatTwo.setWeight( 0 ));
    cout << PROGRAM_NAME << ": test 13 passed" << endl;
    ///test 14
    assert(testCatTwo.setWeight( (1/float(1024) )));
    cout << PROGRAM_NAME << ": test 14 passed" << endl;
    ///test 15
    Cat testCatThree = Cat( "winston", MALE, SHORTHAIR, 1.7);
    assert( testCatThree.validateCat());
    cout << PROGRAM_NAME << ": test 15 passed" << endl;
    ///test 16
    Cat testCatFour = Cat( "winston", UNKNOWN_GENDER, SHORTHAIR, 1.7);
    Cat testCatFive = Cat( "winston", MALE, UNKNOWN_BREED, 1.7);
    Cat testCatSix = Cat( "winston", MALE, SHORTHAIR, UNKNOWN_WEIGHT);
    Cat testCatSeven = Cat( "winston", UNKNOWN_GENDER, UNKNOWN_BREED, 1.7);
    Cat testCatEight = Cat( "winston", MALE, UNKNOWN_BREED, UNKNOWN_WEIGHT);
    Cat testCatNine = Cat( "winston", UNKNOWN_GENDER, SHORTHAIR, UNKNOWN_WEIGHT);
    Cat testCatTen = Cat( "winston", UNKNOWN_GENDER, UNKNOWN_BREED, UNKNOWN_WEIGHT);
    assert(!testCatFour.validateCat());
    assert(!testCatFive.validateCat());
    assert(!testCatSix.validateCat());
    assert(!testCatSeven.validateCat());
    assert(!testCatEight.validateCat());
    assert(!testCatNine.validateCat());
    assert(!testCatTen.validateCat());
    cout << PROGRAM_NAME << ": test 16 passed" << endl;
    ///test 17
    assert(!(findCatByName("Bella") == nullptr));
    cout << PROGRAM_NAME << ": test 17 passed" << endl;
    assert(!(findCatByName("Bella") == nullptr));
    cout << PROGRAM_NAME << ": test 17 passed again" << endl;
    ///test 18
    assert((findCatByName("Belinda") == nullptr));
    cout << PROGRAM_NAME << ": test 18 passed" << endl;
    ////test 19
    assert(deleteCat(findCatByName( "Bella" )));
    cout << PROGRAM_NAME << ": test 19 passed" << endl;
    ///test 20
    assert(!deleteCat(findCatByName( "Bella" )));
    cout << PROGRAM_NAME << ": test 20 passed" << endl;

#endif

    printf("  /\\_/\\  (\n");
    printf(" ( ^.^ ) _)\n");
    printf("   \\\"/  (\n");
    printf(" ( | | )\n");
    printf("(__d b__)\n");

    cout << "Finished with Animal Farm 1" << endl;

}
///how do assert something or make a test that doesn't output its result???



