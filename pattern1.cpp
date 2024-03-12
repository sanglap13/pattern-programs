#include <bits/stdc++.h>
using namespace std;

void pattern1(int n) {
	// Write your code here.
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<n; j++) {
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

    pattern1(N);

    return 0;
}