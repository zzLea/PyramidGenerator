#include <iostream>

using namespace std;

int main() {
        int rows;
        int amount;
        cout << "Enter number of rows: ";
        cin >> rows;
        cout << endl;
        for (int i = 1, k = 0; i <= rows; ++i, k = 0) {
                for (int space = 1; space <= rows - i; ++space) {
                        cout << "  ";
                }
                while (k != 2 * i - 1) {
                        cout << "| ";
                        amount++;
                        ++k;
                }
                cout << endl;
        }
        return 0;
}
