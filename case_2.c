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
// int main(void)
// {
//     for (int i = 1; i <= 9; i++) {
//         for (int j = 1; j <= i; j++) {
//             printf("%d*%d=%2d ", j, i, i * j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//数组求和
// int main(void)
// {
//     int sum = 0;
//     double j = 0;
//     double arr[10] = { 0 };
//     scanf("%le ",&arr[10]);
//     for (j = 0; j < 10; j++) {
//         sum += j;
//     }
//     printf("Sum = %d\n",sum);
//     printf("Average = %d\n",sum / 10);
//     return 0;
// }

//求最大最小值
// int main(void)
// {
//     int max = 0, min = 0;
//     double arr[10] = { 0 };
//     scanf("%le ",&arr[10]);
//     for (int j = 0; j <= 10; j++) {
//         if (arr[10] > j) {
//             max = arr[10];
//         }
//     }
//     printf("%d\n", max);
//     return 0;
// }

// //统计数据 
// int main(void)
// {
//     double arr[10] = { 0 };
//     scanf("%le", &arr[10]);
//     for (int i = 0; i <= 9; i++) {
//         if (arr[10] > 0) {
//             printf("%d ", arr[10]);
//         } else if (arr[10] < 0) {
//             printf("%le ", arr[10]);
//         } else if (arr[10] == 0) {
//             printf("%le ", arr[10]);
//         }
//     }
//     return 0;
// }

//在1-4整数中输出不重复的三位整数且统计有多少个
int main(void)
{
    int g, s, b;
    int count = 0;

    for(b = 1; b < 5; b++) {
        for(s = 1; s < 5; s++) {
            for(g = 1; g < 5; g++) {
                if(b != s && s != g && g != b) {
                    printf("%d%d%d ",b,s,g);
                    count++;
                }
            }
        }
    }
    
    printf("\n");
    printf("count = %d\n",count);

    return 0;
}