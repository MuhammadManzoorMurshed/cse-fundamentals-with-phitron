#include <stdio.h>

int main()
{
    int m1_workers, m2_workers, days, days_will_take_for_m2_workers;

    scanf("%d %d %d", &m1_workers, &m2_workers, &days);

    days_will_take_for_m2_workers = (m1_workers * days) / m2_workers;

    printf("%d\n", days_will_take_for_m2_workers);

    return 0;
}