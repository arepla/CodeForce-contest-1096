#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int totalbalance = 0;
        for (char c : s) {
            if (c == '(') totalbalance++;
            else totalbalance--;
        }

        if (totalbalance != 0) {
            cout << "NO" << endl;
            continue;
        }
        int firstbad = -1;
        int flexnum = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') flexnum++;
            else flexnum--;
            if (flexnum < 0) {
                firstbad = i;
                break;
            }
        }
        if (firstbad == -1) {
            cout << "YES" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}