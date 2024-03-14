#include <bits/stdc++.h>
using namespace std;

// Pattern:
// 33333
// 32223
// 32123
// 32223
// 33333

void pattern22(int n) {
        for(int i=0;i<2*n-1;i++){
         
         for(int j=0;j<2*n-1;j++){
             
             int top = i;
             int bottom = j;
             int right = (2*n - 2) - j;
             int left = (2*n - 2) - i;
             cout<<(n- min(min(top,bottom), min(left,right)));
         }
         cout<<endl;
     }
      
     

}

int main()
{   
    int N;
    cout<<"Enter the number of rows: ";
    cin>>N;

    pattern22(N);

    return 0;
}