#pragma once
/* =============================================================
/*                       Spxrkz offsets
/* -------------------------------------------------------------
/*  Roblox Version  : version-ce0bcd0fbd484804
/*  Time Taken      : 555 offsets
/*  Dumped At       : 21:38 18/08/2026 (GMT)
/* =============================================================
*/

#include <cstdint>
#include <string>

namespace Offsets {
    inline std::string ClientVersion = "version-ce0bcd0fbd484804";

    namespace AirProperties {
         inline uintptr_t AirDensity = 0x18;
         inline uintptr_t GlobalWind = 0x3c;
    }

    namespace Alloc {
         inline uintptr_t Malloc = 0x7aa6f0;
    }

    namespace AnimationTrack {
         inline uintptr_t Animation    = 0xb8;
         inline uintptr_t Animator     = 0x108;
         inline uintptr_t IsPlaying    = 0xa50;
         inline uintptr_t Looped       = 0xe5;
         inline uintptr_t Speed        = 0xd4;
         inline uintptr_t TimePosition = 0xd8;
    }

    namespace Animator {
         inline uintptr_t ActiveAnimations = 0xb80;
    }

    namespace Atmosphere {
         inline uintptr_t Color   = 0xb8;
         inline uintptr_t Decay   = 0xc4;
         inline uintptr_t Density = 0xd0;
         inline uintptr_t Glare   = 0xd4;
         inline uintptr_t Haze    = 0xd8;
         inline uintptr_t Offset  = 0xdc;
    }

    namespace Attachment {
         inline uintptr_t Position = 0x80;
    }

    namespace Attribute {
         inline uintptr_t Key          = 0x8;
         inline uintptr_t Size         = 0x58;
         inline uintptr_t TypeIdRva    = 0x872cd74;
         inline uintptr_t TypeIdRvaNew = 0x872cd6c;
         inline uintptr_t Value        = 0x18;
    }

    namespace AttributesMap {
         inline uintptr_t Attributes = 0x10;
         inline uintptr_t Length     = 0x18;
    }

    namespace BasePart {
         inline uintptr_t CastShadow   = 0x135;
         inline uintptr_t Color3       = 0x1a8;
         inline uintptr_t Locked       = 0x136;
         inline uintptr_t Massless     = 0x136;
         inline uintptr_t Primitive    = 0x188;
         inline uintptr_t Reflectance  = 0x10c;
         inline uintptr_t Shape        = 0x1b9;
         inline uintptr_t Transparency = 0x130;
    }

    namespace Beam {
         inline uintptr_t Attachment0    = 0x160;
         inline uintptr_t Attachment1    = 0x160;
         inline uintptr_t Brightness     = 0x180;
         inline uintptr_t CurveSize0     = 0x184;
         inline uintptr_t CurveSize1     = 0x188;
         inline uintptr_t LightEmission  = 0x18c;
         inline uintptr_t LightInfluence = 0x190;
         inline uintptr_t TextureLength  = 0x19c;
         inline uintptr_t TextureSpeed   = 0x1a4;
         inline uintptr_t Width0         = 0x1a8;
         inline uintptr_t Width1         = 0x1ac;
         inline uintptr_t ZOffset        = 0x1b0;
    }

    namespace BloomEffect {
         inline uintptr_t Enabled   = 0x30;
         inline uintptr_t Intensity = 0xb8;
         inline uintptr_t Size      = 0xbc;
         inline uintptr_t Threshold = 0xc0;
    }

    namespace BlurEffect {
         inline uintptr_t Enabled = 0x30;
         inline uintptr_t Size    = 0xb8;
    }

    namespace ByteCode {
         inline uintptr_t Pointer = 0x10;
         inline uintptr_t Size    = 0x28;
    }

    namespace Camera {
         inline uintptr_t CFrame          = 0xd8;
         inline uintptr_t CameraSubject   = 0xc8;
         inline uintptr_t CameraType      = 0x138;
         inline uintptr_t FieldOfView     = 0x140;
         inline uintptr_t Focus           = 0x108;
         inline uintptr_t ImagePlaneDepth = 0x2d4;
         inline uintptr_t Position        = 0xfc;
         inline uintptr_t Rotation        = 0xd8;
         inline uintptr_t Viewport        = 0x28c;
         inline uintptr_t ViewportInt16   = 0x28c;
         inline uintptr_t ViewportSize    = 0x2cc;
    }

