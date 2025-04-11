#include <bits/stdc++.h>
using namespace std;

int f(int n) {
    if (n == 0) return 1;  
    return n * f(n - 1);   
}

int main() {
    cout << "Enter the number to find factorial: ";
    int n;
    cin >> n;

    cout << "Factorial of " << n << " is " << f(n) << endl; 
    return 0;
}
