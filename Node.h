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
#ifndef _EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_NODE_H
#define _EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_NODE_H


class Node {
    ///allow list and singlylinked to access protected and pirvate functions
//friend class SinglyLinkedList;
    friend class List;
protected:
    Node* next = nullptr;
    //virtual override for >
    //void dump();

};


#endif //_EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_NODE_H
