#include <iostream>
 
using namespace std;
 
int main() {
 
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
        cout<<"Ho"<<" !"[i==x-1];
    
    }
    cout<<endl;
    return 0;
}