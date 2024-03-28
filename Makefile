CC = cc
CFLAGS = -Wall -Wextra -Werror

SOURCES = main.c moves.c switches.c printers.c

OBJECTS = $(SOURCES:.c=.o)
	
BIN = bits

all: $(BIN)

$(BIN): $(OBJECTS)
	$(CC) -o $@ $^

%.o:%.c
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	rm -rf $(BIN) *.o

fclean: clean
	rm -f $(BIN).a

re: fclean all
