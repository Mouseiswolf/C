#include<stdio.h>
#include <ctype.h>
int add(int m, int n){
	return m+n;
}

int sub(int m, int n){
	return m-n;
}
int main(int argc, char *argv[])
{
	int (*p)(int m, int n);
	int a=70;
	int b=13;
	p=add;
	printf("%d\n", p(a,b));//c++等价写法
	p=sub;
	printf("%d\n", (*p)(a,b));//C标准写法

}

