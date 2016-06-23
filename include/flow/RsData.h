#ifndef _LATTE_RSDATA_H_
#define _LATTE_RSDATA_H_

#include "BaseData.h"

template <typename Dtype>
class RsData :
	public BaseData<Dtype>
{
public:
	RsData();
	~RsData();
};

#endif