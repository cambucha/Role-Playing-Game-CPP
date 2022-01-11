//
//  Balrog.hpp
//  Chapter11Project
//
//  Author: Cameron Goldberg
//  Date: 11/10/19
//  Description: This details the derived class Balrog
//

//check if defined
#ifndef Balrog_hpp
#define Balrog_hpp

#include <iostream> //for io
#include <string> //to use string
#include "Demon.hpp" //include this header file

class Balrog: public Demon
{
public:
    int getDamage();
    //returns and ouputs damage
    //additional damage turn
    //Postcondition: species type and damage are outputted. Damage is also returned
    
    Balrog();
    //default constructor
    //Postcondition: type = Balrog, strength = 10, hitPoints = 10
    
    Balrog(std::string newType, int newStrength, int newHit);
    //constructor with parameters
    //Postcondition: type = newType, strength = newStrength, hitPoints = newHit
};

#endif /* Balrog_hpp */
