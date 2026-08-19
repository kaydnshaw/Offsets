#pragma once
// ================================================================
//  RbxDumper v2.0 - Auto-generated Struct Definitions
//  Roblox Version : version-ce0bcd0fbd484804
//  Generated At   : 21:38 18/08/2026 (GMT)
// ----------------------------------------------------------------
//  Field types are uint64_t placeholders — adjust as needed.
// ================================================================
#include <cstdint>

namespace Structs {

    // ========================================================
    // AirProperties
    // ========================================================
    struct AirProperties {
        uint8_t _pad_0x0[0x18]; // +0x0
        uint64_t AirDensity; // +0x18
        uint8_t _pad_0x20[0x1c]; // +0x20
        uint64_t GlobalWind; // +0x3c
    }; // sizeof(AirProperties) >= 0x44

    // ========================================================
    // Alloc
    // ========================================================
    // Function Pointers / Static RVAs:
    //   Malloc = 0x7aa6f0


    // ========================================================
    // AnimationTrack
    // ========================================================
    struct AnimationTrack {
        uint8_t _pad_0x0[0xb8]; // +0x0
        uint64_t Animation; // +0xb8
        uint8_t _pad_0xc0[0x14]; // +0xc0
        uint64_t Speed; // +0xd4
        // (alias/overlap) TimePosition = 0xd8
        uint8_t _pad_0xdc[0x9]; // +0xdc
        uint64_t Looped; // +0xe5
        uint8_t _pad_0xed[0x1b]; // +0xed
        uint64_t Animator; // +0x108
        uint8_t _pad_0x110[0x940]; // +0x110
        uint64_t IsPlaying; // +0xa50
    }; // sizeof(AnimationTrack) >= 0xa58

    // ========================================================
    // Animator
    // ========================================================
    struct Animator {
        uint8_t _pad_0x0[0xb80]; // +0x0
        uint64_t ActiveAnimations; // +0xb80
    }; // sizeof(Animator) >= 0xb88

    // ========================================================
    // Atmosphere
    // ========================================================
    struct Atmosphere {
        uint8_t _pad_0x0[0xb8]; // +0x0
        uint64_t Color; // +0xb8
        uint8_t _pad_0xc0[0x4]; // +0xc0
        uint64_t Decay; // +0xc4
        uint8_t _pad_0xcc[0x4]; // +0xcc
        uint64_t Density; // +0xd0
        // (alias/overlap) Glare = 0xd4
        uint64_t Haze; // +0xd8
        // (alias/overlap) Offset = 0xdc
    }; // sizeof(Atmosphere) >= 0xe0

    // ========================================================
    // Attachment
    // ========================================================
    struct Attachment {
        uint8_t _pad_0x0[0x80]; // +0x0
        uint64_t Position; // +0x80
    }; // sizeof(Attachment) >= 0x88

    // ========================================================
    // Attribute
    // ========================================================
    // Function Pointers / Static RVAs:
    //   TypeIdRva = 0x872cd74
    //   TypeIdRvaNew = 0x872cd6c

    struct Attribute {
        uint8_t _pad_0x0[0x8]; // +0x0
        uint64_t Key; // +0x8
        uint8_t _pad_0x10[0x8]; // +0x10
        uint64_t Value; // +0x18
        uint8_t _pad_0x20[0x38]; // +0x20
        uint64_t Size; // +0x58
    }; // sizeof(Attribute) >= 0x60

    // ========================================================
    // AttributesMap
    // ========================================================
    struct AttributesMap {
        uint8_t _pad_0x0[0x10]; // +0x0
        uint64_t Attributes; // +0x10
        uint64_t Length; // +0x18
    }; // sizeof(AttributesMap) >= 0x20

    // ========================================================
    // BasePart
    // ========================================================
    struct BasePart {
        uint8_t _pad_0x0[0x10c]; // +0x0
        uint64_t Reflectance; // +0x10c
        uint8_t _pad_0x114[0x1c]; // +0x114
        uint64_t Transparency; // +0x130
        // (alias/overlap) CastShadow = 0x135
        // (alias/overlap) Locked = 0x136
        // (alias/overlap) Massless = 0x136
        uint8_t _pad_0x138[0x50]; // +0x138
        uint64_t Primitive; // +0x188
        uint8_t _pad_0x190[0x18]; // +0x190
        uint64_t Color3; // +0x1a8
        uint8_t _pad_0x1b0[0x9]; // +0x1b0
        uint64_t Shape; // +0x1b9
    }; // sizeof(BasePart) >= 0x1c1

    // ========================================================
    // Beam
    // ========================================================
    struct Beam {
        uint8_t _pad_0x0[0x160]; // +0x0
        uint64_t Attachment0; // +0x160
        // (alias/overlap) Attachment1 = 0x160
        uint8_t _pad_0x168[0x18]; // +0x168
        uint64_t Brightness; // +0x180
        // (alias/overlap) CurveSize0 = 0x184
        uint64_t CurveSize1; // +0x188
        // (alias/overlap) LightEmission = 0x18c
        uint64_t LightInfluence; // +0x190
        uint8_t _pad_0x198[0x4]; // +0x198
        uint64_t TextureLength; // +0x19c
        uint64_t TextureSpeed; // +0x1a4
        // (alias/overlap) Width0 = 0x1a8
        uint64_t Width1; // +0x1ac
        // (alias/overlap) ZOffset = 0x1b0
    }; // sizeof(Beam) >= 0x1b4

    // ========================================================
    // BloomEffect
    // ========================================================
    struct BloomEffect {
        uint8_t _pad_0x0[0x30]; // +0x0
        uint64_t Enabled; // +0x30
        uint8_t _pad_0x38[0x80]; // +0x38
        uint64_t Intensity; // +0xb8
        // (alias/overlap) Size = 0xbc
        uint64_t Threshold; // +0xc0
    }; // sizeof(BloomEffect) >= 0xc8

    // ========================================================
    // BlurEffect
    // ========================================================
    struct BlurEffect {
        uint8_t _pad_0x0[0x30]; // +0x0
        uint64_t Enabled; // +0x30
        uint8_t _pad_0x38[0x80]; // +0x38
        uint64_t Size; // +0xb8
    }; // sizeof(BlurEffect) >= 0xc0

    // ========================================================
    // ByteCode
    // ========================================================
    struct ByteCode {
        uint8_t _pad_0x0[0x10]; // +0x0
        uint64_t Pointer; // +0x10
        uint8_t _pad_0x18[0x10]; // +0x18
        uint64_t Size; // +0x28
    }; // sizeof(ByteCode) >= 0x30

