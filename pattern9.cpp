#include <bits/stdc++.h>
using namespace std;

// Pattern:
//   *
//  ***
// *****
// *****
//  ***
//   *

void pattern9Top(int n) {
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

void pattern9Bottom(int n) {
	     for(int i=0;i<n;i++) {
        //for spaces
        for(int j=0; j<i;j++) {
            cout<<" ";
        }
        //for stars
        for(int j=0; j<2*n - (2*i+1);j++) {
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

    pattern9Top(N);
    pattern9Bottom(N);

    return 0;
}