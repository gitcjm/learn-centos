# include <stdio.h>
# include <unistd.h>

int main() {
	int pid;
	int i;
	for(i=0; i<4; i++) {
		pid = fork();
		if (pid <= 0) break;
	}
	printf("start\n");
	sleep(15);
	printf("end\n");
}

/*
 * fork()函数的返回值
 * >0 代表是父进程
 * =0 代表是子进程
 * <0 出错啦
 * */
