#include <bits/stdc++.h>
using namespace std;

// Pattern:
// ********
// ***  ***
// **    **
// *      *
// *      *
// **    **
// ***  ***
// ********

void pattern19(int n) {

    //for upper half of the pattern
  int initialSpaces = 0;
      for(int i=0;i< n;i++){
        //for stars
          for(int j=1;j<=n-i;j++){
              cout<<"*";
          }
          // for spaces
          for(int j=0;j<initialSpaces;j++){
              cout<<" ";
          }
          //for stars
          for(int j=1;j<=n-i;j++){
              cout<<"*";
          }
          initialSpaces+=2;
          cout<<endl;
      }
      
      //lower half of the pattern
      initialSpaces = 2*n -2;
      for(int i=1;i<=n;i++){
        //for stars
          for(int j=1;j<=i;j++){
              cout<<"*";
          }
          //for spaces
          for(int j=0;j<initialSpaces;j++){
              cout<<" ";
          }
          //for stars
          for(int j=1;j<=i;j++){
              cout<<"*";
          }
          initialSpaces-=2;
          cout<<endl;
      }

}

int main()
{   
    int N;
    cout<<"Enter the number of rows: ";
    cin>>N;

    pattern19(N);

    return 0;
}