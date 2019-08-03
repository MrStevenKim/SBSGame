typedef struct tagInfo
{
	float		fX;
	float		fY;
	float		fCX;
	float		fCY;

	tagInfo() { }
	tagInfo(float _fx, float _fy, float _fcx, float _fcy)
		:fX(_fx), fY(_fy), fCX(_fcx), fCY(_fcy) { }
}INFO;