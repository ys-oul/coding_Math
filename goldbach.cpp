#include <cstdio>

int main(void){
    bool table[1000001] = {false,};
    table[0] = true;
    table[1] = true;

    for (int i = 2; i <= 1000000; i++){
        if(!table[i]){
            for (int j = i * 2; j <= 1000000; j+=i)
                table[j] = true;
        }
    }

    int n;
    while(1){
        scanf("%d", &n);
        if(n == 0)
            return 0;
        for (int i = 2; i <= n; i++){
            if(!table[i] && !table[n-i]){
                printf("%d = %d + %d\n", n, i, n - i);
                break;
            }
        }
    }
}
