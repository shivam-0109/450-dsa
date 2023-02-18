//by sks0109
#include <iostream>
using namespace std;
int countdigit(long long n){
    if(n==0)

        return 1;

    int count=0;
    while(n!=0){
        ++count;
        n/=10;
    }
    return count;
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
