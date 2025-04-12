#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    int age;
    double salary;
    string dept;

public:
    Employee(string n, int a, double s, string d)
    {
        name = n;
        age = a;
        salary = s;
        dept = d;
    }

    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    double getSalary()
    {
        return salary;
    }
    string getDept()
    {
        return dept;
    }

    void setName(string n)
    {
        name = n;
    }
    void setAge(int a)
    {
        age = a;
    }
    void setSalary(double s)
    {
        salary = s;
    }
    void setDept(string d)
    {
        dept = d;
    }
};

class Faculty : public Employee
{
private:
    string subject;
    int numStudents;
    string section;

public:
    Faculty(string n, int a, double s, string d, string sub, int num, string sec) : Employee(n, a, s, d)
    {
        subject = sub;
        numStudents = num;
        section = sec;
    }

    string getSubject()
    {
        return subject;
    }
    int getNumStudents()
    {
        return numStudents;
    }
    string getSection()
    {
        return section;
    }

    void setSubject(string sub)
    {
        subject = sub;
    }
    void setNumStudents(int n)
    {
        numStudents = n;
    }
    void setSection(string sec)
    {
        section = sec;
    }
};

class LabInstructor : public Faculty
{
private:
    string labName;
    string resourcePersonName;

public:
    LabInstructor(string n, int a, double s, string d, string sub, int num, string sec, string lab, string rp) : Faculty(n, a, s, d, sub, num, sec)
    {
        labName = lab;
        resourcePersonName = rp;
    }

    string getLabName() { 
        return labName; 
    }
    string getResourcePersonName() { 
        return resourcePersonName; 
    }

    void setLabName(string name) { 
        labName = name; 
    }
    void setResourcePersonName(string name) { 
        resourcePersonName = name; 
    }
};

int main()
{
    Faculty f("Shoaib", 35, 60000.5, "Science", "Maths", 100, "A");
    LabInstructor l("Suhash", 30, 50000.0, "Computer Science", "Programming", 80, "B", "CS Lab", "Dr. Smith");

    cout << "Faculty Name: " << f.getName() << ", Subject: " << f.getSubject() << ", Section: " << f.getSection() << endl;
    cout << "Lab Instructor Name: " << l.getName() << ", Lab: " << l.getLabName()
         << ", Resource Person: " << l.getResourcePersonName() << endl;

    return 0;
}
