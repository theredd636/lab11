#include <stdio.h>

int main() {
    int i=2;
    if (i==2)
    {
        i=3;
    }
    int p=3;
    if (p==3)
    {
        i=5;
    }
    printf("%d\n",p);
    printf("%d\n",i);
    printf("change\n");
    return 0;
}
