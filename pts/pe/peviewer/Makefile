SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

INCLUDES = -I.

all: libPEViewer.so

libPEViewer.so: $(OBJ)
	$(CC) -o $@ $^ -shared -fPIC $(CCFLAGS)

%.o: %.c
	$(CC) -o $@ -c $< $(CCFLAGS) $(INCLUDES)

clean:
	rm -f *.o *.so
