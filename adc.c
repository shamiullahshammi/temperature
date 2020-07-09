#include<stdio.h>
#include<unistd.h>
#include<err.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int in,rd;
	int i;
	float a,t;
	int k;
	char buff[100];
	in =open("/sys/bus/iio/devices/iio\:device0/in_voltage1_raw",0666);
	if(in==-1)
		printf("error in opening file");
	else
	
		printf("opened successfully\n");
	while(1)
	{
	        rd=read(in,buff,32);
		printf("%d\n",rd);
		k=atoi(buff);
		a=((float)(3.3 * k)/4095);
		t=((float)(a * 50)/3.3);
		printf("%f celsius\n",t);
	        for( i=0;i<=65535;i++);
	}
		close(in);
		
		return 0;

		
}

