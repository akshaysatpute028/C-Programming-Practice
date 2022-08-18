#include <stdio.h>

void func(int x)
{
    int count = 0;
    if (x > 5)
    {
        func(--x);
        count++;
    }
    printf("\n%d %d", count, x);
}
int main()
{
    func(10);
    return 0;
}