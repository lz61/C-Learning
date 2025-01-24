```
// 例1: scanf初识
#include <stdio.h>
int main(void){
	int x;
	// &x: 取地址x
	scanf("%d",&x);
	printf("输入的数据为%d",x);
}

// 例2: 输入格式对齐
scanf("x=%d",&x); // 必须输入: "x=1"

// 例3: 保证一定长度的输入,至多读x位
scanf("%2d",&x); // 输入: 1234
// x=12
// 与printf对比: printf是至少输出t位. scanf是至多读t位.
```

