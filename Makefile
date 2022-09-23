target:
	gcc -Wall main.c mix.c -o main
install:
	gcc -Wall main.c mix.c -o main
	mv main mixy
	sudo mv mixy /usr/local/bin/
uninstall:
	sudo rm /usr/local/bin/mixy