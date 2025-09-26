//url: https://www.codetree.ai/en/trails/complete/curated-cards/challenge-sum-and-average-of-the-inputs/description

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        sum += a[i];
    }

    cout << sum << " ";
    cout << fixed;
    cout.precision(1);
    cout << sum / (n * 1.0) << endl;
  
    return 0;
}
