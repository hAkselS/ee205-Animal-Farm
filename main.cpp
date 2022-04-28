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
#include "Mammal.h"

#define DEBUG

using namespace std;


int main(){
    cout << "Starting " << PROGRAM_NAME << endl ;

     //NOW THAT MAMMAL AND ANIMAL HAVE AN ABSTRACT METHOD THEY CAN NO LONGER BE INSTANTIATED

     SinglyLinkedList catDB;

     catDB.push_front( new Cat( "Loki",  Color::CREAM, true,  Gender::MALE,   1.0 ));
     catDB.push_front( new Cat( "Milo",  Color::BLACK, true,  Gender::MALE,   1.1 ) );
     catDB.push_front( new Cat( "Bella", Color::BROWN, true,  Gender::FEMALE, 1.2 ) ) ;
     catDB.push_front( new Cat( "Kali",  Color::CALICO, true, Gender::FEMALE, 1.3 ) ) ;
     catDB.push_front( new Cat( "Trin",  Color::WHITE, true,  Gender::FEMALE, 1.4 ) ) ;

     catDB.insert_after(catDB.get_first(), new Cat( "Chili",Color::GINGER, true,Gender::MALE,   1.5 ) );

     for( Animal* pAnimal = (Animal*)catDB.get_first() ; pAnimal != nullptr ; pAnimal = (Animal*)List::get_next( (Node*)pAnimal ) ) {
        cout << pAnimal->speak() << endl;
     }
     catDB.validate();
     catDB.dump();
     catDB.deleteAllNodes();
     catDB.dump();

    printf("  /\\_/\\  (\n");
    printf(" ( ^.^ ) _)\n");
    printf("   \\\"/  (\n");
    printf(" ( | | )\n");
    printf("(__d b__)\n");

    cout << "Done with " << PROGRAM_NAME << endl;
    return( EXIT_SUCCESS ) ;
}



