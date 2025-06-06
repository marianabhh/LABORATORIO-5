CC = gcc
CFLAGS = -Wall
SRC = src/main.c src/json.c
OUT = json_make
LIBS = -lcjson

all: $(OUT)

$(OUT): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(OUT) $(LIBS)

clean:
	rm -f $(OUT)