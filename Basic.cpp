// Basic.cpp: implementation of the CBasic class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "CppProject.h"
#include "Basic.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CBasic::CBasic()
{

}

CBasic::CBasic(int Data)
{
	m_Data=Data;
}

CBasic::~CBasic()
{
	m_Data=0;
}

void CBasic::SetData(int Data)
{
	m_Data=Data;
}

int CBasic::GetData()
{
	return m_Data;
}
