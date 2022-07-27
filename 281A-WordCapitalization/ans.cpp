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

    string s;
    cin >> s;

    if ((int)s[0] > 90) {

       s[0] = char(s[0] - 32);
    }

    cout << s;
    return 0;
}
    
