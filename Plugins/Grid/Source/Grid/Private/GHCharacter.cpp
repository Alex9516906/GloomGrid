

#include "GHCharacter.h"

#include "Camera/CameraComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/SpringArmComponent.h"

AGHCharacter::AGHCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	MoveComponent = CreateDefaultSubobject<UGHMoveComponent>("MoveComponent");
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring arm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->bDoCollisionTest = false;
	SpringArm->bInheritPitch = false;
	SpringArm->bInheritYaw = false;
	SpringArm->bInheritRoll = false;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
}

void AGHCharacter::BeginPlay()
{
	Super::BeginPlay();
	InitLocation();
}

void AGHCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AGHCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveForward",this,&ThisClass::MoveCameraForward);
	PlayerInputComponent->BindAxis("MoveRight",this,&ThisClass::MoveCameraRight);
	PlayerInputComponent->BindAction("CameraDown",IE_Pressed,this,&ThisClass::CameraDown);
	PlayerInputComponent->BindAction("CameraUp",IE_Pressed,this,&ThisClass::CameraUp);
}

void AGHCharacter::MoveCameraForward(float Rate)
{
	Camera->SetWorldLocation(FVector::ForwardVector*Rate*5+Camera->GetComponentLocation());
}

void AGHCharacter::MoveCameraRight(float Rate)
{
	Camera->SetWorldLocation(FVector::RightVector*Rate*5+Camera->GetComponentLocation());
}

void AGHCharacter::InitLocation()
{
	MoveComponent->Init();
}

void AGHCharacter::CameraDown()
{

	SpringArm->TargetArmLength = SpringArm->TargetArmLength-100;
}

void AGHCharacter::CameraUp()
{
	SpringArm->TargetArmLength = SpringArm->TargetArmLength+100;
}
