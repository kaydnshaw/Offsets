#pragma once
// Updated by exact namespace/name matching against the supplied replacement file.
// Original-only entries are retained and marked UNVERIFIED.

#include <cstdint>
#include <string>
namespace Offsets {
    inline std::string ClientVersion = "version-11f155f3450f4c8e";

    namespace AirProperties {
         inline constexpr uintptr_t AirDensity = 0x18;
         inline constexpr uintptr_t GlobalWind = 0x3c;
    }

    namespace Alloc {
         inline constexpr uintptr_t Free = 0x178f5e0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Malloc = 0x799a40; // UNVERIFIED: absent from replacement file.
    }

    namespace AnimationTrack {
         inline constexpr uintptr_t Animation = 0xa8;
         inline constexpr uintptr_t Animator = 0x100;
         inline constexpr uintptr_t IsPlaying = 0xa48;
         inline constexpr uintptr_t Looped = 0xd4;
         inline constexpr uintptr_t Speed = 0xc4;
         inline constexpr uintptr_t TimePosition = 0xc8;
    }

    namespace Animator {
         inline constexpr uintptr_t ActiveAnimations = 0xa80;
    }

    namespace Atmosphere {
         inline constexpr uintptr_t Color = 0xa8;
         inline constexpr uintptr_t Decay = 0xb4;
         inline constexpr uintptr_t Density = 0xc0;
         inline constexpr uintptr_t Glare = 0xc4;
         inline constexpr uintptr_t Haze = 0xc8;
         inline constexpr uintptr_t Offset = 0xcc;
    }

    namespace Attachment {
         inline constexpr uintptr_t Position = 0xb4;
    }

    namespace Attribute {
         inline constexpr uintptr_t Key = 0x0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t KeyString = 0x8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Size = 0x58; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Type = 0x8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TypeIdRva = 0x8d5a030; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TypeIdRvaNew = 0x8aa12d0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Value = 0x18; // UNVERIFIED: absent from replacement file.
    }

    namespace AttributeContainer {
         inline constexpr uintptr_t AttributeList = 0x8; // UNVERIFIED: absent from replacement file.
    }

    namespace AttributesMap {
         inline constexpr uintptr_t Attributes = 0x8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Length = 0x10; // UNVERIFIED: absent from replacement file.
    }

    namespace BasePart {
         inline constexpr uintptr_t CastShadow = 0x128;
         inline constexpr uintptr_t ClusterNode = 0x188; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Color3 = 0x1ac;
         inline constexpr uintptr_t Locked = 0x129;
         inline constexpr uintptr_t Massless = 0x12a;
         inline constexpr uintptr_t Primitive = 0x180;
         inline constexpr uintptr_t Reflectance = 0xfc;
         inline constexpr uintptr_t Shape = 0x1a8;
         inline constexpr uintptr_t Transparency = 0x120;
    }

    namespace Beam {
         inline constexpr uintptr_t Attachment0 = 0x150;
         inline constexpr uintptr_t Attachment1 = 0x160;
         inline constexpr uintptr_t Brightness = 0x170;
         inline constexpr uintptr_t CurveSize0 = 0x174;
         inline constexpr uintptr_t CurveSize1 = 0x178;
         inline constexpr uintptr_t LightEmission = 0x17c;
         inline constexpr uintptr_t LightInfluence = 0x180;
         inline constexpr uintptr_t Texture = 0x130;
         inline constexpr uintptr_t TextureLength = 0x18c;
         inline constexpr uintptr_t TextureSpeed = 0x194;
         inline constexpr uintptr_t Width0 = 0x198;
         inline constexpr uintptr_t Width1 = 0x19c;
         inline constexpr uintptr_t ZOffset = 0x1a0;
    }

    namespace BloomEffect {
         inline constexpr uintptr_t Enabled = 0xa0;
         inline constexpr uintptr_t Intensity = 0xa8;
         inline constexpr uintptr_t Size = 0xac;
         inline constexpr uintptr_t Threshold = 0xb0;
    }

    namespace BlurEffect {
         inline constexpr uintptr_t Enabled = 0xa0;
         inline constexpr uintptr_t Size = 0xa8;
    }

    namespace ByteCode {
         inline constexpr uintptr_t Pointer = 0x18;
         inline constexpr uintptr_t Size = 0x28;
    }

    namespace CachedItem {
         inline constexpr uintptr_t FileMeshData = 0x40;
    }

    namespace Camera {
         inline constexpr uintptr_t CFrame = 0xc8;
         inline constexpr uintptr_t CameraSubject = 0xb8;
         inline constexpr uintptr_t CameraType = 0x28f;
         inline constexpr uintptr_t FieldOfView = 0x130;
         inline constexpr uintptr_t ImagePlaneDepth = 0x2d4;
         inline constexpr uintptr_t Position = 0xec;
         inline constexpr uintptr_t Rotation = 0xc8;
         inline constexpr uintptr_t Viewport = 0x28c;
         inline constexpr uintptr_t ViewportInt16 = 0x28c; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t ViewportSize = 0x2cc;
    }

    namespace CharacterMesh {
         inline constexpr uintptr_t BaseTextureId = 0xb8;
         inline constexpr uintptr_t BodyPart = 0x138;
         inline constexpr uintptr_t MeshId = 0xe8;
         inline constexpr uintptr_t OverlayTextureId = 0x118;
    }

    namespace ClassDescriptor {
         inline constexpr uintptr_t ClassName = 0x8;
         inline constexpr uintptr_t Creator = 0x230; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t EventDescriptors = 0x88;
         inline constexpr uintptr_t FunctionDescriptors = 0xd0;
         inline constexpr uintptr_t PropertyDescriptors = 0x40;
    }

    namespace ClickDetector {
         inline constexpr uintptr_t CursorIcon = 0xb8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t MaxActivationDistance = 0xd8;
         inline constexpr uintptr_t MouseIcon = 0xb8;
    }

    namespace Clothing {
         inline constexpr uintptr_t Color3 = 0x110;
         inline constexpr uintptr_t Template = 0xf0;
    }

    namespace ColorCorrectionEffect {
         inline constexpr uintptr_t Brightness = 0xb4;
         inline constexpr uintptr_t Contrast = 0xb8;
         inline constexpr uintptr_t Enabled = 0xa0;
         inline constexpr uintptr_t TintColor = 0xa8;
    }

    namespace ColorGradingEffect {
         inline constexpr uintptr_t Enabled = 0xa0;
         inline constexpr uintptr_t TonemapperPreset = 0xa8;
    }

    namespace Creator {
         inline constexpr uintptr_t MapEnd = 0x83dec00; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t MapStart = 0x83debf8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t isCreatable = 0x10; // UNVERIFIED: absent from replacement file.
    }

    namespace DataModel {
         inline constexpr uintptr_t CreatorId = 0x178;
         inline constexpr uintptr_t GameId = 0x180;
         inline constexpr uintptr_t GameLoaded = 0x5d0;
         inline constexpr uintptr_t JobId = 0x110;
         inline constexpr uintptr_t PlaceId = 0x188;
         inline constexpr uintptr_t PlaceVersion = 0x1a4;
         inline constexpr uintptr_t PrimitiveCount = 0x418;
         inline constexpr uintptr_t ScriptContext = 0x440;
         inline constexpr uintptr_t ServerIP = 0x5b8;
         inline constexpr uintptr_t ToRenderView1 = 0x1c0;
         inline constexpr uintptr_t ToRenderView2 = 0x8;
         inline constexpr uintptr_t ToRenderView3 = 0x28;
         inline constexpr uintptr_t VTableRva = 0x6f8edb0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Workspace = 0x150;
    }

    namespace DepthOfFieldEffect {
         inline constexpr uintptr_t Enabled = 0xa0;
         inline constexpr uintptr_t FarIntensity = 0xa8;
         inline constexpr uintptr_t FocusDistance = 0xac;
         inline constexpr uintptr_t InFocusRadius = 0xb0;
         inline constexpr uintptr_t NearIntensity = 0xb4;
    }

    namespace Descriptor {
         inline constexpr uintptr_t Name = 0x8;
    }

    namespace DeviceContextD3D11 {
         inline constexpr uintptr_t DrawRecordSlot = 0x1b; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t DrawSlot = 0x1c; // UNVERIFIED: absent from replacement file.
    }

    namespace DeviceD3D11 {
         inline constexpr uintptr_t Context = 0x180; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t ContextObj = 0x1b0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t ContextPtr = 0x180; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t DevicePtr = 0x178; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t SwapChainPtr = 0x80; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t VTableRva = 0x6ebe108; // UNVERIFIED: absent from replacement file.
    }

    namespace DeviceD3D11Gfx {
         inline constexpr uintptr_t VTableRva = 0x6ebfef8;
    }

