#include <bits/stdc++.h>
using namespace std;

// Pattern:
// A
// B B
// C C C
// D D D D

void pattern16(int n) {
for(int i=0;i<n;i++) {
        char ch = 'A'+i;
          for(int j=0;j<=i;j++){
              cout<<ch<<" ";
              
          }
          cout<<endl;
    }

}

int main()
{   
    int N;
    cout<<"Enter the number of rows: ";
    cin>>N;

    pattern16(N);

    return 0;
}