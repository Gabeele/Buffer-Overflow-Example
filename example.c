#include <stdio.h>
#include <string.h>
#include<windows.h>


void main(void)
{
    char buff[15];
    int isGranted = 0;

    printf("\n Please enter the password: \n");
    gets(buff);

    if (strcmp(buff, "password"))
    {
        printf("\n Opps! Wrong password. Access is denied. \n");
    }
    else
    {
        printf("\n Password accepted. \n");
        isGranted = 1;
    }

    if (isGranted)
    {

        printf("\n You have been granted access. \n");
    }

    Sleep(100);

}