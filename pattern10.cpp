#include <bits/stdc++.h>
using namespace std;

// Pattern:
// *
// **
// ***
// **
// *

void pattern10(int n) {
	 for(int i=1; i<=2*n-1; i++) {
        int stars =i;
        if(i>n) stars = 2*n-i;
        for(int j=1; j<=stars;j++) {
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

    pattern10(N);

    return 0;
}