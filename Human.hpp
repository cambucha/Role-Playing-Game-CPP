//
//  Human.hpp
//  Chapter11Project
//
//  Author: Cameron Goldberg
//  Date: 11/10/19
//  Description: This details the derived class Human
//

//check if defined
#ifndef Human_hpp
#define Human_hpp

#include <iostream> //for io
#include <string> //to use string
#include "Creature.hpp" //include this header file

class Human: public Creature
{
public:
    int getDamage();
    //returns and outputs damage
    //Postcondition: species type and damage are outputted. Damage is also returned
    
    Human();
    //default constructor
    //Postcondition: type = Human, strength = 10, hitPoints = 10
    
    Human(std::string newType, int newStrength, int newHit);
    //constructor with parameters
    //Postcondition: type = newType, strength = newStrength, hitPoints = newHit
};

#endif /* Human_hpp */
