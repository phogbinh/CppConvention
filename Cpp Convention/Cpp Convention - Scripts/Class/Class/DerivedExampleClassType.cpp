/* File description:
This is the source code file 'DerivedExampleClassType.cpp'. This is the implementation for the class
'DerivedExampleClassType'. */

#include <vector>

using namespace std;

#include "ExampleClassType.h"
#include "DerivedExampleClassType.h"

DerivedExampleClassType::~DerivedExampleClassType()
{
    /* Body intentionally empty */
}

DerivedExampleClassType::DerivedExampleClassType() : DerivedExampleClassType(vector<int>(), int())
{
    /* Body intentionally empty */
}

DerivedExampleClassType::DerivedExampleClassType(const DerivedExampleClassType& objectValue) : ExampleClassType(objectValue), _bonus(objectValue._bonus)
{
    /* Body intentionally empty */
}

DerivedExampleClassType::DerivedExampleClassType(const vector<int>& dataValue, const int& bonusValue) : ExampleClassType(dataValue), _bonus(bonusValue)
{
    /* Body intentionally empty */
}

DerivedExampleClassType& DerivedExampleClassType::operator=(const DerivedExampleClassType& rightObject)
{
    if (this != &rightObject)
    {
        ExampleClassType::operator=(rightObject);
        _bonus = rightObject._bonus;
    }

    return (*this);
}

const int DerivedExampleClassType::CalculateTotalValue() const
{
    int totalValue = ExampleClassType::CalculateTotalValue();
    totalValue += _bonus;
    return (totalValue);
}