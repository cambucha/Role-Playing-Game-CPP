//
//  Human.cpp
//  Chapter11Project
//
//  Author: Cameron Goldberg
//  Date: 11/10/19
//  Description: This details the derived class Human
//

#include <iostream> //for io
#include <string> //to use string
#include "Human.hpp" //include this header file

int Human::getDamage(){
    int humanDamage = Creature::getDamage();
    
    std::cout << "\t" << Creature::getSpecies() << " attacks for " << humanDamage
              << " point(s)!" << std::endl;
    return humanDamage;
}

Human::Human()
{
    Creature::setSpecs("Human", 10, 10);
}

Human::Human(std::string newType, int newStrength, int newHit):Creature(newType, newStrength,newHit)
{
}
