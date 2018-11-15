/* File description:
This is the header file 'ExampleClassType.h'. This is the API for the class 'ExampleClassType'. Value
of this type is data. The value is input and output as natural number. */

#ifndef EXAMPLE_CLASS_TYPE_H
#define EXAMPLE_CLASS_TYPE_H
class ExampleClassType
{
    public:
        ~ExampleClassType();
        //Destructor comment

        ExampleClassType();
        //Default constructor comment

        ExampleClassType(const ExampleClassType& objectValue);
        //Copy constructor comment

        ExampleClassType(const vector<int>& dataValue);
        //Full constructor comment

        ExampleClassType operator++();
        //Operator overloading function of the increment operator (prefix version) comment

        ExampleClassType operator++(int);
        //Operator overloading function of the increment operator (postfix version) comment

        int& operator[](const int& index);
        //Operator overloading function of the array operator comment

        ExampleClassType& operator=(const ExampleClassType& rightObject);
        //Operator overloading function of the assignment operator comment

        friend const ExampleClassType operator+(const ExampleClassType& firstObject, const ExampleClassType& secondObject);
        //Operator overloading function of the addition operator comment

        friend istream& operator>>(istream& inputStream, ExampleClassType& object);
        //Operator overloading function of the extraction operator comment

        friend ostream& operator<<(ostream& outputStream, const ExampleClassType& object);
        //Operator overloading function of the insertion operator comment

    private:
        vector<int> _data;

};
#endif