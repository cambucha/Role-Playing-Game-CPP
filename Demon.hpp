//
//  Demon.hpp
//  Chapter11Project
//
//  Author: Cameron Goldberg
//  Date: 11/10/19
//  Description: This details the derived class Demon. This class also
//               serves as a base class for the type Demon
//

//check if defined
#ifndef Demon_hpp
#define Demon_hpp

#include <iostream> //for io
#include <string> //to use string
#include "Creature.hpp" //include this header file

class Demon: public Creature
{
public:
    int getDamage();
    //returns damage for demon types
    //5% chance for +50 damage
    //Postcondition: species type and damage are outputted. Damage is also returned
    
    Demon();
    //default constructor
    //Postcondition: type = Demon, strength = 10, hitPoints = 10
    
    Demon(std::string newType, int newStrength, int newHit);
    //constructor with parameters
    //Postcondition: type = newType, strength = newStrength, hitPoints = newHit
};

#endif /* Demon_hpp */
