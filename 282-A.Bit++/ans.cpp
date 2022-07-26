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

    int t, x = 0;
    cin >> t;
    string s;

    while(t --) {
        cin >> s;
        for(auto i: s) {
            if(i == '+') {
                ++ x;
                break;
            }
            else if(i == '-') {
                -- x;
                break;
            }
        }
    }
    cout << x << '\n';
}