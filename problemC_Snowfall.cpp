#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        int n;
        cin >> n;

        vector<int> t2, t3, t6, t1;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            if (x % 6 == 0) {
                t6.push_back(x);
            } else if (x % 2 == 0) {
                t2.push_back(x);
            } else if (x % 3 == 0) {
                t3.push_back(x);
            } else {
                t1.push_back(x);
            }
        }

        bool space = false;

        for (int x : t2) {
            if (space) cout << " ";
            cout << x;
            space = true;
        }
        for (int x : t1) {
            if (space) cout << " ";
            cout << x;
            space = true;
        }
        for (int x : t3) {
            if (space) cout << " ";
            cout << x;
            space = true;
        }
        for (int x : t6) {
            if (space) cout << " ";
            cout << x;
            space = true;
        }

        cout << endl;
    }

    return 0;
}