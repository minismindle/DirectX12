#pragma once
#include "Component.h"

struct TransformMatrix
{
	Vec4 offset;
};


class Transform : public Component
{
public:
	Transform();
	virtual ~Transform();

	// TODO : 온갖 Parent/Child 관계

private:
	// TODO : World 위치 관련
	Vec3 _localPosition;
	Vec3 _localRotation;
	Vec3 _localScale;
};

