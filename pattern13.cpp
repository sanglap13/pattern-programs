#include <bits/stdc++.h>
using namespace std;

// Pattern:
//1
//2 3
//4 5 6
//7 8 9 10

void pattern13(int n) {
 int number=1;
     for(int i=1;i<=n;i++){
          for(int j=1;j<=i;j++){
              cout<<number<<" ";
              number =number+1;
          }
          cout<<endl;
          
      }
}

int main()
{   
    int N;
    cout<<"Enter the number of rows: ";
    cin>>N;

    pattern13(N);

    return 0;
}