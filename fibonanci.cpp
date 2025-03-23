#include <iostream>
using namespace std;
int fibonacci(int n) {
    int f0 = 0;
    int f1 = 1;
    int fn = 1;

    if (n == 0) return f0;
    if (n == 1) return f1;

    for (int i = 2; i <= n; i++) {
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
    }
    return fn;
}
int main() {
    int N;
    cin >> N;
        for (int i = 0; i < N; i++) {
            cout << fibonacci(i) << " ";
        }
        cout << endl;
    cin.get();
    cin.ignore();
    return 0;
}
