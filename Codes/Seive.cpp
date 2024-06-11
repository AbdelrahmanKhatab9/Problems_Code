#include <bits/stdc++.h>
using namespace std;
const int N = 100 + 5;

bool isPrime[N];

void sieve(int n){
    for(int i = 2; i <= n; i++)
        isPrime[i] = 1;

    for(int i = 2; i * i <= n; i++)
        if(isPrime[i] == true)
            for(int j = i * i; j <= n; j += i)
                isPrime[j] = false;
}

int main(){
    sieve(100);

    for(int i = 1; i <= 100; i++)
        cout << i << ": " << isPrime[i] << '\n';
}