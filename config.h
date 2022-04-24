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
#include <iostream>
#include <iomanip>
//typedefs
typedef float t_weight; //refactor to t_weight
typedef int NumCats;

//defines
#define MAX_NAME_LEN 20
#define MAX_CATS 1024
#define UNKNOWN_WEIGHT -1

#define PROGRAM_NAME "Animal Farm 2"

//enums
//declare enums
enum class          Gender {UNKNOWN_GENDER = 0, FEMALE =1 , MALE = 2 };
enum class          Breed  {UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX};
enum class          Color  {BLACK, WHITE, RED, BLUE, GREEN, PINK};

///put to operators
//@todo, how should I deal with this?
/*std::ostream& operator<<( std::ostream& lhs_stream
        ,const Gender rhs_UnitOfMeasure ) {
    switch (rhs_UnitOfMeasure) {
        case Gender::UNKNOWN_GENDER:
            return lhs_stream << Gender::UNKNOWN_GENDER; //@todo this will be a number
        case Gender::MALE:
            return lhs_stream << Gender::MALE;
        case Gender::FEMALE:
            return lhs_stream << Gender::FEMALE;
        default:
            throw std::out_of_range("The unit can’t be mapped to a string");
    }
}*/


//printing macros
/// Format the heading for dumping members of a class to the console
///
/// Print =====================
#define PRINT_HEADING_FOR_DUMP                                              \
    /* Print =========================================================== */ \
    std::cout << std::setw(80) << std::setfill( '=' ) << "" << std::endl
/// Format a line for dumping the members of a class to the console.
/// Setup the fields for printing (space pad, left justify, etc.)
#define FORMAT_LINE_FOR_DUMP( className, member )         \
    std::cout << std::setfill( ' ' )  /* Space pad    */  \
              << std::left            /* Left justify */  \
              << std::boolalpha  /* Print `true` or `false` for `bool`s */ \
              << std::setw(8)  << (className)             \
              << std::setw(20) << (member)                \
              << std::setw(52)  /* (data) */


