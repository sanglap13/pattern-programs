#include <bits/stdc++.h>
using namespace std;

// Pattern:
// * * *
// * *
// *

void pattern5(int n) {
	for(int i=0; i<n; i++) {
		for(int j =n;j>i ;j--) {
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

    pattern5(N);

    return 0;
}