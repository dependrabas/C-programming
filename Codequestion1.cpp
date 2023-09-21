#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, R;
        cin >> n;
        vector<int> arr(n);

    
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cin >> R;

        
        R = R % n;
        vector<int> rotatedArr(n);

        for (int i = 0; i < n; i++) {
            int newIndex = (i - R + n) % n;
            rotatedArr[newIndex] = arr[i];
        }

        
        for (int i = 0; i < n; i++) {
            cout << rotatedArr[i];
            if (i < n - 1) {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}

