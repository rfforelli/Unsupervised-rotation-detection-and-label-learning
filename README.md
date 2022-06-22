# Unsupervised-rotation-detection-and-label-learning
created on 11.16.2021

## Build Instructions

After cloning repo and switching to ptq branch, to execute notebook...

1. `cd Unsupervised-rotation-detection-and-label-learning`
2. `conda env create -f environment.yml`
3. `conda activate 4d_tem`
4. `gdown https://drive.google.com/u/1/uc?id=1eYr5gRK84Wt1K-se14qMpxqWGjaiKq6U&export=download`
5. `mv 02_scan_x256_y256_raw.npy data/02_scan_x256_y256_raw.npy`
6. `make build` to run jupyter notebook with faketime

To clean, `make clean`

Due to the Vivado Y2K22 issue, the jupyter notebook must be run using nbconvert.

Requirements
- Anaconda
- Vivado 2020.1 (preferred)