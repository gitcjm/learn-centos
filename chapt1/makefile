cjm:cjm.c libme.so
	gcc -o cjm cjm.c -L /home/cjm/learncent -l me
libme.so:me.c
	gcc -o libme.so me.c -shared
install:
	sudo cp libme.so /usr/lib
	sudo ldconfig
