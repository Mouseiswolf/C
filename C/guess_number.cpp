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
		printf("|    ��ӭ���������Ϸ   |\n");
		printf("|***********************|\n");
		printf("|     �д����涨��      |\n");
		printf("|     ҪŬ������Ŷ      |\n");
		printf("�Ƿ�ʼ��Ϸ(y/s)\n");*/
		printf("welcome\n");
		scanf("%c", &a);
		if (a == 'y')
			break;
		else
		{
			//printf("�ǳ��ź����´�����ɣ�\n\n\n\n");
			printf("sorry \n");
			//continue;
		}
	}
	// srand(time(NULL));
	// t = rand() % 100;
	// while (i < 5)
	// {
	// 	printf("������һ����");
	// 	scanf("%d", &b);
	// 	if (b > t)
	// 	{
	// 		i++;
	// 		if (5 - i == 0)
	// 		{
	// 			printf("��Ϸ����");
	// 			break;
	// 		}
	// 		printf("������:%d�λ���\n", 5 - i);
	// 		printf("Wrong! Too big!\n");
	// 	}
	// 	else if (b < t)
	// 	{
	// 		i++;
	// 		if (5 - i == 0)
	// 		{
	// 			printf("��Ϸ����");
	// 			break;
	// 		}
	// 		printf("������:%d�λ���\n", 5 - i);
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
