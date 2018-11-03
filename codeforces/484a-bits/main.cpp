#include<iostream>
using namespace std;

int n;
long long l,r,number;

int main(){
    cin>>n;

    while(n--){
        cin>>l>>r;
        number=l;

        for(int i=0;i<=64;++i){
            if(!(number & (1LL<<i))){
                if(number+(1LL<<i)<=r){
                    number+=(1LL<<i);
                }
                else{
                    i=65;
                }
            }
        }

        cout<<number<<endl;
    }

    return 0;
}

