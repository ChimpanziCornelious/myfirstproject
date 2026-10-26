#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

// Function to reverse the string (Requirement v)
string Reverse(string str) {
    reverse(str.begin(), str.end());
    return str;
}

int main() {
    // Requirement i: Create and write to the text file
    ofstream outFile("module.txt");
    if (outFile.is_open()) {
        outFile << "This is the Advanced Computer Programming Module";
        outFile.close();
    } else {
        cout << "Unable to open file for writing." << endl;
        return 1;
    }

    // Requirement ii: Open the text file and assign contents to fileData variable
    ifstream inFile("module.txt");
    string fileData;
    if (inFile.is_open()) {
        getline(inFile, fileData);
        inFile.close();
    } else {
        cout << "Unable to open file for reading." << endl;
        return 1;
    }

    cout << "File Content: " << fileData << "\n\n";

    // Requirement iii: Calculate and output the number of vowels
    int vowelCount = 0;
    for (char c : fileData) {
        char lowerC = tolower(c);
        if (lowerC == 'a' || lowerC == 'e' || lowerC == 'i' || lowerC == 'o' || lowerC == 'u') {
            vowelCount++;
        }
    }
    cout << "iii. Number of vowels: " << vowelCount << endl;

    // Requirement iv: Calculate and output the number of words
    int wordCount = 0;
    bool inWord = false;
    for (char c : fileData) {
        if (isspace(c)) {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            wordCount++;
        }
    }
    cout << "iv. Number of words: " << wordCount << endl;

    // Requirement v: Call Reverse function and output the result
    string reversedStr = Reverse(fileData);
    cout << "v. Reversed statement: " << reversedStr << endl;

    // Requirement vi: Capitalize the second letter of each word
    string modifiedStr = fileData;
    bool capitalizeNext = false;
    
    for (size_t i = 0; i < modifiedStr.length(); i++) {
        if (isspace(modifiedStr[i])) {
            capitalizeNext = true; // The next character is the start of a new word, so its second letter should be capitalized
        } else if (capitalizeNext) {
            modifiedStr[i] = toupper(modifiedStr[i]);
            capitalizeNext = false; // Reset until the next word
        }
    }
    cout << "vi. Statement with second letter of each word capitalized: " << modifiedStr << endl;

    return 0;
}