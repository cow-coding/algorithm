#include <cstdio>
#include <iostream>

int main()
{
    int Q;
    scanf("%d", &Q);
    
    while (Q--) {
        int num;
        
        scanf("%d", &num);
        
        if ((num & (-num)) == num) {
            printf("1\n");
        } else
            printf("0\n");
    }
}
