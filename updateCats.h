///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file updateCats.h
/// @version 1.0
///
/// @author  Aksel Sloan <@aksel@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once


extern bool updateCatName ( const int currentCat, const char newCatName[] );

extern bool fixCat ( const int currentCat );

extern bool updateWeight ( const int currentCat, const float newWeight );

extern bool updateCollarColor1 ( const int currentCat, enum Color newCollarColor1 );

extern bool updateCollarColor2 ( const int currentCat, enum Color newCollarColor2 );

extern bool updateLicense ( const int currentCat, const unsigned long long newLicense );
