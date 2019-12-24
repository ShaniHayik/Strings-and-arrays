#include <string.h>
#include <stdio.h>
#define LINE 256
#define WORD 30
#define FILE 250


char w[WORD];
char s[LINE];


//this function returns the size of the line
int Getline (char s[]) {  
  int count = 0;
  while((s[count] != '\n') && (count < LINE) && s[count] != '\0') {
    count++;
  }
  return count;
}


//this function returns the size of the word
int getword (char w[]){
int count=0;
while((w[count]!='\n') && (w[count]!='\t') && (w[count]!=' ') && (count < WORD) && (w[count] != '\0')){
  count++;
}
return count;
}



//This function checks if str1 contains str2 
int substring(char * str1, char * str2){
       for (str1; *str1; str1++) {
        if (*str1 == *str2) {
            if (strComp(str1, str2) == 1) {
                return 1;
            }
        }
    }
    return 0;
}

//this helped function to compare between str1 and str2
int strComp(char* str1, char* str2) {
    if (!*str1 || !*str2) return 0;
    while (*str1 && *str2) {
        if (*str1 != *str2) {
            return 0;
        }
        str1++;
        str2++;
    }
    return 1;
}



//the function returns str length
int strLen(char* str) {
    int len = 0;
    for (str; *str; str++) {
        len++;
    }
    return len;
}



//this function checks if it possible to go from string s to string t by deletion n chars
   int similar(char *s,char *t,int n){
    int temp=0;
    int i=0;
    int j=i+temp;
    int s_len = strlen(s);
    int t_len = strlen(t);

    while(i < t_len){
        while((j<s_len) && (i<t_len)){
            if(*(t+i)!=*(s+j)){
                temp++;
                j++;
                i--; 
                break;
            }
            i++;
            j++;
        }
        i++;
    }
    if(((s_len-t_len) <= n) && (temp <= n)) {
        return 1;
    }
    return 0;
}


//This function prints the lines that str exist there
void print_lines(char *str){
    char c;
    int end_of_file = (250*256)-1;

    c=scanf("%c",&c);
    while(c!=end_of_file){
        char *n = s;
        c=scanf("%c",&c);
        n=s;
        for(*n=s;c!='\n'; n=n+1){
            *n=c;
            if(scanf("%c",&c) == end_of_file){
                break;
            }
        }
        *n=0;
        if(substring(s,str)){
            printf("%s\n",s);
        }
    }
}



//This function prints the word that similar to str by up to one letter
void print_similar_words(char* str){
    
    char *p=s;
    char ch;

    while (scanf("%c",&ch)!=EOF){
        if(ch!=' '&&ch!='\n'){
            *p=ch;
            p++;
            continue;
        }
        else {
            *(p)=0;
            if(similar(s,str,1)==1){
                printf("%s\n",s);

            }
        }
        p=s;
    }
}

