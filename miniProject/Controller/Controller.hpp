//
//  Controller.hpp
//  miniProject
//
//  Created by Morales, Brittney on 1/25/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Controller_hpp // make sure is never repeated in the class
#define Controller_hpp // both must be unique

#include <iostream>

class Controller
{
private:
    //data members and helper methods
protected:
    //Things that need to only be used by subclasses
public:
    //Anyone can see this.
    Controller();
    void start();
    int myFirstArray();
    int secondArray();
    std:: string stuff();
    void forLoop();
};

#endif /* Controller_hpp */
