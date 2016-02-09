#include <iostream>

using namespace std;

int main() {
    //n is the number of specialty steaks.
    //k is the number of streaks which can be cooked simultaneously on one frying pan.
    int n, k;
    cin >> n >> k;
    cout << (n<k?2:2*n%k?2*n/k+1:2*n/k);

    return 0;
}
/*#include <stdio.h>

int main(){
    //n is the number of specialty steaks.
    //k is the number of streaks which can be cooked simultaneously on one frying pan.
    int n,k,min;
    scanf("%d %d",&n,&k);

    if((2*n)%k!=0){
        min=((2*n)/k)+1;
    }
    else {
        min=(2*n)/k;
    }

    printf("%d",min);
    return 0;
}

#include <iostream>

using namespace std;

int f(int n, int k) {
    if (n <= k) return 2;
    // n / k pairs of two mins
    if (n % k == 0) return n / k * 2;
    if (n > k && n < 2 * k) {
        if (n - k > k / 2) {
            return 4;
        }
        return 3;
    }
    // takes 2 mins to cook k steaks
    return f(n - k, k) + 2;
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << f(n, k);
    return 0;
}
*/
