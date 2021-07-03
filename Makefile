argv:
	$(CC) -o drunkcase drunkcase.c

.PHONY: clean
clean:
	$(RM) drunkcase
