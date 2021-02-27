#include <stdlib.h> 
#include <stdio.h> 
#include <string.h> 
#include <unistd.h>

int main()
{
  int result;
  char child[BUFSIZ]; 
  char die[BUFSIZ];	

// check if program is running
result=system("ps ax | grep one");

// if its not running exit
if(result==-1){
	return 0;
}


// loop to execute kill
while(result != 0);
  {
	//* Kill the process
	strcpy (die, "killall -9 firefox-bin\n");
	system(die);
        sleep(500);
  }
  return 0;
}

