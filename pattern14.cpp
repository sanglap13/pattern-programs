#include <bits/stdc++.h>
using namespace std;

// Pattern:
// A
// A B
// A B C
// A B C D

void pattern14(int n) {
 for(int i=0;i<n;i++) {
          for(char ch = 'A'; ch<='A'+i;ch++){
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

    pattern14(N);

    return 0;
}