//
//  Cyberdemon.cpp
//  Chapter11Project
//
//  Author: Cameron Goldberg
//  Date: 11/10/19
//  Description: This details the derived class Cyberdemon
//
#include <string> //to use string
#include "Cyberdemon.hpp" //include this header file
#include "Demon.hpp" //include this header file

int Cyberdemon::getDamage(){
    int cyberDamage = Demon::getDamage();
    
    std::cout << "\t" <<  Creature::getSpecies() << " attacks for " << cyberDamage
    << " point(s)!" << std::endl;
    return cyberDamage;
}

Cyberdemon::Cyberdemon()
{
    Creature::setSpecs("Cyberdemon", 10, 10);
}

Cyberdemon::Cyberdemon(std::string newType, int newStrength, int newHit):Demon(newType, newStrength,newHit)
{
}
