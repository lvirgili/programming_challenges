#include <iostream>
#include <string>
using namespace std;

bool divby3(string &s) {
    long long sum = 0;
    for (auto &e : s) sum += e - '0';
    return sum % 3 == 0;
}

bool divby5(string &s) {
    return (s.back() == '0' || s.back() == '5');
}

bool divby15(string &s) {
    return (divby3(s) && divby5(s));
}

bool divby11(string &s) {
    long long sum = 0;
    int sgn = 1;
    for (auto &e : s) {
        sum += (e - '0') * sgn;
        sgn *= -1;
    }
    return sum % 11 == 0;
}

bool divby55(string &s) {
    return (divby5(s) && divby11(s));
}

bool divby4(string &s) {
    return (stoi(s.substr(s.size() - 2)) % 4) == 0;
}

bool divby100(string &s) {
    return (s.substr(s.size() - 2) == "00");
}

bool divby400(string &s) {
    return (stoi(s.substr(s.size() - 4)) % 400) == 0;
}

bool isleap(string &s) {
    if (divby4(s)) {
        if (divby100(s)) {
            if (divby400(s)) {
                return true;
            } else {
                return false;
            }
        } else {
            return true;
        }
    } else {
        return false;
    }
}

int main() {
    string s;
    bool line = false;
    while (cin >> s) {
        if (line) cout << endl;
        line = true;
        bool leap = isleap(s);
        bool hulu = divby15(s);
        bool bulu = leap && divby55(s);
        if (leap) {
            cout << "This is leap year.\n";
        }
        if (hulu) {
            cout << "This is huluculu festival year.\n";
        }
        if (bulu) {
            cout << "This is bulukulu festival year.\n";
        }
        if (!leap && !hulu && !bulu) cout << "This is an ordinary year.\n";
    }
    return 0;
}
