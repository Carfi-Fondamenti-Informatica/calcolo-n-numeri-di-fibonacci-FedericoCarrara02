#include <iostream>
using namespace std;

int main() {
    int n = 0;

    cin >> n;

    if (n >= 2) {
        int f1 = 1;
        int f2 = 1;
        int f = 0;
        for (int i = 1; i <= n; i++) {
            f1 = f2;
            f2 = f;
            f = f1+f2;
            cout << f << endl;
        }
    } else {
        cout << "errore" << endl;
    }
    return 0;
}
