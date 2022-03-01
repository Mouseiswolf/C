#include <cstring>
#include <iostream>
using namespace std;
#define MAX 10001
void strrvs(char *str);
void add(char *a, char *b, char *ans);
int main()
{
	char a[MAX] = {0};
	char b[MAX] = {"1"};//改过，原本是输出两个和
	char ans[MAX + 1] = {0};
	cin >> a ;
	int lena=strlen(a);
	int lenb=strlen(b);
	int maxlen=lena>lenb? lena:lenb;
	strrvs(a);
	strrvs(b);
	for(int i=0;i<maxlen;i++)
	{
		if(a[i]==0)
			a[i]='0';
		if(b[i]==0)
			b[i]='0';
	}
	add(a, b, ans);
	strrvs(ans);
	cout << ans << endl;
}
void strrvs(char *str)
{
	int n = strlen(str);
	for (int i = 0; i <= (n - 1) / 2; i++)
	{
		char temp = str[i];
		str[i] = str[n - i - 1];
		str[n - i - 1] = temp;
	}
}
void add(char *a, char *b, char *ans)
{
	ans[0] = '0';
	int co[MAX] = {0};
	int i = 0;
	for (; a[i] != '\0' || b[i] != '\0'; i++)
	{
		if (((a[i] - '0') ^ (b[i] - '0') ^ co[i]) == 1)
			ans[i] = '1';
		else
			ans[i] = '0';
		if ((a[i] - '0') + (b[i] - '0') + co[i] > 1)
			co[i + 1] = 1;
		else
			co[i + 1] = 0;
	}
	if (co[i] == 1)
		ans[i] = '1';
	else
		ans[i] = 0;
}
