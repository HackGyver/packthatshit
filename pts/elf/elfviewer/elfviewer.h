#ifndef ELFVIEWER_H
#define ELFVIEWER_H

#include <stdio.h>

int is_elf(const char *filename);
int get_arch_elf(const char *filename);

#endif /* ELFVIEWER_H */
