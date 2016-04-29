#include <stdio.h>

int main(int argc, char * argv[]) {
	//int i;
	//for(i=0; i<argc; i++) {
	//	printf("arg is %s\n", argv[i]);
	//}
	
	if(argc==2) {
		if (strcmp(argv[1], "-version") == 0) {
			printf("god version is 1.0\n");
		} else {
			printf("%s\n", argv[1]);
		}
	}
	
	return 0;
}
