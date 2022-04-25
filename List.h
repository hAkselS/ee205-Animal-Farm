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
#ifndef _EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_LIST_H
#define _EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_LIST_H
#include "Node.h"

class List {
protected:
    Node* headPtr = nullptr;
    unsigned int count = 0;

    ///methods (public?)
    ///METHODS
    bool empty() const;
    unsigned int size() const;
    bool isIn( Node* theNode ) const;

    bool isSorted() const;
    Node* get_first() const noexcept ;
    ///get_first(),
    ///get_next(),
    ///deleteAllNodes(), calls pop front
    ///dump()
    ///validate()



};


#endif //_EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_LIST_H
