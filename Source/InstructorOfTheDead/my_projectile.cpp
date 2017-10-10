// Fill out your copyright notice in the Description page of Project Settings.

#include "my_projectile.h"


// Sets default values
Amy_projectile::Amy_projectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Amy_projectile::BeginPlay()
{
	Super::BeginPlay();
    
	
}

// Called every frame
void Amy_projectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

