#include <iostream>
using namespace std;
int cheak(char a,char* s);
int main()
{
    char str[]="abcabcbb";
    char a='a';
    cout << "hhahahah:" << cheak(a,str) << endl;
    cout << "Hello world" << endl;
    return 0;
}
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

