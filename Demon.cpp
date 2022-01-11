//
//  Demon.cpp
//  Chapter11Project
//
//  Author: Cameron Goldberg
//  Date: 11/10/19
//  Description: This details the derived class Demon. This class also
//               serves as a base class for the type Demon
//

#include <iostream> //for io
#include <string> //for using string
#include "Demon.hpp" //include this header file

int Demon::getDamage()
{
    int chance = rand() % 20;
    int demonDamage = Creature::getDamage();
    
    if(chance == 1)//5% chance of +50 damage
    {
        std::cout << "Demonic attack inflicts 50 additional damage points!" << std::endl;
        demonDamage = demonDamage + 50;
    }

    return demonDamage;
}

Demon::Demon()
{
    Creature::setSpecs("Demon", 10, 10);
}

Demon::Demon(std::string newType, int newStrength, int newHit):Creature(newType, newStrength, newHit)
{
}
