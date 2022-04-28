///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Color.h
/// @version 1.0
///
/// @author  Aksel Sloan <@aksel@hawaii.edu>
/// @date   27_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include "config.h"
#pragma once

enum class  	Color {
    UNKNOWN_COLOR,
    BLACK,
    BROWN,
    WHITE,
    RED,
    BLUE,
    GREEN,
    GINGER,
    CREAM,
    CINNAMON,
    CALICO
};


inline std::ostream& operator<<( std::ostream& lhs_stream, const Color& rhs_Color ){
    switch( rhs_Color ) {
        case Color::UNKNOWN_COLOR:
            lhs_stream << "Unknown Color";
            break;
        case Color::BLACK:
            lhs_stream << "Black";
            break;
        case Color::BLUE:
            lhs_stream << "Blue";
            break;
        case Color::GREEN:
            lhs_stream << "Green";
            break;
        case Color::PINK:
            lhs_stream << "Pink";
            break;
        case Color::RED:
            lhs_stream << "Red";
            break;
        case Color::WHITE:
            lhs_stream << "White";
            break;
        case Color::CALICO:
            lhs_stream << "Calico";
            break;
        case Color::BROWN:
            lhs_stream << "Brown";
            break;
        case Color::CREAM:
            lhs_stream << "Cream";
            break;
        case Color::GINGER:
            lhs_stream << "Ginger";
            break;
        default:
            std::cout << PROGRAM_NAME << ": color put to switch error" << std::endl;
    }
    return lhs_stream;
}
