#include <stdio.h>
#include <string.h>
char *myStrchr(const char *, int);
size_t myStrcspn(const char *,const char *);
size_t myStrspn(const char *,const char *);
char *myStrpbrk(const char *,const char *);
char *myStrrchr(const char *,int);
char *myStrstr(const char *, const char *);

int main(void){
//    char *s = myStrchr("String", 'g');
//    printf("%p %c\n", s, *s);
//    printf("%zu\n",myStrcspn("The value is 3.14159","1234567890"));
//    printf("%zu\n",myStrspn("The value is 3.14159","1234567890"));
//    printf("%c\n",*myStrpbrk("The value is 3.14159","1234567890"));
//    printf("%p\n",myStrrchr("The values is 3.14159",'s'));
    puts(*myStrstr("abcdefabcdefabcdef","def"));
    return 0;
}

char *myStrstr(const char *str1, const char *str2) {
    const char *tmpChar1;
    const char *tmpChar2;
     while(*str1 != '\0'){
        if(*str1 == *str2){
            tmpChar1 = str1;
            tmpChar2 = str2;
            while (*(++tmpChar1) != '\0'){
                if (*tmpChar1 == *(++tmpChar2)){
                    return str1;
                }
            }
        }
        ++str1;
        ++str2;
     }
     return NULL;
}

char *myStrrchr(const char *str, int c){
    size_t srtSize = strlen(str);
    while(--srtSize){
        if (str[srtSize] == c)
            return &str[srtSize];
    }
    return NULL;

}
char *myStrpbrk(const char *str1, const char *str2)
{
    for (;*str1 != '\0'; str1++){
        for(const char *i = str2 ;*i != '\0';i++){
            if(*str1 == *i) {
                return str1;
            }
        }
    }
    return  NULL;
}

size_t myStrspn(const char *str1, const char *str2)
{
    //or return strlen(str1) - myStrcspn(str1, str2)
    size_t result = 0;
    for (int i = 0;str1[i] != '\0'; i++){
        for(int e = 0;str2[e] != '\0';e++){
            if(str1[i] == str2[e]) {
                ++result;
                break;
            }
        }
    }
    return  result;
}

size_t myStrcspn(const char *str1, const char *str2)
{
    size_t result = 0;
    for (int i = 0;str1[i] != '\0'; i++){
        for(int e = 0;str2[e] != '\0';e++){
            if(str1[i] == str2[e]) {
                ++result;
                break;
            }
        }
    }
    return strlen(str1) - result ;
}

char *myStrchr(const char *str, int c)
{
    while(*(++str) != '\0'){
        if (*str == c )
            return str;
    }
    return NULL;
}