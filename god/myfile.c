#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 读取文件
void loadfile(char * fn) {
	FILE * fp = fopen(fn, "r");	// 以只读方式打开
	
	char ch;
	ch = fgetc(fp);	// 读取一个字符试试水
	while(ch != EOF) {
		printf("%c", ch);
		ch = fgetc(fp);
	}
	fclose(fp);	// 别忘了释放	
}

// 创建日志文件"/god/godlog.log"
void makelogfile() {
	
	char * god_path = getenv("GOD_PATH");
	if (god_path == NULL) {
		printf("can not find GOD_PATH\n");
		return;
	}
	mkdir(god_path);
	
	char * god_file_name = "/godlog.log";

	char god_file_path[strlen(god_path) + strlen(god_file_name)];
	strcpy(god_file_path, god_path);
	strcat(god_file_path, god_file_name); 

	FILE * fp =fopen(god_file_path, "w");
	fclose(fp);
	
	printf("god log file is make\n");
}

