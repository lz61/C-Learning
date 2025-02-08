1.第一个C语言程序: 输出hello world

```
#include <stdio.h>
int main(){
	printf("Hello World!");
}
```



2.C语言基本语法格式:

A.单行注释: 

```
// 添加注释
在每一行中,在//后面的内容自动无视,不管//出现在哪里.
实例:
printf("Hello World!");// ...printf("Hello World!");（无用）
```



B.每句可执行语句后面有一个分号

```
printf("Hello World!"); // 正确的语句
printf("Hello World!") // 不正确的语句
```



C.多行注释:

```
/*
注释行1
注释行2
注释行3
*/
```


D.规律之一: 大部分右大括号后面都没有分号,除了结构体以外.

E.C语言会逐行执行代码.

练习:

1.编写C程序,输出两行Hello World(需要在源代码中有多行和单行注释)