    // ========================================================
    // Camera
    // ========================================================
    struct Camera {
        uint8_t _pad_0x0[0xc8]; // +0x0
        uint64_t CameraSubject; // +0xc8
        uint8_t _pad_0xd0[0x8]; // +0xd0
        uint64_t CFrame; // +0xd8
        // (alias/overlap) Rotation = 0xd8
        uint8_t _pad_0xe0[0x1c]; // +0xe0
        uint64_t Position; // +0xfc
        uint8_t _pad_0x104[0x4]; // +0x104
        uint64_t Focus; // +0x108
        uint8_t _pad_0x110[0x28]; // +0x110
        uint64_t CameraType; // +0x138
        uint64_t FieldOfView; // +0x140
        uint8_t _pad_0x148[0x144]; // +0x148
        uint64_t Viewport; // +0x28c
        // (alias/overlap) ViewportInt16 = 0x28c
        uint8_t _pad_0x294[0x38]; // +0x294
        uint64_t ViewportSize; // +0x2cc
        uint64_t ImagePlaneDepth; // +0x2d4
    }; // sizeof(Camera) >= 0x2dc

    // ========================================================
    // CharacterMesh
    // ========================================================
    struct CharacterMesh {
        uint8_t _pad_0x0[0xc8]; // +0x0
        uint64_t BaseTextureId; // +0xc8
        uint8_t _pad_0xd0[0x28]; // +0xd0
        uint64_t MeshId; // +0xf8
        uint8_t _pad_0x100[0x28]; // +0x100
        uint64_t OverlayTextureId; // +0x128
        uint8_t _pad_0x130[0x18]; // +0x130
        uint64_t BodyPart; // +0x148
    }; // sizeof(CharacterMesh) >= 0x150

    // ========================================================
    // Chat
    // ========================================================
    struct Chat {
        uint8_t _pad_0x0[0x154]; // +0x0
        uint64_t IsFocused; // +0x154
    }; // sizeof(Chat) >= 0x15c

    // ========================================================
    // ClickDetector
    // ========================================================
    struct ClickDetector {
        uint8_t _pad_0x0[0xc8]; // +0x0
        uint64_t MouseIcon; // +0xc8
        uint8_t _pad_0xd0[0x18]; // +0xd0
        uint64_t MaxActivationDistance; // +0xe8
    }; // sizeof(ClickDetector) >= 0xf0

    // ========================================================
    // Clothing
    // ========================================================
    struct Clothing {
        uint8_t _pad_0x0[0x100]; // +0x0
        uint64_t Color3; // +0x100
        // (alias/overlap) Template = 0x100
    }; // sizeof(Clothing) >= 0x108

    // ========================================================
    // ColorCorrectionEffect
    // ========================================================
    struct ColorCorrectionEffect {
        uint8_t _pad_0x0[0x30]; // +0x0
        uint64_t Enabled; // +0x30
        uint8_t _pad_0x38[0x80]; // +0x38
        uint64_t TintColor; // +0xb8
        uint8_t _pad_0xc0[0x4]; // +0xc0
        uint64_t Brightness; // +0xc4
        // (alias/overlap) Contrast = 0xc8
    }; // sizeof(ColorCorrectionEffect) >= 0xcc

    // ========================================================
    // ColorGradingEffect
    // ========================================================
    struct ColorGradingEffect {
        uint8_t _pad_0x0[0x30]; // +0x0
        uint64_t Enabled; // +0x30
        uint8_t _pad_0x38[0x80]; // +0x38
        uint64_t TonemapperPreset; // +0xb8
    }; // sizeof(ColorGradingEffect) >= 0xc0

    // ========================================================
    // DataModel
    // ========================================================
    struct DataModel {
        uint8_t _pad_0x0[0x8]; // +0x0
        uint64_t ToRenderView2; // +0x8
        // (alias/overlap) ToRenderView3 = 0x8
        uint8_t _pad_0x10[0xf0]; // +0x10
        uint64_t ToRenderView1; // +0x100
        uint8_t _pad_0x108[0x10]; // +0x108
        uint64_t JobId; // +0x118
        uint8_t _pad_0x120[0x38]; // +0x120
        uint64_t Workspace; // +0x158
        uint8_t _pad_0x160[0x18]; // +0x160
        uint64_t CreatorId; // +0x178
        uint64_t GameId; // +0x180
        uint64_t PlaceId; // +0x188
        uint8_t _pad_0x190[0x14]; // +0x190
        uint64_t PlaceVersion; // +0x1a4
        uint8_t _pad_0x1ac[0x25c]; // +0x1ac
        uint64_t PrimitiveCount; // +0x408
        uint8_t _pad_0x410[0x30]; // +0x410
        uint64_t ScriptContext; // +0x440
        uint8_t _pad_0x448[0x160]; // +0x448
        uint64_t ServerIP; // +0x5a8
        uint8_t _pad_0x5b0[0x10]; // +0x5b0
        uint64_t GameLoaded; // +0x5c0
    }; // sizeof(DataModel) >= 0x5c8

    // ========================================================
    // DepthOfFieldEffect
    // ========================================================
    struct DepthOfFieldEffect {
        uint8_t _pad_0x0[0x30]; // +0x0
        uint64_t Enabled; // +0x30
        uint8_t _pad_0x38[0x80]; // +0x38
        uint64_t FarIntensity; // +0xb8
        // (alias/overlap) FocusDistance = 0xbc
        uint64_t InFocusRadius; // +0xc0
        // (alias/overlap) NearIntensity = 0xc4
    }; // sizeof(DepthOfFieldEffect) >= 0xc8

    // ========================================================
    // DragDetector
    // ========================================================
    struct DragDetector {
        uint8_t _pad_0x0[0xe8]; // +0x0
        uint64_t MaxActivationDistance; // +0xe8
        uint8_t _pad_0xf0[0x1b8]; // +0xf0
        uint64_t MaxDragAngle; // +0x2a8
        // (alias/overlap) MaxForce = 0x2ac
        uint64_t MaxTorque; // +0x2b0
        // (alias/overlap) MinDragAngle = 0x2b4
        uint8_t _pad_0x2b8[0x8]; // +0x2b8
        uint64_t Responsiveness; // +0x2c0
    }; // sizeof(DragDetector) >= 0x2c8

    // ========================================================
    // FFlagList
    // ========================================================
    // Function Pointers / Static RVAs:
    //   Pointer = 0x8705788

    struct FFlagList {
        uint8_t _pad_0x0[0x30]; // +0x0
        uint64_t ToFlag; // +0x30
        uint8_t _pad_0x38[0x88]; // +0x38
        uint64_t ToValue; // +0xc0
    }; // sizeof(FFlagList) >= 0xc8

    // ========================================================
    // FakeDataModel
    // ========================================================
    // Function Pointers / Static RVAs:
    //   Pointer = 0x8c426f8

    struct FakeDataModel {
        uint8_t _pad_0x0[0x1d8]; // +0x0
        uint64_t RealDataModel; // +0x1d8
    }; // sizeof(FakeDataModel) >= 0x1e0

