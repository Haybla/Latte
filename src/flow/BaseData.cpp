#include "../../include/flow/BaseData.h"


template <typename Dtype>
BaseData<Dtype>::BaseData(const int length)
{
	length_ = length;
	checkCudaErrors(cudaHostAlloc(&cpu_data_, sizeof(Dtype)*length_, cudaHostAllocDefault));
	checkCudaErrors(cudaMalloc(&gpu_data_, sizeof(Dtype)*length_));
}

template <typename Dtype>
BaseData<Dtype>::BaseData(const BaseData<Dtype>& data)
{
	length_ = data.length();
	memcpy(cpu_data_, data.cpu_data(), sizeof(Dtype)*data.length());
}

template <typename Dtype>
BaseData<Dtype>::~BaseData()
{
	if (cpu_data_ != NULL){
		checkCudaErrors(cudaFreeHost(cpu_data_));
	}

	if (gpu_data_ != NULL){
		checkCudaErrors(cudaFree(gpu_data_));
	}
}
