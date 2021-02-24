#include<stdio.h>
#include<stdlib.h>
int main()
{ int ret;
    ret=fork();
    printf("Hi, PID=%d, PPID=%d,ret=%d",getpid(),getppid(),ret);
    }