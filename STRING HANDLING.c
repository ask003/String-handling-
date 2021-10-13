
#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[] = "R N S Institute of Technology",str1[]=" Bengaluru",chr;
    int count=0,i=0;
   printf("LENGETH OF STRING IS: %ld\n",strlen(str));
   printf("STRING AFTER CONCATINATION IS: %s",strcat(str,str1));
   printf("\nSTRING IN UPPERCASE IS: \n");
   while(str[i])
   {
       chr = str[i];
       printf("%c",toupper(chr));
       i++;
   }

    return 0;
}