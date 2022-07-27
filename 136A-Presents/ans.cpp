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

    // Take input
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int a[n];
    
    for(int i = 0; i < n; ++i) {
        a[arr[i] - 1] = i + 1;
    }
    
    for(int i: a) {
        cout << i <<" ";
    }
    

    return 0;
}
    
