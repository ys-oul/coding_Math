#include <iostream>
using namespace std;

int euclidian(int, int);

int main(void){
    int m, n;
    cin >> m >> n;

    int great_common = euclidian(m, n);

    cout << great_common << '\n';
    cout << m * n / great_common << '\n';
    return 0;
}

int euclidian(int x, int y){
    int z = x % y;
    while(z != 0){
        x = y;
        y = z;
        z = x % y;
    }
    return y;
}