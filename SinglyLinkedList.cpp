///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file SinglyLinkedList.cpp
/// @version 1.0
///
/// @author  Aksel Sloan <@aksel@hawaii.edu>
/// @date   27_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "SinglyLinkedList.h"

SinglyLinkedList::SinglyLinkedList() {}

void SinglyLinkedList::push_front(Node *newNode) {
    ///validate
    ///case: non-empty list
    if ( headPtr != nullptr ){
        newNode->next = headPtr;
        headPtr = newNode;
    }
    ///case: empty list
    if ( headPtr == nullptr ){
        newNode->next = nullptr;
        headPtr = newNode;
    }
    else{
        std::cout << PROGRAM_NAME << ": push_front: list neither empty nor non-empty" << std::endl;
    }
    count ++;
}