    namespace CharacterMesh {
         inline uintptr_t BaseTextureId    = 0xc8;
         inline uintptr_t BodyPart         = 0x148;
         inline uintptr_t MeshId           = 0xf8;
         inline uintptr_t OverlayTextureId = 0x128;
    }

    namespace Chat {
         inline uintptr_t IsFocused = 0x154;
    }

    namespace ClickDetector {
         inline uintptr_t MaxActivationDistance = 0xe8;
         inline uintptr_t MouseIcon             = 0xc8;
    }

    namespace Clothing {
         inline uintptr_t Color3   = 0x100;
         inline uintptr_t Template = 0x100;
    }

    namespace ColorCorrectionEffect {
         inline uintptr_t Brightness = 0xc4;
         inline uintptr_t Contrast   = 0xc8;
         inline uintptr_t Enabled    = 0x30;
         inline uintptr_t TintColor  = 0xb8;
    }

    namespace ColorGradingEffect {
         inline uintptr_t Enabled          = 0x30;
         inline uintptr_t TonemapperPreset = 0xb8;
    }

    namespace DataModel {
         inline uintptr_t CreatorId      = 0x178;
         inline uintptr_t GameId         = 0x180;
         inline uintptr_t GameLoaded     = 0x5c0;
         inline uintptr_t JobId          = 0x118;
         inline uintptr_t PlaceId        = 0x188;
         inline uintptr_t PlaceVersion   = 0x1a4;
         inline uintptr_t PrimitiveCount = 0x408;
         inline uintptr_t ScriptContext  = 0x440;
         inline uintptr_t ServerIP       = 0x5a8;
         inline uintptr_t ToRenderView1  = 0x100;
         inline uintptr_t ToRenderView2  = 0x8;
         inline uintptr_t ToRenderView3  = 0x8;
         inline uintptr_t Workspace      = 0x158;
    }

    namespace DepthOfFieldEffect {
         inline uintptr_t Enabled       = 0x30;
         inline uintptr_t FarIntensity  = 0xb8;
         inline uintptr_t FocusDistance = 0xbc;
         inline uintptr_t InFocusRadius = 0xc0;
         inline uintptr_t NearIntensity = 0xc4;
    }

    namespace DragDetector {
         inline uintptr_t MaxActivationDistance = 0xe8;
         inline uintptr_t MaxDragAngle          = 0x2a8;
         inline uintptr_t MaxForce              = 0x2ac;
         inline uintptr_t MaxTorque             = 0x2b0;
         inline uintptr_t MinDragAngle          = 0x2b4;
         inline uintptr_t Responsiveness        = 0x2c0;
    }

    namespace FFlagList {
         inline uintptr_t Pointer = 0x8705788;
         inline uintptr_t ToFlag  = 0x30;
         inline uintptr_t ToValue = 0xc0;
    }

    namespace FakeDataModel {
         inline uintptr_t Pointer       = 0x8c426f8;
         inline uintptr_t RealDataModel = 0x1d8;
    }

    namespace FastClusterEntity {
         inline uintptr_t AlphaByte              = 0x14;
         inline uintptr_t BBoxMaxX               = 0xa4;
         inline uintptr_t BBoxMaxY               = 0xa8;
         inline uintptr_t BBoxMaxZ               = 0xac;
         inline uintptr_t BBoxMinX               = 0x98;
         inline uintptr_t BBoxMinY               = 0x9c;
         inline uintptr_t BBoxMinZ               = 0xa0;
         inline uintptr_t ContextPtr             = 0x8;
         inline uintptr_t DecalMaterialPtr       = 0x48;
         inline uintptr_t MaterialPtr            = 0x20;
         inline uintptr_t PrimitiveIndexArrayPtr = 0x80;
         inline uintptr_t RenderQueueId          = 0x10;
         inline uintptr_t TechniqueArrayPtr      = 0x70;
         inline uintptr_t VTableRva              = 0x6ae1c10;
    }

    namespace FastClusterEntity::Context {
         inline uintptr_t PrimitivePoolPtr = 0x1a0;
    }

    namespace FastClusterEntity::PrimitivePool {
         inline uintptr_t ArrayBase = 0x20;
    }

    namespace FastClusterEntity::PrimitiveRecord {
         inline uintptr_t Stride      = 0x30;
         inline uintptr_t Translation = 0x24;
    }

    namespace GuiBase2D {
         inline uintptr_t AbsolutePosition = 0x108;
         inline uintptr_t AbsoluteRotation = 0xe8;
         inline uintptr_t AbsoluteSize     = 0x114;
    }

