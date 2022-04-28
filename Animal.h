///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Animal.h
/// @version 1.0
///
/// @author  Aksel Sloan <@aksel@hawaii.edu>
/// @date   21_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include <iostream>
#include "config.h"
#include "Node.h"
#include "Weight.h"

using namespace std;
class Animal : public Node {

private:    ///private member variables
    string species;
    string classification;
    Gender gender = Gender::UNKNOWN_GENDER;
    Weight weightClass;
public:     ///public member variables
    static const string KINGDOM_NAME;

public:     ///constructors
    ///minimal constructor
    Animal( const t_weight nexMaxWeight, const std::string newClassification, const std::string newSpecies  );
    ///maximal constructor
    Animal ( const Gender newGender, const float newWeight, const float newMaxWeight,
             const std::string newClassification, const std::string newSpecies );

public:     ///getters
    std::string getKingdom() const noexcept;
    std::string getClassification() const noexcept;
    std::string getSpecies() const noexcept;
    Gender getGender() const noexcept;
    //t_weight getWeight() const; ALREADY IN WEIGHT CLASS

protected:  ///setters
    void setClassification ( std::string newClassification);
    ///you can add more here

public:     ///abstract methods
    virtual std::string speak() const = 0;

public:
    void dump()const;
    bool validate() const;
};

inline std::ostream& operator<<( std::ostream& lhs_stream, const Gender& rhs_Gender ) {
    switch (rhs_Gender) {
        case Gender::UNKNOWN_GENDER:
            lhs_stream << "Unknown gender";
            break;
        case Gender::MALE:
            lhs_stream << "Male";
            break;
        case Gender::FEMALE:
            lhs_stream << "Female";
            break;
        default:

            throw std::out_of_range(PROGRAM_NAME ": Gender not mapped to a string");
    }
    return lhs_stream;
}


