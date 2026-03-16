#include <iostream>
using namespace std;

void analyzeGrades(int *arr, int students, int subjects) {

    int highest = *(arr);

    cout << "\nGrade Matrix:\n";

    for(int i = 0; i < students; i++) {
        int sum = 0;

        for(int j = 0; j < subjects; j++) {

            int value = *(arr + i*subjects + j);

            cout << value << " ";
            sum += value;

            if(value > highest) {
                highest = value;
            }
        }

        float avg = (float)sum / subjects;
        cout << " | Average: " << avg << endl;
    }

    cout << "\nHighest Grade: " << highest << endl;
}

int main() {

    int students, subjects;

    cout << "Enter number of students: ";
    cin >> students;

    cout << "Enter number of subjects: ";
    cin >> subjects;

    int grades[50][50];

    cout << "\nEnter grades:\n";

    for(int i = 0; i < students; i++) {
        for(int j = 0; j < subjects; j++) {
            cout << "Student " << i+1 << " Subject " << j+1 << ": ";
            cin >> grades[i][j];
        }
    }

    analyzeGrades(&grades[0][0], students, subjects);

    return 0;
}