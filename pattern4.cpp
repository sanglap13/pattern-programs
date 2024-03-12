#include <bits/stdc++.h>
using namespace std;

// Pattern:
// 1
// 2 2
// 3 3 3
// 4 4 4 4

void pattern4(int n) {
	for(int i = 1; i <=n ; i++) {
		for(int j =1;j<=i; j++) {
			cout<<i<<" ";
		}
		cout<<endl;
	}
}

int main()
{   
    int N;
    cout<<"Enter the number of rows: ";
    cin>>N;

    pattern4(N);

    return 0;
}