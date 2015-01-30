#include <iostream>
#include <string>
using namespace std;

int main() {
    string num, cut;
    while (cin >> num >> cut) {
        auto numdot = num.find(".");
        auto cutdot = cut.find(".");
        string numdec, cutdec;
        if (numdot != string::npos)
            numdec = num.substr(numdot+1);
        if (cutdot != string::npos)
            cutdec = cut.substr(cutdot+1);
        string numintstr = num.substr(0, numdot);
        long long numint;
        if (numintstr.size())
            numint = stoll(numintstr);
        else
            numint = 0;
        if (numdec > cutdec) {
            cout << numint + 1 << endl;
        } else {
            cout <<  numint << endl;
        }
    }
    return 0;
}
