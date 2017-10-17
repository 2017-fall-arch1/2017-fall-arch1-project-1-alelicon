all: bstDemo


bstDemo: bst.o bstDemo.o
	cc -o $@ $^

bst.o: bst.c bst.h
	cc -c $(CFLAGS) bst.c

bstDemo.o: bstDemo.c bst.h
	cc -c $(CFLAGS) bstDemo.c

clean:
	rm -f *.o bstDemo

demo: bstDemo
	(echo first; echo "second line"; echo "third and last") | ./bstDemo
