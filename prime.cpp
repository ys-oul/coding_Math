#include <iostream>
using namespace std;

int main(void){
    int N, num, output;
    cin >> N;
    output = 0;

    for (int i = 0; i < N; i++){
        int cnt = 0;
        cin >> num;
        for (int j = 1; j <= num; j++)
            if(num%j == 0)
              cnt++;
        if(cnt == 2)
            output++;
    }
    cout << output << '\n';
}