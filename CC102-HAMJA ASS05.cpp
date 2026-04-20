#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
   
    ofstream outFile("original.txt");
    outFile << "One\nTwo\nThree\nFour\nFive\nSix";
    outFile.close();


    ifstream inFile("original.txt");
    vector<string> words;
    string word;

    while (getline(inFile, word)) {
        words.push_back(word);
    }
    inFile.close();


    sort(words.begin(), words.end());

    
    ofstream sortedFile("sorted.txt");
    for (int i = 0; i < words.size(); i++) {
        sortedFile << words[i] << endl;
    }
    sortedFile.close();

    cout << "Sorting complete. Check sorted.txt file." << endl;

    return 0;
}