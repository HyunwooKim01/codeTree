#include <iostream>
using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    cout << a << " ";
    while(true){
        if((a % 2 == 0) && (a + 3 <= b)) {
            a += 3;
            cout << a << " ";
        }
        else if((a % 2 != 0) && (a * 2 <= b)){
            a *= 2;
            cout << a << " ";
        }
        else break;
    }

    return 0;
}
