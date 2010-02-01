#pragma once

class IDrawer
{
public:
	virtual void Update(IUIAnimationVariable *var_I)=0;
	virtual void UpdateSize(WTL::CRect rect_I)=0;
};
