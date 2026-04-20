#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outFile;
    ifstream inFile;
    ofstream copyFile;
    string line;

    
    outFile.open("color.txt");

    if (!outFile) {
        cout << "Error creating file!" << endl;
        return 1;
    }

    outFile << "Red" << endl;
    outFile << "Blue" << endl;
    outFile << "Green" << endl;
    outFile << "Yellow" << endl;
    outFile << "Purple" << endl;

    outFile.close();

    
    inFile.open("color.txt");

    if (!inFile) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    
    copyFile.open("color_copy.txt");

    if (!copyFile) {
        cout << "Error creating copy file!" << endl;
        return 1;
    }
    
    
    while (getline(inFile, line)) {
        copyFile << line << endl;
    }

    
    inFile.close();
    copyFile.close();

    cout << "File copied successfully!" << endl;

    return 0;
}