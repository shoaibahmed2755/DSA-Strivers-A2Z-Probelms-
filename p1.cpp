#include <bits/stdc++.h>
using namespace std;

int main() {
    //cout << "Hello World" << endl;
    int a[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
        // Printing the address of each element
        cout << "Address of a[" << i << "] = " << (a + i) << endl;
    }

    return 0;
}
