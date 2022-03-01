#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
	int i = 0;
	int t;
	int b;
	char a;
	
	for (;;)
	{
		/*printf("|***********************|\n");
		printf("|    欢迎进入猜数游戏   |\n");
		printf("|***********************|\n");
		printf("|     有次数规定的      |\n");
		printf("|     要努力加油哦      |\n");
		printf("是否开始游戏(y/s)\n");*/
		printf("welcome\n");
		scanf("%c", &a);
		if (a == 'y')
			break;
		else
		{
			//printf("非常遗憾，下次再玩吧！\n\n\n\n");
			printf("sorry \n");
			//continue;
		}
	}
	// srand(time(NULL));
	// t = rand() % 100;
	// while (i < 5)
	// {
	// 	printf("请输入一个数");
	// 	scanf("%d", &b);
	// 	if (b > t)
	// 	{
	// 		i++;
	// 		if (5 - i == 0)
	// 		{
	// 			printf("游戏结束");
	// 			break;
	// 		}
	// 		printf("您还有:%d次机会\n", 5 - i);
	// 		printf("Wrong! Too big!\n");
	// 	}
	// 	else if (b < t)
	// 	{
	// 		i++;
	// 		if (5 - i == 0)
	// 		{
	// 			printf("游戏结束");
	// 			break;
	// 		}
	// 		printf("您还有:%d次机会\n", 5 - i);
	// 		printf("Wrong! Too small\n");
	// 	}
	// 	else if (b == t)
	// 	{
	// 		printf("Right!");
	// 		break;
	// 	}
	// }
	// printf("%d", t);
	return 0;
}
