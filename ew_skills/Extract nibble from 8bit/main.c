#include <stdio.h>
#include <stdint.h>

uint8_t extract_nibble(uint8_t reg, uint8_t pos){
    return pos?(reg>>4)&0x0F:reg&0x0F;
}

int main(){
    uint8_t input, pos;
    scanf("%hhu %hhu",&input, &pos);
    printf("%hhu",extract_nibble(input,pos));
    return 0;
}