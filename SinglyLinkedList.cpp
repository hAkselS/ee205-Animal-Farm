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
#include "cassert"
#include "SinglyLinkedList.h"
#include "Cat.h"
            ///constructor
SinglyLinkedList::SinglyLinkedList() {}

            ///push front
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
    /*else{
        std::cout << PROGRAM_NAME << ": push_front: list neither empty nor non-empty" << std::endl;
    }*/
    count ++;
}
            ///pop front
Node *SinglyLinkedList::pop_front() {
    if ( headPtr != nullptr ){
        Node* newHeadPtr = headPtr->next;
        Node* oldHeadPtr = headPtr;
        headPtr = newHeadPtr;
        count--;
        return oldHeadPtr;
    }
    else {
        std:cout << PROGRAM_NAME << ": pop_front: empty list" << endl;
        return nullptr;
    }
}
            ///dump
void SinglyLinkedList::dump() const {
    std::cout << "SinglyLinkedList: head=[" << headPtr << "]" << std::endl;
    if( headPtr != nullptr ){
        Node* iterationNode = headPtr;
        for(int i = 0; i < count ; i++){
            iterationNode->dump();
            iterationNode = iterationNode->next;
        }
    }
}

            ///validate
bool SinglyLinkedList::validate() const {
    assert( validate()) ;
    return true;
}




