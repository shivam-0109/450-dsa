#include <iostream>
using namespace std;
int print(int n){
     if(n>=1){
         print(n-1);
         return n;        
     }
}

int main()
{
    int n;
    cin>>n;
    cout<<print(n);
    
    return 0;
}
