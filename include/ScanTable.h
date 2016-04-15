#include "Table.h"

class ScanTable: public Table
{
protected:
	TabRecord** recs;
public:
	ScanTable(int maxsize);///
	ScanTable();

	virtual TabRecord* Search(int key1);
	virtual void Insert(int key1, TData *d);
	virtual void Delete(int key1);
	friend class SortTable;
};