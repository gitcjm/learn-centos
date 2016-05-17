#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void makelogfile();
void loadfile(char * fn);

int main(int argc, char * argv[]) {
	/*
	int i;
	for(i=0; i<argc; i++) {
		printf("arg is %s\n", argv[i]);
	}
	*/
	if(argc==2) {
		if (strcmp(argv[1], "-version") == 0) {
			printf("god version is 1.0\n");
		} else {
			printf("%s\n", argv[1]);	// print a common string
		}
	}
	/*
	putenv("myname=hi_cjm");
	char * getResult = getenv("myname");
	printf("myname is %s\n", getResult);

	char * getGodPath = getenv("GOD_PATH");
	printf("god path is %s\n", getGodPath);
	*/
	
	// 创建日志文件"/god/godlog.log"
	// makelogfile();
	
	// 读取文件
	if (argc == 3) {
		if (strcmp(argv[1], "-rf") == 0) {
			loadfile(argv[2]);
		} else if (strcmp(argv[1], "-wf") == 0) {
			FILE * fp = fopen(argv[2], "w");
			fclose(fp);
			printf("file %s is created.\n", argv[2]);
		}
	}

	return 0;
}

// 读取文件
void loadfile(char * fn) {
    FILE * fp = fopen(fn, "r"); // 以只读方式打开
	if(fp == NULL) {
		printf("can not find the file.\n");
		return;
	}

    char ch;
    ch = fgetc(fp); // 读取一个字符试试水
    while(ch != EOF) {
        printf("%c", ch);
        ch = fgetc(fp);
    }
    fclose(fp); // 别忘了释放   
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

    FILE * fp = fopen(god_file_path, "w");
    fclose(fp);

    printf("god log file is make\n");
}

