#include <iostream>
#include <vector>
using namespace std;

const int n = 10000000;

int main() {

    vector<bool> primes(n + 1, true);
    vector<int> primeNumbers;

    primes[0] = primes[1] = false;

    for (int p = 2; p * p <= n; ++p) {
        if (primes[p] == true) {
            for (int i = p * p; i <= n; i += p) {
                primes[i] = false;
            }
        }
    }

    for (int i = 2; i <= n; ++i) {
        if (primes[i]) {
            primeNumbers.push_back(i);
        }
    }

    int num;
    cout<<"Enter Number\n";
    cin>>num;

    if(primes[num]) cout<<"Prime Number\n";
    else cout<<"Composite Number\n";

    return 0;
}
