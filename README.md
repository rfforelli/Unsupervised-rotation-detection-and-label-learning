# Unsupervised-rotation-detection-and-label-learning
created on 11.16.2021

## Build Instructions

To execute notebook...

1. `cd Unsupervised-rotation-detection-and-label-learning`
2. `conda env create -f environment.yml`
3. `conda activate 4d_tem`
3. `make build` to run jupyter notebook with faketime

To clean, `make clean`

Due to the Vivado Y2K22 issue, the jupyter notebook must be run using nbconvert.

Requirements
- Anaconda
- Vivado 2020.1 (preferred)