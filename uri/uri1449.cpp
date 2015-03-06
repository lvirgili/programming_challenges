#include <iostream>
#include <map>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long m, n;
        cin >> m >> n;
        cin.ignore(256, '\n');
        map<string, string> dic;
        while(m--) {
            string j, p;
            getline(cin, j);
            getline(cin, p);
            dic[j] = p;
        }
        while (n--) {
            string linha;
            getline(cin, linha);
            stringstream ss(linha);
            string w;
            bool esp = false;
            while (ss >> w) {
                if (esp) cout << ' ';
                esp = true;
                if (dic.count(w)) cout << dic[w];
                else cout << w;
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
