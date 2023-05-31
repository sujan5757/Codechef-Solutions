#include <iostream>

using namespace std;

bool sujan(int f, int v) {
    if ((f + v) % 2 == 0) {
        if (f % 2 != 0 && v % 2 != 0) {
            return true;
        }
    }
    return false;
}

int main() {
    int r;
    cin >> r;  

    while (r--) {
        int f, v;
        cin >> f >> v;

        if (sujan(f, v)) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
