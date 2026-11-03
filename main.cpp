#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main()
{
    int courses;
    double grade, creditHours;
    double totalCredits = 0.0;
    double totalGradePoints = 0.0;

    double previousCredits, previousCGPA;
    double semesterGPA, overallCGPA;

    cout << "====================================\n";
 cout << "CODEALPHA CGPA CALCULATOR\n";
 cout <<"====================================\n";

    cout << "Enter number of courses: ";
    if (!(cin >> courses) || courses <= 0)
    {
        cout << "Invalid number of courses.\n";
        return 1;
    }

    cout << "\nEnter grade points (0.00 to 4.00) and credit hours for each course.\n";

    for (int i = 1; i <= courses; i++)
    {
        cout << "\nCourse " << i << '\n';

        cout << "Enter grade points: ";
        if (!(cin >> grade) || grade < 0.0 || grade > 4.0)
        {
            cout << "Invalid grade points. Enter a value from 0.00 to 4.00.\n";
            return 1;
        }

        cout << "Enter credit hours: ";
        if (!(cin >> creditHours) || creditHours <= 0.0)
        {
            cout << "Invalid credit hours. Enter a value greater than 0.\n";
            return 1;
        }

        totalCredits += creditHours;
        totalGradePoints += grade * creditHours; cout << "Course " << i << " grade points:"<< fixed << setprecision(2) << grade << '\n';
    }

    semesterGPA = totalGradePoints /totalCredits;

    cout << "\nEnter previous completed credit hours (enter 0 for first semester): ";
    if (!(cin >> previousCredits) ||previousCredits < 0.0)
    {
        cout << "Invalid previous credit hours.\n";
        return 1;
    }

    cout << "Enter previous CGPA (enter 0 for first semester): ";
    if (!(cin >> previousCGPA) || previousCGPA < 0.0 || previousCGPA > 4.0)
    {
        cout << "Invalid previous CGPA. Enter a value from 0.00 to 4.00.\n";
        return 1;
    }

    if (previousCredits == 0.0 && previousCGPA != 0.0)
    {
        cout << "Previous CGPA must be 0 when previous credit hours are 0.\n";
        return 1;
    }

    double cumulativeCredits = previousCredits + totalCredits;
    double cumulativeGradePoints =
        (previousCGPA * previousCredits) + totalGradePoints;

    overallCGPA = cumulativeGradePoints / cumulativeCredits;

   cout<<"\n====================================\n";
    cout << "FINAL RESULT\n";
    cout<<"====================================\n";
    cout << "Total courses: " << courses << '\n';
    cout << "Total semester credits: " << totalCredits << '\n';
    cout << "Total semester grade points: " << totalGradePoints << '\n';
    cout << "Semester GPA: " << semesterGPA << '\n';
    cout << "Overall CGPA: " << overallCGPA << '\n';
    cout<<"====================================\n";

    return 0;
}
