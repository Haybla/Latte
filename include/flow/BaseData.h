#ifndef _LATTE_BASEDATA_H_
#define _LATTE_BASEDATA_H_

#include "../common.h"
#include "../cuda_helper.cuh"

template <typename Dtype>
class BaseData
{
public:
	BaseData() :
		length_(0), cpu_data_(NULL), gpu_data_(NULL){};

	explicit BaseData(const int length);

	explicit BaseData(const BaseData<Dtype>& data);

	virtual ~BaseData();

	inline Dtype * cpu_data() const{
		return cpu_data_;
	}

	inline Dtype * gpu_data() const{
		return gpu_data_;
	}

	inline int length() const{
		return length_;
	}

	inline Dtype cpu_data_at(int offset) const{
		return cpu_data()[offset];
	}

	inline Dtype gpu_data_at(int offset) const{
		return gpu_data()[offset];
	}

protected:
	Dtype * cpu_data_;
	Dtype * gpu_data_;
	int length_;

};

#endif