#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// Crate a struct data structure to store infromation:
struct GradeSystem
{
    string name;
    vector<int> scores;
    
};

int main()
{
    vector<GradeSystem> group_students;
    string student_name;
    int student_score;
    char choice;

    cout << "Student Grading System: " << endl;

    do {
        GradeSystem student;

        cout << "Please enter the student name: " << endl;
        cin >> student.name;

        cout << "Enter the student scores (-1 to finish): " << endl;
        while (cin >> student_score && student_score != -1){
            student.scores.push_back(student_score);
        }

        group_students.push_back(student);

        cout << "Do you want to enter another student's name and scores? (y/n): " << endl;
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Display the result:" << endl;
    for (const auto& student : group_students) {
        int sum = 0;
        int highest_score = student.scores[0];
        int lowest_score = student.scores[0];

        cout << "Student: " << student.name << endl;
        cout << "Scores: ";
        for (const auto& score : student.scores) {
            cout << score << " ";
            sum += score;
            highest_score = max(highest_score, score);
            lowest_score = min(lowest_score, score);
        }

        double average_score = static_cast<double>(sum) / student.scores.size();
        cout << endl;
        cout << "Average score: " << average_score << endl;
        cout << "Highest score: " << highest_score << endl;
        cout << "Lowest score: " << lowest_score << endl;
        cout << endl;
    }

    return 0;
}