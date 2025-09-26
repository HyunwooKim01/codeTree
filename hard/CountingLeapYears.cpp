//url: https://www.codetree.ai/en/trails/complete/curated-cards/challenge-number-of-leap-years/description

#include <iostream>
using namespace std;

int main() {
    int N, cnt = 0;

    cin >> N;

    for(int i = 1; i <= N; i++){
        if((i % 4 == 0) ? ((i % 100 == 0) && (i % 400 != 0) ? false : true) : false) cnt++;
    }
    
    cout << cnt;

    return 0;
}
