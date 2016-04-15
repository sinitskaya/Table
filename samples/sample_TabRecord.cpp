#include "TabRecord.h"

int main()
{
	try{
		int *p = new int;
		TabRecord t(0,p);
	}
	catch( exception &e )
	{
		cout << e.what() << endl;
		return 0;
	}
}