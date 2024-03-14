#include <bits/stdc++.h>
using namespace std;

// Pattern:
// *     *
// **   **
// *** ***
// *******
// *** ***
// **   **
// *     *

void pattern20(int n) {
      int spaces = 2*n-2;
      for(int i = 1;i<=2*n-1;i++){
          int stars = i;
          
          if(i>n) stars = 2*n - i;
          //for printing the stars
          for(int j=1;j<=stars;j++){
              cout<<"*";
          }
          //for printing the spaces
          for(int j = 1;j<=spaces;j++){
              cout<<" ";
          }
          //for printing the stars
          for(int j = 1;j<=stars;j++){
              cout<<"*";
          }
          cout<<endl;
          if(i<n) spaces -=2;
          else spaces +=2;
      }
      
     

}

int main()
{   
    int N;
    cout<<"Enter the number of rows: ";
    cin>>N;

    pattern20(N);

    return 0;
}