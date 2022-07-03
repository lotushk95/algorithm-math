#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, ans=0;
    cin >> N;
    vector<int> A(N);
    for(int i=0; i<N; i++){
        cin >> A.at(i);
        ans += A.at(i);
    }
    cout << ans % 100 << endl;
}