    // ========================================================
    // FastClusterEntity
    // ========================================================
    // Function Pointers / Static RVAs:
    //   VTableRva = 0x6ae1c10

    struct FastClusterEntity {
        uint8_t _pad_0x0[0x8]; // +0x0
        uint64_t ContextPtr; // +0x8
        uint64_t RenderQueueId; // +0x10
        // (alias/overlap) AlphaByte = 0x14
        uint8_t _pad_0x18[0x8]; // +0x18
        uint64_t MaterialPtr; // +0x20
        uint8_t _pad_0x28[0x20]; // +0x28
        uint64_t DecalMaterialPtr; // +0x48
        uint8_t _pad_0x50[0x20]; // +0x50
        uint64_t TechniqueArrayPtr; // +0x70
        uint8_t _pad_0x78[0x8]; // +0x78
        uint64_t PrimitiveIndexArrayPtr; // +0x80
        uint8_t _pad_0x88[0x10]; // +0x88
        uint64_t BBoxMinX; // +0x98
        // (alias/overlap) BBoxMinY = 0x9c
        uint64_t BBoxMinZ; // +0xa0
        // (alias/overlap) BBoxMaxX = 0xa4
        uint64_t BBoxMaxY; // +0xa8
        // (alias/overlap) BBoxMaxZ = 0xac
    }; // sizeof(FastClusterEntity) >= 0xb0

    // ========================================================
    // FastClusterEntity::Context
    // ========================================================
    struct FastClusterEntity_Context {
        uint8_t _pad_0x0[0x1a0]; // +0x0
        uint64_t PrimitivePoolPtr; // +0x1a0
    }; // sizeof(FastClusterEntity_Context) >= 0x1a8

    // ========================================================
    // FastClusterEntity::PrimitivePool
    // ========================================================
    struct FastClusterEntity_PrimitivePool {
        uint8_t _pad_0x0[0x20]; // +0x0
        uint64_t ArrayBase; // +0x20
    }; // sizeof(FastClusterEntity_PrimitivePool) >= 0x28

    // ========================================================
    // FastClusterEntity::PrimitiveRecord
    // ========================================================
    struct FastClusterEntity_PrimitiveRecord {
        uint8_t _pad_0x0[0x24]; // +0x0
        uint64_t Translation; // +0x24
        uint8_t _pad_0x2c[0x4]; // +0x2c
        uint64_t Stride; // +0x30
    }; // sizeof(FastClusterEntity_PrimitiveRecord) >= 0x38

    // ========================================================
    // GuiBase2D
    // ========================================================
    struct GuiBase2D {
        uint8_t _pad_0x0[0xe8]; // +0x0
        uint64_t AbsoluteRotation; // +0xe8
        uint8_t _pad_0xf0[0x18]; // +0xf0
        uint64_t AbsolutePosition; // +0x108
        uint8_t _pad_0x110[0x4]; // +0x110
        uint64_t AbsoluteSize; // +0x114
    }; // sizeof(GuiBase2D) >= 0x11c

    // ========================================================
    // GuiObject
    // ========================================================
    struct GuiObject {
        uint8_t _pad_0x0[0x510]; // +0x0
        uint64_t Position; // +0x510
        uint8_t _pad_0x518[0x18]; // +0x518
        uint64_t Size; // +0x530
        uint8_t _pad_0x538[0x8]; // +0x538
        uint64_t BackgroundColor3; // +0x540
        uint8_t _pad_0x548[0x4]; // +0x548
        uint64_t BorderColor3; // +0x54c
        uint8_t _pad_0x554[0x4]; // +0x554
        uint64_t AnchorPoint; // +0x558
        // (alias/overlap) BackgroundTransparency = 0x558
        uint64_t AutomaticSize; // +0x560
        // (alias/overlap) BorderSizePixel = 0x560
        uint64_t BorderMode; // +0x568
        // (alias/overlap) SizeConstraint = 0x568
        uint8_t _pad_0x570[0x10]; // +0x570
        uint64_t LayoutOrder; // +0x580
        uint8_t _pad_0x588[0x10]; // +0x588
        uint64_t Rotation; // +0x598
        // (alias/overlap) SelectionOrder = 0x59c
        uint8_t _pad_0x5a0[0x4]; // +0x5a0
        uint64_t ZIndex; // +0x5a4
        // (alias/overlap) Active = 0x5a8
        // (alias/overlap) Interactable = 0x5a8
        // (alias/overlap) ClipsDescendants = 0x5a9
        uint64_t Selectable; // +0x5ac
        // (alias/overlap) Visible = 0x5ad
        uint8_t _pad_0x5b4[0x83c]; // +0x5b4
        uint64_t Text; // +0xdf0
        uint8_t _pad_0xdf8[0xa8]; // +0xdf8
        uint64_t TextColor3; // +0xea0
    }; // sizeof(GuiObject) >= 0xea8

    // ========================================================
    // Humanoid
    // ========================================================
    struct Humanoid {
        uint8_t _pad_0x0[0x20]; // +0x0
        uint64_t HumanoidStateID; // +0x20
        uint8_t _pad_0x28[0x90]; // +0x28
        uint64_t DisplayName; // +0xb8
        uint8_t _pad_0xc0[0x40]; // +0xc0
        uint64_t MoveDirection; // +0x100
        uint64_t SeatPart; // +0x108
        uint8_t _pad_0x110[0x18]; // +0x110
        uint64_t CameraOffset; // +0x128
        uint8_t _pad_0x130[0x1c]; // +0x130
        uint64_t TargetPoint; // +0x14c
        uint8_t _pad_0x154[0x10]; // +0x154
        uint64_t MoveToPoint; // +0x164
        // (alias/overlap) WalkToPoint = 0x164
        uint8_t _pad_0x16c[0x14]; // +0x16c
        uint64_t DisplayDistanceType; // +0x180
        uint64_t HealthDisplayDistance; // +0x188
        // (alias/overlap) HealthDisplayType = 0x18c
        uint64_t Health; // +0x190
        // (alias/overlap) HipHeight = 0x194
        uint8_t _pad_0x198[0x8]; // +0x198
        uint64_t JumpHeight; // +0x1a0
        // (alias/overlap) JumpPower = 0x1a4
        uint64_t MaxHealth; // +0x1a8
        // (alias/overlap) MaxSlopeAngle = 0x1ac
        uint64_t NameDisplayDistance; // +0x1b0
        // (alias/overlap) NameOcclusion = 0x1b4
        uint64_t FloorMaterial; // +0x1b8
        uint64_t RigType; // +0x1c0
        uint8_t _pad_0x1c8[0x8]; // +0x1c8
        uint64_t WalkSpeed; // +0x1d0
        // (alias/overlap) Walkspeed = 0x1d0
        // (alias/overlap) AutoJumpEnabled = 0x1d4
        // (alias/overlap) AutoRotate = 0x1d5
        // (alias/overlap) AutomaticScalingEnabled = 0x1d6
        // (alias/overlap) BreakJointsOnDeath = 0x1d7
        uint64_t EvaluateStateMachine; // +0x1d8
        // (alias/overlap) Jump = 0x1da
        // (alias/overlap) PlatformStand = 0x1dc
        // (alias/overlap) RequiresNeck = 0x1dd
        // (alias/overlap) Sit = 0x1de
        uint64_t UseJumpPower; // +0x1e0
        uint8_t _pad_0x1e8[0x1d4]; // +0x1e8
        uint64_t WalkSpeedCheck; // +0x3bc
        // (alias/overlap) WalkspeedCheck = 0x3bc
        uint8_t _pad_0x3c4[0x44]; // +0x3c4
        uint64_t WalkTimer; // +0x408
        uint8_t _pad_0x410[0x58]; // +0x410
        uint64_t PlatformStatePointer; // +0x468
        uint8_t _pad_0x470[0x8]; // +0x470
        uint64_t HumanoidRootPart; // +0x478
        // (alias/overlap) MoveToPart = 0x478
        uint8_t _pad_0x480[0x418]; // +0x480
        uint64_t HumanoidState; // +0x898
        uint8_t _pad_0x8a0[0x9f]; // +0x8a0
        uint64_t IsWalking; // +0x93f
    }; // sizeof(Humanoid) >= 0x947

