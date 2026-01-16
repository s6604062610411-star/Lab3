#include <stdio.h>

int main() {
    int h, m, s, add_m;
    
    
    scanf("%d:%d:%d", &h, &m, &s);
    scanf("%d", &add_m);

    m = m + add_m;      
    h = h + (m / 60);   
    m = m % 60;         
    h = h % 24;         

    printf("Hour:%d\nMinute:%d\nsecond:%d\n", h, m, s);

    return 0;
}
