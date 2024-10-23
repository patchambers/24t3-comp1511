// This program prints the command line arguments it is given
// Pat Chambers (z5264081), 23/10/24

#include <stdio.h>

int main(int argc, char *argv[]) {

    // If we run: ./command_line_args.c some command line args
    // argc = 5
    // argv = {"./command_line_args", "some", "command", "line", "args"}

    for (int i = 0; i < argc; i++) {
        printf("Arg %d: %s\n", i, argv[i]);
    }

    return 0;
}
