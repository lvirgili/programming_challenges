#include <iostream>
#include <string>
using namespace std;

int main() {
    int n; cin >> n;
    int leds[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    while (n--) {
        string s;
        cin >> s;
        unsigned long total = 0;
        for (unsigned i = 0; i < s.size(); ++i)
            total += leds[s[i] - '0'];
        cout << total << " leds\n";
    }
    return 0;
}
