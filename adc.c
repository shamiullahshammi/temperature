#include<stdio.h>
#include<unistd.h>
#include<kernel.h>
#include<linux/module.h>
#include<err.h>
#include<asm/adc.h>
#include<asm/io.h>
int main()
{
	int in,rd;
	int buff;
	in =open("/sys/bus/iio/devices/iio\:device0/in_voltage1_raw",O_RDWR);
	if(in==-1)
		printf("error in opening file");
	else
	
		printf("opened successfully");
		rd=read(in,&buff,32);
		printf("%d",buff);
		close(in)
return 0;
}
