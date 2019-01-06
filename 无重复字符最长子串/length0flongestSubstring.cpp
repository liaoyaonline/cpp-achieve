#include <iostream>
#include <string.h>
using namespace std;
int cheak(char a,char* s);
int lengthOfLongestSubstring(char* s);
int main()
{
    int i=0;
    char str[]="abcdefaaaaaabbbbddefefdbac";
    char* p=str;
    i=lengthOfLongestSubstring(p);
    cout<<i<<endl;
    cout << "Hello world" << endl;
    return 0;
}
int lengthOfLongestSubstring(char* s) {
        if(s==NULL)
        {
            return 0;
        }
        char A1[26];
        char *p2=A1;
        char *p3=A1;//用于定位字符串头部
        char *p1;//标记遍历位置
        p1=s;
        unsigned long num2=0;
        *p2=*p1;
        s++;
        while(*p1!='\0')//对所有元素查看以它们为起点的最长无重复字符串
        {
            while(*s!='\0')//查看最长无重复字符串
            {
                if(cheak(*s,A1)==1)//检查是否在字符串里面,如果是，跳出循环。
                {
                    break;
                }
                p2++;//如果不在A1里面，执行将该字符加入A1里面，将s指针移到下一位
                *p2=*s;
                s++;
            }
            if(strlen(p3)>num2)//比较A1的长度和之前最长的长度，更新最长长度
            {
                num2=strlen(A1);
            }
            p1++;//将p1向前移动一位
            memset(A1,'\0',sizeof(A1));//将A1里面的内容清空
            *p2=*p1;//将A1内容更新
            p1=p3;//将p1指针更新
            s=p1;//s从p1后一位处进行比较
            s++;
        }
        return num2;
};
int cheak(char a,char* s)
{
    if(s==NULL)
    {
        return 0;
    }
    while(*s!='\0')
    {
        if(*s==a)
        {
            return 1;
        }
        s++;
    }
    return 0;
}
