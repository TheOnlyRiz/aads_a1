#include "data.h"
#include "stages.h"

int
main (int argc, char *argv[]) {
    
    int stage_num = atoi(argv[1]);
    FILE *data_file = fopen(argv[2], "r");
    FILE *output_file = fopen(argv[3], "w");
    assert(data_file && output_file);

    switch (stage_num) {
        case 1:
            stage_one(data_file, output_file);
        /*
        *
        * Future cases for next stages here
        *
        */
    }
    
    fclose(data_file);
    fclose(output_file);
    return 0;
}