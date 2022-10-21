bool isPrime(int number)
{

    if (number < 2)
        return false;
    if (number == 2)
        return true;
    if (number % 2 == 0)
        return false;
    for (int i = 3; (i * i) <= number; i += 2)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}

#include <bitset>
bitset<500001> Primes;
void SieveOfEratosthenes(int n)
{
    Primes[0] = 1;
    for (int i = 3; i * i <= n; i += 2)
    {
        if (Primes[i / 2] == 0)
        {
            for (int j = 3 * i; j <= n; j += 2 * i)
                Primes[j / 2] = 1;
        }
    }
}

vector<bool> getPrimes(int N)
{
    vector<bool> prime[N];
    for (i = 2; i <= sqrt(N); i++)
    {
        if (prime[i] == true)
        {
            for (j = i * i; j < N; j = j + i)
            {
                prime[j] = false;
            }
        }
    }
    prime[0] = prime[1] = 0;
    return prime;
}