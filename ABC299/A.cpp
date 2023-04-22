#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
int main(){
  int n;
  cin >> n;
  string s;
  cin >> s;
  int index1 = s.find('|');
  int index2 = s.rfind('|');
  int index3 = s.find('*');
  if (index1 < index3 && index3 < index2){
    cout << "in" << endl;
  }
  else{
    cout << "out" << endl;
  }
}