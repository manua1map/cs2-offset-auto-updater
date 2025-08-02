// Generated using https://github.com/a2x/cs2-dumper
// 2025-08-01 23:20:24.217274500 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: client.dll
        // Class count: 501
        // Enum count: 8
        namespace client_dll {
            // Alignment: 4
            // Member count: 15
            enum class CompositeMaterialInputLooseVariableType_t : uint32_t {
                LOOSE_VARIABLE_TYPE_BOOLEAN = 0x0,
                LOOSE_VARIABLE_TYPE_INTEGER1 = 0x1,
                LOOSE_VARIABLE_TYPE_INTEGER2 = 0x2,
                LOOSE_VARIABLE_TYPE_INTEGER3 = 0x3,
                LOOSE_VARIABLE_TYPE_INTEGER4 = 0x4,
                LOOSE_VARIABLE_TYPE_FLOAT1 = 0x5,
                LOOSE_VARIABLE_TYPE_FLOAT2 = 0x6,
                LOOSE_VARIABLE_TYPE_FLOAT3 = 0x7,
                LOOSE_VARIABLE_TYPE_FLOAT4 = 0x8,
                LOOSE_VARIABLE_TYPE_COLOR4 = 0x9,
                LOOSE_VARIABLE_TYPE_STRING = 0xA,
                LOOSE_VARIABLE_TYPE_SYSTEMVAR = 0xB,
                LOOSE_VARIABLE_TYPE_RESOURCE_MATERIAL = 0xC,
                LOOSE_VARIABLE_TYPE_RESOURCE_TEXTURE = 0xD,
                LOOSE_VARIABLE_TYPE_PANORAMA_RENDER = 0xE
            };
            // Alignment: 4
            // Member count: 7
            enum class CompositeMaterialInputTextureType_t : uint32_t {
                INPUT_TEXTURE_TYPE_DEFAULT = 0x0,
                INPUT_TEXTURE_TYPE_NORMALMAP = 0x1,
                INPUT_TEXTURE_TYPE_COLOR = 0x2,
                INPUT_TEXTURE_TYPE_MASKS = 0x3,
                INPUT_TEXTURE_TYPE_ROUGHNESS = 0x4,
                INPUT_TEXTURE_TYPE_PEARLESCENCE_MASK = 0x5,
                INPUT_TEXTURE_TYPE_AO = 0x6
            };
            // Alignment: 4
            // Member count: 9
            enum class InventoryNodeType_t : uint32_t {
                NODE_TYPE_INVALID = 0x0,
                VIRTUAL_NODE_SCHEMA_PREFAB = 0x1,
                VIRTUAL_NODE_SCHEMA_ITEMDEF = 0x2,
                VIRTUAL_NODE_SCHEMA_STICKER = 0x3,
                VIRTUAL_NODE_SCHEMA_KEYCHAIN = 0x4,
                CONCRETE_NODE_SCHEMA_PREFAB = 0x5,
                CONCRETE_NODE_SCHEMA_ITEMDEF = 0x6,
                CONCRETE_NODE_SCHEMA_STICKER = 0x7,
                CONCRETE_NODE_SCHEMA_KEYCHAIN = 0x8
            };
            // Alignment: 4
            // Member count: 6
            enum class CompositeMaterialInputContainerSourceType_t : uint32_t {
                CONTAINER_SOURCE_TYPE_TARGET_MATERIAL = 0x0,
                CONTAINER_SOURCE_TYPE_MATERIAL_FROM_TARGET_ATTR = 0x1,
                CONTAINER_SOURCE_TYPE_SPECIFIC_MATERIAL = 0x2,
                CONTAINER_SOURCE_TYPE_LOOSE_VARIABLES = 0x3,
                CONTAINER_SOURCE_TYPE_VARIABLE_FROM_TARGET_ATTR = 0x4,
                CONTAINER_SOURCE_TYPE_TARGET_INSTANCE_MATERIAL = 0x5
            };
            // Alignment: 4
            // Member count: 10
            enum class CompMatPropertyMutatorType_t : uint32_t {
                COMP_MAT_PROPERTY_MUTATOR_INIT = 0x0,
                COMP_MAT_PROPERTY_MUTATOR_COPY_MATCHING_KEYS = 0x1,
                COMP_MAT_PROPERTY_MUTATOR_COPY_KEYS_WITH_SUFFIX = 0x2,
                COMP_MAT_PROPERTY_MUTATOR_COPY_PROPERTY = 0x3,
                COMP_MAT_PROPERTY_MUTATOR_SET_VALUE = 0x4,
                COMP_MAT_PROPERTY_MUTATOR_GENERATE_TEXTURE = 0x5,
                COMP_MAT_PROPERTY_MUTATOR_CONDITIONAL_MUTATORS = 0x6,
                COMP_MAT_PROPERTY_MUTATOR_POP_INPUT_QUEUE = 0x7,
                COMP_MAT_PROPERTY_MUTATOR_DRAW_TEXT = 0x8,
                COMP_MAT_PROPERTY_MUTATOR_RANDOM_ROLL_INPUT_VARIABLES = 0x9
            };
            // Alignment: 4
            // Member count: 2
            enum class CompositeMaterialVarSystemVar_t : uint32_t {
                COMPMATSYSVAR_COMPOSITETIME = 0x0,
                COMPMATSYSVAR_EMPTY_RESOURCE_SPACER = 0x1
            };
            // Alignment: 4
            // Member count: 6
            enum class CompositeMaterialMatchFilterType_t : uint32_t {
                MATCH_FILTER_MATERIAL_ATTRIBUTE_EXISTS = 0x0,
                MATCH_FILTER_MATERIAL_SHADER = 0x1,
                MATCH_FILTER_MATERIAL_NAME_SUBSTR = 0x2,
                MATCH_FILTER_MATERIAL_ATTRIBUTE_EQUALS = 0x3,
                MATCH_FILTER_MATERIAL_PROPERTY_EXISTS = 0x4,
                MATCH_FILTER_MATERIAL_PROPERTY_EQUALS = 0x5
            };
            // Alignment: 4
            // Member count: 3
            enum class CompMatPropertyMutatorConditionType_t : uint32_t {
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_EXISTS = 0x0,
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EXISTS = 0x1,
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EQUALS = 0x2
            };
            // Parent: C_CSGO_TeamPreviewCharacterPosition
            // Field count: 0
            namespace C_CSGO_TeamIntroCharacterPosition {
            }
            // Parent: C_Inferno
            // Field count: 0
            namespace C_FireCrackerBlast {
            }
            // Parent: CCSGO_WingmanIntroCharacterPosition
            // Field count: 0
            namespace CCSGO_WingmanIntroCounterTerroristPosition {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            namespace CPulseCell_WaitForCursorsWithTag {
                constexpr std::ptrdiff_t m_bTagSelfWhenComplete = 0x98; // bool
                constexpr std::ptrdiff_t m_nDesiredKillPriority = 0x9C; // PulseCursorCancelPriority_t
            }
            // Parent: None
            // Field count: 1
            namespace C_SceneEntity__QueuedEvents_t {
                constexpr std::ptrdiff_t starttime = 0x0; // float32
            }
            // Parent: CPlayerPawnComponent
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_hPlayerPing (CHandle<CBaseEntity>)
            namespace CCSPlayer_PingServices {
                constexpr std::ptrdiff_t m_hPlayerPing = 0x40; // CHandle<C_BaseEntity>
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_iAttributeDefinitionIndex (attrib_definition_index_t)
            // NetworkVarNames: m_flValue (float)
            // NetworkVarNames: m_flInitialValue (float)
            // NetworkVarNames: m_nRefundableCurrency (int)
            // NetworkVarNames: m_bSetBonus (bool)
            namespace CEconItemAttribute {
                constexpr std::ptrdiff_t m_iAttributeDefinitionIndex = 0x30; // uint16
                constexpr std::ptrdiff_t m_flValue = 0x34; // float32
                constexpr std::ptrdiff_t m_flInitialValue = 0x38; // float32
                constexpr std::ptrdiff_t m_nRefundableCurrency = 0x3C; // int32
                constexpr std::ptrdiff_t m_bSetBonus = 0x40; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPulseProvideFeatureTag
            // MPulseDomainHookInfo
            namespace CBaseTriggerAPI {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: nTagTick (GameTick_t)
            // NetworkVarNames: flFlinchModSmall (float)
            // NetworkVarNames: flFlinchModLarge (float)
            // NetworkVarNames: flFriendlyFireDamageReductionRatio (float)
            namespace PredictedDamageTag_t {
                constexpr std::ptrdiff_t nTagTick = 0x30; // GameTick_t
                constexpr std::ptrdiff_t flFlinchModSmall = 0x34; // float32
                constexpr std::ptrdiff_t flFlinchModLarge = 0x38; // float32
                constexpr std::ptrdiff_t flFriendlyFireDamageReductionRatio = 0x3C; // float32
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // NetworkVarNames: m_flStartTime (GameTime_t)
            // NetworkVarNames: m_iWindSeed (uint32)
            // NetworkVarNames: m_iMinWind (uint16)
            // NetworkVarNames: m_iMaxWind (uint16)
            // NetworkVarNames: m_windRadius (int32)
            // NetworkVarNames: m_iMinGust (uint16)
            // NetworkVarNames: m_iMaxGust (uint16)
            // NetworkVarNames: m_flMinGustDelay (float32)
            // NetworkVarNames: m_flMaxGustDelay (float32)
            // NetworkVarNames: m_flGustDuration (float32)
            // NetworkVarNames: m_iGustDirChange (uint16)
            // NetworkVarNames: m_iInitialWindDir (uint16)
            // NetworkVarNames: m_flInitialWindSpeed (float32)
            // NetworkVarNames: m_location (Vector)
            namespace C_EnvWindShared {
                constexpr std::ptrdiff_t m_flStartTime = 0x8; // GameTime_t
                constexpr std::ptrdiff_t m_iWindSeed = 0xC; // uint32
                constexpr std::ptrdiff_t m_iMinWind = 0x10; // uint16
                constexpr std::ptrdiff_t m_iMaxWind = 0x12; // uint16
                constexpr std::ptrdiff_t m_windRadius = 0x14; // int32
                constexpr std::ptrdiff_t m_iMinGust = 0x18; // uint16
                constexpr std::ptrdiff_t m_iMaxGust = 0x1A; // uint16
                constexpr std::ptrdiff_t m_flMinGustDelay = 0x1C; // float32
                constexpr std::ptrdiff_t m_flMaxGustDelay = 0x20; // float32
                constexpr std::ptrdiff_t m_flGustDuration = 0x24; // float32
                constexpr std::ptrdiff_t m_iGustDirChange = 0x28; // uint16
                constexpr std::ptrdiff_t m_iInitialWindDir = 0x2A; // uint16
                constexpr std::ptrdiff_t m_flInitialWindSpeed = 0x2C; // float32
                constexpr std::ptrdiff_t m_location = 0x30; // Vector
                constexpr std::ptrdiff_t m_hEntOwner = 0x3C; // CHandle<C_BaseEntity>
            }
            // Parent: C_BaseEntity
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_skyboxData (sky3dparams_t)
            // NetworkVarNames: m_skyboxSlotToken (CUtlStringToken)
            namespace C_SkyCamera {
                constexpr std::ptrdiff_t m_skyboxData = 0x5F8; // sky3dparams_t
                constexpr std::ptrdiff_t m_skyboxSlotToken = 0x688; // CUtlStringToken
                constexpr std::ptrdiff_t m_bUseAngles = 0x68C; // bool
                constexpr std::ptrdiff_t m_pNext = 0x690; // C_SkyCamera*
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Base {
                constexpr std::ptrdiff_t m_nEditorNodeID = 0x8; // PulseDocNodeID_t
            }
            // Parent: C_BaseModelEntity
            // Field count: 0
            //
            // Metadata:
            // MNetworkOverride
            // MNetworkOverride
            namespace C_FuncRotating {
            }
            // Parent: C_BaseEntity
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_iszStackName (string_t)
            // NetworkVarNames: m_iszOperatorName (string_t)
            // NetworkVarNames: m_iszOpvarName (string_t)
            // NetworkVarNames: m_iOpvarIndex (int)
            // NetworkVarNames: m_bUseAutoCompare (bool)
            namespace C_SoundOpvarSetPointBase {
                constexpr std::ptrdiff_t m_iszStackName = 0x5F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOperatorName = 0x600; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOpvarName = 0x608; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iOpvarIndex = 0x610; // int32
                constexpr std::ptrdiff_t m_bUseAutoCompare = 0x614; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 18
            //
            // Metadata:
            // NetworkVarNames: m_flEndDistance (float)
            // NetworkVarNames: m_flStartDistance (float)
            // NetworkVarNames: m_flFogFalloffExponent (float)
            // NetworkVarNames: m_bHeightFogEnabled (bool)
            // NetworkVarNames: m_flFogHeightWidth (float)
            // NetworkVarNames: m_flFogHeightEnd (float)
            // NetworkVarNames: m_flFogHeightStart (float)
            // NetworkVarNames: m_flFogHeightExponent (float)
            // NetworkVarNames: m_flLODBias (float)
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_flFogMaxOpacity (float)
            // NetworkVarNames: m_nCubemapSourceType (int)
            // NetworkVarNames: m_hSkyMaterial (HMaterialStrong)
            // NetworkVarNames: m_iszSkyEntity (string_t)
            // NetworkVarNames: m_hFogCubemapTexture (HRenderTextureStrong)
            // NetworkVarNames: m_bHasHeightFogEnd (bool)
            namespace C_EnvCubemapFog {
                constexpr std::ptrdiff_t m_flEndDistance = 0x5F8; // float32
                constexpr std::ptrdiff_t m_flStartDistance = 0x5FC; // float32
                constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x600; // float32
                constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x604; // bool
                constexpr std::ptrdiff_t m_flFogHeightWidth = 0x608; // float32
                constexpr std::ptrdiff_t m_flFogHeightEnd = 0x60C; // float32
                constexpr std::ptrdiff_t m_flFogHeightStart = 0x610; // float32
                constexpr std::ptrdiff_t m_flFogHeightExponent = 0x614; // float32
                constexpr std::ptrdiff_t m_flLODBias = 0x618; // float32
                constexpr std::ptrdiff_t m_bActive = 0x61C; // bool
                constexpr std::ptrdiff_t m_bStartDisabled = 0x61D; // bool
                constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x620; // float32
                constexpr std::ptrdiff_t m_nCubemapSourceType = 0x624; // int32
                constexpr std::ptrdiff_t m_hSkyMaterial = 0x628; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_iszSkyEntity = 0x630; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hFogCubemapTexture = 0x638; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_bHasHeightFogEnd = 0x640; // bool
                constexpr std::ptrdiff_t m_bFirstTime = 0x641; // bool
            }
            // Parent: C_CSGO_TeamSelectCharacterPosition
            // Field count: 0
            namespace C_CSGO_TeamSelectTerroristPosition {
            }
            // Parent: None
            // Field count: 5
            namespace C_BaseFlex__Emphasized_Phoneme {
                constexpr std::ptrdiff_t m_sClassName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_flAmount = 0x18; // float32
                constexpr std::ptrdiff_t m_bRequired = 0x1C; // bool
                constexpr std::ptrdiff_t m_bBasechecked = 0x1D; // bool
                constexpr std::ptrdiff_t m_bValid = 0x1E; // bool
            }
            // Parent: C_ParticleSystem
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_flAlphaScale (float32)
            // NetworkVarNames: m_flRadiusScale (float32)
            // NetworkVarNames: m_flSelfIllumScale (float32)
            // NetworkVarNames: m_ColorTint (Color)
            // NetworkVarNames: m_hTextureOverride (HRenderTextureStrong)
            namespace C_EnvParticleGlow {
                constexpr std::ptrdiff_t m_flAlphaScale = 0x1470; // float32
                constexpr std::ptrdiff_t m_flRadiusScale = 0x1474; // float32
                constexpr std::ptrdiff_t m_flSelfIllumScale = 0x1478; // float32
                constexpr std::ptrdiff_t m_ColorTint = 0x147C; // Color
                constexpr std::ptrdiff_t m_hTextureOverride = 0x1480; // CStrongHandle<InfoForResourceTypeCTextureBase>
            }
            // Parent: C_BaseEntity
            // Field count: 0
            namespace CCS_PortraitWorldCallbackHandler {
            }
            // Parent: CPlayerControllerComponent
            // Field count: 8
            //
            // Metadata:
            // NetworkVarNames: m_unMusicID (item_definition_index_t)
            // NetworkVarNames: m_rank (MedalRank_t)
            // NetworkVarNames: m_nPersonaDataPublicLevel (int)
            // NetworkVarNames: m_nPersonaDataPublicCommendsLeader (int)
            // NetworkVarNames: m_nPersonaDataPublicCommendsTeacher (int)
            // NetworkVarNames: m_nPersonaDataPublicCommendsFriendly (int)
            // NetworkVarNames: m_nPersonaDataXpTrailLevel (int)
            // NetworkVarNames: m_vecServerAuthoritativeWeaponSlots (ServerAuthoritativeWeaponSlot_t)
            namespace CCSPlayerController_InventoryServices {
                constexpr std::ptrdiff_t m_unMusicID = 0x40; // uint16
                constexpr std::ptrdiff_t m_rank = 0x44; // MedalRank_t[6]
                constexpr std::ptrdiff_t m_nPersonaDataPublicLevel = 0x5C; // int32
                constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsLeader = 0x60; // int32
                constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsTeacher = 0x64; // int32
                constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsFriendly = 0x68; // int32
                constexpr std::ptrdiff_t m_nPersonaDataXpTrailLevel = 0x6C; // int32
                constexpr std::ptrdiff_t m_vecServerAuthoritativeWeaponSlots = 0x70; // C_UtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>
            }
            // Parent: None
            // Field count: 1
            namespace C_EconEntity__AttachedModelData_t {
                constexpr std::ptrdiff_t m_iModelDisplayFlags = 0x0; // int32
            }
            // Parent: None
            // Field count: 0
            namespace CPulse_ResumePoint {
            }
            // Parent: C_BaseTrigger
            // Field count: 12
            //
            // Metadata:
            // NetworkVarNames: m_vFanOrigin (Vector)
            // NetworkVarNames: m_vFanOriginOffset (Vector)
            // NetworkVarNames: m_vFanEnd (Vector)
            // NetworkVarNames: m_vNoiseDirectionTarget (Vector)
            // NetworkVarNames: m_vDirection (Vector)
            // NetworkVarNames: m_bPushTowardsInfoTarget (bool)
            // NetworkVarNames: m_bPushAwayFromInfoTarget (bool)
            // NetworkVarNames: m_qNoiseDelta (Quaternion)
            // NetworkVarNames: m_hInfoFan (CHandle<CInfoFan>)
            // NetworkVarNames: m_flForce (float)
            // NetworkVarNames: m_bFalloff (bool)
            // NetworkVarNames: m_RampTimer (CountdownTimer)
            namespace CTriggerFan {
                constexpr std::ptrdiff_t m_vFanOrigin = 0x1000; // Vector
                constexpr std::ptrdiff_t m_vFanOriginOffset = 0x100C; // Vector
                constexpr std::ptrdiff_t m_vFanEnd = 0x1018; // Vector
                constexpr std::ptrdiff_t m_vNoiseDirectionTarget = 0x1024; // Vector
                constexpr std::ptrdiff_t m_vDirection = 0x1030; // Vector
                constexpr std::ptrdiff_t m_bPushTowardsInfoTarget = 0x103C; // bool
                constexpr std::ptrdiff_t m_bPushAwayFromInfoTarget = 0x103D; // bool
                constexpr std::ptrdiff_t m_qNoiseDelta = 0x1040; // Quaternion
                constexpr std::ptrdiff_t m_hInfoFan = 0x1050; // CHandle<CInfoFan>
                constexpr std::ptrdiff_t m_flForce = 0x1054; // float32
                constexpr std::ptrdiff_t m_bFalloff = 0x1058; // bool
                constexpr std::ptrdiff_t m_RampTimer = 0x1060; // CountdownTimer
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            namespace C_HostageCarriableProp {
            }
            // Parent: None
            // Field count: 6
            namespace C_BulletHitModel {
                constexpr std::ptrdiff_t m_matLocal = 0x1168; // matrix3x4_t
                constexpr std::ptrdiff_t m_iBoneIndex = 0x1198; // int32
                constexpr std::ptrdiff_t m_hPlayerParent = 0x119C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bIsHit = 0x11A0; // bool
                constexpr std::ptrdiff_t m_flTimeCreated = 0x11A4; // float32
                constexpr std::ptrdiff_t m_vecStartPos = 0x11A8; // Vector
            }
            // Parent: C_FuncBrush
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_EffectName (string_t)
            // NetworkVarNames: m_bState (bool)
            namespace C_FuncElectrifiedVolume {
                constexpr std::ptrdiff_t m_nAmbientEffect = 0xEC0; // ParticleIndex_t
                constexpr std::ptrdiff_t m_EffectName = 0xEC8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bState = 0xED0; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 17
            //
            // Metadata:
            // NetworkVarNames: m_nDraftType (int)
            // NetworkVarNames: m_nTeamWinningCoinToss (int)
            // NetworkVarNames: m_nTeamWithFirstChoice (int)
            // NetworkVarNames: m_nVoteMapIdsList (int)
            // NetworkVarNames: m_nAccountIDs (int)
            // NetworkVarNames: m_nMapId0 (int)
            // NetworkVarNames: m_nMapId1 (int)
            // NetworkVarNames: m_nMapId2 (int)
            // NetworkVarNames: m_nMapId3 (int)
            // NetworkVarNames: m_nMapId4 (int)
            // NetworkVarNames: m_nMapId5 (int)
            // NetworkVarNames: m_nStartingSide0 (int)
            // NetworkVarNames: m_nCurrentPhase (int)
            // NetworkVarNames: m_nPhaseStartTick (int)
            // NetworkVarNames: m_nPhaseDurationTicks (int)
            namespace C_MapVetoPickController {
                constexpr std::ptrdiff_t m_nDraftType = 0x608; // int32
                constexpr std::ptrdiff_t m_nTeamWinningCoinToss = 0x60C; // int32
                constexpr std::ptrdiff_t m_nTeamWithFirstChoice = 0x610; // int32[64]
                constexpr std::ptrdiff_t m_nVoteMapIdsList = 0x710; // int32[7]
                constexpr std::ptrdiff_t m_nAccountIDs = 0x72C; // int32[64]
                constexpr std::ptrdiff_t m_nMapId0 = 0x82C; // int32[64]
                constexpr std::ptrdiff_t m_nMapId1 = 0x92C; // int32[64]
                constexpr std::ptrdiff_t m_nMapId2 = 0xA2C; // int32[64]
                constexpr std::ptrdiff_t m_nMapId3 = 0xB2C; // int32[64]
                constexpr std::ptrdiff_t m_nMapId4 = 0xC2C; // int32[64]
                constexpr std::ptrdiff_t m_nMapId5 = 0xD2C; // int32[64]
                constexpr std::ptrdiff_t m_nStartingSide0 = 0xE2C; // int32[64]
                constexpr std::ptrdiff_t m_nCurrentPhase = 0xF2C; // int32
                constexpr std::ptrdiff_t m_nPhaseStartTick = 0xF30; // int32
                constexpr std::ptrdiff_t m_nPhaseDurationTicks = 0xF34; // int32
                constexpr std::ptrdiff_t m_nPostDataUpdateTick = 0xF38; // int32
                constexpr std::ptrdiff_t m_bDisabledHud = 0xF3C; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 18
            //
            // Metadata:
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_vBoxMins (Vector)
            // NetworkVarNames: m_vBoxMaxs (Vector)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_bIndirectUseLPVs (bool)
            // NetworkVarNames: m_flStrength (float)
            // NetworkVarNames: m_nFalloffShape (int)
            // NetworkVarNames: m_flFalloffExponent (float)
            // NetworkVarNames: m_flHeightFogDepth (float)
            // NetworkVarNames: m_fHeightFogEdgeWidth (float)
            // NetworkVarNames: m_fIndirectLightStrength (float)
            // NetworkVarNames: m_fSunLightStrength (float)
            // NetworkVarNames: m_fNoiseStrength (float)
            // NetworkVarNames: m_TintColor (Color)
            // NetworkVarNames: m_bOverrideTintColor (bool)
            // NetworkVarNames: m_bOverrideIndirectLightStrength (bool)
            // NetworkVarNames: m_bOverrideSunLightStrength (bool)
            // NetworkVarNames: m_bOverrideNoiseStrength (bool)
            namespace C_EnvVolumetricFogVolume {
                constexpr std::ptrdiff_t m_bActive = 0x5F8; // bool
                constexpr std::ptrdiff_t m_vBoxMins = 0x5FC; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x608; // Vector
                constexpr std::ptrdiff_t m_bStartDisabled = 0x614; // bool
                constexpr std::ptrdiff_t m_bIndirectUseLPVs = 0x615; // bool
                constexpr std::ptrdiff_t m_flStrength = 0x618; // float32
                constexpr std::ptrdiff_t m_nFalloffShape = 0x61C; // int32
                constexpr std::ptrdiff_t m_flFalloffExponent = 0x620; // float32
                constexpr std::ptrdiff_t m_flHeightFogDepth = 0x624; // float32
                constexpr std::ptrdiff_t m_fHeightFogEdgeWidth = 0x628; // float32
                constexpr std::ptrdiff_t m_fIndirectLightStrength = 0x62C; // float32
                constexpr std::ptrdiff_t m_fSunLightStrength = 0x630; // float32
                constexpr std::ptrdiff_t m_fNoiseStrength = 0x634; // float32
                constexpr std::ptrdiff_t m_TintColor = 0x638; // Color
                constexpr std::ptrdiff_t m_bOverrideTintColor = 0x63C; // bool
                constexpr std::ptrdiff_t m_bOverrideIndirectLightStrength = 0x63D; // bool
                constexpr std::ptrdiff_t m_bOverrideSunLightStrength = 0x63E; // bool
                constexpr std::ptrdiff_t m_bOverrideNoiseStrength = 0x63F; // bool
            }
            // Parent: C_CSGO_TeamPreviewCharacterPosition
            // Field count: 0
            namespace C_CSGO_EndOfMatchCharacterPosition {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            // MPulseProvideFeatureTag
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CPulseCell_PlaySequence {
                constexpr std::ptrdiff_t m_SequenceName = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_PulseAnimEvents = 0x50; // PulseNodeDynamicOutflows_t
                constexpr std::ptrdiff_t m_OnFinished = 0x68; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_OnCanceled = 0xB0; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPulseProvideFeatureTag
            // MPulseDomainHookInfo
            namespace C_BaseEntityAPI {
            }
            // Parent: C_BaseModelEntity
            // Field count: 76
            //
            // Metadata:
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_nColorMode (int)
            // NetworkVarNames: m_Color (Color)
            // NetworkVarNames: m_flColorTemperature (float)
            // NetworkVarNames: m_flBrightness (float)
            // NetworkVarNames: m_flBrightnessScale (float)
            // NetworkVarNames: m_nDirectLight (int)
            // NetworkVarNames: m_nBakedShadowIndex (int)
            // NetworkVarNames: m_nLightPathUniqueId (int32)
            // NetworkVarNames: m_nLightMapUniqueId (int32)
            // NetworkVarNames: m_nLuminaireShape (int)
            // NetworkVarNames: m_flLuminaireSize (float)
            // NetworkVarNames: m_flLuminaireAnisotropy (float)
            // NetworkVarNames: m_LightStyleString (CUtlString)
            // NetworkVarNames: m_flLightStyleStartTime (GameTime_t)
            // NetworkVarNames: m_QueuedLightStyleStrings (CUtlString)
            // NetworkVarNames: m_LightStyleEvents (CUtlString)
            // NetworkVarNames: m_LightStyleTargets (CHandle<C_BaseModelEntity>)
            // NetworkVarNames: m_hLightCookie (HRenderTextureStrong)
            // NetworkVarNames: m_flShape (float)
            // NetworkVarNames: m_flSoftX (float)
            // NetworkVarNames: m_flSoftY (float)
            // NetworkVarNames: m_flSkirt (float)
            // NetworkVarNames: m_flSkirtNear (float)
            // NetworkVarNames: m_vSizeParams (Vector)
            // NetworkVarNames: m_flRange (float)
            // NetworkVarNames: m_vShear (Vector)
            // NetworkVarNames: m_nBakeSpecularToCubemaps (int)
            // NetworkVarNames: m_vBakeSpecularToCubemapsSize (Vector)
            // NetworkVarNames: m_nCastShadows (int)
            // NetworkVarNames: m_nShadowMapSize (int)
            // NetworkVarNames: m_nShadowPriority (int)
            // NetworkVarNames: m_bContactShadow (bool)
            // NetworkVarNames: m_bForceShadowsEnabled (bool)
            // NetworkVarNames: m_nBounceLight (int)
            // NetworkVarNames: m_flBounceScale (float)
            // NetworkVarNames: m_flMinRoughness (float)
            // NetworkVarNames: m_vAlternateColor (Vector)
            // NetworkVarNames: m_fAlternateColorBrightness (float)
            // NetworkVarNames: m_nFog (int)
            // NetworkVarNames: m_flFogStrength (float)
            // NetworkVarNames: m_nFogShadows (int)
            // NetworkVarNames: m_flFogScale (float)
            // NetworkVarNames: m_bFogMixedShadows (bool)
            // NetworkVarNames: m_flFadeSizeStart (float)
            // NetworkVarNames: m_flFadeSizeEnd (float)
            // NetworkVarNames: m_flShadowFadeSizeStart (float)
            // NetworkVarNames: m_flShadowFadeSizeEnd (float)
            // NetworkVarNames: m_bPrecomputedFieldsValid (bool)
            // NetworkVarNames: m_vPrecomputedBoundsMins (Vector)
            // NetworkVarNames: m_vPrecomputedBoundsMaxs (Vector)
            // NetworkVarNames: m_vPrecomputedOBBOrigin (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent (Vector)
            // NetworkVarNames: m_nPrecomputedSubFrusta (int)
            // NetworkVarNames: m_vPrecomputedOBBOrigin0 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles0 (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent0 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBOrigin1 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles1 (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent1 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBOrigin2 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles2 (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent2 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBOrigin3 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles3 (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent3 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBOrigin4 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles4 (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent4 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBOrigin5 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles5 (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent5 (Vector)
            // NetworkVarNames: m_VisClusters (uint16)
            namespace C_BarnLight {
                constexpr std::ptrdiff_t m_bEnabled = 0xEC0; // bool
                constexpr std::ptrdiff_t m_nColorMode = 0xEC4; // int32
                constexpr std::ptrdiff_t m_Color = 0xEC8; // Color
                constexpr std::ptrdiff_t m_flColorTemperature = 0xECC; // float32
                constexpr std::ptrdiff_t m_flBrightness = 0xED0; // float32
                constexpr std::ptrdiff_t m_flBrightnessScale = 0xED4; // float32
                constexpr std::ptrdiff_t m_nDirectLight = 0xED8; // int32
                constexpr std::ptrdiff_t m_nBakedShadowIndex = 0xEDC; // int32
                constexpr std::ptrdiff_t m_nLightPathUniqueId = 0xEE0; // int32
                constexpr std::ptrdiff_t m_nLightMapUniqueId = 0xEE4; // int32
                constexpr std::ptrdiff_t m_nLuminaireShape = 0xEE8; // int32
                constexpr std::ptrdiff_t m_flLuminaireSize = 0xEEC; // float32
                constexpr std::ptrdiff_t m_flLuminaireAnisotropy = 0xEF0; // float32
                constexpr std::ptrdiff_t m_LightStyleString = 0xEF8; // CUtlString
                constexpr std::ptrdiff_t m_flLightStyleStartTime = 0xF00; // GameTime_t
                constexpr std::ptrdiff_t m_QueuedLightStyleStrings = 0xF08; // C_NetworkUtlVectorBase<CUtlString>
                constexpr std::ptrdiff_t m_LightStyleEvents = 0xF20; // C_NetworkUtlVectorBase<CUtlString>
                constexpr std::ptrdiff_t m_LightStyleTargets = 0xF38; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                constexpr std::ptrdiff_t m_StyleEvent = 0xF50; // CEntityIOOutput[4]
                constexpr std::ptrdiff_t m_hLightCookie = 0xFF0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_flShape = 0xFF8; // float32
                constexpr std::ptrdiff_t m_flSoftX = 0xFFC; // float32
                constexpr std::ptrdiff_t m_flSoftY = 0x1000; // float32
                constexpr std::ptrdiff_t m_flSkirt = 0x1004; // float32
                constexpr std::ptrdiff_t m_flSkirtNear = 0x1008; // float32
                constexpr std::ptrdiff_t m_vSizeParams = 0x100C; // Vector
                constexpr std::ptrdiff_t m_flRange = 0x1018; // float32
                constexpr std::ptrdiff_t m_vShear = 0x101C; // Vector
                constexpr std::ptrdiff_t m_nBakeSpecularToCubemaps = 0x1028; // int32
                constexpr std::ptrdiff_t m_vBakeSpecularToCubemapsSize = 0x102C; // Vector
                constexpr std::ptrdiff_t m_nCastShadows = 0x1038; // int32
                constexpr std::ptrdiff_t m_nShadowMapSize = 0x103C; // int32
                constexpr std::ptrdiff_t m_nShadowPriority = 0x1040; // int32
                constexpr std::ptrdiff_t m_bContactShadow = 0x1044; // bool
                constexpr std::ptrdiff_t m_bForceShadowsEnabled = 0x1045; // bool
                constexpr std::ptrdiff_t m_nBounceLight = 0x1048; // int32
                constexpr std::ptrdiff_t m_flBounceScale = 0x104C; // float32
                constexpr std::ptrdiff_t m_flMinRoughness = 0x1050; // float32
                constexpr std::ptrdiff_t m_vAlternateColor = 0x1054; // Vector
                constexpr std::ptrdiff_t m_fAlternateColorBrightness = 0x1060; // float32
                constexpr std::ptrdiff_t m_nFog = 0x1064; // int32
                constexpr std::ptrdiff_t m_flFogStrength = 0x1068; // float32
                constexpr std::ptrdiff_t m_nFogShadows = 0x106C; // int32
                constexpr std::ptrdiff_t m_flFogScale = 0x1070; // float32
                constexpr std::ptrdiff_t m_bFogMixedShadows = 0x1074; // bool
                constexpr std::ptrdiff_t m_flFadeSizeStart = 0x1078; // float32
                constexpr std::ptrdiff_t m_flFadeSizeEnd = 0x107C; // float32
                constexpr std::ptrdiff_t m_flShadowFadeSizeStart = 0x1080; // float32
                constexpr std::ptrdiff_t m_flShadowFadeSizeEnd = 0x1084; // float32
                constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x1088; // bool
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x108C; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x1098; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x10A4; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x10B0; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x10BC; // Vector
                constexpr std::ptrdiff_t m_nPrecomputedSubFrusta = 0x10C8; // int32
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin0 = 0x10CC; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles0 = 0x10D8; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent0 = 0x10E4; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin1 = 0x10F0; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles1 = 0x10FC; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent1 = 0x1108; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin2 = 0x1114; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles2 = 0x1120; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent2 = 0x112C; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin3 = 0x1138; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles3 = 0x1144; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent3 = 0x1150; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin4 = 0x115C; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles4 = 0x1168; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent4 = 0x1174; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin5 = 0x1180; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles5 = 0x118C; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent5 = 0x1198; // Vector
                constexpr std::ptrdiff_t m_bInitialBoneSetup = 0x11E8; // bool
                constexpr std::ptrdiff_t m_VisClusters = 0x11F0; // C_NetworkUtlVectorBase<uint16>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            namespace CPulseCell_LerpCameraSettings {
                constexpr std::ptrdiff_t m_flSeconds = 0x90; // float32
                constexpr std::ptrdiff_t m_Start = 0x94; // PointCameraSettings_t
                constexpr std::ptrdiff_t m_End = 0xA4; // PointCameraSettings_t
            }
            // Parent: C_PointClientUIWorldPanel
            // Field count: 4
            namespace CPointOffScreenIndicatorUi {
                constexpr std::ptrdiff_t m_bBeenEnabled = 0x1120; // bool
                constexpr std::ptrdiff_t m_bHide = 0x1121; // bool
                constexpr std::ptrdiff_t m_flSeenTargetTime = 0x1124; // float32
                constexpr std::ptrdiff_t m_pTargetPanel = 0x1128; // C_PointClientUIWorldPanel*
            }
            // Parent: CPlayer_UseServices
            // Field count: 0
            namespace CCSObserver_UseServices {
            }
            // Parent: C_BaseTrigger
            // Field count: 12
            //
            // Metadata:
            // NetworkVarNames: m_hPostSettings (HPostProcessingStrong)
            // NetworkVarNames: m_flFadeDuration (float)
            // NetworkVarNames: m_flMinLogExposure (float)
            // NetworkVarNames: m_flMaxLogExposure (float)
            // NetworkVarNames: m_flMinExposure (float)
            // NetworkVarNames: m_flMaxExposure (float)
            // NetworkVarNames: m_flExposureCompensation (float)
            // NetworkVarNames: m_flExposureFadeSpeedUp (float)
            // NetworkVarNames: m_flExposureFadeSpeedDown (float)
            // NetworkVarNames: m_flTonemapEVSmoothingRange (float)
            // NetworkVarNames: m_bMaster (bool)
            // NetworkVarNames: m_bExposureControl (bool)
            namespace C_PostProcessingVolume {
                constexpr std::ptrdiff_t m_hPostSettings = 0x1010; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
                constexpr std::ptrdiff_t m_flFadeDuration = 0x1018; // float32
                constexpr std::ptrdiff_t m_flMinLogExposure = 0x101C; // float32
                constexpr std::ptrdiff_t m_flMaxLogExposure = 0x1020; // float32
                constexpr std::ptrdiff_t m_flMinExposure = 0x1024; // float32
                constexpr std::ptrdiff_t m_flMaxExposure = 0x1028; // float32
                constexpr std::ptrdiff_t m_flExposureCompensation = 0x102C; // float32
                constexpr std::ptrdiff_t m_flExposureFadeSpeedUp = 0x1030; // float32
                constexpr std::ptrdiff_t m_flExposureFadeSpeedDown = 0x1034; // float32
                constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x1038; // float32
                constexpr std::ptrdiff_t m_bMaster = 0x103C; // bool
                constexpr std::ptrdiff_t m_bExposureControl = 0x103D; // bool
            }
            // Parent: CPlayer_UseServices
            // Field count: 0
            namespace CCSPlayer_UseServices {
            }
            // Parent: C_CSGO_TeamPreviewCamera
            // Field count: 0
            namespace C_CSGO_CounterTerroristWingmanIntroCamera {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            // MPulseSelectorAllowRequirementCriteria
            // MPulseSelectorAllowRequirementCriteria
            namespace CPulseCell_PickBestOutflowSelector {
                constexpr std::ptrdiff_t m_nCheckType = 0x48; // PulseBestOutflowRules_t
                constexpr std::ptrdiff_t m_OutflowList = 0x50; // PulseSelectorOutflowList_t
            }
            // Parent: C_PointEntity
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_fFanForceMaxRadius (float)
            // NetworkVarNames: m_fFanForceMinRadius (float)
            // NetworkVarNames: m_flCurveDistRange (float)
            // NetworkVarNames: m_FanForceCurveString (string_t)
            namespace CInfoFan {
                constexpr std::ptrdiff_t m_fFanForceMaxRadius = 0x638; // float32
                constexpr std::ptrdiff_t m_fFanForceMinRadius = 0x63C; // float32
                constexpr std::ptrdiff_t m_flCurveDistRange = 0x640; // float32
                constexpr std::ptrdiff_t m_FanForceCurveString = 0x648; // CUtlSymbolLarge
            }
            // Parent: C_BaseEntity
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_iActiveIssueIndex (int)
            // NetworkVarNames: m_iOnlyTeamToVote (int)
            // NetworkVarNames: m_nVoteOptionCount (int)
            // NetworkVarNames: m_nPotentialVotes (int)
            // NetworkVarNames: m_bIsYesNoVote (bool)
            namespace C_VoteController {
                constexpr std::ptrdiff_t m_iActiveIssueIndex = 0x608; // int32
                constexpr std::ptrdiff_t m_iOnlyTeamToVote = 0x60C; // int32
                constexpr std::ptrdiff_t m_nVoteOptionCount = 0x610; // int32[5]
                constexpr std::ptrdiff_t m_nPotentialVotes = 0x624; // int32
                constexpr std::ptrdiff_t m_bVotesDirty = 0x628; // bool
                constexpr std::ptrdiff_t m_bTypeDirty = 0x629; // bool
                constexpr std::ptrdiff_t m_bIsYesNoVote = 0x62A; // bool
            }
            // Parent: C_BasePlayerPawn
            // Field count: 56
            //
            // Metadata:
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // NetworkVarNames: m_pPingServices (CCSPlayer_PingServices*)
            // NetworkVarNames: m_iPlayerState (CSPlayerState)
            // NetworkVarNames: m_bIsRescuing (bool)
            // NetworkVarNames: m_bHasMovedSinceSpawn (bool)
            // NetworkVarNames: m_fMolotovUseTime (float)
            // NetworkVarNames: m_iThrowGrenadeCounter (int)
            // NetworkVarNames: m_iProgressBarDuration (int)
            // NetworkVarNames: m_flProgressBarStartTime (float)
            // NetworkVarNames: m_flFlashMaxAlpha (float)
            // NetworkVarNames: m_flFlashDuration (float)
            // NetworkVarNames: m_cycleLatch (int)
            // NetworkVarNames: m_hOriginalController (CHandle<CCSPlayerController>)
            namespace C_CSPlayerPawnBase {
                constexpr std::ptrdiff_t m_pPingServices = 0x15E8; // CCSPlayer_PingServices*
                constexpr std::ptrdiff_t m_fRenderingClipPlane = 0x15F0; // float32[4]
                constexpr std::ptrdiff_t m_nLastClipPlaneSetupFrame = 0x1600; // int32
                constexpr std::ptrdiff_t m_vecLastClipCameraPos = 0x1604; // Vector
                constexpr std::ptrdiff_t m_vecLastClipCameraForward = 0x1610; // Vector
                constexpr std::ptrdiff_t m_bClipHitStaticWorld = 0x161C; // bool
                constexpr std::ptrdiff_t m_bCachedPlaneIsValid = 0x161D; // bool
                constexpr std::ptrdiff_t m_pClippingWeapon = 0x1620; // C_CSWeaponBase*
                constexpr std::ptrdiff_t m_previousPlayerState = 0x1628; // CSPlayerState
                constexpr std::ptrdiff_t m_iPlayerState = 0x162C; // CSPlayerState
                constexpr std::ptrdiff_t m_bIsRescuing = 0x1630; // bool
                constexpr std::ptrdiff_t m_bHasMovedSinceSpawn = 0x1631; // bool
                constexpr std::ptrdiff_t m_fMolotovUseTime = 0x1634; // float32
                constexpr std::ptrdiff_t m_iThrowGrenadeCounter = 0x1638; // int32
                constexpr std::ptrdiff_t m_flLastSpawnTimeIndex = 0x163C; // GameTime_t
                constexpr std::ptrdiff_t m_iProgressBarDuration = 0x1640; // int32
                constexpr std::ptrdiff_t m_flProgressBarStartTime = 0x1644; // float32
                constexpr std::ptrdiff_t m_vecIntroStartEyePosition = 0x1648; // Vector
                constexpr std::ptrdiff_t m_vecIntroStartPlayerForward = 0x1654; // Vector
                constexpr std::ptrdiff_t m_flClientDeathTime = 0x1660; // GameTime_t
                constexpr std::ptrdiff_t m_bScreenTearFrameCaptured = 0x1664; // bool
                constexpr std::ptrdiff_t m_flFlashBangTime = 0x1668; // float32
                constexpr std::ptrdiff_t m_flFlashScreenshotAlpha = 0x166C; // float32
                constexpr std::ptrdiff_t m_flFlashOverlayAlpha = 0x1670; // float32
                constexpr std::ptrdiff_t m_bFlashBuildUp = 0x1674; // bool
                constexpr std::ptrdiff_t m_bFlashDspHasBeenCleared = 0x1675; // bool
                constexpr std::ptrdiff_t m_bFlashScreenshotHasBeenGrabbed = 0x1676; // bool
                constexpr std::ptrdiff_t m_flFlashMaxAlpha = 0x1678; // float32
                constexpr std::ptrdiff_t m_flFlashDuration = 0x167C; // float32
                constexpr std::ptrdiff_t m_flClientHealthFadeChangeTimestamp = 0x1680; // GameTime_t
                constexpr std::ptrdiff_t m_nClientHealthFadeParityValue = 0x1684; // int32
                constexpr std::ptrdiff_t m_flDeathCCWeight = 0x1690; // float32
                constexpr std::ptrdiff_t m_flPrevRoundEndTime = 0x1694; // float32
                constexpr std::ptrdiff_t m_flPrevMatchEndTime = 0x1698; // float32
                constexpr std::ptrdiff_t m_angEyeAngles = 0x16A0; // QAngle
                constexpr std::ptrdiff_t m_fNextThinkPushAway = 0x1730; // float32
                constexpr std::ptrdiff_t m_iIDEntIndex = 0x1734; // CEntityIndex
                constexpr std::ptrdiff_t m_delayTargetIDTimer = 0x1738; // CountdownTimer
                constexpr std::ptrdiff_t m_iTargetItemEntIdx = 0x1750; // CEntityIndex
                constexpr std::ptrdiff_t m_iOldIDEntIndex = 0x1754; // CEntityIndex
                constexpr std::ptrdiff_t m_holdTargetIDTimer = 0x1758; // CountdownTimer
                constexpr std::ptrdiff_t m_flCurrentMusicStartTime = 0x1774; // float32
                constexpr std::ptrdiff_t m_flMusicRoundStartTime = 0x1778; // float32
                constexpr std::ptrdiff_t m_bDeferStartMusicOnWarmup = 0x177C; // bool
                constexpr std::ptrdiff_t m_cycleLatch = 0x1780; // int32
                constexpr std::ptrdiff_t m_serverIntendedCycle = 0x1784; // float32
                constexpr std::ptrdiff_t m_flLastSmokeOverlayAlpha = 0x1788; // float32
                constexpr std::ptrdiff_t m_flLastSmokeAge = 0x178C; // float32
                constexpr std::ptrdiff_t m_vLastSmokeOverlayColor = 0x1790; // Vector
                constexpr std::ptrdiff_t m_nPlayerInfernoBodyFx = 0x179C; // ParticleIndex_t
                constexpr std::ptrdiff_t m_nPlayerInfernoFootFx = 0x17A0; // ParticleIndex_t
                constexpr std::ptrdiff_t m_flNextMagDropTime = 0x17A4; // float32
                constexpr std::ptrdiff_t m_nLastMagDropAttachmentIndex = 0x17A8; // int32
                constexpr std::ptrdiff_t m_vecLastAliveLocalVelocity = 0x17AC; // Vector
                constexpr std::ptrdiff_t m_bGuardianShouldSprayCustomXMark = 0x17D0; // bool
                constexpr std::ptrdiff_t m_hOriginalController = 0x17D8; // CHandle<CCSPlayerController>
            }
            // Parent: C_CSWeaponBase
            // Field count: 10
            //
            // Metadata:
            // NetworkVarNames: m_bStartedArming (bool)
            // NetworkVarNames: m_fArmedTime (GameTime_t)
            // NetworkVarNames: m_bBombPlacedAnimation (bool)
            // NetworkVarNames: m_bIsPlantingViaUse (bool)
            // NetworkVarNames: m_entitySpottedState (EntitySpottedState_t)
            namespace C_C4 {
                constexpr std::ptrdiff_t m_activeLightParticleIndex = 0x1DF0; // ParticleIndex_t
                constexpr std::ptrdiff_t m_eActiveLightEffect = 0x1DF4; // C4LightEffect_t
                constexpr std::ptrdiff_t m_bStartedArming = 0x1DF8; // bool
                constexpr std::ptrdiff_t m_fArmedTime = 0x1DFC; // GameTime_t
                constexpr std::ptrdiff_t m_bBombPlacedAnimation = 0x1E00; // bool
                constexpr std::ptrdiff_t m_bIsPlantingViaUse = 0x1E01; // bool
                constexpr std::ptrdiff_t m_entitySpottedState = 0x1E08; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_nSpotRules = 0x1E20; // int32
                constexpr std::ptrdiff_t m_bPlayedArmingBeeps = 0x1E24; // bool[7]
                constexpr std::ptrdiff_t m_bBombPlanted = 0x1E2B; // bool
            }
            // Parent: CCSPointScriptEntity
            // Field count: 0
            namespace CCSClientPointScriptEntity {
            }
            // Parent: CBaseProp
            // Field count: 28
            //
            // Metadata:
            // NetworkVarNames: m_CPropDataComponent (CPropDataComponent::Storage_t)
            namespace C_BreakableProp {
                constexpr std::ptrdiff_t m_CPropDataComponent = 0x11A0; // CPropDataComponent
                constexpr std::ptrdiff_t m_OnStartDeath = 0x11E0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnBreak = 0x1208; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnHealthChanged = 0x1230; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnTakeDamage = 0x1258; // CEntityIOOutput
                constexpr std::ptrdiff_t m_impactEnergyScale = 0x1280; // float32
                constexpr std::ptrdiff_t m_iMinHealthDmg = 0x1284; // int32
                constexpr std::ptrdiff_t m_flPressureDelay = 0x1288; // float32
                constexpr std::ptrdiff_t m_flDefBurstScale = 0x128C; // float32
                constexpr std::ptrdiff_t m_vDefBurstOffset = 0x1290; // Vector
                constexpr std::ptrdiff_t m_hBreaker = 0x129C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_PerformanceMode = 0x12A0; // PerformanceMode_t
                constexpr std::ptrdiff_t m_flPreventDamageBeforeTime = 0x12A4; // GameTime_t
                constexpr std::ptrdiff_t m_BreakableContentsType = 0x12A8; // BreakableContentsType_t
                constexpr std::ptrdiff_t m_strBreakableContentsPropGroupOverride = 0x12B0; // CUtlString
                constexpr std::ptrdiff_t m_strBreakableContentsParticleOverride = 0x12B8; // CUtlString
                constexpr std::ptrdiff_t m_bHasBreakPiecesOrCommands = 0x12C0; // bool
                constexpr std::ptrdiff_t m_explodeDamage = 0x12C4; // float32
                constexpr std::ptrdiff_t m_explodeRadius = 0x12C8; // float32
                constexpr std::ptrdiff_t m_explosionDelay = 0x12D0; // float32
                constexpr std::ptrdiff_t m_explosionBuildupSound = 0x12D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionCustomEffect = 0x12E0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionCustomSound = 0x12E8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionModifier = 0x12F0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hPhysicsAttacker = 0x12F8; // CHandle<C_BasePlayerPawn>
                constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0x12FC; // GameTime_t
                constexpr std::ptrdiff_t m_flDefaultFadeScale = 0x1300; // float32
                constexpr std::ptrdiff_t m_hLastAttacker = 0x1304; // CHandle<C_BaseEntity>
            }
            // Parent: CCSGO_WingmanIntroCharacterPosition
            // Field count: 0
            namespace CCSGO_WingmanIntroTerroristPosition {
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPrecipitationVData {
                constexpr std::ptrdiff_t m_szParticlePrecipitationEffect = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_flInnerDistance = 0x108; // float32
                constexpr std::ptrdiff_t m_nAttachType = 0x10C; // ParticleAttachment_t
                constexpr std::ptrdiff_t m_bBatchSameVolumeType = 0x110; // bool
                constexpr std::ptrdiff_t m_nRTEnvCP = 0x114; // int32
                constexpr std::ptrdiff_t m_nRTEnvCPComponent = 0x118; // int32
                constexpr std::ptrdiff_t m_szModifier = 0x120; // CUtlString
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_nMatchSeed (int)
            // NetworkVarNames: m_bBlockersPresent (bool)
            // NetworkVarNames: m_bRoundInProgress (bool)
            // NetworkVarNames: m_iFirstSecondHalfRound (int)
            // NetworkVarNames: m_iBombSite (int)
            namespace C_RetakeGameRules {
                constexpr std::ptrdiff_t m_nMatchSeed = 0xF8; // int32
                constexpr std::ptrdiff_t m_bBlockersPresent = 0xFC; // bool
                constexpr std::ptrdiff_t m_bRoundInProgress = 0xFD; // bool
                constexpr std::ptrdiff_t m_iFirstSecondHalfRound = 0x100; // int32
                constexpr std::ptrdiff_t m_iBombSite = 0x104; // int32
            }
            // Parent: C_SoundAreaEntityBase
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_flRadius (float)
            namespace C_SoundAreaEntitySphere {
                constexpr std::ptrdiff_t m_flRadius = 0x620; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            namespace CPulseCell_Step_EntFire {
                constexpr std::ptrdiff_t m_Input = 0x48; // CUtlString
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponAWP {
            }
            // Parent: C_BaseToggle
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_glowEntity (CHandle<C_BaseModelEntity>)
            // NetworkVarNames: m_usable (bool)
            // NetworkVarNames: m_szDisplayText (string_t)
            namespace C_BaseButton {
                constexpr std::ptrdiff_t m_glowEntity = 0xEC0; // CHandle<C_BaseModelEntity>
                constexpr std::ptrdiff_t m_usable = 0xEC4; // bool
                constexpr std::ptrdiff_t m_szDisplayText = 0xEC8; // CUtlSymbolLarge
            }
            // Parent: CPlayer_ObserverServices
            // Field count: 8
            namespace CCSObserver_ObserverServices {
                constexpr std::ptrdiff_t m_hLastObserverTarget = 0x58; // CEntityHandle
                constexpr std::ptrdiff_t m_vecObserverInterpolateOffset = 0x5C; // Vector
                constexpr std::ptrdiff_t m_vecObserverInterpStartPos = 0x68; // Vector
                constexpr std::ptrdiff_t m_flObsInterp_PathLength = 0x74; // float32
                constexpr std::ptrdiff_t m_qObsInterp_OrientationStart = 0x80; // Quaternion
                constexpr std::ptrdiff_t m_qObsInterp_OrientationTravelDir = 0x90; // Quaternion
                constexpr std::ptrdiff_t m_obsInterpState = 0xA0; // ObserverInterpState_t
                constexpr std::ptrdiff_t m_bObserverInterpolationNeedsDeferredSetup = 0xA4; // bool
            }
            // Parent: CEntityComponent
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bvDisabledHitGroups (uint32)
            namespace CHitboxComponent {
                constexpr std::ptrdiff_t m_bvDisabledHitGroups = 0x24; // uint32[1]
            }
            // Parent: C_BaseEntity
            // Field count: 0
            namespace C_CSMinimapBoundary {
            }
            // Parent: CEntityComponent
            // Field count: 0
            namespace CPathQueryComponent {
            }
            // Parent: C_BaseTrigger
            // Field count: 8
            namespace C_Precipitation {
                constexpr std::ptrdiff_t m_flDensity = 0x1000; // float32
                constexpr std::ptrdiff_t m_flParticleInnerDist = 0x1010; // float32
                constexpr std::ptrdiff_t m_pParticleDef = 0x1018; // char*
                constexpr std::ptrdiff_t m_tParticlePrecipTraceTimer = 0x1040; // TimedEvent[1]
                constexpr std::ptrdiff_t m_bActiveParticlePrecipEmitter = 0x1048; // bool[1]
                constexpr std::ptrdiff_t m_bParticlePrecipInitialized = 0x1049; // bool
                constexpr std::ptrdiff_t m_bHasSimulatedSinceLastSceneObjectUpdate = 0x104A; // bool
                constexpr std::ptrdiff_t m_nAvailableSheetSequencesMaxIndex = 0x104C; // int32
            }
            // Parent: CLogicalEntity
            // Field count: 5
            namespace CLogicRelay {
                constexpr std::ptrdiff_t m_bDisabled = 0x5F8; // bool
                constexpr std::ptrdiff_t m_bWaitForRefire = 0x5F9; // bool
                constexpr std::ptrdiff_t m_bTriggerOnce = 0x5FA; // bool
                constexpr std::ptrdiff_t m_bFastRetrigger = 0x5FB; // bool
                constexpr std::ptrdiff_t m_bPassthoughCaller = 0x5FC; // bool
            }
            // Parent: None
            // Field count: 6
            namespace SequenceHistory_t {
                constexpr std::ptrdiff_t m_hSequence = 0x0; // HSequence
                constexpr std::ptrdiff_t m_flSeqStartTime = 0x4; // GameTime_t
                constexpr std::ptrdiff_t m_flSeqFixedCycle = 0x8; // float32
                constexpr std::ptrdiff_t m_nSeqLoopMode = 0xC; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_flPlaybackRate = 0x10; // float32
                constexpr std::ptrdiff_t m_flCyclesPerSecond = 0x14; // float32
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CPlayer_ItemServices {
            }
            // Parent: None
            // Field count: 4
            namespace CPulse_OutflowConnection {
                constexpr std::ptrdiff_t m_SourceOutflowName = 0x0; // PulseSymbol_t
                constexpr std::ptrdiff_t m_nDestChunk = 0x10; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_nInstruction = 0x14; // int32
                constexpr std::ptrdiff_t m_OutflowRegisterMap = 0x18; // PulseRegisterMap_t
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponUMP45 {
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponG3SG1 {
            }
            // Parent: C_BaseModelEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flLightScale (float32)
            // NetworkVarNames: m_Radius (float32)
            namespace C_SpotlightEnd {
                constexpr std::ptrdiff_t m_flLightScale = 0xEC0; // float32
                constexpr std::ptrdiff_t m_Radius = 0xEC4; // float32
            }
            // Parent: CBaseAnimGraph
            // Field count: 23
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // NetworkVarNames: m_poolOrigin (Vector)
            // NetworkVarNames: m_waterLevel (float32)
            // NetworkVarNames: m_x (float32)
            // NetworkVarNames: m_y (float32)
            // NetworkVarNames: m_z (float32)
            // NetworkVarNames: m_angle (float32)
            namespace C_Fish {
                constexpr std::ptrdiff_t m_pos = 0x1168; // Vector
                constexpr std::ptrdiff_t m_vel = 0x1174; // Vector
                constexpr std::ptrdiff_t m_angles = 0x1180; // QAngle
                constexpr std::ptrdiff_t m_localLifeState = 0x118C; // int32
                constexpr std::ptrdiff_t m_deathDepth = 0x1190; // float32
                constexpr std::ptrdiff_t m_deathAngle = 0x1194; // float32
                constexpr std::ptrdiff_t m_buoyancy = 0x1198; // float32
                constexpr std::ptrdiff_t m_wiggleTimer = 0x11A0; // CountdownTimer
                constexpr std::ptrdiff_t m_wigglePhase = 0x11B8; // float32
                constexpr std::ptrdiff_t m_wiggleRate = 0x11BC; // float32
                constexpr std::ptrdiff_t m_actualPos = 0x11C0; // Vector
                constexpr std::ptrdiff_t m_actualAngles = 0x11CC; // QAngle
                constexpr std::ptrdiff_t m_poolOrigin = 0x11D8; // Vector
                constexpr std::ptrdiff_t m_waterLevel = 0x11E4; // float32
                constexpr std::ptrdiff_t m_gotUpdate = 0x11E8; // bool
                constexpr std::ptrdiff_t m_x = 0x11EC; // float32
                constexpr std::ptrdiff_t m_y = 0x11F0; // float32
                constexpr std::ptrdiff_t m_z = 0x11F4; // float32
                constexpr std::ptrdiff_t m_angle = 0x11F8; // float32
                constexpr std::ptrdiff_t m_errorHistory = 0x11FC; // float32[20]
                constexpr std::ptrdiff_t m_errorHistoryIndex = 0x124C; // int32
                constexpr std::ptrdiff_t m_errorHistoryCount = 0x1250; // int32
                constexpr std::ptrdiff_t m_averageError = 0x1254; // float32
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponFamas {
            }
            // Parent: C_BaseEntity
            // Field count: 36
            //
            // Metadata:
            // NetworkVarNames: m_flScattering (float)
            // NetworkVarNames: m_TintColor (Color)
            // NetworkVarNames: m_flAnisotropy (float)
            // NetworkVarNames: m_flFadeSpeed (float)
            // NetworkVarNames: m_flDrawDistance (float)
            // NetworkVarNames: m_flFadeInStart (float)
            // NetworkVarNames: m_flFadeInEnd (float)
            // NetworkVarNames: m_flIndirectStrength (float)
            // NetworkVarNames: m_nVolumeDepth (int)
            // NetworkVarNames: m_fFirstVolumeSliceThickness (float)
            // NetworkVarNames: m_nIndirectTextureDimX (int)
            // NetworkVarNames: m_nIndirectTextureDimY (int)
            // NetworkVarNames: m_nIndirectTextureDimZ (int)
            // NetworkVarNames: m_vBoxMins (Vector)
            // NetworkVarNames: m_vBoxMaxs (Vector)
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_flStartAnisoTime (GameTime_t)
            // NetworkVarNames: m_flStartScatterTime (GameTime_t)
            // NetworkVarNames: m_flStartDrawDistanceTime (GameTime_t)
            // NetworkVarNames: m_flStartAnisotropy (float)
            // NetworkVarNames: m_flStartScattering (float)
            // NetworkVarNames: m_flStartDrawDistance (float)
            // NetworkVarNames: m_flDefaultAnisotropy (float)
            // NetworkVarNames: m_flDefaultScattering (float)
            // NetworkVarNames: m_flDefaultDrawDistance (float)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_bEnableIndirect (bool)
            // NetworkVarNames: m_bIsMaster (bool)
            // NetworkVarNames: m_hFogIndirectTexture (HRenderTextureStrong)
            // NetworkVarNames: m_nForceRefreshCount (int)
            // NetworkVarNames: m_fNoiseSpeed (float)
            // NetworkVarNames: m_fNoiseStrength (float)
            // NetworkVarNames: m_vNoiseScale (Vector)
            // NetworkVarNames: m_fWindSpeed (float)
            // NetworkVarNames: m_vWindDirection (Vector)
            namespace C_EnvVolumetricFogController {
                constexpr std::ptrdiff_t m_flScattering = 0x5F8; // float32
                constexpr std::ptrdiff_t m_TintColor = 0x5FC; // Color
                constexpr std::ptrdiff_t m_flAnisotropy = 0x600; // float32
                constexpr std::ptrdiff_t m_flFadeSpeed = 0x604; // float32
                constexpr std::ptrdiff_t m_flDrawDistance = 0x608; // float32
                constexpr std::ptrdiff_t m_flFadeInStart = 0x60C; // float32
                constexpr std::ptrdiff_t m_flFadeInEnd = 0x610; // float32
                constexpr std::ptrdiff_t m_flIndirectStrength = 0x614; // float32
                constexpr std::ptrdiff_t m_nVolumeDepth = 0x618; // int32
                constexpr std::ptrdiff_t m_fFirstVolumeSliceThickness = 0x61C; // float32
                constexpr std::ptrdiff_t m_nIndirectTextureDimX = 0x620; // int32
                constexpr std::ptrdiff_t m_nIndirectTextureDimY = 0x624; // int32
                constexpr std::ptrdiff_t m_nIndirectTextureDimZ = 0x628; // int32
                constexpr std::ptrdiff_t m_vBoxMins = 0x62C; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x638; // Vector
                constexpr std::ptrdiff_t m_bActive = 0x644; // bool
                constexpr std::ptrdiff_t m_flStartAnisoTime = 0x648; // GameTime_t
                constexpr std::ptrdiff_t m_flStartScatterTime = 0x64C; // GameTime_t
                constexpr std::ptrdiff_t m_flStartDrawDistanceTime = 0x650; // GameTime_t
                constexpr std::ptrdiff_t m_flStartAnisotropy = 0x654; // float32
                constexpr std::ptrdiff_t m_flStartScattering = 0x658; // float32
                constexpr std::ptrdiff_t m_flStartDrawDistance = 0x65C; // float32
                constexpr std::ptrdiff_t m_flDefaultAnisotropy = 0x660; // float32
                constexpr std::ptrdiff_t m_flDefaultScattering = 0x664; // float32
                constexpr std::ptrdiff_t m_flDefaultDrawDistance = 0x668; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x66C; // bool
                constexpr std::ptrdiff_t m_bEnableIndirect = 0x66D; // bool
                constexpr std::ptrdiff_t m_bIsMaster = 0x66E; // bool
                constexpr std::ptrdiff_t m_hFogIndirectTexture = 0x670; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_nForceRefreshCount = 0x678; // int32
                constexpr std::ptrdiff_t m_fNoiseSpeed = 0x67C; // float32
                constexpr std::ptrdiff_t m_fNoiseStrength = 0x680; // float32
                constexpr std::ptrdiff_t m_vNoiseScale = 0x684; // Vector
                constexpr std::ptrdiff_t m_fWindSpeed = 0x690; // float32
                constexpr std::ptrdiff_t m_vWindDirection = 0x694; // Vector
                constexpr std::ptrdiff_t m_bFirstTime = 0x6A0; // bool
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseGraphDef {
                constexpr std::ptrdiff_t m_DomainIdentifier = 0x8; // PulseSymbol_t
                constexpr std::ptrdiff_t m_DomainSubType = 0x18; // CPulseValueFullType
                constexpr std::ptrdiff_t m_ParentMapName = 0x30; // PulseSymbol_t
                constexpr std::ptrdiff_t m_ParentXmlName = 0x40; // PulseSymbol_t
                constexpr std::ptrdiff_t m_Chunks = 0x50; // CUtlVector<CPulse_Chunk*>
                constexpr std::ptrdiff_t m_Cells = 0x68; // CUtlVector<CPulseCell_Base*>
                constexpr std::ptrdiff_t m_Vars = 0x80; // CUtlVector<CPulse_Variable>
                constexpr std::ptrdiff_t m_PublicOutputs = 0x98; // CUtlVector<CPulse_PublicOutput>
                constexpr std::ptrdiff_t m_InvokeBindings = 0xB0; // CUtlVector<CPulse_InvokeBinding*>
                constexpr std::ptrdiff_t m_CallInfos = 0xC8; // CUtlVector<CPulse_CallInfo*>
                constexpr std::ptrdiff_t m_Constants = 0xE0; // CUtlVector<CPulse_Constant>
                constexpr std::ptrdiff_t m_DomainValues = 0xF8; // CUtlVector<CPulse_DomainValue>
                constexpr std::ptrdiff_t m_BlackboardReferences = 0x110; // CUtlVector<CPulse_BlackboardReference>
                constexpr std::ptrdiff_t m_OutputConnections = 0x128; // CUtlVector<CPulse_OutputConnection*>
            }
            // Parent: C_BaseEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flFadeStartDist (float32)
            // NetworkVarNames: m_flFadeEndDist (float32)
            namespace C_EnvDetailController {
                constexpr std::ptrdiff_t m_flFadeStartDist = 0x5F8; // float32
                constexpr std::ptrdiff_t m_flFadeEndDist = 0x5FC; // float32
            }
            // Parent: C_BaseEntity
            // Field count: 9
            //
            // Metadata:
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_vBoxMins (Vector)
            // NetworkVarNames: m_vBoxMaxs (Vector)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_nShape (int)
            // NetworkVarNames: m_fWindSpeedMultiplier (float)
            // NetworkVarNames: m_fWindTurbulenceMultiplier (float)
            // NetworkVarNames: m_fWindSpeedVariationMultiplier (float)
            // NetworkVarNames: m_fWindDirectionVariationMultiplier (float)
            namespace C_EnvWindVolume {
                constexpr std::ptrdiff_t m_bActive = 0x5F8; // bool
                constexpr std::ptrdiff_t m_vBoxMins = 0x5FC; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x608; // Vector
                constexpr std::ptrdiff_t m_bStartDisabled = 0x614; // bool
                constexpr std::ptrdiff_t m_nShape = 0x618; // int32
                constexpr std::ptrdiff_t m_fWindSpeedMultiplier = 0x61C; // float32
                constexpr std::ptrdiff_t m_fWindTurbulenceMultiplier = 0x620; // float32
                constexpr std::ptrdiff_t m_fWindSpeedVariationMultiplier = 0x624; // float32
                constexpr std::ptrdiff_t m_fWindDirectionVariationMultiplier = 0x628; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPulseProvideFeatureTag
            // MPulseDomainHookInfo
            namespace CBasePlayerControllerAPI {
            }
            // Parent: C_BaseTrigger
            // Field count: 0
            namespace CHostageRescueZoneShim {
            }
            // Parent: CEnvSoundscape
            // Field count: 0
            namespace CEnvSoundscapeAlias_snd_soundscape {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hCarriedHostage (CHandle<CBaseEntity>)
            // NetworkVarNames: m_hCarriedHostageProp (CHandle<CBaseEntity>)
            namespace CCSPlayer_HostageServices {
                constexpr std::ptrdiff_t m_hCarriedHostage = 0x40; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hCarriedHostageProp = 0x44; // CHandle<C_BaseEntity>
            }
            // Parent: C_BaseEntity
            // Field count: 0
            namespace C_GameRulesProxy {
            }
            // Parent: CEntityComponent
            // Field count: 5
            namespace CRenderComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x10; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_bIsRenderingWithViewModels = 0x50; // bool
                constexpr std::ptrdiff_t m_nSplitscreenFlags = 0x54; // uint32
                constexpr std::ptrdiff_t m_bEnableRendering = 0x58; // bool
                constexpr std::ptrdiff_t m_bInterpolationReadyToDraw = 0xA8; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 4
            //
            // Metadata:
            // MNetworkIncludeByName
            // NetworkVarNames: m_aPlayerControllers (CHandle<CBasePlayerController>)
            // NetworkVarNames: m_aPlayers (CHandle<C_BasePlayerPawn>)
            // NetworkVarNames: m_iScore (int32)
            // NetworkVarNames: m_szTeamname (char)
            namespace C_Team {
                constexpr std::ptrdiff_t m_aPlayerControllers = 0x5F8; // C_NetworkUtlVectorBase<CHandle<CBasePlayerController>>
                constexpr std::ptrdiff_t m_aPlayers = 0x610; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
                constexpr std::ptrdiff_t m_iScore = 0x628; // int32
                constexpr std::ptrdiff_t m_szTeamname = 0x62C; // char[129]
            }
            // Parent: C_PathParticleRope
            // Field count: 0
            namespace C_PathParticleRopeAlias_path_particle_rope_clientside {
            }
            // Parent: C_PointEntity
            // Field count: 1
            namespace CPointChildModifier {
                constexpr std::ptrdiff_t m_bOrphanInsteadOfDeletingChildrenOnRemove = 0x5F8; // bool
            }
            // Parent: C_CSWeaponBase
            // Field count: 0
            namespace C_WeaponNOVA {
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_DEagle {
            }
            // Parent: C_LateUpdatedAnimating
            // Field count: 0
            namespace C_CS2HudModelAddon {
            }
            // Parent: C_BaseTrigger
            // Field count: 0
            namespace C_TriggerMultiple {
            }
            // Parent: C_CSGO_MapPreviewCameraPath
            // Field count: 1
            namespace C_CSGO_TeamPreviewCamera {
                constexpr std::ptrdiff_t m_nVariant = 0x680; // int32
            }
            // Parent: C_BaseEntity
            // Field count: 30
            //
            // Metadata:
            // NetworkVarNames: m_bTimerPaused (bool)
            // NetworkVarNames: m_flTimeRemaining (float)
            // NetworkVarNames: m_flTimerEndTime (GameTime_t)
            // NetworkVarNames: m_bIsDisabled (bool)
            // NetworkVarNames: m_bShowInHUD (bool)
            // NetworkVarNames: m_nTimerLength (int)
            // NetworkVarNames: m_nTimerInitialLength (int)
            // NetworkVarNames: m_nTimerMaxLength (int)
            // NetworkVarNames: m_bAutoCountdown (bool)
            // NetworkVarNames: m_nSetupTimeLength (int)
            // NetworkVarNames: m_nState (int)
            // NetworkVarNames: m_bStartPaused (bool)
            // NetworkVarNames: m_bInCaptureWatchState (bool)
            // NetworkVarNames: m_flTotalTime (float)
            // NetworkVarNames: m_bStopWatchTimer (bool)
            namespace C_TeamRoundTimer {
                constexpr std::ptrdiff_t m_bTimerPaused = 0x5F8; // bool
                constexpr std::ptrdiff_t m_flTimeRemaining = 0x5FC; // float32
                constexpr std::ptrdiff_t m_flTimerEndTime = 0x600; // GameTime_t
                constexpr std::ptrdiff_t m_bIsDisabled = 0x604; // bool
                constexpr std::ptrdiff_t m_bShowInHUD = 0x605; // bool
                constexpr std::ptrdiff_t m_nTimerLength = 0x608; // int32
                constexpr std::ptrdiff_t m_nTimerInitialLength = 0x60C; // int32
                constexpr std::ptrdiff_t m_nTimerMaxLength = 0x610; // int32
                constexpr std::ptrdiff_t m_bAutoCountdown = 0x614; // bool
                constexpr std::ptrdiff_t m_nSetupTimeLength = 0x618; // int32
                constexpr std::ptrdiff_t m_nState = 0x61C; // int32
                constexpr std::ptrdiff_t m_bStartPaused = 0x620; // bool
                constexpr std::ptrdiff_t m_bInCaptureWatchState = 0x621; // bool
                constexpr std::ptrdiff_t m_flTotalTime = 0x624; // float32
                constexpr std::ptrdiff_t m_bStopWatchTimer = 0x628; // bool
                constexpr std::ptrdiff_t m_bFireFinished = 0x629; // bool
                constexpr std::ptrdiff_t m_bFire5MinRemain = 0x62A; // bool
                constexpr std::ptrdiff_t m_bFire4MinRemain = 0x62B; // bool
                constexpr std::ptrdiff_t m_bFire3MinRemain = 0x62C; // bool
                constexpr std::ptrdiff_t m_bFire2MinRemain = 0x62D; // bool
                constexpr std::ptrdiff_t m_bFire1MinRemain = 0x62E; // bool
                constexpr std::ptrdiff_t m_bFire30SecRemain = 0x62F; // bool
                constexpr std::ptrdiff_t m_bFire10SecRemain = 0x630; // bool
                constexpr std::ptrdiff_t m_bFire5SecRemain = 0x631; // bool
                constexpr std::ptrdiff_t m_bFire4SecRemain = 0x632; // bool
                constexpr std::ptrdiff_t m_bFire3SecRemain = 0x633; // bool
                constexpr std::ptrdiff_t m_bFire2SecRemain = 0x634; // bool
                constexpr std::ptrdiff_t m_bFire1SecRemain = 0x635; // bool
                constexpr std::ptrdiff_t m_nOldTimerLength = 0x638; // int32
                constexpr std::ptrdiff_t m_nOldTimerState = 0x63C; // int32
            }
            // Parent: C_BaseTrigger
            // Field count: 9
            //
            // Metadata:
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_MaxWeight (float)
            // NetworkVarNames: m_FadeDuration (float)
            // NetworkVarNames: m_Weight (float)
            // NetworkVarNames: m_lookupFilename (char)
            namespace C_ColorCorrectionVolume {
                constexpr std::ptrdiff_t m_LastEnterWeight = 0x1000; // float32
                constexpr std::ptrdiff_t m_LastEnterTime = 0x1004; // GameTime_t
                constexpr std::ptrdiff_t m_LastExitWeight = 0x1008; // float32
                constexpr std::ptrdiff_t m_LastExitTime = 0x100C; // GameTime_t
                constexpr std::ptrdiff_t m_bEnabled = 0x1010; // bool
                constexpr std::ptrdiff_t m_MaxWeight = 0x1014; // float32
                constexpr std::ptrdiff_t m_FadeDuration = 0x1018; // float32
                constexpr std::ptrdiff_t m_Weight = 0x101C; // float32
                constexpr std::ptrdiff_t m_lookupFilename = 0x1020; // char[512]
            }
            // Parent: CPlayerPawnComponent
            // Field count: 16
            //
            // Metadata:
            // NetworkVarNames: m_nToggleButtonDownMask (ButtonBitMask_t)
            // NetworkVarNames: m_flMaxspeed (float32)
            // NetworkVarNames: m_arrForceSubtickMoveWhen (float32)
            namespace CPlayer_MovementServices {
                constexpr std::ptrdiff_t m_nImpulse = 0x40; // int32
                constexpr std::ptrdiff_t m_nButtons = 0x48; // 
                constexpr std::ptrdiff_t m_nQueuedButtonDownMask = 0x68; // uint64
                constexpr std::ptrdiff_t m_nQueuedButtonChangeMask = 0x70; // uint64
                constexpr std::ptrdiff_t m_nButtonDoublePressed = 0x78; // uint64
                constexpr std::ptrdiff_t m_pButtonPressedCmdNumber = 0x80; // 
                constexpr std::ptrdiff_t m_nLastCommandNumberProcessed = 0x180; // uint32
                constexpr std::ptrdiff_t m_nToggleButtonDownMask = 0x188; // uint64
                constexpr std::ptrdiff_t m_flMaxspeed = 0x198; // float32
                constexpr std::ptrdiff_t m_arrForceSubtickMoveWhen = 0x19C; // float32[4]
                constexpr std::ptrdiff_t m_flForwardMove = 0x1AC; // float32
                constexpr std::ptrdiff_t m_flLeftMove = 0x1B0; // float32
                constexpr std::ptrdiff_t m_flUpMove = 0x1B4; // float32
                constexpr std::ptrdiff_t m_vecLastMovementImpulses = 0x1B8; // Vector
                constexpr std::ptrdiff_t m_vecLastFinishTickViewAngles = 0x220; // QAngle
                constexpr std::ptrdiff_t m_vecOldViewAngles = 0x22C; // QAngle
            }
            // Parent: CInfoDynamicShadowHint
            // Field count: 2
            namespace CInfoDynamicShadowHintBox {
                constexpr std::ptrdiff_t m_vBoxMins = 0x610; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x61C; // Vector
            }
            // Parent: CSkeletonAnimationController
            // Field count: 20
            //
            // Metadata:
            // NetworkVarNames: m_animGraphNetworkedVars (CAnimGraphNetworkedVariables)
            // NetworkVarNames: m_hSequence (HSequence)
            // NetworkVarNames: m_flSeqStartTime (GameTime_t)
            // NetworkVarNames: m_flSeqFixedCycle (float)
            // NetworkVarNames: m_nAnimLoopMode (AnimLoopMode_t)
            // NetworkVarNames: m_hGraphDefinitionAG2 (HNmGraphDefinitionStrong)
            // NetworkVarNames: m_bIsUsingAG2 (bool)
            // NetworkVarNames: m_serializedPoseRecipeAG2 (uint8)
            // NetworkVarNames: m_nSerializePoseRecipeSizeAG2 (int)
            // NetworkVarNames: m_nGraphCreationFlagsAG2 (uint8)
            // NetworkVarNames: m_nServerGraphDefReloadCountAG2 (int)
            namespace CBaseAnimGraphController {
                constexpr std::ptrdiff_t m_animGraphNetworkedVars = 0x18; // CAnimGraphNetworkedVariables
                constexpr std::ptrdiff_t m_bSequenceFinished = 0x14A8; // bool
                constexpr std::ptrdiff_t m_flSoundSyncTime = 0x14AC; // float32
                constexpr std::ptrdiff_t m_nActiveIKChainMask = 0x14B0; // uint32
                constexpr std::ptrdiff_t m_hSequence = 0x14B4; // HSequence
                constexpr std::ptrdiff_t m_flSeqStartTime = 0x14B8; // GameTime_t
                constexpr std::ptrdiff_t m_flSeqFixedCycle = 0x14BC; // float32
                constexpr std::ptrdiff_t m_nAnimLoopMode = 0x14C0; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_flPlaybackRate = 0x14C4; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_nNotifyState = 0x14D0; // SequenceFinishNotifyState_t
                constexpr std::ptrdiff_t m_bNetworkedAnimationInputsChanged = 0x14D2; // bool
                constexpr std::ptrdiff_t m_bNetworkedSequenceChanged = 0x14D3; // bool
                constexpr std::ptrdiff_t m_bLastUpdateSkipped = 0x14D4; // bool
                constexpr std::ptrdiff_t m_flPrevAnimUpdateTime = 0x14D8; // GameTime_t
                constexpr std::ptrdiff_t m_hGraphDefinitionAG2 = 0x1860; // CStrongHandle<InfoForResourceTypeCNmGraphDefinition>
                constexpr std::ptrdiff_t m_bIsUsingAG2 = 0x1868; // bool
                constexpr std::ptrdiff_t m_serializedPoseRecipeAG2 = 0x1870; // C_NetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_nSerializePoseRecipeSizeAG2 = 0x1888; // int32
                constexpr std::ptrdiff_t m_nGraphCreationFlagsAG2 = 0x188C; // uint8
                constexpr std::ptrdiff_t m_nServerGraphDefReloadCountAG2 = 0x18D4; // int32
            }
            // Parent: C_BaseEntity
            // Field count: 18
            //
            // Metadata:
            // MNetworkIncludeByUserGroup
            // NetworkVarNames: m_MinFalloff (float32)
            // NetworkVarNames: m_MaxFalloff (float32)
            // NetworkVarNames: m_flFadeInDuration (float32)
            // NetworkVarNames: m_flFadeOutDuration (float32)
            // NetworkVarNames: m_flMaxWeight (float32)
            // NetworkVarNames: m_flCurWeight (float32)
            // NetworkVarNames: m_netlookupFilename (char)
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_bMaster (bool)
            // NetworkVarNames: m_bClientSide (bool)
            // NetworkVarNames: m_bExclusive (bool)
            namespace C_ColorCorrection {
                constexpr std::ptrdiff_t m_vecOrigin = 0x5F8; // Vector
                constexpr std::ptrdiff_t m_MinFalloff = 0x604; // float32
                constexpr std::ptrdiff_t m_MaxFalloff = 0x608; // float32
                constexpr std::ptrdiff_t m_flFadeInDuration = 0x60C; // float32
                constexpr std::ptrdiff_t m_flFadeOutDuration = 0x610; // float32
                constexpr std::ptrdiff_t m_flMaxWeight = 0x614; // float32
                constexpr std::ptrdiff_t m_flCurWeight = 0x618; // float32
                constexpr std::ptrdiff_t m_netlookupFilename = 0x61C; // char[512]
                constexpr std::ptrdiff_t m_bEnabled = 0x81C; // bool
                constexpr std::ptrdiff_t m_bMaster = 0x81D; // bool
                constexpr std::ptrdiff_t m_bClientSide = 0x81E; // bool
                constexpr std::ptrdiff_t m_bExclusive = 0x81F; // bool
                constexpr std::ptrdiff_t m_bEnabledOnClient = 0x820; // bool[1]
                constexpr std::ptrdiff_t m_flCurWeightOnClient = 0x824; // float32[1]
                constexpr std::ptrdiff_t m_bFadingIn = 0x828; // bool[1]
                constexpr std::ptrdiff_t m_flFadeStartWeight = 0x82C; // float32[1]
                constexpr std::ptrdiff_t m_flFadeStartTime = 0x830; // float32[1]
                constexpr std::ptrdiff_t m_flFadeDuration = 0x834; // float32[1]
            }
            // Parent: None
            // Field count: 10
            namespace CBuoyancyHelper {
                constexpr std::ptrdiff_t m_nFluidType = 0x18; // CUtlStringToken
                constexpr std::ptrdiff_t m_flFluidDensity = 0x1C; // float32
                constexpr std::ptrdiff_t m_flNeutrallyBuoyantGravity = 0x20; // float32
                constexpr std::ptrdiff_t m_flNeutrallyBuoyantLinearDamping = 0x24; // float32
                constexpr std::ptrdiff_t m_flNeutrallyBuoyantAngularDamping = 0x28; // float32
                constexpr std::ptrdiff_t m_bNeutrallyBuoyant = 0x2C; // bool
                constexpr std::ptrdiff_t m_vecFractionOfWheelSubmergedForWheelFriction = 0x30; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_vecWheelFrictionScales = 0x48; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_vecFractionOfWheelSubmergedForWheelDrag = 0x60; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_vecWheelDrag = 0x78; // CUtlVector<float32>
            }
            // Parent: C_Breakable
            // Field count: 0
            namespace C_PhysBox {
            }
            // Parent: CCSPlayerBase_CameraServices
            // Field count: 2
            namespace CCSPlayer_CameraServices {
                constexpr std::ptrdiff_t m_flDeathCamTilt = 0x2A0; // float32
                constexpr std::ptrdiff_t m_vClientScopeInaccuracy = 0x2A8; // Vector
            }
            // Parent: None
            // Field count: 30
            //
            // Metadata:
            // NetworkVarNames: m_hTargetEntity (CHandle<C_BaseEntity>)
            // NetworkVarNames: m_bState (bool)
            // NetworkVarNames: m_bAlwaysUpdate (bool)
            // NetworkVarNames: m_flLightFOV (float32)
            // NetworkVarNames: m_bEnableShadows (bool)
            // NetworkVarNames: m_bSimpleProjection (bool)
            // NetworkVarNames: m_bLightOnlyTarget (bool)
            // NetworkVarNames: m_bLightWorld (bool)
            // NetworkVarNames: m_bCameraSpace (bool)
            // NetworkVarNames: m_flBrightnessScale (float32)
            // NetworkVarNames: m_LightColor (Color)
            // NetworkVarNames: m_flIntensity (float32)
            // NetworkVarNames: m_flLinearAttenuation (float32)
            // NetworkVarNames: m_flQuadraticAttenuation (float32)
            // NetworkVarNames: m_bVolumetric (bool)
            // NetworkVarNames: m_flVolumetricIntensity (float32)
            // NetworkVarNames: m_flNoiseStrength (float32)
            // NetworkVarNames: m_flFlashlightTime (float32)
            // NetworkVarNames: m_nNumPlanes (uint32)
            // NetworkVarNames: m_flPlaneOffset (float32)
            // NetworkVarNames: m_flColorTransitionTime (float32)
            // NetworkVarNames: m_flAmbient (float32)
            // NetworkVarNames: m_SpotlightTextureName (char)
            // NetworkVarNames: m_nSpotlightTextureFrame (int32)
            // NetworkVarNames: m_nShadowQuality (uint32)
            // NetworkVarNames: m_flNearZ (float32)
            // NetworkVarNames: m_flFarZ (float32)
            // NetworkVarNames: m_flProjectionSize (float32)
            // NetworkVarNames: m_flRotation (float32)
            // NetworkVarNames: m_bFlipHorizontal (bool)
            namespace CProjectedTextureBase {
                constexpr std::ptrdiff_t m_hTargetEntity = 0xC; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bState = 0x10; // bool
                constexpr std::ptrdiff_t m_bAlwaysUpdate = 0x11; // bool
                constexpr std::ptrdiff_t m_flLightFOV = 0x14; // float32
                constexpr std::ptrdiff_t m_bEnableShadows = 0x18; // bool
                constexpr std::ptrdiff_t m_bSimpleProjection = 0x19; // bool
                constexpr std::ptrdiff_t m_bLightOnlyTarget = 0x1A; // bool
                constexpr std::ptrdiff_t m_bLightWorld = 0x1B; // bool
                constexpr std::ptrdiff_t m_bCameraSpace = 0x1C; // bool
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x20; // float32
                constexpr std::ptrdiff_t m_LightColor = 0x24; // Color
                constexpr std::ptrdiff_t m_flIntensity = 0x28; // float32
                constexpr std::ptrdiff_t m_flLinearAttenuation = 0x2C; // float32
                constexpr std::ptrdiff_t m_flQuadraticAttenuation = 0x30; // float32
                constexpr std::ptrdiff_t m_bVolumetric = 0x34; // bool
                constexpr std::ptrdiff_t m_flVolumetricIntensity = 0x38; // float32
                constexpr std::ptrdiff_t m_flNoiseStrength = 0x3C; // float32
                constexpr std::ptrdiff_t m_flFlashlightTime = 0x40; // float32
                constexpr std::ptrdiff_t m_nNumPlanes = 0x44; // uint32
                constexpr std::ptrdiff_t m_flPlaneOffset = 0x48; // float32
                constexpr std::ptrdiff_t m_flColorTransitionTime = 0x4C; // float32
                constexpr std::ptrdiff_t m_flAmbient = 0x50; // float32
                constexpr std::ptrdiff_t m_SpotlightTextureName = 0x54; // char[512]
                constexpr std::ptrdiff_t m_nSpotlightTextureFrame = 0x254; // int32
                constexpr std::ptrdiff_t m_nShadowQuality = 0x258; // uint32
                constexpr std::ptrdiff_t m_flNearZ = 0x25C; // float32
                constexpr std::ptrdiff_t m_flFarZ = 0x260; // float32
                constexpr std::ptrdiff_t m_flProjectionSize = 0x264; // float32
                constexpr std::ptrdiff_t m_flRotation = 0x268; // float32
                constexpr std::ptrdiff_t m_bFlipHorizontal = 0x26C; // bool
            }
            // Parent: CBaseFilter
            // Field count: 3
            namespace CFilterMultiple {
                constexpr std::ptrdiff_t m_nFilterType = 0x650; // filter_t
                constexpr std::ptrdiff_t m_iFilterName = 0x658; // CUtlSymbolLarge[10]
                constexpr std::ptrdiff_t m_hFilter = 0x6A8; // CHandle<C_BaseEntity>[10]
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            namespace CPulseCell_FireCursors {
                constexpr std::ptrdiff_t m_Outflows = 0x48; // CUtlVector<CPulse_OutflowConnection>
                constexpr std::ptrdiff_t m_bWaitForChildOutflows = 0x60; // bool
                constexpr std::ptrdiff_t m_OnFinished = 0x68; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_OnCanceled = 0xB0; // CPulse_ResumePoint
            }
            // Parent: C_BaseEntity
            // Field count: 11
            namespace CEnvSoundscape {
                constexpr std::ptrdiff_t m_OnPlay = 0x5F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_flRadius = 0x620; // float32
                constexpr std::ptrdiff_t m_soundEventName = 0x628; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bOverrideWithEvent = 0x630; // bool
                constexpr std::ptrdiff_t m_soundscapeIndex = 0x634; // int32
                constexpr std::ptrdiff_t m_soundscapeEntityListId = 0x638; // int32
                constexpr std::ptrdiff_t m_positionNames = 0x640; // CUtlSymbolLarge[8]
                constexpr std::ptrdiff_t m_hProxySoundscape = 0x680; // 
                constexpr std::ptrdiff_t m_bDisabled = 0x684; // bool
                constexpr std::ptrdiff_t m_soundscapeName = 0x688; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_soundEventHash = 0x690; // uint32
            }
            // Parent: C_SoundEventEntity
            // Field count: 0
            namespace C_SoundEventEntityAlias_snd_event_point {
            }
            // Parent: C_BaseEntity
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_fog (fogparams_t)
            namespace C_FogController {
                constexpr std::ptrdiff_t m_fog = 0x5F8; // fogparams_t
                constexpr std::ptrdiff_t m_bUseAngles = 0x660; // bool
                constexpr std::ptrdiff_t m_iChangedVariables = 0x664; // int32
            }
            // Parent: C_SoundOpvarSetPointBase
            // Field count: 0
            namespace C_SoundOpvarSetOBBWindEntity {
            }
            // Parent: C_BaseCSGrenade
            // Field count: 0
            namespace C_MolotovGrenade {
            }
            // Parent: C_BaseCombatCharacter
            // Field count: 0
            namespace C_NetTestBaseCombatCharacter {
            }
            // Parent: CBodyComponent
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_sceneNode (CGameSceneNode)
            namespace CBodyComponentPoint {
                constexpr std::ptrdiff_t m_sceneNode = 0x80; // CGameSceneNode
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponM4A1Silencer {
            }
            // Parent: None
            // Field count: 29
            //
            // Metadata:
            // NetworkVarNames: m_iItemDefinitionIndex (item_definition_index_t)
            // NetworkVarNames: m_iEntityQuality (int)
            // NetworkVarNames: m_iEntityLevel (uint32)
            // NetworkVarNames: m_iItemIDHigh (uint32)
            // NetworkVarNames: m_iItemIDLow (uint32)
            // NetworkVarNames: m_iAccountID (uint32)
            // NetworkVarNames: m_iInventoryPosition (uint32)
            // NetworkVarNames: m_bInitialized (bool)
            // NetworkVarNames: m_AttributeList (CAttributeList)
            // NetworkVarNames: m_NetworkedDynamicAttributes (CAttributeList)
            // NetworkVarNames: m_szCustomName (char)
            namespace C_EconItemView {
                constexpr std::ptrdiff_t m_bInventoryImageRgbaRequested = 0x60; // bool
                constexpr std::ptrdiff_t m_bInventoryImageTriedCache = 0x61; // bool
                constexpr std::ptrdiff_t m_nInventoryImageRgbaWidth = 0x80; // int32
                constexpr std::ptrdiff_t m_nInventoryImageRgbaHeight = 0x84; // int32
                constexpr std::ptrdiff_t m_szCurrentLoadCachedFileName = 0x88; // char[260]
                constexpr std::ptrdiff_t m_bRestoreCustomMaterialAfterPrecache = 0x1B8; // bool
                constexpr std::ptrdiff_t m_iItemDefinitionIndex = 0x1BA; // uint16
                constexpr std::ptrdiff_t m_iEntityQuality = 0x1BC; // int32
                constexpr std::ptrdiff_t m_iEntityLevel = 0x1C0; // uint32
                constexpr std::ptrdiff_t m_iItemID = 0x1C8; // uint64
                constexpr std::ptrdiff_t m_iItemIDHigh = 0x1D0; // uint32
                constexpr std::ptrdiff_t m_iItemIDLow = 0x1D4; // uint32
                constexpr std::ptrdiff_t m_iAccountID = 0x1D8; // uint32
                constexpr std::ptrdiff_t m_iInventoryPosition = 0x1DC; // uint32
                constexpr std::ptrdiff_t m_bInitialized = 0x1E8; // bool
                constexpr std::ptrdiff_t m_bDisallowSOC = 0x1E9; // bool
                constexpr std::ptrdiff_t m_bIsStoreItem = 0x1EA; // bool
                constexpr std::ptrdiff_t m_bIsTradeItem = 0x1EB; // bool
                constexpr std::ptrdiff_t m_iEntityQuantity = 0x1EC; // int32
                constexpr std::ptrdiff_t m_iRarityOverride = 0x1F0; // int32
                constexpr std::ptrdiff_t m_iQualityOverride = 0x1F4; // int32
                constexpr std::ptrdiff_t m_iOriginOverride = 0x1F8; // int32
                constexpr std::ptrdiff_t m_ubStyleOverride = 0x1FC; // uint8
                constexpr std::ptrdiff_t m_unClientFlags = 0x1FD; // uint8
                constexpr std::ptrdiff_t m_AttributeList = 0x210; // CAttributeList
                constexpr std::ptrdiff_t m_NetworkedDynamicAttributes = 0x288; // CAttributeList
                constexpr std::ptrdiff_t m_szCustomName = 0x300; // char[161]
                constexpr std::ptrdiff_t m_szCustomNameOverride = 0x3A1; // char[161]
                constexpr std::ptrdiff_t m_bInitializedTags = 0x470; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Timeline__TimelineEvent_t {
                constexpr std::ptrdiff_t m_flTimeFromPrevious = 0x0; // float32
                constexpr std::ptrdiff_t m_EventOutflow = 0x8; // CPulse_OutflowConnection
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_IntervalTimer__CursorState_t {
                constexpr std::ptrdiff_t m_StartTime = 0x0; // GameTime_t
                constexpr std::ptrdiff_t m_EndTime = 0x4; // GameTime_t
                constexpr std::ptrdiff_t m_flWaitInterval = 0x8; // float32
                constexpr std::ptrdiff_t m_flWaitIntervalHigh = 0xC; // float32
                constexpr std::ptrdiff_t m_bCompleteOnNextWake = 0x10; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseRequirement {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorHeaderIcon
            namespace CPulseCell_BaseState {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace OutflowWithRequirements_t {
                constexpr std::ptrdiff_t m_Connection = 0x0; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_DestinationFlowNodeID = 0x48; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_RequirementNodeIDs = 0x50; // CUtlVector<PulseDocNodeID_t>
                constexpr std::ptrdiff_t m_nCursorStateBlockIndex = 0x68; // CUtlVector<int32>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            namespace CPulseCell_IsRequirementValid {
            }
            // Parent: C_SoundEventEntity
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_vecCornerPairsNetworked (SoundeventPathCornerPairNetworked_t)
            namespace C_SoundEventPathCornerEntity {
                constexpr std::ptrdiff_t m_vecCornerPairsNetworked = 0x6C0; // C_NetworkUtlVectorBase<SoundeventPathCornerPairNetworked_t>
            }
            // Parent: C_BaseEntity
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_nMode (int)
            // NetworkVarNames: m_vBoxSize (Vector)
            // NetworkVarNames: m_bEnabled (bool)
            namespace C_InfoVisibilityBox {
                constexpr std::ptrdiff_t m_nMode = 0x5FC; // int32
                constexpr std::ptrdiff_t m_vBoxSize = 0x600; // Vector
                constexpr std::ptrdiff_t m_bEnabled = 0x60C; // bool
            }
            // Parent: CPlayer_ItemServices
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_bHasDefuser (bool)
            // NetworkVarNames: m_bHasHelmet (bool)
            namespace CCSPlayer_ItemServices {
                constexpr std::ptrdiff_t m_bHasDefuser = 0x40; // bool
                constexpr std::ptrdiff_t m_bHasHelmet = 0x41; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            // MPropertyFriendlyName
            namespace CPulseCell_Value_Gradient {
                constexpr std::ptrdiff_t m_Gradient = 0x48; // CColorGradient
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_timestamp (GameTime_t)
            // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
            namespace IntervalTimer {
                constexpr std::ptrdiff_t m_timestamp = 0x8; // GameTime_t
                constexpr std::ptrdiff_t m_nWorldGroupId = 0xC; // WorldGroupId_t
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: localSound (Vector)
            // NetworkVarNames: soundscapeIndex (int32)
            // NetworkVarNames: localBits (uint8)
            // NetworkVarNames: soundscapeEntityListIndex (int)
            // NetworkVarNames: soundEventHash (uint32)
            namespace audioparams_t {
                constexpr std::ptrdiff_t localSound = 0x8; // 
                constexpr std::ptrdiff_t soundscapeIndex = 0x68; // int32
                constexpr std::ptrdiff_t localBits = 0x6C; // uint8
                constexpr std::ptrdiff_t soundscapeEntityListIndex = 0x70; // int32
                constexpr std::ptrdiff_t soundEventHash = 0x74; // uint32
            }
            // Parent: C_BaseEntity
            // Field count: 16
            //
            // Metadata:
            // NetworkVarNames: m_flParticleSpacing (float)
            // NetworkVarNames: m_flSlack (float)
            // NetworkVarNames: m_flRadius (float)
            // NetworkVarNames: m_ColorTint (Color)
            // NetworkVarNames: m_nEffectState (int)
            // NetworkVarNames: m_iEffectIndex (HParticleSystemDefinitionStrong)
            // NetworkVarNames: m_PathNodes_Position (Vector)
            // NetworkVarNames: m_PathNodes_TangentIn (Vector)
            // NetworkVarNames: m_PathNodes_TangentOut (Vector)
            // NetworkVarNames: m_PathNodes_Color (Vector)
            // NetworkVarNames: m_PathNodes_PinEnabled (bool)
            // NetworkVarNames: m_PathNodes_RadiusScale (float)
            namespace C_PathParticleRope {
                constexpr std::ptrdiff_t m_bStartActive = 0x600; // bool
                constexpr std::ptrdiff_t m_flMaxSimulationTime = 0x604; // float32
                constexpr std::ptrdiff_t m_iszEffectName = 0x608; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PathNodes_Name = 0x610; // CUtlVector<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_flParticleSpacing = 0x628; // float32
                constexpr std::ptrdiff_t m_flSlack = 0x62C; // float32
                constexpr std::ptrdiff_t m_flRadius = 0x630; // float32
                constexpr std::ptrdiff_t m_ColorTint = 0x634; // Color
                constexpr std::ptrdiff_t m_nEffectState = 0x638; // int32
                constexpr std::ptrdiff_t m_iEffectIndex = 0x640; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_PathNodes_Position = 0x648; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_TangentIn = 0x660; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_TangentOut = 0x678; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_Color = 0x690; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_PinEnabled = 0x6A8; // C_NetworkUtlVectorBase<bool>
                constexpr std::ptrdiff_t m_PathNodes_RadiusScale = 0x6C0; // C_NetworkUtlVectorBase<float32>
            }
            // Parent: C_BaseCSGrenadeProjectile
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_nDecoyShotTick (int)
            namespace C_DecoyProjectile {
                constexpr std::ptrdiff_t m_nDecoyShotTick = 0x1460; // int32
                constexpr std::ptrdiff_t m_nClientLastKnownDecoyShotTick = 0x1464; // int32
                constexpr std::ptrdiff_t m_flTimeParticleEffectSpawn = 0x1488; // GameTime_t
            }
            // Parent: CAttributeManager
            // Field count: 3
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // NetworkVarNames: m_Item (CEconItemView)
            namespace C_AttributeContainer {
                constexpr std::ptrdiff_t m_Item = 0x50; // C_EconItemView
                constexpr std::ptrdiff_t m_iExternalItemProviderRegisteredToken = 0x4C8; // int32
                constexpr std::ptrdiff_t m_ullRegisteredAsItemID = 0x4D0; // uint64
            }
            // Parent: C_BasePlayerWeapon
            // Field count: 54
            //
            // Metadata:
            // MNetworkOutOfPVSUpdates
            // NetworkVarNames: m_iWeaponGameplayAnimState (WeaponGameplayAnimState)
            // NetworkVarNames: m_flWeaponGameplayAnimStateTimestamp (GameTime_t)
            // NetworkVarNames: m_flInspectCancelCompleteTime (GameTime_t)
            // NetworkVarNames: m_bInspectPending (bool)
            // NetworkVarNames: m_weaponMode (CSWeaponMode)
            // NetworkVarNames: m_fAccuracyPenalty (float)
            // NetworkVarNames: m_iRecoilIndex (int)
            // NetworkVarNames: m_flRecoilIndex (float)
            // NetworkVarNames: m_bBurstMode (bool)
            // NetworkVarNames: m_nPostponeFireReadyTicks (GameTick_t)
            // NetworkVarNames: m_flPostponeFireReadyFrac (float)
            // NetworkVarNames: m_bInReload (bool)
            // NetworkVarNames: m_flDisallowAttackAfterReloadStartUntilTime (GameTime_t)
            // NetworkVarNames: m_flDroppedAtTime (GameTime_t)
            // NetworkVarNames: m_bIsHauledBack (bool)
            // NetworkVarNames: m_bSilencerOn (bool)
            // NetworkVarNames: m_flTimeSilencerSwitchComplete (GameTime_t)
            // NetworkVarNames: m_iOriginalTeamNumber (int)
            // NetworkVarNames: m_iMostRecentTeamNumber (int)
            // NetworkVarNames: m_bDroppedNearBuyZone (bool)
            // NetworkVarNames: m_nextPrevOwnerUseTime (GameTime_t)
            // NetworkVarNames: m_hPrevOwner (CHandle<CCSPlayerPawn>)
            // NetworkVarNames: m_nDropTick (GameTick_t)
            // NetworkVarNames: m_bWasActiveWeaponWhenDropped (bool)
            // NetworkVarNames: m_fLastShotTime (GameTime_t)
            // NetworkVarNames: m_iIronSightMode (int)
            // NetworkVarNames: m_flWatTickOffset (float)
            namespace C_CSWeaponBase {
                constexpr std::ptrdiff_t m_thirdPersonFireSequences = 0x1948; // CUtlVector<HSequence>
                constexpr std::ptrdiff_t m_hCurrentThirdPersonSequence = 0x1960; // HSequence
                constexpr std::ptrdiff_t m_thirdPersonSequences = 0x1964; // HSequence[7]
                constexpr std::ptrdiff_t m_iWeaponGameplayAnimState = 0x1998; // WeaponGameplayAnimState
                constexpr std::ptrdiff_t m_flWeaponGameplayAnimStateTimestamp = 0x199C; // GameTime_t
                constexpr std::ptrdiff_t m_flInspectCancelCompleteTime = 0x19A0; // GameTime_t
                constexpr std::ptrdiff_t m_bInspectPending = 0x19A4; // bool
                constexpr std::ptrdiff_t m_bInspectShouldLoop = 0x19A5; // bool
                constexpr std::ptrdiff_t m_flCrosshairDistance = 0x19D0; // float32
                constexpr std::ptrdiff_t m_iAmmoLastCheck = 0x19D4; // int32
                constexpr std::ptrdiff_t m_nLastEmptySoundCmdNum = 0x19D8; // int32
                constexpr std::ptrdiff_t m_bFireOnEmpty = 0x19DC; // bool
                constexpr std::ptrdiff_t m_OnPlayerPickup = 0x19E0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_weaponMode = 0x1A08; // CSWeaponMode
                constexpr std::ptrdiff_t m_flTurningInaccuracyDelta = 0x1A0C; // float32
                constexpr std::ptrdiff_t m_vecTurningInaccuracyEyeDirLast = 0x1A10; // Vector
                constexpr std::ptrdiff_t m_flTurningInaccuracy = 0x1A1C; // float32
                constexpr std::ptrdiff_t m_fAccuracyPenalty = 0x1A20; // float32
                constexpr std::ptrdiff_t m_flLastAccuracyUpdateTime = 0x1A24; // GameTime_t
                constexpr std::ptrdiff_t m_fAccuracySmoothedForZoom = 0x1A28; // float32
                constexpr std::ptrdiff_t m_iRecoilIndex = 0x1A2C; // int32
                constexpr std::ptrdiff_t m_flRecoilIndex = 0x1A30; // float32
                constexpr std::ptrdiff_t m_bBurstMode = 0x1A34; // bool
                constexpr std::ptrdiff_t m_flLastBurstModeChangeTime = 0x1A38; // GameTime_t
                constexpr std::ptrdiff_t m_nPostponeFireReadyTicks = 0x1A3C; // GameTick_t
                constexpr std::ptrdiff_t m_flPostponeFireReadyFrac = 0x1A40; // float32
                constexpr std::ptrdiff_t m_bInReload = 0x1A44; // bool
                constexpr std::ptrdiff_t m_flDisallowAttackAfterReloadStartUntilTime = 0x1A48; // GameTime_t
                constexpr std::ptrdiff_t m_flDroppedAtTime = 0x1A4C; // GameTime_t
                constexpr std::ptrdiff_t m_bIsHauledBack = 0x1A50; // bool
                constexpr std::ptrdiff_t m_bSilencerOn = 0x1A51; // bool
                constexpr std::ptrdiff_t m_flTimeSilencerSwitchComplete = 0x1A54; // GameTime_t
                constexpr std::ptrdiff_t m_iOriginalTeamNumber = 0x1A58; // int32
                constexpr std::ptrdiff_t m_iMostRecentTeamNumber = 0x1A5C; // int32
                constexpr std::ptrdiff_t m_bDroppedNearBuyZone = 0x1A60; // bool
                constexpr std::ptrdiff_t m_flNextAttackRenderTimeOffset = 0x1A64; // float32
                constexpr std::ptrdiff_t m_bClearWeaponIdentifyingUGC = 0x1B00; // bool
                constexpr std::ptrdiff_t m_bVisualsDataSet = 0x1B01; // bool
                constexpr std::ptrdiff_t m_bUIWeapon = 0x1B02; // bool
                constexpr std::ptrdiff_t m_nCustomEconReloadEventId = 0x1B04; // int32
                constexpr std::ptrdiff_t m_nextPrevOwnerUseTime = 0x1B10; // GameTime_t
                constexpr std::ptrdiff_t m_hPrevOwner = 0x1B14; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_nDropTick = 0x1B18; // GameTick_t
                constexpr std::ptrdiff_t m_bWasActiveWeaponWhenDropped = 0x1B1C; // bool
                constexpr std::ptrdiff_t m_donated = 0x1B3C; // bool
                constexpr std::ptrdiff_t m_fLastShotTime = 0x1B40; // GameTime_t
                constexpr std::ptrdiff_t m_bWasOwnedByCT = 0x1B44; // bool
                constexpr std::ptrdiff_t m_bWasOwnedByTerrorist = 0x1B45; // bool
                constexpr std::ptrdiff_t m_flNextClientFireBulletTime = 0x1B48; // float32
                constexpr std::ptrdiff_t m_flNextClientFireBulletTime_Repredict = 0x1B4C; // float32
                constexpr std::ptrdiff_t m_IronSightController = 0x1CB0; // C_IronSightController
                constexpr std::ptrdiff_t m_iIronSightMode = 0x1D60; // int32
                constexpr std::ptrdiff_t m_flLastLOSTraceFailureTime = 0x1D78; // GameTime_t
                constexpr std::ptrdiff_t m_flWatTickOffset = 0x1DD8; // float32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_flValues (float)
            // NetworkVarNames: m_nValueCounts (int)
            // NetworkVarNames: m_nBucketCount (int)
            // NetworkVarNames: m_flInterval (float)
            // NetworkVarNames: m_flFinalValue (float)
            // NetworkVarNames: m_nCompressionType (TimelineCompression_t)
            // NetworkVarNames: m_bStopped (bool)
            namespace CTimeline {
                constexpr std::ptrdiff_t m_flValues = 0x10; // float32[64]
                constexpr std::ptrdiff_t m_nValueCounts = 0x110; // int32[64]
                constexpr std::ptrdiff_t m_nBucketCount = 0x210; // int32
                constexpr std::ptrdiff_t m_flInterval = 0x214; // float32
                constexpr std::ptrdiff_t m_flFinalValue = 0x218; // float32
                constexpr std::ptrdiff_t m_nCompressionType = 0x21C; // TimelineCompression_t
                constexpr std::ptrdiff_t m_bStopped = 0x220; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            namespace CPulseCursorFuncs {
            }
            // Parent: C_BaseEntity
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_flAutoExposureMin (float)
            // NetworkVarNames: m_flAutoExposureMax (float)
            // NetworkVarNames: m_flExposureAdaptationSpeedUp (float)
            // NetworkVarNames: m_flExposureAdaptationSpeedDown (float)
            // NetworkVarNames: m_flTonemapEVSmoothingRange (float)
            namespace C_TonemapController2 {
                constexpr std::ptrdiff_t m_flAutoExposureMin = 0x5F8; // float32
                constexpr std::ptrdiff_t m_flAutoExposureMax = 0x5FC; // float32
                constexpr std::ptrdiff_t m_flExposureAdaptationSpeedUp = 0x600; // float32
                constexpr std::ptrdiff_t m_flExposureAdaptationSpeedDown = 0x604; // float32
                constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x608; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_duration (float32)
            // NetworkVarNames: m_timestamp (GameTime_t)
            // NetworkVarNames: m_timescale (float32)
            // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
            namespace CountdownTimer {
                constexpr std::ptrdiff_t m_duration = 0x8; // float32
                constexpr std::ptrdiff_t m_timestamp = 0xC; // GameTime_t
                constexpr std::ptrdiff_t m_timescale = 0x10; // float32
                constexpr std::ptrdiff_t m_nWorldGroupId = 0x14; // WorldGroupId_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PulseNodeDynamicOutflows_t__DynamicOutflow_t {
                constexpr std::ptrdiff_t m_OutflowID = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_Connection = 0x8; // CPulse_OutflowConnection
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponMag7 {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_nItemDefIndex (uint16)
            // NetworkVarNames: m_nCount (uint16)
            namespace WeaponPurchaseCount_t {
                constexpr std::ptrdiff_t m_nItemDefIndex = 0x30; // uint16
                constexpr std::ptrdiff_t m_nCount = 0x32; // uint16
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            namespace CBasePulseGraphInstance {
            }
            // Parent: CBaseFilter
            // Field count: 3
            namespace FilterHealth {
                constexpr std::ptrdiff_t m_bAdrenalineActive = 0x650; // bool
                constexpr std::ptrdiff_t m_iHealthMin = 0x654; // int32
                constexpr std::ptrdiff_t m_iHealthMax = 0x658; // int32
            }
            // Parent: C_BaseClientUIEntity
            // Field count: 13
            //
            // Metadata:
            // NetworkVarNames: m_bIgnoreInput (bool)
            // NetworkVarNames: m_flWidth (float)
            // NetworkVarNames: m_flHeight (float)
            // NetworkVarNames: m_flDPI (float)
            // NetworkVarNames: m_flInteractDistance (float)
            // NetworkVarNames: m_flDepthOffset (float)
            // NetworkVarNames: m_unOwnerContext (uint32)
            // NetworkVarNames: m_unHorizontalAlign (uint32)
            // NetworkVarNames: m_unVerticalAlign (uint32)
            // NetworkVarNames: m_unOrientation (uint32)
            // NetworkVarNames: m_bAllowInteractionFromAllSceneWorlds (bool)
            // NetworkVarNames: m_vecCSSClasses (string_t)
            namespace C_PointClientUIHUD {
                constexpr std::ptrdiff_t m_bCheckCSSClasses = 0xEF8; // bool
                constexpr std::ptrdiff_t m_bIgnoreInput = 0x1078; // bool
                constexpr std::ptrdiff_t m_flWidth = 0x107C; // float32
                constexpr std::ptrdiff_t m_flHeight = 0x1080; // float32
                constexpr std::ptrdiff_t m_flDPI = 0x1084; // float32
                constexpr std::ptrdiff_t m_flInteractDistance = 0x1088; // float32
                constexpr std::ptrdiff_t m_flDepthOffset = 0x108C; // float32
                constexpr std::ptrdiff_t m_unOwnerContext = 0x1090; // uint32
                constexpr std::ptrdiff_t m_unHorizontalAlign = 0x1094; // uint32
                constexpr std::ptrdiff_t m_unVerticalAlign = 0x1098; // uint32
                constexpr std::ptrdiff_t m_unOrientation = 0x109C; // uint32
                constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0x10A0; // bool
                constexpr std::ptrdiff_t m_vecCSSClasses = 0x10A8; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            namespace CPulseCell_Inflow_GraphHook {
                constexpr std::ptrdiff_t m_HookName = 0x80; // PulseSymbol_t
            }
            // Parent: None
            // Field count: 0
            namespace SignatureOutflow_Resume {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPulseProvideFeatureTag
            // MPulseDomainHookInfo
            namespace CPathSimpleAPI {
            }
            // Parent: C_BaseEntity
            // Field count: 0
            namespace C_InfoLadderDismount {
            }
            // Parent: CBaseAnimGraph
            // Field count: 13
            //
            // Metadata:
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_flStartTime (GameTime_t)
            // NetworkVarNames: m_flStartTimeInCommentary (float32)
            // NetworkVarNames: m_iszCommentaryFile (string_t)
            // NetworkVarNames: m_iszTitle (string_t)
            // NetworkVarNames: m_iszSpeakers (string_t)
            // NetworkVarNames: m_iNodeNumber (int)
            // NetworkVarNames: m_iNodeNumberMax (int)
            // NetworkVarNames: m_bListenedTo (bool)
            // NetworkVarNames: m_hViewPosition (CHandle<C_BaseEntity>)
            namespace C_PointCommentaryNode {
                constexpr std::ptrdiff_t m_bActive = 0x1180; // bool
                constexpr std::ptrdiff_t m_bWasActive = 0x1181; // bool
                constexpr std::ptrdiff_t m_flEndTime = 0x1184; // GameTime_t
                constexpr std::ptrdiff_t m_flStartTime = 0x1188; // GameTime_t
                constexpr std::ptrdiff_t m_flStartTimeInCommentary = 0x118C; // float32
                constexpr std::ptrdiff_t m_iszCommentaryFile = 0x1190; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTitle = 0x1198; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSpeakers = 0x11A0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iNodeNumber = 0x11A8; // int32
                constexpr std::ptrdiff_t m_iNodeNumberMax = 0x11AC; // int32
                constexpr std::ptrdiff_t m_bListenedTo = 0x11B0; // bool
                constexpr std::ptrdiff_t m_hViewPosition = 0x11C0; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bRestartAfterRestore = 0x11C4; // bool
            }
            // Parent: C_Sprite
            // Field count: 0
            namespace CSpriteOriented {
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // NetworkVarNames: m_nModelID (int32)
            // NetworkVarNames: m_hMaterialBase (HMaterialStrong)
            // NetworkVarNames: m_hMaterialDamageOverlay (HMaterialStrong)
            // NetworkVarNames: m_solid (ShardSolid_t)
            // NetworkVarNames: m_vecPanelSize (Vector2D)
            // NetworkVarNames: m_vecStressPositionA (Vector2D)
            // NetworkVarNames: m_vecStressPositionB (Vector2D)
            // NetworkVarNames: m_vecPanelVertices (Vector2D)
            // NetworkVarNames: m_vInitialPanelVertices (Vector4D)
            // NetworkVarNames: m_flGlassHalfThickness (float)
            // NetworkVarNames: m_bHasParent (bool)
            // NetworkVarNames: m_bParentFrozen (bool)
            // NetworkVarNames: m_SurfacePropStringToken (CUtlStringToken)
            namespace shard_model_desc_t {
                constexpr std::ptrdiff_t m_nModelID = 0x8; // int32
                constexpr std::ptrdiff_t m_hMaterialBase = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_hMaterialDamageOverlay = 0x18; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_solid = 0x20; // ShardSolid_t
                constexpr std::ptrdiff_t m_vecPanelSize = 0x24; // Vector2D
                constexpr std::ptrdiff_t m_vecStressPositionA = 0x2C; // Vector2D
                constexpr std::ptrdiff_t m_vecStressPositionB = 0x34; // Vector2D
                constexpr std::ptrdiff_t m_vecPanelVertices = 0x40; // C_NetworkUtlVectorBase<Vector2D>
                constexpr std::ptrdiff_t m_vInitialPanelVertices = 0x58; // C_NetworkUtlVectorBase<Vector4D>
                constexpr std::ptrdiff_t m_flGlassHalfThickness = 0x70; // float32
                constexpr std::ptrdiff_t m_bHasParent = 0x74; // bool
                constexpr std::ptrdiff_t m_bParentFrozen = 0x75; // bool
                constexpr std::ptrdiff_t m_SurfacePropStringToken = 0x78; // CUtlStringToken
            }
            // Parent: C_CS2WeaponModuleBase
            // Field count: 2
            namespace C_KeychainModule {
                constexpr std::ptrdiff_t m_nKeychainDefID = 0x1170; // uint32
                constexpr std::ptrdiff_t m_nKeychainSeed = 0x1174; // uint32
            }
            // Parent: C_BaseModelEntity
            // Field count: 1
            namespace CFuncWater {
                constexpr std::ptrdiff_t m_BuoyancyHelper = 0xEC0; // CBuoyancyHelper
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CCSPlayer_GlowServices {
            }
            // Parent: None
            // Field count: 1
            namespace CCSGameModeRules {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
            }
            // Parent: C_BaseCSGrenade
            // Field count: 0
            namespace C_Flashbang {
            }
            // Parent: C_PointClientUIWorldPanel
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_messageText (char)
            namespace C_PointClientUIWorldTextPanel {
                constexpr std::ptrdiff_t m_messageText = 0x1120; // char[512]
            }
            // Parent: CPlayer_WaterServices
            // Field count: 3
            namespace CCSPlayer_WaterServices {
                constexpr std::ptrdiff_t m_flWaterJumpTime = 0x40; // float32
                constexpr std::ptrdiff_t m_vecWaterJumpVel = 0x44; // Vector
                constexpr std::ptrdiff_t m_flSwimSoundTime = 0x50; // float32
            }
            // Parent: C_CSPlayerPawnBase
            // Field count: 1
            //
            // Metadata:
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            namespace C_CSObserverPawn {
                constexpr std::ptrdiff_t m_hDetectParentChange = 0x17E0; // CEntityHandle
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: nType (FixAngleSet_t)
            // NetworkVarNames: qAngle (QAngle)
            // NetworkVarNames: nIndex (uint32)
            namespace ViewAngleServerChange_t {
                constexpr std::ptrdiff_t nType = 0x30; // FixAngleSet_t
                constexpr std::ptrdiff_t qAngle = 0x34; // QAngle
                constexpr std::ptrdiff_t nIndex = 0x40; // uint32
            }
            // Parent: C_BaseModelEntity
            // Field count: 9
            //
            // Metadata:
            // NetworkVarNames: m_vecLadderDir (Vector)
            // NetworkVarNames: m_vecPlayerMountPositionTop (Vector)
            // NetworkVarNames: m_vecPlayerMountPositionBottom (Vector)
            // NetworkVarNames: m_flAutoRideSpeed (float)
            // NetworkVarNames: m_bFakeLadder (bool)
            namespace C_FuncLadder {
                constexpr std::ptrdiff_t m_vecLadderDir = 0xEC0; // Vector
                constexpr std::ptrdiff_t m_Dismounts = 0xED0; // CUtlVector<CHandle<C_InfoLadderDismount>>
                constexpr std::ptrdiff_t m_vecLocalTop = 0xEE8; // Vector
                constexpr std::ptrdiff_t m_vecPlayerMountPositionTop = 0xEF4; // Vector
                constexpr std::ptrdiff_t m_vecPlayerMountPositionBottom = 0xF00; // Vector
                constexpr std::ptrdiff_t m_flAutoRideSpeed = 0xF0C; // float32
                constexpr std::ptrdiff_t m_bDisabled = 0xF10; // bool
                constexpr std::ptrdiff_t m_bFakeLadder = 0xF11; // bool
                constexpr std::ptrdiff_t m_bHasSlack = 0xF12; // bool
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponMP5SD {
            }
            // Parent: C_BaseModelEntity
            // Field count: 0
            namespace C_World {
            }
            // Parent: C_CSGO_TeamSelectCharacterPosition
            // Field count: 0
            namespace C_CSGO_TeamSelectCounterTerroristPosition {
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponGalilAR {
            }
            // Parent: CPlayer_CameraServices
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: m_iFOV (uint32)
            // NetworkVarNames: m_iFOVStart (uint32)
            // NetworkVarNames: m_flFOVTime (GameTime_t)
            // NetworkVarNames: m_flFOVRate (float32)
            // NetworkVarNames: m_hZoomOwner (CHandle<CBaseEntity>)
            namespace CCSPlayerBase_CameraServices {
                constexpr std::ptrdiff_t m_iFOV = 0x288; // uint32
                constexpr std::ptrdiff_t m_iFOVStart = 0x28C; // uint32
                constexpr std::ptrdiff_t m_flFOVTime = 0x290; // GameTime_t
                constexpr std::ptrdiff_t m_flFOVRate = 0x294; // float32
                constexpr std::ptrdiff_t m_hZoomOwner = 0x298; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_flLastShotFOV = 0x29C; // float32
            }
            // Parent: None
            // Field count: 0
            namespace C_TeamplayRules {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_BaseEntrypoint {
                constexpr std::ptrdiff_t m_EntryChunk = 0x48; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_RegisterMap = 0x50; // PulseRegisterMap_t
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponSG556 {
            }
            // Parent: C_CSPlayerPawnBase
            // Field count: 110
            //
            // Metadata:
            // NetworkVarNames: m_pBulletServices (CCSPlayer_BulletServices*)
            // NetworkVarNames: m_pHostageServices (CCSPlayer_HostageServices*)
            // NetworkVarNames: m_pBuyServices (CCSPlayer_BuyServices*)
            // NetworkVarNames: m_pGlowServices (CCSPlayer_GlowServices*)
            // NetworkVarNames: m_pActionTrackingServices (CCSPlayer_ActionTrackingServices*)
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // NetworkVarNames: m_flHealthShotBoostExpirationTime (GameTime_t)
            // NetworkVarNames: m_bHasFemaleVoice (bool)
            // NetworkVarNames: m_szLastPlaceName (char)
            // NetworkVarNames: m_bInBuyZone (bool)
            // NetworkVarNames: m_aimPunchAngle (QAngle)
            // NetworkVarNames: m_aimPunchAngleVel (QAngle)
            // NetworkVarNames: m_aimPunchTickBase (int)
            // NetworkVarNames: m_aimPunchTickFraction (float)
            // NetworkVarNames: m_bInHostageRescueZone (bool)
            // NetworkVarNames: m_bInBombZone (bool)
            // NetworkVarNames: m_bIsBuyMenuOpen (bool)
            // NetworkVarNames: m_flTimeOfLastInjury (GameTime_t)
            // NetworkVarNames: m_flNextSprayDecalTime (GameTime_t)
            // NetworkVarNames: m_iRetakesOffering (int)
            // NetworkVarNames: m_iRetakesOfferingCard (int)
            // NetworkVarNames: m_bRetakesHasDefuseKit (bool)
            // NetworkVarNames: m_bRetakesMVPLastRound (bool)
            // NetworkVarNames: m_iRetakesMVPBoostItem (int)
            // NetworkVarNames: m_RetakesMVPBoostExtraUtility (loadout_slot_t)
            // NetworkVarNames: m_EconGloves (CEconItemView)
            // NetworkVarNames: m_nEconGlovesChanged (uint8)
            // NetworkVarNames: m_nRagdollDamageBone (int)
            // NetworkVarNames: m_vRagdollDamageForce (Vector)
            // NetworkVarNames: m_vRagdollDamagePosition (Vector)
            // NetworkVarNames: m_szRagdollDamageWeaponName (char)
            // NetworkVarNames: m_bRagdollDamageHeadshot (bool)
            // NetworkVarNames: m_vRagdollServerOrigin (Vector)
            // MNetwork
