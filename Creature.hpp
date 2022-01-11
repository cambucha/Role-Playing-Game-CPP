//
//  Creature.hpp
//  Chapter11Project
//
//  Author: Cameron Goldberg
//  Date: 11/10/19
//  Description: This details the base class Creature
//

//check if defined
#ifndef Creature_hpp
#define Creature_hpp

#include <iostream> //for io
#include <string> //to use string

class Creature
{
private:
    std::string type; //Species of creature
    int strength; //How much damage we can inflict
    int hitPoints; //How much damage we can sustain
public:
    void setSpecs(std::string t, int s, int h);
    //for changing the type, strength, or hitPoints
    //Postcondition: type = t, strength = s, hitPoints = h
    
    int getDamage();
    //Return strength based on given rules
    //1. Every creature inflicts damage that is a random number r,
    //   where 0 < r <= strength
    //2. Demons have a 5% chance of inflicting a demonix attack,
    //   which is an additional 50 damage points. Balrogs and
    //   Cyberdemons are demons
    //3. Elves have a 10% chance to inflict a magical attack that
    //   doubles the normal amount of damage
    //4. Balrogs are very fast, so they get to attack twice
    //Postcondition: species type and damage are outputted. Damage is also returned
    
    int getStrength();
    //return strength
    //Postcondition: strength is returned
    
    int getHitPoints();
    //return hitPoints
    //Postcondition: hitPoints are returned
    
    std::string getSpecies();
    //return species type
    //Postconditions: type is returned
    
    Creature();
    //default constructor
    //Postcondition: type = Unknown, strength = 10, hitPoints = 10
    
    Creature(std::string newType, int newStrength, int newHit);
    //constructor with parameters
    //Postcondition: type = newType, strength = newStrength, hitPoints = newHit
    
};

#endif /* Creature_hpp */
