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
    int rows,cols;

    cin>>rows >> cols;

    char arr[rows][cols];

    bool flag = true;
   
    for(int i = 0; i < rows; ++i) {

        if(i % 2 == 0) {
            for(int j = 0; j < cols; ++j) {
                arr[i][j] = '#';
            }
        }
        else {

            if(flag) {
                for(int j = 0; j < cols - 1; ++j) {
                    arr[i][j] = '.';
                }
                arr[i][cols - 1] = '#';
                flag = false;
            }
            else {
                arr[i][0] = '#';
                for(int j = 1; j < cols; ++j) {
                    arr[i][j] = '.';
                }
                flag = true;
                   
            }

        }

        

    }
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            cout << arr[i][j];
        }
        cout << endl;
    }
    
    return 0;
}
    
