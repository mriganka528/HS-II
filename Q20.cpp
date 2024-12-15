#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person(string n, int a)
    {
        name = n;
        age = a;
    }

    void displayPersonDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person
{
private:
    string studentID;

public:
    Student(string n, int a, string id) : Person(n, a)
    {
        studentID = id;
    }

    void displayStudentDetails()
    {
        displayPersonDetails();
        cout << "Student ID: " << studentID << endl;
    }
};

class Sports
{
protected:
    string sport;

public:
    Sports(string s)
    {
        sport = s;
    }

    void displaySportsDetails()
    {
        cout << "Sport: " << sport << endl;
    }
};

class ScholarAthlete : public Student, public Sports
{
private:
    float grade;

public:
    ScholarAthlete(string n, int a, string id, string s, float g) : Student(n, a, id), Sports(s)
    {
        grade = g;
    }

    void displayScholarAthleteDetails()
    {
        displayStudentDetails();
        displaySportsDetails();
        cout << "Grade: " << grade << endl;
    }
};

int main()
{
    cout << "--- Single Inheritance Example ---" << endl;
    Student student("Alice", 20, "S123");
    student.displayStudentDetails();

    cout << "\n--- Multiple Inheritance Example ---" << endl;
    ScholarAthlete scholarAthlete("Bob", 22, "S456", "Basketball", 8.5);
    scholarAthlete.displayScholarAthleteDetails();

    return 0;
}