    namespace GuiObject {
         inline uintptr_t Active                 = 0x5a8;
         inline uintptr_t AnchorPoint            = 0x558;
         inline uintptr_t AutomaticSize          = 0x560;
         inline uintptr_t BackgroundColor3       = 0x540;
         inline uintptr_t BackgroundTransparency = 0x558;
         inline uintptr_t BorderColor3           = 0x54c;
         inline uintptr_t BorderMode             = 0x568;
         inline uintptr_t BorderSizePixel        = 0x560;
         inline uintptr_t ClipsDescendants       = 0x5a9;
         inline uintptr_t Interactable           = 0x5a8;
         inline uintptr_t LayoutOrder            = 0x580;
         inline uintptr_t Position               = 0x510;
         inline uintptr_t Rotation               = 0x598;
         inline uintptr_t Selectable             = 0x5ac;
         inline uintptr_t SelectionOrder         = 0x59c;
         inline uintptr_t Size                   = 0x530;
         inline uintptr_t SizeConstraint         = 0x568;
         inline uintptr_t Text                   = 0xdf0;
         inline uintptr_t TextColor3             = 0xea0;
         inline uintptr_t Visible                = 0x5ad;
         inline uintptr_t ZIndex                 = 0x5a4;
    }

    namespace Humanoid {
         inline uintptr_t AutoJumpEnabled         = 0x1d4;
         inline uintptr_t AutoRotate              = 0x1d5;
         inline uintptr_t AutomaticScalingEnabled = 0x1d6;
         inline uintptr_t BreakJointsOnDeath      = 0x1d7;
         inline uintptr_t CameraOffset            = 0x128;
         inline uintptr_t DisplayDistanceType     = 0x180;
         inline uintptr_t DisplayName             = 0xb8;
         inline uintptr_t EvaluateStateMachine    = 0x1d8;
         inline uintptr_t FloorMaterial           = 0x1b8;
         inline uintptr_t Health                  = 0x190;
         inline uintptr_t HealthDisplayDistance   = 0x188;
         inline uintptr_t HealthDisplayType       = 0x18c;
         inline uintptr_t HipHeight               = 0x194;
         inline uintptr_t HumanoidRootPart        = 0x478;
         inline uintptr_t HumanoidState           = 0x898;
         inline uintptr_t HumanoidStateID         = 0x20;
         inline uintptr_t IsWalking               = 0x93f;
         inline uintptr_t Jump                    = 0x1da;
         inline uintptr_t JumpHeight              = 0x1a0;
         inline uintptr_t JumpPower               = 0x1a4;
         inline uintptr_t MaxHealth               = 0x1a8;
         inline uintptr_t MaxSlopeAngle           = 0x1ac;
         inline uintptr_t MoveDirection           = 0x100;
         inline uintptr_t MoveToPart              = 0x478;
         inline uintptr_t MoveToPoint             = 0x164;
         inline uintptr_t NameDisplayDistance     = 0x1b0;
         inline uintptr_t NameOcclusion           = 0x1b4;
         inline uintptr_t PlatformStand           = 0x1dc;
         inline uintptr_t PlatformStatePointer    = 0x468;
         inline uintptr_t RequiresNeck            = 0x1dd;
         inline uintptr_t RigType                 = 0x1c0;
         inline uintptr_t SeatPart                = 0x108;
         inline uintptr_t Sit                     = 0x1de;
         inline uintptr_t TargetPoint             = 0x14c;
         inline uintptr_t UseJumpPower            = 0x1e0;
         inline uintptr_t WalkSpeed               = 0x1d0;
         inline uintptr_t WalkSpeedCheck          = 0x3bc;
         inline uintptr_t WalkTimer               = 0x408;
         inline uintptr_t WalkToPoint             = 0x164;
         inline uintptr_t Walkspeed               = 0x1d0;
         inline uintptr_t WalkspeedCheck          = 0x3bc;
    }

    namespace InputObject {
         inline uintptr_t MousePosition = 0xd4;
    }

