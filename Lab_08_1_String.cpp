// Lab_08_1_String.cpp
// Варіант 29
// Лабораторна робота № 8.1
// Пошук та заміна символів у літерному рядку.
// Використання стандартних функцій мови C++ для рядків string.

#include <iostream>
#include <string>

using namespace std;

// Перевірка наявності четвірки сусідніх однакових символів
bool Include(const string& s) {
    if (s.length() < 4) return false;

    for (size_t i = 0; i <= s.length() - 4; i++) {
        if (s[i] == s[i + 1] && s[i] == s[i + 2] && s[i] == s[i + 3]) {
            return true;
        }
    }
    return false;
}

// Заміна кожної четвірки сусідніх однакових символів парою зірочок "**"
string Change(string& s) {
    if (s.length() < 4) return s;

    size_t pos = 0;
    while (pos + 3 < s.length()) {
        if (s[pos] == s[pos + 1] && s[pos] == s[pos + 2] && s[pos] == s[pos + 3]) {
            s.replace(pos, 4, "**");
            pos += 2; // Зміщуємо позицію на довжину підставленого рядка "**"
        }
        else {
            pos++;
        }
    }
    return s;
}

int main() {
    string str;

    cout << "Enter string:" << endl;
    getline(cin, str);

    if (Include(str)) {
        cout << "String contains four consecutive identical characters." << endl;
    }
    else {
        cout << "String does not contain four consecutive identical characters." << endl;
    }

    string dest = Change(str);

    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << dest << endl;

    return 0;
}