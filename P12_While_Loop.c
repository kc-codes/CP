#include <stdio.h>

int main()
{
    int x =0;
    int y =0;
    while(x<=10)
    {
        y=y+x;
        printf("%d\n",y);
        x++;
    }
    return 0;
}

/*
output:
0
1
3
6
10
15
21
28
36
45
55
*/
