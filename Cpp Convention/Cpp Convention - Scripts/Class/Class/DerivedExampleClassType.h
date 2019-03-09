/* File description:
This is the header file 'DerivedExampleClassType.h'. This is the API for the class 'DerivedExampleClassType'. */

#ifndef DERIVED_EXAMPLE_CLASS_TYPE_H
#define DERIVED_EXAMPLE_CLASS_TYPE_H
class DerivedExampleClassType : public ExampleClassType
{
    public:
        virtual ~DerivedExampleClassType();
        //Destructor

        DerivedExampleClassType();
        //Default constructor

        DerivedExampleClassType(const DerivedExampleClassType& objectValue);
        //Copy constructor

        DerivedExampleClassType(const vector<int>& dataValue, const int& bonusValue);
        //Full constructor

        DerivedExampleClassType& operator=(const DerivedExampleClassType& rightObject);
        //Operator overloading function of the assignment operator

        const int CalculateTotalValue() const override;
        //Derived class virtual member function comment

    private:
        int _bonus;

};
#endif
