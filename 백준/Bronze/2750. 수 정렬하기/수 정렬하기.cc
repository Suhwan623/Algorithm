#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   int t;
   int n[1000];
   cin >> t;
   for (int i = 0; i < t; i++)
      cin >> n[i];

      sort(n, n + t);

   for (int i = 0; i < t; i++) {
      cout << n[i] << " " << endl;
   }
   return 0;
}