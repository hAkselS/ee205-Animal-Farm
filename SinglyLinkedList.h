///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file SinglyLinkedList.h
/// @version 1.0
///
/// @author  Aksel Sloan <@aksel@hawaii.edu>
/// @date   27_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include "List.h"
#include "Node.h"


class SinglyLinkedList : public List {
public:
    ///constructor
    SinglyLinkedList();

    ///PUBLIC METHODS
    void push_front( Node* newNode );
    Node* pop_front() override; /// return first node in singly linked list and remove it from the list

    //void insert_after( Node* currentNode, Node* newNode );
    void dump() const override;
    bool validate() const override;



};



