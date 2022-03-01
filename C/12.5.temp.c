#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int judge(char *s){
    char *p = s;
    for(;*p!='\0';p++){
        if(*p>='A'&&*p<='Z') continue;
		//虽然单词的首字母可能不是特殊符号，但是后面的字母可能是
		//所以这里看是不是真正的单词
        else return 0;
    }
    return 1;
}

int main()
{
    char word[222][222], temp[222];
    int num,i=0,j=0,line=0,order=0;
    scanf("%d ",&num);
    while(num--){
        memset(word, 0, sizeof(word));
        i=line=0;
        while(1){
            char ch = getchar();
            if(ch == '\n'){
                line++;
                break;
            }
            else if(ch == ' '){
                word[line][i] = '\0';
                line++;
                i=0;
            }
            else word[line][i++] = ch;
        }
        for(j=0; j<line; j++){
            if(!judge(word[j])) continue;
            for(i=j+1; i<line; i++){
                if(!judge(word[i])) continue;
				//两个位置的“continue”：行就比较，不行就跳下一个
                    if(strcmp(word[i],word[j])<0){
                        strcpy(temp,word[i]);
                        strcpy(word[i],word[j]);
                        strcpy(word[j],temp);
                    }
            }
        }
        printf("case #%d:\n",order);
        order++;
        for(j=0; j<line; j++){
            printf("%s%c", word[j], j==line-1?'\n':' ');//真是人类的大智慧QAQ
        }
    }
    return 0;
}