    namespace Instance {
         inline uintptr_t AttributeContainer  = 0x40;
         inline uintptr_t AttributeList       = 0x48;
         inline uintptr_t AttributeToNext     = 0x58;
         inline uintptr_t AttributeToValue    = 0x18;
         inline uintptr_t Children            = 0x78;
         inline uintptr_t ChildrenEnd         = 0x80;
         inline uintptr_t ChildrenStart       = 0x78;
         inline uintptr_t ChildrenStride      = 0x10;
         inline uintptr_t ClassBase           = 0x1b0;
         inline uintptr_t ClassByName         = 0x46a3ab0;
         inline uintptr_t ClassDescriptor     = 0x18;
         inline uintptr_t ClassName           = 0x8;
         inline uintptr_t ComponentMap        = 0x38;
         inline uintptr_t Creator_create      = 0x0;
         inline uintptr_t Creator_isCreatable = 0x10;
         inline uintptr_t FromExisting        = 0x40ab420;
         inline uintptr_t Name                = 0x8;
         inline uintptr_t NameContainer       = 0x70;
         inline uintptr_t New                 = 0x40aa7d0;
         inline uintptr_t Parent              = 0x68;
         inline uintptr_t SetParent           = 0x1bf70d0;
         inline uintptr_t This                = 0x10;
         inline uintptr_t WhJobNopSlot        = 0x50;
    }

    namespace Lighting {
         inline uintptr_t Ambient                  = 0xd0;
         inline uintptr_t Atmosphere               = 0x1d8;
         inline uintptr_t Brightness               = 0x118;
         inline uintptr_t ClockTime                = 0xc8;
         inline uintptr_t ColorShift_Bottom        = 0xdc;
         inline uintptr_t ColorShift_Top           = 0xe8;
         inline uintptr_t EnvironmentDiffuseScale  = 0x11c;
         inline uintptr_t EnvironmentSpecularScale = 0x120;
         inline uintptr_t ExposureCompensation     = 0x124;
         inline uintptr_t FogColor                 = 0xf4;
         inline uintptr_t FogEnd                   = 0x12c;
         inline uintptr_t FogStart                 = 0x130;
         inline uintptr_t GeographicLatitude       = 0x134;
         inline uintptr_t GlobalShadows            = 0x144;
         inline uintptr_t GradientBottom           = 0x138;
         inline uintptr_t GradientTop              = 0x150;
         inline uintptr_t LightColor               = 0x15c;
         inline uintptr_t LightDirection           = 0x168;
         inline uintptr_t MoonPosition             = 0x184;
         inline uintptr_t OutdoorAmbient           = 0x100;
         inline uintptr_t ShadowSoftness           = 0x13c;
         inline uintptr_t Sky                      = 0x1c8;
         inline uintptr_t Source                   = 0x174;
         inline uintptr_t SunPosition              = 0x178;
    }

    namespace LightingParameters {
         inline uintptr_t GeographicLatitude = 0x134;
         inline uintptr_t LightColor         = 0x15c;
         inline uintptr_t LightDirection     = 0x168;
         inline uintptr_t SkyAmbient         = 0x150;
         inline uintptr_t SkyAmbient2        = 0x138;
         inline uintptr_t Source             = 0x174;
         inline uintptr_t TrueMoonPosition   = 0x184;
         inline uintptr_t TrueSunPosition    = 0x178;
    }

    namespace LocalScript {
         inline uintptr_t ByteCode = 0x190;
         inline uintptr_t Hash     = 0x1a0;
    }

    namespace LuaState {
         inline uintptr_t Base    = 0x28;
         inline uintptr_t Global  = 0x20;
         inline uintptr_t Top     = 0x8;
         inline uintptr_t TypeTag = 0x4;
    }

    namespace LuauGlobal {
         inline uintptr_t GCthreshold        = 0x48;
         inline uintptr_t currentwhite       = 0x58;
         inline uintptr_t dummynode          = 0x626d660;
         inline uintptr_t gcopages           = 0x2f0;
         inline uintptr_t gcopages_end       = 0x2f8;
         inline uintptr_t gcopages_large     = 0x300;
         inline uintptr_t gcopages_sizeclass = 0x308;
         inline uintptr_t gcpause            = 0x38;
         inline uintptr_t gcstate            = 0x59;
         inline uintptr_t gcstepmul          = 0x3c;
         inline uintptr_t gcstepsize         = 0x40;
         inline uintptr_t gray               = 0x10;
         inline uintptr_t grayagain          = 0x18;
         inline uintptr_t page_next_all      = 0x8;
         inline uintptr_t page_next_free     = 0x18;
         inline uintptr_t strt_hash          = 0x68;
         inline uintptr_t strt_size          = 0xc;
         inline uintptr_t totalbytes         = 0x50;
         inline uintptr_t weak               = 0x20;
    }

