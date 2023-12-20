#include<libpmemobj.h>

using namespace std;
static PMEMobjpool *__g_pop;

int main() {
        __g_pop =
	    pmemobj_create("/mnt/pmem0/ljh/prism/pwb3", POBJ_LAYOUT_NAME(nvlog), 4294967296, 0666);
        if(!__g_pop) {
            while(1);
        }
}