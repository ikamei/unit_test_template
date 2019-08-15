#ifndef _MIN_UNIT_H_
#define _MIN_UNIT_H_

#include <stdio.h>
#include <time.h>

/* #define RED_COLOR "\033[1m\033[31m" */
/* #define GREEN_COLOR "\033[1m\033[32m" */
/* #define NORMAL_COLOR "\033[0m" */

/* #define mu_assert(message, test) do { if (!(test)) {sprintf(error_msg,"%s[%s: ln %d]%s %s", RED_COLOR, __FILE__, __LINE__, NORMAL_COLOR, message ); return error_msg; }} while (0) */
#define mu_assert(message, test) do { if (!(test)) {sprintf(error_msg,"[%s: ln %d] %s", __FILE__, __LINE__, message ); return error_msg; }} while (0)
#define mu_run_test(test) do { \
    fprintf ( stdout, "[RUN       ] %s\n", #test ); \
    clock_t tick = clock(); \
    char *message = test(); \
    tick = clock()-tick; \
    tests_number++; \
    if (message){ fprintf ( stdout, "[    FAILED] %s (%d ms)\n", message, (int)tick ); failed_number++; } \
    else fprintf (stdout, "[        OK] %s (%d ms)\n", #test, (int)tick);  \
    } while (0)

#define mu_run_test1p(test, para1) do {                   \
    fprintf ( stdout, "[RUN       ] %s\n", #test ); \
    clock_t tick = clock(); \
    char *message = test(para1); \
    tick = clock()-tick; \
    tests_number++; \
    if (message){ fprintf ( stdout, "[    FAILED] %s (%d ms)\n", message, (int)tick ); failed_number++; } \
    else fprintf (stdout, "[        OK] %s (%d ms)\n", #test, (int)tick);  \
    } while (0)
extern int tests_number;
extern int failed_number;
extern char error_msg[256];


#endif /*_MIN_UNIT_H_*/
