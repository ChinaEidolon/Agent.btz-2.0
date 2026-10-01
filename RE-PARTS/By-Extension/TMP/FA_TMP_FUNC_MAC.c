



#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>

#define PATH_BUFFER_SIZE 1024

/*
*
* Returns:
*   0 on success
*   -1 on invalid input
*   -2 if output buffer is too small
*   -3 if directory cannot be created
*/


int build_fa_tmp_path(
    const char *source_path,
    const char *staging_dir,
    char *output,
    size_t output_size
){
    const char
}