    namespace LuauObject {
         inline uintptr_t marked          = 0x2;
         inline uintptr_t page_block      = 0x24;
         inline uintptr_t page_data       = 0x40;
         inline uintptr_t page_next       = 0x8;
         inline uintptr_t page_size       = 0x20;
         inline uintptr_t table_array     = 0x28;
         inline uintptr_t table_gclist    = 0x20;
         inline uintptr_t table_lsz       = 0x34;
         inline uintptr_t table_node      = 0x18;
         inline uintptr_t table_sizearray = 0x10;
         inline uintptr_t tt              = 0x4;
    }

    namespace MaterialColors {
         inline uintptr_t Asphalt     = 0x30;
         inline uintptr_t Basalt      = 0x27;
         inline uintptr_t Brick       = 0xf;
         inline uintptr_t Cobblestone = 0x33;
         inline uintptr_t Concrete    = 0xc;
         inline uintptr_t CrackedLava = 0x2d;
         inline uintptr_t Glacier     = 0x1b;
         inline uintptr_t Grass       = 0x6;
         inline uintptr_t Ground      = 0x2a;
         inline uintptr_t Ice         = 0x36;
         inline uintptr_t LeafyGrass  = 0x39;
         inline uintptr_t Limestone   = 0x3f;
         inline uintptr_t Mud         = 0x24;
         inline uintptr_t Pavement    = 0x42;
         inline uintptr_t Rock        = 0x18;
         inline uintptr_t Salt        = 0x3c;
         inline uintptr_t Sand        = 0x12;
         inline uintptr_t Sandstone   = 0x21;
         inline uintptr_t Slate       = 0x9;
         inline uintptr_t Snow        = 0x1e;
         inline uintptr_t WoodPlanks  = 0x15;
    }

    namespace MaterialLayer {
         inline uintptr_t ColorData    = 0x24;
         inline uintptr_t FillModeByte = 0x11;
         inline uintptr_t Flags2       = 0x20;
         inline uintptr_t MatFlags     = 0x18;
         inline uintptr_t Param        = 0x1c;
         inline uintptr_t Stride       = 0x88;
    }

    namespace MeshContentProvider {
         inline uintptr_t AssetID    = 0x10;
         inline uintptr_t Cache      = 0xd8;
         inline uintptr_t LRUCache   = 0x20;
         inline uintptr_t MeshData   = 0x40;
         inline uintptr_t ToMeshData = 0x40;
    }

    namespace MeshData {
         inline uintptr_t FaceEnd     = 0x38;
         inline uintptr_t FaceStart   = 0x30;
         inline uintptr_t VertexEnd   = 0x10;
         inline uintptr_t VertexStart = 0x8;
    }

    namespace MeshPart {
         inline uintptr_t MeshId    = 0x308;
         inline uintptr_t Texture   = 0x338;
         inline uintptr_t TextureId = 0x338;
    }

    namespace Misc {
         inline uintptr_t StringLength = 0x10;
         inline uintptr_t Value        = 0xb8;
    }

    namespace Model {
         inline uintptr_t PrimaryPart = 0x258;
         inline uintptr_t Scale       = 0x144;
    }

    namespace ModuleScript {
         inline uintptr_t ByteCode       = 0x138;
         inline uintptr_t Hash           = 0x148;
         inline uintptr_t IsCoreScript   = 0x160;
         inline uintptr_t IsRobloxScript = 0x13c0;
    }

    namespace MouseService {
         inline uintptr_t InputObject        = 0xf0;
         inline uintptr_t InputObject2       = 0x100;
         inline uintptr_t MousePosition      = 0xd4;
         inline uintptr_t SensitivityPointer = 0x2c8;
    }

    namespace ParticleEmitter {
         inline uintptr_t Brightness          = 0x21c;
         inline uintptr_t Drag                = 0x220;
         inline uintptr_t LightEmission       = 0x238;
         inline uintptr_t LightInfluence      = 0x23c;
         inline uintptr_t Rate                = 0x248;
         inline uintptr_t Texture             = 0x1c0;
         inline uintptr_t TimeScale           = 0x25c;
         inline uintptr_t VelocityInheritance = 0x260;
         inline uintptr_t ZOffset             = 0x264;
    }

    namespace Player {
         inline uintptr_t AccountAge            = 0x35c;
         inline uintptr_t CameraMode            = 0x370;
         inline uintptr_t Character             = 0x298;
         inline uintptr_t DisplayName           = 0x138;
         inline uintptr_t HealthDisplayDistance = 0x394;
         inline uintptr_t LocalPlayer           = 0x130;
         inline uintptr_t LocaleId              = 0x740;
         inline uintptr_t MaxZoomDistance       = 0x368;
         inline uintptr_t MinZoomDistance       = 0x36c;
         inline uintptr_t ModelInstance         = 0x298;
         inline uintptr_t Mouse                 = 0x11e8;
         inline uintptr_t NameDisplayDistance   = 0x3a4;
         inline uintptr_t Team                  = 0x2d8;
         inline uintptr_t TeamColor             = 0x3b0;
         inline uintptr_t UserId                = 0x300;
    }

