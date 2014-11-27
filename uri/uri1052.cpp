#include <iostream>
#include <cstring>
#include <ctime>
using namespace std;

int main() {
    int m;
    cin >> m;
    struct tm *t;
    t = new tm;
    t->tm_mon = m - 1;
    char buffer[80];
    strftime(buffer, 80, "%B", t);
    cout << buffer << endl;
    return 0;
}
