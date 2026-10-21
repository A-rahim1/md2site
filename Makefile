CC = gcc
CFLAGS = -Wall -Wextra -g -std=c11

all: md2site

md2site: src/main.c
	$(CC) $(CFLAGS) src/main.c -o md2site

clean:
	rm -f md2site md2site.exe