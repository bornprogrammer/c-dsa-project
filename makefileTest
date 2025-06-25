# Makefile

CC = gcc
CFLAGS = -Wall -g
BUILD_PATH = build/
BIN_PATH = bin/

# You can list dependencies manually per target
# stack: data_structures/stack/stack.c queue.o graph.o
# 	$(CC) $(CFLAGS) $^ -o $@

# max_hist: problems/max_hist.c stack.o
# 	$(CC) $(CFLAGS) $^ -o $@

# valid_paren: problems/valid_paren.c stack.o
# 	$(CC) $(CFLAGS) $^ -o $@

# Compile DS files once into .o
stackClient: src/data_structures/stack/stack.c src/data_structures/stack/stackClient.c
	$(CC) $(CFLAGS) -c src/data_structures/stack/stack.c -o build/stack.o
	$(CC) $(CFLAGS) -c src/data_structures/stack/stackClient.c -o build/stackClient.o
	$(CC) build/stack.o build/stackClient.o -o bin/stackClient

# queue.o: queue.c queue.h
# 	$(CC) $(CFLAGS) -c queue.c -o queue.o

# graph.o: graph.c graph.h
# 	$(CC) $(CFLAGS) -c graph.c -o graph.o

clean:
	rm -f build/*.o bin/*
