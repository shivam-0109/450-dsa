//contributed by shivam kumar singh
#include <iostream>
using namespace std;
int factorial (int n){
    return(n==0||n==1)?1:n*factorial(n-1);
   

    }

int main()
{
    int a;
    cin>>a;
    cout<<factorial(a);
    
    
    return 0;
}
//by @shivam-0109
