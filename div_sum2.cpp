#include <iostream>
using namespace std;

int main(){
    int N;
    long long g = 0;
    cin >> N;
    
    for (int i = 1; i <= N; i++)
        g = g + (N / i) * i;
        
    cout << g << endl;
    return 0;
}