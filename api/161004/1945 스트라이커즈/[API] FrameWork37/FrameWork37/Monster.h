#pragma once
#include "obj.h"

class CMonster :
	public CObj
{
public:
	virtual void Initialize( void );
	virtual int Progress( void );
	virtual void Render( HDC hdc );
	virtual void Release( void );

public:
	CMonster(void);
	virtual ~CMonster(void);
};