    namespace Players {
         inline uintptr_t LocalPlayer = 0x130;
    }

    namespace Primitive {
         inline uintptr_t AssemblyAngularVelocity = 0x104;
         inline uintptr_t AssemblyLinearVelocity  = 0xf8;
         inline uintptr_t CFrame                  = 0xc8;
         inline uintptr_t Flags                   = 0x1b6;
         inline uintptr_t Material                = 0x246;
         inline uintptr_t Orientation             = 0xc8;
         inline uintptr_t Owner                   = 0x210;
         inline uintptr_t Position                = 0xec;
         inline uintptr_t PrimitiveFlags          = 0x1b6;
         inline uintptr_t Properties              = 0x18;
         inline uintptr_t PropertyPosition        = 0x8;
         inline uintptr_t Rotation                = 0xc8;
         inline uintptr_t Size                    = 0x1bc;
         inline uintptr_t Validate                = 0x6;
    }

    namespace PrimitiveFlags {
         inline uintptr_t Anchored   = 0x2;
         inline uintptr_t CanCollide = 0x8;
         inline uintptr_t CanQuery   = 0x20;
         inline uintptr_t CanTouch   = 0x10;
    }

    namespace ProximityPrompt {
         inline uintptr_t Enabled             = 0x134;
         inline uintptr_t RequiresLineOfSight = 0x130;
    }

    namespace Reflection {
         inline uintptr_t ClassDescCreatable = 0x10;
         inline uintptr_t ClassDescFlags     = 0x1bc;
         inline uintptr_t CreatorTable       = 0x87c8b48;
         inline uintptr_t EntryValue         = 0x8;
         inline uintptr_t NameRegistry       = 0x86c8e08;
         inline uintptr_t NameTable          = 0x50;
         inline uintptr_t TableEmpty         = 0x20;
         inline uintptr_t TableEnd           = 0x8;
         inline uintptr_t TableStart         = 0x10;
         inline uintptr_t TableStride        = 0x10;
    }

    namespace RenderJob {
         inline uintptr_t FakeDataModel = 0x38;
         inline uintptr_t FrameDt       = 0xc0;
         inline uintptr_t FrameDtAlt    = 0xb8;
         inline uintptr_t RealDataModel = 0x1c8;
         inline uintptr_t RenderView    = 0x1d0;
    }

    namespace RenderQueue {
         inline uintptr_t AlwaysOnTop        = 0xd;
         inline uintptr_t AlwaysOnTopAdorns  = 0xe;
         inline uintptr_t Decals             = 0x2;
         inline uintptr_t Glass              = 0x8;
         inline uintptr_t GlassTint          = 0x7;
         inline uintptr_t OnTopReadOnlyDepth = 0xc;
         inline uintptr_t OnTopWithDepth     = 0xb;
         inline uintptr_t Opaque             = 0x0;
         inline uintptr_t OpaqueAdorns       = 0x4;
         inline uintptr_t OpaqueCasters      = 0x3;
         inline uintptr_t OpaqueWithAlpha    = 0x5;
         inline uintptr_t Screen             = 0xf;
         inline uintptr_t ScreenOnTopOfBlur  = 0x10;
         inline uintptr_t Terrain            = 0x1;
         inline uintptr_t Transparent        = 0x9;
         inline uintptr_t TransparentCasters = 0xa;
         inline uintptr_t Water              = 0x6;
    }

    namespace RenderView {
         inline uintptr_t DeviceD3D11   = 0x8;
         inline uintptr_t LightingValid = 0x228;
         inline uintptr_t SkyValid      = 0x28d;
         inline uintptr_t SkyboxValid   = 0x28d;
         inline uintptr_t VisualEngine  = 0x10;
    }

    namespace RobloxString {
         inline uintptr_t Size        = 0x10;
         inline uintptr_t SsoCapacity = 0xf;
    }

    namespace RunService {
         inline uintptr_t HeartbeatFPS  = 0xec;
         inline uintptr_t HeartbeatTask = 0x6b8;
    }

    namespace Script {
         inline uintptr_t ByteCode = 0x190;
    }

