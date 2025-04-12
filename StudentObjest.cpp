#include <bits/stdc++.h>
using namespace std;

class student
{
private:
    string name;
    int sem;
    int roll;
    double marks;

public:
    student(string n, int s, int r, double m)
    {
        name = n;
        sem = s;
        roll = r;
        marks = m;
    }

    string name_getter()
    {
        return name;
    }

    int sem_getter()
    {
        return sem;
    }

    int roll_getter()
    {
        return roll;
    }

    double marks_getter()
    {
        return marks;
    }
    void sem_setter(int s)
    {
        sem = s;
    }
    void marks_setter(double m)
    {
        marks = m;
    }
    void printAll()
    {
        cout << name << " " << sem << " " << roll << " " << marks << endl;
    }
};

int main()
{
    student s1("Rohan", 3, 10, 85.5);
    s1.printAll();
    s1.sem_setter(4);
    cout << "[s1.sem_setter(4);] after using this setter method we get: " << s1.sem_getter() << endl;
    s1.marks_setter(90.5);
    cout << "[s1.marks_setter(90.5);] after using this setter we get: " << s1.marks_getter() << endl;
    student s2("Shoaib", 5, 9, 81.5);
    cout << endl;
    s2.printAll();
    s2.sem_setter(6);
    cout << "[s2.sem_setter(6);] after using this setter method we get: " << s2.sem_getter() << endl;
    s2.marks_setter(98.5);
    cout << "[s2.marks_setter(98.5);] after using this setter we get: " << s2.marks_getter() << endl;
    return 0;
}
