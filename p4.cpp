#include<bits/stdc++.h>
using namespace std;

class student{

    public:
    string name;
    int age;
    int sem;
    student(string n,int a, int b){
        name=n;
        age=a;
        sem=b;
    }
    string name_getter(){
        return name;
    }
    int age_getter(){
        return age;
    }
    int sem_getter(){
        return sem;
    }
};
int main(){
    student s1("Rahul",20,7);

    // cout<<"Printing Using object: "<<endl;
    cout<<"Name: "<<s1.name_getter()<<endl;
    cout<<"Age: "<<s1.age_getter()<<endl;
    cout<<"Semister: "<<s1.sem_getter()<<endl;
    
    getch();
}