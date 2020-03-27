#include <iostream>
using namespace std;

int main() {
    double a[1000];
    double b[1000];
    double c[1000];
    double delta[1000];
    
    short n;
    cin >> n;

    short i = 0;
    while(i < n) {
        cin >> a[i];
        cin >> b[i];
        cin >> c[i];

        delta[i] = b[i] * b[i] - 4 * a[i] * c[i];
        i++;
    }

    i = 0;
    while(i < n) {
        if(delta[i] > 0) {
            cout << "2" << endl;
        } else if(delta[i] == 0) {
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }
        i++;
    }

    return 0;
}