#include "GameSys.h"
#include "User.h"
#include "Animator.h"

Animator::Animator(std::vector<AnimationClip>* srcClips, Type type)
{
	repeatType = type;
	curClipNumber = 0;
	isPlay = false;
	isReverse = false;

	for (auto& a : *srcClips)			// for each�� �������°� auto ������ ���� �����ؿ��°ǵ�,,,,,, ���������ϰ������ ���۷��������� ���亯���� ������
	{
		a.time = a.time < 100 ? 100 : a.time; // ���׿���      ?     �� : ����
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