    namespace DragDetector {
         inline constexpr uintptr_t ActivatedCursorIcon = 0x1b0;
         inline constexpr uintptr_t CursorIcon = 0xb8;
         inline constexpr uintptr_t MaxActivationDistance = 0xd8;
         inline constexpr uintptr_t MaxDragAngle = 0x298;
         inline constexpr uintptr_t MaxDragTranslation = 0x25c;
         inline constexpr uintptr_t MaxForce = 0x29c;
         inline constexpr uintptr_t MaxTorque = 0x2a0;
         inline constexpr uintptr_t MinDragAngle = 0x2a4;
         inline constexpr uintptr_t MinDragTranslation = 0x268;
         inline constexpr uintptr_t ReferenceInstance = 0x1e0;
         inline constexpr uintptr_t Responsiveness = 0x2b0;
    }

    namespace FFlag {
         inline constexpr uintptr_t RenderFastClusterOcclusionCulling4 = 0x8693d50; // UNVERIFIED: absent from replacement file.
    }

    namespace FakeDataModel {
         inline constexpr uintptr_t Pointer = 0x8dc8000;
         inline constexpr uintptr_t RealDataModel = 0x1f8;
    }

    namespace FastCluster {
         inline constexpr uintptr_t BindingSubobject = 0x90; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t DecalMaterialPtr = 0x48; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t EntityAlphaByte = 0x14; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t EntityBBoxMax = 0xa4; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t EntityBBoxMin = 0x98; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t EntityBegin = 0x48; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t EntityEnd = 0x50; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t EntityVTableRva = 0x6f2a0f0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t MaterialColor = 0x24; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t MaterialCullMode = 0x10; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t MaterialFillMode = 0x11; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t MaterialFlags = 0x20; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t MaterialMatFlags = 0x18; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t MaterialParam = 0x1c; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t MaterialPtr = 0x20; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t MaterialStride = 0x88; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t MeshEntityVTableRva = 0x6f2c1a0;
         inline constexpr uintptr_t PartRecordStride = 0x18; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t PartRecords = 0x138; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t PartRecordsEnd = 0x140; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t RenderQueueId = 0x10; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TechniqueArrayPtr = 0x70; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TechniqueEnd = 0x8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TechniqueStride = 0x88; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TransformsView = 0x198; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t VTableRva = 0x6f2ada0;
         inline constexpr uintptr_t VTableRvaSub = 0x6f2ad80;
    }

    namespace FastClusterBinding {
         inline constexpr uintptr_t Owner = 0x60;
         inline constexpr uintptr_t Part = 0x10; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Primitive = 0x8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t VTableRva = 0x6f2c080;
    }

    namespace FastClusterEntity {
         inline constexpr uintptr_t AlphaByte = 0x14;
         inline constexpr uintptr_t BBoxMaxX = 0xa4;
         inline constexpr uintptr_t BBoxMaxY = 0xa8;
         inline constexpr uintptr_t BBoxMaxZ = 0xac;
         inline constexpr uintptr_t BBoxMinX = 0x98;
         inline constexpr uintptr_t BBoxMinY = 0x9c;
         inline constexpr uintptr_t BBoxMinZ = 0xa0;
         inline constexpr uintptr_t Cluster = 0x8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t ContextPtr = 0x8;
         inline constexpr uintptr_t DecalMaterialPtr = 0x48;
         inline constexpr uintptr_t DrawMethodSlot = 0x2; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t MaterialPtr = 0x20;
         inline constexpr uintptr_t MeshVTableRva = 0x6d70d30; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t NextEntity = 0x28; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t PrimitiveIndexArrayPtr = 0x80;
         inline constexpr uintptr_t PrimitivePtr = 0x8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t RenderQueueId = 0x10;
         inline constexpr uintptr_t Stride = 0x28; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TechniqueArrayPtr = 0x70;
         inline constexpr uintptr_t VTableRva = 0x6f2c158;
         inline constexpr uintptr_t VertexBuffer = 0x50; // UNVERIFIED: absent from replacement file.
    }

    namespace FileMeshData {
         inline constexpr uintptr_t AABBMax = 0x18c;
         inline constexpr uintptr_t AABBMin = 0x180;
         inline constexpr uintptr_t AabbMax = 0x18c; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t AabbMin = 0x180; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Faces = 0x30;
         inline constexpr uintptr_t FacesEnd = 0x38;
         inline constexpr uintptr_t Vertices = 0x0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t VerticesEnd = 0x8;
    }

    namespace Fire {
         inline constexpr uintptr_t Enabled = 0xd0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t FireProximityPrompt = 0x30d1720;
         inline constexpr uintptr_t Heat = 0xc8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Size = 0xcc; // UNVERIFIED: absent from replacement file.
    }

    namespace FunctionDescriptor {
         inline constexpr uintptr_t Function = 0x80;
    }

    namespace Functions {
         inline constexpr uintptr_t Clone = 0x433c08b;
         inline constexpr uintptr_t Destroy = 0x18687c0;
         inline constexpr uintptr_t FindPartOnRay = 0xe0fde0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t FindPartOnRayWithIgnoreList = 0xe0fe60; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t FindPartOnRayWithWhitelist = 0xe0fef0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t FireServer = 0x39ae800;
         inline constexpr uintptr_t GlobalCollectGarbage = 0x425c2e0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t GlobalDelay = 0x425cb40; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t GlobalElapsedTime = 0x425d370; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t GlobalGetFenv = 0x42609f0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t GlobalLoadstring = 0x425d3f0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t GlobalPluginManager = 0x425da70; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t GlobalPrint = 0x425dfd0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t GlobalRequire = 0x425e0e0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t GlobalSetFenv = 0x4260b20; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t GlobalSettings = 0x425e5f0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t GlobalSpawn = 0x425eae0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t GlobalStats = 0x425f320; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t GlobalTick = 0x425f850; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t GlobalTime = 0x425f8d0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t GlobalUserSettings = 0x425fad0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t GlobalVersion = 0x425ff50; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t GlobalWait = 0x4260030; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t GlobalWarn = 0x42601e0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Print = 0x1ce58f0;
         inline constexpr uintptr_t PrintIdentity = 0x425dff0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t RaisePropertyChanged = 0xec1b36; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Raycast = 0xe074b0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t SetFFlag = 0x498ce30; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t SetParent = 0xdd7b83; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t SetParentInternal = 0x1d76f10; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Shapecast = 0x2783244;
    }

    namespace GeometryD3D11 {
         inline constexpr uintptr_t VTableRva = 0x6ec0678;
    }

    namespace GuiBase2D {
         inline constexpr uintptr_t AbsolutePosition = 0xfc;
         inline constexpr uintptr_t AbsoluteRotation = 0xd8;
         inline constexpr uintptr_t AbsoluteSize = 0x104;
    }

    namespace GuiObject {
         inline constexpr uintptr_t Active = 0x598; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t AnchorPoint = 0x548; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t AutomaticSize = 0x550; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t BackgroundColor3 = 0x530;
         inline constexpr uintptr_t BackgroundTransparency = 0x53c;
         inline constexpr uintptr_t BorderColor3 = 0x53c;
         inline constexpr uintptr_t BorderMode = 0x558; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t BorderSizePixel = 0x55c; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t ClipsDescendants = 0x599; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t GuiState = 0x568; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Image = 0x9a8;
         inline constexpr uintptr_t Interactable = 0x59b; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t LayoutOrder = 0x56c;
         inline constexpr uintptr_t Position = 0x500;
         inline constexpr uintptr_t RichText = 0xba0;
         inline constexpr uintptr_t Rotation = 0xd8;
         inline constexpr uintptr_t ScreenGui_Enabled = 0x4b4;
         inline constexpr uintptr_t Selectable = 0x59c; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t SelectionOrder = 0x588; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Size = 0x520;
         inline constexpr uintptr_t SizeConstraint = 0x590; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Text = 0xe08;
         inline constexpr uintptr_t TextColor3 = 0xeb8;
         inline constexpr uintptr_t Visible = 0x59d;
         inline constexpr uintptr_t ZIndex = 0x594;
    }

    namespace Highlight {
         inline constexpr uintptr_t Adornee = 0xa8;
         inline constexpr uintptr_t DepthMode = 0xd0;
         inline constexpr uintptr_t Enabled = 0xd8;
         inline constexpr uintptr_t FillColor = 0xb8;
         inline constexpr uintptr_t FillTransparency = 0xd4;
         inline constexpr uintptr_t OutlineColor = 0xc4;
         inline constexpr uintptr_t OutlineTransparency = 0xdc;
         inline constexpr uintptr_t VTableRva = 0x6f505e8; // UNVERIFIED: absent from replacement file.
    }

    namespace HopperBin {
         inline constexpr std::uint32_t BinType = 1112u;
         inline constexpr uintptr_t VTableRva = 0x6f4e260; // UNVERIFIED: absent from replacement file.
    }

