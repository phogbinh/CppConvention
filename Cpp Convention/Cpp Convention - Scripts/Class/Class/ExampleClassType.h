/* File description:
This is the header file 'ExampleClassType.h'. This is the API for the class 'ExampleClassType'. Value
of this type is data. The value is input and output as natural number. */

#ifndef EXAMPLE_CLASS_TYPE_H
#define EXAMPLE_CLASS_TYPE_H
class ExampleClassType
{
    public:
        ExampleClassType();
        //Default constructor comment

        ExampleClassType(int dataValue);
        //Full constructor comment

    private:
        int _data;
};
#endif