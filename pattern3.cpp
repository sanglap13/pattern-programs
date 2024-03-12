#include <bits/stdc++.h>
using namespace std;

// Pattern:
// 1
// 1 2
// 1 2 3
// 1 2 3 4

void pattern3(int n) {
	for(int i =1; i<=n; i++) {
		for(int j=1; j<=i; j++) {
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

    pattern3(N);

    return 0;
}