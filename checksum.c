#include<stdio.h>

int main(int argc, const char *argv[])
{
	int a[8] = { 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08};
	int i, sum = 0;

	for(i = 0; i < 8; i++ )
	{
		sum += a[i];
	}

	if(sum > 0xff)
	{
		sum = ~sum;
		sum += 1;
	}

	sum = sum & 0xff;

	printf("%#x\n", sum);

	return 0;
}
