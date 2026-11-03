CodeAlpha CGPA Calculator
A beginner-friendly C++ console application that calculates a student's semester GPA and cumulative CGPA using course grade points and credit hours.
Features
Takes the number of courses as input.
Takes grade points and credit hours for each course.
Calculates total semester credits.
Calculates total semester grade points.
Calculates semester GPA.
Calculates overall CGPA using the student's previous CGPA and completed credit hours.
Checks basic input ranges and displays the results.
Formula
Course grade points = Grade points × Credit hours
Semester GPA = Total semester grade points ÷ Total semester credits
Overall CGPA = (Previous CGPA × Previous completed credits + Current semester grade points) ÷ (Previous completed credits + Current semester credits)
Requirements
A C++ compiler such as GCC (g++).
Windows, Linux, or macOS terminal.
How to Compile and Run
Windows (PowerShell / VS Code terminal)
g++ main.cpp -o cgpa
.\cgpa.exe
Linux / macOS
g++ main.cpp -o cgpa
./cgpa
Example Input
Number of courses: 3

Course 1 grade points: 3.5
Course 1 credit hours: 3

Course 2 grade points: 3.0
Course 2 credit hours: 3

Course 3 grade points: 4.0
Course 3 credit hours: 2

Previous completed credit hours: 20
Previous CGPA: 3.2
Example Result
Total courses: 3
Total semester credits: 8.00
Total semester grade points: 27.50
Semester GPA: 3.44
Overall CGPA: 3.27
Important Notes
This program assumes a 4.00 grading scale. Adjust the validation range if your institution uses a different scale.
Enter numeric grade points (for example, 3.50), not letter grades such as A or B.
For a first-semester student, enter 0 for previous completed credit hours and 0 for previous CGPA.
Confirm your university's GPA/CGPA calculation policy before using the result officially.
Project
Project name: CodeAlpha_CGPA_Calculator
Language: C++