#include <stdio.h>

void update(int *a,int *b) {
    int x = *a;
    int mod = 1;
    if (*a<*b) mod=-1;
    *a = *a +*b;
    *b = (x-*b) * mod; 
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}