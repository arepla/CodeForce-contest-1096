#include <iostream>

using namespace std;

int main() {
    int t;
    if (!(cin >> t)) return 0;

    for (int i = 0; i < t; i++) {
        int x, y;
        cin >> x >> y;
        if ((x + y) % 2 != 0) {
            cout << "YES" << endl;
        }
        else {
            if (x % 2 == 0 && y % 2 == 0) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
