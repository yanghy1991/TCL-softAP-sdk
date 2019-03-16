CFLAGS= -Wall -O2
CC=mipsel-linux-gcc
COMMAND=-L/yuan/pro/tclSoftAP -lsmartCfg
obj += main.o
TARGET = tclSoftAP

main: $(obj)
	$(CC) $(CFLAGS) -o $(TARGET) $(obj) $(COMMAND)

clean:
	rm -rf *.o tclSoftAP