    // ========================================================
    // InputObject
    // ========================================================
    struct InputObject {
        uint8_t _pad_0x0[0xd4]; // +0x0
        uint64_t MousePosition; // +0xd4
    }; // sizeof(InputObject) >= 0xdc

    // ========================================================
    // Instance
    // ========================================================
    // Function Pointers / Static RVAs:
    //   ClassByName = 0x46a3ab0
    //   FromExisting = 0x40ab420
    //   New = 0x40aa7d0
    //   SetParent = 0x1bf70d0

    struct Instance {
        uint64_t Creator_create; // +0x0
        uint64_t ClassName; // +0x8
        // (alias/overlap) Name = 0x8
        uint64_t ChildrenStride; // +0x10
        // (alias/overlap) Creator_isCreatable = 0x10
        // (alias/overlap) This = 0x10
        uint64_t AttributeToValue; // +0x18
        // (alias/overlap) ClassDescriptor = 0x18
        uint8_t _pad_0x20[0x18]; // +0x20
        uint64_t ComponentMap; // +0x38
        uint64_t AttributeContainer; // +0x40
        uint64_t AttributeList; // +0x48
        uint64_t WhJobNopSlot; // +0x50
        uint64_t AttributeToNext; // +0x58
        uint8_t _pad_0x60[0x8]; // +0x60
        uint64_t Parent; // +0x68
        uint64_t NameContainer; // +0x70
        uint64_t Children; // +0x78
        // (alias/overlap) ChildrenStart = 0x78
        uint64_t ChildrenEnd; // +0x80
        uint8_t _pad_0x88[0x128]; // +0x88
        uint64_t ClassBase; // +0x1b0
    }; // sizeof(Instance) >= 0x1b8

    // ========================================================
    // Lighting
    // ========================================================
    struct Lighting {
        uint8_t _pad_0x0[0xc8]; // +0x0
        uint64_t ClockTime; // +0xc8
        uint64_t Ambient; // +0xd0
        uint8_t _pad_0xd8[0x4]; // +0xd8
        uint64_t ColorShift_Bottom; // +0xdc
        uint8_t _pad_0xe4[0x4]; // +0xe4
        uint64_t ColorShift_Top; // +0xe8
        uint8_t _pad_0xf0[0x4]; // +0xf0
        uint64_t FogColor; // +0xf4
        uint8_t _pad_0xfc[0x4]; // +0xfc
        uint64_t OutdoorAmbient; // +0x100
        uint8_t _pad_0x108[0x10]; // +0x108
        uint64_t Brightness; // +0x118
        // (alias/overlap) EnvironmentDiffuseScale = 0x11c
        uint64_t EnvironmentSpecularScale; // +0x120
        // (alias/overlap) ExposureCompensation = 0x124
        uint8_t _pad_0x128[0x4]; // +0x128
        uint64_t FogEnd; // +0x12c
        // (alias/overlap) FogStart = 0x130
        uint64_t GeographicLatitude; // +0x134
        // (alias/overlap) GradientBottom = 0x138
        uint64_t ShadowSoftness; // +0x13c
        uint64_t GlobalShadows; // +0x144
        uint8_t _pad_0x14c[0x4]; // +0x14c
        uint64_t GradientTop; // +0x150
        uint8_t _pad_0x158[0x4]; // +0x158
        uint64_t LightColor; // +0x15c
        uint8_t _pad_0x164[0x4]; // +0x164
        uint64_t LightDirection; // +0x168
        uint8_t _pad_0x170[0x4]; // +0x170
        uint64_t Source; // +0x174
        // (alias/overlap) SunPosition = 0x178
        uint8_t _pad_0x17c[0x8]; // +0x17c
        uint64_t MoonPosition; // +0x184
        uint8_t _pad_0x18c[0x3c]; // +0x18c
        uint64_t Sky; // +0x1c8
        uint8_t _pad_0x1d0[0x8]; // +0x1d0
        uint64_t Atmosphere; // +0x1d8
    }; // sizeof(Lighting) >= 0x1e0

    // ========================================================
    // LightingParameters
    // ========================================================
    struct LightingParameters {
        uint8_t _pad_0x0[0x134]; // +0x0
        uint64_t GeographicLatitude; // +0x134
        // (alias/overlap) SkyAmbient2 = 0x138
        uint8_t _pad_0x13c[0x14]; // +0x13c
        uint64_t SkyAmbient; // +0x150
        uint8_t _pad_0x158[0x4]; // +0x158
        uint64_t LightColor; // +0x15c
        uint8_t _pad_0x164[0x4]; // +0x164
        uint64_t LightDirection; // +0x168
        uint8_t _pad_0x170[0x4]; // +0x170
        uint64_t Source; // +0x174
        // (alias/overlap) TrueSunPosition = 0x178
        uint8_t _pad_0x17c[0x8]; // +0x17c
        uint64_t TrueMoonPosition; // +0x184
    }; // sizeof(LightingParameters) >= 0x18c

    // ========================================================
    // LocalScript
    // ========================================================
    struct LocalScript {
        uint8_t _pad_0x0[0x190]; // +0x0
        uint64_t ByteCode; // +0x190
        uint8_t _pad_0x198[0x8]; // +0x198
        uint64_t Hash; // +0x1a0
    }; // sizeof(LocalScript) >= 0x1a8

