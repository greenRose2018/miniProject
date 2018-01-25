//
//  Controller.cpp
//  miniProject
//
//  Created by Morales, Brittney on 1/25/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

Controller:: Controller()
{
    
}

void Controller:: start()
{
    secondArray();
    stuff();
    //myFirstArray();
    //forLoop();
}
int Controller:: myFirstArray()
{
    int myArray [20];
    
    for(int index = 0; index < 20; index++)
    {
        myArray[index] = index + 100;
    }
    for (int j = 0; j < 20; j++)
    {
        cout << myArray[j] << endl;
    }
    
    return 0;
}
void Controller:: forLoop()
{
    for(int index = 0; index < 10; index+=1)
    {
        cout << "This loop has execucted " << index + 1 << " times" << endl;
    }
}
