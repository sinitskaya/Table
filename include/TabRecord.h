#include <iostream>
typedef int TData;
using namespace std;

class TabRecord
{
protected:
	TData *data;
	int key;
public:
	TabRecord (int key1, TData *d);
	int GetKey(void) const;
	TData* GetData(void) const;
};