#include <stdio.h>

// int main(void)
// {
//     int g, s, b, i = 0;
//     for(i = 100; i <= 999; i++) {
//         g = i % 10;
//         s = i / 10 % 10;
//         b = i / 100;
//         if(g*g*g + s*s*s + b*b*b == i) {
//             printf("%d ",i);
//         }
//     }
//     printf("\n");
//     return 0;
// }

// int main(void)
// {
//     int g, s, b;
//     int r = 0;
//     scanf("%d",&r);
//     g = r % 10;
//     s = r / 10 % 10;
//     b = r / 100;
//     printf("%d %d %d\n", b, s, g);
//     printf("换位后:%d %d %d\n", g, s, b);
//     printf("总和:%d\n", g + s + b);
//     return 0;
// }

int main(void)
{
    int sum = 0, sum1 = 0;
    printf("偶数:");
    for(int i = 100; i <= 999;i++){
        if(i % 2 == 0){
            printf("%d ", i);
            sum1 += i;
        }
        sum += i;
    }
    printf("\n");
    printf("被7整除的数:");
    for(int i = 100; i <= 999;i++){
        if(i % 2 == 0){
            printf("%d ", i);
        }
    }
    printf("\n");
    printf("和:%d\n", sum);
    printf("偶数和:%d\n", sum1);
    return 0;
}

// int main(void)
// {
//     int i = 0, g, s, b;
//     scanf("%d",&i);
//     g = i % 10;
//     s = i / 10 % 10;
//     b = i / 100;
//     if(g*g*g + s*s*s + b*b*b == i){
//         printf("yes\n");
//     } else {
//         printf("no\n");
//     }
//     return 0;
// }

// int main(void)
// {
//     int i = 0, g, s, b;
//     for (i = 100; i <= 999; i++) {
//         g = i % 10;
//         s = i / 10 % 10;
//         b = i / 100;
//         if (g > s) {
//             printf("%d ",i);
//         }
//     }
//     printf("\n");
//     printf("********************");
//     printf("\n");
//     for (i = 100; i <= 999; i++) {
//         g = i % 10;
//         s = i / 10 % 10;
//         b = i / 100;
//         if (g + s + b == 10) {
//             printf("%d ",i);
//         }
//     }
//     printf("\n");
//     printf("********************");
//     printf("\n");
//     for (i = 100; i <= 999; i++) {
//         g = i % 10;
//         s = i / 10 % 10;
//         b = i / 100;
//         if (g == b) {
//             printf("%d ",i);
//         }
//     }
//     printf("\n");
//     return 0;
// }

// int main(void)
// {
//     int i = 0, g, s, b;
//     scanf("%d",&i);
//     g = i % 10;
//     s = i / 10 % 10;
//     b = i / 100;
//     printf("%d%d%d\n", g, s, b);
//     return 0;
// }