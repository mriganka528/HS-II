#include <iostream>
using namespace std;

struct Student
{
    string name;
    int rollNo;
    float physics, chemistry, math, biology, computerScience;
};

float calculatePercentage(Student student)
{
    float totalMarks = student.physics + student.chemistry + student.math + student.biology + student.computerScience;
    return (totalMarks / 500) * 100;
}

int main()
{
    Student student;

    cout << "Enter student's name: ";
    cin >> student.name;
    cout << "Enter roll number: ";
    cin >> student.rollNo;
    cout << "Enter marks in Physics: ";
    cin >> student.physics;
    cout << "Enter marks in Chemistry: ";
    cin >> student.chemistry;
    cout << "Enter marks in Mathematics: ";
    cin >> student.math;
    cout << "Enter marks in Biology: ";
    cin >> student.biology;
    cout << "Enter marks in Computer Science: ";
    cin >> student.computerScience;

    float percentage = calculatePercentage(student);

    cout << "\n--- Student Details ---\n";
    cout << "Name: " << student.name << endl;
    cout << "Roll Number: " << student.rollNo << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}