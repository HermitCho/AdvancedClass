// Fill out your copyright notice in the Description page of Project Settings.

#include "8week/PooledObject.h"
#include "8week/MyObjectPool.h"

void UPooledObject::Init(AMyObjectPool* Owner)
{
	bIsPoolActive = false;

	ObjectPool = Owner;
}

void UPooledObject::RecycleSelf()
{
	ObjectPool->RecyclePooledObject(this);
}


void UPooledObject::OnComponentDestroyed(bool bDestroyingHierachy)
{
	ObjectPool->OnPoolerCleanup.RemoveDynamic(this, &UPooledObject::RecycleSelf);
	Super::OnComponentDestroyed(bDestroyingHierachy);
}
