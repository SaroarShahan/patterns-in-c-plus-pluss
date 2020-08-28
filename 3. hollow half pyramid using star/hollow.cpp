#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;

    for(int row = 1; row <= n; row++) {
        for(int col = 1; col <= row; col++) {
            if(col == 1 || row == n || row == col)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
