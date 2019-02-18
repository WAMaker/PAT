#include <iostream>

using namespace std;
int main() {
    int steps = 0;
    int num;

    cin >> num;
    while (num != 1) {
        if (num % 2 == 0) {
            num /= 2;
        } else {
            num = (3 * num + 1) / 2;
        }
        steps++;
    }
    cout << steps << endl;

    return 0;
}