    // ========================================================
    // LuaState
    // ========================================================
    struct LuaState {
        uint8_t _pad_0x0[0x4]; // +0x0
        uint64_t TypeTag; // +0x4
        // (alias/overlap) Top = 0x8
        uint8_t _pad_0xc[0x14]; // +0xc
        uint64_t Global; // +0x20
        uint64_t Base; // +0x28
    }; // sizeof(LuaState) >= 0x30

    // ========================================================
    // LuauGlobal
    // ========================================================
    // Function Pointers / Static RVAs:
    //   dummynode = 0x626d660

    struct LuauGlobal {
        uint8_t _pad_0x0[0x8]; // +0x0
        uint64_t page_next_all; // +0x8
        // (alias/overlap) strt_size = 0xc
        uint64_t gray; // +0x10
        uint64_t grayagain; // +0x18
        // (alias/overlap) page_next_free = 0x18
        uint64_t weak; // +0x20
        uint8_t _pad_0x28[0x10]; // +0x28
        uint64_t gcpause; // +0x38
        // (alias/overlap) gcstepmul = 0x3c
        uint64_t gcstepsize; // +0x40
        uint64_t GCthreshold; // +0x48
        uint64_t totalbytes; // +0x50
        uint64_t currentwhite; // +0x58
        // (alias/overlap) gcstate = 0x59
        uint8_t _pad_0x60[0x8]; // +0x60
        uint64_t strt_hash; // +0x68
        uint8_t _pad_0x70[0x280]; // +0x70
        uint64_t gcopages; // +0x2f0
        uint64_t gcopages_end; // +0x2f8
        uint64_t gcopages_large; // +0x300
        uint64_t gcopages_sizeclass; // +0x308
    }; // sizeof(LuauGlobal) >= 0x310

    // ========================================================
    // LuauObject
    // ========================================================
    struct LuauObject {
        uint8_t _pad_0x0[0x2]; // +0x0
        uint64_t marked; // +0x2
        // (alias/overlap) tt = 0x4
        // (alias/overlap) page_next = 0x8
        uint8_t _pad_0xa[0x6]; // +0xa
        uint64_t table_sizearray; // +0x10
        uint64_t table_node; // +0x18
        uint64_t page_size; // +0x20
        // (alias/overlap) table_gclist = 0x20
        // (alias/overlap) page_block = 0x24
        uint64_t table_array; // +0x28
        uint8_t _pad_0x30[0x4]; // +0x30
        uint64_t table_lsz; // +0x34
        uint8_t _pad_0x3c[0x4]; // +0x3c
        uint64_t page_data; // +0x40
    }; // sizeof(LuauObject) >= 0x48

    // ========================================================
    // MaterialColors
    // ========================================================
    struct MaterialColors {
        uint8_t _pad_0x0[0x6]; // +0x0
        uint64_t Grass; // +0x6
        // (alias/overlap) Slate = 0x9
        // (alias/overlap) Concrete = 0xc
        uint8_t _pad_0xe[0x1]; // +0xe
        uint64_t Brick; // +0xf
        // (alias/overlap) Sand = 0x12
        // (alias/overlap) WoodPlanks = 0x15
        uint8_t _pad_0x17[0x1]; // +0x17
        uint64_t Rock; // +0x18
        // (alias/overlap) Glacier = 0x1b
        // (alias/overlap) Snow = 0x1e
        uint8_t _pad_0x20[0x1]; // +0x20
        uint64_t Sandstone; // +0x21
        // (alias/overlap) Mud = 0x24
        // (alias/overlap) Basalt = 0x27
        uint8_t _pad_0x29[0x1]; // +0x29
        uint64_t Ground; // +0x2a
        // (alias/overlap) CrackedLava = 0x2d
        // (alias/overlap) Asphalt = 0x30
        uint8_t _pad_0x32[0x1]; // +0x32
        uint64_t Cobblestone; // +0x33
        // (alias/overlap) Ice = 0x36
        // (alias/overlap) LeafyGrass = 0x39
        uint8_t _pad_0x3b[0x1]; // +0x3b
        uint64_t Salt; // +0x3c
        // (alias/overlap) Limestone = 0x3f
        // (alias/overlap) Pavement = 0x42
    }; // sizeof(MaterialColors) >= 0x44

    // ========================================================
    // MaterialLayer
    // ========================================================
    struct MaterialLayer {
        uint8_t _pad_0x0[0x11]; // +0x0
        uint64_t FillModeByte; // +0x11
        // (alias/overlap) MatFlags = 0x18
        uint8_t _pad_0x19[0x3]; // +0x19
        uint64_t Param; // +0x1c
        // (alias/overlap) Flags2 = 0x20
        uint64_t ColorData; // +0x24
        uint8_t _pad_0x2c[0x5c]; // +0x2c
        uint64_t Stride; // +0x88
    }; // sizeof(MaterialLayer) >= 0x90

    // ========================================================
    // MeshContentProvider
    // ========================================================
    struct MeshContentProvider {
        uint8_t _pad_0x0[0x10]; // +0x0
        uint64_t AssetID; // +0x10
        uint8_t _pad_0x18[0x8]; // +0x18
        uint64_t LRUCache; // +0x20
        uint8_t _pad_0x28[0x18]; // +0x28
        uint64_t MeshData; // +0x40
        // (alias/overlap) ToMeshData = 0x40
        uint8_t _pad_0x48[0x90]; // +0x48
        uint64_t Cache; // +0xd8
    }; // sizeof(MeshContentProvider) >= 0xe0

    // ========================================================
    // MeshData
    // ========================================================
    struct MeshData {
        uint8_t _pad_0x0[0x8]; // +0x0
        uint64_t VertexStart; // +0x8
        uint64_t VertexEnd; // +0x10
        uint8_t _pad_0x18[0x18]; // +0x18
        uint64_t FaceStart; // +0x30
        uint64_t FaceEnd; // +0x38
    }; // sizeof(MeshData) >= 0x40

    // ========================================================
    // MeshPart
    // ========================================================
    struct MeshPart {
        uint8_t _pad_0x0[0x308]; // +0x0
        uint64_t MeshId; // +0x308
        uint8_t _pad_0x310[0x28]; // +0x310
        uint64_t Texture; // +0x338
        // (alias/overlap) TextureId = 0x338
    }; // sizeof(MeshPart) >= 0x340

    // ========================================================
    // Misc
    // ========================================================
    struct Misc {
        uint8_t _pad_0x0[0x10]; // +0x0
        uint64_t StringLength; // +0x10
        uint8_t _pad_0x18[0xa0]; // +0x18
        uint64_t Value; // +0xb8
    }; // sizeof(Misc) >= 0xc0

    // ========================================================
    // Model
    // ========================================================
    struct Model {
        uint8_t _pad_0x0[0x144]; // +0x0
        uint64_t Scale; // +0x144
        uint8_t _pad_0x14c[0x10c]; // +0x14c
        uint64_t PrimaryPart; // +0x258
    }; // sizeof(Model) >= 0x260

