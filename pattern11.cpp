#include <bits/stdc++.h>
using namespace std;

// Pattern:
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

void pattern11(int n) {
	 int start;
     for(int i=0;i<n;i++) {

         if(i%2 ==0) start = 1;
          else start = 0;

           for(int j=0;j<=i;j++){
              cout<<start<<" ";
              start = 1-start;
          }
          cout<<endl;
     }
}

int main()
{   
    int N;
    cout<<"Enter the number of rows: ";
    cin>>N;

    pattern11(N);

    return 0;
}