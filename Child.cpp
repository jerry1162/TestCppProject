// Child.cpp: implementation of the CChild class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "CppProject.h"
#include "Child.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CChild::CChild()
{

}

CChild::~CChild()
{

}

void CChild::SetData(int Data)
{
	CBasic::SetData(Data);
	printf(_T("Child\n"));
	//cout<<_T("Child")<<endl;
}
