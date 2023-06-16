#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
using namespace std;

string reverseWords(const string& sentence) {
    stringstream ss(sentence);
    string word, reversedSentence;

    // Reverse each word in the sentence
    while (ss >> word) {
        reverse(word.begin(), word.end());
        reversedSentence += word + " ";
    }

    // Remove trailing space
    if (!reversedSentence.empty()) {
        reversedSentence.pop_back();
    }

    return reversedSentence;
}

int main() {
    int numTestCases;
    cin >> numTestCases;
    cin.ignore(); // Ignore the newline character after reading the number of test cases

    vector<string> sentences(numTestCases);

    // Read each sentence
    for (int i = 0; i < numTestCases; ++i) {
        getline(cin, sentences[i]);
    }

    // Reverse words in each sentence and print the result
    for (const string& sentence : sentences) {
        string reversedSentence = reverseWords(sentence);
        cout << reversedSentence << endl;
    }

    return 0;
}
