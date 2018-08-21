//WRITE A PROGRAMME TO IMPLIMENT THE CONCEPT OF STACK WITH PUSH ,POP,DISPLAY AND EXIT OERATIONS.
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
class stack
{
    int stk[5];
    int top;

  public:
    stack()
    {
        top = -1;
    }
    void push(int x)
    {
        if (top > 4)
        {
            cout << "Stack Overflow " << endl;
            return;
        }
        stk[++top] = x;
        cout << "Inserted " << x << endl;
        cout << "====== MENU ======" << endl;
    }
    void pop()
    {
        if (top < 0)
        {
            cout << "Stack under flow " << endl;
            return;
        }
        cout << "Delete " << stk[top--];
        cout << "====== MENU ======" << endl;
    }
    void display()
    {
        if (top < 0)
        {
            cout << "Stack empty " << endl;
            return;
        }
        cout<<"Elements in the stack "<<endl;
        for (int i = top; i >= 0; i--)
            cout <<stk[i] << " ";
        cout << "\n====== MENU ======" << endl;
    }
};
int main()
{
    //clrscr();
    int ch;
    stack st;
    while (true)
    {
        cout << "====== MENU ======" << endl;
        cout << "1.Push" << endl;
        cout << "2.Pop" << endl;
        cout << "3.Display" << endl;
        cout << "4.Exit" << endl;
        cout << "Enter your choice ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter the element ";
            cin >> ch;
            st.push(ch);
            break;
        case 2:
            st.pop();
            break;
        case 3:
            st.display();
            break;
        case 4:
            exit(0);
        default:
            cout << "That's not in the options." << endl;
        }
    }
    return (false);
}