    // ========================================================
    // ModuleScript
    // ========================================================
    struct ModuleScript {
        uint8_t _pad_0x0[0x138]; // +0x0
        uint64_t ByteCode; // +0x138
        uint8_t _pad_0x140[0x8]; // +0x140
        uint64_t Hash; // +0x148
        uint8_t _pad_0x150[0x10]; // +0x150
        uint64_t IsCoreScript; // +0x160
        uint8_t _pad_0x168[0x1258]; // +0x168
        uint64_t IsRobloxScript; // +0x13c0
    }; // sizeof(ModuleScript) >= 0x13c8

    // ========================================================
    // MouseService
    // ========================================================
    struct MouseService {
        uint8_t _pad_0x0[0xd4]; // +0x0
        uint64_t MousePosition; // +0xd4
        uint8_t _pad_0xdc[0x14]; // +0xdc
        uint64_t InputObject; // +0xf0
        uint8_t _pad_0xf8[0x8]; // +0xf8
        uint64_t InputObject2; // +0x100
        uint8_t _pad_0x108[0x1c0]; // +0x108
        uint64_t SensitivityPointer; // +0x2c8
    }; // sizeof(MouseService) >= 0x2d0

    // ========================================================
    // ParticleEmitter
    // ========================================================
    struct ParticleEmitter {
        uint8_t _pad_0x0[0x1c0]; // +0x0
        uint64_t Texture; // +0x1c0
        uint8_t _pad_0x1c8[0x54]; // +0x1c8
        uint64_t Brightness; // +0x21c
        // (alias/overlap) Drag = 0x220
        uint8_t _pad_0x224[0x14]; // +0x224
        uint64_t LightEmission; // +0x238
        // (alias/overlap) LightInfluence = 0x23c
        uint8_t _pad_0x240[0x8]; // +0x240
        uint64_t Rate; // +0x248
        uint8_t _pad_0x250[0xc]; // +0x250
        uint64_t TimeScale; // +0x25c
        // (alias/overlap) VelocityInheritance = 0x260
        uint64_t ZOffset; // +0x264
    }; // sizeof(ParticleEmitter) >= 0x26c

    // ========================================================
    // Player
    // ========================================================
    struct Player {
        uint8_t _pad_0x0[0x130]; // +0x0
        uint64_t LocalPlayer; // +0x130
        uint64_t DisplayName; // +0x138
        uint8_t _pad_0x140[0x158]; // +0x140
        uint64_t Character; // +0x298
        // (alias/overlap) ModelInstance = 0x298
        uint8_t _pad_0x2a0[0x38]; // +0x2a0
        uint64_t Team; // +0x2d8
        uint8_t _pad_0x2e0[0x20]; // +0x2e0
        uint64_t UserId; // +0x300
        uint8_t _pad_0x308[0x54]; // +0x308
        uint64_t AccountAge; // +0x35c
        uint8_t _pad_0x364[0x4]; // +0x364
        uint64_t MaxZoomDistance; // +0x368
        // (alias/overlap) MinZoomDistance = 0x36c
        uint64_t CameraMode; // +0x370
        uint8_t _pad_0x378[0x1c]; // +0x378
        uint64_t HealthDisplayDistance; // +0x394
        uint8_t _pad_0x39c[0x8]; // +0x39c
        uint64_t NameDisplayDistance; // +0x3a4
        uint8_t _pad_0x3ac[0x4]; // +0x3ac
        uint64_t TeamColor; // +0x3b0
        uint8_t _pad_0x3b8[0x388]; // +0x3b8
        uint64_t LocaleId; // +0x740
        uint8_t _pad_0x748[0xaa0]; // +0x748
        uint64_t Mouse; // +0x11e8
    }; // sizeof(Player) >= 0x11f0

    // ========================================================
    // Players
    // ========================================================
    struct Players {
        uint8_t _pad_0x0[0x130]; // +0x0
        uint64_t LocalPlayer; // +0x130
    }; // sizeof(Players) >= 0x138

    // ========================================================
    // Primitive
    // ========================================================
    struct Primitive {
        uint8_t _pad_0x0[0x6]; // +0x0
        uint64_t Validate; // +0x6
        // (alias/overlap) PropertyPosition = 0x8
        uint8_t _pad_0xe[0xa]; // +0xe
        uint64_t Properties; // +0x18
        uint8_t _pad_0x20[0xa8]; // +0x20
        uint64_t CFrame; // +0xc8
        // (alias/overlap) Orientation = 0xc8
        // (alias/overlap) Rotation = 0xc8
        uint8_t _pad_0xd0[0x1c]; // +0xd0
        uint64_t Position; // +0xec
        uint8_t _pad_0xf4[0x4]; // +0xf4
        uint64_t AssemblyLinearVelocity; // +0xf8
        uint8_t _pad_0x100[0x4]; // +0x100
        uint64_t AssemblyAngularVelocity; // +0x104
        uint8_t _pad_0x10c[0xaa]; // +0x10c
        uint64_t Flags; // +0x1b6
        // (alias/overlap) PrimitiveFlags = 0x1b6
        // (alias/overlap) Size = 0x1bc
        uint8_t _pad_0x1be[0x52]; // +0x1be
        uint64_t Owner; // +0x210
        uint8_t _pad_0x218[0x2e]; // +0x218
        uint64_t Material; // +0x246
    }; // sizeof(Primitive) >= 0x24e

    // ========================================================
    // PrimitiveFlags
    // ========================================================
    struct PrimitiveFlags {
        uint8_t _pad_0x0[0x2]; // +0x0
        uint64_t Anchored; // +0x2
        // (alias/overlap) CanCollide = 0x8
        uint8_t _pad_0xa[0x6]; // +0xa
        uint64_t CanTouch; // +0x10
        uint8_t _pad_0x18[0x8]; // +0x18
        uint64_t CanQuery; // +0x20
    }; // sizeof(PrimitiveFlags) >= 0x28

    // ========================================================
    // ProximityPrompt
    // ========================================================
    struct ProximityPrompt {
        uint8_t _pad_0x0[0x130]; // +0x0
        uint64_t RequiresLineOfSight; // +0x130
        // (alias/overlap) Enabled = 0x134
    }; // sizeof(ProximityPrompt) >= 0x138

    // ========================================================
    // Reflection
    // ========================================================
    // Function Pointers / Static RVAs:
    //   CreatorTable = 0x87c8b48
    //   NameRegistry = 0x86c8e08

