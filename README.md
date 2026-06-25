# Student-Marks-Analyzer-CPP
A simple console-based C++ application that analyzes students marks by calculationg the average, highest score, lowest score, and pass/fail statistics.
## Features
- Enter marks for any number of students
- Input validation (accepts marks between 0 to 100)
- Calculates:
  - Average marks
  - Highest marks
  - Lowest marks
  - Number of passed students
  - Number of failed students
- Uses C++ vectors for dynamic data storage
- Beginner-friendly and easy-to-understand code
## Technologies Used
- C++
- Standar Templates Library (STL)
  - 'vector'
- VS Code
## How to run
1. Compile the code:
   ``` bash
   g++ students_marks-analyzer.cpp -o analyzer
   ```
2. Run the proram:
   ``` bash
   ./analyzer
   ```
3. Enter:
   - Number of students
   - Marks for each student
4. View the generated report.
## Sample Output
```text
Enter number of students: 5

Enter marks of student-1: 78
Enter marks of student-2: 92
Enter marks of student-3: 65
Enter marks of student-4: 88
Enter marks of student-5: 72

=====Students Marks Report=====
Average: 78.8
Highest: 92
Lowest: 65
Passed: 4
Failed: 1
```
## Concepts Practiced
- Vectors
- Loopa
- Conditional Statements
- Input validation
- Basics Statistics
- Problem Solving
- User Input Handling
## Future Improvement
- Grade Calculation
- Display student ranks
- Save report to file
- Load marks from a file
- Search a student's marks
- Display a marks histogram
## Author
**Anirudha Kale**
