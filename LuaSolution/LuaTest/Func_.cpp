#include "stdafx.h"
#include "Func_.h"


void OpenNpc(const char* szName)
{
	AfxMessageBox(szName);
}

void FindWay(int x, int y)
{
	CString strBuf;
	strBuf.Format("%d %d", x, y);
	AfxMessageBox(strBuf);
}

