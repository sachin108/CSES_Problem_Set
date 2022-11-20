// not mine

#include<bits/stdc++.h>
using namespace std;
#define li long int

int main()
{
    int tc;
    li x, y;
    cin >> tc;
    while (tc--){
        cin >> x >> y;

        if (x < y){
            if (y % 2 == 1){
                li num = y * y;
                cout << num - x + 1 << endl;
            }
            else{
                li num = (y - 1) * (y - 1) + 1;
                cout << num + x - 1 << endl;
            }
        }

        else{
            if (x % 2 == 0){
                li num = x * x;
                cout << num - y + 1 << endl;
            }
            else{
                li num = (x - 1) * (x - 1) + 1;
                cout << num + y - 1 << endl;
            }
        }
    }
    return 0;
}