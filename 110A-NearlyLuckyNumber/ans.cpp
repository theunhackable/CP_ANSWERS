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
    int seven  = 0, four = 0;

    int rem;

    for(char i: s) {

        if( i == '4') ++ four;
        
        else if( i == '7') ++ seven;
    }

    int total = four + seven;

    if (total == 4 or total == 7) cout << "YES";

    else cout << "NO";

    return 0;
}
    
