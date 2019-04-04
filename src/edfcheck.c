#include <stdio.h>
#include <string.h>

#include "edflib.h"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "error: invalid arguments (need a single argument: EDF file path)\n");
        return 1;
    }

    const char *path = argv[1];
    struct edf_hdr_struct edfhdr;
    const int file_ok = edfopen_file_readonly(path, &edfhdr, 1, 1);

    (void) edfclose_file(edfhdr.handle);

    return (file_ok < 0) ? 1 : 0;
}
