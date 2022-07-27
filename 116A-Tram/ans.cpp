#include<bits/stdc++.h>
using namespace std;

void init() {
	#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
}

int main() {
    init();

    int n;

    cin >> n;
    int exit , enter, ans = 0, maxi = INT_MIN;
    for (int i = 0; i < n; ++i) {
        
        cin >> exit >> enter;
        ans -= exit;
        ans += enter;

        maxi = max(ans, maxi);

    }

    cout << maxi;
    return 0;
}
    
