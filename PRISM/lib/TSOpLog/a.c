//ljh code just for test pmem
#include <libpmemobj.h>
#include<stdio.h>
static PMEMobjpool *__g_pop = NULL;
char path[100] = "/mnt/pmem0/ljh/prism/pwb0";
int main(){
    printf("%s\n",path);
    if (access(path, 0) != 0) {
        printf("y\n");
	    __g_pop = pmemobj_create(path, POBJ_LAYOUT_NAME(nvlog), 1073741824, 0666);
        if(!__g_pop) {
            printf("create pmem pool failed");
        }
    }
}