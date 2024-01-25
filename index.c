#include <stdio.h>

int main()
{
char str1[10];
    printf("First Name ");
    scanf("%s",&str1);
    char str2[10];
     printf("Second Name ");
    scanf("%s",&str2);
    
    int id=strcmp(str1,str2);
    if(id==0){
        printf("Equal name");
    }
    else{
        printf("Not Equal name");
    }  



    char str3[12]="satyajitsinh";
    for(int i=12; i>=0; i--){
        printf("%c\n",str3[i]);
    }
    return 0;
}