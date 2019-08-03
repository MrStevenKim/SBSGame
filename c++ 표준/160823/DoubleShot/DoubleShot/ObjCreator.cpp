#include "ObjCreator.h"



CObj * CObjCreator::CreateSolider()
{
	CObj* pObj = new CSolider;
	pObj->Initialize();

	return pObj;
}

CObj * CObjCreator::CreateMapping()
{
	CObj* pObj = new CMapping;
	pObj->Initialize();

	return pObj;
	
}

CObj * CObjCreator::CreateScoreBoard()
{
	CObj* pObj = new CScoreBoard;
	pObj->Initialize();
	return pObj;
}



CObj * CObjCreator::CreateEnermy(int _ix, int _iy)
{
	CObj* pObj = new CEnermy;
	pObj->Initialize();
	pObj->SetPos(_ix, _iy);
	return pObj;
}

CObj * CObjCreator::CreateBullet()
{	
	CObj* pObj = new CBullet;
	pObj->Initialize();
	return pObj;
}

CObj * CObjCreator::CreateBullet(int _ix, int _iy)
{
	CObj* pObj = new CBullet;
	pObj->Initialize();
	pObj->SetPos(_ix, _iy);
	return pObj;
}

CObj * CObjCreator::CreateBullet2(int _ix, int _iy)
{
	CObj* pObj = new CBullet2;
	pObj->Initialize();
	pObj->SetPos(_ix, _iy);
	return pObj;
}

CObjCreator::CObjCreator()
{
}


CObjCreator::~CObjCreator()
{
}
