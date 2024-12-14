#include <iostream>
using namespace std;

void Summ();
void Difference();
void Multiplication();
void Division();

int main()
{
    int action;

    cout << "Please, choose action : " << endl;
    cout << "1 : Summ \n2 : Difference \n3 : Multiplication \n4 : Division\n";
    cin >> action;

    switch(action)
    {
        case 1:
            Summ();
            break;
        case 2:
            Difference();
            break;
        case 3: 
            Multiplication();
            break;
        case 4: 
            Division();
            break;
    }



    return 0;
}

void Summ()
{
    int value1, value2;

    cout << "Enter Value1 and Value2 : " << endl; 
    cin >> value1 >> value2;

    cout << "Result = " << value1 + value2 << endl;
}



void Difference()
{
    int value1, value2;

    cout << "Enter Value1 and Value2 : " << endl;
    cin >> value1 >> value2;

    cout << "Result = " << value1 - value2 << endl;
}



void Multiplication()
{
    int value1, value2;

    cout << "Enter Value1 and Value2 : " << endl;
    cin >> value1 >> value2;

    cout << "Result = " << value1 * value2 << endl;
}



void Division()
{
    int value1, value2, result;

    cout << "Enter Value1 and Value2 : " << endl;
    cin >> value1 >> value2;

    cout << "Result = " << value1 / value2 << endl;
}