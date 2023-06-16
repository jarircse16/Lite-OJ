#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Fast I/O
inline void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

// Build the prefix table for pattern string
vector<int> buildPrefixTable(const string& pattern) {
    int m = pattern.length();
    vector<int> prefixTable(m);

    int len = 0;
    int i = 1;

    while (i < m) {
        if (pattern[i] == pattern[len]) {
            prefixTable[i] = len + 1;
            len++;
            i++;
        } else {
            if (len != 0) {
                len = prefixTable[len - 1];
            } else {
                prefixTable[i] = 0;
                i++;
            }
        }
    }

    return prefixTable;
}

// Count the occurrences of pattern string in text string using the KMP algorithm
int countOccurrences(const string& text, const string& pattern) {
    int n = text.length();
    int m = pattern.length();
    vector<int> prefixTable = buildPrefixTable(pattern);

    int i = 0;
    int j = 0;
    int count = 0;

    while (i < n) {
        if (pattern[j] == text[i]) {
            i++;
            j++;
        }

        if (j == m) {
            count++;
            j = prefixTable[j - 1];
        } else if (i < n && pattern[j] != text[i]) {
            if (j != 0) {
                j = prefixTable[j - 1];
            } else {
                i++;
            }
        }
    }

    return count;
}

int main() {
    fastIO();

    int T;
    cin >> T;

    for (int caseNum = 1; caseNum <= T; ++caseNum) {
        string A, B;
        cin >> A >> B;

        int occurrences = countOccurrences(A, B);

        // Output the result
        cout << "Case " << caseNum << ": " << occurrences << "\n";
    }

    return 0;
}
