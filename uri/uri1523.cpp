#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
using namespace std;

struct motorista {
    int chegada, saida;
};

bool comp(const motorista &a, const motorista &b) {
    if (a.chegada < b.chegada) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int N, K;
    while (cin >> N >> K) {
        if (N == 0 && K == 0) {
            break;
        }
        vector< motorista > motoristas;
        for (int n = 0; n < N; ++n) {
            motorista m;
            cin >> m.chegada >> m.saida;
            motoristas.push_back(m);
        }
        sort(motoristas.begin(), motoristas.end(), comp);
        stack< motorista > estacionamento;
        bool sit = true;
        for (unsigned i = 0; i < motoristas.size(); ++i) {
            int entrada = motoristas[i].chegada,
                saida = motoristas[i].saida;
            if (estacionamento.empty()) {
                estacionamento.push(motoristas[i]);
            } else {
                while (!estacionamento.empty() && estacionamento.top().saida <= entrada) {
                    estacionamento.pop();
                }
                if ((!estacionamento.empty() && estacionamento.top().saida < saida) || static_cast<int>(estacionamento.size()) == K) {
                    sit = false;
                    break;
                } else {
                    estacionamento.push(motoristas[i]);
                }
            }
        }
        if (sit) {
            cout << "Sim\n";
        } else {
            cout << "Nao\n";
        }
    }
    return 0;
}
