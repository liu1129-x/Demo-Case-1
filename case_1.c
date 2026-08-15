#include <stdio.h>

//企业发放的奖金根据利润提成。
// int main(void)
// {
//     int profit = 0;
//     int bonus = 0;
    
//     scanf("%d", &profit);

//     if(profit <= 100000) {
//         bonus = profit * 0.1;
//     } else if(profit <= 200000) {
//         bonus = 100000 * 0.1 + (profit - 100000) * 0.075;
//     } else if(profit <= 400000) {
//         bonus = 100000 * 0.1 + 100000 * 0.075 + (profit - 200000) * 0.05;
//     } else if(profit <= 600000) {
//         bonus = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + (profit - 400000) * 0.03;
//     } else if(profit <= 1000000) {
//         bonus = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + (profit - 600000) * 0.015;
//     } else {
//         bonus = 100000 * 0.1 + 100000 * 0.075 + 400000 * 0.05 + 600000 * 0.03 + 1000000 * 0.015 + (profit 
//             - 1000000) * 0.01;
//     }

//     printf("bonus=%d\n", bonus);
//     return 0;
// }

/*题目：
一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，
请问该数是多少。
*/
int main() {
    for (int a = 1; a * a <= 168; a++) {   // 只枚举较小的因数 a
        if (168 % a == 0) {
            int b = 168 / a;
            // 必须 a < b 且同奇偶
            if (a < b && (a + b) % 2 == 0) {
                int m = (b - a) / 2;
                int x = m * m - 100;
                printf("x = %d (m=%d, n=%d)\n", x, m, (a + b) / 2);
            }
        }
    }
    return 0;
}