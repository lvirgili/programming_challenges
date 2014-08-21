#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;


int strength(const string &name){
    int s = 0;
    for(unsigned i=0; i < name.size(); ++i){
        s += name[i];
    }
    return s;
}

int solve(const vector<int>& strengths){
    int N = strengths.size();

    long long A = 0;
    long long B = 0;

    int astrs = 0;
    int bstrs = 0;

    for(int i=0; i < N; ++i){
        astrs += strengths[i];
        A += astrs;
    }

    for(int i=N-1; i>=0; --i){
        if(A == B) return i;
        if(A < B) break;

        A -= astrs;
        astrs -= strengths[i];
        bstrs += strengths[i];
        B += bstrs;
    }

    return -1;
}

int main(){

    int n;
    while(cin >> n, n != 0){
        vector<string> players;
        for(int i=0; i < n; i++){
            string s;
            cin >> s;
            players.push_back(s);
        }

        vector<int> strengths;
        for(int i=0; i < n; ++i){
            strengths.push_back(strength(players[i]));
        }

        int sep = solve(strengths);
        if(sep >= 0){
            cout << players[sep] << endl;
        }else{
            cout << "Impossibilidade de empate." << endl;
        }

    }
    return 0;
}
