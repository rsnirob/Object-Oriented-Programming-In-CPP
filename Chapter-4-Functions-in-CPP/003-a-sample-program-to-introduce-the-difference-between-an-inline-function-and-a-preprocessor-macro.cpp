#include<iostream>

using namespace std;

#define maxValue( a , b) ( a > b ? a : b )

inline int maximum (int a, int b)
{
    return a>b?a:b;
}
int main()
{
    int x = maxValue(1,2);
    int y = maximum(1,2);
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
}
