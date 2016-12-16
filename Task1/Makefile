#MODULE_NAME = Hello
obj-m       += Task1.o
KDIR=/home/wtchen/git/mainline/linux

all:
	make -C $(KDIR) M=$(shell pwd) modules
 
clean:
	make -C $(KDIR) M=$(shell pwd) clean
