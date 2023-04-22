#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main(){
    long long n;
    long long t;
    cin >> n >> t;
    vector <long long> c(n);
    vector <long long> r(n);
    rep(i, n) cin >> c.at(i);
    rep(i, n) cin >> r.at(i);
    int maximum1 = -1;
    int maximum2 = c.at(0);
    int max_index1 = -1;
    int max_index2 = 0;
    int one = c.at(0);
    rep(i, n){
        if (c.at(i) == t){
            if (r.at(i) > maximum1){
                maximum1 = r.at(i);
                max_index1 = i;
            }
        }
        if (c.at(i) == one){
            if (r.at(i) > maximum2){
                maximum2 = r.at(i);
                max_index2 = i;
            }
        }
    }
    if (maximum1 == -1){
        cout << max_index2 + 1 <<endl;
    }
    else{
        cout << max_index1 + 1 <<endl;
    }  
}