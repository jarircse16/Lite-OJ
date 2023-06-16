#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int caseNum = 1; caseNum <= T; ++caseNum) {
        string url;
        cin >> url;

        if (url.compare(0, 7, "http://") == 0) {
            url.replace(0, 7, "https://");
        }

        cout << "Case " << caseNum << ": " << url << endl;
    }

    return 0;
}
