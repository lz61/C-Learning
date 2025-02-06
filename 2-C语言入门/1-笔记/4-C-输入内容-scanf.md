1.scanf初识

scanf实例1:

```
#include <stdio.h>
int main(void){
	int x;
	// &x: 取地址x
	scanf("%d",&x);
	printf("输入的数据为%d",x);
}
```

2: 使用scanf使输入格式对齐

```
scanf("x=%d",&x); // 必须输入: "x=1"
```

3.保证一定长度的输入,至多读x位

```
scanf("%2d",&x); // 输入: 1234,x=12
// 与printf对比: printf是至少输出t位. scanf是至多读t位.
```

小练习:

1.接收用户输入的整数,并打印到屏幕上.



