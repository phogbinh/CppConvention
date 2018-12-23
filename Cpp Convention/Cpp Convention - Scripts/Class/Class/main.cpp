#include <iostream>
#include <vector>

using namespace std;

#include "ExampleClassType.h"
#include "DerivedExampleClassType.h"

int main(int argc, char* argv[])
{
    ExampleClassType* basePtr = new ExampleClassType({ 1, 2, 3, 4 });
    DerivedExampleClassType* derivedPtr = dynamic_cast<DerivedExampleClassType*>(basePtr);

    if (derivedPtr == NULL)
    {
        cout << "Cast failed!" << endl;
    }
    else
    {
        cout << derivedPtr->CalculateTotalValue() << endl;
    }

    delete basePtr;
    system("pause");
    return (0);
}