#include <iostream>
#include <vector>

using namespace std;

void drawPiramid(int numRows) {
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numRows - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "^";
        }
        cout << endl;
    }
}

int main() {
    int numRows;

    cout << "Masukkan jumlah baris piramid: ";
    cin >> numRows;

    drawPiramid(numRows);

    return 0;
}