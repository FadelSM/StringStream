#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> result;
    stringstream ss(str);
    int num;
    char comma;

    while (ss >> num) {
        result.push_back(num);
        ss >> comma; // buang koma
    }

    return result;
}   // INI WAJIB, penutup fungsi parseInts

int main() {
    string str;
    cin >> str;

    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
