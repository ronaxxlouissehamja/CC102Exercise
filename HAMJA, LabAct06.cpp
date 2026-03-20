#include <iostream>
#include <iomanip>
using namespace std;


struct student {
    int studentID;
    string name;
    string course;
    float gpa;
    string standing;
};


string getStanding(float gpa) {
    if (gpa >= 90) return "Excellent";
    else if (gpa >= 80) return "Very Good";
    else if (gpa >= 70) return "Good";
    else if (gpa >= 60) return "Passing";
    else return "Failed";
}


bool isDuplicate(student arr[], int size, int id) {
    for (int i = 0; i < size; i++) {
        if (arr[i].studentID == id) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    char again;

    do {
        cout << "Enter number of students: ";
        cin >> n;

        student s[n]; 
        
        for (int i = 0; i < n; i++) {
            cout << "\nStudent " << i + 1 << endl;

            
            do {
                cout << "Enter Student ID: ";
                cin >> s[i].studentID;

                if (isDuplicate(s, i, s[i].studentID)) {
                    cout << "ID already exists! Enter another.\n";
                }
            } while (isDuplicate(s, i, s[i].studentID));

            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, s[i].name);

            cout << "Enter Course: ";
            getline(cin, s[i].course);

            cout << "Enter GPA (0-100): ";
            cin >> s[i].gpa;

            
            s[i].standing = getStanding(s[i].gpa);
        }

        
        cout << "\n\n===== STUDENT RECORD =====\n";
        cout << left << setw(10) << "ID"
             << setw(20) << "Name"
             << setw(15) << "Course"
             << setw(10) << "GPA"
             << setw(15) << "Standing" << endl;

        for (int i = 0; i < n; i++) {
            cout << left << setw(10) << s[i].studentID
                 << setw(20) << s[i].name
                 << setw(15) << s[i].course
                 << setw(10) << s[i].gpa
                 << setw(15) << s[i].standing << endl;
        }

        
        cout << "\nRun again? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    return 0;
}