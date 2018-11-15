/* File description:
This is the source code file 'ExampleClassType.cpp'. This is the implementation for the class
'ExampleClassType'. */

#include <iostream>

using namespace std;

#include "ExampleClassType.h"

ExampleClassType::ExampleClassType() : ExampleClassType(0)
{
    /* Body intentionally empty */
}

ExampleClassType::ExampleClassType(int dataValue) : _data(dataValue)
{
    if (_data < 0)
    {
        //Solving error
    }
}