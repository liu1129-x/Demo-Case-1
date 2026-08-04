#include <stdio.h>

//判断是否是“幸运数”
// int main(void)
// {
//     int i = 0;
//     int g;
//     int s;
//     int b;
//     scanf("%d",&i);
//     if (i) {
//         g = i % 10;
//         s = i / 10 % 10;
//         b = i / 100;
//         if ((g + s + b) % 7 == 0) {
//             printf("Lucky\n");
//         } else {
//             printf("No\n");
//         }
//     }
//     return 0;
// }

//九九乘法表
int main(void)
{
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d*%d=%2d ", j, i, i * j);
        }
        printf("\n");
    }
    return 0;
}