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
    while(t --) {
        int n;
        cin >> n;

        vector<int> temp;
        int tens = 1, rem;
        while(n > 0) {
            rem = n % 10;
            
            if(rem != 0) {

                temp.push_back(tens * rem);
            }
            n /= 10;
            tens *= 10;
        }
        printf("%d\n", temp.size());

        for (auto i : temp) {
            
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
    
