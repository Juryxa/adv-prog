#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

template<typename T>
void sortArray(vector<T>& arr) {
    sort(arr.begin(), arr.end());
}

template<>
void sortArray(vector<string>& arr) {
    sort(arr.begin(), arr.end(), [](const string& left, const string& right) {
        size_t leftPos = 0, rightPos = 0;
    while (leftPos < left.length() && rightPos < right.length()) {
        if (isdigit(left[leftPos]) && isdigit(right[rightPos])) {
            size_t leftEnd = left.find_first_not_of("0123456789", leftPos);
            size_t rightEnd = right.find_first_not_of("0123456789", rightPos);
            if (leftEnd == string::npos) leftEnd = left.length();
            if (rightEnd == string::npos) rightEnd = right.length();
            int leftNum = stoi(left.substr(leftPos, leftEnd - leftPos));
            int rightNum = stoi(right.substr(rightPos, rightEnd - rightPos));
            if (leftNum != rightNum) return leftNum < rightNum;
            leftPos = leftEnd;
            rightPos = rightEnd;
        }
        else {
            if (left[leftPos] != right[rightPos]) return left[leftPos] < right[rightPos];
            ++leftPos;
            ++rightPos;
        }
    }
    return left.length() < right.length();
        });
}

int main() {
    setlocale(LC_ALL, "ru");
    cout << "Сортировка массива целых чисел:" << endl;
    vector<int> intArr = { 5, 1, 12, 0, 2 };
    sortArray(intArr);
    for (const auto& i : intArr) {
        cout << i << " ";
    }
    cout << endl << endl;

    cout << "Сортировка массива вещественных чисел:" << endl;
    vector<double> doubleArr = { 3.14, 1.5, -0.25, 2.02 };
    sortArray(doubleArr);
    for (const auto& d : doubleArr) {
        cout << d << " ";
    }
    cout << endl << endl;

    cout << "Сортировка массива строк:" << endl;
    vector<string> biblioArr = { "Books 4 Life", "Book 12", "Book 5", "Books 3 Life", "Book 1" };
    sortArray(biblioArr);
    for (const auto& s : biblioArr) {
        cout << s << " ";
    }
    cout << endl << endl;

    return 0;
}