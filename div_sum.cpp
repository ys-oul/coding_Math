#include <iostream>

using namespace std;
long long table[1000001], output[1000001];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);//입출력 시간 개선

    for (int i = 1; i <= 1000000; i++){
        for (int j = 1; i * j <= 1000000; j++)
            table[i * j] += i;
        output[i] = output[i - 1] + table[i];
    }

    int n, num;

    cin >> n;
    while(n--){
        cin >> num;
        cout << output[num] << '\n';
    }

    return 0;
}
