#include <iostream>
#include <string>
using namespace std;

int main() {
    int N; cin >> N;
    int maximo = 0;
    int comida = 0;
    for (int n = 0; n < N; ++n) {
        string s;
        cin >> s;
        if (n % 2 == 0) {
            for (unsigned i = 0; i < s.size(); ++i) {
                if (s[i] == 'o')
                    ++comida;
                else if (s[i] == 'A') {
                    if (comida > maximo) {
                        maximo = comida;
                    }
                    comida = 0;
                }
            }
        } else {
            for (int i = (int)s.size() - 1; i >= 0 ; --i) {
                if (s[i] == 'o')
                    ++comida;
                else if (s[i] == 'A') {
                    if (comida > maximo) {
                        maximo = comida;
                    }
                    comida = 0;
                }
            }

        }
    }
    if (comida > maximo)
        maximo = comida;
    cout << maximo << endl;
    return 0;
}
