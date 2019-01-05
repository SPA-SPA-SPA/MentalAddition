/*心算训练（连加3个三位的整数）*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a, b, c;                // 要进行加法运算的数值
    int x;                      // 已读取的数值
    clock_t start, end;         // 开始时已经经过的时钟数和结束时已经经过的时钟数
    double req_time;            // 最后计算出来的秒数

    srand(time(NULL));          // 设定随机数的种子为时间

    a = 100 + rand() % 900;     // 生成100~999的随机数
    b = 100 + rand() % 900;
    c = 100 + rand() % 900;

    printf("%d + %d + %d等于多少：", a, b, c);

    start = clock();            // 开始计时

    while(1){
        scanf("%d", &x);
        
        if (x == a + b + c)
            break;
        printf("\a回答错误！\n请重新输入：");
    }
    end = clock();              // 结束计时

    req_time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("用时%.1f秒。\n", req_time);
    
    if (req_time > 30.0) 
        printf("花太长时间了。\n");
    else if (req_time > 17.0)
        printf("还行吧。\n");
    else
        printf("真快啊。\n");
    
    return 0;
}
