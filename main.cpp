///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 07d - AnimalFarm0 - EE 205 - Spr 2022
///
/// Usage: This C file will define a function that can store cat data.
///   catData base will hold difference aspects of each cat such as
///   the cats weight, gender name and color
/// Intput: when calling this function:
//    catDatabase ( char array, enum , enum , bool , float )
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
#include "catDatabase.h"
#include "addCats.h"
#include "reportCats.h"
#include "updateCats.h"
#include "deleteCats.h"
#include "Cat.h"

//#define DEBUG
#define TEST
using namespace std;
int main(){
    cout << "Starting Animal Farm 1" << endl;

//creat two test cats
    Cat testCatOne = Cat();
    testCatOne.printCat();

    Cat testCatTwo = Cat( "chilibean", MALE, SPHYNX, 7.7 );
    testCatTwo.fixCat();
    testCatTwo.printCat();




    /*


#ifdef TEST
    printf("Adding cats\n");
#endif
    addCat( "Bob" , MALE, PERSIAN, true, 8.5, BLACK, WHITE, 101);
    //assert(  addCat( "Bob" , MALE, PERSIAN, true, 8.5 ) == true );

    assert ( addCat( "AlanBrilliant" , FEMALE,
                     PERSIAN, false, 152.1, PINK, RED, 102 ) == true );
#ifdef DEBUG
    printf( "number of cats numCat = [%i]\n", numCats);
#endif

#ifdef TEST
    printf( "testing validation in addCat\n");
    //repeat name
    assert(  addCat( "AlanBrilliant" , FEMALE, PERSIAN,
                     false, 152.1, PINK, RED, 99 ) ==  false );
    //no name
    assert(  addCat( "" , FEMALE, PERSIAN,
                     false, 152.1, PINK, RED, 98 ) == false);
    //long name
    assert(  addCat( "AlanBrilliantisabrokeandignorantcheekyfellowwithcurlyhairandalongbeardddshrtsdjshdrksjdhrkh" ,
                     FEMALE, PERSIAN, false, 152.1, PINK, RED, 97 ) == false );
    //0 weight
    assert(  addCat( "VeryLightCat" ,
                     FEMALE, PERSIAN, false, 0, PINK, RED, 96 ) == false );
#endif

    //good cats
    addCat( "DanusTorbalds" , MALE, SHORTHAIR, true, 9.6, PINK, GREEN, 103 );
    addCat( "SecretCat" , UNKNOWN_GENDER, UNKNOWN_BREED, true, 6.2, RED, BLUE, 104 );
    addCat( "FemCat" , FEMALE, MANX, false, 9.7, PINK, PINK, 105 );
    addCat( "Roxy" , FEMALE, MAINE_COON, true, 8.8, PINK, RED, 106 );
    addCat( "DavidGilmor" , MALE, SHORTHAIR, true, 7.7, BLACK, RED, 107 );
    addCat( "RogerWaters" , MALE, SPHYNX,  false, 8.3, WHITE, PINK, 108 );
    addCat( "NickMason" , MALE, SPHYNX,  true, 8.7, GREEN, BLUE, 109 );
    addCat( "RichardWright" , MALE, SPHYNX,  true, 6.3, BLUE, RED, 110 );
    //extra cat
#ifdef TEST
    addCat( "ExtraCat" , MALE, SPHYNX,  true, 8.3, BLUE, BLUE, 95 );
#endif

    //REPORT CATS
#ifdef TEST
    printf( "testing printCat and printAllCats\n");
    printCat ( 7 );
    //check the bad cat output
    //printCat( 11 ); no longer a bad cat b/c database size increased
    printAllCats();
    printf( "testing find cat\n" );
    findCat ("DavidGilmor");
    findCat ("deadCat");

    //UPDATE CATS
    printf( "testing updateCats\n");
    updateCatName ( 7 , "WogerRaters88");
    fixCat ( 7 );
    updateWeight ( 7, 0);
    updateWeight ( 7, 120.00 );
    updateCollarColor1 ( 7, RED );
    updateCollarColor2 ( 7, RED );
    updateLicense ( 7, 69420 );
    printCat ( 7 );
    //duplicate name
    updateCatName( 2, "DavidGilmor");
    //long name
    updateCatName( 1, "reallyreallyreallyreallyreallylongcatname" );
    //empty name
    updateCatName( 2, "" );
#endif

    //DELETE CATS
#ifdef TEST
    printf( "testing delete all cats\n");
    deleteAllCats ();
    printAllCats ();
#endif
*/

    cout << "Finished with Animal Farm 1" << endl;

}
