#include "minunit.h"
#include <stddef.h>
/* #include <cap_desctables.h> */

/* typedef struct _CNIO_MSG_STRUCT */
/* { */
/*     uint ID; */
/*     uchar FrameType; */
/*     uchar Length; */
/*     uchar Data[8]; */
/* } CNIO_MSG, *PCNIO_MSG; */

/* /\** */
/*  * put_into_buffer */
/*  *\/ */
/* char* mu_put_into_buffer() */
/* { */
/*     UnitDescContext ctx; */
/*     CNIO_MSG msg; */
/*     char buffer[512]; */
/*     int rtn; */

/*     init_unit_desc( &ctx ); */
/*     msg.ID = 0x02204810; */
/*     msg.Data[0] = 0x06; */
/*     msg.Data[1] = 0x22; */
/*     msg.Length = 2; */

/*     rtn = put_into_buffer ( &ctx, msg.ID, msg.Data, msg.Length, buffer ); */

/*     mu_assert ( "", 0==rtn ); */
    
/*     return 0; */
/* } */

char* desctable_suites ()
{
    /* mu_run_test(mu_put_into_buffer); */

    return 0;
}

