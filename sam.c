#include <stdio.h>
int main(){
    int i, n, dias;
    float x;

    scanf("%d", &n);
    for(i = 0; i < n; i++){
            scanf("%f", &x);
            dias = 0;
            while(x > 1){
                    x /= 2;
                    dias++;
            }
            printf("%d diasn", dias);
    }

    return 0;
}
