MODULE_NAME = Hello
obj-m       := Task.o
KVERSION    = $(shell uname -r)
KDIR=/lib/modules/$(KVERSION)/build
PWD := $(shell pwd)

default:
	make -C $(KDIR) M=$(PWD) modules
 
clean:
	rm -rf *.o *.cmd *.ko *.mod.c *.tmp_versions *.order *.symvers
