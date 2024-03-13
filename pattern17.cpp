#include <bits/stdc++.h>
using namespace std;

// Pattern:
//     A
//   A B A
// A B C B A

void pattern17(int n) {
 for(int i=0;i<n;i++) {
        //for spaces
         for(int j=0;j<n-i-1;j++){
              cout<<"  ";
          }
          //for chars
           char ch = 'A';
          int breakpoint = (2*i+1)/2;
          for(int j=1;j<=2*i+1;j++){
              
              cout<<ch<<" ";
              if(j <= breakpoint) ch++;
              else ch--;
          }
          cout<<endl;
    }

}

int main()
{   
    int N;
    cout<<"Enter the number of rows: ";
    cin>>N;

    pattern17(N);

    return 0;
}