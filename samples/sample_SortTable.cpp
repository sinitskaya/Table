#include "SortTable.h"

int main()
{
	try{
		int * p = new int;
		int * q = new int;

		SortTable sort(5);
		SortTable sort1(sort);
		ScanTable scan1(5);
		SortTable sort2(scan1);
		sort.Insert(1,q);
		sort.Insert(0,p);
		sort.Search(0);
		sort.SortData();
	}
	catch( exception &e )
	{
		cout << e.what() << endl;
		return 0;
	}
}