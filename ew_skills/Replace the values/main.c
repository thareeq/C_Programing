#include <stdio.h>
#include <stdint.h>

uint32_t replace_field(uint32_t reg, uint32_t val, uint8_t pos, uint8_t len) {
    // Your code here
    uint32_t mask = (1U<<len)-1U;
    reg &=~(mask<<pos);
    reg|=(val&mask)<<pos;
    return reg;
}

int main() {
    uint32_t reg, val;
    uint8_t pos, len;
    scanf("%u %u %hhu %hhu", &reg, &val, &pos, &len);
    printf("%u", replace_field(reg, val, pos, len));
    return 0;
}