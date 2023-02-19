#include <iostream>
using namespace std;
int Palindrome(string str){
    int n=str.length();
    for(int i=0;i<n;i++){
        if(str[i]!=str[n-i-1]){
            return false;
    }
    return true;
    
}
}

int main()
{
    string n;
    cout<<"enter the number :";
    cin>>n;
    int r=Palindrome(n);
    //cout<<r<<endl;
        if(r==true){
            cout<<"the number is palindrome"<<endl;
        }else{
            cout<<"the number is  not palindrome"<<endl;
        }
    
    
    return 0;
}
