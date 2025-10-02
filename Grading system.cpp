#include <iostream>
#include <iomanip> 
#include <string>
using namespace std;

int main() {
    string usn, fullName;

    // Student Info
    cout << "Enter USN: ";
    cin >> usn;
    cin.ignore(); 
    cout << "Enter Full Name: ";
    getline(cin, fullName);

    // Quizzes
    double q1, q2, q3, q4, q5, q6;
    cout << "\nEnter 2 Prelim Quizzes (%):\n";
    cout << "Quiz 1: "; cin >> q1;
    cout << "Quiz 2: "; cin >> q2;

    cout << "\nEnter 2 Midterm Quizzes (%):\n";
    cout << "Quiz 1: "; cin >> q3;
    cout << "Quiz 2: "; cin >> q4;

    cout << "\nEnter 2 Final Quizzes (%):\n";
    cout << "Quiz 1: "; cin >> q5;
    cout << "Quiz 2: "; cin >> q6;

    double totalQuiz = (q1 + q2 + q3 + q4 + q5 + q6) / 6;

    // Activities
    double a1, a2, a3;
    cout << "\nEnter Activity 1 (Prelim) %: "; cin >> a1;
    cout << "Enter Activity 2 (Midterm) %: "; cin >> a2;
    cout << "Enter Activity 3 (Finals) %: "; cin >> a3;

    double totalActivity = (a1 + a2 + a3) / 3;

    // Exams
    double e1, e2, e3;
    cout << "\nEnter Prelim Exam Score %: "; cin >> e1;
    cout << "Enter Midterm Exam Score %: "; cin >> e2;
    cout << "Enter Final Exam Score %: "; cin >> e3;

    double totalExam = (e1 + e2 + e3) / 3;

    // Grades
    double lmsGrade = (totalQuiz + totalExam) / 2;
    double f2fGrade = (totalExam + totalActivity) / 2;
    double finalGrade = (lmsGrade + f2fGrade) / 2;

    // Display Results
    cout << "\n=================================\n";
    cout << "USN: " << usn << endl;
    cout << "Name: " << fullName << endl;

    cout << fixed << setprecision(2); 
    cout << "Total Quiz Scores: " << totalQuiz << "%" << endl;
    cout << "Total Activity Scores: " << totalActivity << "%" << endl;
    cout << "Total Major Exam Scores: " << totalExam << "%" << endl;
    cout << "LMS Grade: " << lmsGrade << "%" << endl;
    cout << "F2F Grade: " << f2fGrade << "%" << endl;

    // Final grade 
    cout << "Final Grade: " << (int)(finalGrade + 0.5) << "%" << endl;

    if (finalGrade >= 75)
        cout << "RESULT: PASSED" << endl;
    else
        cout << "RESULT: FAILED" << endl;
    cout << "=================================\n";

    return 0;
}
