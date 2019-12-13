#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
    long long n1,n2,num=0;
    cin>>n1>>n2;
    for(long long i=n1;i<=n2;++i){
        if((i%2!=0)||(i%4==0)){
            ++num;
        }
    }
    cout<<num;
    return 0;
}
