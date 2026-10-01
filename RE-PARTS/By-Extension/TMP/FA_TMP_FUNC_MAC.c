#include <stdio.h>
#include <string.h>

#define OUTPUT_SIZE 1024


// the goal right here is to do what?
// 1. Extract the filename from macOS path.
// 2. Convert the filename to uppercase hexadecimal.

int main(void)
{
    const char *source_path = "/Users/alice/lab/wmcache.nld";
    const char *basename;
    char hexadecimal[OUTPUT_SIZE];
  
    size_t used = 0;

    /* 
    * first task is to use strrchr() to find last '/' in source_path. so we are given the source_path
    * to begin with
    * 
    * Extract filename from a macOS path
    * 
    * If it finds one:
    *   basename should point to the next character.
    * Otherwise
    */

    // strrchr() is a standard C library function to locate the last occurrence
    // of a specific character within a string

    char *strrchr(source_path, '/');
    // this gets a pointer to the last occurrence of the character
    // the pointer stores the memory address of another value




  


}
