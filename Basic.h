// Basic.h: interface for the CBasic class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_BASIC_H__2757CD51_6C70_45E8_8079_065E7B778C9E__INCLUDED_)
#define AFX_BASIC_H__2757CD51_6C70_45E8_8079_065E7B778C9E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CBasic  
{
public:
	virtual int GetData();
	virtual void SetData(int Data);
	CBasic();
	CBasic(int Data);
	virtual ~CBasic();
	int m_Data;
};

#endif // !defined(AFX_BASIC_H__2757CD51_6C70_45E8_8079_065E7B778C9E__INCLUDED_)
