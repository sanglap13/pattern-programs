#include <bits/stdc++.h>
using namespace std;

// Pattern:
// 1      1
// 12    21
// 123  321
// 12344321

void pattern12(int n) {
int spaces = 2*(n-1);
      
      for(int i=1;i<=n;i++){
          //for numbers
          for(int j=1;j<=i;j++){
              cout<<j;
          }
        // for spaces
          for(int j = 1;j<=spaces;j++){
              cout<<" ";
          }
          //for numbers
          for(int j=i;j>=1;j--){
              cout<<j;
          }
          
          cout<<endl;
          spaces-=2;
      }
}

int main()
{   
    int N;
    cout<<"Enter the number of rows: ";
    cin>>N;

    pattern12(N);

    return 0;
}