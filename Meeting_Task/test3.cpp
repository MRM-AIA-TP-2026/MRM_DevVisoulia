#include <iostream>      
#include <vector>        
using namespace std;

int main() {
    int n,div=2,flag,run=1,pnum,prime=0,i=2;
    cout<< "enter the number\n";
    cin>> n;
    while(prime<n){        
        flag=0;
        div=2;
        while(div<i){
        if(i==1){
            continue;
        }
        else if(i==2){
            cout<<i<<" ";
            prime++;
        }
        else if (i%div==0)
        {
            flag=1;
            break;
        }
        div++;
        }
        if (flag==0)
        {
            cout<<i<<" ";
            prime++;
        }
        i++;
    }
    return 0;
}
