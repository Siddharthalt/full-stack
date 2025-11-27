//wap to use call by reference concept in cpp


#include <iostream>
using namespace std;
 int change (int&);
  int main()
  {
      int t=10;
      change(t);
      cout<<endl<<t;
      return 0;
      
  }
  
  int change (int &x)
  {
      x=50;
      cout<<endl<<x;
      return x;
      
  }