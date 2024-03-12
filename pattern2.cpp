#include <bits/stdc++.h>
using namespace std;

// Pattern:
// *
// * *
// * * *
// * * * *

void pattern2(int n) {
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<=i; j++) {
			cout<<"* ";
		}
		cout<<endl;
	}
}

int main()
{   
    int N;
    cout<<"Enter the number of rows: ";
    cin>>N;

    pattern2(N);

    return 0;
}