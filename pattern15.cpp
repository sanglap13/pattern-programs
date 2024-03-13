#include <bits/stdc++.h>
using namespace std;

// Pattern:
// A
// A B
// A B C
// A B C D

void pattern15(int n) {
 for(int i=n;i>=0;i--) {
          for(char ch = 'A'; ch<='A'+i-1;ch++){
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

    pattern15(N);

    return 0;
}