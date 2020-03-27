#include <iostream>
using namespace std;

int main() {
    short n;
    short k[100];

    cin >> n;

    short i = 0;
    while(i < n) {
        cin >> k[i];
        i++;
    }

    i = 0;
    while(i < n) {
        cout << k[i] << endl;
        i++;
    }

    return 0;
}