///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file weight.h
/// @version 1.0
///
/// @author  Aksel Sloan <@aksel@hawaii.edu>
/// @date   21_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include <string>
#include "config.h"


class Weight {
    friend class Animal;

public:     ///enums & labels
    enum UnitOfMeasure { POUND, KILO, SLUG };
    static const std::string POUND_LABEL;
    static const std::string KILO_LABEL;
    static const std::string SLUG_LABEL;



    ///conversion scalars
    static const float KILOS_PER_POUND  ;
    static const float SLUGS_PER_POUND  ;


    ///unit converters
    static float fromKiloToPound ( float kiloIn ) noexcept;
    static float fromPoundToKilo ( float poundIn ) noexcept;
    static float fromSlugToPound ( float slugIn ) noexcept;
    static float fromPoundToSlug ( float poundIn ) noexcept;
    static float convertWeight ( float fromWeight, UnitOfMeasure fromUnit, UnitOfMeasure toUnit ) noexcept;


public:     ///hold the weights / knowns / max / unit of measure (basically all info about the cat
    float weightInPounds        ;
    float weightInKilos         ;
    float weightInSlugs         ;
    float verifiableWeight      ;

private:                ///check here if problems
    bool  bIsKnown              ;       ///is true if the weight is known
    bool  bHasMax               ;
    UnitOfMeasure unitOfMeasure ;
    float maxWeight             ;

public:     ///constructors
    Weight( );
    Weight( float newWeight );
    Weight( UnitOfMeasure newUnitOfMeasure );
    Weight( float newWeight, UnitOfMeasure newUnitOfMeasure );
    Weight( float newWeight, float newMaxWeight );
    Weight( UnitOfMeasure newUnitOfMeasure, float newMaxWeight );
    Weight( float newWeight, UnitOfMeasure newUnitOfMeasure, float newMaxWeight );

public:     ///destructors
    ~Weight( );


public:     ///setters
    void setWeight ( float newWeight );
    void setWeight ( float newWeight, UnitOfMeasure weightUnits );
private:
    void setMaxWeight ( float newMaxWeight );  //need to make private... no time

public:     ///getters
    float getWeight () const noexcept;     ///in pounds
    float getWeight ( UnitOfMeasure weightUnits ) const;
    UnitOfMeasure getUnits () const noexcept;
    bool isWeightKnown () const noexcept;
    bool hasMaxWeight () const noexcept;
    float getMaxWeight () const noexcept;
    void dump () const noexcept;

public:     ///validation
    bool validate() const noexcept;

    bool isWeightValid (const float inputWeight ) const noexcept;



    ///operators
    ///comparison
    bool operator==(const Weight &rhs_Weight) const;
    ///addition
    Weight& operator+=( float rhs_addToWeight );


};

///put to operator
extern std::ostream& operator<<( std::ostream& lhs_stream
        ,const Weight::UnitOfMeasure rhs_UnitOfMeasure ) ;

