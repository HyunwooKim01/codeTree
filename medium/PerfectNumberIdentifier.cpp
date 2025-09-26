//url: https://www.codetree.ai/en/trails/complete/curated-cards/challenge-perfect-number-discriminator/description

#include <iostream>
using namespace std;

int main() {
    int n, result = 0;

    cin >> n;

    for(int i = 1; i < n; i++){
        if(n % i == 0) result += i;
    }

    if(result == n) cout << "P" << endl;
    else cout << "N" << endl;

    return 0;
}
