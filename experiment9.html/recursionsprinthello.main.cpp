#include <bits/stdc++.h>
using namespace std;

   void printhello(int n)    {
                  if(n==0)
                  {return;}
                  cout<< "   " << "hello";
                  printhello(n-1);
                  
                 }
                 int main()
                 { int t=5;
                 printhello(t);
                 return 0;
                 
            
                  
                
}
