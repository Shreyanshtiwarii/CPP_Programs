#include<iostream>
using namespace std;
// WAP to generate Mark-sheet.
// getline(cin, name); for string with spaces
int main()
{
    string name, grade;
    int roll_no, marks, total_marks = 500;
    float percentage;

    cout << "Enter Student Name: ";
    cin>>name;
    cout << "Enter Roll Number: ";
    cin >> roll_no;
    cout << "Enter Marks Obtained (out of 500): ";
    cin >> marks;

    percentage = (marks / (float)total_marks) * 100;// Type casting to float

    if (percentage >= 90)
        grade = "A+";
    else if (percentage >= 80)
        grade = "A";
    else if (percentage >= 70)
        grade = "B+";
    else if (percentage >= 60)
        grade = "B";
    else if (percentage >= 50)
        grade = "C";
    else
        grade = "F";

    cout << "Name: " << name << endl;
    cout << "Roll Number: " << roll_no << endl;
    cout << "Total Marks: " << total_marks << endl;
    cout << "Marks Obtained: " << marks << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;
    return 0;
}