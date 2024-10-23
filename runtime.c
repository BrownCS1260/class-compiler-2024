#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>

#define num_shift 2
#define num_mask 0b11
#define num_tag 0b00

#define bool_shift 7
#define bool_mask  0b1111111
#define bool_tag   0b0011111

#define heap_mask 0b111 
#define pair_tag 0b010

extern int64_t entry(void *heap); 

void error() {
    printf("ERROR");
    exit(1);
}

uint64_t read_num() {
    int r = 0;
    scanf("%d", &r);
    return r << num_shift;
}

void print_value(uint64_t value) {

    if ((value & num_mask) == num_tag) {
        
    int64_t ivalue = (int64_t)value;
    printf("%" PRIi64, ivalue >> num_shift);
    } else if ((value & bool_mask) == bool_tag) {
        if (value >> bool_shift) { 
            printf("true");
        } else {
            printf("false");
        } 
    } else if ((value & heap_mask) == pair_tag) {
        uint64_t v1 = *(uint64_t*)(value - pair_tag);
        uint64_t v2 = *(uint64_t*)(value - pair_tag + 8);
        printf("(pair ");
        print_value(v1);
        printf(" ");
        print_value(v2);
        printf(")");
    } else {
        printf("BAD VALUE %" PRIu64, value);
    }

}

int main(int argc, char **argv) {
    print_value(entry((void*)malloc(4096)));
    return 0;
}