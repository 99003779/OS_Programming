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
    //int A=99;
    { 
        for(int i=0;i<10;i++)
        {
           // sleep(1);
        printf("\nChild");
        //A=100;
        }
       exit(0);
    }
    else
    {
        for(int i=0;i<10;i++)
        {
           // sleep(1);
            printf("\nparent");
            //printf("A is %d", A);
        }
         int status;
        waitpid(-1,&status,0);
        printf("status = %d",status);
        }
    printf("hii, PID=%d,PPID=%d,ret=%d",getpid(),getppid(),ret);
    exit(1);    
}