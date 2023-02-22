//contributed by shivam kumar singh
#include <iostream>
using namespace std;
int factorial (int n){
    if (n == 0){
        cout<<0<<endl;
    }
    if(n==1){
        cout<<1<<endl;
    }
    int res=1;
    for(int i=2;i<=n;i++){
        res=res*i;

    }
    return res;
}


int main()
{
    int a;
    cin>>a;
    cout<<factorial(a);
    
    
    return 0;
}
//contributed by @shivam-0109
