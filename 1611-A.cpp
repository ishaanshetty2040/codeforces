#include<bits/stdc++.h>
using namespace std;
bool check(int n)
{
    int rem=0,flag=0;
    while(n>0){
        rem=n%10;
        n=n/10;
        
        if(rem%2==0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        return true;
    }
    else{
        return false;
    }
}
int firstDigit(int n)
{
    
    while (n >= 10)
        n /= 10;
     
 
    return n;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        int x=0;
        if(n%2!=0)
        {
        if(check(n))
        {
           
            x=firstDigit(n);
            if(x%2==0){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
        
        else{
            cout<<-1<<endl;
        }
        }
        else{
            cout<<0<<endl;
        }
        
        
    }
}
