#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;

    for(int row = n; row >= 1; row--) {
        for(int space = 1; space <= n - row; space++)
            cout << " ";
        for(int col = 1; col <= row; col++) {
            if(row == n || col == 1 || row == col)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}


