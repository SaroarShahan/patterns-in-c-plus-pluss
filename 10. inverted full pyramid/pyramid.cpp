#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;

    for(int row = n; row > 0; row--) {
        for(int space = 1; space <= n - row; space++) {
            cout << " ";
        }
        for(int col = 1; col <= row; col++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}
