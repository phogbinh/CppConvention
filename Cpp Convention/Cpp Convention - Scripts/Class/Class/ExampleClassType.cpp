/* File description:
This is the source code file 'ExampleClassType.cpp'. This is the implementation for the class
'ExampleClassType'. */

#include <iostream>
#include <vector>

using namespace std;

#include "ExampleClassType.h"

ExampleClassType::~ExampleClassType()
{
    /* Body intentionally empty */
}

ExampleClassType::ExampleClassType() : ExampleClassType(vector<int>())
{
    /* Body intentionally empty */
}

ExampleClassType::ExampleClassType(const ExampleClassType& objectValue) : ExampleClassType(objectValue._data)
{
    /* Body intentionally empty */
}

ExampleClassType::ExampleClassType(const vector<int>& dataValue) : _data(dataValue)
{
    if (_data.size() < 0)
    {
        //Solving error
    }
}

ExampleClassType ExampleClassType::operator++()
{
    for (auto element : _data)
    {
        element++;
    }

    return (ExampleClassType(_data));
}

ExampleClassType ExampleClassType::operator++(int ignoreMe)
{
    vector<int> temp = _data;

    for (auto element : _data)
    {
        element++;
    }

    return (ExampleClassType(temp));
}

int& ExampleClassType::operator[](const int& index)
{
    return (_data[index]);
}

ExampleClassType& ExampleClassType::operator=(const ExampleClassType& rightObject)
{
    if (this != &rightObject)
    {
        _data = rightObject._data;
    }

    return (*this);
};

const ExampleClassType operator+(const ExampleClassType& firstObject, const ExampleClassType& secondObject)
{
    vector<int> resultData;
    int smallerSize = (firstObject._data.size() < secondObject._data.size()) ? firstObject._data.size() : secondObject._data.size();
    int biggerSize = (firstObject._data.size() > secondObject._data.size()) ? firstObject._data.size() : secondObject._data.size();

    for (unsigned int index = 0; index < smallerSize; index++)
    {
        resultData.push_back((firstObject._data)[index] + (secondObject._data)[index]);
    }

    for (unsigned int index = smallerSize; index < biggerSize; index++)
    {
        if (firstObject._data.size() == biggerSize)
        {
            resultData.push_back((firstObject._data)[index]);
        }
        else
        {
            resultData.push_back((secondObject._data)[index]);
        }
    }

    return (ExampleClassType(resultData));
}

istream& operator>>(istream& inputStream, ExampleClassType& object)
{
    for (auto element : object._data)
    {
        inputStream >> element;
    }

    return (inputStream);
}

ostream& operator<<(ostream& outputStream, const ExampleClassType& object)
{
    for (auto element : object._data)
    {
        outputStream << element << " ";
    }

    outputStream << endl;
    return (outputStream);
}

const int ExampleClassType::CalculateTotalValue() const
{
    int totalValue = 0;

    for (auto element : _data)
    {
        totalValue += element;
    }

    return (totalValue);
}