// Fill out your copyright notice in the Description page of Project Settings.

#include "MyTestDamageType.h"

UMyTestDamageType::UMyTestDamageType()
{
	//물리적 충격량
	DamageImpulse = 5000.f;

	//
	bScaleMomentumByMass = true;

	//월드에 의해 데미지를 받게 설정. AI 어그로 등에 고려해야할 사항.
	bCausedByWorld = true;
}