    namespace Humanoid {
         inline constexpr uintptr_t AutoJumpEnabled = 0x1d0;
         inline constexpr uintptr_t AutoRotate = 0x1d1;
         inline constexpr uintptr_t AutomaticScalingEnabled = 0x1d2;
         inline constexpr uintptr_t BreakJointsOnDeath = 0x1d3;
         inline constexpr uintptr_t CameraOffset = 0x118;
         inline constexpr uintptr_t DisplayDistanceType = 0x17c;
         inline constexpr uintptr_t DisplayName = 0xa8;
         inline constexpr uintptr_t EvaluateStateMachine = 0x1d4;
         inline constexpr uintptr_t FloorMaterial = 0x180;
         inline constexpr uintptr_t Health = 0x18c;
         inline constexpr uintptr_t HealthDisplayDistance = 0x184;
         inline constexpr uintptr_t HealthDisplayType = 0x188;
         inline constexpr uintptr_t HipHeight = 0x190;
         inline constexpr uintptr_t HumanoidRootPart = 0x468;
         inline constexpr uintptr_t HumanoidState = 0x8b0;
         inline constexpr uintptr_t HumanoidStateID = 0x20;
         inline constexpr uintptr_t IsWalking = 0x956;
         inline constexpr uintptr_t Jump = 0x1d7;
         inline constexpr uintptr_t JumpHeight = 0x19c;
         inline constexpr uintptr_t JumpPower = 0x1a0;
         inline constexpr uintptr_t MaxHealth = 0x1a4;
         inline constexpr uintptr_t MaxSlopeAngle = 0x1a8;
         inline constexpr uintptr_t MoveDirection = 0x13c;
         inline constexpr uintptr_t MoveToPart = 0x108; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t MoveToPoint = 0x160;
         inline constexpr uintptr_t NameDisplayDistance = 0x1ac;
         inline constexpr uintptr_t NameOcclusion = 0x1b0;
         inline constexpr uintptr_t PlatformStand = 0x1d9;
         inline constexpr uintptr_t RequiresNeck = 0x1da;
         inline constexpr uintptr_t RigType = 0x1bc;
         inline constexpr uintptr_t SeatPart = 0xf8;
         inline constexpr uintptr_t Sit = 0x1da;
         inline constexpr uintptr_t TargetPoint = 0x148;
         inline constexpr uintptr_t UseJumpPower = 0x1dd;
         inline constexpr uintptr_t VTableRva = 0x6e89e20; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t WalkSpeed = 0x1cc; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t WalkSpeedCheck = 0x3a4; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t WalkTimer = 0x3f0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t WalkToPoint = 0x1c; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Walkspeed = 0x1cc;
         inline constexpr uintptr_t WalkspeedCheck = 0x3a4;
    }

    namespace InputObject {
         inline constexpr uintptr_t MousePosition = 0x58; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t VTableRva = 0x6f359f0; // UNVERIFIED: absent from replacement file.
    }

    namespace Instance {
         inline constexpr uintptr_t AttributeContainer = 0x38; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t AttributeToNext = 0x58; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t AttributeToValue = 0x18; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t ChildrenEnd = 0x8;
         inline constexpr uintptr_t ChildrenStart = 0x78;
         inline constexpr uintptr_t ChildrenStride = 0x10; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t ClassBase = 0x1b0;
         inline constexpr uintptr_t ClassDescriptor = 0x18;
         inline constexpr uintptr_t ClassName = 0x8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t ComponentMap = 0x38; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Creator_isCreatable = 0x10; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Name = 0x8;
         inline constexpr uintptr_t NameContainer = 0x70;
         inline constexpr uintptr_t Parent = 0x68;
         inline constexpr uintptr_t PushInstance = 0x417a040; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t This = 0x8;
         inline constexpr uintptr_t VTableRva = 0x6ea66f8; // UNVERIFIED: absent from replacement file.
    }

    namespace InstancedBinding {
         inline constexpr uintptr_t Entity = 0x70; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Part = 0x10; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t SpecialMeshVTableRva = 0x6f27c68; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t VTableRva = 0x6f27b10; // UNVERIFIED: absent from replacement file.
    }

    namespace InstancedBinding2 {
         inline constexpr uintptr_t Cluster = 0x68; // UNVERIFIED: absent from replacement file.
    }

    namespace InstancedCluster2 {
         inline constexpr uintptr_t VTableRva = 0x6d5acb0; // UNVERIFIED: absent from replacement file.
    }

    namespace InstancedEntity {
         inline constexpr uintptr_t Bindings = 0x130; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t BindingsEnd = 0x138; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t InstanceData = 0x148; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t InstanceDataEnd = 0x150; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t InstanceStride = 0x70; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t MeshResource = 0x98; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t VTableRva = 0x6f27ac8; // UNVERIFIED: absent from replacement file.
    }

    namespace IntValue {
         inline constexpr uintptr_t Value = 0xa8; // UNVERIFIED: absent from replacement file.
    }

    namespace LRUHolder {
         inline constexpr uintptr_t MemEnforcedLRUCache = 0x20;
    }

    namespace LRUNode {
         inline constexpr uintptr_t AssetID = 0x10;
         inline constexpr uintptr_t CachedItem = 0x40;
    }

    namespace Lighting {
         inline constexpr uintptr_t Ambient = 0xc0;
         inline constexpr uintptr_t Atmosphere = 0x1c8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Brightness = 0x108;
         inline constexpr uintptr_t ClockTime = 0xb8;
         inline constexpr uintptr_t ColorShift_Bottom = 0xd8;
         inline constexpr uintptr_t ColorShift_Top = 0xcc;
         inline constexpr uintptr_t EnvironmentDiffuseScale = 0x10c;
         inline constexpr uintptr_t EnvironmentSpecularScale = 0x110;
         inline constexpr uintptr_t ExposureCompensation = 0x114;
         inline constexpr uintptr_t FogColor = 0x14c;
         inline constexpr uintptr_t FogEnd = 0x11c;
         inline constexpr uintptr_t FogStart = 0x120;
         inline constexpr uintptr_t GeographicLatitude = 0x124;
         inline constexpr uintptr_t GlobalShadows = 0x134;
         inline constexpr uintptr_t GradientBottom = 0x180;
         inline constexpr uintptr_t GradientTop = 0x140;
         inline constexpr uintptr_t LightColor = 0x14c;
         inline constexpr uintptr_t LightDirection = 0x158;
         inline constexpr uintptr_t MoonPosition = 0x174;
         inline constexpr uintptr_t OutdoorAmbient = 0xf0;
         inline constexpr uintptr_t ShadowSoftness = 0xe8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Sky = 0x1b8;
         inline constexpr uintptr_t Source = 0x164;
         inline constexpr uintptr_t SunPosition = 0x168;
         inline constexpr uintptr_t VTableRva = 0x6ef80b0; // UNVERIFIED: absent from replacement file.
    }

    namespace LightingParameters {
         inline constexpr uintptr_t GeographicLatitude = 0x124; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t LightColor = 0x14c; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t LightDirection = 0x158; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t SkyAmbient = 0x140; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t SkyAmbient2 = 0x128; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Source = 0x164; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TrueMoonPosition = 0x174; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TrueSunPosition = 0x168; // UNVERIFIED: absent from replacement file.
    }

    namespace LocalScript {
         inline constexpr uintptr_t ByteCode = 0x180;
         inline constexpr uintptr_t GUID = 0xc0;
         inline constexpr uintptr_t Hash = 0x190;
    }

    namespace LruHolder {
         inline constexpr uintptr_t MemEnforcedLRUCache = 0x20; // UNVERIFIED: absent from replacement file.
    }

    namespace LruNode {
         inline constexpr uintptr_t CachedItem = 0x40; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t MeshId = 0x10; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Next = 0x0; // UNVERIFIED: absent from replacement file.
    }

    namespace Lua {
         inline constexpr uintptr_t BytecodeVerificationTableA = 0x83de9b0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t DummyNode = 0x6500e48; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t GetGlobalState = 0x41921c0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t KTable = 0x827b210; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t LuaVM_Load = 0x4188af0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t NilObject = 0x6504708; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t OpCodeTable = 0x6f7fc40; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TypeNames = 0x6526340; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t dummynode = 0x6500e48; // UNVERIFIED: absent from replacement file.
    }

    namespace LuaB {
         inline constexpr uintptr_t LuaBAssert = 0x26814b0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t LuaBError = 0x2679f90; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t LuaBGcinfo = 0x267fdf0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t LuaBGetfenv = 0x267b540; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t LuaBGetmetatable = 0x267a9d0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t LuaBNewproxy = 0x26823d0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t LuaBNext = 0x2680a00; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t LuaBPrint = 0x2679b30; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t LuaBRawequal = 0x267b830; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t LuaBRawget = 0x267b940; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t LuaBRawlen = 0x267fd50; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t LuaBRawset = 0x267c7b0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t LuaBSelect = 0x2681560; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t LuaBSetfenv = 0x267b600; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t LuaBSetmetatable = 0x267ab60; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t LuaBTonumber = 0x2679c00; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t LuaBTostring = 0x2682370; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t LuaBType = 0x267fe10; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t LuaBTypeof = 0x2680410; // UNVERIFIED: absent from replacement file.
    }

