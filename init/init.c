#include <asm/asm.h>
#include <pmap.h>
#include <env.h>
#include <printf.h>
#include <kclock.h>
#include <trap.h>


void mips_init()
{
	printf("init.c:\tmips_init() is called\n");



//For your grade,don't delete these.
//Just for the test.
//------------
#ifdef FTEST
FTEST();
#endif

#ifdef PTEST
ENV_CREATE(PTEST);
#endif
//-----------
	panic("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
}
