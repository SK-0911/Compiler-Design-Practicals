//implement left recursion of the grammar in c++
#include <iostream>
#include <string>
using namespace std;
bool check(string str, char c) {
    if (str[0] == c &&
        ((str[1] >= 'a' && str[1] <= 'z') || str[1] == '+' || str[1] == '-' || str[1] == '*' || str[1] == '/')) {
        cout << "\nYes, it is a left recursion grammar";
        return true;

    } else {
        cout << "\nNo, it is not a left recursion grammar";
        return false;
    }
}

void convert(string str, char c) {
    string beta;
    string a;
    int slash_pos;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '/') {
            slash_pos = i;
            beta.push_back(str[i + 1]);
        }

    }

    for (int j = 1; j < slash_pos; j++) {
        a.push_back(str[j]);
        //cout<<str[j];
    }
    cout << "\n" << c << "->" << beta << c << "`" << endl;
    cout << c << "`" << "->" << a << c << "`" << "/$";
}

int main() {
    char start;
    string grammar;
    cout << "Start symbol: ";
    cin >> start;
    cout << start << "-> ";
    cin >> grammar;
    cout << grammar;
    //check(grammar, start);
    if (check(grammar, start)) {
        convert(grammar, start);
    }
    //convert(grammar, start);
    return 0;
}
