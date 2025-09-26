#include <iostream>
using namespace std;

int main() {
    int n, classroom = 0, hallway = 0, toilet = 0;
    cin >> n;

    for(int i = 0; i <= n; i++){
        if(i == 0) continue; // i = 1로 시작해도 되는데 문제 그대로 적다보니 ㅎㅎ

        if(i % 2 == 0){
            if(i % 12 == 0) toilet++;
            else if(i % 3 == 0) hallway++;
            else classroom++;
        }
        else if(i % 3 == 0) hallway++;
    }

    cout << classroom << " " << hallway << " " << toilet << endl;

    return 0;
}
