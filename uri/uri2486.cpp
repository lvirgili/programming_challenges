#include <bits/stdc++.h>
using namespace std;

// trim from start
static inline std::string &ltrim(std::string &s) {
    s.erase(s.begin(), std::find_if(s.begin(), s.end(),
            std::not1(std::ptr_fun<int, int>(std::isspace))));
    return s;
}

// trim from end
static inline std::string &rtrim(std::string &s) {
    s.erase(std::find_if(s.rbegin(), s.rend(),
            std::not1(std::ptr_fun<int, int>(std::isspace))).base(), s.end());
    return s;
}

// trim from both ends
static inline std::string &trim(std::string &s) {
    return ltrim(rtrim(s));
}

int main() {
    map<string, int> vc;
    vc["suco de laranja"] = 120;
    vc["morango fresco"] = 85;
    vc["mamao"] = 85;
    vc["goiaba vermelha"] = 70;
    vc["manga"] = 56;
    vc["laranja"] = 50;
    vc["brocolis"] = 34;
    int t;
    while (cin >> t, t) {
        int total = 0;
        while (t--) {
            int q;
            string f;
            cin >> q;
            getline(cin, f);
            f = trim(f);
            total += q * vc[f];
        }
        if (110 <= total && total <= 130) {
            cout << total << " mg\n";
        } else if (total < 110) {
            cout << "Mais " << 110 - total << " mg\n";
        } else {
            cout << "Menos " << total - 130 << " mg\n";
        }
    }
    return 0;
}
