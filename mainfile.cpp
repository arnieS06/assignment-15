#include <iostream>
using namespace std;

int main() {
    int rowInput;
    cout << "Give me a number of rows -> ";
    cin << rowInput;

    for (int x = 1; x <= rowInput; x++) {
        
        for (int y = 1; y <= x; y++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
