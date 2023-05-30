#include <iostream>
using namespace std;

int main(){
    int n, cnt, m;
    while(cin >> n){
        cnt = 1, m = 1;
        while(m = m % n){
            m = m * 10 + 1;
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}