//
//  Cyberdemon.hpp
//  Chapter11Project
//
//  Author: Cameron Goldberg
//  Date: 11/10/19
//  Description: This details the derived class Cyberdemon
//

//check if defined
#ifndef Cyberdemon_hpp
#define Cyberdemon_hpp

#include <iostream> //for io
#include <string> //to use string
#include "Demon.hpp" //include this header file

class Cyberdemon: public Demon
{
public:
    int getDamage();
    //returns and outputs damage
    //Postcondition: species type and damage are outputted. Damage is also returned
    
    Cyberdemon();
    //default constructor
    //Postcondition: type = Cyberdemon, strength = 10, hitPoints = 10
    
    Cyberdemon(std::string newType, int newStrength, int newHit);
    //constructor with parameters
    //Postcondition: type = newType, strength = newStrength, hitPoints = newHit
};

#endif /* Cyberdemon_hpp */
