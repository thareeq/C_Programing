#include <stdio.h>
#include <stdint.h>

#define ENABLE_MASK (1U<<0)
#define MODE_MASK (0x3U << 1)
#define SPEED_MASK (0x7U << 3)

#define SET_ENABLE(reg,val) \
    ((reg) = ((reg)& ~ENABLE_MASK)|(((val)& 0x1U)<<0))

#define SET_MODE(reg,val) \ 
    ((reg)=((reg)& ~MODE_MASK)|(((val)&0x3U)<<1))

#define SET_SPEED(reg, val) \
    ((reg)=((reg)&~SPEED_MASK)|(((val)& 0x7U)<<3))
    

uint16_t build_register(uint8_t enable, uint8_t mode, uint8_t speed)
{
    uint16_t reg = 0;
    SET_ENABLE(reg, enable);
    SET_MODE(reg, mode);
    SET_SPEED(reg, speed);
    return reg;
}


int main(){
    uint8_t enable, mode, speed;
    scanf("%hhu %hhu %hhu", &enable,&mode, &speed);
    uint16_t reg = build_register(enable,mode,speed);
    printf("%u",reg);
    return 0;
}