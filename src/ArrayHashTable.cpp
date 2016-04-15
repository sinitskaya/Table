#include "ArrayHashTable.h"

ArrayHashTable:: ArrayHashTable(int size, int hashStep): HashTable(size)
{
	this->hashStep = hashStep;
	recs = new TabRecord*[size];
	for(int i=0; i<size; i++)
		recs[i]=0;
	pMark = new TabRecord(-1,0);
	freePos = 0;
}

TabRecord* ArrayHashTable:: Search (int key1)
{
	pos = HashFunc(key1)%size;
	freePos = -1;
	for(int i=0; i<size; i++)
		if(recs[pos]==0)
			return 0;
	if (recs[pos]->GetKey()==key1)
		return recs[pos];
	if((recs[pos]==pMark) && (freePos==-1))
		freePos = pos;
	pos = SetNextPos(pos);
	return 0;
}

void ArrayHashTable:: Delete (int key1)
{
	TabRecord* tmp = Search(key1);
	if(tmp==0)
		return;
	delete recs[pos];
	recs[pos] = pMark;
	count--;
}

void ArrayHashTable:: Insert(int key1, TData* d)
{
	if(IsFull()) return;
	TabRecord* tmp = Search(key1);
	if (freePos!=-1)
	{
		pos = freePos;
		recs[pos] = new TabRecord(key1,d);
		count++;
	}
}

void ArrayHashTable:: Reset (void)
{
	pos = 0;
	while(!IsTablEnded())
	{
		if( recs[pos]!=pMark && recs[pos]!=0 )
			break;
		pos++;
	}
}

int ArrayHashTable:: GetNext(void)
{
	while(!IsTablEnded())
	{
		if( recs[pos]!=pMark && recs[pos]!=0 )
			break;
		pos++;
	}
	return IsTablEnded();
}