#include <iostream>
#include <vector>

using namespace std;

int find(vector<int> &v, int num) {
   for(int i = 0; i < v.size(); ++i) {
       if(v[i] == num) {
           return i;
       }
   }
   return -1;
}

int main() {
   vector<int> v;
   cout << "Enter 20 numbers: ";
   int num;
   for(int i = 0; i < 20; ++i) {
       cin >> num;
       if(num >= 10 && num <= 100 && find(v, num) == -1) {
           v.push_back(num);
       }
   }
   // unique numbers entered are
   cout << "User entered: ";
   for(int i = 0; i < v.size(); ++i) {
       cout << v[i] << " ";
   }
   cout << endl;
   return 0;  
}