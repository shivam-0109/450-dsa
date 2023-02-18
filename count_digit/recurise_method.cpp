//by sks0109
#include <iostream>
using namespace std;
int countdigit(long long n){
    if(n/10==0)

        return 1;

    return 1+countdigit(n/10);
}

int main()
{
    int n;
    cout<<"enter the number :";
    cin>>n;
    cout<<"number of digit is :"<<countdigit(n);
    
    return 0;
}
//contributed by shivam kumar singh 
