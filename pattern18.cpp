#include <bits/stdc++.h>
using namespace std;

// Pattern:
//     A
//   A B A
// A B C B A

void pattern18(int n) {
 for(int i=0;i<n;i++) {
        for(char ch =('A'+n-1);ch>=('A' +n-1)-i;ch--){
              
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

    pattern18(N);

    return 0;
}