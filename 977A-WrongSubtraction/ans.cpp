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

    int n, c;

    cin >> n >> c;

    int rem ;
    while(c > 0) {
        rem = n % 10;

        if(rem == 0) {
            n /=10;
            --c;
        }
        else {
            
            --n;
            --c;
        }
    }

    cout << n;

    return 0;
}
    
