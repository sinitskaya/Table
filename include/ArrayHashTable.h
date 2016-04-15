#include "HashTable.h"

class ArrayHashTable: public HashTable
{
protected:
	TabRecord** recs;
	int freePos, hashStep;
	TabRecord* pMark;

	int SetNextPos(int p) const {
		return ( (p+hashStep) % size );	
	}
public:
	ArrayHashTable(int size, int hashStep);

	virtual int GetNext(void);

	virtual TabRecord* Search (int key1);
	virtual void Insert (int key1, TData* d);
	virtual void Reset (void);
	virtual void Delete (int key1);
};
