// WAP to print series from 1 to 50 using recursion.



#include <bits/stdc++.h>
using namespace std;

void print_series(int n)    {
    if(n==51)    {
          return;
          
    }
     cout<<"   "<<n;
     print_series(n+1);
     
}

int main()    {
    int t=1;
    print_series(1);
    return 0;

      }
