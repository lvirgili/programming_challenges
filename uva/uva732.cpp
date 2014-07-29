#include <iostream>
#include <string>
using namespace std;

string in, out;

void step(string in_cpy, string stack, string answer, string curr, int n) {
    if (n == 2 * in.size()) {
        if (curr == out) {
            for (unsigned i = 0; i < answer.size() - 1; ++i) {
                cout << answer[i] << ' ';
            }
            cout << answer.back() << endl;
            return;
        }
    }
    if (in_cpy.size() > 0) {
        step(in_cpy.substr(1, in_cpy.size() - 1), stack + in_cpy[0],
             answer + "i", curr, n + 1);
    }
    if (stack.size() > 0 && stack.back() == out[curr.size()]) {
        step(in_cpy, stack.substr(0, stack.size() - 1),
             answer + "o", curr + stack.back(), n + 1);
    }
}

int main() {
    while (cin >> in >> out) {
        cout << "[\n";
        if (in.size() == out.size())
            step(in, "", "", "", 0);
        cout << "]\n";
    }
    return 0;
}
