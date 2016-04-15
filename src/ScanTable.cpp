#include "ScanTable.h"

ScanTable:: ScanTable(int maxsize):Table (maxsize)
{
	recs = new TabRecord*[maxsize];
}

ScanTable:: ScanTable(): Table()
{
	recs = new TabRecord*[10];
}

TabRecord* ScanTable:: Search(int key1)
{
	for (int i=0; i<count; i++)
		if(key1 == recs[i]->GetKey())
		{
			pos = i;
			return recs[i];
		}
	return 0;
}

void ScanTable:: Insert(int key1, TData *d)
{
	if(IsFull())
		return;
	recs[count] = new TabRecord (key1,d);
	count++;
}

void ScanTable:: Delete(int key1)
{
	if(Search(key1) == 0)
		return;
	delete recs[pos];
	recs[pos] = recs[count-1];
	count--;
}