#include <stdio.h>
#include<elf.h>
#define FILE_PATH "/home/void/elf.h"

int main(int argc, char** argv)
{
    FILE* elfFile = fopen(FILE_PATH, "r");
    Elf64_Ehdr elfheader;
    fread(&elfheader, sizeof(elfheader), 1, elfFile);

    printf("ELF Header:\n");
    printf("Type:   %d (%d)\n", elfheader.e_type, elfheader.e_type);
    printf("Machine: %d (0x%08X)\n", elfheader.e_machine, elfheader.e_machine);
    printf("Version: %d\n", elfheader.e_version);
    printf("Entry Point: 0x%08X\n", (unsigned int)elfheader.e_entry);

    fclose(elfFile);
    return 0;
}
