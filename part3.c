#include <stdint.h>
int main(void)
{
	volatile uint32_t *rcc_ahb2enr = (volatile uint32_t *)(0x40021000U + 0x4CU);
	*rcc_ahb2enr |= (1U << 1) | (1U << 2);

	volatile uint32_t *gpiob_moder = (volatile uint32_t *)(0x48000400U + 0x00U);
	*gpiob_moder &= ~(0x3U << 14);
	*gpiob_moder |= (0x1U << 14);
	
	volatile uint32_t *gpioc_moder = (volatile uint32_t *)(0x48000800U + 0x00U);
	*gpioc_moder &= ~(0x3U << 26);
	
	volatile uint32_t *rcc_apb2enr = (volatile uint32_t *)(0x40021000U + 0x60U);
	*rcc_apb2enr |= (1U << 0);
	
	volatile uint32_t *syscfg_exticr4 = (volatile uint32_t *)(0x40010000U + 0x14U);
	*syscfg_exticr4 &= ~(0xFU << 4);
	*syscfg_exticr4 |= (0x2U << 4);
	
	
	
	while(1)
	{

	};
}

