#include <iostream>
using namespace std;

int main() {
    char again;

    do {
        int students, quizzes;

        cout << "Enter number of students: ";
        cin >> students;

        cout << "Enter number of quizzes: ";
        cin >> quizzes;

        double scores[50][50];
        double average[50];


        for (int i = 0; i < students; i++) {
            double sum = 0;
            cout << "\nEnter scores for Student " << i + 1 << ":\n";

            for (int j = 0; j < quizzes; j++) {
                cout << "Quiz " << j + 1 << ": ";
                cin >> scores[i][j];
                sum += scores[i][j];
            }

            average[i] = sum / quizzes;
        }


        cout << "\n--------\n";

        for (int i = 0; i < students; i++) {
            cout << "Student " << i + 1 << "\n";
            cout << "Scores: ";

            for (int j = 0; j < quizzes; j++) {
                cout << scores[i][j] << " ";
            }

            cout << "\nAverage: " << average[i] << endl;
            cout << "--------\n";
        }

        cout << "Run program again? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    return 0;
}
