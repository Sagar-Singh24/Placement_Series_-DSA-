#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;

        cout<<"1.Addition"<<endl;
        cout<<"2.Substracton"<<endl;
        cout<<"3.Multiplication"<<endl;
        cout<<"4.Division"<<endl;
        cout<<"5.Modular Oparator"<<endl;


    int choice;
    cout<<"Enter choice:";
    cin>>choice;

    switch(choice){

        case 1: cout<<"Sum is:"<<(a + b)<<endl;
        break;

        case 2: cout<<"Difference is:"<<(a - b)<<endl;
        break;

        case 3: cout<<"Multiplication is:"<<(a * b)<<endl;
        break;

        case 4: cout<<"Division is:"<<(a / b)<<endl;
        break;

        case 5: cout<<"Modular is:"<<(a % b)<<endl;
        break;

        default: cout<<"Please enter a valid operation"<<endl;
    }

    
    
}