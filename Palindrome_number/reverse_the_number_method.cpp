#include <iostream>
using namespace std;
int Palindrome(int n){
    int reverse=0;
    while(n!=0){
        reverse=(reverse*10)+(n%10);
        n/=10;
    }
    return reverse;
}

int main()
{
    int n;
    cout<<"enter the number :";
    cin>>n;
    int r=Palindrome(n);
    //cout<<r<<endl;
        if(r==n){
            cout<<"the number is palindrome"<<endl;
        }else{
            cout<<"the number is  not palindrome"<<endl;
        }
    
    
    return 0;
}
