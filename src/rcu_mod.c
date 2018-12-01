#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/slab.h>
#include <linux/list.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Dmytro Dieiev");
MODULE_DESCRIPTION("Dummy module to get familiar with RCU");

static int __init rcu_mod_init(void)
{
    return 0;
}

static void __exit rcu_mod_deinit(void)
{

}

module_init(rcu_mod_init);
module_exit(rcu_mod_deinit);