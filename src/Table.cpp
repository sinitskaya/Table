#include "Table.h"
Table:: Table(int maxsize)
{
	size = maxsize;
	pos = 0;
	count = 0;
}
Table:: Table()
{
	size = 10;
	pos = 0;
	count = 0;
}
int Table:: IsEmpty(void) const
{
	if (pos==0)
		return 1;
	return 0;
}

int Table:: IsFull(void) const
{
	if (pos==count)
		return 1;
	return 0;
}

int Table:: GetCount(void) const
{
	return count;
}

void Table:: Reset(void)
{
	pos = 0;
}

int Table:: GetNext(void)
{
	if(IsTablEnded())
		return 0;
	return pos++;

}

int Table:: IsTablEnded(void) const
{
	if (pos==count)
		return 1;
	return 0;
}