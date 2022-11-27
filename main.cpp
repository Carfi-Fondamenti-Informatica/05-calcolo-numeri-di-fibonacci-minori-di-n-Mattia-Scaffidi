#include <iostream>
using namespace std;

int main() {
    int n, c;
    int a = 1, b = 1;
    cin >> n;


    cout << a << "\n" << b << "\n";

    for (int i = 2; i< n; i++) {

        c = a + b;

        a = b;
        b = c;
        if (c<=n) {
            cout << c << endl;
        }

    }
   return 0;
}
