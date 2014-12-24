//============================================================================
// Name        : treinocpp.cpp
// Author      : andinho
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
   int n,num;
      int x,y;

   while (cin >> n){
   int bla[10000];
   int aux=0;

   for (int i=0;i<n;i++){
      cin >> x >> y;
      for (int i2=x;i2<=y;i2++){
         bla[aux++]=i2;
      }
   }

   cin >> num;

   sort(bla,bla+aux);

//   int xx = distance(bla, find(bla, bla + aux, 4));
   int v=-1;
   int inicio = -1;
   int fim = -1;
   bool isSegundaVez = false;

   for (int i=0;i<aux;i++){
      if (bla[i]==num){
         v=i;
         inicio = i;
         break;
      }
   }

   for (int i=aux-1;i>0;i--){
         if (bla[i]==num){
            v=i;
            fim = v;
            break;
         }
      }

   if (v != -1)
      cout << num << " found from " << inicio << " to " << fim << endl;
   else
      cout << num << " not found" << endl;
   }
   return 0;
}
