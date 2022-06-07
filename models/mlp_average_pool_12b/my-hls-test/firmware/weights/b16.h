//Numpy array shape [6]
//Min -0.031250000000
//Max 0.250000000000
//Number of zeros 0

#ifndef B16_H_
#define B16_H_

#ifndef __SYNTHESIS__
bias16_t b16[6];
#else
bias16_t b16[6] = {0.15625, 0.06250, 0.18750, -0.03125, 0.09375, 0.25000};
#endif

#endif
