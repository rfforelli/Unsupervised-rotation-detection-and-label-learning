all:
	conda env create -f environment.yml
	conda activate 4d_tem
	gdown https://drive.google.com/u/1/uc?id=1eYr5gRK84Wt1K-se14qMpxqWGjaiKq6U&export=download
	mv 02_scan_x256_y256_raw.npy data/02_scan_x256_y256_raw.npy

setup:
	mkdir -p ./models/mlp_average_pool_12b/profiling
	mkdir -p ./models/mlp_average_pool_12b/keras_model_results
	mkdir -p ./models/mlp_average_pool_12b/hls_model_results


build:
	mkdir -p ./models/mlp_average_pool_12b/profiling
	mkdir -p ./models/mlp_average_pool_12b/keras_model_results
	mkdir -p ./models/mlp_average_pool_12b/hls_model_results
	faketime -f '-1y' jupyter nbconvert --to notebook --inplace --execute --stdout --ExecutePreprocessor.timeout=-1 Unsupervised-rotation-detection-and-label-learning

clean:
	rm -rf ./__pycache__
	rm -rf ./models/mlp_average_pool_12b/my-hls-test
	rm -rf ./models/mlp_average_pool_12b/profiling
	rm -rf ./models/mlp_average_pool_12b/keras_model_results
	rm -rf ./models/mlp_average_pool_12b/hls_model_results
	rm -rf ./models/mlp_average_pool_12b/my-hls-test.tar.gz
	rm -f *.jou
	rm -f *.log
	rm -rf myproject_vivado_accelerator
	rm -rf xclbin_files