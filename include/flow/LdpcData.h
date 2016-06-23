#ifndef _LATTE_LDPCDATA_H_
#define _LATTE_LDPCDATA_H_

#include "BaseData.h"

template <typename Dtype>
class LdpcData :
	public BaseData<Dtype>
{
public:
	LdpcData();
	~LdpcData();
};

#endif
