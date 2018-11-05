#ifndef MBED_DUAL_DAC_H
#define MBED_DUAL_DAC_H
#include "mbed.h"



#include <limits>

#define SYMBOLS_PERTRANSFER 100


class dacOutputADC
{
public:
  dacOutputADC();
  static void SendDataI(uint8_t * dataI, uint32_t iLength);
  static void SendDataQ(uint8_t * dataQ, uint32_t iLength);


  dacOutputADC(dacOutputADC &&) = default;
  dacOutputADC(const dacOutputADC &) = default;
  dacOutputADC &operator=(dacOutputADC &&) = default;
  dacOutputADC &operator=(const dacOutputADC &) = default;
  ~dacOutputADC();

private:
  const uint8_t m_cuiOutMax = std::numeric_limits<uint8_t>::max() ;
  void DAC_Ch1_EscalatorConfig();
  void TIM6_Config();
  
};




 extern DigitalOut led1;
extern DigitalOut led2;
extern DigitalOut led3;

extern Serial pc;

#endif