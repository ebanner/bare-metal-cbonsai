#include <ncurses.h>
#include <unistd.h>
#include <stddef.h>

int main(int argc, char **argv);

void init(void) {
    char name[] = "cbonsai";
    char live[] = "-l";
    char infinite[] = "-i";
    char *argv[] = { name, live, infinite, NULL };
    
    main(3, argv);
}
