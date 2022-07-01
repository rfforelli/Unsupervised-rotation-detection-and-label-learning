# Unsupervised-rotation-detection-and-label-learning
created on 06.01.2022

## Build Instructions

After cloning repo and switching to ptq branch, to train and build HLS model, execute notebook Unsupervised-rotation-detection-and-label-learning.ipynb...

1. `cd Unsupervised-rotation-detection-and-label-learning`
2. `conda env create -f environment.yml`
3. `conda activate 4d_tem`
4. `gdown https://drive.google.com/u/1/uc?id=1eYr5gRK84Wt1K-se14qMpxqWGjaiKq6U&export=download`
5. `mv 02_scan_x256_y256_raw.npy data/02_scan_x256_y256_raw.npy`
6. `make build` to run jupyter notebook with faketime

To clean, `make clean`

To deploy to Alveo U250, execute notebook Alveo_deploy.ipynb
1. Clone repo on machine with XRT and Development Target Platform with Alveo U250 installed and flashed with 2020.1 XDMA ([follow steps here](https://www.xilinx.com/products/boards-and-kits/alveo/package-files-archive/u200-2020-1.html))
2. `gdown https://drive.google.com/u/1/uc?id=1eYr5gRK84Wt1K-se14qMpxqWGjaiKq6U&export=download`
3. `mv 02_scan_x256_y256_raw.npy data/02_scan_x256_y256_raw.npy`
4. `make deploy` to run jupyter notebook or open notebook and execute cells

To clean, `make clean`

Due to the Vivado Y2K22 issue, the jupyter notebook must be run using nbconvert.

Requirements
- Anaconda
- Vivado 2020.1 (preferred)