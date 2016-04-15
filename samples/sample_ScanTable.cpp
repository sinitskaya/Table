#include "ScanTable.h"

int main()
{
	try{
	
		ScanTable scanTable (5);
		ScanTable scan1(scanTable);
		TabRecord* k = scanTable.Search (0);
	
		int *q = new int;
		scanTable.Insert(1,q);
		scanTable.Delete(0);
	}
	catch( exception &e )
	{
		cout << e.what() << endl;
		return 0;
	}
}