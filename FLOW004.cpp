#include <iostream>
using namespace std;

int main() 
{
    int t,n,f,l,s,sum,i;
    cin>>t;
    while(t--){
    cin>>n;
    s=n;
   do{
       f=n%10;
       n=n/10;
   }while(n!=0);
    
    for(i=0;i<1;i++){
        l=s%10;
    }
    sum=f+l;
    cout<<sum<<endl;
    }
	return 0;
}