    namespace ScriptContext {
         inline uintptr_t LuaState            = 0x28;
         inline uintptr_t LuaState2           = 0x28;
         inline uintptr_t LuaStateAlt         = 0xe8;
         inline uintptr_t RequireBypass       = 0x9a0;
         inline uintptr_t VmEncryptedLuaState = 0xd0;
         inline uintptr_t VmWrapper           = 0x220;
         inline uintptr_t VmWrapper2          = 0x528;
         inline uintptr_t VmWrapperBig        = 0x440;
    }

    namespace Seat {
         inline uintptr_t Occupant = 0x210;
    }

    namespace Sky {
         inline uintptr_t MoonAngularSize   = 0x244;
         inline uintptr_t MoonTextureId     = 0xc8;
         inline uintptr_t SkyboxBk          = 0xf8;
         inline uintptr_t SkyboxDn          = 0x128;
         inline uintptr_t SkyboxFt          = 0x158;
         inline uintptr_t SkyboxLf          = 0x188;
         inline uintptr_t SkyboxOrientation = 0x238;
         inline uintptr_t SkyboxRt          = 0x1b8;
         inline uintptr_t SkyboxUp          = 0x1e8;
         inline uintptr_t StarCount         = 0x248;
         inline uintptr_t SunAngularSize    = 0x24c;
         inline uintptr_t SunTextureId      = 0x218;
    }

    namespace Sound {
         inline uintptr_t IsPlaying          = 0x140;
         inline uintptr_t Looped             = 0x13d;
         inline uintptr_t PlaybackSpeed      = 0x11c;
         inline uintptr_t RollOffMaxDistance = 0x120;
         inline uintptr_t RollOffMinDistance = 0x124;
         inline uintptr_t SoundId            = 0xc8;
         inline uintptr_t Volume             = 0x130;
    }

    namespace SpawnLocation {
         inline uintptr_t AllowTeamChangeOnTouch = 0x188;
         inline uintptr_t ForcefieldDuration     = 0x180;
    }

    namespace SpecialMesh {
         inline uintptr_t MeshId    = 0xf8;
         inline uintptr_t Offset    = 0xb8;
         inline uintptr_t Scale     = 0xc4;
         inline uintptr_t TextureId = 0x128;
    }

    namespace SunRaysEffect {
         inline uintptr_t Enabled   = 0x30;
         inline uintptr_t Intensity = 0xb8;
         inline uintptr_t Spread    = 0xbc;
    }

    namespace SurfaceAppearance {
         inline uintptr_t ColorMap         = 0xc8;
         inline uintptr_t EmissiveStrength = 0x294;
         inline uintptr_t MetalnessMap     = 0x128;
         inline uintptr_t NormalMap        = 0x158;
         inline uintptr_t RoughnessMap     = 0x188;
    }

    namespace TaskScheduler {
         inline uintptr_t JobEnd   = 0xd0;
         inline uintptr_t JobName  = 0x18;
         inline uintptr_t JobStart = 0xc8;
         inline uintptr_t MaxFPS   = 0xb0;
         inline uintptr_t MaxFps   = 0xb0;
         inline uintptr_t Pointer  = 0x89dd108;
    }

    namespace Team {
         inline uintptr_t BrickColor = 0xb8;
         inline uintptr_t TeamColor  = 0xb8;
    }

    namespace TechniqueArray {
         inline uintptr_t BeginOffset = 0x8;
         inline uintptr_t EndOffset   = 0x10;
    }

    namespace Terrain {
         inline uintptr_t GrassLength       = 0x1e8;
         inline uintptr_t MaterialColors    = 0x490;
         inline uintptr_t WaterColor        = 0x1d8;
         inline uintptr_t WaterReflectance  = 0x1f0;
         inline uintptr_t WaterTransparency = 0x1f4;
         inline uintptr_t WaterWaveSize     = 0x1f8;
         inline uintptr_t WaterWaveSpeed    = 0x1fc;
    }

