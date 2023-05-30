#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int num;
    cin >> num;
    int *div = new int[num];

    for (int i = 0; i < num; i++)
        cin >> div[i];

    sort(div, div + num);
    if(num == 1){
        cout << div[0] * div[0];
        delete[] div;
        return 0;
    }
    cout << div[0] * div[num-1];
    delete[] div;
    return 0;
}