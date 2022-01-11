//
//  main.cpp
//  Chapter11Project
//
//  Author: Cameron Goldberg
//  Date: 11/10/19
//  Description: This program utilizes the base class Creature
//               and its various derived classes to output
//               the results from each species. The user chooses
//               when to stop outputting the results
//

#include <iostream> //for io
#include <ctime> //for use with random number
#include "Creature.hpp" //to include this header file
#include "Human.hpp" //to include this header file
#include "Elves.hpp" //to include this header file
#include "Cyberdemon.hpp" //to include this header file
#include "Balrog.hpp" //to include this header file

int main() {

    srand(time(NULL));//for creating random number
    
    char loopCheck = 'y'; //to enter loop
    
    //while loop to repeatedly output results
    while(loopCheck == 'y' || loopCheck == 'Y'){ //loop while loopCheck == y or Y
        //creating Human and calling getDamage
        Human hum;
        hum.getDamage();
    
        //creating Elves and calling getDamage
        Elves el;
        el.getDamage();
    
        //creating Cyberdemon and calling getDamage
        Cyberdemon cy;
        cy.getDamage();
    
        //creating Balrog and calling getDamage
        Balrog bal;
        bal.getDamage();
        
        std::cout << std::endl;
        
        //ask user if they would like to output attacks again
        std::cout << "Type Y or y to output again. Type anything else to terminate program: ";
        std::cin >> loopCheck;
        std::cout << std::endl;
    }
    
    std::cout << "The damage has been done!" << std::endl; //funny statement before program terminates
    return 0;
}
