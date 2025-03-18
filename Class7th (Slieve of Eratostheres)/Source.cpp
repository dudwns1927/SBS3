#include <iostream>
#include <vector>
using namespace std;


void sieve(int n)
{
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    cout << "1부터 " << n << "까지의 소수: ";
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    while (1) {
        int n;
        cout << "n 값을 입력하세요: ";
        cin >> n;

        sieve(n);
    }
    return 0;

}



#include <iostream>
#include <vector>
using namespace std;


void sieve(int n)
{
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    cout << "1부터 " << n << "까지의 소수: ";
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    while (1) {
        int n;
        cout << "n 값을 입력하세요: ";
        cin >> n;

        sieve(n);
    }
    return 0;

}



