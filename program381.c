#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char Fname [20];
    int fd = 0;    // fd - file distreater

    printf("ENter the file name that you want to creat :");
    scanf("%s",Fname);

    fd = creat(Fname, 0777);
    if(fd == -1)
    {
        printf("Unable to creat file \n");

    }
    else
    {
          printf("File is suucesfully created with fd %d  \n: ",fd);
    }

    return 0;
}