///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCats.h
/// @version 1.0
///
/// @author  Aksel Sloan <@aksel@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

bool addCat (  const char catName[],
               const enum Gender catGender,
               const enum Breed catBreed,
               const bool catIsFixed,
               const float catWeight,
               const enum Color catCollarColor1,
               const enum Color catCollarColor2,
               const unsigned long long catLicense );
