#include <stdio.h>
#include <stdint.h>

uint16_t spread_bits_1(uint8_t val) {
    // Your logic here
    uint16_t value=0;
    for(int i=0;i<8;i++){
        value |= ((val>>i)&1)<<(2*i);
    }
    return value;
}
uint16_t spread_bits_2(uint8_t input){
    uint16_t result = 0;
    for(int i=0;i<8;i++){
        if(input & (1<<i)){
            result |= (1<<(2*i));
        }
    }
    return result;
}

int main(){
    uint8_t input;
    scanf("%hhu",&input);
    uint16_t result = spread_bits(input);
    printf("%hu\n", result);
}