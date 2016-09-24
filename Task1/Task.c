#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>

MODULE_DESCRIPTION("Hello World!");
MODULE_AUTHOR("Wan-Ting CHEN");
MODULE_LICENSE("GPL");

static int __init hello_init(void)
{
    pr_debug("Hello World!\n");
    return 0;
}

static void __exit hello_exit(void)
{
    return ;
}

module_init(hello_init);
module_exit(hello_exit);
