#include <iostream>
#include <iomanip>
using namespace std;

int main()
{   
    int  a,n,soma=0;
    cin>>a>>n;
    while(n<=0){
        cin>>n;
    }
    for(int i=0;i<=n-1;i++){
        soma+=a;
        a++;
    }
    cout<<soma<<endl;
    return 0;
}