    namespace TextButton {
         inline uintptr_t AutoButtonColor        = 0x9c4;
         inline uintptr_t ContentText            = 0xe08;
         inline uintptr_t LineHeight             = 0xca0;
         inline uintptr_t LocalizedText          = 0xe08;
         inline uintptr_t MaxVisibleGraphemes    = 0xec4;
         inline uintptr_t Modal                  = 0x9c5;
         inline uintptr_t RichText               = 0xd9e;
         inline uintptr_t Selected               = 0x9c6;
         inline uintptr_t Text                   = 0xe08;
         inline uintptr_t TextColor3             = 0x1128;
         inline uintptr_t TextScaled             = 0x9e2;
         inline uintptr_t TextSize               = 0x114c;
         inline uintptr_t TextStrokeColor3       = 0xeb4;
         inline uintptr_t TextStrokeTransparency = 0xed0;
         inline uintptr_t TextTransparency       = 0xed4;
         inline uintptr_t TextWrapped            = 0xd98;
         inline uintptr_t TextXAlignment         = 0xd60;
         inline uintptr_t TextYAlignment         = 0xae0;
    }

    namespace TextLabel {
         inline uintptr_t ContentText            = 0xb88;
         inline uintptr_t LineHeight             = 0xca0;
         inline uintptr_t LocalizedText          = 0xb88;
         inline uintptr_t MaxVisibleGraphemes    = 0xec4;
         inline uintptr_t RichText               = 0xd9e;
         inline uintptr_t Text                   = 0xb88;
         inline uintptr_t TextColor3             = 0xea8;
         inline uintptr_t TextScaled             = 0x9e2;
         inline uintptr_t TextSize               = 0xecc;
         inline uintptr_t TextStrokeColor3       = 0xeb4;
         inline uintptr_t TextStrokeTransparency = 0xed0;
         inline uintptr_t TextTransparency       = 0xed4;
         inline uintptr_t TextWrapped            = 0xd98;
         inline uintptr_t TextXAlignment         = 0xae0;
         inline uintptr_t TextYAlignment         = 0x30;
    }

    namespace Textures {
         inline uintptr_t Decal_Texture   = 0x180;
         inline uintptr_t Texture_Texture = 0x180;
    }

    namespace Tool {
         inline uintptr_t CanBeDropped         = 0x4b8;
         inline uintptr_t Enabled              = 0x4b9;
         inline uintptr_t Grip                 = 0x488;
         inline uintptr_t GripForward          = 0x4a0;
         inline uintptr_t GripPos              = 0x4ac;
         inline uintptr_t GripRight            = 0x488;
         inline uintptr_t GripUp               = 0x494;
         inline uintptr_t ManualActivationOnly = 0x4ba;
         inline uintptr_t RequiresHandle       = 0x4bb;
         inline uintptr_t Tooltip              = 0x468;
    }

    namespace UserInputService {
         inline uintptr_t WindowInputState = 0x2c0;
    }

    namespace Value {
         inline uintptr_t Value = 0xb8;
    }

    namespace VehicleSeat {
         inline uintptr_t MaxSpeed      = 0x228;
         inline uintptr_t Occupant      = 0x208;
         inline uintptr_t SteerFloat    = 0x22c;
         inline uintptr_t ThrottleFloat = 0x230;
         inline uintptr_t Torque        = 0x234;
         inline uintptr_t TurnSpeed     = 0x238;
    }

    namespace VisualEngine {
         inline uintptr_t Dimensions    = 0xae0;
         inline uintptr_t FakeDataModel = 0xac0;
         inline uintptr_t Pointer       = 0x827dd88;
         inline uintptr_t RenderView    = 0xc00;
         inline uintptr_t ViewMatrix    = 0x180;
    }

    namespace Weld {
         inline uintptr_t Part0 = 0x118;
         inline uintptr_t Part1 = 0x118;
    }

    namespace WeldConstraint {
         inline uintptr_t Part0 = 0xb8;
         inline uintptr_t Part1 = 0xb8;
    }

    namespace WindowInputState {
         inline uintptr_t CapsLock       = 0x40;
         inline uintptr_t CurrentTextBox = 0x48;
    }

    namespace Workspace {
         inline uintptr_t CurrentCamera       = 0x498;
         inline uintptr_t DistributedGameTime = 0x4b8;
         inline uintptr_t ReadOnlyGravity     = 0x9c8;
         inline uintptr_t World               = 0x3f0;
    }

    namespace World {
         inline uintptr_t AirProperties            = 0x220;
         inline uintptr_t FallenPartsDestroyHeight = 0x208;
         inline uintptr_t Gravity                  = 0x210;
         inline uintptr_t Primitives               = 0x290;
         inline uintptr_t WorldSteps               = 0x708;
         inline uintptr_t worldStepsPerSec         = 0x708;
    }

    namespace WorldRoot {
         inline uintptr_t RaycastBoundDesc = 0x8021c50;
         inline uintptr_t RaycastBoundFn   = 0x80;
    }

}
