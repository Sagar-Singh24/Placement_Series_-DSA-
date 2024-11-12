//Power of number with function

#include<iostream>
using namespace std;

int power (int a , int b){
    int ans = 1;

for(int i=1; i<=b; i++){
    ans = ans * a;
}
return ans;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    int a,b;
    cin>>a>>b;
   
   int answer = power(a,b);
    cout<<"Answer is:" <<answer<<endl;
    return 0;
}
