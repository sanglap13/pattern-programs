#include <bits/stdc++.h>
using namespace std;

// Pattern:
//   *
//  ***
// *****

void pattern7(int n) {
	 for(int i=0;i<n;i++) {
        //for spaces
        for(int j=0; j<n-i-1;j++) {
            cout<<" ";
        }
        //for stars
        for(int j=0; j<2*i+1;j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}

int main()
{   
    int N;
    cout<<"Enter the number of rows: ";
    cin>>N;

    pattern7(N);

    return 0;
}