    struct Reflection {
        uint8_t _pad_0x0[0x8]; // +0x0
        uint64_t EntryValue; // +0x8
        // (alias/overlap) TableEnd = 0x8
        uint64_t ClassDescCreatable; // +0x10
        // (alias/overlap) TableStart = 0x10
        // (alias/overlap) TableStride = 0x10
        uint8_t _pad_0x18[0x8]; // +0x18
        uint64_t TableEmpty; // +0x20
        uint8_t _pad_0x28[0x28]; // +0x28
        uint64_t NameTable; // +0x50
        uint8_t _pad_0x58[0x164]; // +0x58
        uint64_t ClassDescFlags; // +0x1bc
    }; // sizeof(Reflection) >= 0x1c4

    // ========================================================
    // RenderJob
    // ========================================================
    struct RenderJob {
        uint8_t _pad_0x0[0x38]; // +0x0
        uint64_t FakeDataModel; // +0x38
        uint8_t _pad_0x40[0x78]; // +0x40
        uint64_t FrameDtAlt; // +0xb8
        uint64_t FrameDt; // +0xc0
        uint8_t _pad_0xc8[0x100]; // +0xc8
        uint64_t RealDataModel; // +0x1c8
        uint64_t RenderView; // +0x1d0
    }; // sizeof(RenderJob) >= 0x1d8

    // ========================================================
    // RenderQueue
    // ========================================================
    struct RenderQueue {
        uint64_t Opaque; // +0x0
        // (alias/overlap) Terrain = 0x1
        // (alias/overlap) Decals = 0x2
        // (alias/overlap) OpaqueCasters = 0x3
        // (alias/overlap) OpaqueAdorns = 0x4
        // (alias/overlap) OpaqueWithAlpha = 0x5
        // (alias/overlap) Water = 0x6
        // (alias/overlap) GlassTint = 0x7
        uint64_t Glass; // +0x8
        // (alias/overlap) Transparent = 0x9
        // (alias/overlap) TransparentCasters = 0xa
        // (alias/overlap) OnTopWithDepth = 0xb
        // (alias/overlap) OnTopReadOnlyDepth = 0xc
        // (alias/overlap) AlwaysOnTop = 0xd
        // (alias/overlap) AlwaysOnTopAdorns = 0xe
        // (alias/overlap) Screen = 0xf
        uint64_t ScreenOnTopOfBlur; // +0x10
    }; // sizeof(RenderQueue) >= 0x18

    // ========================================================
    // RenderView
    // ========================================================
    struct RenderView {
        uint8_t _pad_0x0[0x8]; // +0x0
        uint64_t DeviceD3D11; // +0x8
        uint64_t VisualEngine; // +0x10
        uint8_t _pad_0x18[0x210]; // +0x18
        uint64_t LightingValid; // +0x228
        uint8_t _pad_0x230[0x5d]; // +0x230
        uint64_t SkyValid; // +0x28d
        // (alias/overlap) SkyboxValid = 0x28d
    }; // sizeof(RenderView) >= 0x295

    // ========================================================
    // RobloxString
    // ========================================================
    struct RobloxString {
        uint8_t _pad_0x0[0xf]; // +0x0
        uint64_t SsoCapacity; // +0xf
        // (alias/overlap) Size = 0x10
    }; // sizeof(RobloxString) >= 0x17

    // ========================================================
    // RunService
    // ========================================================
    struct RunService {
        uint8_t _pad_0x0[0xec]; // +0x0
        uint64_t HeartbeatFPS; // +0xec
        uint8_t _pad_0xf4[0x5c4]; // +0xf4
        uint64_t HeartbeatTask; // +0x6b8
    }; // sizeof(RunService) >= 0x6c0

    // ========================================================
    // Script
    // ========================================================
    struct Script {
        uint8_t _pad_0x0[0x190]; // +0x0
        uint64_t ByteCode; // +0x190
    }; // sizeof(Script) >= 0x198

    // ========================================================
    // ScriptContext
    // ========================================================
    struct ScriptContext {
        uint8_t _pad_0x0[0x28]; // +0x0
        uint64_t LuaState; // +0x28
        // (alias/overlap) LuaState2 = 0x28
        uint8_t _pad_0x30[0xa0]; // +0x30
        uint64_t VmEncryptedLuaState; // +0xd0
        uint8_t _pad_0xd8[0x10]; // +0xd8
        uint64_t LuaStateAlt; // +0xe8
        uint8_t _pad_0xf0[0x130]; // +0xf0
        uint64_t VmWrapper; // +0x220
        uint8_t _pad_0x228[0x218]; // +0x228
        uint64_t VmWrapperBig; // +0x440
        uint8_t _pad_0x448[0xe0]; // +0x448
        uint64_t VmWrapper2; // +0x528
        uint8_t _pad_0x530[0x470]; // +0x530
        uint64_t RequireBypass; // +0x9a0
    }; // sizeof(ScriptContext) >= 0x9a8

    // ========================================================
    // Seat
    // ========================================================
    struct Seat {
        uint8_t _pad_0x0[0x210]; // +0x0
        uint64_t Occupant; // +0x210
    }; // sizeof(Seat) >= 0x218

    // ========================================================
    // Sky
    // ========================================================
    struct Sky {
        uint8_t _pad_0x0[0xc8]; // +0x0
        uint64_t MoonTextureId; // +0xc8
        uint8_t _pad_0xd0[0x28]; // +0xd0
        uint64_t SkyboxBk; // +0xf8
        uint8_t _pad_0x100[0x28]; // +0x100
        uint64_t SkyboxDn; // +0x128
        uint8_t _pad_0x130[0x28]; // +0x130
        uint64_t SkyboxFt; // +0x158
        uint8_t _pad_0x160[0x28]; // +0x160
        uint64_t SkyboxLf; // +0x188
        uint8_t _pad_0x190[0x28]; // +0x190
        uint64_t SkyboxRt; // +0x1b8
        uint8_t _pad_0x1c0[0x28]; // +0x1c0
        uint64_t SkyboxUp; // +0x1e8
        uint8_t _pad_0x1f0[0x28]; // +0x1f0
        uint64_t SunTextureId; // +0x218
        uint8_t _pad_0x220[0x18]; // +0x220
        uint64_t SkyboxOrientation; // +0x238
        uint8_t _pad_0x240[0x4]; // +0x240
        uint64_t MoonAngularSize; // +0x244
        // (alias/overlap) StarCount = 0x248
        uint64_t SunAngularSize; // +0x24c
    }; // sizeof(Sky) >= 0x254

    // ========================================================
    // Sound
    // ========================================================
    struct Sound {
        uint8_t _pad_0x0[0xc8]; // +0x0
        uint64_t SoundId; // +0xc8
        uint8_t _pad_0xd0[0x4c]; // +0xd0
        uint64_t PlaybackSpeed; // +0x11c
        // (alias/overlap) RollOffMaxDistance = 0x120
        uint64_t RollOffMinDistance; // +0x124
        uint8_t _pad_0x12c[0x4]; // +0x12c
        uint64_t Volume; // +0x130
        uint8_t _pad_0x138[0x5]; // +0x138
        uint64_t Looped; // +0x13d
        // (alias/overlap) IsPlaying = 0x140
    }; // sizeof(Sound) >= 0x145