    namespace LuaCoroutine {
         inline constexpr uintptr_t Close = 0x5903f10; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Create = 0x5903580; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t IsYieldable = 0x5903e80; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Running = 0x5903e10; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Status = 0x5901b10; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Wrap = 0x5903b40; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Yield = 0x5903db0; // UNVERIFIED: absent from replacement file.
    }

    namespace LuauGlobal {
         inline constexpr uintptr_t dummynode = 0x6500e48; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t nilobject = 0x6504708; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t page_next_all = 0x8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t page_next_free = 0x18; // UNVERIFIED: absent from replacement file.
    }

    namespace MaterialColors {
         inline constexpr uintptr_t Asphalt = 0x30;
         inline constexpr uintptr_t Basalt = 0x27;
         inline constexpr uintptr_t Brick = 0xf;
         inline constexpr uintptr_t Cobblestone = 0x33;
         inline constexpr uintptr_t Concrete = 0xc;
         inline constexpr uintptr_t CrackedLava = 0x2d;
         inline constexpr uintptr_t Glacier = 0x1b;
         inline constexpr uintptr_t Grass = 0x6;
         inline constexpr uintptr_t Ground = 0x2a;
         inline constexpr uintptr_t Ice = 0x36;
         inline constexpr uintptr_t LeafyGrass = 0x39;
         inline constexpr uintptr_t Limestone = 0x3f;
         inline constexpr uintptr_t Mud = 0x24;
         inline constexpr uintptr_t Pavement = 0x42;
         inline constexpr uintptr_t Rock = 0x18;
         inline constexpr uintptr_t Salt = 0x3c;
         inline constexpr uintptr_t Sand = 0x12;
         inline constexpr uintptr_t Sandstone = 0x21;
         inline constexpr uintptr_t Slate = 0x9;
         inline constexpr uintptr_t Snow = 0x1e;
         inline constexpr uintptr_t WoodPlanks = 0x15;
    }

    namespace MemEnforcedLRUCache {
         inline constexpr uintptr_t Head = 0x8;
    }

    namespace MeshContentProvider {
         inline constexpr uintptr_t LRUHolder = 0xc8;
         inline constexpr uintptr_t LruHolder = 0xc8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t VTableRva = 0x6e56260; // UNVERIFIED: absent from replacement file.
    }

    namespace MeshData {
         inline constexpr uintptr_t FaceEnd = 0x38; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t FaceStart = 0x30; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t VertexEnd = 0x8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t VertexStart = 0x0; // UNVERIFIED: absent from replacement file.
    }

    namespace MeshPart {
         inline constexpr uintptr_t MeshId = 0x300;
         inline constexpr uintptr_t MeshSize = 0x218; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Texture = 0x330;
         inline constexpr uintptr_t TextureId = 0x330; // UNVERIFIED: absent from replacement file.
    }

    namespace MeshResource {
         inline constexpr uintptr_t RangeStride = 0x28; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Ranges = 0xd0; // UNVERIFIED: absent from replacement file.
    }

    namespace Misc {
         inline constexpr uintptr_t Adornee = 0xe0;
         inline constexpr uintptr_t AnimationId = 0xb0;
         inline constexpr uintptr_t BooleanType = 0x6e09978; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t EnableLoadModule = 0x869dbc8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t FLogHookPtr = 0x8a948e0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t LockViolationInstanceCrash = 0x8749848; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t LockViolationScriptCrash = 0x869d9d8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t StringLength = 0x10;
         inline constexpr uintptr_t TLS_IDENTITYSTRUCT = 0x835ad38; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Value = 0xa8;
         inline constexpr uintptr_t vftFuncScriptSlot0 = 0x6dd78a0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t vftFuncScriptSlot1 = 0x6dd7a00; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t vftMessageScriptSlot = 0x6dd7810; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t vftNetworkStream = 0x6ceb2d8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t vftWaitScriptSlot = 0x6dd7660; // UNVERIFIED: absent from replacement file.
    }

    namespace Model {
         inline constexpr uintptr_t PrimaryPart = 0x248;
         inline constexpr uintptr_t Scale = 0x134;
    }

    namespace ModuleScript {
         inline constexpr uintptr_t ByteCode = 0x128;
         inline constexpr uintptr_t GUID = 0xc0;
         inline constexpr uintptr_t Hash = 0x190;
         inline constexpr uintptr_t IsCoreScript = 0x158;
         inline constexpr uintptr_t IsRobloxScript = 0x9a;
         inline constexpr uintptr_t VTableRva = 0x6f96518; // UNVERIFIED: absent from replacement file.
    }

    namespace Mouse {
         inline constexpr uintptr_t HitGetImpl = 0x98; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t HitGetter = 0x8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t MouseProp = 0xa0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t PropertyCount = 0x48; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t PropertyList = 0x40; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t PropertyName = 0x8; // UNVERIFIED: absent from replacement file.
    }

    namespace MouseService {
         inline constexpr uintptr_t InputObject = 0xe0;
         inline constexpr uintptr_t InputObject2 = 0xf0;
         inline constexpr uintptr_t MousePosition = 0xc4;
         inline constexpr uintptr_t VTableRva = 0x6f36b20; // UNVERIFIED: absent from replacement file.
    }

    namespace NumberValue {
         inline constexpr uintptr_t Value = 0xa8; // UNVERIFIED: absent from replacement file.
    }

    namespace ParticleEmitter {
         inline constexpr uintptr_t Acceleration = 0x1d0;
         inline constexpr uintptr_t Brightness = 0x20c;
         inline constexpr uintptr_t Drag = 0x210;
         inline constexpr uintptr_t Enabled = 0x258; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Lifetime = 0x1e4;
         inline constexpr uintptr_t LightEmission = 0x228;
         inline constexpr uintptr_t LightInfluence = 0x22c;
         inline constexpr uintptr_t Rate = 0x238;
         inline constexpr uintptr_t RotSpeed = 0x1ec;
         inline constexpr uintptr_t Rotation = 0x1f4;
         inline constexpr uintptr_t Size = 0xb8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Speed = 0x1fc;
         inline constexpr uintptr_t SpreadAngle = 0x204;
         inline constexpr uintptr_t Squash = 0xf8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Texture = 0x1b0;
         inline constexpr uintptr_t TimeScale = 0x24c;
         inline constexpr uintptr_t Transparency = 0x138; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t VelocityInheritance = 0x250;
         inline constexpr uintptr_t ZOffset = 0x254;
    }

    namespace Player {
         inline constexpr uintptr_t AccountAge = 0x35c;
         inline constexpr uintptr_t CameraMode = 0x370;
         inline constexpr uintptr_t Character = 0x298; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t DisplayName = 0x128;
         inline constexpr uintptr_t HealthDisplayDistance = 0x394;
         inline constexpr uintptr_t LocalPlayer = 0x120;
         inline constexpr uintptr_t LocaleId = 0x788;
         inline constexpr uintptr_t MaxZoomDistance = 0x368;
         inline constexpr uintptr_t MinZoomDistance = 0x36c;
         inline constexpr uintptr_t ModelInstance = 0x298;
         inline constexpr uintptr_t Mouse = 0x1218; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t NameDisplayDistance = 0x3a4;
         inline constexpr uintptr_t Team = 0x2d8;
         inline constexpr uintptr_t TeamColor = 0x3b0;
         inline constexpr uintptr_t UserId = 0xc0;
         inline constexpr uintptr_t VTableRva = 0x6f5b9c0; // UNVERIFIED: absent from replacement file.
    }

    namespace PlayerConfigurer {
         inline constexpr uintptr_t Pointer = 0x8ac0fb0; // UNVERIFIED: absent from replacement file.
    }

    namespace PlayerMouse {
         inline constexpr uintptr_t Icon = 0xb8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Workspace = 0x140; // UNVERIFIED: absent from replacement file.
    }

    namespace Players {
         inline constexpr uintptr_t LocalPlayer = 0x120; // UNVERIFIED: absent from replacement file.
    }

    namespace Primitive {
         inline constexpr uintptr_t AssemblyAngularVelocity = 0xec;
         inline constexpr uintptr_t AssemblyLinearVelocity = 0xe0;
         inline constexpr uintptr_t CFrame = 0xb0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Flags = 0x1be;
         inline constexpr uintptr_t Geometry = 0x210; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Material = 0x24e;
         inline constexpr uintptr_t Orientation = 0xb0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Owner = 0x218;
         inline constexpr uintptr_t Part = 0x218; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Position = 0xd4;
         inline constexpr uintptr_t PrimitiveFlags = 0x1be; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Rotation = 0xb0;
         inline constexpr uintptr_t Size = 0x1c4;
         inline constexpr uintptr_t Validate = 0x6;
    }

    namespace PrimitiveFlags {
         inline constexpr uintptr_t Anchored = 0x2;
         inline constexpr uintptr_t CanCollide = 0x8;
         inline constexpr uintptr_t CanQuery = 0x20;
         inline constexpr uintptr_t CanTouch = 0x10;
    }

    namespace PropertyDescriptor {
         inline constexpr uintptr_t GetSetImpl = 0x98;
         inline constexpr uintptr_t TType = 0x70;
    }

