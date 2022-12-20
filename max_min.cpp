#include <iostream>
using namespace std;
void max_min(int a[],int n){
    int max=INT8_MIN;
    int min=INT8_MAX;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    cout<<"max is "<<max<<" "<<"min is "<<min<<endl;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    max_min(a,n);
    
    return 0;
}
