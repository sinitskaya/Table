
class HashTable: public Table
{
public:
	HashTable(int size): Table(size) {};
protected:
	unsigned long HashFunc(int key1) const {return key1;};// virtual 
};