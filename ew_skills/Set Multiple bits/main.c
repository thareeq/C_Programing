#include <stdio.h>
#include <stdint.h>

uint8_t set_range(uint8_t reg, uint8_t start, uint8_t end){
    for(int i=start;i<=end;i++){
        reg |= (1<<i);
    }
    return reg;
}

uint8_t set_range2(uint8_t reg, uint8_t start, uint8_t end){
    uint8_t mask = ((1U<<(end-start+1))-1U)<<start;
    return reg|mask;
}

int main(){
    uint8_t reg, start, end;
    scanf("%hhu %hhu %hhu",&reg, &start, &end);
    printf("%u",set_range(reg, start, end));
    return 0;
}