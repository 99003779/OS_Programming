#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{ int ret=0;
    ret=fork();
    if(ret<0)
    {
        perror("fork");
        exit(1);
    }
    if(0==ret)
    {
        for(int i=0;i<10;i++)
        {
           // sleep(1);
        printf("\nChild");
        }
       exit(0);
    }
    else
    {
        for(int i=0;i<10;i++)
        {
           // sleep(1);
            printf("\nparent");
        }
         int status;
        waitpid(-1,&status,0);
        printf("status = %d",status);
        }
    printf("hii, PID=%d,PPID=%d,ret=%d",getpid(),getppid(),ret);
    exit(1);    
}