    namespace ProximityPrompt {
         inline constexpr uintptr_t ActionText = 0xa0;
         inline constexpr uintptr_t Enabled = 0x126;
         inline constexpr uintptr_t GamepadKeyCode = 0x10c;
         inline constexpr uintptr_t HoldDuration = 0x110;
         inline constexpr uintptr_t KeyCode = 0x114;
         inline constexpr uintptr_t KeyboardKeyCode = 0x114; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t MaxActivationDistance = 0x118;
         inline constexpr uintptr_t ObjectText = 0xc0;
         inline constexpr uintptr_t RequiresLineOfSight = 0x127;
    }

    namespace RakNet {
         inline constexpr uintptr_t RakPeerVirtualTable = 0x6ec0cd8;
    }

    namespace Raycast {
         inline constexpr uintptr_t RaycastBoundDesc = 0x8364bb0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t RaycastBoundFn = 0x90; // UNVERIFIED: absent from replacement file.
    }

    namespace RbxTransport {
         inline constexpr uintptr_t AppRtti = 0x745e7e0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t AppVTable = 0x6eb3930;
         inline constexpr uintptr_t ClientChannelConfig = 0x3a87510;
         inline constexpr uintptr_t ClientDestructor = 0x3a86c50;
         inline constexpr uintptr_t ClientReceive = 0x3a87330;
         inline constexpr uintptr_t ClientRtti = 0x74fa7c8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t ClientSend = 0x3a86cc0;
         inline constexpr uintptr_t ClientVTable = 0x6f2cc08;
         inline constexpr uintptr_t FailureFallbackToRbxTransport = 0x47b75b5;
         inline constexpr uintptr_t UseRbxTransportClient = 0x3a6cc65;
    }

    namespace Reflection {
         inline constexpr uintptr_t ClassDescCreatable = 0x10; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t ClassDescFlags = 0x1bc; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t CreatorTable = 0x83debf8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t EntryValue = 0x8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t KTable = 0x827b210; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t NameRegistry = 0x827b210; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t NameTable = 0x50; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TableEmpty = 0x20; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TableEnd = 0x8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TableStart = 0x0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TableStride = 0x10; // UNVERIFIED: absent from replacement file.
    }

    namespace ReflectionType {
         inline constexpr uintptr_t AdReward = 0x60; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t AnimTrackMetadata = 0x66; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t AnimTrackPlayState = 0x65; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t AnimTrackWeight = 0x67; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t AnimationContext = 0x54; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t AnimationMask = 0x4d; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t AnimationMaskModifier = 0x5b; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t AnimationPose = 0x4e; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Array = 0x24; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t ArticulatedJoint = 0x53; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t AssetContentMap = 0x61; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Axes = 0x16; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t BinaryString = 0x1e; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Bool = 0x1; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t BrickColor = 0x1c; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Buffer = 0x56; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t CSGPropertyData = 0x48; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t CatalogSearchParams = 0x46; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t CellId = 0x19; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t ClipEvaluator = 0x4f; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t CollectionHandle = 0x20; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Color3 = 0x11; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Color3uint8 = 0x12; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t ColorSequence = 0x2a; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t ColorSequenceKeypoint = 0x2b; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Connection = 0x30; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Content = 0x5c; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t ContentId = 0x31; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t CoordinateFrame = 0x10; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t DateTime = 0x40; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t DebugTable = 0x45; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t DescribedBase = 0x32; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Dictionary = 0x25; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t DockWidgetPluginGuiInfo = 0x38; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Double = 0x5; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Enum = 0x21; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t EventInstance = 0x36; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Faces = 0x15; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t FacsReplicationData = 0x5a; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Float = 0x4; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t FloatCurveKey = 0x3c; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Font = 0x4a; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Function = 0x29; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t GenericFunction = 0x28; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t GuidData = 0x1a; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Instance = 0x8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t InstanceRef = 0x51; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Instances = 0x9; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Int = 0x2; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Int64 = 0x3; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Integer = 0x57; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t LazyTable = 0x44; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Map = 0x26; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t NetAssetHandle = 0x5d; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t NetAssetRef = 0x5e; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Null = 0x0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t NumberRange = 0x2c; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t NumberSequence = 0x2d; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t NumberSequenceKeypoint = 0x2e; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Object = 0x5f; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t OpenCloudModel = 0x50; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t OptionalCoordinateFrame = 0x47; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t OverlapParams = 0x43; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Path2DControlPoint = 0x58; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t PathWaypoint = 0x3b; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t PhysicalProperties = 0x1b; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t PluginDrag = 0x39; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Property = 0x22; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t ProtectedString = 0x7; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Random = 0x3a; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Ray = 0xa; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t RaycastParams = 0x41; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t RaycastResult = 0x42; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Rect2D = 0xf; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t RefType = 0x33; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Region3 = 0x17; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Region3int16 = 0x18; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t ReplicationPV = 0x59; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t RotationCurveKey = 0x3d; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t ScopedInstanceIdentity = 0x68; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Secret = 0x55; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t SecurityCapabilities = 0x52; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t SharedString = 0x3f; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t SharedTable = 0x4b; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t SharedTableIterator = 0x4c; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t SlimReplicationData = 0x62; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t String = 0x6; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Surface = 0x1f; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t SystemAddress = 0x1d; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Tuple = 0x23; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TweenInfo = 0x37; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t UDim = 0x13; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t UDim2 = 0x14; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t UniqueId = 0x49; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t User = 0x63; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t ValueCurveKey = 0x3e; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Variant = 0x27; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Vector2 = 0xb; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Vector2int16 = 0xd; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Vector3 = 0xc; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Vector3int16 = 0xe; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t WebViewParams = 0x64; // UNVERIFIED: absent from replacement file.
    }

    namespace RenderJob {
         inline constexpr uintptr_t FakeDataModel = 0x38;
         inline constexpr uintptr_t RealDataModel = 0x1f0;
         inline constexpr uintptr_t RenderView = 0x1e0;
    }

    namespace RenderView {
         inline constexpr uintptr_t DeviceD3D11 = 0x8;
         inline constexpr uintptr_t LightingValid = 0x278;
         inline constexpr uintptr_t SkyValid = 0x2dc;
         inline constexpr uintptr_t VTableRva = 0x6f25be0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t VisualEngine = 0x18;
    }

    namespace RobloxString {
         inline constexpr uintptr_t Size = 0x10; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t SsoCapacity = 0xf; // UNVERIFIED: absent from replacement file.
    }

    namespace RunService {
         inline constexpr uintptr_t HeartbeatFPS = 0xc8;
         inline constexpr uintptr_t HeartbeatTask = 0xe0;
    }

    namespace Script {
         inline constexpr uintptr_t ByteCode = 0x180;
         inline constexpr uintptr_t GUID = 0xc0;
         inline constexpr uintptr_t Hash = 0x190;
    }

    namespace ScriptContext {
         inline constexpr uintptr_t LuaStateAlt = 0x650; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t RequireBypass = 0xb8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t ToResume = 0x8f0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t VTableRva = 0x6f93730; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t VmEncryptedLuaState = 0x1b0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t VmWrapper = 0x1a0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t VmWrapper2 = 0xdf0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t VmWrapperBig = 0x1a0; // UNVERIFIED: absent from replacement file.
    }

    namespace Seat {
         inline constexpr uintptr_t Occupant = 0x208;
    }

    namespace Sky {
         inline constexpr uintptr_t CelestialBodiesShown = 0x240; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t DrawAdv = 0x3747bc0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t MoonAngularSize = 0x234;
         inline constexpr uintptr_t MoonTextureId = 0xb8;
         inline constexpr uintptr_t SkyboxBk = 0xe8;
         inline constexpr uintptr_t SkyboxDn = 0x118;
         inline constexpr uintptr_t SkyboxFt = 0x148;
         inline constexpr uintptr_t SkyboxLf = 0x178;
         inline constexpr uintptr_t SkyboxOrientation = 0x228;
         inline constexpr uintptr_t SkyboxRt = 0x1a8;
         inline constexpr uintptr_t SkyboxUp = 0x1d8;
         inline constexpr uintptr_t StarCount = 0x238;
         inline constexpr uintptr_t SunAngularSize = 0x22c;
         inline constexpr uintptr_t SunTextureId = 0x208;
         inline constexpr uintptr_t VTableRva = 0x6f4ecc8; // UNVERIFIED: absent from replacement file.
    }

    namespace Smoke {
         inline constexpr uintptr_t Enabled = 0xc8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Opacity = 0xb8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t RiseVelocity = 0xbc; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Size = 0xc0; // UNVERIFIED: absent from replacement file.
    }

    namespace SmoothClusterNode {
         inline constexpr uintptr_t VTableRva = 0x6f29e10; // UNVERIFIED: absent from replacement file.
    }

