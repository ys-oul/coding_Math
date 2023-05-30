#include <iostream>
#define MAX 1000000

using namespace std;
long long table[MAX + 1];

int main(void){
    for (int i = 1; i <= 1000000; i++){
        for (int j = 1; i * j <= 1000000; j++)
            table[i * j] += i;
    }

    int M, N;
    cin >> M >> N;

    for (int i = M; i <= N; i++){
        if(table[i] == i + 1)
            cout << i << '\n';
    }

    return 0;
}