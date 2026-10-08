#include <stdio.h>

int main()
{
    int n = 6;
    int spc = n;
    for (int i = 0; i <= n; i++){
        for (int k = spc; k >= 1; k--){
            printf(" ");
        }
    for (int j = 1; j <= i; j++){
        printf("%d ", i);
    }
    printf("\n");
    spc--;
    }
    

    return 0;
}
