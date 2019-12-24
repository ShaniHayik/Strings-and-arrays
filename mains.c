#include "txtfind.h"
#include <stdio.h>
#include <string.h>
#define LINE 256
#define WORD 30
#define FILE 250


int main () {

  char line[LINE-1], a[LINE-1];
  char c;
  int i=0;
  gets(line);
  int line_len = strlen(line);
    
    while(i<line_len){
        if(line[i]==' '){
            c=line[i+1];
            break;
        }
        a[i]=line[i];
        i++;
    }

    gets(line);
    if(c=='a'){
        print_lines(a);
    }
    if(c=='b'){
        print_similar_words(a);
    }
    else if ((c != 'a') && (c!='b')) {
        printf("Please try again");
    }

    return 0;
}




  