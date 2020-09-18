#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
  	int i = 1;
  	int newline = 1;
  	if (argc == 1)
  	{
  	 newline = 1;
  	}
  	else
  	{
  		if(strcmp(argv[1], "-n") == 0){
  			newline = 0;
  			i = 2;
  		}
  		for(i; i < argc - 1; i++){
  			printf("%s ", argv[i]);
  		}
  		if(strcmp(argv[1], "-n") == 0 && argc > 2){
  			printf("%s", argv[argc - 1]);
  		}
   }
    if(newline == 1)
    printf("\n");
   return 0;
}
