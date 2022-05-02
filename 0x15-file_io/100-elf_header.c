#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