    // ========================================================
    // SpawnLocation
    // ========================================================
    struct SpawnLocation {
        uint8_t _pad_0x0[0x180]; // +0x0
        uint64_t ForcefieldDuration; // +0x180
        uint64_t AllowTeamChangeOnTouch; // +0x188
    }; // sizeof(SpawnLocation) >= 0x190

    // ========================================================
    // SpecialMesh
    // ========================================================
    struct SpecialMesh {
        uint8_t _pad_0x0[0xb8]; // +0x0
        uint64_t Offset; // +0xb8
        uint8_t _pad_0xc0[0x4]; // +0xc0
        uint64_t Scale; // +0xc4
        uint8_t _pad_0xcc[0x2c]; // +0xcc
        uint64_t MeshId; // +0xf8
        uint8_t _pad_0x100[0x28]; // +0x100
        uint64_t TextureId; // +0x128
    }; // sizeof(SpecialMesh) >= 0x130

    // ========================================================
    // SunRaysEffect
    // ========================================================
    struct SunRaysEffect {
        uint8_t _pad_0x0[0x30]; // +0x0
        uint64_t Enabled; // +0x30
        uint8_t _pad_0x38[0x80]; // +0x38
        uint64_t Intensity; // +0xb8
        // (alias/overlap) Spread = 0xbc
    }; // sizeof(SunRaysEffect) >= 0xc0

    // ========================================================
    // SurfaceAppearance
    // ========================================================
    struct SurfaceAppearance {
        uint8_t _pad_0x0[0xc8]; // +0x0
        uint64_t ColorMap; // +0xc8
        uint8_t _pad_0xd0[0x58]; // +0xd0
        uint64_t MetalnessMap; // +0x128
        uint8_t _pad_0x130[0x28]; // +0x130
        uint64_t NormalMap; // +0x158
        uint8_t _pad_0x160[0x28]; // +0x160
        uint64_t RoughnessMap; // +0x188
        uint8_t _pad_0x190[0x104]; // +0x190
        uint64_t EmissiveStrength; // +0x294
    }; // sizeof(SurfaceAppearance) >= 0x29c

    // ========================================================
    // TaskScheduler
    // ========================================================
    // Function Pointers / Static RVAs:
    //   Pointer = 0x89dd108

    struct TaskScheduler {
        uint8_t _pad_0x0[0x18]; // +0x0
        uint64_t JobName; // +0x18
        uint8_t _pad_0x20[0x90]; // +0x20
        uint64_t MaxFPS; // +0xb0
        // (alias/overlap) MaxFps = 0xb0
        uint8_t _pad_0xb8[0x10]; // +0xb8
        uint64_t JobStart; // +0xc8
        uint64_t JobEnd; // +0xd0
    }; // sizeof(TaskScheduler) >= 0xd8

    // ========================================================
    // Team
    // ========================================================
    struct Team {
        uint8_t _pad_0x0[0xb8]; // +0x0
        uint64_t BrickColor; // +0xb8
        // (alias/overlap) TeamColor = 0xb8
    }; // sizeof(Team) >= 0xc0

    // ========================================================
    // TechniqueArray
    // ========================================================
    struct TechniqueArray {
        uint8_t _pad_0x0[0x8]; // +0x0
        uint64_t BeginOffset; // +0x8
        uint64_t EndOffset; // +0x10
    }; // sizeof(TechniqueArray) >= 0x18

    // ========================================================
    // Terrain
    // ========================================================
    struct Terrain {
        uint8_t _pad_0x0[0x1d8]; // +0x0
        uint64_t WaterColor; // +0x1d8
        uint8_t _pad_0x1e0[0x8]; // +0x1e0
        uint64_t GrassLength; // +0x1e8
        uint64_t WaterReflectance; // +0x1f0
        // (alias/overlap) WaterTransparency = 0x1f4
        uint64_t WaterWaveSize; // +0x1f8
        // (alias/overlap) WaterWaveSpeed = 0x1fc
        uint8_t _pad_0x200[0x290]; // +0x200
        uint64_t MaterialColors; // +0x490
    }; // sizeof(Terrain) >= 0x498

    // ========================================================
    // TextButton
    // ========================================================
    struct TextButton {
        uint8_t _pad_0x0[0x9c4]; // +0x0
        uint64_t AutoButtonColor; // +0x9c4
        // (alias/overlap) Modal = 0x9c5
        // (alias/overlap) Selected = 0x9c6
        uint8_t _pad_0x9cc[0x16]; // +0x9cc
        uint64_t TextScaled; // +0x9e2
        uint8_t _pad_0x9ea[0xf6]; // +0x9ea
        uint64_t TextYAlignment; // +0xae0
        uint8_t _pad_0xae8[0x1b8]; // +0xae8
        uint64_t LineHeight; // +0xca0
        uint8_t _pad_0xca8[0xb8]; // +0xca8
        uint64_t TextXAlignment; // +0xd60
        uint8_t _pad_0xd68[0x30]; // +0xd68
        uint64_t TextWrapped; // +0xd98
        // (alias/overlap) RichText = 0xd9e
        uint8_t _pad_0xda0[0x68]; // +0xda0
        uint64_t ContentText; // +0xe08
        // (alias/overlap) LocalizedText = 0xe08
        // (alias/overlap) Text = 0xe08
        uint8_t _pad_0xe10[0xa4]; // +0xe10
        uint64_t TextStrokeColor3; // +0xeb4
        uint8_t _pad_0xebc[0x8]; // +0xebc
        uint64_t MaxVisibleGraphemes; // +0xec4
        uint8_t _pad_0xecc[0x4]; // +0xecc
        uint64_t TextStrokeTransparency; // +0xed0
        // (alias/overlap) TextTransparency = 0xed4
        uint8_t _pad_0xed8[0x250]; // +0xed8
        uint64_t TextColor3; // +0x1128
        uint8_t _pad_0x1130[0x1c]; // +0x1130
        uint64_t TextSize; // +0x114c
    }; // sizeof(TextButton) >= 0x1154

    // ========================================================
    // TextLabel
    // ========================================================
    struct TextLabel {
        uint8_t _pad_0x0[0x30]; // +0x0
        uint64_t TextYAlignment; // +0x30
        uint8_t _pad_0x38[0x9aa]; // +0x38
        uint64_t TextScaled; // +0x9e2
        uint8_t _pad_0x9ea[0xf6]; // +0x9ea
        uint64_t TextXAlignment; // +0xae0
        uint8_t _pad_0xae8[0xa0]; // +0xae8
        uint64_t ContentText; // +0xb88
        // (alias/overlap) Loca... (7 KB left)