    namespace Sound {
         inline constexpr uintptr_t IsPlaying = 0x130;
         inline constexpr uintptr_t Looped = 0x12d;
         inline constexpr uintptr_t PlaybackSpeed = 0x10c;
         inline constexpr uintptr_t RollOffMaxDistance = 0x110;
         inline constexpr uintptr_t RollOffMinDistance = 0x114;
         inline constexpr uintptr_t SoundGroup = 0xd8;
         inline constexpr uintptr_t SoundId = 0xb8;
         inline constexpr uintptr_t Volume = 0x120;
    }

    namespace SpawnLocation {
         inline constexpr uintptr_t AllowTeamChangeOnTouch = 0x1e2;
         inline constexpr uintptr_t Duration = 0x1d8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Enabled = 0x1e1;
         inline constexpr uintptr_t ForcefieldDuration = 0x34;
         inline constexpr uintptr_t Neutral = 0x3d;
         inline constexpr uintptr_t TeamColor = 0x3c;
    }

    namespace SpecialMesh {
         inline constexpr uintptr_t MeshId = 0xe8;
         inline constexpr uintptr_t Offset = 0xa8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Scale = 0xb4;
         inline constexpr uintptr_t TextureId = 0x118; // UNVERIFIED: absent from replacement file.
    }

    namespace StatsItem {
         inline constexpr uintptr_t Value = 0x180;
    }

    namespace SunRaysEffect {
         inline constexpr uintptr_t Enabled = 0xa0;
         inline constexpr uintptr_t Intensity = 0xa8;
         inline constexpr uintptr_t Spread = 0xac;
    }

    namespace SurfaceAppearance {
         inline constexpr uintptr_t AlphaMode = 0x1e0;
         inline constexpr uintptr_t Color = 0x1c8;
         inline constexpr uintptr_t ColorMap = 0xb8;
         inline constexpr uintptr_t EmissiveMaskContent = 0xe8;
         inline constexpr uintptr_t EmissiveStrength = 0x1e4;
         inline constexpr uintptr_t EmissiveTint = 0x1d4;
         inline constexpr uintptr_t MetalnessMap = 0x118;
         inline constexpr uintptr_t NormalMap = 0x148;
         inline constexpr uintptr_t RoughnessMap = 0x178;
    }

    namespace Task {
         inline constexpr uintptr_t TaskCancel = 0x43234b0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TaskDefer = 0x4322730; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TaskDelay = 0x43246d0;
         inline constexpr uintptr_t TaskDesynchronize = 0x4323210;
         inline constexpr uintptr_t TaskSpawn = 0x4322c10; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TaskSynchronize = 0x4322da0;
         inline constexpr uintptr_t TaskWait = 0x43249d0;
    }

    namespace TaskScheduler {
         inline constexpr uintptr_t JobEnd = 0xd0;
         inline constexpr uintptr_t JobName = 0x18;
         inline constexpr uintptr_t JobStart = 0xc8;
         inline constexpr uintptr_t MaxFPS = 0xb0;
         inline constexpr uintptr_t MaxFps = 0xb0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Pointer = 0x8d71348;
    }

    namespace Team {
         inline constexpr uintptr_t BrickColor = 0xa8;
         inline constexpr uintptr_t TeamColor = 0xa8; // UNVERIFIED: absent from replacement file.
    }

    namespace TechniqueArray {
         inline constexpr uintptr_t EndOffset = 0x8;
    }

    namespace Terrain {
         inline constexpr uintptr_t GrassLength = 0x1e0;
         inline constexpr uintptr_t MaterialColors = 0x4a8;
         inline constexpr uintptr_t WaterColor = 0x1d0;
         inline constexpr uintptr_t WaterReflectance = 0x1e8;
         inline constexpr uintptr_t WaterTransparency = 0x1ec;
         inline constexpr uintptr_t WaterWaveSize = 0x1f0;
         inline constexpr uintptr_t WaterWaveSpeed = 0x1f4;
    }

    namespace TextButton {
         inline constexpr uintptr_t AutoButtonColor = 0x9e4; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t ContentText = 0xe20; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t LineHeight = 0xf38; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t LocalizedText = 0xe20; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t MaxVisibleGraphemes = 0x1154; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Modal = 0x9e5; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t RichText = 0x1036; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Selected = 0x9e6; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Text = 0xe20; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TextColor3 = 0x1138; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TextDirection = 0xfd8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TextScaled = 0xe09; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TextSize = 0x115c; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TextStrokeColor3 = 0x1144; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TextStrokeTransparency = 0x1160; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TextTransparency = 0x1164; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TextTruncate = 0x1168; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TextWrapped = 0x1030; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TextXAlignment = 0x116c; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TextYAlignment = 0xf80; // UNVERIFIED: absent from replacement file.
    }

    namespace TextLabel {
         inline constexpr uintptr_t ContentText = 0xba0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t LineHeight = 0xcb8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t LocalizedText = 0xba0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t MaxVisibleGraphemes = 0xed4; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t RichText = 0xdb6; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Text = 0xba0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TextColor3 = 0xeb8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TextDirection = 0xd58; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TextScaled = 0xdae; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TextSize = 0xedc; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TextStrokeColor3 = 0xec4; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TextStrokeTransparency = 0xee0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TextTransparency = 0xee4; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TextTruncate = 0xee8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TextWrapped = 0xdb0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TextXAlignment = 0xeec; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t TextYAlignment = 0xd00; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t VTableRva = 0x6f71020; // UNVERIFIED: absent from replacement file.
    }

    namespace Textures {
         inline constexpr uintptr_t Decal_Texture = 0x1d0;
         inline constexpr uintptr_t Texture_Texture = 0x1d0;
    }

    namespace Tool {
         inline constexpr uintptr_t CanBeDropped = 0x4a8;
         inline constexpr uintptr_t Enabled = 0x4a9;
         inline constexpr uintptr_t Grip = 0x49c;
         inline constexpr uintptr_t GripForward = 0x490; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t GripPos = 0x49c; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t GripRight = 0x478; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t GripUp = 0x484; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t ManualActivationOnly = 0x4aa;
         inline constexpr uintptr_t RequiresHandle = 0x9d;
         inline constexpr uintptr_t TextureId = 0x350;
         inline constexpr uintptr_t Tooltip = 0x458;
    }

    namespace TransformsView {
         inline constexpr uintptr_t PartStride = 0x38; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Parts = 0x38; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t PartsEnd = 0x40; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t VTableRva = 0x6f2a008; // UNVERIFIED: absent from replacement file.
    }

    namespace TriangleMesh {
         inline constexpr uintptr_t Data = 0x20; // UNVERIFIED: absent from replacement file.
    }

    namespace Types {
         inline constexpr uintptr_t AllTypes = 0x8d5c788;
    }

    namespace UnionOperation {
         inline constexpr uintptr_t AssetId = 0x300;
    }

    namespace UserInputService {
         inline constexpr uintptr_t WindowInputState = 0x2b0;
    }

    namespace Value {
         inline constexpr uintptr_t Value = 0xa8;
    }

    namespace VehicleSeat {
         inline constexpr uintptr_t MaxSpeed = 0x218;
         inline constexpr uintptr_t Occupant = 0x1f8; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t SteerFloat = 0x21c;
         inline constexpr uintptr_t ThrottleFloat = 0x220;
         inline constexpr uintptr_t Torque = 0x224;
         inline constexpr uintptr_t TurnSpeed = 0x228;
    }

    namespace VisualEngine {
         inline constexpr uintptr_t Dimensions = 0xb10;
         inline constexpr uintptr_t FakeDataModel = 0xaf0;
         inline constexpr uintptr_t Pointer = 0x884c2e0;
         inline constexpr uintptr_t RenderView = 0xc38;
         inline constexpr uintptr_t VTableRva = 0x6f26338; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t ViewMatrix = 0x1b0;
    }

    namespace Weld {
         inline constexpr uintptr_t Part0 = 0x108;
         inline constexpr uintptr_t Part1 = 0x118;
    }

    namespace WeldConstraint {
         inline constexpr uintptr_t Part0 = 0xa8;
         inline constexpr uintptr_t Part1 = 0xb8;
    }

    namespace WindowInputState {
         inline constexpr uintptr_t CapsLock = 0x40;
         inline constexpr uintptr_t CurrentTextBox = 0x48;
    }

    namespace Workspace {
         inline constexpr uintptr_t CurrentCamera = 0x4a8;
         inline constexpr uintptr_t DistributedGameTime = 0x4c8;
         inline constexpr uintptr_t ReadOnlyGravity = 0x9c8;
         inline constexpr uintptr_t World = 0x400;
    }

    namespace World {
         inline constexpr uintptr_t AirProperties = 0x238;
         inline constexpr uintptr_t FallenPartsDestroyHeight = 0x214;
         inline constexpr uintptr_t Gravity = 0x220;
         inline constexpr uintptr_t Primitives = 0x2c8;
         inline constexpr uintptr_t WorldSteps = 0x888; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t worldStepsPerSec = 0x880;
    }

    namespace WorldRoot {
         inline constexpr uintptr_t RaycastBoundDesc = 0x8364bb0; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t RaycastBoundFn = 0x90; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t VTableRva = 0x6ddce30; // UNVERIFIED: absent from replacement file.
    }

