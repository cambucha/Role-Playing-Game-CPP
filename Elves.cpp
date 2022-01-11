//
//  Elves.cpp
//  Chapter11Project
//
//  Author: Cameron Goldberg
//  Date: 11/10/19
//  Description: This details the derived class Elves
//

#include <iostream> //for io
#include <string> //to use string
#include "Elves.hpp" //include this header file

int Elves::getDamage()
{
    int chance = rand() % 10;
    int elfDamage = Creature::getDamage();
    
    if(chance == 1)//10% chance of doubling damage
    {
        std::cout << "Magical attack inflicts " << elfDamage << " additional damage point(s)!" << std::endl;
        elfDamage = 2 * elfDamage;
    }
    std::cout << "\t" <<  Creature::getSpecies() << " attacks for " << elfDamage
              << " point(s)!" << std::endl;
    return elfDamage;
}

Elves::Elves()
{
    Creature::setSpecs("Elf", 10, 10);
}

Elves::Elves(std::string newType, int newStrength, int newHit):Creature(newType, newStrength, newHit)
{
}
