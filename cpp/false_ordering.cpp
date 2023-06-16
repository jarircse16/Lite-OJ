#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
const int MAX_N = 1000;

// Array to store the precalculated number of divisors
int divisorsCount[MAX_N + 1];

// Function to precalculate the number of divisors for each number
void calculateDivisorsCount() {
    for (int i = 1; i <= MAX_N; i++) {
        int count = 0;
        int sqrtN = std::sqrt(i);
        for (int j = 1; j <= sqrtN; j++) {
            if (i % j == 0) {
                count++;
                if (i / j != j) {
                    count++;
                }
            }
        }
        divisorsCount[i] = count;
    }
}

// Custom comparator for sorting numbers based on divisors count and value
bool compare(int x, int y) {
    if (divisorsCount[x] < divisorsCount[y]) {
        return true;
    } else if (divisorsCount[x] == divisorsCount[y]) {
        return x > y;
    } else {
        return false;
    }
}

int main() {
    int T;
    cin >> T;

    // Precalculate the number of divisors for each number
    calculateDivisorsCount();

    for (int testCase = 1; testCase <= T; testCase++) {
        int n;
        cin >> n;

        // Create a vector of numbers from 1 to 1000
        vector<int> numbers;
        for (int i = 1; i <= MAX_N; i++) {
            numbers.push_back(i);
        }

        // Sort the vector using the custom comparator
        sort(numbers.begin(), numbers.end(), compare);

        // Print the nth number after ordering
        cout << "Case " << testCase << ": " << numbers[n - 1] << endl;
    }

    return 0;
}
