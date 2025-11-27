//Wap to use call by value concept in cpp


#include <iostream>
using namespace std;

int change(int x)
{
      x=50;
      return x;
}

int main()
{
    int t=10;
    t = change (t);
    cout<<endl<< t;
    return 0;
}
