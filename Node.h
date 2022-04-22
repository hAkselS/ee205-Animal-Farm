///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Node.h
/// @version 1.0
///
/// @author  Aksel Sloan <@aksel@hawaii.edu>
/// @date   21_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include <iostream>

#include "config.h"

class Node {
    ///allow list and singlylinked to access protected and pirvate functions
//friend class SinglyLinkedList;
    friend class List;
protected:
    Node* next = nullptr;
    //virtual override for >

public:
    virtual void dump() const {
        FORMAT_LINE_FOR_DUMP( "Node", this ) << this << std::endl;
        FORMAT_LINE_FOR_DUMP( "Node", next ) << next << std::endl;
    }
    virtual bool validate() const {
        if ( next == nullptr ){
            std::cout << "validate: empty lists are valid" << std::endl;
            return true;
        }
        return true;
    }
public:
    virtual bool operator>(const Node& rhs_Node ){
        std::cout << "operator > always returns true" << std::endl;
        return true;
    }
};



