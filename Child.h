// Child.h: interface for the CChild class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_CHILD_H__2EC431BD_6A84_447E_89DC_06D938FBA7E7__INCLUDED_)
#define AFX_CHILD_H__2EC431BD_6A84_447E_89DC_06D938FBA7E7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Basic.h"

class CChild : public CBasic  
{
public:
	virtual void SetData(int Data);
	CChild();
	virtual ~CChild();

};

#endif // !defined(AFX_CHILD_H__2EC431BD_6A84_447E_89DC_06D938FBA7E7__INCLUDED_)
