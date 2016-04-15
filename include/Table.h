

class Table
{
protected:
	int pos;
	int size;
	int count;

public: 
	Table(int maxsize);
	Table();

	virtual TabRecord* Search (int key1)=0;
	virtual void Insert(int key1, TData* d)=0;
	virtual void Delete(int)=0;

	int GetCount(void) const;
	virtual int GetNext(void);
	virtual void Reset(void);

	int IsEmpty(void) const;
	int IsFull(void) const;
	virtual int IsTablEnded(void) const;
};