CC=g++ -std=c++98
CPPFILES=megaphone.cpp
BINARY=megaphone

all: $(BINARY)

$(BINARY): $(CPPFILES)
	$(CC) $(CPPFILES) -o $(BINARY)

clean:
	rm -rf $(BINARY)

fclean: clean


.PHONY: all clean fclean
