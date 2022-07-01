//Numpy array shape [6]
//Min -0.812500000000
//Max 0.343750000000
//Number of zeros 2

#ifndef B16_H_
#define B16_H_

#ifndef __SYNTHESIS__
bias16_t b16[6];
#else
bias16_t b16[6] = {-0.06250, 0.34375, 0.28125, 0.00000, 0.00000, -0.81250};
#endif

#endif
