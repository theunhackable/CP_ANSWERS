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

    int t;
    cin >> t;
    bool n;
    while(t --) {
        cin >> n;

        if (n == 1) {
            break;
        }
    }
    if(n) cout << "hard";
    else cout << "easy";

    return 0;
}
    
