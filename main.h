#ifndef _MAIN_H_
#define _MAIN_H_

#ifdef RTE_EXEC_ENV_BAREMETAL
#define MAIN _main
#else
#define MAIN main
#endif

int MAIN(int argc, char **argv);

#define MAX(a,b) ((a)>(b)?(a):(b))

#endif /* _MAIN_H_ */
