#include <iostream>
#include <string>
using namespace std;

int countWords(const string& str) {
    int count = 0;
    bool inWord = false;

    for (char c : str) {
        if (isspace(c)) { // Nếu ký tự là khoảng trắng
            inWord = false;
        } else if (!inWord) { // Nếu gặp ký tự không phải khoảng trắng và trước đó không trong từ
            inWord = true;
            count++; // Đếm một tiếng
        }
    }

    return count;
}

int main() {
    string input;
    getline(cin, input); // Nhập đoạn văn bản

    int wordCount = countWords(input); // Đếm số tiếng
    if(wordCount==1){
        cout <<wordCount<<" word";
    }
    else cout<<wordCount<<" words";
    cin.get();
    cin.ignore();
    return 0;
}
