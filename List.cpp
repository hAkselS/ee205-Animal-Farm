///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file List.cpp
/// @version 1.0
///
/// @author  Aksel Sloan <@aksel@hawaii.edu>
/// @date   21_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "config.h"
#include "List.h"


        ///check if list is empty
bool List::isEmpty() const {
    if ( headPtr == nullptr ){
        return true;
    }
    return false;
}

unsigned int List::size() const {
    return count;
}

bool List::isIn(Node *theNode) const {
    if( theNode == nullptr ){
        std::cout << PROGRAM_NAME << ": isIn: cannot search for null pointer" << std::endl;
        return false;
    }
    Node* currentNode = headPtr;
    while( currentNode->next != nullptr ){
        if ( currentNode == theNode ){
            return true;
        }
        currentNode = currentNode->next;
    }
    return false;
}


