/*
Creating this project coming back from python 12/8/2023
*/

#include <iostream>
using namespace std;

class MathFunctions
{
public:
    double x, y;
    void mainMenu();
    double addTwoNums(double x, double y);
    double subTwoNums(double x, double y);
    double multiTwoNums(double x, double y);
    double divTwoNums(double x, double y);
};

void MathFunctions::mainMenu()
{
    cout << endl;
    cout << "Main Menu" << endl;
    cout << "A. Add" << endl;
    cout << "B. Subtract" << endl;
    cout << "C. Multiply" << endl;
    cout << "D. Divide" << endl;
    cout << "Make A Choice: ";
}

double MathFunctions::addTwoNums(double x, double y)
{
    return x + y;
}

double MathFunctions::subTwoNums(double x, double y)
{
    if (x > y)
    {
        return x - y;
    }
    else if (y > x)
    {
        return y - x;
    }
    else
    {
        return 0;
    }
}

double MathFunctions::multiTwoNums(double x, double y)
{
    return x * y;
}

double MathFunctions::divTwoNums(double x, double y)
{
    if (x > y)
    {
        return (y / x);
    }
    else if (y > x)
    {
        return (y / x);
    }
    else if (x = y)
    {
        return 1;
    }
    else
    {
        return 0.0;
    }
}

int main()
{
    MathFunctions mF;
    double x = 0.0, y = 0.0;
    char option, choice;

    do
    {
        cout << "Number 1: ";
        cin >> x;
        cout << "Number 2: ";
        cin >> y;
        mF.mainMenu();
        cin >> option;

        switch (toupper(option))
        {
        case 'A':
            cout << "Result: " << mF.addTwoNums(x, y) << endl;
            break;
        case 'B':
            cout << "Result: " << mF.subTwoNums(x, y) << endl;
            break;
        case 'C':
            cout << "Result: " << mF.multiTwoNums(x, y) << endl;
            break;
        case 'D':
            cout << "Result: " << mF.divTwoNums(x, y) << endl;
            break;
        default:
            cout << "Invalid option" << endl;
            break;
        }
        cout << endl;
        cout << "Again? (y/n): ";
        cin >> choice;

    } while (toupper(choice) == 'Y');
    cout << "Goodbye" << endl;

    return 0;
}