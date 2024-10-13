#include <iostream>
using namespace std;

void sapXepMau(int arr[], int n) {
    int countRed = 0, countWhite = 0, countBlue = 0;

    // Dem so luong moi mau 
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) countRed++;
        else if (arr[i] == 1) countWhite++;
        else countBlue++;
    }

    // Sep xep 
    int index = 0;
    while (countRed > 0) {
        arr[index++] = 0;
        countRed--;
    }
    while (countWhite > 0) {
        arr[index++] = 1;
        countWhite--;
    }
    while (countBlue > 0) {
        arr[index++] = 2;
        countBlue--;
    }
}

void inMang(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) cout << "do ";
        else if (arr[i] == 1) cout << "trang ";
        else cout << "xanh ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Nhap so luong doi tuong: ";
    cin >> n;

    int arr[n];
    cout << "Nhap mau sac cua cac doi tuong (0: do, 1: trang, 2: xanh): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Mang ban dau: ";
    inMang(arr, n);

    sapXepMau(arr, n);

    cout << "Mang sau khi sap xep: ";
    inMang(arr, n);

    return 0;
}