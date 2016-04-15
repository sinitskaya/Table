
class SortTable: public ScanTable
{
public:
	SortTable(int maxsize): ScanTable(maxsize){};
	SortTable(const ScanTable &table);

	TabRecord* Search(int key1); //virtual
	virtual void Insert (int key1, TData* d);
	void SortData();
};