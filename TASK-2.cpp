  // TASK-2
  //Simple Calculator
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    char ch='y';
    while(ch=='y'){
    cout<<"LIST OF OPERATIONS\n1.Addition.\n2.Subtraction.\n3.Multiplication.\n4.Division.\n";
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    int choise;
    cout<<"Enter number corresponding to your choise: ";
    cin>>choise;
    switch(choise){
        case 1:
        cout<<a+b<<"\n";
        break;

        case 2:
        cout<<a-b<<"\n";
        break;

        case 3:
        cout<<a*b<<"\n";
        break;

        case 4:
        cout<<a/b<<"\n";
        break;

        default:
        cout<<"invalid Choise"<<"\n";
        break;

    }
    cout<<"Want to play again (y/n): ";
    cin>>ch;}
    return 0;
}