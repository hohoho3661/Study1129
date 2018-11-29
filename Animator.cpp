#include "GameSys.h"
#include "User.h"
#include "Animator.h"

Animator::Animator(std::vector<AnimationClip>* srcClips, Type type)
{
	repeatType = type;
	curClipNumber = 0;
	isPlay = false;
	isReverse = false;

	for (auto& a : *srcClips)			// for each로 루프도는건 auto 변수를 만들어서 복사해오는건데,,,,,, 직접수정하고싶으면 레퍼런스형으로 오토변수를 만들면됨
	{
		a.time = a.time < 100 ? 100 : a.time; // 삼항연산      ?     참 : 거짓
		clips.push_back(a);
	}
}

Animator::~Animator()
{
}

void Animator::Update()
{
}

void Animator::Render()
{
}

void Animator::Play()
{
}

void Animator::Pause()
{
}

void Animator::Stop()
{
}
