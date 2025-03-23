#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n; // Nhập số phần tử của dãy số

    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i]; // Nhập các phần tử của dãy số
    }

    int x, y;
    cin >> x >> y; // Nhập hai vị trí cần đổi chỗ

    // Đổi chỗ hai phần tử ở vị trí x và y (chỉ số bắt đầu từ 1)
    swap(A[x - 1], A[y - 1]);

    // In kết quả
    for (int i = 0; i < n; i++) {
        cout << A[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;

    return 0;
}
