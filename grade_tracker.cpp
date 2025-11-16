#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {
    vector<int> grades;
    int score;
    int numStudents = 0;

    cout << "Student Grade Tracker (Enter scores, enter -1 to finish):\n";

    while (true) {
        cout << "Enter score for student " << numStudents + 1 << ": ";
        cin >> score;

        if (score == -1) {
            break;
        }
        if (score >= 0 && score <= 100) {
            grades.push_back(score);
            numStudents++;
        } else {
            cout << "Score must be between 0 and 100.\n";
        }
    }

    if (grades.empty()) {
        cout << "No scores were entered.\n";
        return 0;
    }

    // Calculate average
    double sum = accumulate(grades.begin(), grades.end(), 0.0);
    double average = sum / grades.size();

    // Find max and min grade
    int maxGrade = *max_element(grades.begin(), grades.end());
    int minGrade = *min_element(grades.begin(), grades.end());

    cout << "\n--- Grade Summary ---\n";
    cout << "Total Students: " << grades.size() << endl;
    cout << "Average Grade: " << average << endl;
    cout << "Highest Grade: " << maxGrade << endl;
    cout << "Lowest Grade: " << minGrade << endl;

    return 0;
}
