//Sum of numbers

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum = sum + i;
    }
    cout<<"Value of sum is:"<<sum<<endl;
}
