#include<unistd.h>
#include<fcntl.h>

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, int* argv[])
{  char buf[100];
	int fd1,fd2,nbytes;
	fd1=open(argv[1],O_RDONLY);
	if(fd1<0)
	{
		perror("open");
		 exit(1);
	}
    else 
    {
            fd2=open(argv[2],O_WRONLY | O_CREAT , 0641);
            if(fd2==-1)
            {
                perror("DESTINATION FILE ERROR");
                exit(0);
            }
            else
            {
                while((nbytes=read(fd1,&buf,1)) != '\0')
                {
                    write( fd2, &buf, 1);
                
                }
                write(1, "FILES COPIED\n" , 15);    
                close(fd1);
                close(fd2);
            }	
    }





}