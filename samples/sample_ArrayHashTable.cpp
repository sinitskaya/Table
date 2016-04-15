#include "ArrayHashTable.h"

int main()
{
	try{
		int *p = new int;
		int *q = new int;

		ArrayHashTable hash(5,1);
		hash.Insert(0,p);
		hash.Insert(1,q);
		hash.Search(1);
		hash.Delete(0);

	}
	catch( exception &e )
	{
		cout << e.what() << endl;
		return 0;
	}
}