#include<iostream>
#include<climits>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number:"<<" ";
    cin>>x;

        int ans = 0;
        while(x != 0)
        {
            int digit = x % 10;
       if((ans>INT_MAX/10)||(ans>INT_MIN/10))
        ans = (ans * 10) + digit;
        x=x/10;
    }
    cout<<"Reverse integer is:"<<" "<<ans;
}