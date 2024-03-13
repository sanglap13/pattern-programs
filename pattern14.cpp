#include <bits/stdc++.h>
using namespace std;

// Pattern:
//1
//2 3
//4 5 6
//7 8 9 10

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