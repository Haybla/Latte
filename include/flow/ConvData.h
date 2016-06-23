#ifndef _LATTE_CONVDATA_H_
#define _LATTE_CONVDATA_H_

#include "BaseData.h"

template <typename Dtype>
class ConvData :
	public BaseData<Dtype>
{
public:
	ConvData();
	~ConvData();
};

#endif
