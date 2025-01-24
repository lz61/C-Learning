```
// 例1: printf实例
#include <stdio.h>
int main(void){
	printf("Hello World!");
}

// 例2: printf结合逗号与占位符
printf("%d",1); // 输出1

// 例3: printf多个参数
printf("%d %d",1,2); // 输出1,2
%d名字: 占位符

// 例4: 非十进制输出
%d: 十进制整数(decimal)
%o: 八进制整数(octal)
printf("%o",23); // 输出27: 2*8+7=23

%x: 十六进制整数
printf("%x",23); // 输出: 17

// 例5: 保证一定长度的输出,至少与数字等长
printf("%5d",1234); // 输出: " 1234"
printf("%2d",1234); // 输出: "1234"

// 例6: 特殊的printf
printf("%d",NULL); // 输出: 0
// NULL表示0地址,所以是0(死记硬背就好).

// 例8: printf输出换行
比较: printf("12");
	 printf("34");
// 与:
printf("12\n");
printf("34");

// 例9: printf输出小数
printf("%f",1.2);
```

