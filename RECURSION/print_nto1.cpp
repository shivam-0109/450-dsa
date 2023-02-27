#include <iostream>
using namespace std;

int reverse(int n){

if(n<=1){

    return 1;
    
}else{
    cout<<n<<" ";

reverse(n-1);}}


int main()
{
    int n;
    cin>>n;
    cout<<reverse(n);
    
    return 0;
}
