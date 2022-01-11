//
//  Elves.hpp
//  Chapter11Project
//
//  Author: Cameron Goldberg
//  Date: 11/10/19
//  Description: This details the derived class Elves
//

//check if defined
#ifndef Elves_hpp
#define Elves_hpp

#include <iostream> //for io
#include <string> //to use string
#include "Creature.hpp" //include this header file

class Elves: public Creature
{
public:
    int getDamage();
    //returns and outputs damage
    //10% chance to double damage
    //Postcondition: species type and damage are outputted. Damage is also returned
    
    Elves();
    //default constructor
    //Postcondition: type = Elf, strength = 10, hitPoints = 10
    
    Elves(std::string newType, int newStrength, int newHit);
    //constructor with parameters
    //Postcondition: type = newType, strength = newStrength, hitPoints = newHit
};

#endif /* Elves_hpp */
