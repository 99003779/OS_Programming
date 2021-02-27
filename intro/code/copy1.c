#include <stdio.h>
#include <sys/types.h>

#define BUFSIZE 1024

int main(int argc, int* argv[]){

    FILE fp1, fp2;
    char buf[1024];
    int pos;


    fp1 = open(argv[1], "r");
    fp2 = open(argv[2], "w");

    while((pos=read(fp1, &buf, 1024)) != 0)
    {
        write(fp2, &buf, 1024);
    }


    return 0;
}
