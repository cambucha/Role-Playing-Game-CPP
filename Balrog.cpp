//
//  Balrog.cpp
//  Chapter11Project
//
//  Author: Cameron Goldberg
//  Date: 11/10/19
//  Description: This details the derived class Balrog
//

#include <iostream> //for io
#include <string> //to use string
#include "Balrog.hpp" //include this header file

int Balrog::getDamage()
{
    int balrogDamage = Demon::getDamage();
    int balrogDamage2 = rand() % Creature::getStrength() + 1;
    
    std::cout << "Balrog speed attack inflicts " << balrogDamage2 << " additional damage point(s)!" << std::endl;
    
    balrogDamage = balrogDamage + balrogDamage2;
    std::cout << "\t" <<  Creature::getSpecies() << " attacks for " << balrogDamage
    << " point(s)!" << std::endl;
    return balrogDamage;
}

Balrog::Balrog()
{
    Creature::setSpecs("Balrog", 10, 10);
}

Balrog::Balrog(std::string newType, int newStrength, int newHit):Demon(newType, newStrength, newHit)
{
}
