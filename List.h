///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file List.h
/// @version 1.0
///
/// @author  Aksel Sloan <@aksel@hawaii.edu>
/// @date   21_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include "Node.h"

class List: public Node {
protected:
    ///MEMBER VARIABLES
    Node* headPtr = nullptr;
    unsigned int count = 0;
public:
    static Node* get_next( const Node* currentNode );
public:
    ///METHODS
    bool isEmpty() const;
    unsigned int size() const;
    bool isIn( Node* theNode ) const;
    // bool isSorted() const; //@todo, write operator and manage is sorted
    Node* get_first() const noexcept;

    void deleteAllNodes();

    ///VIRTUAL FUNCTIONS
    virtual Node* pop_front() = 0;
    virtual void dump() const = 0;
    virtual bool validate() const = 0 ;

};

