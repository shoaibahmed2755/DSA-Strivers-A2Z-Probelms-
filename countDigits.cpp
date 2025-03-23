#include<bits/stdc++.h>
using namespace std;
int countDig(int n)
{
    int cnt = 0;
    while(n>0){
        n=n/10;
        cnt++;
    }
    return cnt;
}
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    cout<<"The number of digits in the given number are: "<<countDig(n);
    return 0;   
}