#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s;
    long c = 1;
    while (cin >> s, s != "end") {
        vector<char> stacks;
        for (unsigned i = 0; i < s.size(); ++i) {
            char ch = s[i];
            if (stacks.size() == 0) {
                stacks.push_back(ch);
            } else {
                bool inserted = false;
                for (unsigned j = 0; j < stacks.size(); ++j) {
                    if (stacks[j] >= ch) {
                        stacks[j] = ch;
                        inserted = true;
                        break;
                    }
                }
                if (!inserted) {
                    stacks.push_back(ch);
                }
            }
        }
        cout << "Case " << c++ << ": " << stacks.size() << endl;
    }
    return 0;
}
