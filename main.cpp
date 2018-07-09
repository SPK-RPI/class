#include <iostream>
using namespace std;

class shapes
{
    float area;
    float radius;
    float side;
    float side1;
    float side2;
    int option;

  public:
    float circle(float radius)
    {

        area = 3.14 * radius * radius;

        return area;
    }
    float square(float side)
    {
        area = side * side;
        return area;
    }
    float rectangle(float side1, float side2)
    {
        area = side1 * side2;
        return area;
    }
    bool repeat()
    {
        char a = 'n';
        cout << "Go to main menue.(y/n)" << endl;
        cin >> a;
        if (a == 'y')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void mainMenu()
    {
        cout << "+====================================================+" << endl;
        cout << "| Chose an option:                                   |" << endl;
        cout << "| 1. Circle:                                         |" << endl;
        cout << "| 2. Square:                                         |" << endl;
        cout << "| 3. Rectangle:                                      |" << endl;
        cout << "+====================================================+" << endl;
        cout << "==>";
        cin >> option;
        switch (option)
        {
        case 1:

            cout << "| Enter the radius " << endl;
            cout << "| ==>";
            cin >> radius;
            cout << "| " << circle(radius) << endl;
            break;
        case 2:

            cout << "| Enter the side " << endl;
            cout << "| ==>";
            cin >> side;
            cout << "| " << square(side) << endl;
        case 3:
            cout << "| Enter the sides " << endl;
            cout << "| ==>";
            cin >> side1;
            cout << "| ==>";
            cin >> side2;
            cout << "| " << rectangle(side1, side2) << endl;
            break;
        default:
            cout << "| Not in options !!!" << endl;
            break;
        }
    }
};

//*********************************************************************************************

int main()
{
    for (;;)
    {
        shapes sh;
        sh.mainMenu();
        if (sh.repeat() == true)
        {
            sh.mainMenu();
            sh.repeat() == false;
        }
        else
        {
            system("pause");
            return 0;
        }
    }
    system("pause");
    return 0;
}
