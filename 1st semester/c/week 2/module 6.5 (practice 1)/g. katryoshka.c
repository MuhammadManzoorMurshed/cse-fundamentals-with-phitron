#include <stdio.h>
int main()
{
    long long n, m, k, katryoshka = 0;

    scanf("%lld %lld %lld", &n, &m, &k);

    if(n < m && n < k)
    {
        katryoshka += n;
    }
    else if(m < n && m < k)
    {
        katryoshka += m;
    }
    else
    {
        katryoshka += k;
    }

    n = n - katryoshka;
    m = m - katryoshka;
    k = k - katryoshka;

    if(n / 2 <= k)
    {
        katryoshka += n / 2;
    }
    else
    {
        katryoshka += k;
    }

    printf("%lld\n", katryoshka);

    return 0;
}
