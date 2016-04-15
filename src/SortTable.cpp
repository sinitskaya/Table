#include "SortTable.h"

SortTable:: SortTable(const ScanTable& table)
{
	size = table.size;
	pos = 0;
	count = table.count;
	recs = new TabRecord*[size];
	for (int i=0; i<count; i++)
		recs[i] = new TabRecord(table.recs[i]->GetKey(), table.recs[i]->GetData());
	SortData();
}

void SortTable:: Insert (int key1, TData* d)
{
	if(IsFull())
		return;
	Search(key1);
	for(int i=count+1; i>pos+1; i--)
		recs[i] = recs[i-1];
	count++;
	recs[pos] = new TabRecord(key1,d);
}

TabRecord* SortTable:: Search(int key1)
{
	int left = 0;
	int right = count-1;
	int mid;
	while(left<=right)
	{
		mid = left+(right-left)/2;
		if (key1<recs[mid]->GetKey())
			right = mid-1;
		else
			if (key1>recs[mid]->GetKey())
				left = mid+1;
			else
			{
				pos = mid;
				return recs[mid];
			}
	}
	pos = right;
	return 0;
}

void SortTable:: SortData()
{
	for(int i=0; i<count; i++)
		for(int j=i+1; j<count; i++)
			if(recs[i]>recs[j])
			{
				TabRecord* tmp = recs[i];
				recs[i] = recs[j];
				recs[j] = tmp;
			}
}