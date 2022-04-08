///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file config.h
/// @version 1.0
///
/// @author  Aksel Sloan <@aksel@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

//typedefs
typedef float Weight;
typedef int NumCats;

//defines
#define MAX_NAME_LEN 20
#define MAX_CATS 1024
#define UNKNOWN_WEIGHT -1

#define PROGRAM_NAME "Animal Farm 2"

//enums
//declare enums
enum           Gender {UNKNOWN_GENDER = 0, FEMALE =1 , MALE = 2 };
enum           Breed  {UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX};
enum           Color  {BLACK, WHITE, RED, BLUE, GREEN, PINK};
