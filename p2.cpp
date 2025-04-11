#include <bits/stdc++.h>
using namespace std;

void greetWhatsApp(string name = "Guest") {
    cout << "Hi " << name << ", thank you for choosing us for your cake!" << endl;
}

int main() {
    greetWhatsApp();          
    greetWhatsApp("Sumukha");
    greetWhatsApp("Shoaib");
    return 0;
}
