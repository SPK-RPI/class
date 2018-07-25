#include <iostream>
using namespace std;
int i;
int arr[20];
int n;
void mainScreen()
{

    cout << "Enter number of elements : " << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Enter " << i << " th "
             << "number " << endl;
        cin >> arr[i];
    }
}
int reversing()
{
}
void searching()
{
int i,val;
for(i=0;i<n;i++){
    if(arr[i]==val){
        return i;
    }
}
}
void sorting()
{
}
void disp()
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int option;
    mainScreen();
    cout << "Select an option" << endl;
    cout << "1.Display" << endl;
    cout << "2.Search" << endl;
    cout << "3.Sort" << endl;
    cout << "4.Reverse" << endl;
    cout << "Select an option.." << endl;
    cin >> option;
    switch (option)
    {
    case 1:
        cout << "=====================================" << endl;
        cout<<"Stored values are as follows....";
        disp();
        break;
    case 2:
        cout << "=====================================" << endl;
        searching();
        break;
        case 3:
        cout<<"Enter a number: "<<endl;
        case 4:
        cout<<""<<endl;
    }
    system("pause");
    return 0;
}