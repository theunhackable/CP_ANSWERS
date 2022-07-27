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
    cin >>n;
    int arr[n];
    int maxi = 0, mini = 101, max_ind = -1, min_ind = -1;
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
        if( arr[i] > maxi) {
            maxi = arr[i];
            max_ind = i;
        }
        if( arr[i] <= mini) {
            mini = arr[i];
            min_ind = i;
        }
    }
    int count = 0;

    // if all elements are same

    if(arr[min_ind] == arr[max_ind])
        count = 0;
    
    else if(min_ind < max_ind) {
        
        count = (n - min_ind - 1) + (max_ind - 1);
    }
    else {
        count = (n - min_ind - 1) + max_ind;    
    }


    cout << count;
    

    return 0;
}
    
