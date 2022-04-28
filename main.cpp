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
#include "Animal.h"
#include "Cat.h"
#include "Weight.h"
#include "SinglyLinkedList.h"

#define DEBUG

using namespace std;


int main(){
    cout << "Starting " << PROGRAM_NAME << endl ;

   /* ///animal class testing
    cout << "make animalOne" << endl;
    Animal animalOne ( 42.01, "cattus", "fattus" );
    ///test getters
    cout << animalOne.getKingdom() << endl;
    cout << animalOne.getClassification() << endl;
    cout << animalOne.getSpecies() << endl;
    animalOne.validateAnimal();
    animalOne.dump(); /
    cout << endl;

    cout << "make animalTwo" << endl;
    Animal animalTwo ( Gender::MALE, 10, 12, "doggus", "loggus");
    animalTwo.dump();
    cout << endl;

    cout << "make animalThree" << endl;
    Animal animalThree ( Gender::FEMALE, 13, 14, "chungus", "bungus");
    animalThree.dump();*/



   SinglyLinkedList catDB ;





    printf("  /\\_/\\  (\n");
    printf(" ( ^.^ ) _)\n");
    printf("   \\\"/  (\n");
    printf(" ( | | )\n");
    printf("(__d b__)\n");

    cout << "Finished with " << PROGRAM_NAME << endl;

}
///how do assert something or make a test that doesn't output its result???
//@todo figure out how to print the enum classes


