#include<bits/stdc++.h>
using namespace std;

class student{

    public:
    string name;
    int age;
    student(string n,int a){
        name=n;
        age=a;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
int main(){
    student s1("Rahul",20);

    cout<<"Printing Using object: "<<endl;
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Age: "<<s1.age<<endl;
}