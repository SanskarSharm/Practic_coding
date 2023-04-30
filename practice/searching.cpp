#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target) {
    for (int raw = 0; raw < 3; raw++) {
        for (int col = 0; col < 4; col++) {
            if (arr[raw][col] == target) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arr[3][4];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int target;
    cin >> target;

    if (isPresent(arr, target)) {
        cout << "Element is present" << endl;
    }
    else {
        cout << "Element is not present" << endl;
    }

    return 0;
}
