#include <stdio.h>
#include <unistd.h>

/**
 * main - PPID
 *
 * Return -  Always 0
 *
 */

int main(void)
{
	pid_t kev_ppid;

	kev_ppid =  getppid();
	printf("The parent PID is:%u\n", kev_ppid);
	return 0;
}

