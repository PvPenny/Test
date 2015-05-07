#include <stdio.h>
#include <iostream>

using namespace std;

int fakt( int arg)
{
    if (arg>22)
        throw "Argument is too large";
    return (arg == 0 ? 1 : arg*fakt(arg-1));
}

int main()
{
    cout<<"Enter a"<<endl;
    int a;
    cin>>a;
    cout<<"Enter c"<<endl;
    int c;
    cin>>c;
    float y;
    try {
    y=fakt(8)*fakt(5*c)/fakt(a-9);
    cout<<"y="<<y;
    }

    catch(...)
    {
  cerr << "Handler for any type of exception called" << endl;
    }
}
