#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
     int fats[8] = {1, 1, 2, 6, 24, 120, 720, 5040};
     int k; cin >> k;
     cout << fats[k] << endl;
     vector<int> vec;
     for (int i = 1; i <= k; ++i) {
          vec.push_back(i);
     }
     do {
          for (unsigned i = 0; i < vec.size(); ++i) {
               cout << vec[i] << ' ';
          }
          cout << endl;
     } while (next_permutation(vec.begin(), vec.end()));
     return 0;
}
