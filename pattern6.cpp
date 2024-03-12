#include <bits/stdc++.h>
using namespace std;

// Pattern:
// 1 2 3
// 1 2
// 1

void pattern6(int n) {
	 for(int i=0; i<n; i++) {
		for(int j =1;j<n-i+1 ;j++) {
			cout<<j<<" ";
		}
		cout<<endl;
	}
}

int main()
{   
    int N;
    cout<<"Enter the number of rows: ";
    cin>>N;

    pattern6(N);

    return 0;
}