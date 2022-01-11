//
//  Creature.cpp
//  Chapter11Project
//
//  Author: Cameron Goldberg
//  Date: 11/10/19
//  Description: This details the base class Creature
//

#include <string> //to use string
#include "Creature.hpp" //include this header file

void Creature::setSpecs(std::string t, int s, int h)
{
    type = t;
    strength = s;
    hitPoints = h;
}

int Creature::getDamage()
{
    return rand() % strength + 1; //returning random number within range based on strength
}

int Creature::getStrength()
{
    return strength;
}

int Creature::getHitPoints()
{
    return hitPoints;
}

std::string Creature::getSpecies(){
    return type;
}

Creature::Creature()
{
    type = "Unkown";
    strength = 10;
    hitPoints = 10;
}

Creature::Creature(std::string newType, int newStrength, int newHit)
{
    setSpecs(newType, newStrength, newHit);
}