    namespace btConvexHullShape {
         inline constexpr uintptr_t PointCount = 0x20; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Points = 0x28; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t Size = 0x80; // UNVERIFIED: absent from replacement file.
    }

    namespace btGImpactCompoundShape {
         inline constexpr uintptr_t HullsBegin = 0x30; // UNVERIFIED: absent from replacement file.
         inline constexpr uintptr_t HullsEnd = 0x38; // UNVERIFIED: absent from replacement file.
    }

}

// Entries supplied only by the replacement file.
namespace Offsets::BoundFuncDescriptor {
    inline constexpr uintptr_t Function = 0x90;
    inline constexpr uintptr_t Name = 0x8;
}

namespace Offsets::Btools {
    inline constexpr uintptr_t MouseCommandWorkspace = 0x50;
    inline constexpr uintptr_t ToolAllocationSize = 0x100;
    inline constexpr uintptr_t WorkspaceCurrentCommand = 0x878;
    inline constexpr uintptr_t WorkspaceStickyCommand = 0x880;
}

namespace Offsets::Bytecode {
    inline constexpr uintptr_t BytecodeVerificationTableA = 0xd22f50;
    inline constexpr uintptr_t LuaVMLoad = 0x41a3610;
}

namespace Offsets::ClientBuild {
    inline constexpr uintptr_t EntityDrawRva = 0x399f220;
    inline constexpr uintptr_t EntitySubmitRva = 0x399f770;
    inline constexpr uintptr_t ImageSize = 0x9318000;
    inline constexpr uintptr_t MergeFlag = 0x888c668;
    inline constexpr uintptr_t Timestamp = 0xfd803185;
}

namespace Offsets::Coroutine {
    inline constexpr uintptr_t create = 0x5904ca0;
    inline constexpr uintptr_t finally = 0x5906bf0;
    inline constexpr uintptr_t isyieldable = 0x59055a0;
    inline constexpr uintptr_t running = 0x5905530;
    inline constexpr uintptr_t status = 0x5903230;
    inline constexpr uintptr_t wrap = 0x5905260;
    inline constexpr uintptr_t yield = 0x59054d0;
}

namespace Offsets::DeviceD3D11Gfx {
    inline constexpr uintptr_t Context = 0x178;
    inline constexpr uintptr_t ContextObj = 0x1b0;
    inline constexpr uintptr_t ContextObjAlt = 0x268;
    inline constexpr uintptr_t ContextObjDrawRva = 0x2812ee0;
    inline constexpr uintptr_t ContextObjDrawSlot = 0x1c;
    inline constexpr uintptr_t ContextObjLegacy = 0x1f8;
    inline constexpr uintptr_t ContextObjLinkScan = 0x570;
    inline constexpr uintptr_t ContextObjToContext = 0x18;
    inline constexpr uintptr_t ContextObjVTableLen = 0x27;
    inline constexpr uintptr_t ContextObjVTableRva = 0x6ec0370;
    inline constexpr uintptr_t ContextPtr = 0x178;
    inline constexpr uintptr_t DevicePtr = 0x178;
    inline constexpr uintptr_t DevicePtrLegacy = 0x228;
    inline constexpr uintptr_t SwapChainPtr = 0x80;
}

namespace Offsets::EngineWallCheck {
    inline constexpr uintptr_t BoundFnOffset = 0x90;
    inline constexpr uintptr_t KernelVtableRva = 0x70b22d0;
    inline constexpr uintptr_t RaycastDescriptorRva = 0x8557620;
    inline constexpr uintptr_t RaycastWorkerRva = 0x8f6754b;
    inline constexpr uintptr_t RealWrapperRva = 0xd5c500;
    inline constexpr uintptr_t StepWorldRva = 0x72a9d0;
}

namespace Offsets::FFlags {
    inline constexpr uintptr_t EnableLoadModule = 0x8891880;
    inline constexpr uintptr_t GetFFlag = 0x49f8d70;
    inline constexpr uintptr_t NextGenReplicatorEnabledWrite4 = 0x85482f8;
    inline constexpr uintptr_t PhysicsSenderMaxBandwidthBps = 0x8026ca8;
    inline constexpr uintptr_t PhysicsSenderMaxBandwidthBpsScaling = 0x8026cd0;
    inline constexpr uintptr_t RenderFastClusterOcclusionCulling4 = 0x88887d8;
    inline constexpr uintptr_t SetFFlag = 0x49f8270;
}

namespace Offsets::FastCluster {
    inline constexpr uintptr_t ClusterNode = 0x188;
    inline constexpr uintptr_t VTableRvaAlt = 0x6f2ada0;
    inline constexpr uintptr_t VTableRvaSubAlt = 0x6f2b0b0;
}

namespace Offsets::FastClusterBinding {
    inline constexpr uintptr_t Subobject = 0x90;
}

namespace Offsets::FastClusterEntity {
    inline constexpr uintptr_t CollectedPasses = 0x18;
    inline constexpr uintptr_t Highlight = 0xb4;
}

namespace Offsets::FastClusterEntity::Context {
    inline constexpr uintptr_t PrimitivePoolPtr = 0x198;
}

namespace Offsets::FastClusterEntity::PrimitivePool {
    inline constexpr uintptr_t ArrayBase = 0x20;
}

namespace Offsets::FastClusterEntity::PrimitiveRecord {
    inline constexpr uintptr_t Row0 = 0;
    inline constexpr uintptr_t Row1 = 12;
    inline constexpr uintptr_t Row2 = 24;
    inline constexpr uintptr_t Stride = 48;
    inline constexpr uintptr_t Translation = 36;
}

namespace Offsets::Frame {
    inline constexpr uintptr_t FramePositionOffsetX = 0x504;
    inline constexpr uintptr_t FramePositionOffsetY = 0x50c;
}

namespace Offsets::Functions {
    inline constexpr uintptr_t CastArgs = 0x7bff10;
    inline constexpr uintptr_t WaitForChild = 0x3b349ed;
}

namespace Offsets {
    inline constexpr uintptr_t ClusterNode = 0x188;
}

namespace Offsets::HighlightManager {
    inline constexpr uintptr_t ContextActive = 0x420;
    inline constexpr uintptr_t ContextDepth = 0x20;
    inline constexpr uintptr_t ContextFill = 0x520;
    inline constexpr uintptr_t ContextOutline = 0x1520;
    inline constexpr uintptr_t ContextStride = 0x2520;
    inline constexpr uintptr_t Contexts = 0x100;
    inline constexpr uintptr_t FallbackActive = 0x538;
    inline constexpr uintptr_t FallbackDepth = 0x138;
    inline constexpr uintptr_t FallbackFill = 0x638;
    inline constexpr uintptr_t FallbackOutline = 0x1638;
    inline constexpr uintptr_t GlobalActive = 0x2aac;
    inline constexpr uintptr_t GlobalDepth = 0x26ac;
    inline constexpr uintptr_t GlobalFill = 0x2bac;
    inline constexpr uintptr_t GlobalNext = 0x26a8;
    inline constexpr uintptr_t GlobalOutline = 0x3bac;
    inline constexpr uintptr_t Manager = 0xc10;
    inline constexpr uintptr_t MergeFlag = 0x888c668;
}

namespace Offsets::Instance {
    inline constexpr uintptr_t FindFirstAncestorWhichIsA = 0x20ac120;
    inline constexpr uintptr_t FindFirstChild = 0xb2c868;
    inline constexpr uintptr_t FindFirstChildOfClass = 0xb2c868;
    inline constexpr uintptr_t GetAttribute = 0x23794;
    inline constexpr uintptr_t GetChildren = 0x22ac8d0;
    inline constexpr uintptr_t Index = 0x412b7d0;
    inline constexpr uintptr_t New = 0x42c96a0;
}

namespace Offsets::LRUNode {
    inline constexpr uintptr_t Next = 0x0;
}

