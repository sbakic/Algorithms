#include <iostream>

using namespace std;

int main(){
    long long n;
    cin>>n;

    n%2==0?cout<<n/2:cout<<-(n+1)/2;

    return 0;
}
