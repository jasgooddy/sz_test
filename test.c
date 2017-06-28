#include <fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
#include<errno.h>
#include<string.h>

int main()
{
	int fd = open("/dev/input/mouse0", O_RDONLY);

	if(fd <0)
	{
		perror("open");
		
	}
	
	if(fd >0)
	{
		printf("open success , fd : %d \n", fd);
	}

		while(1)
		{
		char buf[9];
		int ret = read(fd, buf, sizeof(buf));
		if(ret <0)
		{
			printf(" ret is %d \n",ret);
 		}

		printf("ret is plus %d \n", ret);
		
		printf(" the buff : %s \n", buf);
		}
		

		return 0;

}


