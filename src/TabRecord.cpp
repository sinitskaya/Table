#include "TabRecord.h"
TabRecord:: TabRecord (int key1, TData *d)
{
	key = key1;
	data = d;
}

int TabRecord:: GetKey(void) const
{
	return key;
}

TData* TabRecord:: GetData(void) const
{
	return data;
}