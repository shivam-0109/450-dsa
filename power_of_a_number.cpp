#include <iostream>
using namespace std;
int power(int base, int a) {
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}

int main()
{
    int d=power(2,4);
    cout<<d<<endl;
    
    return 0;
}
