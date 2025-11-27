#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0 ;
    char FileName[20];

    printf("Enter the file name tthat you want to open:\n");
    scanf("%s",FileName);

    fd = open(FileName , O_RDWR);

    if(fd == -1)
    {
        printf("unable to open file");
    }
    else
    {
        printf("file opened successfully with fd : %d\n", fd);
    }
    close(fd);
    
    return 0 ;
}