#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n = 1;
    char ch = '\n';

    cout << "This is the start of the Prime Finder Algorithm: " << endl;

    while (ch == '\n') {
        bool prime = true;

        if (n <= 1) {
            prime = false;
        } else if (n == 2 or n == 3) {
            prime = true;
        } else if (n % 2 == 0 or n % 3 == 0) {
            prime = false;
        } else {
            for (int i = 5; i <= sqrt(n); ++i) {
                if (n % i == 0 or n % (i + 2) == 0) {
                    prime = false;
                }
            }
        }

        if (prime) {
            cout << n << endl;
            cin.get(ch);
        }

        ++n;
    }



    return 0;
}
    