namespace Offsets::Luau {
    inline constexpr uintptr_t Capability = 0x26585a0;
    inline constexpr uintptr_t GetGlobalState = 0x41acdb0;
    inline constexpr uintptr_t LuaVMLoad = 0x9f6d00;
    inline constexpr uintptr_t dumpgco = 0x265b350;
    inline constexpr uintptr_t ktable = 0x411b7d0;
    inline constexpr uintptr_t luaB_assert = 0x2682c50;
    inline constexpr uintptr_t luaB_error = 0x267b730;
    inline constexpr uintptr_t luaB_gcinfo = 0x2681590;
    inline constexpr uintptr_t luaB_getfenv = 0x267cce0;
    inline constexpr uintptr_t luaB_getmetatable = 0x267c170;
    inline constexpr uintptr_t luaB_newproxy = 0x2683b70;
    inline constexpr uintptr_t luaB_next = 0x26821a0;
    inline constexpr uintptr_t luaB_print = 0x267b2d0;
    inline constexpr uintptr_t luaB_rawequal = 0x267cfd0;
    inline constexpr uintptr_t luaB_rawget = 0x267d0e0;
    inline constexpr uintptr_t luaB_rawlen = 0x26814f0;
    inline constexpr uintptr_t luaB_rawset = 0x267df50;
    inline constexpr uintptr_t luaB_select = 0x2682d00;
    inline constexpr uintptr_t luaB_setfenv = 0x267cda0;
    inline constexpr uintptr_t luaB_setmetatable = 0x267c300;
    inline constexpr uintptr_t luaB_tonumber = 0x267b3a0;
    inline constexpr uintptr_t luaB_tostring = 0x2683b10;
    inline constexpr uintptr_t luaB_type = 0x26815b0;
    inline constexpr uintptr_t luaB_typeof = 0x2681bb0;
    inline constexpr uintptr_t luaC_init = 0x265de50;
    inline constexpr uintptr_t luaC_step = 0x2644300;
    inline constexpr uintptr_t luaD_Throw = 0x262ddc0;
    inline constexpr uintptr_t luaF_FreeProto = 0xd195a0;
    inline constexpr uintptr_t luaG_runerror = 0x7bf930;
    inline constexpr uintptr_t luaH_clone = 0x2694180;
    inline constexpr uintptr_t luaH_dummynode = 0x2619a00;
    inline constexpr uintptr_t luaL_argerror = 0x2623300;
    inline constexpr uintptr_t luaL_checktype = 0x2622820;
    inline constexpr uintptr_t luaM_newgco = 0x265dce0;
    inline constexpr uintptr_t luaM_visitgco = 0x66992cb;
    inline constexpr uintptr_t luaO_nilobject = 0x26199c8;
    inline constexpr uintptr_t luaO_pushfstring = 0x2657710;
    inline constexpr uintptr_t lua_checkstack = 0xcb8d00;
    inline constexpr uintptr_t lua_error = 0x261d640;
    inline constexpr uintptr_t lua_newstate = 0x26210c0;
    inline constexpr uintptr_t lua_pushfstring = 0x261ad70;
    inline constexpr uintptr_t luau_execute = 0x266c81c;
    inline constexpr uintptr_t print = 0x1ce58f0;
    inline constexpr uintptr_t pseudo2addr = 0x2619930;
    inline constexpr uintptr_t tclone = 0x2693f30;
}

namespace Offsets::Luau::global_State {
    inline constexpr uintptr_t g_gcstepmul = 0x30;
}

namespace Offsets::Luau::lua_State {
    inline constexpr uintptr_t L_global_offset = 0x50;
}

namespace Offsets::MaterialLayer {
    inline constexpr uintptr_t ColorData = 0x26;
    inline constexpr uintptr_t CullMode = 0x10;
    inline constexpr uintptr_t FillModeByte = 0x11;
    inline constexpr uintptr_t Flags2 = 0x20;
    inline constexpr uintptr_t MatFlags = 0x18;
    inline constexpr uintptr_t Param = 0x1c;
    inline constexpr uintptr_t Stride = 0x88;
}

namespace Offsets::Misc {
    inline constexpr uintptr_t PrintIdentity = 0x425f710;
    inline constexpr uintptr_t RequireBypass = 0xa81;
}

namespace Offsets::ModuleScript {
    inline constexpr uintptr_t HashLookUp = 0x72657a0;
}

namespace Offsets::Motor6D {
    inline constexpr uintptr_t ChildName = 0x118;
    inline constexpr uintptr_t ParentName = 0x108;
}

namespace Offsets::Mouse {
    inline constexpr uintptr_t FireProximityPrompt = 0x30d1720;
}

namespace Offsets::Property {
    inline constexpr uintptr_t GetPropertyData = 0x7c47e0;
}

namespace Offsets::RakNet {
    inline constexpr uintptr_t RakNetReliabilityLayerSend = 0xba0160;
    inline constexpr uintptr_t RakNetSend = 0x2852d00;
    inline constexpr uintptr_t RakPeerProcessNetworkPacket = 0x28532c0;
    inline constexpr uintptr_t RakPeerReceive = 0x848900;
    inline constexpr uintptr_t RaknetReportNetworkError = 0x47b8110;
    inline constexpr uintptr_t SendPacketsToSelf = 0x2852f50;
    inline constexpr uintptr_t UpdateNetworkLoop = 0x495fae0;
    inline constexpr uintptr_t convertItemEnumToString = 0x4819f10;
}

namespace Offsets::RbxTransport {
    inline constexpr uintptr_t AppDestructor = 0x2155f90;
    inline constexpr uintptr_t AppRTTI = 0x82cfb90;
    inline constexpr uintptr_t AppReceive = 0x2150b30;
    inline constexpr uintptr_t AppReceiveMaxBytes = 0x2150c30;
    inline constexpr uintptr_t AppSend = 0x214fe00;
    inline constexpr uintptr_t ClientRTTI = 0x833b3b8;
    inline constexpr uintptr_t StreamClose = 0x214fe80;
}

namespace Offsets::RemoteEvent {
    inline constexpr uintptr_t BaseVTableRva = 0x6f1bfb0;
    inline constexpr uintptr_t DescBaseVTableRva = 0x6f1bd48;
    inline constexpr uintptr_t FireClient = 0x3449d10;
    inline constexpr uintptr_t FireServer = 0x3449b70;
    inline constexpr uintptr_t FireServerRva = 0x71e7c0;
    inline constexpr uintptr_t FireServerVtableSlot = 0x4b;
    inline constexpr uintptr_t HookSlot7 = 0x7;
    inline constexpr uintptr_t HookSlot7RemoteEventFn = 0x3523e80;
    inline constexpr uintptr_t InstanceParentOffset = 0x68;
    inline constexpr uintptr_t InstanceVTableRva = 0x6ea8708;
    inline constexpr uintptr_t RemoteFuncVTableRva = 0x6f216c0;
    inline constexpr uintptr_t VTableRva = 0x6f21928;
    inline constexpr uintptr_t VtableSlotSignalFire = 0x2;
}

namespace Offsets::RenderQueue {
    inline constexpr std::uint32_t AlwaysOnTop = 13u;
    inline constexpr std::uint32_t AlwaysOnTopAdorns = 14u;
    inline constexpr std::uint32_t Decals = 2u;
    inline constexpr std::uint32_t Glass = 8u;
    inline constexpr std::uint32_t GlassTint = 7u;
    inline constexpr std::uint32_t OnTopReadOnlyDepth = 12u;
    inline constexpr std::uint32_t OnTopWithDepth = 11u;
    inline constexpr std::uint32_t Opaque = 0u;
    inline constexpr std::uint32_t OpaqueAdorns = 4u;
    inline constexpr std::uint32_t OpaqueCasters = 3u;
    inline constexpr std::uint32_t OpaqueWithAlpha = 5u;
    inline constexpr std::uint32_t Screen = 15u;
    inline constexpr std::uint32_t ScreenOnTopOfBlur = 16u;
    inline constexpr std::uint32_t Terrain = 1u;
    inline constexpr std::uint32_t Transparent = 9u;
    inline constexpr std::uint32_t TransparentCasters = 10u;
    inline constexpr std::uint32_t Water = 6u;
}

namespace Offsets::ScriptContext {
    inline constexpr uintptr_t Resume = 0x4258330;
}

namespace Offsets::ShaderManager {
    inline constexpr uintptr_t VTableRva = 0x6f2a8a8;
}

namespace Offsets::Sky {
    inline constexpr uintptr_t CubeTextures = 0x2ea7f60;
    inline constexpr uintptr_t DrawSkyEnv = 0x377be00;
    inline constexpr uintptr_t SkyGroup = 0x8004a08;
}

namespace Offsets::TaskScheduler {
    inline constexpr uintptr_t StepFunction = 0x2a22220;
}

namespace Offsets::TechniqueArray {
    inline constexpr uintptr_t BeginOffset = 0x0;
    inline constexpr uintptr_t EntryStride = 0x88;
}

namespace Offsets::TextureManager2 {
    inline constexpr uintptr_t VTableRva = 0x6f28da0;
}

namespace Offsets::ViewBase {
    inline constexpr uintptr_t VTableRva = 0x6f28260;
}

namespace Offsets::WorldRoot {
    inline constexpr uintptr_t FindPartOnRayBoundFnRva = 0xd65530;
    inline constexpr uintptr_t FindPartOnRayDescriptorRva = 0x8558060;
    inline constexpr uintptr_t FindPartOnRayWithIgnoreListBoundFnRva = 0xd655b0;
    inline constexpr uintptr_t FindPartOnRayWithIgnoreListDescriptorRva = 0x8558120;
    inline constexpr uintptr_t FindPartOnRayWithWhitelistBoundFnRva = 0xd65640;
    inline constexpr uintptr_t FindPartOnRayWithWhitelistDescriptorRva = 0x85581e0;
    inline constexpr uintptr_t RaycastBoundFnRva = 0xd5c500;
    inline constexpr uintptr_t RaycastDescriptorRva = 0x8557620;
    inline constexpr uintptr_t RaycastDescriptorVtableRva = 0x6e0ad60;
}
