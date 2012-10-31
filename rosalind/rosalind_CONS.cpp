#include <iostream>
#include <string>
#include <vector>
using namespace std;

void process(vector<vector<int> >& profile, string s) {
     for (unsigned i = 0; i < s.size(); ++i) {
          switch (s[i]) {
          case 'A':
               ++profile[0][i];
               break;
          case 'C':
               ++profile[1][i];
               break;
          case 'G':
               ++profile[2][i];
               break;
          case 'T':
               ++profile[3][i];
               break;
          }
     }
}

void print_base(int index) {
     if (index == 0) cout << 'A';
     if (index == 1) cout << 'C';
     if (index == 2) cout << 'G';
     if (index == 3) cout << 'T';
}

int main() {
     string s;
     vector<vector<int> > profile;
     vector<int> aux;

     getline(cin, s);
     for (int i = 0; i < 4; ++i) {
          profile.push_back(aux);
          for (unsigned j = 0; j < s.size(); ++j) {
               profile[i].push_back(0);
          }
     }

     process(profile, s);

     while (getline(cin, s)) {
          process(profile, s);
     }

     for (unsigned i = 0; i < profile[0].size(); ++i) {
          unsigned index = 0, max = 0;
          // Screw locality
          for (unsigned j = 0; j < profile.size(); ++j) {
               if (profile[j][i] > max) {
                    index = j; max = profile[j][i];
               }
          }
          print_base(index);
     }
     cout << endl;

     for (unsigned i = 0; i < profile.size(); ++i) {
          print_base(i);
          cout << ": ";
          for (unsigned j = 0; j < profile[i].size(); ++j) {
               cout << profile[i][j] << ' ';
          }
          cout << endl;
     }

     return 0;
}
