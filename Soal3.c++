#include <iostream>
using namespace std;

void tukarArray(int A[3][3], int B[3][3]) {
    int temp;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            temp = A[i][j];
            A[i][j] = B[i][j];
            B[i][j] = temp;
        }
    }
}

void tukarPointer(int *P, int *Q) {
    int temp;

    temp = *P;
    *P = *Q;
    *Q = temp;
}

void tampilArray(int A[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int B[3][3] = {
        {10, 11, 12},
        {13, 14, 15},
        {16, 17, 18}
    };

    int x = 100;
    int y = 200;

    int *P = &x;
    int *Q = &y;

    cout << "Array A sebelum ditukar:" << endl;
    tampilArray(A);

    cout << "\nArray B sebelum ditukar:" << endl;
    tampilArray(B);

    // Menukar isi array A dan B
    tukarArray(A, B);

    cout << "\nArray A setelah ditukar:" << endl;
    tampilArray(A);

    cout << "\nArray B setelah ditukar:" << endl;
    tampilArray(B);

    cout << "\nSebelum pointer ditukar:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    // Menukar isi variabel yang ditunjuk pointer
    tukarPointer(P, Q);

    cout << "\nSetelah pointer ditukar:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}