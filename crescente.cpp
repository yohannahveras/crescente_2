#include <bits/stdc++.h>

using namespace std;

int main()
{

    int x, y;
    
    cout << "Digite dois numeros:\n";
    cin >> x >> y;
    
    while (x != y) {
        if (x > y) {
            cout << "DECRESCENTE!\n";
        }
        else {
            cout << "CRESCENTE!\n";
        }
        cout << "Digite outros dois numeros:\n";
        cin >> x >> y;
    }

    return 0;
}
