#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {

	FILE * fp = fopen(argv[1], "r");
	if(fp == NULL) {
		printf("cannot open the file\n");
		return 1;
	}

	char str[128];
	int i = 0;
	int from = 0;
	int to = 19;
	
	if(argc == 4) {
		from = atoi(argv[2]) - 1;
		to = atoi(argv[3]) - 1;
	}

	while(!feof(fp)) {
		fgets(str, 126, fp);
		if((i >= from) && (i <= to))  {
			printf("%s", str);
		}
		i++;
	}

	fclose(fp);

	return 0;
}
