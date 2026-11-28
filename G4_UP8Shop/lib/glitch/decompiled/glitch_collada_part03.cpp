#include "Core/Utils/DecompTypes.h"
#include "glitch_collada_part03.h"

// ----------------------------------------------------------------------------
// Function: glitch::collada::CMeshSceneNode::Construct  (binary VA: 0xd4f380)
// Original: glitch::collada::CMeshSceneNode::CMeshSceneNode
// ----------------------------------------------------------------------------
int glitch::collada::CMeshSceneNode::Construct(glitch::IObject::Self *a1, int *a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7;

  *((uint32_t *)a1 + 70) = (uint32_t)(uintptr_t)(&off_207436C);
  *((uint32_t *)a1 + 69) = ((uint32_t)(uintptr_t)&off_207434C);
  *((uint32_t *)a1 + 71) = 0;
  glitch::scene::IMeshSceneNode::Construct(a1, (int)(uintptr_t)(&off_2074684), a4, a5, a6, a7);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20746D0);
  *((uint32_t *)a1 + 70) = ((uint32_t)(uintptr_t)&off_207482C);
  *((uint32_t *)a1 + 65) = a3;
  *((uint32_t *)a1 + 69) = (uint32_t)(uintptr_t)(&off_207480C);
  v7 = *a2;
  *((uint32_t *)a1 + 66) = *a2;
  if ( v7 != 0 )
    sub_8B1B00((volatile int32_t *)(v7 + 4));
  *((uint32_t *)a1 + 67) = -1;
  return glitch::collada::CMeshSceneNode::setAutomaticCulling((int)(uintptr_t)(a1), 0, 2);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CMeshSceneNode::clone  (binary VA: 0xd4f460)
// Original: glitch::collada::CMeshSceneNode::clone
// ----------------------------------------------------------------------------
glitch::collada::CMeshSceneNode::Self * glitch::collada::CMeshSceneNode::clone(glitch::collada::CMeshSceneNode::Self *self, int a2)
{
  glitch::IObject::Self *v2;

  v2 = (glitch::IObject::Self *)opNew(0x120u);
  glitch::collada::CMeshSceneNode::Construct(
    v2,
    (int *)(a2 + 264),
    *(uint32_t *)(a2 + 260),
    0,
    a2 + 144,
    a2 + 156,
    a2 + 172);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v2);
  if ( v2 != nullptr )
    sub_8B1B00((volatile int32_t *)((char *)v2 + *(uint32_t *)(*(uint32_t *)v2 - 16) + 4));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CMeshSceneNode::Destroy  (binary VA: 0xd4f510)
// Original: glitch::collada::CMeshSceneNode::~CMeshSceneNode
// ----------------------------------------------------------------------------
void glitch::collada::CMeshSceneNode::Destroy(volatile int32_t **self, volatile int32_t **a2)
{
  volatile int32_t *v2;
  volatile int32_t *v3;

  v2 = *a2;
  *self = *a2;
  *(volatile int32_t **)((char *)self + *((uint32_t *)v2 - 3)) = a2[7];
  *(volatile int32_t **)((char *)self + *((uint32_t *)*self - 4)) = a2[8];
  if ( *(self + 66) != nullptr )
    sub_5459C0(*(self + 66));
  v3 = a2[1];
  *self = v3;
  *(volatile int32_t **)((char *)self + *((uint32_t *)v3 - 3)) = a2[5];
  *(volatile int32_t **)((char *)self + *((uint32_t *)*self - 4)) = a2[6];
  glitch::scene::ISceneNode::Destroy((glitch::scene::ISceneNode::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CModularSkinnedMeshSceneNode::getCategoryId  (binary VA: 0xd4f5a0)
// Original: glitch::collada::CModularSkinnedMeshSceneNode::getCategoryId
// ----------------------------------------------------------------------------
int glitch::collada::CModularSkinnedMeshSceneNode::getCategoryId(glitch::collada::CModularSkinnedMesh::Self **self, char *a2)
{
  return glitch::collada::CModularSkinnedMesh::getCategoryId(*(self + 66), a2);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CModularSkinnedMeshSceneNode::getCategoryMaterial  (binary VA: 0xd4f5d0)
// Original: glitch::collada::CModularSkinnedMeshSceneNode::getCategoryMaterial
// ----------------------------------------------------------------------------
glitch::collada::CModularSkinnedMeshSceneNode::Self * glitch::collada::CModularSkinnedMeshSceneNode::getCategoryMaterial(glitch::collada::CModularSkinnedMeshSceneNode::Self *self, const char *a2, char *a3)
{
  void (*v3)(glitch::collada::CModularSkinnedMeshSceneNode::Self *);

  v3 = *(void (**)(glitch::collada::CModularSkinnedMeshSceneNode::Self *))(**((uint32_t **)a2 + 66) + 148);
  glitch::collada::CModularSkinnedMesh::getCategoryId(*((glitch::collada::CModularSkinnedMesh::Self **)a2 + 66), a3);
  v3(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CModularSkinnedMeshSceneNode::getCategoryName  (binary VA: 0xd4f640)
// Original: glitch::collada::CModularSkinnedMeshSceneNode::getCategoryName
// ----------------------------------------------------------------------------
int glitch::collada::CModularSkinnedMeshSceneNode::getCategoryName(glitch::collada::CModularSkinnedMesh::Self **self, int a2)
{
  return glitch::collada::CModularSkinnedMesh::getCategoryName(*(self + 66), a2);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CModularSkinnedMeshSceneNode::getModuleId  (binary VA: 0xd4f670)
// Original: glitch::collada::CModularSkinnedMeshSceneNode::getModuleId
// ----------------------------------------------------------------------------
int glitch::collada::CModularSkinnedMeshSceneNode::getModuleId(glitch::collada::CModularSkinnedMesh::Self **self, char *a2)
{
  return glitch::collada::CModularSkinnedMesh::getModuleId(*(self + 66), a2);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CModularSkinnedMeshSceneNode::getModuleId  (binary VA: 0xd4f6a0)
// Original: glitch::collada::CModularSkinnedMeshSceneNode::getModuleId
// ----------------------------------------------------------------------------
int glitch::collada::CModularSkinnedMeshSceneNode::getModuleId(glitch::collada::CModularSkinnedMesh::Self **self, int a2, char *a3)
{
  return glitch::collada::CModularSkinnedMesh::getModuleId(*(self + 66), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CModularSkinnedMeshSceneNode::getCurrentModuleId  (binary VA: 0xd4f6e0)
// Original: glitch::collada::CModularSkinnedMeshSceneNode::getCurrentModuleId
// ----------------------------------------------------------------------------
int glitch::collada::CModularSkinnedMeshSceneNode::getCurrentModuleId(glitch::collada::CModularSkinnedMesh::Self **self, int a2)
{
  return glitch::collada::CModularSkinnedMesh::getCurrentModuleId(*(self + 66), a2);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CModularSkinnedMeshSceneNode::getCurrentModuleName  (binary VA: 0xd4f710)
// Original: glitch::collada::CModularSkinnedMeshSceneNode::getCurrentModuleName
// ----------------------------------------------------------------------------
int glitch::collada::CModularSkinnedMeshSceneNode::getCurrentModuleName(glitch::collada::CModularSkinnedMesh::Self **self, int a2)
{
  return glitch::collada::CModularSkinnedMesh::getCurrentModuleName(*(self + 66), a2);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CModularSkinnedMeshSceneNode::getModuleName  (binary VA: 0xd4f740)
// Original: glitch::collada::CModularSkinnedMeshSceneNode::getModuleName
// ----------------------------------------------------------------------------
int glitch::collada::CModularSkinnedMeshSceneNode::getModuleName(glitch::collada::CModularSkinnedMesh::Self **self, int a2, int a3)
{
  return glitch::collada::CModularSkinnedMesh::getModuleName(*(self + 66), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CModularSkinnedMeshSceneNode::getCategoryCount  (binary VA: 0xd4f780)
// Original: glitch::collada::CModularSkinnedMeshSceneNode::getCategoryCount
// ----------------------------------------------------------------------------
int glitch::collada::CModularSkinnedMeshSceneNode::getCategoryCount(glitch::collada::CModularSkinnedMesh::Self **self)
{
  return glitch::collada::CModularSkinnedMesh::getCategoryCount(*(self + 66));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CModularSkinnedMeshSceneNode::getCategoryModuleCount  (binary VA: 0xd4f7b0)
// Original: glitch::collada::CModularSkinnedMeshSceneNode::getCategoryModuleCount
// ----------------------------------------------------------------------------
int glitch::collada::CModularSkinnedMeshSceneNode::getCategoryModuleCount(glitch::collada::CModularSkinnedMesh::Self **self, int a2)
{
  return glitch::collada::CModularSkinnedMesh::getCategoryModuleCount(*(self + 66), a2);
}



// ============================================================================
// Address:   0xd4f7e0 (size: 15 bytes)
// Symbol:    _ZTv0_n16_NK6glitch7collada28CModularSkinnedMeshSceneNode19serializeAttributesEPNS_2io11IAttributesEPNS2_26SAttributeReadWriteOptionsE
// Demangled: g4_thunk_0xd4f7e0_1(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)const
// ============================================================================
int g4_thunk_0xd4f7e0_2(
        glitch::collada::CModularSkinnedMeshSceneNode::Self *a1,
        int a2,
        int a3)
{
  return glitch::collada::CModularSkinnedMeshSceneNode::serializeAttributes(
           (glitch::collada::CModularSkinnedMeshSceneNode::Self *)((char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 16)),
           a2,
           a3);
}


// ============================================================================
// Address:   0xd4f7f0 (size: 1010 bytes)
// Symbol:    _ZNK6glitch7collada28CModularSkinnedMeshSceneNode19serializeAttributesEPNS_2io11IAttributesEPNS2_26SAttributeReadWriteOptionsE
// Demangled: glitch::collada::CModularSkinnedMeshSceneNode::serializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)const
// ============================================================================
int glitch::collada::CModularSkinnedMeshSceneNode::serializeAttributes(
        glitch::collada::CModularSkinnedMeshSceneNode::Self *a1,
        int a2,
        int a3)
{
  int v3;
  int result;
  int *v5;
  int i;
  int ModuleName;
  unsigned int v8;
  int *v9;
  int *v10;
  int *v11;
  int *v12;
  void (*v13)(int, int, int, int, uint32_t);
  int CurrentModuleId;
  int CategoryName;
  unsigned int v16;
  uint32_t *v17;
  int *v18;
  int *v19;
  unsigned int v20;
  int *v21;
  int *v22;
  int *v23;
  int v24;
  size_t v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int *v32;

  v3 = 0;
  glitch::scene::ISceneNode::serializeAttributes(a1, a2, a3);
  v25 = 0;
  v29 = 0;
  result = glitch::collada::CModularSkinnedMeshSceneNode::getCategoryCount((glitch::collada::CModularSkinnedMesh::Self **)a1);
  if ( result > 0 )
  {
    do
    {
      v5 = (int *)v29;
      for ( i = 0;
            i < glitch::collada::CModularSkinnedMeshSceneNode::getCategoryModuleCount(
                  (glitch::collada::CModularSkinnedMesh::Self **)a1,
                  v3);
            ++i )
      {
        ModuleName = glitch::collada::CModularSkinnedMeshSceneNode::getModuleName(
                       (glitch::collada::CModularSkinnedMesh::Self **)a1,
                       v3,
                       i);
        if ( v5 == (int *)v25 )
        {
          v8 = ((int)(uintptr_t)(v5) - v29) >> 2;
          v26 = 4;
          if ( v8 != 0 )
          {
            if ( v8 > 2 * v8 || 2 * v8 > 0x3FFFFFFF )
              v26 = -4;
            else
              v26 = 8 * v8;
          }
          v24 = ModuleName;
          v30 = sub_4EBDC0(v26);
          v9 = (int *)(v30 + 4 * (((int)(uintptr_t)(v5) - v29) >> 2));
          if ( v9 != nullptr )
            *v9 = v24;
          if ( v5 == (int *)v29 )
          {
            v5 = (int *)(v30 + 4);
          }
          else
          {
            v10 = (int *)v29;
            v11 = (int *)v30;
            do
            {
              if ( v11 != nullptr )
                *v11 = *v10;
              ++v10;
              ++v11;
            }
            while ( v5 != v10 );
            v5 = (int *)(v30 + 4 * (((unsigned int)(uintptr_t)(v5) - v29 - 4) >> 2) + 8);
          }
          if ( v29 != 0 )
            gll_operator_delete_arr(v29);
          v29 = v30;
          v25 = v26 + v30;
        }
        else
        {
          if ( v5 != nullptr )
            *v5 = ModuleName;
          ++v5;
        }
      }
      if ( v5 == (int *)v25 )
      {
        v28 = 1;
        v20 = ((int)(uintptr_t)(v5) - v29) >> 2;
        if ( v20 != 0 )
        {
          if ( v20 > 2 * v20 || 2 * v20 > 0x3FFFFFFF )
            v28 = -1;
          else
            v28 = 2 * v20;
        }
        v21 = (int *)sub_4EBDC0(v28 * 4);
        v12 = v21 + 1;
        v32 = v21;
        v22 = &v21[((int)(uintptr_t)(v5) - v29) >> 2];
        if ( v22 != nullptr )
          *v22 = (int)(uintptr_t)("not used (-1)");
        if ( (int *)v29 != v5 )
        {
          v23 = (int *)v29;
          do
          {
            if ( v21 != nullptr )
              *v21 = *v23;
            ++v23;
            ++v21;
          }
          while ( v23 != v5 );
          v12 = &v32[(((unsigned int)(uintptr_t)(v23) - v29 - 4) >> 2) + 2];
        }
        if ( v29 != 0 )
          gll_operator_delete_arr(v29);
        v25 = (size_t)&v32[v28];
        v29 = (int)(uintptr_t)(v32);
      }
      else
      {
        if ( v5 != nullptr )
          *v5 = (int)(uintptr_t)("not used (-1)");
        v12 = v5 + 1;
      }
      if ( v12 == (int *)v25 )
      {
        v16 = ((int)(uintptr_t)(v12) - v29) >> 2;
        v27 = 4;
        if ( v16 != 0 )
        {
          if ( v16 > 2 * v16 || 2 * v16 > 0x3FFFFFFF )
            v27 = -4;
          else
            v27 = 8 * v16;
        }
        v31 = sub_4EBDC0(v27);
        v17 = (uint32_t *)(v31 + 4 * v16);
        if ( v17 != nullptr )
          *v17 = 0;
        if ( v12 != (int *)v29 )
        {
          v18 = (int *)v29;
          v19 = (int *)v31;
          do
          {
            if ( v19 != nullptr )
              *v19 = *v18;
            ++v18;
            ++v19;
          }
          while ( v12 != v18 );
        }
        if ( v29 != 0 )
          gll_operator_delete_arr(v29);
        v29 = v31;
        v25 = v27 + v31;
      }
      else if ( v12 != nullptr )
      {
        *v12 = 0;
      }
      v13 = *(void (**)(int, int, int, int, uint32_t))(*(uint32_t *)a2 + 244);
      CurrentModuleId = glitch::collada::CModularSkinnedMeshSceneNode::getCurrentModuleId(
                          (glitch::collada::CModularSkinnedMesh::Self **)a1,
                          v3);
      CategoryName = glitch::collada::CModularSkinnedMeshSceneNode::getCategoryName(
                       (glitch::collada::CModularSkinnedMesh::Self **)a1,
                       v3++);
      v13(a2, CategoryName, CurrentModuleId, v29, 0);
      result = glitch::collada::CModularSkinnedMeshSceneNode::getCategoryCount((glitch::collada::CModularSkinnedMesh::Self **)a1);
    }
    while ( v3 < result );
  }
  if ( v29 != 0 )
    return gll_operator_delete_arr(v29);
  return result;
}


// ============================================================================
// Address:   0xd4fbf0 (size: 65 bytes)
// Symbol:    _ZN6glitch7collada28CModularSkinnedMeshSceneNode17setCategoryModuleEiib
// Demangled: glitch::collada::CModularSkinnedMeshSceneNode::setCategoryModule(int,int,bool)
// ============================================================================
unsigned int glitch::collada::CModularSkinnedMeshSceneNode::setCategoryModule(
        glitch::collada::CModularSkinnedMesh::Self **self,
        int a2,
        int a3,
        bool a4)
{
  return glitch::collada::CModularSkinnedMesh::setCategoryModule(*(self + 66), a2, a3, a4);
}


// ============================================================================
// Address:   0xd4fc40 (size: 15 bytes)
// Symbol:    _ZTv0_n20_N6glitch7collada28CModularSkinnedMeshSceneNode21deserializeAttributesEPNS_2io11IAttributesEPNS2_26SAttributeReadWriteOptionsE
// Demangled: g4_thunk_0xd4fc40_3(glitch::io::IAttributes::Self *,glitch::io::SAttributeReadWriteOptions *)
// ============================================================================
int g4_thunk_0xd4fc40_4(
        glitch::collada::CModularSkinnedMeshSceneNode::Self *a1,
        int a2,
        int a3)
{
  return glitch::collada::CModularSkinnedMeshSceneNode::deserializeAttributes(
           (glitch::collada::CModularSkinnedMeshSceneNode::Self *)((char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 20)),
           a2,
           a3);
}


// ============================================================================
// Address:   0xd4fc50 (size: 152 bytes)
// Symbol:    _ZN6glitch7collada28CModularSkinnedMeshSceneNode21deserializeAttributesEPNS_2io11IAttributesEPNS2_26SAttributeReadWriteOptionsE
// Demangled: glitch::collada::CModularSkinnedMeshSceneNode::deserializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)
// ============================================================================
int glitch::collada::CModularSkinnedMeshSceneNode::deserializeAttributes(
        glitch::collada::CModularSkinnedMesh::Self **a1,
        int a2,
        int a3)
{
  int v3;
  int CategoryName;
  char *v5;
  int ModuleId;
  int result;
  char *v8;
  int (*v9)(int, int);

  v3 = 0;
  glitch::scene::ISceneNode::deserializeAttributes(a1, a2, a3);
  while ( 1 )
  {
    result = glitch::collada::CModularSkinnedMeshSceneNode::getCategoryCount(a1);
    if ( v3 >= result )
      break;
    v9 = *(int (**)(int, int))(*(uint32_t *)a2 + 252);
    CategoryName = glitch::collada::CModularSkinnedMeshSceneNode::getCategoryName(a1, v3);
    v5 = (char *)v9(a2, CategoryName);
    ModuleId = glitch::collada::CModularSkinnedMeshSceneNode::getModuleId(a1, v5);
    v8 = (char *)v3++;
    glitch::collada::CModularSkinnedMeshSceneNode::setCategoryModule(a1, (int)(uintptr_t)(v8), ModuleId, true);
  }
  return result;
}


// ============================================================================
// Address:   0xd4fcf0 (size: 65 bytes)
// Symbol:    _ZN6glitch7collada28CModularSkinnedMeshSceneNode17setCategoryModuleEPKcS3_b
// Demangled: glitch::collada::CModularSkinnedMeshSceneNode::setCategoryModule(char const*,char const*,bool)
// ============================================================================
unsigned int glitch::collada::CModularSkinnedMeshSceneNode::setCategoryModule(
        glitch::collada::CModularSkinnedMesh::Self **self,
        char *a2,
        char *a3,
        bool a4)
{
  return glitch::collada::CModularSkinnedMesh::setCategoryModule(*(self + 66), a2, a3, a4);
}


// ============================================================================
// Address:   0xd4fd40 (size: 90 bytes)
// Symbol:    _ZN6glitch7collada14CRootSceneNode9addCameraEPNS0_16CCameraSceneNodeE
// Demangled: glitch::collada::CRootSceneNode::addCamera(glitch::collada::CCameraSceneNode *)
// ============================================================================
int glitch::collada::CRootSceneNode::addCamera(
        glitch::collada::CRootSceneNode::Self *self,
        glitch::collada::CCameraSceneNode *a2)
{
  int v2;

  v2 = sub_4EBDC0(0xCu);
  if ( v2 != -8 )
    *(uint32_t *)(v2 + 8) = (uint32_t)(uintptr_t)(a2);
  return sub_1901920(v2, (char *)self + 336);
}


// ============================================================================
// Address:   0xd4fda0 (size: 90 bytes)
// Symbol:    _ZN6glitch7collada14CRootSceneNode15addMorphingMeshEPNS0_13CMorphingMeshE
// Demangled: glitch::collada::CRootSceneNode::addMorphingMesh(glitch::collada::CMorphingMesh *)
// ============================================================================
int glitch::collada::CRootSceneNode::addMorphingMesh(
        glitch::collada::CRootSceneNode::Self *self,
        glitch::collada::CMorphingMesh::Self *a2)
{
  int v2;

  v2 = sub_4EBDC0(0xCu);
  if ( v2 != -8 )
    *(uint32_t *)(v2 + 8) = (uint32_t)(uintptr_t)(a2);
  return sub_1901920(v2, (char *)self + 328);
}


// ============================================================================
// Address:   0xd4fe00 (size: 126 bytes)
// Symbol:    _ZN6glitch7collada14CRootSceneNode10attachSkinEPNS0_12CSkinnedMeshE
// Demangled: glitch::collada::CRootSceneNode::attachSkin(glitch::collada::CSkinnedMesh *)
// ============================================================================
int glitch::collada::CRootSceneNode::attachSkin(
        glitch::collada::CRootSceneNode::Self *self,
        glitch::collada::CSkinnedMesh::Self *a2)
{
  int v2;

  if ( *((uint8_t *)self + 388) != 0 )
    return glitch::collada::CSkinnedMesh::attach(a2, self);
  v2 = sub_4EBDC0(0xCu);
  if ( v2 != -8 )
    *(uint32_t *)(v2 + 8) = (uint32_t)(uintptr_t)(a2);
  return sub_1901920(v2, (char *)self + 320);
}


// ============================================================================
// Address:   0xd4fe80 (size: 90 bytes)
// Symbol:    _ZN6glitch7collada14CRootSceneNode8addLightEPNS_5scene15CLightSceneNodeE
// Demangled: glitch::collada::CRootSceneNode::addLight(glitch::scene::CLightSceneNode *)
// ============================================================================
int glitch::collada::CRootSceneNode::addLight(
        glitch::collada::CRootSceneNode::Self *self,
        glitch::scene::CLightSceneNode::Self *a2)
{
  int v2;

  v2 = sub_4EBDC0(0xCu);
  if ( v2 != -8 )
    *(uint32_t *)(v2 + 8) = (uint32_t)(uintptr_t)(a2);
  return sub_1901920(v2, (char *)self + 352);
}


// ============================================================================
// Address:   0xd4fee0 (size: 90 bytes)
// Symbol:    _ZN6glitch7collada14CRootSceneNode17addParticleSystemEPNS0_31CParticleSystemEmitterSceneNodeE
// Demangled: glitch::collada::CRootSceneNode::addParticleSystem(glitch::collada::CParticleSystemEmitterSceneNode *)
// ============================================================================
int glitch::collada::CRootSceneNode::addParticleSystem(
        glitch::collada::CRootSceneNode::Self *self,
        glitch::collada::CParticleSystemEmitterSceneNode::Self *a2)
{
  int v2;

  v2 = sub_4EBDC0(0xCu);
  if ( v2 != -8 )
    *(uint32_t *)(v2 + 8) = (uint32_t)(uintptr_t)(a2);
  return sub_1901920(v2, (char *)self + 312);
}


// ============================================================================
// Address:   0xd4ff40 (size: 77 bytes)
// Symbol:    _ZN6glitch7collada14CRootSceneNode20removeParticleSystemEPNS0_31CParticleSystemEmitterSceneNodeE
// Demangled: glitch::collada::CRootSceneNode::removeParticleSystem(glitch::collada::CParticleSystemEmitterSceneNode *)
// ============================================================================
glitch::collada::CParticleSystemEmitterSceneNode::Self **glitch::collada::CRootSceneNode::removeParticleSystem(
        glitch::collada::CRootSceneNode::Self *self,
        glitch::collada::CParticleSystemEmitterSceneNode::Self *a2)
{
  glitch::collada::CParticleSystemEmitterSceneNode::Self *v2;
  glitch::collada::CParticleSystemEmitterSceneNode::Self **result;
  glitch::collada::CParticleSystemEmitterSceneNode::Self *i;
  glitch::collada::CParticleSystemEmitterSceneNode::Self *v5;

  v2 = (glitch::collada::CParticleSystemEmitterSceneNode::Self *)((glitch::collada::CRootSceneNode::Self *)((char *)self + 312));
  result = *((glitch::collada::CParticleSystemEmitterSceneNode::Self ***)self + 78);
  if ( result != (glitch::collada::CParticleSystemEmitterSceneNode::Self **)((char *)self + 312) )
  {
    while ( result[2] != (glitch::collada::CParticleSystemEmitterSceneNode::Self *)(uintptr_t)(a2) )
    {
      result = (glitch::collada::CParticleSystemEmitterSceneNode::Self **)*result;
      if ( v2 == (glitch::collada::CParticleSystemEmitterSceneNode::Self *)result )
        return (glitch::collada::CParticleSystemEmitterSceneNode::Self **)((::CParticleSystemEmitterSceneNode **)(result));
    }
    for ( i = *result; v2 != i; i = *(glitch::collada::CParticleSystemEmitterSceneNode::Self **)i )
    {
      v5 = *((glitch::collada::CParticleSystemEmitterSceneNode::Self **)i + 2);
      if ( v5 != a2 )
      {
        result[2] = v5;
        result = (glitch::collada::CParticleSystemEmitterSceneNode::Self **)*result;
      }
    }
  }
  return result;
}


// ============================================================================
// Address:   0xd4ff90 (size: 702 bytes)
// Symbol:    _ZN6glitch7collada14CRootSceneNode14addLodSelectorERKN5boost13intrusive_ptrINS_5scene12ILODSelectorEEEPKc
// Demangled: glitch::collada::CRootSceneNode::addLodSelector(boost::intrusive_ptr<glitch::scene::ILODSelector> const&,char const*)
// ============================================================================
uint32_t *glitch::collada::CRootSceneNode::addLodSelector(uint32_t *a1, int *a2, unsigned int a3)
{
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *result;
  int v7;
  int v8;
  uint32_t *v9;
  volatile int32_t *v10;
  bool v11;
  int v12;
  volatile int32_t *v13;
  uint32_t *v14;
  char v15; // si
  int v16;
  volatile int32_t *v17;
  typedef int _g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  typedef uint32_t *_g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint32_t *_g4_t_v23;
  typedef uint32_t *_g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef uint32_t *_g4_t_v26;
  typedef uint32_t _g4_t_v27[3];
  typedef uint32_t *_g4_t_v28;
  typedef unsigned int _g4_t_v29;
  typedef volatile int32_t *_g4_t_v30;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v18)) > _g4_s0 ? (4u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v19)) > _g4_s1 ? (4u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v20)) > _g4_s2 ? (4u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v21)) > _g4_s3 ? (4u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v22)) > _g4_s4 ? (4u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v23)) > _g4_s5 ? (4u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v24)) > _g4_s6 ? (8u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v25)) > _g4_s7 ? (12u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v26)) > _g4_s8 ? (12u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v27)) > _g4_s9 ? (16u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v28)) > _g4_s10 ? (28u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v29)) > _g4_s11 ? (32u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v30)) > _g4_s12 ? (36u + sizeof(_g4_t_v30)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);

  v3 = a1 + 92;
  v4 = (uint32_t *)a1[93];
  if ( v4 == nullptr )
    goto LABEL_29;
  v5 = a1 + 92;
  result = (uint32_t *)a1[93];
  do
  {
    while ( result[4] >= a3 )
    {
      v5 = result;
      result = (uint32_t *)result[2];
      if ( result == nullptr )
        goto LABEL_6;
    }
    result = (uint32_t *)result[3];
  }
  while ( result != nullptr );
LABEL_6:
  if ( v3 == v5 || v5[4] > a3 )
  {
    result = a1 + 92;
    do
    {
      while ( v4[4] >= a3 )
      {
        result = v4;
        v4 = (uint32_t *)v4[2];
        if ( v4 == nullptr )
          goto LABEL_12;
      }
      v4 = (uint32_t *)v4[3];
    }
    while ( v4 != nullptr );
LABEL_12:
    if ( v3 != result )
    {
      if ( result[4] <= a3 )
      {
LABEL_23:
        v12 = *a2;
        if ( *a2 != 0 )
        {
          v21 = result;
          sub_8B1B00((volatile int32_t *)(v12 + 4));
          result = v21;
        }
        v13 = (volatile int32_t *)result[5];
        result[5] = v12;
        if ( v13 != nullptr )
          return (uint32_t *)sub_5459C0(v13);
        return result;
      }
      v29 = a3;
      v30 = nullptr;
      v25 = a1 + 91;
      if ( (uint32_t *)a1[94] == result )
      {
        sub_D45AD0((int *)&v28, (int)(uintptr_t)(v25), (int)(uintptr_t)(result), (int)(uintptr_t)(result), &v29);
        result = v28;
      }
      else
      {
        v24 = result;
        v7 = sub_1904940(result);
        if ( a3 <= *(uint32_t *)(v7 + 16) )
        {
          sub_D45F80((int)(uintptr_t)(v27), v25, &v29);
          result = (uint32_t *)v27[0];
        }
        else if ( *(uint32_t *)(v7 + 12) != 0 )
        {
          v8 = (int)(uintptr_t)(operator new(0x18u));
          v9 = v24;
          if ( v8 != -16 )
          {
            *(uint32_t *)(v8 + 16) = v29;
            v10 = v30;
            v11 = v30 == nullptr;
            *(uint32_t *)(v8 + 20) = (uint32_t)(uintptr_t)(v30);
            if ( !v11 )
            {
              v18 = v8;
              sub_8B1B00(v10 + 1);
              v9 = v24;
              v8 = v18;
            }
          }
          v19 = (uint32_t *)v8;
          sub_1904970(1, v8, v9, v3);
          ++a1[96];
          result = v19;
        }
        else
        {
          sub_D45AD0((int *)&v28, (int)(uintptr_t)(v25), 0, v7, &v29);
          result = v28;
        }
      }
LABEL_21:
      if ( v30 != nullptr )
      {
        v20 = result;
        sub_5459C0(v30);
        result = v20;
      }
      goto LABEL_23;
    }
LABEL_29:
    v29 = a3;
    v30 = nullptr;
    if ( a1[96] != 0 && (v14 = (uint32_t *)a1[95], v26 = v14, a3 > v14[4]) )
    {
      v15 = v3 == v14;
      v16 = (int)(uintptr_t)(operator new(0x18u));
      if ( v16 != -16 )
      {
        *(uint32_t *)(v16 + 16) = v29;
        v17 = v30;
        v11 = v30 == nullptr;
        *(uint32_t *)(v16 + 20) = (uint32_t)(uintptr_t)(v30);
        if ( !v11 )
        {
          v22 = v16;
          sub_8B1B00(v17 + 1);
          v16 = v22;
        }
      }
      v23 = (uint32_t *)v16;
      sub_1904970(v15, v16, v26, v3);
      ++a1[96];
      result = v23;
    }
    else
    {
      sub_D45F80((int)(uintptr_t)(v27), a1 + 91, &v29);
      result = (uint32_t *)v27[0];
    }
    goto LABEL_21;
  }
  return result;
}


// ============================================================================
// Address:   0xd50250 (size: 109 bytes)
// Symbol:    _ZN6glitch7collada14CRootSceneNode15getMorphingMeshEPKc
// Demangled: glitch::collada::CRootSceneNode::getMorphingMesh(char const*)
// ============================================================================
int glitch::collada::CRootSceneNode::getMorphingMesh(glitch::collada::CRootSceneNode::Self *self, char *s2)
{
  int v2;
  uint32_t *v3;

  v2 = 0;
  v3 = *((uint32_t **)self + 82);
  if ( v3 != (uint32_t *)((char *)self + 328) )
  {
    while ( 1 )
    {
      v2 = v3[2];
      if ( strcmp(*(const char **)(v2 + 8), s2) == 0 )
        break;
      v3 = (uint32_t *)*v3;
      if ( (uint32_t *)((char *)self + 328) == v3 )
        return 0;
    }
  }
  return v2;
}


// ============================================================================
// Address:   0xd502c0 (size: 107 bytes)
// Symbol:    _ZN6glitch7collada14CRootSceneNode8getLightEPKc
// Demangled: glitch::collada::CRootSceneNode::getLight(char const*)
// ============================================================================
uint32_t *glitch::collada::CRootSceneNode::getLight(glitch::collada::CRootSceneNode::Self *self, char *s2)
{
  uint32_t *result;
  uint32_t **v3;
  const char *s1;

  result = nullptr;
  v3 = *((uint32_t ***)self + 88);
  if ( v3 != (uint32_t **)((char *)self + 352) )
  {
    do
    {
      s1 = (const char *)(*(int (**)(uint32_t *))(*v3[2] + 96))(v3[2]);
      if ( strcmp(s1, s2) == 0 )
        return v3[2];
      v3 = (uint32_t **)*v3;
    }
    while ( (uint32_t **)((char *)self + 352) != v3 );
    return nullptr;
  }
  return result;
}


// ============================================================================
// Address:   0xd50330 (size: 137 bytes)
// Symbol:    _ZNK6glitch7collada14CRootSceneNode11hasMaterialEPKc
// Demangled: glitch::collada::CRootSceneNode::hasMaterial(char const*)const
// ============================================================================
glitch::collada::CRootSceneNode::Self *glitch::collada::CRootSceneNode::hasMaterial(
        glitch::collada::CRootSceneNode::Self *self,
        const char *a2,
        char *s2)
{
  const char *v3;
  volatile int32_t *v4;

  v3 = *((const char **)a2 + 86);
  if ( v3 == a2 + 344 )
  {
LABEL_7:
    *(uint32_t *)self = 0;
  }
  else
  {
    while ( strcmp(**((const char ***)v3 + 2), s2) != 0 )
    {
      v3 = *(const char **)v3;
      if ( a2 + 344 == v3 )
        goto LABEL_7;
    }
    v4 = *((volatile int32_t **)v3 + 3);
    *(uint32_t *)self = (uint32_t)(uintptr_t)(v4);
    if ( v4 != nullptr )
    {
      sub_8B1B00(v4);
      return self;
    }
  }
  return self;
}


// ============================================================================
// Address:   0xd503c0 (size: 354 bytes)
// Symbol:    _ZN6glitch7collada14CRootSceneNode11addMaterialEPNS0_9SMaterialEPNS_5video12IVideoDriverE
// Demangled: glitch::collada::CRootSceneNode::addMaterial(glitch::collada::SMaterial *,glitch::video::IVideoDriver *)
// ============================================================================
volatile int32_t **glitch::collada::CRootSceneNode::addMaterial(
        volatile int32_t **a1,
        uint32_t *a2,
        int a3)
{
  uint32_t *v3;
  uint32_t *v4;
  volatile int32_t *v5;
  int v6;
  bool v7;
  uint32_t *v9;
  uint32_t *v10;
  int v11;
  uint32_t *v12;

  v3 = a2;
  if ( a2 != nullptr )
  {
    sub_8B1B00((uint32_t *)((char *)a2 + *(uint32_t *)(*a2 - 16) + 4));
    v3 = a2;
  }
  v9 = v3;
  glitch::collada::CColladaDatabase::constructMaterial(a1);
  v4 = v9;
  if ( a2 != nullptr )
  {
    sub_5459C0((uint32_t *)((char *)a2 + *(uint32_t *)(*a2 - 16)));
    v4 = v9;
  }
  v5 = *a1;
  if ( *a1 != nullptr )
  {
    v10 = v4;
    sub_8B1B00(v5);
    v12 = v10 + 86;
    v6 = sub_4EBDC0(0x10u);
    if ( v6 == -8 )
    {
      sub_1901920(-8, v12);
    }
    else
    {
      *(uint32_t *)(v6 + 12) = (uint32_t)(uintptr_t)(v5);
      *(uint32_t *)(v6 + 8) = a3;
      v11 = v6;
      sub_8B1B00(v5);
      sub_1901920(v11, v12);
    }
    v7 = *v5 == 2;
    _mm_mfence();
    if ( v7 )
      glitch::video::CMaterial::removeFromRootSceneNode((glitch::video::CMaterial::Self *)v5);
    if ( __sync_fetch_and_add(v5, 0xFFFFFFFF) == 1 )
    {
      glitch::video::CMaterial::Destroy((glitch::video::CMaterial::Self *)v5);
      gll_operator_delete_arr((int)(uintptr_t)(v5));
    }
  }
  return a1;
}


// ============================================================================
// Address:   0xd50530 (size: 156 bytes)
// Symbol:    _ZN6glitch7collada14CRootSceneNode11addMaterialEPKcPNS_5video12IVideoDriverE
// Demangled: glitch::collada::CRootSceneNode::addMaterial(char const*,glitch::video::IVideoDriver *)
// ============================================================================
volatile int32_t **glitch::collada::CRootSceneNode::addMaterial(
        volatile int32_t **self,
        char *a2,
        glitch::video::IVideoDriver::Self *a3)
{
  char *v3;
  volatile int32_t **v4;
  int v5;
  unsigned int v7[7];

  v7[6] = (unsigned int)(uintptr_t)(&self);
  v3 = a2;
  v4 = self;
  v7[0] = 16;
  v5 = (int)(uintptr_t)glitch::collada::CColladaDatabase::find((glitch::collada::CColladaDatabase::Self *)(a2 + 288), (const char *)a3, v7); // G4_PTR32: pointer narrowed to int (32-bit only)
  if ( v5 != 0 && v7[0] == 16 )
    glitch::collada::CRootSceneNode::addMaterial(v4, v3, v5);
  else
    *v4 = nullptr;
  return v4;
}


// ============================================================================
// Address:   0xd505d0 (size: 306 bytes)
// Symbol:    _ZN6glitch7collada14CRootSceneNode11getMaterialEPKcPNS_5video12IVideoDriverE
// Demangled: glitch::collada::CRootSceneNode::getMaterial(char const*,glitch::video::IVideoDriver *)
// ============================================================================
glitch::video::CMaterial::Self **glitch::collada::CRootSceneNode::getMaterial(
        glitch::video::CMaterial::Self **self,
        char *a2,
        glitch::video::IVideoDriver::Self *a3,
        int a4)
{
  glitch::video::CMaterial::Self **v4;
  char *v5;
  glitch::video::CMaterial::Self *v7;
  glitch::video::CMaterial::Self *v8;
  bool v9;
  glitch::video::CMaterial::Self *v10;
  typedef glitch::video::IVideoDriver::Self *_g4_t_v11;
  typedef glitch::video::IVideoDriver::Self *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef glitch::video::CMaterial::Self *_g4_t_v14[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v12)) > _g4_s1 ? (8u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v13)) > _g4_s2 ? (12u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v14)) > _g4_s3 ? (16u + sizeof(_g4_t_v14)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);

  v14[6] = (glitch::video::CMaterial::Self *)&self;
  v4 = self;
  v5 = a2;
  v13 = a4;
  v11 = a3;
  glitch::collada::CRootSceneNode::hasMaterial((glitch::collada::CRootSceneNode::Self *)self, a2, (char *)a3);
  if ( *v4 == nullptr && v13 != 0 )
  {
    glitch::collada::CRootSceneNode::addMaterial((volatile int32_t **)v14, v5, v11);
    v7 = v14[0];
    if ( v14[0] != nullptr )
    {
      v12 = (glitch::video::IVideoDriver::Self *)(v14[0]);
      sub_8B1B00((volatile int32_t *)v14[0]);
      v7 = (glitch::video::CMaterial::Self *)(v12);
    }
    v8 = *v4;
    *v4 = v7;
    if ( v8 != nullptr )
    {
      v9 = *(uint32_t *)v8 == 2;
      _mm_mfence();
      if ( v9 )
        glitch::video::CMaterial::removeFromRootSceneNode(v8);
      if ( __sync_fetch_and_add((volatile int32_t *)v8, 0xFFFFFFFF) == 1 )
      {
        glitch::video::CMaterial::Destroy(v8);
        gll_operator_delete_arr((int)(uintptr_t)(v8));
      }
    }
    v10 = v14[0];
    if ( v14[0] != nullptr )
    {
      v9 = *(uint32_t *)v14[0] == 2;
      _mm_mfence();
      if ( v9 )
        glitch::video::CMaterial::removeFromRootSceneNode(v10);
      if ( __sync_fetch_and_add((volatile int32_t *)v10, 0xFFFFFFFF) == 1 )
      {
        glitch::video::CMaterial::Destroy(v10);
        gll_operator_delete_arr((int)(uintptr_t)(v10));
      }
    }
  }
  return (glitch::video::CMaterial::Self **)((int **)(v4));
}


// ============================================================================
// Address:   0xd50710 (size: 306 bytes)
// Symbol:    _ZN6glitch7collada14CRootSceneNode11getMaterialEPNS0_9SMaterialEPNS_5video12IVideoDriverE
// Demangled: glitch::collada::CRootSceneNode::getMaterial(glitch::collada::SMaterial *,glitch::video::IVideoDriver *)
// ============================================================================
glitch::video::CMaterial::Self **glitch::collada::CRootSceneNode::getMaterial(
        glitch::collada::CRootSceneNode::Self *a1,
        char *a2,
        char **a3,
        int a4)
{
  glitch::video::CMaterial::Self **v4;
  char *v5;
  glitch::video::CMaterial::Self *v7;
  glitch::video::CMaterial::Self *v8;
  bool v9;
  glitch::video::CMaterial::Self *v10;
  typedef int _g4_t_v11;
  typedef glitch::video::CMaterial::Self *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef glitch::video::CMaterial::Self *_g4_t_v14[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v12)) > _g4_s1 ? (8u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v13)) > _g4_s2 ? (12u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v14)) > _g4_s3 ? (16u + sizeof(_g4_t_v14)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);

  v14[6] = (glitch::video::CMaterial::Self *)&a1;
  v4 = (glitch::video::CMaterial::Self **)a1;
  v5 = a2;
  v13 = a4;
  v11 = (int)(uintptr_t)(a3);
  glitch::collada::CRootSceneNode::hasMaterial(a1, a2, *a3);
  if ( *v4 == nullptr && v13 != 0 )
  {
    glitch::collada::CRootSceneNode::addMaterial((volatile int32_t **)v14, v5, v11);
    v7 = v14[0];
    if ( v14[0] != nullptr )
    {
      v12 = v14[0];
      sub_8B1B00((volatile int32_t *)v14[0]);
      v7 = v12;
    }
    v8 = *v4;
    *v4 = v7;
    if ( v8 != nullptr )
    {
      v9 = *(uint32_t *)v8 == 2;
      _mm_mfence();
      if ( v9 )
        glitch::video::CMaterial::removeFromRootSceneNode(v8);
      if ( __sync_fetch_and_add((volatile int32_t *)v8, 0xFFFFFFFF) == 1 )
      {
        glitch::video::CMaterial::Destroy(v8);
        gll_operator_delete_arr((int)(uintptr_t)(v8));
      }
    }
    v10 = v14[0];
    if ( v14[0] != nullptr )
    {
      v9 = *(uint32_t *)v14[0] == 2;
      _mm_mfence();
      if ( v9 )
        glitch::video::CMaterial::removeFromRootSceneNode(v10);
      if ( __sync_fetch_and_add((volatile int32_t *)v10, 0xFFFFFFFF) == 1 )
      {
        glitch::video::CMaterial::Destroy(v10);
        gll_operator_delete_arr((int)(uintptr_t)(v10));
      }
    }
  }
  return (glitch::video::CMaterial::Self **)((int **)(v4));
}


// ============================================================================
// Address:   0xd50850 (size: 277 bytes)
// Symbol:    _ZN6glitch7collada17CCoronasSceneNode11setMaterialERNS0_9SMaterialEPNS_5video12IVideoDriverE
// Demangled: glitch::collada::CCoronasSceneNode::setMaterial(glitch::collada::SMaterial &,glitch::video::IVideoDriver *)
// ============================================================================
glitch::video::CMaterial::Self *glitch::collada::CCoronasSceneNode::setMaterial(int a1, char **a2, int a3)
{
  int v3;
  glitch::video::CMaterial::Self *result;
  glitch::video::CMaterial::Self *v5;
  bool v6;
  glitch::video::CMaterial::Self *v7;
  typedef glitch::video::CMaterial::Self *_g4_t_v8;
  typedef glitch::video::CMaterial::Self *_g4_t_v9[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);

  v9[6] = (glitch::video::CMaterial::Self *)&a1;
  v3 = a1;
  glitch::collada::CRootSceneNode::getMaterial((glitch::collada::CRootSceneNode::Self *)v9, *(char **)(a1 + 460), a2, a3);
  result = v9[0];
  if ( v9[0] != nullptr )
  {
    v8 = v9[0];
    sub_8B1B00((volatile int32_t *)v9[0]);
    v5 = *(glitch::video::CMaterial::Self **)(v3 + 308);
    result = v8;
    *(uint32_t *)(v3 + 308) = (uint32_t)(uintptr_t)(v8);
    if ( v5 != nullptr )
    {
      v6 = *(uint32_t *)v5 == 2;
      _mm_mfence();
      if ( v6 )
        glitch::video::CMaterial::removeFromRootSceneNode(v5);
      result = (glitch::video::CMaterial::Self *)__sync_fetch_and_add((volatile int32_t *)v5, 0xFFFFFFFF);
      if ( result == (glitch::video::CMaterial::Self *)((char *)&dword_0 + 1) )
      {
        glitch::video::CMaterial::Destroy(v5);
        result = (glitch::video::CMaterial::Self *)gll_operator_delete_arr((int)(uintptr_t)(v5));
      }
    }
    v7 = v9[0];
    if ( v9[0] != nullptr )
    {
      v6 = *(uint32_t *)v9[0] == 2;
      _mm_mfence();
      if ( v6 )
        glitch::video::CMaterial::removeFromRootSceneNode(v7);
      result = (glitch::video::CMaterial::Self *)__sync_fetch_and_add((volatile int32_t *)v7, 0xFFFFFFFF);
      if ( result == (glitch::video::CMaterial::Self *)((char *)&dword_0 + 1) )
      {
        glitch::video::CMaterial::Destroy(v7);
        return (glitch::video::CMaterial::Self *)gll_operator_delete_arr((int)(uintptr_t)(v7));
      }
    }
  }
  return result;
}


// ============================================================================
// Address:   0xd50970 (size: 107 bytes)
// Symbol:    _ZN6glitch7collada14CRootSceneNode17getParticleSystemEPKc
// Demangled: glitch::collada::CRootSceneNode::getParticleSystem(char const*)
// ============================================================================
uint32_t *glitch::collada::CRootSceneNode::getParticleSystem(glitch::collada::CRootSceneNode::Self *self, char *s2)
{
  uint32_t *result;
  uint32_t **v3;
  const char *s1;

  result = nullptr;
  v3 = *((uint32_t ***)self + 78);
  if ( v3 != (uint32_t **)((char *)self + 312) )
  {
    do
    {
      s1 = (const char *)(*(int (**)(uint32_t *))(*v3[2] + 96))(v3[2]);
      if ( strcasecmp(s1, s2) == 0 )
        return v3[2];
      v3 = (uint32_t **)*v3;
    }
    while ( (uint32_t **)((char *)self + 312) != v3 );
    return nullptr;
  }
  return result;
}


// ============================================================================
// Address:   0xd509e0 (size: 107 bytes)
// Symbol:    _ZN6glitch7collada14CRootSceneNode9getCameraEPKc
// Demangled: glitch::collada::CRootSceneNode::getCamera(char const*)
// ============================================================================
uint32_t *glitch::collada::CRootSceneNode::getCamera(glitch::collada::CRootSceneNode::Self *self, char *s2)
{
  uint32_t *result;
  uint32_t **v3;
  const char *s1;

  result = nullptr;
  v3 = *((uint32_t ***)self + 84);
  if ( v3 != (uint32_t **)((char *)self + 336) )
  {
    do
    {
      s1 = (const char *)(*(int (**)(uint32_t *))(*v3[2] + 96))(v3[2]);
      if ( strcasecmp(s1, s2) == 0 )
        return v3[2];
      v3 = (uint32_t **)*v3;
    }
    while ( (uint32_t **)((char *)self + 336) != v3 );
    return nullptr;
  }
  return result;
}


// ============================================================================
// Address:   0xd50a50 (size: 82 bytes)
// Symbol:    _ZN6glitch7collada14CRootSceneNode18removeMorphingMeshEPNS0_13CMorphingMeshE
// Demangled: glitch::collada::CRootSceneNode::removeMorphingMesh(glitch::collada::CMorphingMesh *)
// ============================================================================
glitch::collada::CMorphingMesh::Self **glitch::collada::CRootSceneNode::removeMorphingMesh(
        glitch::collada::CRootSceneNode::Self *self,
        glitch::collada::CMorphingMesh::Self *a2)
{
  glitch::collada::CMorphingMesh::Self **v2;
  glitch::collada::CMorphingMesh::Self **result;

  v2 = *((glitch::collada::CMorphingMesh::Self ***)self + 82);
  result = (glitch::collada::CMorphingMesh::Self **)((char *)self + 328);
  if ( v2 != (glitch::collada::CMorphingMesh::Self **)((char *)self + 328) )
  {
    while ( v2[2] != a2 )
    {
      v2 = (glitch::collada::CMorphingMesh::Self **)*v2;
      if ( result == v2 )
        return result;
    }
    sub_1901940(v2);
    return (glitch::collada::CMorphingMesh::Self **)gll_operator_delete_arr((int)(uintptr_t)(v2));
  }
  return result;
}


// ============================================================================
// Address:   0xd50ab0 (size: 140 bytes)
// Symbol:    _ZN6glitch7collada14CRootSceneNode14removeMaterialEPKNS_5video9CMaterialE
// Demangled: glitch::collada::CRootSceneNode::removeMaterial(glitch::video::CMaterial const*)
// ============================================================================
const glitch::video::CMaterial::Self **glitch::collada::CRootSceneNode::removeMaterial(
        glitch::collada::CRootSceneNode::Self *self,
        const glitch::video::CMaterial::Self *a2)
{
  const glitch::video::CMaterial::Self **v2;
  const glitch::video::CMaterial::Self **result;
  glitch::video::CMaterial::Self *v4;
  bool v5;

  v2 = *((const glitch::video::CMaterial::Self ***)self + 86);
  result = (const glitch::video::CMaterial::Self **)((char *)self + 344);
  if ( v2 != (const glitch::video::CMaterial::Self **)((char *)self + 344) )
  {
    while ( a2 != v2[3] )
    {
      v2 = (const glitch::video::CMaterial::Self **)*v2;
      if ( result == v2 )
        return (const glitch::video::CMaterial::Self **)((const int **)(result));
    }
    sub_1901940(v2);
    v4 = (glitch::video::CMaterial::Self *)(v2[3]);
    if ( v4 != nullptr )
    {
      v5 = *(uint32_t *)v4 == 2;
      _mm_mfence();
      if ( v5 )
        glitch::video::CMaterial::removeFromRootSceneNode(v4);
      if ( __sync_fetch_and_add((volatile int32_t *)v4, 0xFFFFFFFF) == 1 )
      {
        glitch::video::CMaterial::Destroy(v4);
        gll_operator_delete_arr((int)(uintptr_t)(v4));
      }
    }
    return (const glitch::video::CMaterial::Self **)((const int **)((const glitch::video::CMaterial::Self **)gll_operator_delete_arr((int)(uintptr_t)(v2))));
  }
  return (const glitch::video::CMaterial::Self **)((const int **)(result));
}


// ============================================================================
// Address:   0xd50b40 (size: 137 bytes)
// Symbol:    _ZN6glitch7collada14CRootSceneNode10attachSkinEv
// Demangled: glitch::collada::CRootSceneNode::attachSkin(void)
// ============================================================================
glitch::collada::CRootSceneNode::Self *glitch::collada::CRootSceneNode::attachSkin(
        glitch::collada::CRootSceneNode::Self *self)
{
  glitch::collada::CSkinnedMesh::Self **v1;
  glitch::collada::CSkinnedMesh::Self **v2;
  char *v3;

  v1 = (glitch::collada::CSkinnedMesh::Self **)((char *)self + 320);
  v2 = *((glitch::collada::CSkinnedMesh::Self ***)self + 80);
  if ( v2 != (glitch::collada::CSkinnedMesh::Self **)((char *)self + 320) )
  {
    do
    {
      glitch::collada::CSkinnedMesh::attach(v2[2], self);
      v2 = (glitch::collada::CSkinnedMesh::Self **)*v2;
    }
    while ( v1 != v2 );
    v2 = *((glitch::collada::CSkinnedMesh::Self ***)self + 80);
  }
  if ( v2 != v1 )
  {
    while ( 1 )
    {
      v3 = (char *)*v2;
      gll_operator_delete_arr((int)(uintptr_t)(v2));
      if ( v3 == (char *)v1 )
        break;
      v2 = (glitch::collada::CSkinnedMesh::Self **)v3;
    }
  }
  *((uint32_t *)self + 80) = (uint32_t)(uintptr_t)(v1);
  *((uint32_t *)self + 81) = (uint32_t)(uintptr_t)(v1);
  return self;
}


// ============================================================================
// Address:   0xd50bd0 (size: 284 bytes)
// Symbol:    _ZN6glitch7collada14CRootSceneNode13attachCamerasEv
// Demangled: glitch::collada::CRootSceneNode::attachCameras(void)
// ============================================================================
char *glitch::collada::CRootSceneNode::attachCameras(glitch::collada::CRootSceneNode::Self *self)
{
  const char *v1;
  char *result;
  char *v3;
  uint32_t *v4;
  uint32_t *v5;
  typedef int _g4_t_v6;
  typedef uint32_t *_g4_t_v7;
  typedef char *_g4_t_i;
  typedef uint32_t _g4_t_v9[10];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v7)) > _g4_s1 ? (0u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_i)) > _g4_s2 ? (4u + sizeof(_g4_t_i)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v9)) > _g4_s3 ? (8u + sizeof(_g4_t_v9)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);

  v9[6] = (uint32_t)(uintptr_t)(&self);
  v1 = (const char *)self;
  result = (char *)self + 336;
  v3 = *((char **)self + 84);
  for ( i = (char *)self + 336; i != v3; v3 = *(char **)v3 )
  {
    sub_8B1B00((volatile int32_t *)&v1[*(uint32_t *)(*(uint32_t *)v1 - 16) + 4]);
    if ( **(uint8_t **)(*(uint32_t *)(*((uint32_t *)v3 + 2) + 864) + 48) != 0 )
    {
      v6 = *((uint32_t *)v3 + 2);
      glitch::scene::ISceneNode::getSceneNodeFromUID((glitch::scene::ISceneNode::Self *)v9, v1);
      v4 = (uint32_t *)v9[0];
      if ( v9[0] != 0 )
      {
        __sync_add_and_fetch((volatile int32_t *)(v9[0] + *(uint32_t *)(*(uint32_t *)v9[0] - 16) + 4), 1u);
        __sync_add_and_fetch((uint32_t *)((char *)v4 + *(uint32_t *)(*v4 - 16) + 4), 1u);
      }
      v5 = *(uint32_t **)(v6 + 836);
      *(uint32_t *)(v6 + 836) = (uint32_t)(uintptr_t)(v4);
      if ( v5 != nullptr )
      {
        v7 = v4;
        sub_5459C0((uint32_t *)((char *)v5 + *(uint32_t *)(*v5 - 16)));
        v4 = v7;
      }
      if ( v4 != nullptr )
        sub_5459C0((uint32_t *)((char *)v4 + *(uint32_t *)(*v4 - 16)));
      if ( v9[0] != 0 )
        sub_5459C0((volatile int32_t *)(*(uint32_t *)(*(uint32_t *)v9[0] - 16) + v9[0]));
    }
    result = (char *)sub_5459C0((volatile int32_t *)&v1[*(uint32_t *)(*(uint32_t *)v1 - 16)]);
  }
  return result;
}


// ============================================================================
// Address:   0xd50cf0 (size: 154 bytes)
// Symbol:    _ZN6glitch7collada14CRootSceneNode15addURLToResolveERKN5boost13intrusive_ptrINS_5video9CMaterialEEEtjRKNS_3res6StringE
// Demangled: glitch::collada::CRootSceneNode::addURLToResolve(boost::intrusive_ptr<glitch::video::CMaterial> const&,unsigned short,unsigned int,glitch::res::String const&)
// ============================================================================
int glitch::collada::CRootSceneNode::addURLToResolve(int a1, int *a2, int16_t a3, int a4, int *a5)
{
  int v5;
  uint32_t *v6;
  int v8;
  int v9;

  v8 = *a5;
  v5 = *a2;
  v6 = (uint32_t *)sub_4EBDC0(0x1Cu);
  if ( v6 != (uint32_t *)-8 )
  {
    v6[2] = 0;
    v6[3] = v8;
    v6[5] = v9;
    v6[4] = v5;
    *((uint16_t *)v6 + 10) = a3;
    v6[6] = a4;
  }
  return sub_1901920(v6, a1 + 404);
}


// ============================================================================
// Address:   0xd50d90 (size: 154 bytes)
// Symbol:    _ZN6glitch7collada14CRootSceneNode15addURLToResolveERKN5boost13intrusive_ptrINS_5video17CMaterialRendererEEEtjRKNS_3res6StringE
// Demangled: glitch::collada::CRootSceneNode::addURLToResolve(boost::intrusive_ptr<glitch::video::CMaterialRenderer> const&,unsigned short,unsigned int,glitch::res::String const&)
// ============================================================================
int glitch::collada::CRootSceneNode::addURLToResolve_CMaterialRenderer(int a1, int *a2, int16_t a3, int a4, int *a5)
{
  int v5;
  uint32_t *v6;
  int v8;
  int v9;

  v8 = *a5;
  v5 = *a2;
  v6 = (uint32_t *)sub_4EBDC0(0x1Cu);
  if ( v6 != (uint32_t *)-8 )
  {
    v6[2] = 1;
    v6[3] = v8;
    v6[5] = v9;
    v6[4] = v5;
    *((uint16_t *)v6 + 10) = a3;
    v6[6] = a4;
  }
  return sub_1901920(v6, a1 + 404);
}


// ============================================================================
// Address:   0xd50e30 (size: 931 bytes)
// Symbol:    _ZN6glitch7collada14CRootSceneNode11resolveURLsEv
// Demangled: glitch::collada::CRootSceneNode::resolveURLs(void)
// ============================================================================
void glitch::collada::CRootSceneNode::resolveURLs(glitch::collada::CRootSceneNode::Self *self)
{
  int v1;
  char *v2;
  unsigned int v3;
  uint8_t *v4;
  bool v5;
  glitch::scene::CLightSceneNode::Self *v6;
  volatile int32_t *v7;
  glitch::scene::CLightSceneNode::Self *v8;
  glitch::video::CMaterial::Self *v9;
  char *v10;
  glitch::scene::CLightSceneNode::Self *Light;
  glitch::scene::CLightSceneNode::Self *v12;
  glitch::video::CMaterialRenderer::Self *v13;
  typedef int _g4_t_v14;
  typedef int16_t _g4_t_v15;
  typedef glitch::video::CMaterial::Self **_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  typedef glitch::scene::CLightSceneNode::Self *_g4_t_v20;
  typedef uint8_t *_g4_t_v21;
  typedef uint8_t *_g4_t_v22;
  typedef uint8_t *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef glitch::video::CMaterial::Self *_g4_t_v26;
  typedef glitch::scene::CLightSceneNode::Self *_g4_t_v27;
  typedef glitch::scene::CLightSceneNode::Self *_g4_t_v28;
  typedef glitch::scene::CLightSceneNode::Self *_g4_t_v29;
  typedef glitch::scene::CLightSceneNode::Self *_g4_t_v30;
  typedef glitch::scene::CLightSceneNode::Self *_g4_t_v31;
  typedef glitch::scene::CLightSceneNode::Self *_g4_t_v32;
  typedef glitch::scene::CLightSceneNode::Self *_g4_t_v33;
  typedef glitch::scene::CLightSceneNode::Self *_g4_t_v34;
  typedef glitch::scene::CLightSceneNode::Self *_g4_t_v35;
  typedef glitch::scene::CLightSceneNode::Self *_g4_t_v36;
  typedef glitch::scene::CLightSceneNode::Self *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef void (*_g4_t_v39)(glitch::collada::CRootSceneNode::Self *, uint32_t *, glitch::video::CMaterial::Self **, int, glitch::scene::CLightSceneNode::Self *, uint8_t *);
  typedef glitch::collada::CRootSceneNode::Self *_g4_t_v40;
  typedef char *_g4_t_v41;
  typedef glitch::video::CMaterial::Self *_g4_t_v42;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_v43;
  typedef glitch::scene::CLightSceneNode::Self *_g4_t_v44;
  typedef glitch::scene::CLightSceneNode::Self *_g4_t_v45;
  typedef uint32_t _g4_t_v46[7];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v14)) > _g4_s0 ? (8u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v15)) > _g4_s1 ? (12u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v16)) > _g4_s2 ? (16u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v17)) > _g4_s3 ? (16u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v18)) > _g4_s4 ? (20u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v19)) > _g4_s5 ? (20u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v20)) > _g4_s6 ? (24u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v21)) > _g4_s7 ? (28u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v22)) > _g4_s8 ? (48u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v23)) > _g4_s9 ? (48u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v24)) > _g4_s10 ? (48u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v25)) > _g4_s11 ? (48u + sizeof(_g4_t_v25)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v26)) > _g4_s12 ? (48u + sizeof(_g4_t_v26)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v27)) > _g4_s13 ? (52u + sizeof(_g4_t_v27)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v28)) > _g4_s14 ? (52u + sizeof(_g4_t_v28)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v29)) > _g4_s15 ? (52u + sizeof(_g4_t_v29)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v30)) > _g4_s16 ? (52u + sizeof(_g4_t_v30)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v31)) > _g4_s17 ? (52u + sizeof(_g4_t_v31)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v32)) > _g4_s18 ? (52u + sizeof(_g4_t_v32)) : _g4_s18,
    _g4_s20 = (52u + sizeof(_g4_t_v33)) > _g4_s19 ? (52u + sizeof(_g4_t_v33)) : _g4_s19,
    _g4_s21 = (52u + sizeof(_g4_t_v34)) > _g4_s20 ? (52u + sizeof(_g4_t_v34)) : _g4_s20,
    _g4_s22 = (52u + sizeof(_g4_t_v35)) > _g4_s21 ? (52u + sizeof(_g4_t_v35)) : _g4_s21,
    _g4_s23 = (52u + sizeof(_g4_t_v36)) > _g4_s22 ? (52u + sizeof(_g4_t_v36)) : _g4_s22,
    _g4_s24 = (52u + sizeof(_g4_t_v37)) > _g4_s23 ? (52u + sizeof(_g4_t_v37)) : _g4_s23,
    _g4_s25 = (60u + sizeof(_g4_t_v38)) > _g4_s24 ? (60u + sizeof(_g4_t_v38)) : _g4_s24,
    _g4_s26 = (60u + sizeof(_g4_t_v39)) > _g4_s25 ? (60u + sizeof(_g4_t_v39)) : _g4_s25,
    _g4_s27 = (64u + sizeof(_g4_t_v40)) > _g4_s26 ? (64u + sizeof(_g4_t_v40)) : _g4_s26,
    _g4_s28 = (68u + sizeof(_g4_t_v41)) > _g4_s27 ? (68u + sizeof(_g4_t_v41)) : _g4_s27,
    _g4_s29 = (72u + sizeof(_g4_t_v42)) > _g4_s28 ? (72u + sizeof(_g4_t_v42)) : _g4_s28,
    _g4_s30 = (88u + sizeof(_g4_t_v43)) > _g4_s29 ? (88u + sizeof(_g4_t_v43)) : _g4_s29,
    _g4_s31 = (92u + sizeof(_g4_t_v44)) > _g4_s30 ? (92u + sizeof(_g4_t_v44)) : _g4_s30,
    _g4_s32 = (96u + sizeof(_g4_t_v45)) > _g4_s31 ? (96u + sizeof(_g4_t_v45)) : _g4_s31,
    _g4_s33 = (100u + sizeof(_g4_t_v46)) > _g4_s32 ? (100u + sizeof(_g4_t_v46)) : _g4_s32
  };
  alignas(16) uint8_t _g4_sf[_g4_s33];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 52u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 52u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 52u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 52u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 52u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 52u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 52u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 52u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 52u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 52u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 60u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 60u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 64u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 68u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 72u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 88u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 92u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 96u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 100u);

  v46[3] = (uint32_t)(uintptr_t)(&self);
  v40 = self;
  v1 = *((uint32_t *)self + 101);
  v41 = (char *)self + 404;
  if ( (glitch::collada::CRootSceneNode::Self *)v1 != (glitch::collada::CRootSceneNode::Self *)((char *)self + 404) )
  {
    v2 = (char *)self + 404;
    while ( 1 )
    {
      while ( 1 )
      {
        v3 = *(uint32_t *)(v1 + 8);
        if ( v3 <= 1 )
          break;
LABEL_17:
        v1 = *(uint32_t *)v1;
        if ( v2 == (char *)v1 )
          goto LABEL_18;
      }
      v4 = *(uint8_t **)(v1 + 12);
      if ( *v4 == 35 )
      {
        Light = (glitch::scene::CLightSceneNode::Self *)glitch::collada::CRootSceneNode::getLight(v40, (char *)(v4 + 1));
        if ( Light != nullptr )
        {
          v29 = Light;
          sub_8B1B00((volatile int32_t *)((char *)Light + *(uint32_t *)(*(uint32_t *)Light - 16) + 4));
          v8 = v29;
          goto LABEL_26;
        }
        v3 = *(uint32_t *)(v1 + 8);
        v4 = *(uint8_t **)(v1 + 12);
      }
      v5 = v3 == 0;
      v6 = *(glitch::scene::CLightSceneNode::Self **)(v1 + 24);
      v38 = *(uint16_t *)(v1 + 20);
      v7 = *(volatile int32_t **)(v1 + 16);
      if ( !v5 )
        break;
      v42 = *(glitch::video::CMaterial::Self **)(v1 + 16);
      if ( v7 != nullptr )
      {
        v22 = v4;
        v27 = v6;
        sub_8B1B00(v7);
        v6 = v27;
        v4 = v22;
      }
      v21 = v4;
      v16 = &v42;
      v20 = v6;
      v18 = v38;
      glitch::collada::CColladaDatabase::getExternalLightSceneNode(&v44);
      v8 = v44;
      if ( v44 != nullptr )
      {
        v28 = v44;
        sub_8B1B00((volatile int32_t *)((char *)v44 + *(uint32_t *)(*(uint32_t *)v44 - 16) + 4));
        v8 = v28;
        if ( v44 != nullptr )
        {
          sub_5459C0((volatile int32_t *)((char *)v44 + *(uint32_t *)(*(uint32_t *)v44 - 16)));
          v8 = v28;
        }
      }
      v9 = v42;
      if ( v42 == nullptr )
        goto LABEL_15;
      v5 = *(uint32_t *)v42 == 2;
      _mm_mfence();
      if ( v5 )
      {
        v26 = v9;
        v37 = v8;
        glitch::video::CMaterial::removeFromRootSceneNode(v9);
        v8 = v37;
        v9 = v26;
      }
      if ( __sync_fetch_and_add((volatile int32_t *)v9, 0xFFFFFFFF) != 1 )
        goto LABEL_15;
      v36 = v8;
      v25 = (int)(uintptr_t)(v9);
      glitch::video::CMaterial::Destroy(v9);
      gll_operator_delete_arr(v25);
      v8 = v36;
      if ( v36 == nullptr )
      {
LABEL_16:
        glitch::os::Printer::log((int)(uintptr_t)("failed to resolve light parameter"), 3);
        goto LABEL_17;
      }
LABEL_26:
      if ( *((uint32_t *)v8 + 52) == 0 )
      {
        v46[0] = (uint32_t)(uintptr_t)(v8);
        v39 = *(void (**)(glitch::collada::CRootSceneNode::Self *, uint32_t *, glitch::video::CMaterial::Self **, int, glitch::scene::CLightSceneNode::Self *, uint8_t *))(*(uint32_t *)v40 + 104);
        v31 = v8;
        sub_8B1B00((volatile int32_t *)((char *)v8 + *(uint32_t *)(*(uint32_t *)v8 - 16) + 4));
        v39(v40, v46, (glitch::video::CMaterial::Self **)((::CMaterial **)(v16)), v18, v20, v21);
        v12 = v31;
        if ( v46[0] != 0 )
        {
          sub_5459C0((volatile int32_t *)(*(uint32_t *)(*(uint32_t *)v46[0] - 16) + v46[0]));
          v12 = v31;
        }
        v32 = v12;
        glitch::collada::CRootSceneNode::addLight(v40, v12);
        v8 = v32;
      }
      v19 = (uint32_t *)((char *)v8 + 264);
      v17 = *(uint32_t *)(v1 + 24);
      v15 = *(uint16_t *)(v1 + 20);
      v14 = *(uint32_t *)(v1 + 16);
      v30 = v8;
      if ( *(uint32_t *)(v1 + 8) != 0 )
        glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer::Self,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer::Self>>::setParameter<boost::intrusive_ptr<glitch::video::CLight::Self>>(
          v14,
          v15,
          v17,
          v19);
      else
        glitch::video::detail::IMaterialParameters<glitch::video::CMaterial::Self,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial::Self>>::setParameter<boost::intrusive_ptr<glitch::video::CLight::Self>>(
          v14,
          v15,
          v17,
          v19);
      sub_5459C0((volatile int32_t *)((char *)v30 + *(uint32_t *)(*(uint32_t *)v30 - 16)));
      v1 = *(uint32_t *)v1;
      if ( v2 == (char *)v1 )
      {
LABEL_18:
        v1 = *((uint32_t *)v40 + 101);
        goto LABEL_19;
      }
    }
    v43 = *(glitch::video::CMaterialRenderer::Self **)(v1 + 16);
    if ( v7 != nullptr )
    {
      v23 = v4;
      v33 = v6;
      sub_8B1B00(v7);
      v6 = v33;
      v4 = v23;
    }
    v21 = v4;
    v16 = (glitch::video::CMaterial::Self **)(&v43);
    v20 = v6;
    v18 = v38;
    glitch::collada::CColladaDatabase::getExternalLightSceneNode(&v45);
    v8 = v45;
    if ( v45 != nullptr )
    {
      v34 = v45;
      sub_8B1B00((volatile int32_t *)((char *)v45 + *(uint32_t *)(*(uint32_t *)v45 - 16) + 4));
      v8 = v34;
      if ( v45 != nullptr )
      {
        sub_5459C0((volatile int32_t *)((char *)v45 + *(uint32_t *)(*(uint32_t *)v45 - 16)));
        v8 = v34;
      }
    }
    v13 = v43;
    if ( v43 != nullptr && __sync_fetch_and_add((volatile int32_t *)v43, 0xFFFFFFFF) == 1 )
    {
      v35 = v8;
      v24 = (int)(uintptr_t)(v13);
      glitch::video::CMaterialRenderer::Destroy(v13);
      gll_operator_delete_arr(v24);
      v8 = v35;
    }
LABEL_15:
    if ( v8 == nullptr )
      goto LABEL_16;
    goto LABEL_26;
  }
LABEL_19:
  if ( v41 != (char *)v1 )
  {
    while ( 1 )
    {
      v10 = *(char **)v1;
      gll_operator_delete_arr(v1);
      if ( v10 == v41 )
        break;
      v1 = (int)(uintptr_t)(v10);
    }
  }
  *((uint32_t *)v40 + 101) = (uint32_t)(uintptr_t)(v41);
  *((uint32_t *)v40 + 102) = (uint32_t)(uintptr_t)(v41);
}


// ============================================================================
// Address:   0xd511e0 (size: 142 bytes)
// Symbol:    _ZN6glitch7collada14CRootSceneNode14getLodSelectorEPKc
// Demangled: glitch::collada::CRootSceneNode::getLodSelector(char const*)
// ============================================================================
glitch::collada::CRootSceneNode::Self *glitch::collada::CRootSceneNode::getLodSelector(
        glitch::collada::CRootSceneNode::Self *self,
        const char *a2,
        unsigned int a3)
{
  glitch::collada::CRootSceneNode::Self *result;
  const char *v4;
  const char *v5;
  int v6;

  result = self;
  v4 = *((const char **)a2 + 93);
  if ( v4 == nullptr )
    goto LABEL_8;
  v5 = a2 + 368;
  do
  {
    while ( *((uint32_t *)v4 + 4) >= a3 )
    {
      v5 = v4;
      v4 = *((const char **)v4 + 2);
      if ( v4 == nullptr )
        goto LABEL_6;
    }
    v4 = *((const char **)v4 + 3);
  }
  while ( v4 != nullptr );
LABEL_6:
  if ( a2 + 368 != v5 && *((uint32_t *)v5 + 4) <= a3 )
  {
    v6 = *((uint32_t *)v5 + 5);
    *(uint32_t *)self = v6;
    if ( v6 != 0 )
    {
      sub_8B1B00((volatile int32_t *)(v6 + 4));
      return self;
    }
  }
  else
  {
LABEL_8:
    *(uint32_t *)self = 0;
  }
  return result;
}


// ============================================================================
// Address:   0xd51270 (size: 221 bytes)
// Symbol:    _ZN6glitch7collada14CRootSceneNode11addIKSolverERKN5boost13intrusive_ptrINS_5scene9CIKSolverEEE
// Demangled: glitch::collada::CRootSceneNode::addIKSolver(boost::intrusive_ptr<glitch::scene::CIKSolver> const&)
// ============================================================================
int glitch::collada::CRootSceneNode::addIKSolver(int *a1, int a2)
{
  int v2;
  int v4;
  glitch::IObject::Self *v5;
  uint32_t *v6;
  int v7[4];

  v2 = a1[90];
  if ( v2 == 0 )
  {
    v4 = *a1;
    v7[0] = (int)(uintptr_t)(a1);
    sub_8B1B00((int *)((char *)a1 + *(uint32_t *)(v4 - 16) + 4));
    v5 = (glitch::IObject::Self *)operator new(0x24u);
    glitch::scene::CSceneNodeAnimatorIK::Construct(v5, (int)(uintptr_t)(v7));
    if ( v5 != nullptr )
      sub_8B1B00((volatile int32_t *)((char *)v5 + *(uint32_t *)(*(uint32_t *)v5 - 12) + 4));
    v6 = (uint32_t *)a1[90];
    a1[90] = (int)(uintptr_t)(v5);
    if ( v6 != nullptr )
      sub_5459C0((uint32_t *)((char *)v6 + *(uint32_t *)(*v6 - 12)));
    if ( v7[0] != 0 )
      sub_5459C0((volatile int32_t *)(*(uint32_t *)(*(uint32_t *)v7[0] - 16) + v7[0]));
    v2 = a1[90];
  }
  return glitch::scene::CSceneNodeAnimatorIK::addIKSolver(v2, a2);
}


// ============================================================================
// Address:   0xd51350 (size: 134 bytes)
// Symbol:    _ZN6glitch7collada14CRootSceneNode14removeIKSolverERKN5boost13intrusive_ptrINS_5scene9CIKSolverEEE
// Demangled: glitch::collada::CRootSceneNode::removeIKSolver(boost::intrusive_ptr<glitch::scene::CIKSolver> const&)
// ============================================================================
uint32_t *glitch::collada::CRootSceneNode::removeIKSolver(int a1, int a2)
{
  uint32_t *result;

  result = *(uint32_t **)(a1 + 360);
  if ( result != nullptr )
  {
    glitch::scene::CSceneNodeAnimatorIK::removeIKSolver(*(uint32_t *)(a1 + 360), a2);
    result = (uint32_t *)glitch::scene::CSceneNodeAnimatorIK::getIKSolverCount(*(glitch::scene::CSceneNodeAnimatorIK **)(a1 + 360));
    if ( result == nullptr )
    {
      result = *(uint32_t **)(a1 + 360);
      *(uint32_t *)(a1 + 360) = 0;
      if ( result != nullptr )
        return (uint32_t *)sub_5459C0((uint32_t *)((char *)result + *(uint32_t *)(*result - 12)));
    }
  }
  return result;
}


// ============================================================================
// Address:   0xd513e0 (size: 91 bytes)
// Symbol:    _ZN6glitch7collada14CRootSceneNode15removeIKSolversEv
// Demangled: glitch::collada::CRootSceneNode::removeIKSolvers(void)
// ============================================================================
uint32_t *glitch::collada::CRootSceneNode::removeIKSolvers(glitch::collada::CRootSceneNode::Self *self)
{
  uint32_t *result;

  result = *((uint32_t **)self + 90);
  if ( result != nullptr )
  {
    glitch::scene::CSceneNodeAnimatorIK::removeIKSolvers(*((glitch::scene::CSceneNodeAnimatorIK **)self + 90));
    result = *((uint32_t **)self + 90);
    *((uint32_t *)self + 90) = 0;
    if ( result != nullptr )
      return (uint32_t *)sub_5459C0((uint32_t *)((char *)result + *(uint32_t *)(*result - 12)));
  }
  return result;
}


// ============================================================================
// Address:   0xd51440 (size: 93 bytes)
// Symbol:    _ZN6glitch7collada14CRootSceneNode13setRootMotionEN5boost13intrusive_ptrINS0_11CRootMotionEEE
// Demangled: glitch::collada::CRootSceneNode::setRootMotion(boost::intrusive_ptr<glitch::collada::CRootMotion>)
// ============================================================================
volatile int32_t *glitch::collada::CRootSceneNode::setRootMotion(int a1, int *a2)
{
  int v2;
  volatile int32_t *result;

  v2 = *a2;
  if ( *a2 != 0 )
    sub_8B1B00((volatile int32_t *)(v2 + 4));
  result = *(volatile int32_t **)(a1 + 424);
  *(uint32_t *)(a1 + 424) = v2;
  if ( result != nullptr )
    return (volatile int32_t *)sub_5459C0(result);
  return result;
}


// ============================================================================
// Address:   0xd514a0 (size: 14 bytes)
// Symbol:    _ZN6glitch7collada14CRootSceneNode13getRootMotionEv
// Demangled: glitch::collada::CRootSceneNode::getRootMotion(void)
// ============================================================================
char *glitch::collada::CRootSceneNode::getRootMotion(glitch::collada::CRootSceneNode::Self *self)
{
  return (char *)self + 424;
}


// ============================================================================
// Address:   0xd514b0 (size: 278 bytes)
// Symbol:    _ZN6glitch7collada14CRootSceneNode17addSceneNodeAliasEPKcPNS_5scene10ISceneNodeE
// Demangled: glitch::collada::CRootSceneNode::addSceneNodeAlias(char const*,glitch::scene::ISceneNode *)
// ============================================================================
int glitch::collada::CRootSceneNode::addSceneNodeAlias(
        glitch::collada::CRootSceneNode::Self *self,
        glitch::core::detail::SSharedStringHeapEntry::SData::Self *a2,
        glitch::scene::ISceneNode::Self *a3)
{
  volatile int32_t *v3;
  char *v4;
  int v5;
  int result;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v7;
  bool v8;
  int v9;

  v3 = (volatile int32_t *)glitch::core::detail::SSharedStringHeapEntry::SData::get(
                                    a2,
                                    (const char *)&dword_0 + 1,
                                    v8);
  if ( a3 != nullptr )
    sub_8B1B00((volatile int32_t *)((char *)a3 + *(uint32_t *)(*(uint32_t *)a3 - 16) + 4));
  v4 = (char *)self + 428;
  v5 = sub_4EBDC0(0x10u);
  if ( v5 == -8 )
  {
    result = sub_1901920(-8, v4);
    if ( a3 != nullptr )
      goto LABEL_8;
  }
  else
  {
    *(uint32_t *)(v5 + 8) = (uint32_t)(uintptr_t)(v3);
    if ( v3 != nullptr )
      __sync_add_and_fetch(v3, 1u);
    *(uint32_t *)(v5 + 12) = (uint32_t)(uintptr_t)(a3);
    if ( a3 != nullptr )
    {
      v9 = v5;
      sub_8B1B00((volatile int32_t *)((char *)a3 + *(uint32_t *)(*(uint32_t *)a3 - 16) + 4));
      sub_1901920(v9, v4);
LABEL_8:
      result = sub_5459C0((volatile int32_t *)((char *)a3 + *(uint32_t *)(*(uint32_t *)a3 - 16)));
      goto LABEL_9;
    }
    result = sub_1901920(v5, v4);
  }
LABEL_9:
  if ( v3 != nullptr )
  {
    result = __sync_fetch_and_add(v3, 0xFFFFFFFF);
    if ( result == 1 )
      return glitch::core::detail::SSharedStringHeapEntry::SData::release(
               (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)v3,
               v7);
  }
  return result;
}


// ============================================================================
// Address:   0xd515d0 (size: 14 bytes)
// Symbol:    _ZNK6glitch7collada14CRootSceneNode21getSceneNodeAliasListEv
// Demangled: glitch::collada::CRootSceneNode::getSceneNodeAliasList(void)const
// ============================================================================
char *glitch::collada::CRootSceneNode::getSceneNodeAliasList(glitch::collada::CRootSceneNode::Self *self)
{
  return (char *)self + 428;
}


// ============================================================================
// Address:   0xd515e0 (size: 138 bytes)
// Symbol:    _ZN6glitch7collada14CRootSceneNode23clearSceneNodeAliasListEv
// Demangled: glitch::collada::CRootSceneNode::clearSceneNodeAliasList(void)
// ============================================================================
glitch::collada::CRootSceneNode::Self *glitch::collada::CRootSceneNode::clearSceneNodeAliasList(
        glitch::collada::CRootSceneNode::Self *self)
{
  char *v1;
  char **v2;
  char *v3;
  char *v4;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v5;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v7;

  v1 = (char *)self + 428;
  v2 = *((char ***)self + 107);
  if ( v2 != (char **)((char *)self + 428) )
  {
    while ( 1 )
    {
      v3 = v2[3];
      v4 = *v2;
      if ( v3 != nullptr )
        sub_5459C0((volatile int32_t *)&v3[*(uint32_t *)(*(uint32_t *)v3 - 16)]);
      v5 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)v2[2];
      if ( v5 != nullptr && __sync_fetch_and_add((volatile int32_t *)v5, 0xFFFFFFFF) == 1 )
        glitch::core::detail::SSharedStringHeapEntry::SData::release(v5, v7);
      gll_operator_delete_arr((int)(uintptr_t)(v2));
      if ( v4 == v1 )
        break;
      v2 = (char **)v4;
    }
  }
  *((uint32_t *)self + 107) = (uint32_t)(uintptr_t)(v1);
  *((uint32_t *)self + 108) = (uint32_t)(uintptr_t)(v1);
  return self;
}


// ============================================================================
// Address:   0xd51670 (size: 366 bytes)
// Symbol:    _ZN6glitch7collada10CSceneNodeC2ERKNS0_16CColladaDatabaseEPNS0_5SNodeE
// Demangled: glitch::collada::CSceneNode::CSceneNode(glitch::collada::CColladaDatabase const&,glitch::collada::SNode *)
// ============================================================================
int glitch::collada::CSceneNode::Construct(glitch::scene::ISceneNode::Self *a1, int *a2, uint32_t *a3, int a4)
{
  uint32_t *v4;
  int v5;
  bool v6;
  int v7;
  int v8;
  int result;
  uint32_t *v10;
  int v11;
  int v12;
  uint32_t *v13;
  int v14;
  int v15;
  int v16;
  uint32_t *v17;
  int v18;
  int v19;
  typedef uint32_t _g4_t_v20[3];
  typedef uint32_t _g4_t_v21[3];
  typedef uint32_t _g4_t_v22[11];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v20)) > _g4_s0 ? (8u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v21)) > _g4_s1 ? (20u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v22)) > _g4_s2 ? (32u + sizeof(_g4_t_v22)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);

  glitch::scene::CEmptySceneNode::Construct(a1, (int)(uintptr_t)(a2 + 1));
  v4 = (uint32_t *)(a3);
  v5 = *a3;
  v6 = *a3 == 0;
  *((uint32_t *)a1 + 72) = *a3;
  if ( !v6 )
  {
    sub_8B1B00((volatile int32_t *)(v5 + 4));
    v4 = (uint32_t *)(a3);
  }
  v7 = v4[1];
  *((uint32_t *)a1 + 74) = 0;
  *((uint32_t *)a1 + 73) = v7;
  *((uint32_t *)a1 + 75) = 0;
  *((uint32_t *)a1 + 76) = 0;
  *((uint32_t *)a1 + 71) = (uint32_t)(uintptr_t)(&unk_20DFC20);
  v8 = *a2;
  *(uint32_t *)a1 = *a2;
  *(uint32_t *)((char *)a1 + *(uint32_t *)(v8 - 12)) = a2[7];
  result = *(uint32_t *)(*(uint32_t *)a1 - 16);
  *(uint32_t *)((char *)a1 + result) = a2[8];
  *((uint32_t *)a1 + 77) = (uint32_t)(uintptr_t)(a4);
  if ( a4 != 0 )
  {
    glitch::scene::ISceneNode::setName(a1, *(const char **)(a4 + 4));
    v10 = *((uint32_t **)a1 + 77);
    v20[0] = v10[3];
    v11 = v10[4];
    v12 = v10[5];
    v20[1] = v11;
    v20[2] = v12;
    glitch::scene::ISceneNode::setPosition(a1, v20);
    v13 = *((uint32_t **)a1 + 77);
    v14 = v13[9];
    v15 = v13[8];
    v16 = v13[7];
    v22[0] = v13[6];
    v22[2] = v15;
    v22[3] = v14;
    v22[1] = v16;
    glitch::scene::ISceneNode::setRotation(a1, (const glitch::core::quaternion::Self *)v22);
    v17 = *((uint32_t **)a1 + 77);
    v21[0] = v17[10];
    v18 = v17[11];
    v19 = v17[12];
    v21[1] = v18;
    v21[2] = v19;
    glitch::scene::ISceneNode::setScale(a1, v21);
    return glitch::scene::ISceneNode::setVisible(a1, *(uint32_t *)(*((uint32_t *)a1 + 77) + 52) != 0);
  }
  return result;
}


// ============================================================================
// Address:   0xd517e0 (size: 133 bytes)
// Symbol:    _ZN6glitch7collada19CBillboardSceneNodeC1ERKNS0_16CColladaDatabaseEPNS0_5SNodeE
// Demangled: glitch::collada::CBillboardSceneNode::CBillboardSceneNode(glitch::collada::CColladaDatabase const&,glitch::collada::SNode *)
// ============================================================================
void (**glitch::collada::CBillboardSceneNode::Construct_vf(
        glitch::scene::ISceneNode::Self *a1,
        uint32_t *a2,
        int a3))(glitch::collada::CBillboardSceneNode *__hidden self)
{
  *((uint32_t *)a1 + 79) = (uint32_t)(uintptr_t)(&off_20718AC);
  *((uint32_t *)a1 + 78) = ((uint32_t)(uintptr_t)&off_207188C);
  *((uint32_t *)a1 + 80) = 0;
  glitch::collada::CSceneNode::Construct(a1, (int *)((uint32_t)(uintptr_t)&off_2071D44), a2, a3);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2071D90);
  *((uint32_t *)a1 + 78) = (uint32_t)(uintptr_t)(&off_2071EC8);
  *((uint32_t *)a1 + 79) = ((uint32_t)(uintptr_t)&off_2071EE8);
  return (void (**)(glitch::collada::CBillboardSceneNode *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2071EE8));
}


// ============================================================================
// Address:   0xd51870 (size: 107 bytes)
// Symbol:    _ZN6glitch7collada19CBillboardSceneNodeC2ERKNS0_16CColladaDatabaseEPNS0_5SNodeE
// Demangled: glitch::collada::CBillboardSceneNode::CBillboardSceneNode(glitch::collada::CColladaDatabase const&,glitch::collada::SNode *)
// ============================================================================
int glitch::collada::CBillboardSceneNode::Construct(
        glitch::scene::ISceneNode::Self *a1,
        int *a2,
        uint32_t *a3,
        int a4)
{
  int v4;
  int result;

  glitch::collada::CSceneNode::Construct(a1, a2 + 1, a3, a4);
  v4 = *a2;
  *(uint32_t *)a1 = *a2;
  *(uint32_t *)((char *)a1 + *(uint32_t *)(v4 - 12)) = a2[10];
  result = *(uint32_t *)(*(uint32_t *)a1 - 16);
  *(uint32_t *)((char *)a1 + result) = a2[11];
  return result;
}


// ============================================================================
// Address:   0xd518e0 (size: 412 bytes)
// Symbol:    _ZN6glitch7collada14CRootSceneNodeC1ERKNS0_16CColladaDatabaseE
// Demangled: glitch::collada::CRootSceneNode::CRootSceneNode(glitch::collada::CColladaDatabase const&)
// ============================================================================
glitch::collada::CRootSceneNode::Self *glitch::collada::CRootSceneNode::Construct(
        glitch::collada::CRootSceneNode::Self *self,
        const glitch::collada::CColladaDatabase::Self *a2)
{
  *((uint32_t *)self + 110) = (uint32_t)(uintptr_t)(&off_207508C);
  *((uint32_t *)self + 109) = ((uint32_t)(uintptr_t)&off_207506C);
  *((uint32_t *)self + 111) = 0;
  glitch::collada::CSceneNode::Construct(self, (int *)((uint32_t)(uintptr_t)&off_2075524), a2, 0);
  *((uint32_t *)self + 90) = 0;
  *((uint32_t *)self + 92) = 0;
  *((uint32_t *)self + 93) = 0;
  *((uint32_t *)self + 96) = 0;
  *((uint8_t *)self + 388) = 0;
  *((uint32_t *)self + 98) = 1;
  *((uint32_t *)self + 99) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2075570);
  *((uint32_t *)self + 110) = ((uint32_t)(uintptr_t)&off_20756C8);
  *((uint32_t *)self + 109) = (uint32_t)(uintptr_t)(&off_20756A8);
  *((uint32_t *)self + 100) = 0;
  *((uint32_t *)self + 78) = (uint32_t)(uintptr_t)((char *)self + 312);
  *((uint32_t *)self + 79) = (uint32_t)(uintptr_t)((char *)self + 312);
  *((uint32_t *)self + 103) = 0;
  *((uint32_t *)self + 104) = 0;
  *((uint32_t *)self + 80) = (uint32_t)(uintptr_t)((char *)self + 320);
  *((uint32_t *)self + 81) = (uint32_t)(uintptr_t)((char *)self + 320);
  *((uint32_t *)self + 105) = 0;
  *((uint32_t *)self + 106) = 0;
  *((uint32_t *)self + 82) = (uint32_t)(uintptr_t)((char *)self + 328);
  *((uint32_t *)self + 83) = (uint32_t)(uintptr_t)((char *)self + 328);
  *((uint32_t *)self + 84) = (uint32_t)(uintptr_t)((char *)self + 336);
  *((uint32_t *)self + 85) = (uint32_t)(uintptr_t)((char *)self + 336);
  *((uint32_t *)self + 86) = (uint32_t)(uintptr_t)((char *)self + 344);
  *((uint32_t *)self + 87) = (uint32_t)(uintptr_t)((char *)self + 344);
  *((uint32_t *)self + 88) = (uint32_t)(uintptr_t)((char *)self + 352);
  *((uint32_t *)self + 89) = (uint32_t)(uintptr_t)((char *)self + 352);
  *((uint32_t *)self + 94) = (uint32_t)(uintptr_t)((char *)self + 368);
  *((uint32_t *)self + 95) = (uint32_t)(uintptr_t)((char *)self + 368);
  *((uint32_t *)self + 101) = (uint32_t)(uintptr_t)((char *)self + 404);
  *((uint32_t *)self + 102) = (uint32_t)(uintptr_t)((char *)self + 404);
  *((uint32_t *)self + 107) = (uint32_t)(uintptr_t)((char *)self + 428);
  *((uint32_t *)self + 108) = (uint32_t)(uintptr_t)((char *)self + 428);
  return (glitch::collada::CRootSceneNode::Self *)((char *)self + 428);
}


// ============================================================================
// Address:   0xd51a80 (size: 368 bytes)
// Symbol:    _ZN6glitch7collada14CRootSceneNodeC2ERKNS0_16CColladaDatabaseE
// Demangled: glitch::collada::CRootSceneNode::CRootSceneNode(glitch::collada::CColladaDatabase const&)
// ============================================================================
glitch::collada::CRootSceneNode::Self *glitch::collada::CRootSceneNode::Construct(
        glitch::collada::CRootSceneNode::Self *self,
        const glitch::collada::CColladaDatabase::Self *a2,
        uint32_t *a3)
{
  int v3;

  glitch::collada::CSceneNode::Construct(self, (int *)a2 + 1, a3, 0);
  v3 = *(uint32_t *)a2;
  *(uint32_t *)self = *(uint32_t *)a2;
  *(uint32_t *)((char *)self + *(uint32_t *)(v3 - 12)) = *((uint32_t *)a2 + 10);
  *(uint32_t *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 16)) = *((uint32_t *)a2 + 11);
  *((uint32_t *)self + 90) = 0;
  *((uint32_t *)self + 78) = (uint32_t)(uintptr_t)((char *)self + 312);
  *((uint32_t *)self + 79) = (uint32_t)(uintptr_t)((char *)self + 312);
  *((uint32_t *)self + 92) = 0;
  *((uint32_t *)self + 93) = 0;
  *((uint32_t *)self + 80) = (uint32_t)(uintptr_t)((char *)self + 320);
  *((uint32_t *)self + 81) = (uint32_t)(uintptr_t)((char *)self + 320);
  *((uint32_t *)self + 96) = 0;
  *((uint8_t *)self + 388) = 0;
  *((uint32_t *)self + 82) = (uint32_t)(uintptr_t)((char *)self + 328);
  *((uint32_t *)self + 83) = (uint32_t)(uintptr_t)((char *)self + 328);
  *((uint32_t *)self + 98) = 1;
  *((uint32_t *)self + 99) = 0;
  *((uint32_t *)self + 84) = (uint32_t)(uintptr_t)((char *)self + 336);
  *((uint32_t *)self + 85) = (uint32_t)(uintptr_t)((char *)self + 336);
  *((uint32_t *)self + 100) = 0;
  *((uint32_t *)self + 86) = (uint32_t)(uintptr_t)((char *)self + 344);
  *((uint32_t *)self + 87) = (uint32_t)(uintptr_t)((char *)self + 344);
  *((uint32_t *)self + 88) = (uint32_t)(uintptr_t)((char *)self + 352);
  *((uint32_t *)self + 89) = (uint32_t)(uintptr_t)((char *)self + 352);
  *((uint32_t *)self + 94) = (uint32_t)(uintptr_t)((char *)self + 368);
  *((uint32_t *)self + 95) = (uint32_t)(uintptr_t)((char *)self + 368);
  *((uint32_t *)self + 101) = (uint32_t)(uintptr_t)((char *)self + 404);
  *((uint32_t *)self + 102) = (uint32_t)(uintptr_t)((char *)self + 404);
  *((uint32_t *)self + 103) = 0;
  *((uint32_t *)self + 104) = 0;
  *((uint32_t *)self + 105) = 0;
  *((uint32_t *)self + 106) = 0;
  *((uint32_t *)self + 107) = (uint32_t)(uintptr_t)((char *)self + 428);
  *((uint32_t *)self + 108) = (uint32_t)(uintptr_t)((char *)self + 428);
  return (glitch::collada::CRootSceneNode::Self *)((char *)self + 428);
}


// ============================================================================
// Address:   0xd51bf0 (size: 409 bytes)
// Symbol:    _ZN6glitch7collada10CSceneNodeC1ERKNS0_16CColladaDatabaseEPNS0_5SNodeE
// Demangled: glitch::collada::CSceneNode::CSceneNode(glitch::collada::CColladaDatabase const&,glitch::collada::SNode *)
// ============================================================================
int (**glitch::collada::CSceneNode::Construct_vf(
        glitch::scene::ISceneNode::Self *a1,
        int *a2,
        int a3))(glitch::scene::ISceneNode::Self *)
{
  int v3;
  bool v4;
  int v5;
  int (**result)(glitch::scene::ISceneNode::Self *);
  uint32_t *v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  uint32_t *v14;
  int v15;
  int v16;
  typedef uint32_t _g4_t_v17[3];
  typedef uint32_t _g4_t_v18[3];
  typedef uint32_t _g4_t_v19[11];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v17)) > _g4_s0 ? (8u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v18)) > _g4_s1 ? (20u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v19)) > _g4_s2 ? (32u + sizeof(_g4_t_v19)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);

  *((uint32_t *)a1 + 79) = (uint32_t)(uintptr_t)(&off_207570C);
  *((uint32_t *)a1 + 80) = 0;
  *((uint32_t *)a1 + 78) = (uint32_t)(uintptr_t)(off_20756EC);
  glitch::scene::CEmptySceneNode::Construct(a1, (int)(uintptr_t)(&off_2075A24));
  v3 = *a2;
  v4 = *a2 == 0;
  *((uint32_t *)a1 + 72) = *a2;
  if ( !v4 )
    sub_8B1B00((volatile int32_t *)(v3 + 4));
  v5 = a2[1];
  *((uint32_t *)a1 + 74) = 0;
  *((uint32_t *)a1 + 73) = v5;
  *((uint32_t *)a1 + 75) = 0;
  *((uint32_t *)a1 + 71) = (uint32_t)(uintptr_t)(&unk_20DFC20);
  *((uint32_t *)a1 + 76) = 0;
  *((uint32_t *)a1 + 77) = (uint32_t)(uintptr_t)(a3);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2075A70);
  result = (int (**)(glitch::scene::ISceneNode::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2075BC8));
  *((uint32_t *)a1 + 78) = (uint32_t)(uintptr_t)(&off_2075BA8);
  *((uint32_t *)a1 + 79) = ((uint32_t)(uintptr_t)&off_2075BC8);
  if ( a3 != 0 )
  {
    glitch::scene::ISceneNode::setName(a1, *(const char **)(a3 + 4));
    v7 = *((uint32_t **)a1 + 77);
    v17[0] = v7[3];
    v8 = v7[4];
    v9 = v7[5];
    v17[1] = v8;
    v17[2] = v9;
    glitch::scene::ISceneNode::setPosition(a1, v17);
    v10 = *((uint32_t **)a1 + 77);
    v11 = v10[9];
    v12 = v10[8];
    v13 = v10[7];
    v19[0] = v10[6];
    v19[2] = v12;
    v19[3] = v11;
    v19[1] = v13;
    glitch::scene::ISceneNode::setRotation(a1, (const glitch::core::quaternion::Self *)v19);
    v14 = *((uint32_t **)a1 + 77);
    v18[0] = v14[10];
    v15 = v14[11];
    v16 = v14[12];
    v18[1] = v15;
    v18[2] = v16;
    glitch::scene::ISceneNode::setScale(a1, v18);
    return (int (**)(glitch::scene::ISceneNode::Self *))glitch::scene::ISceneNode::setVisible(
                                                            a1,
                                                            *(uint32_t *)(*((uint32_t *)a1 + 77) + 52) != 0);
  }
  return result;
}


// ============================================================================
// Address:   0xd51d90 (size: 757 bytes)
// Symbol:    _ZNK6glitch7collada10CSceneNode18computeBoundingBoxERNS_4core8aabbox3dIfEE
// Demangled: glitch::collada::CSceneNode::computeBoundingBox(glitch::core::aabbox3d<float> &)const
// ============================================================================
int glitch::collada::CSceneNode::computeBoundingBox(glitch::scene::ISceneNode::Self *a1, float *a2)
{
  uint32_t **Children;
  uint32_t *v3;
  uint32_t *v4;
  int v5;
  int *v6;
  int v7;
  float *v8;
  float *v10;
  float v11; // xmm2_4
  float v12; // xmm7_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm6_4
  float v16; // xmm5_4
  float v17; // xmm4_4
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  glitch::scene::ISceneNode::Self *v22;
  float v23; // xmm2_4
  float v24; // xmm7_4
  float v25; // xmm0_4
  float v26; // xmm1_4
  typedef uint8_t _g4_t_v27;
  typedef uint32_t *_g4_t_v28;
  typedef float _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef float _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (7u + sizeof(_g4_t_v27)) > _g4_s0 ? (7u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v28)) > _g4_s1 ? (8u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v29)) > _g4_s2 ? (12u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v30)) > _g4_s3 ? (16u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v31)) > _g4_s4 ? (20u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v32)) > _g4_s5 ? (24u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v33)) > _g4_s6 ? (28u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v34)) > _g4_s7 ? (32u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v35)) > _g4_s8 ? (36u + sizeof(_g4_t_v35)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 7u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 28u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 32u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 36u);

  Children = (uint32_t **)glitch::scene::ISceneNode::getChildren(a1);
  v3 = *Children;
  v28 = (uint32_t *)(Children);
  v27 = 0;
  while ( v3 != v28 )
  {
    while ( 1 )
    {
      v4 = nullptr;
      if ( v3 != nullptr )
        v4 = v3 - 1;
      v5 = (*(int (**)(uint32_t *))(*v4 + 212))(v4);
      if ( v5 == 1936023908 || v5 == 1835360612 || v5 == 1298489700 )
        break;
      if ( v5 != 1852137828 )
        goto LABEL_6;
      v22 = nullptr;
      if ( v3 != nullptr )
        v22 = (glitch::scene::ISceneNode::Self *)(v3 - 1);
      *(float *)&v30 = 3.4028235e38f;
      v31 = 2139095039;
      v32 = 2139095039;
      v33 = -3.4028235e38f;
      v34 = -8388609;
      v35 = -8388609;
      if ( (uint8_t)glitch::collada::CSceneNode::computeBoundingBox(v22, (float *)(uintptr_t)((int)(uintptr_t)(&v30))) == 0 )
        goto LABEL_6;
      if ( v27 != 0 )
      {
        v23 = v33;
        v24 = a2[3];
        v25 = *(float *)&v35;
        v26 = *(float *)&v34;
        if ( v33 > v24 )
        {
          a2[3] = v33;
          v24 = v23;
        }
        v15 = a2[4];
        if ( v26 > v15 )
        {
          a2[4] = v26;
          v15 = v26;
        }
        v29 = a2[5];
        if ( v25 > v29 )
        {
          a2[5] = v25;
          v29 = v25;
        }
        v16 = *a2;
        if ( *a2 > v23 )
        {
          *a2 = v23;
          v16 = v23;
        }
        v17 = a2[1];
        if ( v17 > v26 )
        {
          a2[1] = v26;
          v17 = v26;
        }
        v18 = a2[2];
        if ( v18 > v25 )
        {
          a2[2] = v25;
          v18 = v25;
        }
        v19 = *(float *)&v30;
        v20 = *(float *)&v32;
        v21 = *(float *)&v31;
        if ( *(float *)&v30 > v24 )
          goto LABEL_28;
        goto LABEL_29;
      }
      v27 = 1;
      *a2 = *(float *)&v30;
      *((uint32_t *)a2 + 1) = v31;
      *((uint32_t *)a2 + 2) = v32;
      a2[3] = v33;
      *((uint32_t *)a2 + 4) = v34;
      *((uint32_t *)a2 + 5) = v35;
LABEL_6:
      v3 = (uint32_t *)*v3;
      if ( v3 == v28 )
        return v27;
    }
    v6 = nullptr;
    if ( v3 != nullptr )
      v6 = (int *)(v3 - 1);
    v7 = *v6;
    if ( v27 != 0 )
    {
      v10 = (float *)(*(int (**)(int *))(v7 + 64))(v6);
      v11 = v10[3];
      v12 = a2[3];
      v13 = v10[5];
      v14 = v10[4];
      if ( v11 > v12 )
      {
        a2[3] = v11;
        v12 = v11;
      }
      v15 = a2[4];
      if ( v14 > v15 )
      {
        a2[4] = v14;
        v15 = v14;
      }
      v29 = a2[5];
      if ( v13 > v29 )
      {
        a2[5] = v13;
        v29 = v13;
      }
      v16 = *a2;
      if ( *a2 > v11 )
      {
        *a2 = v11;
        v16 = v11;
      }
      v17 = a2[1];
      if ( v17 > v14 )
      {
        a2[1] = v14;
        v17 = v14;
      }
      v18 = a2[2];
      if ( v18 > v13 )
      {
        a2[2] = v13;
        v18 = v13;
      }
      v19 = *v10;
      v20 = v10[2];
      v21 = v10[1];
      if ( *v10 > v12 )
LABEL_28:
        a2[3] = v19;
LABEL_29:
      if ( v21 > v15 )
        a2[4] = v21;
      if ( v20 > v29 )
        a2[5] = v20;
      if ( v16 > v19 )
        *a2 = v19;
      if ( v17 > v21 )
        a2[1] = v21;
      if ( v18 > v20 )
        a2[2] = v20;
      goto LABEL_6;
    }
    v8 = (float *)(*(int (**)(int *))(v7 + 64))(v6);
    v27 = 1;
    *a2 = *v8;
    a2[1] = v8[1];
    a2[2] = v8[2];
    a2[3] = v8[3];
    a2[4] = v8[4];
    a2[5] = v8[5];
    v3 = (uint32_t *)*v3;
  }
  return v27;
}


// ============================================================================
// Address:   0xd52090 (size: 360 bytes)
// Symbol:    _ZN6glitch7collada21CSkinnedMeshSceneNodeC2ERKN5boost13intrusive_ptrINS0_5IMeshEEEPNS0_5SNodeEiRKNS_4core8vector3dIfEERKNSA_10quaternionESE_
// Demangled: glitch::collada::CSkinnedMeshSceneNode::CSkinnedMeshSceneNode(boost::intrusive_ptr<glitch::collada::IMesh> const&,glitch::collada::SNode *,int,glitch::core::vector3d<float> const&,glitch::core::quaternion const&,glitch::core::vector3d<float> const&)
// ============================================================================
int glitch::collada::CSkinnedMeshSceneNode::Construct(
        glitch::IObject::Self *a1,
        int *a2,
        int *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  int v8;
  char *v9;
  unsigned int v10;
  int result;
  char *v12;

  glitch::collada::CMeshSceneNode::Construct(a1, a2 + 1, a3, a4, a5, a6, a7, a8);
  v8 = *a2;
  *(uint32_t *)a1 = *a2;
  *(uint32_t *)((char *)a1 + *(uint32_t *)(v8 - 12)) = a2[10];
  v9 = (char *)a1 + 276;
  *(uint32_t *)((char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 16)) = a2[11];
  v10 = 64;
  if ( (((unsigned int)(uintptr_t)(a1) + 276) & 1) != 0 )
  {
    v9 = (char *)a1 + 277;
    *((uint8_t *)a1 + 276) = 0;
    LOBYTE(v10) = 63;
    if ( (((unsigned int)(uintptr_t)(a1) + 277) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)(v9) & 2) == 0 )
  {
    goto LABEL_3;
  }
  *(uint16_t *)v9 = 0;
  v10 -= 2;
  v9 += 2;
LABEL_3:
  result = 0;
  memset(v9, 0, 4 * (v10 >> 2));
  v12 = &v9[4 * (v10 >> 2)];
  if ( (v10 & 2) != 0 )
  {
    *(uint16_t *)v12 = 0;
    v12 += 2;
  }
  if ( (v10 & 1) != 0 )
    *v12 = 0;
  *((uint32_t *)a1 + 69) = 1065353216;
  *((uint32_t *)a1 + 74) = 1065353216;
  *((uint32_t *)a1 + 79) = 1065353216;
  *((uint32_t *)a1 + 84) = 1065353216;
  *((uint32_t *)a1 + 85) = 2139095039;
  *((uint32_t *)a1 + 86) = 2139095039;
  *((uint32_t *)a1 + 87) = 2139095039;
  *((uint32_t *)a1 + 88) = -8388609;
  *((uint32_t *)a1 + 89) = -8388609;
  *((uint32_t *)a1 + 90) = -8388609;
  *((uint32_t *)a1 + 67) = -65538;
  *((uint32_t *)a1 + 61) |= 0x800u;
  return result;
}


// ============================================================================
// Address:   0xd52200 (size: 165 bytes)
// Symbol:    _ZN6glitch7collada28CModularSkinnedMeshSceneNodeC1ERKN5boost13intrusive_ptrINS0_5IMeshEEEPNS0_5SNodeEiRKNS_4core8vector3dIfEERKNSA_10quaternionESE_
// Demangled: glitch::collada::CModularSkinnedMeshSceneNode::CModularSkinnedMeshSceneNode(boost::intrusive_ptr<glitch::collada::IMesh> const&,glitch::collada::SNode *,int,glitch::core::vector3d<float> const&,glitch::core::quaternion const&,glitch::core::vector3d<float> const&)
// ============================================================================
void (**glitch::collada::CModularSkinnedMeshSceneNode::Construct(
        glitch::IObject::Self *a1,
        int *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7))(glitch::collada::CModularSkinnedMeshSceneNode::Self *__hidden self)
{
  *((uint32_t *)a1 + 92) = (uint32_t)(uintptr_t)(&off_207486C);
  *((uint32_t *)a1 + 91) = ((uint32_t)(uintptr_t)&off_207484C);
  *((uint32_t *)a1 + 93) = 0;
  glitch::collada::CSkinnedMeshSceneNode::Construct(a1, (int *)((uint32_t)(uintptr_t)&off_2074E84), a2, a3, a4, a5, a6, a7);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2074EF0);
  *((uint32_t *)a1 + 91) = ((uint32_t)(uintptr_t)&off_2075034);
  *((uint32_t *)a1 + 92) = ((uint32_t)(uintptr_t)&off_2075054);
  return (void (**)(glitch::collada::CModularSkinnedMeshSceneNode::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2075054));
}


// ============================================================================
// Address:   0xd522b0 (size: 139 bytes)
// Symbol:    _ZN6glitch7collada28CModularSkinnedMeshSceneNodeC2ERKN5boost13intrusive_ptrINS0_5IMeshEEEPNS0_5SNodeEiRKNS_4core8vector3dIfEERKNSA_10quaternionESE_
// Demangled: glitch::collada::CModularSkinnedMeshSceneNode::CModularSkinnedMeshSceneNode(boost::intrusive_ptr<glitch::collada::IMesh> const&,glitch::collada::SNode *,int,glitch::core::vector3d<float> const&,glitch::core::quaternion const&,glitch::core::vector3d<float> const&)
// ============================================================================
int glitch::collada::CModularSkinnedMeshSceneNode::CModularSkinnedMeshSceneNode(
        glitch::IObject::Self *a1,
        int *a2,
        int *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  int v8;
  int result;

  glitch::collada::CSkinnedMeshSceneNode::Construct(a1, a2 + 1, a3, a4, a5, a6, a7, a8);
  v8 = *a2;
  *(uint32_t *)a1 = *a2;
  *(uint32_t *)((char *)a1 + *(uint32_t *)(v8 - 12)) = a2[13];
  result = *(uint32_t *)(*(uint32_t *)a1 - 16);
  *(uint32_t *)((char *)a1 + result) = a2[14];
  return result;
}


// ============================================================================
// Address:   0xd52340 (size: 400 bytes)
// Symbol:    _ZN6glitch7collada21CSkinnedMeshSceneNodeC1ERKN5boost13intrusive_ptrINS0_5IMeshEEEPNS0_5SNodeEiRKNS_4core8vector3dIfEERKNSA_10quaternionESE_
// Demangled: glitch::collada::CSkinnedMeshSceneNode::CSkinnedMeshSceneNode(boost::intrusive_ptr<glitch::collada::IMesh> const&,glitch::collada::SNode *,int,glitch::core::vector3d<float> const&,glitch::core::quaternion const&,glitch::core::vector3d<float> const&)
// ============================================================================
int glitch::collada::CSkinnedMeshSceneNode::Construct(
        glitch::IObject::Self *a1,
        int *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  char *v7;
  unsigned int v8;
  int result;
  char *v10;

  *((uint32_t *)a1 + 92) = (uint32_t)(uintptr_t)(&off_2075C0C);
  *((uint32_t *)a1 + 91) = ((uint32_t)(uintptr_t)&off_2075BEC);
  *((uint32_t *)a1 + 93) = 0;
  v7 = (char *)a1 + 276;
  glitch::collada::CMeshSceneNode::Construct(a1, (int *)&off_20760A4, a2, a3, a4, a5, a6, a7);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20760F0);
  *((uint32_t *)a1 + 91) = (uint32_t)(uintptr_t)(&off_207622C);
  *((uint32_t *)a1 + 92) = ((uint32_t)(uintptr_t)&off_207624C);
  v8 = 64;
  if ( (((unsigned int)(uintptr_t)(a1) + 276) & 1) != 0 )
  {
    v7 = (char *)a1 + 277;
    *((uint8_t *)a1 + 276) = 0;
    LOBYTE(v8) = 63;
    if ( (((unsigned int)(uintptr_t)(a1) + 277) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)(v7) & 2) == 0 )
  {
    goto LABEL_3;
  }
  *(uint16_t *)v7 = 0;
  v8 -= 2;
  v7 += 2;
LABEL_3:
  result = 0;
  memset(v7, 0, 4 * (v8 >> 2));
  v10 = &v7[4 * (v8 >> 2)];
  if ( (v8 & 2) != 0 )
  {
    *(uint16_t *)v10 = 0;
    v10 += 2;
  }
  if ( (v8 & 1) != 0 )
    *v10 = 0;
  *((uint32_t *)a1 + 69) = 1065353216;
  *((uint32_t *)a1 + 74) = 1065353216;
  *((uint32_t *)a1 + 79) = 1065353216;
  *((uint32_t *)a1 + 84) = 1065353216;
  *((uint32_t *)a1 + 85) = 2139095039;
  *((uint32_t *)a1 + 86) = 2139095039;
  *((uint32_t *)a1 + 87) = 2139095039;
  *((uint32_t *)a1 + 88) = -8388609;
  *((uint32_t *)a1 + 89) = -8388609;
  *((uint32_t *)a1 + 90) = -8388609;
  *((uint32_t *)a1 + 67) = -65538;
  *((uint32_t *)a1 + 61) |= 0x800u;
  return result;
}


// ============================================================================
// Address:   0xd524d0 (size: 36 bytes)
// Symbol:    _ZN6glitch7collada21CSkinnedMeshSceneNode20setIsSkinningEnabledEb
// Demangled: glitch::collada::CSkinnedMeshSceneNode::setIsSkinningEnabled(bool)
// ============================================================================
int glitch::collada::CSkinnedMeshSceneNode::setIsSkinningEnabled(
        glitch::collada::CSkinnedMeshSceneNode *self,
        bool a2)
{
  return (*(int (**)(uint32_t, bool))(**((uint32_t **)self + 66) + 112))(*((uint32_t *)self + 66), a2);
}


// ============================================================================
// Address:   0xd52500 (size: 404 bytes)
// Symbol:    _ZN6glitch7collada31CParticleSystemEmitterSceneNodeC2ERKNS0_16CColladaDatabaseERNS0_12SGNPSEmitterEPNS_3res6vectorINS7_6StringEEEPNS0_14CRootSceneNodeE
// Demangled: glitch::collada::CParticleSystemEmitterSceneNode::CParticleSystemEmitterSceneNode(glitch::collada::CColladaDatabase const&,glitch::collada::SGNPSEmitter &,glitch::res::vector<glitch::res::String> *,glitch::collada::CRootSceneNode *)
// ============================================================================
glitch::collada::CRootSceneNode::Self *glitch::collada::CParticleSystemEmitterSceneNode::Construct(
        glitch::collada::CRootSceneNode::Self **a1,
        glitch::collada::CRootSceneNode::Self **a2,
        uint32_t *a3,
        const char **a4,
        glitch::collada::CRootSceneNode::Self *a5,
        glitch::collada::CRootSceneNode::Self *a6)
{
  uint32_t *v6;
  int v7;
  bool v8;
  glitch::collada::CRootSceneNode::Self *v9;
  glitch::collada::CRootSceneNode::Self *v10;
  glitch::collada::CRootSceneNode::Self *result;
  typedef int _g4_t_v12[3];
  typedef int _g4_t_v13[3];
  typedef int _g4_t_v14[11];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v13)) > _g4_s1 ? (20u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v14)) > _g4_s2 ? (32u + sizeof(_g4_t_v14)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);

  v13[0] = 1065353216;
  v13[1] = 1065353216;
  v13[2] = 1065353216;
  memset(v14, 0, 12);
  v14[3] = 1065353216;
  memset(v12, 0, sizeof(v12));
  glitch::scene::ISceneNode::Construct((glitch::IObject::Self *)a1, (int)(uintptr_t)(a2 + 1), -1, (int)(uintptr_t)(v12), (int)(uintptr_t)(v14), (int)(uintptr_t)(v13));
  v6 = a3;
  v7 = *a3;
  v8 = *a3 == 0;
  a1[66] = (glitch::collada::CRootSceneNode::Self *)*a3;
  if ( !v8 )
  {
    sub_8B1B00((volatile int32_t *)(v7 + 4));
    v6 = a3;
  }
  v9 = (glitch::collada::CRootSceneNode::Self *)v6[1];
  a1[68] = nullptr;
  a1[67] = v9;
  a1[69] = nullptr;
  a1[65] = (glitch::collada::CRootSceneNode::Self *)&unk_20DFC20;
  a1[70] = nullptr;
  v10 = *a2;
  *a1 = *a2;
  *(glitch::collada::CRootSceneNode::Self **)((char *)a1 + *((uint32_t *)v10 - 3)) = a2[4];
  *(glitch::collada::CRootSceneNode::Self **)((char *)a1 + *((uint32_t *)*a1 - 4)) = a2[5];
  a1[75] = a5;
  a1[72] = (glitch::collada::CRootSceneNode::Self *)a4;
  a1[74] = nullptr;
  a1[76] = nullptr;
  a1[77] = nullptr;
  a1[78] = nullptr;
  a1[79] = a6;
  a1[84] = nullptr;
  a1[65] = (glitch::collada::CRootSceneNode::Self *)*a4;
  glitch::scene::ISceneNode::setName((glitch::scene::ISceneNode::Self *)a1, a4[1]);
  result = a1[79];
  if ( result != nullptr )
    return (glitch::collada::CRootSceneNode::Self *)glitch::collada::CRootSceneNode::addParticleSystem(
                                                result,
                                                (glitch::collada::CParticleSystemEmitterSceneNode::Self *)a1);
  return result;
}


// ============================================================================
// Address:   0xd526a0 (size: 443 bytes)
// Symbol:    _ZN6glitch7collada31CParticleSystemEmitterSceneNodeC1ERKNS0_16CColladaDatabaseERNS0_12SGNPSEmitterEPNS_3res6vectorINS7_6StringEEEPNS0_14CRootSceneNodeE
// Demangled: glitch::collada::CParticleSystemEmitterSceneNode::CParticleSystemEmitterSceneNode(glitch::collada::CColladaDatabase const&,glitch::collada::SGNPSEmitter &,glitch::res::vector<glitch::res::String> *,glitch::collada::CRootSceneNode *)
// ============================================================================
glitch::collada::CRootSceneNode::Self *glitch::collada::CParticleSystemEmitterSceneNode::Construct(
        glitch::IObject::Self *a1,
        int *a2,
        int a3,
        int a4,
        int a5)
{
  int v5;
  bool v6;
  int v7;
  glitch::collada::CRootSceneNode::Self *result;
  typedef int _g4_t_v9[3];
  typedef int _g4_t_v10[3];
  typedef int _g4_t_v11[11];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v10)) > _g4_s1 ? (20u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v11)) > _g4_s2 ? (32u + sizeof(_g4_t_v11)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);

  v10[0] = 1065353216;
  v10[1] = 1065353216;
  v10[2] = 1065353216;
  *((uint32_t *)a1 + 86) = (uint32_t)(uintptr_t)(&off_207678C);
  *((uint32_t *)a1 + 87) = 0;
  *((uint32_t *)a1 + 85) = ((uint32_t)(uintptr_t)&off_207676C);
  memset(v11, 0, 12);
  v11[3] = 1065353216;
  memset(v9, 0, sizeof(v9));
  glitch::scene::ISceneNode::Construct(a1, (int)(uintptr_t)(&off_2076924), -1, (int)(uintptr_t)(v9), (int)(uintptr_t)(v11), (int)(uintptr_t)(v10));
  v5 = *a2;
  v6 = *a2 == 0;
  *((uint32_t *)a1 + 66) = *a2;
  if ( !v6 )
    sub_8B1B00((volatile int32_t *)(v5 + 4));
  v7 = a2[1];
  *((uint32_t *)a1 + 68) = 0;
  *((uint32_t *)a1 + 67) = v7;
  *((uint32_t *)a1 + 69) = 0;
  *((uint32_t *)a1 + 65) = (uint32_t)(uintptr_t)(&unk_20DFC20);
  *((uint32_t *)a1 + 70) = 0;
  *((uint32_t *)a1 + 72) = a3;
  *((uint32_t *)a1 + 74) = 0;
  *((uint32_t *)a1 + 76) = 0;
  *((uint32_t *)a1 + 77) = 0;
  *((uint32_t *)a1 + 78) = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2076950);
  *((uint32_t *)a1 + 86) = ((uint32_t)(uintptr_t)&off_2076AA4);
  *((uint32_t *)a1 + 75) = a4;
  *((uint32_t *)a1 + 85) = (uint32_t)(uintptr_t)(&off_2076A84);
  *((uint32_t *)a1 + 79) = a5;
  *((uint32_t *)a1 + 84) = 0;
  *((uint32_t *)a1 + 65) = *(uint32_t *)a3;
  glitch::scene::ISceneNode::setName(a1, *(const char **)(a3 + 4));
  result = *((glitch::collada::CRootSceneNode::Self **)a1 + 79);
  if ( result != nullptr )
    return (glitch::collada::CRootSceneNode::Self *)glitch::collada::CRootSceneNode::addParticleSystem(result, (glitch::collada::CParticleSystemEmitterSceneNode::Self *)(a1));
  return result;
}


// ============================================================================
// Address:   0xd52860 (size: 381 bytes)
// Symbol:    _ZN6glitch7collada31CParticleSystemEmitterSceneNodeD2Ev
// Demangled: glitch::collada::CParticleSystemEmitterSceneNode::Destroy()
// ============================================================================
void glitch::collada::CParticleSystemEmitterSceneNode::Destroy(
        glitch::collada::CParticleSystemEmitterSceneNode::Self *self,
        int *a2)
{
  int v2;
  glitch::collada::ps::CParticleSystem::Self *v3;
  int v4;
  glitch::video::CMaterial::Self *v5;
  bool v6;

  v2 = *a2;
  *(uint32_t *)self = *a2;
  *(uint32_t *)((char *)self + *(uint32_t *)(v2 - 12)) = a2[4];
  *(uint32_t *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 16)) = a2[5];
  v3 = *((glitch::collada::ps::CParticleSystem::Self **)self + 71);
  if ( v3 != nullptr )
  {
    if ( LOBYTE(g4_guard_2f7f3188ff[0]) == 0
      && _cxa_guard_acquire(g4_guard_2f7f3188ff) != 0 )
    {
      glitch::collada::ps::CParticleSystemManager::Construct((glitch::collada::ps::CParticleSystemManager::Self *)g4_fnstatic_aa14cdda2c);
      _cxa_guard_release(g4_guard_2f7f3188ff);
      __cxa_atexit(
        (void (*)(void *))static_cast<void (*)(pthread_mutex_t **)>(glitch::collada::ps::CParticleSystemManager::Destroy),
        g4_fnstatic_aa14cdda2c,
        &unk_20D1280);
    }
    glitch::collada::ps::CParticleSystemManager::deleteParticleSystem(
      (pthread_mutex_t **)g4_fnstatic_aa14cdda2c,
      v3);
    v4 = *((uint32_t *)self + 71);
    if ( v4 != 0 )
      (*(void (**)(uint32_t))(*(uint32_t *)v4 + 4))(*((uint32_t *)self + 71));
  }
  if ( *((uint32_t *)self + 84) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 84));
  if ( *((uint32_t *)self + 76) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 76));
  v5 = *((glitch::video::CMaterial::Self **)self + 74);
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v5 != nullptr)
{
    v6 = *(uint32_t *)v5 == 2;
    _mm_mfence();
    if ( v6 )
      glitch::video::CMaterial::removeFromRootSceneNode(v5);
    if ( __sync_fetch_and_add((volatile int32_t *)v5, 0xFFFFFFFF) == 1 )
    {
      glitch::video::CMaterial::Destroy(v5);
      gll_operator_delete_arr((int)(uintptr_t)(v5));
    }
  }

  glitch::collada::CColladaDatabase::Destroy((glitch::collada::CParticleSystemEmitterSceneNode::Self *)((char *)self + 264));
  glitch::scene::ISceneNode::Destroy(self);
}
// ----------------------------------------------------------------------------
// Function: glitch::collada::CParticleSystemEmitterSceneNode::initParticleSystem  (binary VA: 0xd529e0)
// Original: glitch::collada::CParticleSystemEmitterSceneNode::initParticleSystem
// ----------------------------------------------------------------------------
int glitch::collada::CParticleSystemEmitterSceneNode::initParticleSystem(uint32_t *a1, int a2, int a3, g4_cxa_guard_t **a4)
{
  uint32_t *v4;
  int v5;
  g4_cxa_guard_t *v6;
  volatile int32_t *v7;
  volatile int32_t *v8;
  uint32_t *ParticleSystem;
  int v10;
  char *v11;
  int v12;
  uint32_t *v13;
  int v14;
  int v15;
  int v16;
  uint32_t *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  uint8_t *v22;
  int v23;
  int v24;
  int v25;
  int v26;
  uint32_t *v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int *v34;
  int v35;
  int v36;
  uint32_t *v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  uint32_t *v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  uint32_t *v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  uint32_t *v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  uint32_t *v101;
  int v102;
  int v103;
  int v104;
  char v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  int v112;
  int v113;
  int v114;
  int v115;
  char v116;
  int v117;
  uint32_t *v118;
  int v119;
  int v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  int v126;
  int v127;
  int v128;
  uint32_t *v129;
  int v130;
  int v131;
  int v132;
  int v133;
  uint32_t *v134;
  int v135;
  int v136;
  int v137;
  int v138;
  int v139;
  int v140;
  int v141;
  int v142;
  uint32_t *v143;
  int v144;
  int v145;
  int v146;
  int v147;
  int v148;
  uint32_t *v149;
  int v150;
  int v151;
  int v152;
  int v153;
  int v154;
  int v155;
  int v156;
  int v157;
  volatile int32_t *v158;
  int v159;
  volatile int32_t **v160;
  volatile int32_t *v161;
  uint32_t *v162;
  int v163;
  uint32_t *v164;
  int v165;
  int result;
  int v167;
  int *v168;
  int v169; // xmm0_4
  int v170;
  int v171;
  int v172; // xmm0_4
  int v173;
  int v174;
  int v175;
  int *v176;
  int v177; // xmm0_4
  int v178;
  int v179;
  int v180; // xmm0_4
  int v181;
  int v182;
  int v183;
  int *v184;
  int v185; // xmm0_4
  int v186;
  int v187;
  typedef int _g4_t_v188;
  typedef int _g4_t_v189;
  typedef int _g4_t_v190;
  typedef int _g4_t_v191;
  typedef int _g4_t_v192;
  typedef uint32_t *_g4_t_v193;
  typedef int _g4_t_v194;
  typedef g4_cxa_guard_t *_g4_t_v195;
  typedef int _g4_t_v196;
  typedef int _g4_t_v197;
  typedef int _g4_t_v198;
  typedef uint8_t *_g4_t_v199;
  typedef int _g4_t_v200;
  typedef int _g4_t_v201;
  typedef int _g4_t_v202;
  typedef int _g4_t_v203;
  typedef int _g4_t_v204;
  typedef int _g4_t_v205;
  typedef int _g4_t_v206;
  typedef int _g4_t_v207;
  typedef int _g4_t_v208;
  typedef int _g4_t_v209;
  typedef int _g4_t_v210;
  typedef int _g4_t_v211;
  typedef int _g4_t_v212;
  typedef int _g4_t_v213;
  typedef int _g4_t_v214;
  typedef int _g4_t_v215;
  typedef int _g4_t_v216;
  typedef int _g4_t_v217;
  typedef int _g4_t_v218;
  typedef int _g4_t_v219;
  typedef int _g4_t_v220;
  typedef int _g4_t_v221;
  typedef int _g4_t_v222;
  typedef int _g4_t_v223;
  typedef int _g4_t_v224;
  typedef int _g4_t_v225;
  typedef int _g4_t_v226;
  typedef int _g4_t_v227;
  typedef int _g4_t_v228;
  typedef int _g4_t_v229;
  typedef g4_cxa_guard_t **_g4_t_v230;
  typedef int _g4_t_v231;
  typedef uint32_t _g4_t_v232[3];
  typedef int _g4_t_v233;
  typedef int _g4_t_v234;
  typedef int _g4_t_v235;
  typedef int _g4_t_v236;
  typedef int _g4_t_v237;
  typedef int _g4_t_v238;
  typedef uint32_t *_g4_t_v239;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v188)) > _g4_s0 ? (12u + sizeof(_g4_t_v188)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v189)) > _g4_s1 ? (16u + sizeof(_g4_t_v189)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v190)) > _g4_s2 ? (20u + sizeof(_g4_t_v190)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v191)) > _g4_s3 ? (24u + sizeof(_g4_t_v191)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v192)) > _g4_s4 ? (28u + sizeof(_g4_t_v192)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v193)) > _g4_s5 ? (32u + sizeof(_g4_t_v193)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v194)) > _g4_s6 ? (36u + sizeof(_g4_t_v194)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v195)) > _g4_s7 ? (40u + sizeof(_g4_t_v195)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v196)) > _g4_s8 ? (44u + sizeof(_g4_t_v196)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v197)) > _g4_s9 ? (48u + sizeof(_g4_t_v197)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v198)) > _g4_s10 ? (48u + sizeof(_g4_t_v198)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v199)) > _g4_s11 ? (52u + sizeof(_g4_t_v199)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v200)) > _g4_s12 ? (52u + sizeof(_g4_t_v200)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v201)) > _g4_s13 ? (52u + sizeof(_g4_t_v201)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v202)) > _g4_s14 ? (52u + sizeof(_g4_t_v202)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v203)) > _g4_s15 ? (52u + sizeof(_g4_t_v203)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v204)) > _g4_s16 ? (52u + sizeof(_g4_t_v204)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v205)) > _g4_s17 ? (52u + sizeof(_g4_t_v205)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v206)) > _g4_s18 ? (52u + sizeof(_g4_t_v206)) : _g4_s18,
    _g4_s20 = (52u + sizeof(_g4_t_v207)) > _g4_s19 ? (52u + sizeof(_g4_t_v207)) : _g4_s19,
    _g4_s21 = (52u + sizeof(_g4_t_v208)) > _g4_s20 ? (52u + sizeof(_g4_t_v208)) : _g4_s20,
    _g4_s22 = (52u + sizeof(_g4_t_v209)) > _g4_s21 ? (52u + sizeof(_g4_t_v209)) : _g4_s21,
    _g4_s23 = (52u + sizeof(_g4_t_v210)) > _g4_s22 ? (52u + sizeof(_g4_t_v210)) : _g4_s22,
    _g4_s24 = (52u + sizeof(_g4_t_v211)) > _g4_s23 ? (52u + sizeof(_g4_t_v211)) : _g4_s23,
    _g4_s25 = (52u + sizeof(_g4_t_v212)) > _g4_s24 ? (52u + sizeof(_g4_t_v212)) : _g4_s24,
    _g4_s26 = (52u + sizeof(_g4_t_v213)) > _g4_s25 ? (52u + sizeof(_g4_t_v213)) : _g4_s25,
    _g4_s27 = (52u + sizeof(_g4_t_v214)) > _g4_s26 ? (52u + sizeof(_g4_t_v214)) : _g4_s26,
    _g4_s28 = (56u + sizeof(_g4_t_v215)) > _g4_s27 ? (56u + sizeof(_g4_t_v215)) : _g4_s27,
    _g4_s29 = (60u + sizeof(_g4_t_v216)) > _g4_s28 ? (60u + sizeof(_g4_t_v216)) : _g4_s28,
    _g4_s30 = (60u + sizeof(_g4_t_v217)) > _g4_s29 ? (60u + sizeof(_g4_t_v217)) : _g4_s29,
    _g4_s31 = (60u + sizeof(_g4_t_v218)) > _g4_s30 ? (60u + sizeof(_g4_t_v218)) : _g4_s30,
    _g4_s32 = (60u + sizeof(_g4_t_v219)) > _g4_s31 ? (60u + sizeof(_g4_t_v219)) : _g4_s31,
    _g4_s33 = (60u + sizeof(_g4_t_v220)) > _g4_s32 ? (60u + sizeof(_g4_t_v220)) : _g4_s32,
    _g4_s34 = (60u + sizeof(_g4_t_v221)) > _g4_s33 ? (60u + sizeof(_g4_t_v221)) : _g4_s33,
    _g4_s35 = (60u + sizeof(_g4_t_v222)) > _g4_s34 ? (60u + sizeof(_g4_t_v222)) : _g4_s34,
    _g4_s36 = (60u + sizeof(_g4_t_v223)) > _g4_s35 ? (60u + sizeof(_g4_t_v223)) : _g4_s35,
    _g4_s37 = (60u + sizeof(_g4_t_v224)) > _g4_s36 ? (60u + sizeof(_g4_t_v224)) : _g4_s36,
    _g4_s38 = (60u + sizeof(_g4_t_v225)) > _g4_s37 ? (60u + sizeof(_g4_t_v225)) : _g4_s37,
    _g4_s39 = (60u + sizeof(_g4_t_v226)) > _g4_s38 ? (60u + sizeof(_g4_t_v226)) : _g4_s38,
    _g4_s40 = (60u + sizeof(_g4_t_v227)) > _g4_s39 ? (60u + sizeof(_g4_t_v227)) : _g4_s39,
    _g4_s41 = (60u + sizeof(_g4_t_v228)) > _g4_s40 ? (60u + sizeof(_g4_t_v228)) : _g4_s40,
    _g4_s42 = (60u + sizeof(_g4_t_v229)) > _g4_s41 ? (60u + sizeof(_g4_t_v229)) : _g4_s41,
    _g4_s43 = (64u + sizeof(_g4_t_v230)) > _g4_s42 ? (64u + sizeof(_g4_t_v230)) : _g4_s42,
    _g4_s44 = (64u + sizeof(_g4_t_v231)) > _g4_s43 ? (64u + sizeof(_g4_t_v231)) : _g4_s43,
    _g4_s45 = (68u + sizeof(_g4_t_v232)) > _g4_s44 ? (68u + sizeof(_g4_t_v232)) : _g4_s44,
    _g4_s46 = (80u + sizeof(_g4_t_v233)) > _g4_s45 ? (80u + sizeof(_g4_t_v233)) : _g4_s45,
    _g4_s47 = (84u + sizeof(_g4_t_v234)) > _g4_s46 ? (84u + sizeof(_g4_t_v234)) : _g4_s46,
    _g4_s48 = (88u + sizeof(_g4_t_v235)) > _g4_s47 ? (88u + sizeof(_g4_t_v235)) : _g4_s47,
    _g4_s49 = (92u + sizeof(_g4_t_v236)) > _g4_s48 ? (92u + sizeof(_g4_t_v236)) : _g4_s48,
    _g4_s50 = (96u + sizeof(_g4_t_v237)) > _g4_s49 ? (96u + sizeof(_g4_t_v237)) : _g4_s49,
    _g4_s51 = (100u + sizeof(_g4_t_v238)) > _g4_s50 ? (100u + sizeof(_g4_t_v238)) : _g4_s50,
    _g4_s52 = (108u + sizeof(_g4_t_v239)) > _g4_s51 ? (108u + sizeof(_g4_t_v239)) : _g4_s51
  };
  alignas(16) uint8_t _g4_sf[_g4_s52];
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 12u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 16u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 20u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 24u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 28u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 32u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 36u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 40u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 44u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 48u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 48u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 52u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 52u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 52u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 52u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 52u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 52u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 52u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 52u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 52u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 52u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 52u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 52u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 52u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 52u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 52u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 52u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 56u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 60u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 60u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 60u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 60u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 60u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 60u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 60u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 60u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 60u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 60u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 60u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 60u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 60u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 60u);
  _g4_t_v230 &v230 = *reinterpret_cast<_g4_t_v230 *>(_g4_sf + 64u);
  _g4_t_v231 &v231 = *reinterpret_cast<_g4_t_v231 *>(_g4_sf + 64u);
  _g4_t_v232 &v232 = *reinterpret_cast<_g4_t_v232 *>(_g4_sf + 68u);
  _g4_t_v233 &v233 = *reinterpret_cast<_g4_t_v233 *>(_g4_sf + 80u);
  _g4_t_v234 &v234 = *reinterpret_cast<_g4_t_v234 *>(_g4_sf + 84u);
  _g4_t_v235 &v235 = *reinterpret_cast<_g4_t_v235 *>(_g4_sf + 88u);
  _g4_t_v236 &v236 = *reinterpret_cast<_g4_t_v236 *>(_g4_sf + 92u);
  _g4_t_v237 &v237 = *reinterpret_cast<_g4_t_v237 *>(_g4_sf + 96u);
  _g4_t_v238 &v238 = *reinterpret_cast<_g4_t_v238 *>(_g4_sf + 100u);
  _g4_t_v239 &v239 = *reinterpret_cast<_g4_t_v239 *>(_g4_sf + 108u);

  v239 = (uint32_t *)(&a1);
  v4 = a1;
  v5 = a3;
  v196 = a2;
  v230 = a4;
  v6 = *a4;
  if ( *a4 != nullptr )
  {
    v195 = *a4;
    sub_8B1B00(v6 + 1);
    v6 = v195;
  }
  v7 = (volatile int32_t *)v4[84];
  v4[84] = (uint32_t)(uintptr_t)(v6);
  if ( v7 != nullptr )
    sub_5459C0(v7);
  if ( *v230 != nullptr )
  {
    (*(void (**)(int *))(**v230 + 20))(&v233);
    v8 = (volatile int32_t *)v233;
    v4[82] = *(uint32_t *)(*(uint32_t *)(v233 + 8) + 4);
    sub_5459C0(v8);
    v5 = v4[82];
  }
  else
  {
    v4[82] = v5;
  }
  if ( LOBYTE(g4_guard_2f7f3188ff[0]) == 0 )
  {
    v194 = *(uint8_t *)(v4[72] + 92);
    v195 = g4_guard_2f7f3188ff;
    if ( _cxa_guard_acquire(g4_guard_2f7f3188ff) != 0 )
    {
      glitch::collada::ps::CParticleSystemManager::Construct((glitch::collada::ps::CParticleSystemManager::Self *)g4_fnstatic_aa14cdda2c);
      _cxa_guard_release(g4_guard_2f7f3188ff);
      __cxa_atexit(
        (void (*)(void *))static_cast<void (*)(pthread_mutex_t **)>(glitch::collada::ps::CParticleSystemManager::Destroy),
        g4_fnstatic_aa14cdda2c,
        &unk_20D1280);
    }

  }
  v188 = v5;
  ParticleSystem = (uint32_t *)glitch::collada::ps::CParticleSystemManager::createParticleSystem((pthread_mutex_t **)g4_fnstatic_aa14cdda2c);
  v4[71] = (uint32_t)(uintptr_t)(ParticleSystem);
  v10 = *(uint32_t *)(v4[72] + 52);
  v11 = (char *)ParticleSystem + *(uint32_t *)(*ParticleSystem - 12);
  *((uint32_t *)v11 + 26) = v10;
  if ( v10 == 0 )
    v10 = lrand48();
  *((uint32_t *)v11 + 25) = v10;
  v199 = (uint8_t *)v4[72];
  v12 = glitch::collada::ps::CParticleSystem::ParameterOffsets;
  v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  v13 = (uint32_t *)v4[71];
  v14 = *(uint32_t *)(glitch::collada::ps::CParticleSystem::ParameterOffsets + 12);
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v14 >= 0)
{
    *((uint8_t *)v13 + v14) = v199[92];
    v199 = (uint8_t *)v4[72];
    v13 = (uint32_t *)v4[71];
    v12 = glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v15 = *(uint32_t *)(v12 + 160);
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v15 >= 0)
{
    *((uint8_t *)v13 + v15) = v199[372] != 0;
    v199 = (uint8_t *)v4[72];
    v13 = (uint32_t *)v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  *((uint8_t *)v13 + *(uint32_t *)(*v13 - 12) + 68) = v199[93] != 0;
  v16 = v4[72];
  v17 = (uint32_t *)v4[71];
  v18 = v193[4];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v18 >= 0)
{
    *((uint8_t *)v17 + v18) = *(uint8_t *)(v16 + 8) != 0;
    v16 = v4[72];
    v17 = (uint32_t *)v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  *((uint8_t *)v17 + *(uint32_t *)(*v17 - 12) + 69) = *(uint8_t *)(v16 + 9) != 0;
  *(uint8_t *)(v4[71] + *(uint32_t *)(*(uint32_t *)v4[71] - 12) + 70) = *(uint8_t *)(v4[72] + 10) != 0;
  v19 = v4[72];
  v231 = v4[71];
  v20 = *(uint32_t *)(v19 + 12);
  v21 = v193[27];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v21 >= 0)
{
    v22 = (uint8_t *)(v231 + v21);
    *v22 = HIBYTE(v20);
    v22[3] = v20;
    v22[1] = BYTE2(v20);
    v22[2] = BYTE1(v20);
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v23 = *(uint32_t *)(v19 + 24);
  v200 = *(uint32_t *)(v19 + 20);
  v235 = v200;
  v216 = v23;
  v197 = *(uint32_t *)(v19 + 28);
  v237 = v197;
  v236 = v23;
  v24 = *(uint32_t *)(v19 + 16);
  v234 = v24;
  v25 = v193[28];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v25 >= 0)
{
    *(uint32_t *)(v231 + v25) = v24;
    *(uint32_t *)(v231 + v25 + 4) = v200;
    *(uint32_t *)(v231 + v25 + 8) = v216;
    *(uint32_t *)(v231 + v25 + 12) = v197;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v26 = *(uint32_t *)(v19 + 40);
  v201 = *(uint32_t *)(v19 + 36);
  v235 = v201;
  v217 = v26;
  v198 = *(uint32_t *)(v19 + 44);
  v237 = v198;
  v27 = v193;
  v236 = v26;
  v28 = *(uint32_t *)(v19 + 32);
  v234 = v28;
  v29 = v193[29];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v29 >= 0)
{
    *(uint32_t *)(v231 + v29) = v28;
    *(uint32_t *)(v231 + v29 + 4) = v201;
    *(uint32_t *)(v231 + v29 + 12) = v198;
    *(uint32_t *)(v231 + v29 + 8) = v217;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v27 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v30 = v27[35];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v30 >= 0)
{
    *(uint32_t *)(v231 + v30) = *(uint32_t *)(v19 + 56);
    v27 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v31 = v27[2];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v31 >= 0)
{
    *(uint8_t *)(v231 + v31) = *(uint8_t *)(v19 + 360);
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v215 = *(uint32_t *)(v19 + 368);
  v202 = *(uint32_t *)(v19 + 364);
  v32 = v193[94];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v32 >= 0)
{
    *(uint32_t *)(v231 + v32 + 4) = v215;
    *(uint32_t *)(v231 + v32) = v202;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

// ----------------------------------------------------------------------------
// Function: switch (binary VA: 0x0)
// Original: switch
// ----------------------------------------------------------------------------
switch (*(uint32_t *)(v19 + 56))
{
    case 0:
      v167 = *(uint32_t *)(v19 + 60);
      v168 = nullptr;
      if ( v167 != 0 )
        v168 = (int *)(v19 + v167 + 60);
      v169 = *v168;
      v170 = v193[36];
      if ( v170 >= 0 )
      {
        *(uint32_t *)(v231 + v170) = v169;
        v19 = v4[72];
        v231 = v4[71];
        v167 = *(uint32_t *)(v19 + 60);
        v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
      }
      v171 = 0;
      if ( v167 != 0 )
        v171 = v19 + v167 + 60;
      v172 = *(uint32_t *)(v171 + 4);
      v173 = v193[37];
      if ( v173 >= 0 )
      {
        *(uint32_t *)(v231 + v173) = v172;
        v19 = v4[72];
        v231 = v4[71];
        v167 = *(uint32_t *)(v19 + 60);
        v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
      }
      v174 = 0;
      if ( v167 != 0 )
        v174 = v19 + v167 + 60;
      v35 = *(uint32_t *)(v174 + 8);
      v36 = v193[38];
      if ( v36 >= 0 )
        goto LABEL_32;
      break;
    case 1:
    case 4:
    case 6:
      v33 = *(uint32_t *)(v19 + 60);
      v34 = nullptr;
      if ( v33 != 0 )
        v34 = (int *)(v19 + v33 + 60);
      v35 = *v34;
      v36 = v193[36];
      if ( v36 >= 0 )
        goto LABEL_32;
      break;
    case 2:
      v183 = *(uint32_t *)(v19 + 60);
      v184 = nullptr;
      if ( v183 != 0 )
        v184 = (int *)(v19 + v183 + 60);
      v185 = *v184;
      v186 = v193[36];
      if ( v186 >= 0 )
      {
        *(uint32_t *)(v231 + v186) = v185;
        v19 = v4[72];
        v231 = v4[71];
        v183 = *(uint32_t *)(v19 + 60);
        v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
      }
      v187 = 0;
      if ( v183 != 0 )
        v187 = v19 + v183 + 60;
      v35 = *(uint32_t *)(v187 + 4);
      v36 = v193[38];
      if ( v36 >= 0 )
        goto LABEL_32;
      break;
    case 5:
      v175 = *(uint32_t *)(v19 + 60);
      v176 = nullptr;
      if ( v175 != 0 )
        v176 = (int *)(v19 + v175 + 60);
      v177 = *v176;
      v178 = v193[37];
      if ( v178 >= 0 )
      {
        *(uint32_t *)(v231 + v178) = v177;
        v19 = v4[72];
        v231 = v4[71];
        v175 = *(uint32_t *)(v19 + 60);
        v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
      }
      v179 = 0;
      if ( v175 != 0 )
        v179 = v19 + v175 + 60;
      v180 = *(uint32_t *)(v179 + 4);
      v181 = v193[38];
      if ( v181 >= 0 )
      {
        *(uint32_t *)(v231 + v181) = v180;
        v19 = v4[72];
        v231 = v4[71];
        v175 = *(uint32_t *)(v19 + 60);
        v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
      }
      v182 = 0;
      if ( v175 != 0 )
        v182 = v19 + v175 + 60;
      v35 = *(uint32_t *)(v182 + 8);
      v36 = v193[36];
      if ( v36 >= 0 )
      {
LABEL_32:
        *(uint32_t *)(v231 + v36) = v35;
        v19 = v4[72];
        v231 = v4[71];
        v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
      }
      break;
    default:
      break;
  }

  v37 = v193;
  v38 = v193[8];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v38 >= 0)
{
    *(uint32_t *)(v231 + v38) = *(uint32_t *)(v19 + 64);
    v37 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v39 = v37[10];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v39 >= 0)
{
    *(uint32_t *)(v231 + v39) = *(uint32_t *)(v19 + 76);
    v37 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v40 = v37[12];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v40 >= 0)
{
    *(uint32_t *)(v231 + v40) = *(uint32_t *)(v19 + 68);
    v37 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v41 = v37[13];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v41 >= 0)
{
    *(uint32_t *)(v231 + v41) = *(uint32_t *)(v19 + 72);
    v37 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v42 = v37[14];
  v43 = *(uint32_t *)(v19 + 48);
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v42 >= 0)
{
    *(uint32_t *)(v231 + v42) = v43;
    v19 = v4[72];
    v37 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v43 = *(uint32_t *)(v19 + 48);
  }

  v44 = v37[15];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v44 >= 0)
{
    *(uint32_t *)(v231 + v44) = v43;
    v37 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v45 = v37[68];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v45 >= 0)
{
    *(uint32_t *)(v231 + v45) = *(uint32_t *)(v19 + 80);
    v37 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v46 = v37[69];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v46 >= 0)
{
    *(uint32_t *)(v231 + v46) = *(uint32_t *)(v19 + 84);
    v37 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v47 = v37[70];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v47 >= 0)
{
    *(uint32_t *)(v231 + v47) = *(uint32_t *)(v19 + 88);
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v48 = *(uint32_t *)(v19 + 104);
  v218 = *(uint32_t *)(v19 + 108);
  v236 = v218;
  v203 = v48;
  v235 = v48;
  v49 = *(uint32_t *)(v19 + 100);
  v234 = v49;
  v50 = v193[16];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v50 >= 0)
{
    *(uint32_t *)(v231 + v50 + 4) = v203;
    *(uint32_t *)(v231 + v50) = v49;
    *(uint32_t *)(v231 + v50 + 8) = v218;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v51 = *(uint32_t *)(v19 + 116);
  v219 = *(uint32_t *)(v19 + 120);
  v236 = v219;
  v204 = v51;
  v235 = v51;
  v52 = *(uint32_t *)(v19 + 112);
  v234 = v52;
  v53 = v193[18];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v53 >= 0)
{
    *(uint32_t *)(v231 + v53 + 4) = v204;
    *(uint32_t *)(v231 + v53) = v52;
    *(uint32_t *)(v231 + v53 + 8) = v219;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v54 = *(uint32_t *)(v19 + 128);
  v220 = *(uint32_t *)(v19 + 132);
  v236 = v220;
  v55 = v193;
  v205 = v54;
  v235 = v54;
  v56 = *(uint32_t *)(v19 + 124);
  v234 = v56;
  v57 = v193[19];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v57 >= 0)
{
    *(uint32_t *)(v231 + v57 + 4) = v205;
    *(uint32_t *)(v231 + v57) = v56;
    *(uint32_t *)(v231 + v57 + 8) = v220;
    v19 = v4[72];
    v231 = v4[71];
    v55 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v58 = v55[17];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v58 >= 0)
{
    *(uint8_t *)(v231 + v58) = *(uint8_t *)(v19 + 148);
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v55 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v59 = v55[22];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v59 >= 0)
{
    *(uint8_t *)(v231 + v59) = *(uint8_t *)(v19 + 149);
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v60 = *(uint32_t *)(v19 + 144);
  v206 = *(uint32_t *)(v19 + 140);
  v235 = v206;
  v61 = v193;
  v221 = v60;
  v236 = v60;
  v62 = *(uint32_t *)(v19 + 136);
  v234 = v62;
  v63 = v193[20];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v63 >= 0)
{
    *(uint32_t *)(v231 + v63 + 4) = v206;
    *(uint32_t *)(v231 + v63) = v62;
    *(uint32_t *)(v231 + v63 + 8) = v221;
    v19 = v4[72];
    v231 = v4[71];
    v61 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v64 = v61[44];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v64 >= 0)
{
    *(uint32_t *)(v231 + v64) = *(uint32_t *)(v19 + 152);
    v61 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v65 = v61[45];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v65 >= 0)
{
    *(uint32_t *)(v231 + v65) = *(uint32_t *)(v19 + 156);
    v61 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v66 = v61[46];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v66 >= 0)
{
    *(uint32_t *)(v231 + v66) = *(uint32_t *)(v19 + 160);
    v61 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v67 = v61[49];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v67 >= 0)
{
    *(uint8_t *)(v231 + v67) = *(uint8_t *)(v19 + 168);
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v61 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v68 = v61[47];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v68 >= 0)
{
    *(uint32_t *)(v231 + v68) = *(uint32_t *)(v19 + 164);
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v69 = *(uint32_t *)(v19 + 176);
  v222 = *(uint32_t *)(v19 + 180);
  v236 = v222;
  v207 = v69;
  v235 = v69;
  v70 = *(uint32_t *)(v19 + 172);
  v234 = v70;
  v71 = v193[41];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v71 >= 0)
{
    *(uint32_t *)(v231 + v71 + 4) = v207;
    *(uint32_t *)(v231 + v71) = v70;
    *(uint32_t *)(v231 + v71 + 8) = v222;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v72 = *(uint32_t *)(v19 + 188);
  v223 = *(uint32_t *)(v19 + 192);
  v236 = v223;
  v208 = v72;
  v235 = v72;
  v73 = *(uint32_t *)(v19 + 184);
  v234 = v73;
  v74 = v193[42];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v74 >= 0)
{
    *(uint32_t *)(v231 + v74 + 4) = v208;
    *(uint32_t *)(v231 + v74) = v73;
    *(uint32_t *)(v231 + v74 + 8) = v223;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v75 = *(uint32_t *)(v19 + 200);
  v224 = *(uint32_t *)(v19 + 204);
  v236 = v224;
  v76 = v193;
  v209 = v75;
  v235 = v75;
  v77 = *(uint32_t *)(v19 + 196);
  v234 = v77;
  v78 = v193[43];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v78 >= 0)
{
    *(uint32_t *)(v231 + v78 + 4) = v209;
    *(uint32_t *)(v231 + v78) = v77;
    *(uint32_t *)(v231 + v78 + 8) = v224;
    v19 = v4[72];
    v231 = v4[71];
    v76 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v79 = v76[50];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v79 >= 0)
{
    *(uint32_t *)(v231 + v79) = *(uint32_t *)(v19 + 208);
    v76 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v80 = v76[51];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v80 >= 0)
{
    *(uint8_t *)(v231 + v80) = *(uint8_t *)(v19 + 212) != 0;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v76 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v81 = v76[59];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v81 >= 0)
{
    *(uint32_t *)(v231 + v81) = *(uint8_t *)(v19 + 216);
    v76 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v82 = v76[58];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v82 >= 0)
{
    *(uint32_t *)(v231 + v82) = *(uint32_t *)(v19 + 220);
    v76 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v83 = v76[60];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v83 >= 0)
{
    *(uint32_t *)(v231 + v83) = *(uint32_t *)(v19 + 224);
    v76 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v84 = v76[61];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v84 >= 0)
{
    *(uint32_t *)(v231 + v84) = *(uint32_t *)(v19 + 228);
    v76 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v85 = v76[66];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v85 >= 0)
{
    *(uint8_t *)(v231 + v85) = *(uint8_t *)(v19 + 217);
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v76 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v86 = v76[52];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v86 >= 0)
{
    *(uint32_t *)(v231 + v86) = *(uint32_t *)(v19 + 232);
    v76 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v87 = v76[53];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v87 >= 0)
{
    *(uint32_t *)(v231 + v87) = *(uint32_t *)(v19 + 236);
    v76 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v88 = v76[54];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v88 >= 0)
{
    *(uint32_t *)(v231 + v88) = *(uint32_t *)(v19 + 240);
    v76 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v89 = v76[57];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v89 >= 0)
{
    *(uint8_t *)(v231 + v89) = *(uint8_t *)(v19 + 248);
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v76 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v90 = v76[55];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v90 >= 0)
{
    *(uint32_t *)(v231 + v90) = *(uint32_t *)(v19 + 244);
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v91 = *(uint32_t *)(v19 + 296);
  v225 = *(uint32_t *)(v19 + 300);
  v236 = v225;
  v210 = v91;
  v235 = v91;
  v92 = *(uint32_t *)(v19 + 292);
  v234 = v92;
  v93 = v193[67];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v93 >= 0)
{
    *(uint32_t *)(v231 + v93 + 4) = v210;
    *(uint32_t *)(v231 + v93) = v92;
    *(uint32_t *)(v231 + v93 + 8) = v225;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v94 = *(uint32_t *)(v19 + 260);
  v226 = *(uint32_t *)(v19 + 264);
  v236 = v226;
  v211 = v94;
  v235 = v94;
  v95 = *(uint32_t *)(v19 + 256);
  v234 = v95;
  v96 = v193[62];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v96 >= 0)
{
    *(uint32_t *)(v231 + v96 + 4) = v211;
    *(uint32_t *)(v231 + v96) = v95;
    *(uint32_t *)(v231 + v96 + 8) = v226;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v97 = *(uint32_t *)(v19 + 272);
  v227 = *(uint32_t *)(v19 + 276);
  v236 = v227;
  v212 = v97;
  v235 = v97;
  v98 = *(uint32_t *)(v19 + 268);
  v234 = v98;
  v99 = v193[63];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v99 >= 0)
{
    *(uint32_t *)(v231 + v99 + 4) = v212;
    *(uint32_t *)(v231 + v99) = v98;
    *(uint32_t *)(v231 + v99 + 8) = v227;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v100 = *(uint32_t *)(v19 + 284);
  v228 = *(uint32_t *)(v19 + 288);
  v236 = v228;
  v101 = v193;
  v213 = v100;
  v235 = v100;
  v102 = *(uint32_t *)(v19 + 280);
  v234 = v102;
  v103 = v193[64];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v103 >= 0)
{
    *(uint32_t *)(v231 + v103 + 4) = v213;
    *(uint32_t *)(v231 + v103) = v102;
    *(uint32_t *)(v231 + v103 + 8) = v228;
    v19 = v4[72];
    v231 = v4[71];
    v101 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v104 = v101[65];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v104 >= 0)
{
    *(uint8_t *)(v231 + v104) = *(uint8_t *)(v19 + 253);
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v105 = *(uint8_t *)(v19 + 92);
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v105 != 0)
{
    if ( v105 != 2 )
      goto LABEL_124;
    v127 = *(uint32_t *)(v19 + 96);
    v128 = 0;
    v129 = v193;
    v130 = v19 + v127 + 96;
    if ( v127 != 0 )
      v128 = v130;
    v131 = v193[102];
    if ( v131 >= 0 )
    {
      *(uint8_t *)(v231 + v131) = *(uint8_t *)(v128 + 2);
      v231 = v4[71];
      v129 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
      v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    }
    v132 = v129[103];
    if ( v132 >= 0 )
    {
      *(uint16_t *)(v231 + v132) = *(uint16_t *)v128;
      v231 = v4[71];
      v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    }
    v133 = v193[98];
    if ( v133 >= 0 )
    {
      *(uint8_t *)(v231 + v133) = *(uint8_t *)(v128 + 3);
      v231 = v4[71];
      v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    }
    v134 = v193;
    v135 = v193[99];
    if ( v135 >= 0 )
    {
      *(uint8_t *)(v231 + v135) = *(uint8_t *)(v128 + 4) != 0;
      v134 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
      v231 = v4[71];
      v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    }
    v136 = *(uint32_t *)(v128 + 8);
    v213 = *(uint32_t *)(v128 + 12);
    v235 = v213;
    v137 = v134[100];
    v138 = *(uint32_t *)(v128 + 16);
    v234 = v136;
    v236 = v138;
    if ( v137 >= 0 )
    {
      *(uint32_t *)(v231 + v137) = v136;
      *(uint32_t *)(v231 + v137 + 4) = v213;
      *(uint32_t *)(v231 + v137 + 8) = v138;
      v19 = v4[72];
      v231 = v4[71];
      v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
      goto LABEL_124;
    }
  }

  else
  {
    v106 = *(uint32_t *)(v19 + 96);
    v107 = 0;
    v108 = v19 + v106 + 96;
    if ( v106 != 0 )
      v107 = v108;
    v109 = v193[98];
    if ( v109 >= 0 )
    {
      *(uint8_t *)(v231 + v109) = *(uint8_t *)v107;
      v231 = v4[71];
      v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    }
    v110 = *(uint32_t *)(v107 + 8);
    v229 = *(uint32_t *)(v107 + 12);
    v236 = v229;
    v214 = v110;
    v235 = v110;
    v111 = *(uint32_t *)(v107 + 4);
    v234 = v111;
    v112 = v193[100];
    if ( v112 >= 0 )
    {
      *(uint32_t *)(v231 + v112) = v111;
      *(uint32_t *)(v231 + v112 + 4) = v214;
      *(uint32_t *)(v231 + v112 + 8) = v229;
      v231 = v4[71];
      v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    }
    v113 = *(uint32_t *)(v107 + 20);
    v228 = *(uint32_t *)(v107 + 24);
    v236 = v228;
    v213 = v113;
    v235 = v113;
    v114 = *(uint32_t *)(v107 + 16);
    v234 = v114;
    v115 = v193[101];
    if ( v115 >= 0 )
    {
      *(uint32_t *)(v231 + v115) = v114;
      *(uint32_t *)(v231 + v115 + 4) = v213;
      *(uint32_t *)(v231 + v115 + 8) = v228;
      v231 = v4[71];
      v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    }
    v116 = *(uint8_t *)(v107 + 1);
    v117 = v193[99];
    if ( v117 >= 0 )
    {
      *(uint8_t *)(v231 + v117) = v116 != 0;
      v19 = v4[72];
      v231 = v4[71];
      v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
      goto LABEL_124;
    }
  }
  v19 = v4[72];
LABEL_124:
  v118 = v193;
  v119 = v193[71];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v119 >= 0)
{
    *(uint32_t *)(v231 + v119) = *(uint32_t *)(v19 + 308);
    v118 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v120 = v118[72];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v120 >= 0)
{
    *(uint32_t *)(v231 + v120) = *(uint32_t *)(v19 + 312);
    v118 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v121 = v118[76];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v121 >= 0)
{
    *(uint32_t *)(v231 + v121) = *(uint32_t *)(v19 + 320);
    v118 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v122 = v118[79];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v122 >= 0)
{
    *(uint32_t *)(v231 + v122) = *(uint32_t *)(v19 + 324);
    v118 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v123 = v118[75];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v123 >= 0)
{
    *(uint8_t *)(v231 + v123) = *(uint8_t *)(v19 + 328);
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v118 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v124 = v118[73];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v124 >= 0)
{
    *(uint32_t *)(v231 + v124) = *(uint32_t *)(v19 + 316);
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v125 = *(char *)(v19 + 304);
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if ((unsigned int)(v125 + 1) <= 2)
{
    v139 = v193[33];
    if ( v139 < 0 )
      goto LABEL_155;
    *(uint32_t *)(v231 + v139) = v125;
  }

  else
  {
    v126 = v193[33];
    if ( v126 < 0 )
      goto LABEL_155;
    *(uint32_t *)(v231 + v126) = 0;
    *(uint32_t *)(v231 + v126 + 4) = 0;
  }
  v19 = v4[72];
  v231 = v4[71];
  v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
LABEL_155:
  v140 = *(char *)(v19 + 305);
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if ((unsigned int)(v140 + 1) <= 2)
{
    v142 = v193[34];
    if ( v142 < 0 )
      goto LABEL_161;
    *(uint32_t *)(v231 + v142) = v140;
  }

  else
  {
    v141 = v193[34];
    if ( v141 < 0 )
      goto LABEL_161;
    *(uint32_t *)(v231 + v141) = 0;
    *(uint32_t *)(v231 + v141 + 4) = 0;
  }
  v19 = v4[72];
  v231 = v4[71];
  v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
LABEL_161:
  v143 = v193;
  v144 = v193[30];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v144 >= 0)
{
    *(uint32_t *)(v231 + v144) = *(uint8_t *)(v19 + 332);
    v143 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v145 = v143[31];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v145 >= 0)
{
    *(uint32_t *)(v231 + v145) = *(uint8_t *)(v19 + 333);
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v146 = *(char *)(v19 + 334);
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if ((unsigned int)(v146 + 1) <= 2)
{
    v148 = v193[32];
    if ( v148 < 0 )
      goto LABEL_171;
    *(uint32_t *)(v231 + v148) = v146;
  }

  else
  {
    v147 = v193[32];
    if ( v147 < 0 )
      goto LABEL_171;
    *(uint32_t *)(v231 + v147) = 0;
    *(uint32_t *)(v231 + v147 + 4) = 0;
  }
  v19 = v4[72];
  v231 = v4[71];
  v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
LABEL_171:
  v149 = v193;
  v150 = v193[26];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v150 >= 0)
{
    *(uint32_t *)(v231 + v150) = *(uint32_t *)(v19 + 352);
    v149 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v151 = v149[24];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v151 >= 0)
{
    *(uint32_t *)(v231 + v151) = *(uint32_t *)(v19 + 356);
    v149 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v152 = v149[90];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v152 >= 0)
{
    *(uint32_t *)(v231 + v152) = *(uint32_t *)(v19 + 336);
    v149 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v153 = v149[91];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v153 >= 0)
{
    *(uint32_t *)(v231 + v153) = *(uint32_t *)(v19 + 340);
    v149 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v154 = v149[92];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v154 >= 0)
{
    *(uint32_t *)(v231 + v154) = *(uint32_t *)(v19 + 344);
    v19 = v4[72];
    v231 = v4[71];
    v193 = (uint32_t *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  }

  v155 = *(uint32_t *)(v19 + 348);
  v156 = v193[93];
  if ( v156 >= 0 )
    *(uint32_t *)(v231 + v156) = v155;
  v157 = v4[84];
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v157 != 0)
{
    v188 = 0;
    (*(void (**)(uint32_t *))(*(uint32_t *)v157 + 20))(v232);
    v158 = (volatile int32_t *)v232[0];
  }

  else
  {
    v232[0] = 0;
    v158 = nullptr;
  }
  v159 = *(uint32_t *)(glitch::collada::ps::CParticleSystem::ParameterOffsets + 328);
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v159 >= 0)
{
    v160 = (volatile int32_t **)(v4[71] + v159);
    if ( v158 != nullptr )
    {
      v195 = (g4_cxa_guard_t *)v160;
      sub_8B1B00(v158 + 1);
      v160 = (volatile int32_t **)v195;
    }
    v161 = *v160;
    *v160 = v158;
    if ( v161 != nullptr )
      sub_5459C0(v161);
    v158 = (volatile int32_t *)v232[0];
  }

  if ( v158 != nullptr )
    sub_5459C0(v158);
  v162 = (uint32_t *)v4[71];
  v163 = *(uint32_t *)(glitch::collada::ps::CParticleSystem::ParameterOffsets + 352);
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v163 >= 0)
{
    *(uint32_t *)((char *)v162 + v163) = v4[82];
    v162 = (uint32_t *)v4[71];
  }

  v164 = (uint32_t *)((char *)v162 + *(uint32_t *)(*v162 - 12));
  v164[30] = (uint32_t)(uintptr_t)(v4 + 4);
  v164[31] = v4[4];
  v164[32] = v4[5];
  v164[33] = v4[6];
  v164[34] = v4[7];
  v164[35] = v4[8];
  v164[36] = v4[9];
  v164[37] = v4[10];
  v164[38] = v4[11];
  v164[39] = v4[12];
  v164[40] = v4[13];
  v164[41] = v4[14];
  v164[42] = v4[15];
  v164[43] = v4[16];
  v164[44] = v4[17];
  v164[45] = v4[18];
  v164[46] = v4[19];
  v165 = v4[71];
  v4[81] = v196;
  result = G4_VCALL<int>(v165, 12, 84, v188, v189, v190, v191, v192, v193, v194, v195, v196, v198, v213, v215, v228, v231, v232[0], v232[1], v232[2], v233, v234, v235, v236, v237, v238);
  v4[73] = result;
  return result;
}
// ----------------------------------------------------------------------------
// Function: glitch::collada::CForceSceneNode::Construct  (binary VA: 0xd54110)
// Original: glitch::collada::CForceSceneNode::CForceSceneNode
// ----------------------------------------------------------------------------
int glitch::collada::CForceSceneNode::Construct(glitch::IObject::Self *a1, int *a2, uint32_t *a3, int a4)
{
  uint32_t *v4;
  int v5;
  bool v6;
  int v7;
  int v8;
  typedef int _g4_t_v10[3];
  typedef int _g4_t_v11[3];
  typedef int _g4_t_v12[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v11)) > _g4_s1 ? (20u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v12)) > _g4_s2 ? (32u + sizeof(_g4_t_v12)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);

  v11[0] = 1065353216;
  v11[1] = 1065353216;
  v11[2] = 1065353216;
  memset(v12, 0, 12);
  v12[3] = 1065353216;
  memset(v10, 0, sizeof(v10));
  glitch::scene::ISceneNode::Construct(a1, (int)(uintptr_t)(a2 + 1), -1, (int)(uintptr_t)(v10), (int)(uintptr_t)(v12), (int)(uintptr_t)(v11));
  v4 = a3;
  v5 = *a3;
  v6 = *a3 == 0;
  *((uint32_t *)a1 + 66) = *a3;
  if ( !v6 )
  {
    sub_8B1B00((volatile int32_t *)(v5 + 4));
    v4 = a3;
  }
  v7 = v4[1];
  *((uint32_t *)a1 + 68) = 0;
  *((uint32_t *)a1 + 67) = v7;
  *((uint32_t *)a1 + 69) = 0;
  *((uint32_t *)a1 + 65) = (uint32_t)(uintptr_t)(&unk_20DFC20);
  *((uint32_t *)a1 + 70) = 0;
  v8 = *a2;
  *(uint32_t *)a1 = *a2;
  *(uint32_t *)((char *)a1 + *(uint32_t *)(v8 - 12)) = a2[4];
  *(uint32_t *)((char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 16)) = a2[5];
  *((uint32_t *)a1 + 71) = a4;
  *((uint8_t *)a1 + 288) = *(uint8_t *)(a4 + 9) != 0;
  *((uint32_t *)a1 + 65) = *(uint32_t *)a4;
  return glitch::scene::ISceneNode::setName(a1, *(const char **)(a4 + 4));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CDeflectorForceSceneNode::Construct  (binary VA: 0xd54270)
// Original: glitch::collada::CDeflectorForceSceneNode::CDeflectorForceSceneNode
// ----------------------------------------------------------------------------
int glitch::collada::CDeflectorForceSceneNode::Construct(glitch::IObject::Self *a1, uint32_t *a2, int a3)
{
  bool v3;
  char *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int result;

  *((uint32_t *)a1 + 82) = (uint32_t)(uintptr_t)(&off_207628C);
  *((uint32_t *)a1 + 81) = ((uint32_t)(uintptr_t)&off_207626C);
  *((uint32_t *)a1 + 83) = 0;
  glitch::collada::CForceSceneNode::Construct(a1, (int *)((uint32_t)(uintptr_t)&off_20765A4), a2, a3);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20765F0);
  v3 = *((uint8_t *)a1 + 288) == 0;
  *((uint32_t *)a1 + 81) = ((uint32_t)(uintptr_t)&off_207672C);
  *((uint32_t *)a1 + 82) = ((uint32_t)(uintptr_t)&off_207674C);
  v4 = (char *)a1 + 80;
  if ( v3 )
    v4 = (char *)a1 + 16;
  *((uint32_t *)a1 + 73) = (uint32_t)(uintptr_t)(v4);
  v5 = *((uint32_t *)a1 + 71);
  v6 = 0;
  v7 = *(uint32_t *)(v5 + 12);
  v8 = v5 + 12;
  v3 = v7 == 0;
  v9 = (uint32_t *)(v5 + 12 + v7);
  v10 = nullptr;
  if ( !v3 )
    v10 = v9;
  *((uint32_t *)a1 + 74) = *v10;
  v11 = *(uint32_t *)(v5 + 12);
  v3 = v11 == 0;
  v12 = v8 + v11;
  v13 = 0;
  if ( !v3 )
    v13 = v12;
  *((uint32_t *)a1 + 75) = *(uint32_t *)(v13 + 4);
  v14 = *(uint32_t *)(v5 + 12);
  v3 = v14 == 0;
  v15 = v8 + v14;
  v16 = 0;
  if ( !v3 )
    v16 = v15;
  *((uint32_t *)a1 + 76) = *(uint32_t *)(v16 + 8);
  v17 = *(uint32_t *)(v5 + 12);
  v3 = v17 == 0;
  v18 = v8 + v17;
  v19 = 0;
  if ( !v3 )
    v19 = v18;
  *((uint32_t *)a1 + 77) = *(uint32_t *)(v19 + 12);
  v20 = *(uint32_t *)(v5 + 12);
  v3 = v20 == 0;
  v21 = v8 + v20;
  v22 = 0;
  if ( !v3 )
    v22 = v21;
  *((uint32_t *)a1 + 78) = *(uint32_t *)(v22 + 16);
  v23 = *(uint32_t *)(v5 + 12);
  v3 = v23 == 0;
  v24 = v8 + v23;
  v25 = 0;
  if ( !v3 )
    v25 = v24;
  *((uint32_t *)a1 + 79) = *(uint32_t *)(v25 + 20);
  v26 = *(uint32_t *)(v5 + 12);
  v27 = v26 + v8;
  if ( v26 != 0 )
    v6 = v27;
  result = *(uint32_t *)(v6 + 24);
  *((uint32_t *)a1 + 80) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CDeflectorForceSceneNode::Construct  (binary VA: 0xd543b0)
// Original: glitch::collada::CDeflectorForceSceneNode::CDeflectorForceSceneNode
// ----------------------------------------------------------------------------
int glitch::collada::CDeflectorForceSceneNode::Construct(glitch::IObject::Self *a1, int *a2, uint32_t *a3, int a4)
{
  int v4;
  char *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  bool v10;
  uint32_t *v11;
  uint32_t *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int result;

  glitch::collada::CForceSceneNode::Construct(a1, a2 + 1, a3, a4);
  v4 = *a2;
  *(uint32_t *)a1 = *a2;
  *(uint32_t *)((char *)a1 + *(uint32_t *)(v4 - 12)) = a2[7];
  *(uint32_t *)((char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 16)) = a2[8];
  v5 = (char *)a1 + 80;
  if ( *((uint8_t *)a1 + 288) == 0 )
    v5 = (char *)a1 + 16;
  v6 = 0;
  *((uint32_t *)a1 + 73) = (uint32_t)(uintptr_t)(v5);
  v7 = *((uint32_t *)a1 + 71);
  v8 = *(uint32_t *)(v7 + 12);
  v9 = v7 + 12;
  v10 = v8 == 0;
  v11 = (uint32_t *)(v7 + 12 + v8);
  v12 = nullptr;
  if ( !v10 )
    v12 = v11;
  *((uint32_t *)a1 + 74) = *v12;
  v13 = *(uint32_t *)(v7 + 12);
  v10 = v13 == 0;
  v14 = v9 + v13;
  v15 = 0;
  if ( !v10 )
    v15 = v14;
  *((uint32_t *)a1 + 75) = *(uint32_t *)(v15 + 4);
  v16 = *(uint32_t *)(v7 + 12);
  v10 = v16 == 0;
  v17 = v9 + v16;
  v18 = 0;
  if ( !v10 )
    v18 = v17;
  *((uint32_t *)a1 + 76) = *(uint32_t *)(v18 + 8);
  v19 = *(uint32_t *)(v7 + 12);
  v10 = v19 == 0;
  v20 = v9 + v19;
  v21 = 0;
  if ( !v10 )
    v21 = v20;
  *((uint32_t *)a1 + 77) = *(uint32_t *)(v21 + 12);
  v22 = *(uint32_t *)(v7 + 12);
  v10 = v22 == 0;
  v23 = v9 + v22;
  v24 = 0;
  if ( !v10 )
    v24 = v23;
  *((uint32_t *)a1 + 78) = *(uint32_t *)(v24 + 16);
  v25 = *(uint32_t *)(v7 + 12);
  v10 = v25 == 0;
  v26 = v9 + v25;
  v27 = 0;
  if ( !v10 )
    v27 = v26;
  *((uint32_t *)a1 + 79) = *(uint32_t *)(v27 + 20);
  v28 = *(uint32_t *)(v7 + 12);
  v29 = v28 + v9;
  if ( v28 != 0 )
    v6 = v29;
  result = *(uint32_t *)(v6 + 24);
  *((uint32_t *)a1 + 80) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CForceSceneNode::Construct  (binary VA: 0xd544d0)
// Original: glitch::collada::CForceSceneNode::CForceSceneNode
// ----------------------------------------------------------------------------
int glitch::collada::CForceSceneNode::Construct(glitch::IObject::Self *a1, int *a2, int a3)
{
  int v3;
  bool v4;
  int v5;
  typedef int _g4_t_v7[3];
  typedef int _g4_t_v8[3];
  typedef int _g4_t_v9[11];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v8)) > _g4_s1 ? (20u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v9)) > _g4_s2 ? (32u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);

  v8[0] = 1065353216;
  v8[1] = 1065353216;
  v8[2] = 1065353216;
  *((uint32_t *)a1 + 74) = (uint32_t)(uintptr_t)(&off_2076AEC);
  *((uint32_t *)a1 + 75) = 0;
  *((uint32_t *)a1 + 73) = ((uint32_t)(uintptr_t)&off_2076ACC);
  memset(v9, 0, 12);
  v9[3] = 1065353216;
  memset(v7, 0, sizeof(v7));
  glitch::scene::ISceneNode::Construct(a1, (int)(uintptr_t)(&off_2076C84), -1, (int)(uintptr_t)(v7), (int)(uintptr_t)(v9), (int)(uintptr_t)(v8));
  v3 = *a2;
  v4 = *a2 == 0;
  *((uint32_t *)a1 + 66) = *a2;
  if ( !v4 )
    sub_8B1B00((volatile int32_t *)(v3 + 4));
  v5 = a2[1];
  *((uint32_t *)a1 + 71) = a3;
  *((uint32_t *)a1 + 67) = v5;
  *((uint32_t *)a1 + 68) = 0;
  *((uint32_t *)a1 + 65) = (uint32_t)(uintptr_t)(&unk_20DFC20);
  *((uint32_t *)a1 + 69) = 0;
  *((uint32_t *)a1 + 70) = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2076CB0);
  *((uint32_t *)a1 + 73) = ((uint32_t)(uintptr_t)&off_2076DEC);
  *((uint32_t *)a1 + 74) = ((uint32_t)(uintptr_t)&off_2076E0C);
  *((uint8_t *)a1 + 288) = *(uint8_t *)(a3 + 9) != 0;
  *((uint32_t *)a1 + 65) = *(uint32_t *)a3;
  return glitch::scene::ISceneNode::setName(a1, *(const char **)(a3 + 4));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CGravityForceSceneNode::Construct  (binary VA: 0xd54640)
// Original: glitch::collada::CGravityForceSceneNode::CGravityForceSceneNode
// ----------------------------------------------------------------------------
int glitch::collada::CGravityForceSceneNode::Construct(glitch::IObject::Self *a1, int *a2, uint32_t *a3, int a4)
{
  int v4;
  char *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  bool v10;
  uint32_t *v11;
  uint32_t *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int result;

  glitch::collada::CForceSceneNode::Construct(a1, a2 + 1, a3, a4);
  v4 = *a2;
  *(uint32_t *)a1 = *a2;
  *(uint32_t *)((char *)a1 + *(uint32_t *)(v4 - 12)) = a2[7];
  *(uint32_t *)((char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 16)) = a2[8];
  v5 = (char *)a1 + 80;
  if ( *((uint8_t *)a1 + 288) == 0 )
    v5 = (char *)a1 + 16;
  v6 = 0;
  *((uint32_t *)a1 + 73) = (uint32_t)(uintptr_t)(v5);
  v7 = *((uint32_t *)a1 + 71);
  v8 = *(uint32_t *)(v7 + 12);
  v9 = v7 + 12;
  v10 = v8 == 0;
  v11 = (uint32_t *)(v7 + 12 + v8);
  v12 = nullptr;
  if ( !v10 )
    v12 = v11;
  *((uint32_t *)a1 + 74) = *v12;
  v13 = *(uint32_t *)(v7 + 12);
  v10 = v13 == 0;
  v14 = v9 + v13;
  v15 = 0;
  if ( !v10 )
    v15 = v14;
  *((uint32_t *)a1 + 75) = *(uint32_t *)(v15 + 4);
  v16 = *(uint32_t *)(v7 + 12);
  v17 = v16 + v9;
  if ( v16 != 0 )
    v6 = v17;
  result = *(uint32_t *)(v6 + 8);
  *((uint32_t *)a1 + 76) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CGravityForceSceneNode::Construct  (binary VA: 0xd54720)
// Original: glitch::collada::CGravityForceSceneNode::CGravityForceSceneNode
// ----------------------------------------------------------------------------
int glitch::collada::CGravityForceSceneNode::Construct(glitch::IObject::Self *a1, uint32_t *a2, int a3)
{
  bool v3;
  char *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int result;

  *((uint32_t *)a1 + 78) = (uint32_t)(uintptr_t)(&off_2076E4C);
  *((uint32_t *)a1 + 77) = ((uint32_t)(uintptr_t)&off_2076E2C);
  *((uint32_t *)a1 + 79) = 0;
  glitch::collada::CForceSceneNode::Construct(a1, (int *)((uint32_t)(uintptr_t)&off_2077164), a2, a3);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20771B0);
  v3 = *((uint8_t *)a1 + 288) == 0;
  *((uint32_t *)a1 + 77) = ((uint32_t)(uintptr_t)&off_20772EC);
  *((uint32_t *)a1 + 78) = ((uint32_t)(uintptr_t)&off_207730C);
  v4 = (char *)a1 + 80;
  if ( v3 )
    v4 = (char *)a1 + 16;
  *((uint32_t *)a1 + 73) = (uint32_t)(uintptr_t)(v4);
  v5 = *((uint32_t *)a1 + 71);
  v6 = 0;
  v7 = *(uint32_t *)(v5 + 12);
  v8 = v5 + 12;
  v3 = v7 == 0;
  v9 = (uint32_t *)(v5 + 12 + v7);
  v10 = nullptr;
  if ( !v3 )
    v10 = v9;
  *((uint32_t *)a1 + 74) = *v10;
  v11 = *(uint32_t *)(v5 + 12);
  v3 = v11 == 0;
  v12 = v8 + v11;
  v13 = 0;
  if ( !v3 )
    v13 = v12;
  *((uint32_t *)a1 + 75) = *(uint32_t *)(v13 + 4);
  v14 = *(uint32_t *)(v5 + 12);
  v15 = v14 + v8;
  if ( v14 != 0 )
    v6 = v15;
  result = *(uint32_t *)(v6 + 8);
  *((uint32_t *)a1 + 76) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CVortexForceSceneNode::Construct  (binary VA: 0xd54820)
// Original: glitch::collada::CVortexForceSceneNode::CVortexForceSceneNode
// ----------------------------------------------------------------------------
int glitch::collada::CVortexForceSceneNode::Construct(glitch::IObject::Self *a1, int *a2, uint32_t *a3, int a4)
{
  int v4;
  char *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  bool v10;
  uint32_t *v11;
  uint32_t *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int result;
  int v53;

  glitch::collada::CForceSceneNode::Construct(a1, a2 + 1, a3, a4);
  v4 = *a2;
  *(uint32_t *)a1 = *a2;
  *(uint32_t *)((char *)a1 + *(uint32_t *)(v4 - 12)) = a2[7];
  *(uint32_t *)((char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 16)) = a2[8];
  v5 = (char *)a1 + 80;
  if ( *((uint8_t *)a1 + 288) == 0 )
    v5 = (char *)a1 + 16;
  v6 = 0;
  *((uint32_t *)a1 + 73) = (uint32_t)(uintptr_t)(v5);
  v7 = *((uint32_t *)a1 + 71);
  v8 = *(uint32_t *)(v7 + 12);
  v9 = v7 + 12;
  v10 = v8 == 0;
  v11 = (uint32_t *)(v7 + 12 + v8);
  v12 = nullptr;
  if ( !v10 )
    v12 = v11;
  *((uint32_t *)a1 + 74) = *v12;
  v13 = *(uint32_t *)(v7 + 12);
  v10 = v13 == 0;
  v14 = v9 + v13;
  v15 = 0;
  if ( !v10 )
    v15 = v14;
  *((uint32_t *)a1 + 75) = *(uint32_t *)(v15 + 4);
  v16 = *(uint32_t *)(v7 + 12);
  v10 = v16 == 0;
  v17 = v9 + v16;
  v18 = 0;
  if ( !v10 )
    v18 = v17;
  *((uint32_t *)a1 + 76) = *(uint32_t *)(v18 + 8);
  v19 = *(uint32_t *)(v7 + 12);
  v10 = v19 == 0;
  v20 = v9 + v19;
  v21 = 0;
  if ( !v10 )
    v21 = v20;
  *((uint32_t *)a1 + 77) = *(uint32_t *)(v21 + 12);
  v22 = *(uint32_t *)(v7 + 12);
  v10 = v22 == 0;
  v23 = v9 + v22;
  v24 = 0;
  if ( !v10 )
    v24 = v23;
  *((uint32_t *)a1 + 78) = *(uint32_t *)(v24 + 16);
  v25 = *(uint32_t *)(v7 + 12);
  v10 = v25 == 0;
  v26 = v9 + v25;
  v27 = 0;
  if ( !v10 )
    v27 = v26;
  *((uint32_t *)a1 + 79) = *(uint32_t *)(v27 + 20);
  v28 = *(uint32_t *)(v7 + 12);
  v10 = v28 == 0;
  v29 = v9 + v28;
  v30 = 0;
  if ( !v10 )
    v30 = v29;
  *((uint32_t *)a1 + 80) = *(uint32_t *)(v30 + 24);
  v31 = *(uint32_t *)(v7 + 12);
  v10 = v31 == 0;
  v32 = v9 + v31;
  v33 = 0;
  if ( !v10 )
    v33 = v32;
  *((uint32_t *)a1 + 81) = *(uint32_t *)(v33 + 28);
  v34 = *(uint32_t *)(v7 + 12);
  v10 = v34 == 0;
  v35 = v9 + v34;
  v36 = 0;
  if ( !v10 )
    v36 = v35;
  *((uint32_t *)a1 + 82) = *(uint8_t *)(v36 + 48);
  v37 = *(uint32_t *)(v7 + 12);
  v10 = v37 == 0;
  v38 = v9 + v37;
  v39 = 0;
  if ( !v10 )
    v39 = v38;
  *((uint32_t *)a1 + 83) = *(uint32_t *)(v39 + 32);
  v40 = *(uint32_t *)(v7 + 12);
  v10 = v40 == 0;
  v41 = v9 + v40;
  v42 = 0;
  if ( !v10 )
    v42 = v41;
  *((uint32_t *)a1 + 84) = *(uint32_t *)(v42 + 36);
  v43 = *(uint32_t *)(v7 + 12);
  v10 = v43 == 0;
  v44 = v9 + v43;
  v45 = 0;
  if ( !v10 )
    v45 = v44;
  *((uint32_t *)a1 + 85) = *(uint32_t *)(v45 + 40);
  v46 = *(uint32_t *)(v7 + 12);
  v10 = v46 == 0;
  v47 = v9 + v46;
  v48 = 0;
  if ( !v10 )
    v48 = v47;
  *((uint32_t *)a1 + 86) = *(uint32_t *)(v48 + 44);
  v49 = *(uint32_t *)(v7 + 12);
  v10 = v49 == 0;
  v50 = v9 + v49;
  v51 = 0;
  if ( !v10 )
    v51 = v50;
  *((uint8_t *)a1 + 348) = *(uint8_t *)(v51 + 49) != 0;
  result = *(uint32_t *)(v7 + 12);
  v53 = result + v9;
  if ( result != 0 )
    v6 = v53;
  *((uint8_t *)a1 + 349) = *(uint8_t *)(v6 + 50) != 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CVortexForceSceneNode::Construct  (binary VA: 0xd549f0)
// Original: glitch::collada::CVortexForceSceneNode::CVortexForceSceneNode
// ----------------------------------------------------------------------------
int glitch::collada::CVortexForceSceneNode::Construct(glitch::IObject::Self *a1, uint32_t *a2, int a3)
{
  bool v3;
  char *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int result;
  int v51;

  *((uint32_t *)a1 + 89) = (uint32_t)(uintptr_t)(&off_207734C);
  *((uint32_t *)a1 + 88) = ((uint32_t)(uintptr_t)&off_207732C);
  *((uint32_t *)a1 + 90) = 0;
  glitch::collada::CForceSceneNode::Construct(a1, (int *)((uint32_t)(uintptr_t)&off_2077664), a2, a3);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20776B0);
  v3 = *((uint8_t *)a1 + 288) == 0;
  *((uint32_t *)a1 + 88) = ((uint32_t)(uintptr_t)&off_20777EC);
  *((uint32_t *)a1 + 89) = ((uint32_t)(uintptr_t)&off_207780C);
  v4 = (char *)a1 + 80;
  if ( v3 )
    v4 = (char *)a1 + 16;
  *((uint32_t *)a1 + 73) = (uint32_t)(uintptr_t)(v4);
  v5 = *((uint32_t *)a1 + 71);
  v6 = 0;
  v7 = *(uint32_t *)(v5 + 12);
  v8 = v5 + 12;
  v3 = v7 == 0;
  v9 = (uint32_t *)(v5 + 12 + v7);
  v10 = nullptr;
  if ( !v3 )
    v10 = v9;
  *((uint32_t *)a1 + 74) = *v10;
  v11 = *(uint32_t *)(v5 + 12);
  v3 = v11 == 0;
  v12 = v8 + v11;
  v13 = 0;
  if ( !v3 )
    v13 = v12;
  *((uint32_t *)a1 + 75) = *(uint32_t *)(v13 + 4);
  v14 = *(uint32_t *)(v5 + 12);
  v3 = v14 == 0;
  v15 = v8 + v14;
  v16 = 0;
  if ( !v3 )
    v16 = v15;
  *((uint32_t *)a1 + 76) = *(uint32_t *)(v16 + 8);
  v17 = *(uint32_t *)(v5 + 12);
  v3 = v17 == 0;
  v18 = v8 + v17;
  v19 = 0;
  if ( !v3 )
    v19 = v18;
  *((uint32_t *)a1 + 77) = *(uint32_t *)(v19 + 12);
  v20 = *(uint32_t *)(v5 + 12);
  v3 = v20 == 0;
  v21 = v8 + v20;
  v22 = 0;
  if ( !v3 )
    v22 = v21;
  *((uint32_t *)a1 + 78) = *(uint32_t *)(v22 + 16);
  v23 = *(uint32_t *)(v5 + 12);
  v3 = v23 == 0;
  v24 = v8 + v23;
  v25 = 0;
  if ( !v3 )
    v25 = v24;
  *((uint32_t *)a1 + 79) = *(uint32_t *)(v25 + 20);
  v26 = *(uint32_t *)(v5 + 12);
  v3 = v26 == 0;
  v27 = v8 + v26;
  v28 = 0;
  if ( !v3 )
    v28 = v27;
  *((uint32_t *)a1 + 80) = *(uint32_t *)(v28 + 24);
  v29 = *(uint32_t *)(v5 + 12);
  v3 = v29 == 0;
  v30 = v8 + v29;
  v31 = 0;
  if ( !v3 )
    v31 = v30;
  *((uint32_t *)a1 + 81) = *(uint32_t *)(v31 + 28);
  v32 = *(uint32_t *)(v5 + 12);
  v3 = v32 == 0;
  v33 = v8 + v32;
  v34 = 0;
  if ( !v3 )
    v34 = v33;
  *((uint32_t *)a1 + 82) = *(uint8_t *)(v34 + 48);
  v35 = *(uint32_t *)(v5 + 12);
  v3 = v35 == 0;
  v36 = v8 + v35;
  v37 = 0;
  if ( !v3 )
    v37 = v36;
  *((uint32_t *)a1 + 83) = *(uint32_t *)(v37 + 32);
  v38 = *(uint32_t *)(v5 + 12);
  v3 = v38 == 0;
  v39 = v8 + v38;
  v40 = 0;
  if ( !v3 )
    v40 = v39;
  *((uint32_t *)a1 + 84) = *(uint32_t *)(v40 + 36);
  v41 = *(uint32_t *)(v5 + 12);
  v3 = v41 == 0;
  v42 = v8 + v41;
  v43 = 0;
  if ( !v3 )
    v43 = v42;
  *((uint32_t *)a1 + 85) = *(uint32_t *)(v43 + 40);
  v44 = *(uint32_t *)(v5 + 12);
  v3 = v44 == 0;
  v45 = v8 + v44;
  v46 = 0;
  if ( !v3 )
    v46 = v45;
  *((uint32_t *)a1 + 86) = *(uint32_t *)(v46 + 44);
  v47 = *(uint32_t *)(v5 + 12);
  v3 = v47 == 0;
  v48 = v8 + v47;
  v49 = 0;
  if ( !v3 )
    v49 = v48;
  *((uint8_t *)a1 + 348) = *(uint8_t *)(v49 + 49) != 0;
  result = *(uint32_t *)(v5 + 12);
  v51 = result + v8;
  if ( result != 0 )
    v6 = v51;
  *((uint8_t *)a1 + 349) = *(uint8_t *)(v6 + 50) != 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CWindForceSceneNode::Construct  (binary VA: 0xd54bf0)
// Original: glitch::collada::CWindForceSceneNode::CWindForceSceneNode
// ----------------------------------------------------------------------------
int glitch::collada::CWindForceSceneNode::Construct(glitch::IObject::Self *a1, int *a2, uint32_t *a3, int a4)
{
  int v4;
  char *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  bool v10;
  uint32_t *v11;
  uint32_t *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int result;

  glitch::collada::CForceSceneNode::Construct(a1, a2 + 1, a3, a4);
  v4 = *a2;
  *(uint32_t *)a1 = *a2;
  *(uint32_t *)((char *)a1 + *(uint32_t *)(v4 - 12)) = a2[7];
  *(uint32_t *)((char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 16)) = a2[8];
  v5 = (char *)a1 + 80;
  if ( *((uint8_t *)a1 + 288) == 0 )
    v5 = (char *)a1 + 16;
  v6 = 0;
  *((uint32_t *)a1 + 73) = (uint32_t)(uintptr_t)(v5);
  v7 = *((uint32_t *)a1 + 71);
  v8 = *(uint32_t *)(v7 + 12);
  v9 = v7 + 12;
  v10 = v8 == 0;
  v11 = (uint32_t *)(v7 + 12 + v8);
  v12 = nullptr;
  if ( !v10 )
    v12 = v11;
  *((uint32_t *)a1 + 74) = *v12;
  v13 = *(uint32_t *)(v7 + 12);
  v10 = v13 == 0;
  v14 = v9 + v13;
  v15 = 0;
  if ( !v10 )
    v15 = v14;
  *((uint32_t *)a1 + 75) = *(uint32_t *)(v15 + 4);
  v16 = *(uint32_t *)(v7 + 12);
  v10 = v16 == 0;
  v17 = v9 + v16;
  v18 = 0;
  if ( !v10 )
    v18 = v17;
  *((uint32_t *)a1 + 76) = *(uint32_t *)(v18 + 12);
  v19 = *(uint32_t *)(v7 + 12);
  v10 = v19 == 0;
  v20 = v9 + v19;
  v21 = 0;
  if ( !v10 )
    v21 = v20;
  *((uint32_t *)a1 + 77) = *(uint32_t *)(v21 + 16);
  v22 = *(uint32_t *)(v7 + 12);
  v10 = v22 == 0;
  v23 = v9 + v22;
  v24 = 0;
  if ( !v10 )
    v24 = v23;
  *((uint32_t *)a1 + 78) = *(uint32_t *)(v24 + 20);
  v25 = *(uint32_t *)(v7 + 12);
  v26 = v25 + v9;
  if ( v25 != 0 )
    v6 = v26;
  result = *(uint32_t *)(v6 + 8);
  *((uint32_t *)a1 + 79) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CWindForceSceneNode::Construct  (binary VA: 0xd54cf0)
// Original: glitch::collada::CWindForceSceneNode::CWindForceSceneNode
// ----------------------------------------------------------------------------
int glitch::collada::CWindForceSceneNode::Construct(glitch::IObject::Self *a1, uint32_t *a2, int a3)
{
  bool v3;
  char *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int result;

  *((uint32_t *)a1 + 81) = (uint32_t)(uintptr_t)(&off_207784C);
  *((uint32_t *)a1 + 80) = ((uint32_t)(uintptr_t)&off_207782C);
  *((uint32_t *)a1 + 82) = 0;
  glitch::collada::CForceSceneNode::Construct(a1, (int *)((uint32_t)(uintptr_t)&off_2077B64), a2, a3);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2077BB0);
  v3 = *((uint8_t *)a1 + 288) == 0;
  *((uint32_t *)a1 + 80) = ((uint32_t)(uintptr_t)&off_2077CEC);
  *((uint32_t *)a1 + 81) = ((uint32_t)(uintptr_t)&off_2077D0C);
  v4 = (char *)a1 + 80;
  if ( v3 )
    v4 = (char *)a1 + 16;
  *((uint32_t *)a1 + 73) = (uint32_t)(uintptr_t)(v4);
  v5 = *((uint32_t *)a1 + 71);
  v6 = 0;
  v7 = *(uint32_t *)(v5 + 12);
  v8 = v5 + 12;
  v3 = v7 == 0;
  v9 = (uint32_t *)(v5 + 12 + v7);
  v10 = nullptr;
  if ( !v3 )
    v10 = v9;
  *((uint32_t *)a1 + 74) = *v10;
  v11 = *(uint32_t *)(v5 + 12);
  v3 = v11 == 0;
  v12 = v8 + v11;
  v13 = 0;
  if ( !v3 )
    v13 = v12;
  *((uint32_t *)a1 + 75) = *(uint32_t *)(v13 + 4);
  v14 = *(uint32_t *)(v5 + 12);
  v3 = v14 == 0;
  v15 = v8 + v14;
  v16 = 0;
  if ( !v3 )
    v16 = v15;
  *((uint32_t *)a1 + 76) = *(uint32_t *)(v16 + 12);
  v17 = *(uint32_t *)(v5 + 12);
  v3 = v17 == 0;
  v18 = v8 + v17;
  v19 = 0;
  if ( !v3 )
    v19 = v18;
  *((uint32_t *)a1 + 77) = *(uint32_t *)(v19 + 16);
  v20 = *(uint32_t *)(v5 + 12);
  v3 = v20 == 0;
  v21 = v8 + v20;
  v22 = 0;
  if ( !v3 )
    v22 = v21;
  *((uint32_t *)a1 + 78) = *(uint32_t *)(v22 + 20);
  v23 = *(uint32_t *)(v5 + 12);
  v24 = v23 + v8;
  if ( v23 != 0 )
    v6 = v24;
  result = *(uint32_t *)(v6 + 8);
  *((uint32_t *)a1 + 79) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationFilterBase::Construct  (binary VA: 0xd54e20)
// Original: glitch::collada::CAnimationFilterBase::CAnimationFilterBase
// ----------------------------------------------------------------------------
volatile int32_t * glitch::collada::CAnimationFilterBase::Construct(glitch::collada::CAnimationFilterBase::Self *self, const boost::intrusive_ptr<glitch::collada::ISceneNodeAnimator::Self> *a2)
{
  volatile int32_t *result;
  int v3;
  int v4;

  result = (volatile int32_t *)self;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2077D20);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  v3 = *(uint32_t *)(*(uint32_t *)a2 + 16);
  if ( v3 != 0 )
  {
    v4 = *(uint32_t *)(v3 + 8);
    *((uint32_t *)self + 3) = v4;
    if ( v4 != 0 )
      return sub_8B1B00((volatile int32_t *)(v4 + 4));
  }
  else
  {
    *((uint32_t *)self + 3) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationFilterBase::Construct  (binary VA: 0xd54e90)
// Original: glitch::collada::CAnimationFilterBase::CAnimationFilterBase
// ----------------------------------------------------------------------------
volatile int32_t * glitch::collada::CAnimationFilterBase::Construct(volatile int32_t *a1, int a2)
{
  volatile int32_t *result;
  int v3;

  result = a1;
  *a1 = (volatile int32_t)((uint32_t)(uintptr_t)&off_2077D20);
  *((uint32_t *)a1 + 1) = 0;
  *((uint32_t *)a1 + 2) = 0;
  if ( *(uint32_t *)a2 != 0 )
  {
    v3 = *(uint32_t *)(*(uint32_t *)a2 + 8);
    *((uint32_t *)a1 + 3) = v3;
    if ( v3 != 0 )
      return sub_8B1B00((volatile int32_t *)(v3 + 4));
  }
  else
  {
    *((uint32_t *)a1 + 3) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationFilterBase::Construct  (binary VA: 0xd54f00)
// Original: glitch::collada::CAnimationFilterBase::CAnimationFilterBase
// ----------------------------------------------------------------------------
glitch::collada::CAnimationFilterBase::Self * glitch::collada::CAnimationFilterBase::Construct(glitch::collada::CAnimationFilterBase::Self *self, const glitch::collada::CAnimationFilterBase::Self *a2)
{
  glitch::collada::CAnimationFilterBase::Self *result;
  int v3;

  result = self;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2077D20);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  v3 = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 3) = v3;
  if ( v3 != 0 )
    return (glitch::collada::CAnimationFilterBase::Self *)sub_8B1B00((volatile int32_t *)(v3 + 4));
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationFilterBase::getMaskAllocationSize  (binary VA: 0xd54f50)
// Original: glitch::collada::CAnimationFilterBase::getMaskAllocationSize
// ----------------------------------------------------------------------------
int glitch::collada::CAnimationFilterBase::getMaskAllocationSize(glitch::collada::CAnimationFilterBase::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int result;
  int v8;

  v1 = *((uint32_t *)self + 3);
  v2 = 0;
  if ( v1 != 0 )
  {
    v3 = *(uint32_t *)(v1 + 8);
    if ( v3 != 0 )
      v2 = v3 - 8;
  }
  v4 = *(uint32_t *)(*(uint32_t *)(v2 + 52) + 4) - **(uint32_t **)(v2 + 52);
  v5 = v4 + 62;
  v6 = v4 + 31;
  if ( v6 >= 0 )
    v5 = v6;
  result = 4;
  v8 = v5 >> 5;
  if ( v8 > 0 )
    return 4 * v8;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationFilterBase::init  (binary VA: 0xd54f90)
// Original: glitch::collada::CAnimationFilterBase::init
// ----------------------------------------------------------------------------
void * glitch::collada::CAnimationFilterBase::init(void **self, const void **a2)
{
  size_t n;

  n = glitch::collada::CAnimationFilterBase::getMaskAllocationSize((glitch::collada::CAnimationFilterBase::Self *)self);
  return memcpy(*(self + 2), a2[2], n);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationFilterBase::set  (binary VA: 0xd54fe0)
// Original: glitch::collada::CAnimationFilterBase::set
// ----------------------------------------------------------------------------
int glitch::collada::CAnimationFilterBase::set(glitch::collada::CAnimationFilterBase::Self *self, const glitch::collada::CAnimationFilterBase::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;
  int v7;
  int v8;

  v2 = 0;
  v3 = *((uint32_t *)self + 3);
  if ( v3 != 0 )
  {
    v4 = *(uint32_t *)(v3 + 8);
    if ( v4 != 0 )
      v2 = v4 - 8;
  }
  v5 = *(uint32_t *)(*(uint32_t *)(v2 + 52) + 4) - **(uint32_t **)(v2 + 52);
  result = v5 + 62;
  v7 = v5 + 31;
  if ( v7 < 0 )
    v7 = result;
  v8 = v7 >> 5;
  if ( v8 > 0 )
  {
    for ( result = 0; result != v8; ++result )
      *(uint32_t *)(*((uint32_t *)self + 2) + 4 * result) = *(uint32_t *)(*((uint32_t *)a2 + 2) + 4 * result);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationFilterBase::merge  (binary VA: 0xd55040)
// Original: glitch::collada::CAnimationFilterBase::merge
// ----------------------------------------------------------------------------
int glitch::collada::CAnimationFilterBase::merge(glitch::collada::CAnimationFilterBase::Self *self, const glitch::collada::CAnimationFilterBase::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;

  v2 = 0;
  v3 = *((uint32_t *)self + 3);
  if ( v3 != 0 )
  {
    v4 = *(uint32_t *)(v3 + 8);
    if ( v4 != 0 )
      v2 = v4 - 8;
  }
  v5 = *(uint32_t *)(*(uint32_t *)(v2 + 52) + 4) - **(uint32_t **)(v2 + 52);
  result = v5 + 62;
  v7 = v5 + 31;
  if ( v7 < 0 )
    v7 = result;
  v8 = v7 >> 5;
  if ( v8 > 0 )
  {
    for ( result = 0; result != v8; ++result )
    {
      v9 = (uint32_t *)(*((uint32_t *)self + 2) + 4 * result);
      v10 = *(uint32_t *)(*((uint32_t *)a2 + 2) + 4 * result);
      *v9 |= v10;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationFilterBase::intersect  (binary VA: 0xd550a0)
// Original: glitch::collada::CAnimationFilterBase::intersect
// ----------------------------------------------------------------------------
int glitch::collada::CAnimationFilterBase::intersect(glitch::collada::CAnimationFilterBase::Self *self, const glitch::collada::CAnimationFilterBase::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;

  v2 = 0;
  v3 = *((uint32_t *)self + 3);
  if ( v3 != 0 )
  {
    v4 = *(uint32_t *)(v3 + 8);
    if ( v4 != 0 )
      v2 = v4 - 8;
  }
  v5 = *(uint32_t *)(*(uint32_t *)(v2 + 52) + 4) - **(uint32_t **)(v2 + 52);
  result = v5 + 62;
  v7 = v5 + 31;
  if ( v7 < 0 )
    v7 = result;
  v8 = v7 >> 5;
  if ( v8 > 0 )
  {
    for ( result = 0; result != v8; ++result )
    {
      v9 = (uint32_t *)(*((uint32_t *)self + 2) + 4 * result);
      v10 = *(uint32_t *)(*((uint32_t *)a2 + 2) + 4 * result);
      *v9 &= v10;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationFilterBase::inverse  (binary VA: 0xd55100)
// Original: glitch::collada::CAnimationFilterBase::inverse
// ----------------------------------------------------------------------------
int * glitch::collada::CAnimationFilterBase::inverse(glitch::collada::CAnimationFilterBase::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int *result;
  int v6;
  int v7;
  int i;

  v1 = 0;
  v2 = *((uint32_t *)self + 3);
  if ( v2 != 0 )
  {
    v3 = *(uint32_t *)(v2 + 8);
    if ( v3 != 0 )
      v1 = v3 - 8;
  }
  v4 = *(uint32_t *)(*(uint32_t *)(v1 + 52) + 4) - **(uint32_t **)(v1 + 52);
  result = (int *)(v4 + 62);
  v6 = v4 + 31;
  if ( v6 < 0 )
    v6 = (int)(uintptr_t)(result);
  v7 = v6 >> 5;
  if ( v7 > 0 )
  {
    for ( i = 0; i != v7; ++i )
    {
      result = (int *)(*((uint32_t *)self + 2) + 4 * i);
      *result = ~*result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationFilterBase::disableAnimation  (binary VA: 0xd55150)
// Original: glitch::collada::CAnimationFilterBase::disableAnimation
// ----------------------------------------------------------------------------
unsigned int glitch::collada::CAnimationFilterBase::disableAnimation(glitch::collada::CAnimationFilterBase::Self *self)
{
  int v1;
  int v2;
  int v3;
  unsigned int result;

  v1 = 0;
  v2 = *((uint32_t *)self + 3);
  if ( v2 != 0 )
  {
    v3 = *(uint32_t *)(v2 + 8);
    if ( v3 != 0 )
      v1 = v3 - 8;
  }
  result = (unsigned int)(*(uint32_t *)(*(uint32_t *)(v1 + 52) + 4) - **(uint32_t **)(v1 + 52) + 31) >> 5;
  if ( result != 0 )
    return (unsigned int)(uintptr_t)(memset(*((void **)self + 2), 0, 4 * result));
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationFilterBase::isNull  (binary VA: 0xd551c0)
// Original: glitch::collada::CAnimationFilterBase::isNull
// ----------------------------------------------------------------------------
int glitch::collada::CAnimationFilterBase::isNull(glitch::collada::CAnimationFilterBase::Self *self)
{
  int v1;
  int v2;
  int v3;
  unsigned int v4;
  int result;
  unsigned int v6;
  uint32_t *v7;
  int v8;

  v1 = 0;
  v2 = *((uint32_t *)self + 3);
  if ( v2 != 0 )
  {
    v3 = *(uint32_t *)(v2 + 8);
    if ( v3 != 0 )
      v1 = v3 - 8;
  }
  v4 = *(uint32_t *)(*(uint32_t *)(v1 + 52) + 4) - **(uint32_t **)(v1 + 52) + 31;
  result = 1;
  v6 = v4 >> 5;
  if ( v6 != 0 )
  {
    v7 = *((uint32_t **)self + 2);
    result = 0;
    if ( *v7 == 0 )
    {
      v8 = 0;
      do
      {
        if ( v6 == ++v8 )
          return 1;
      }
      while ( v7[v8] == 0 );
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationFilterBase::disableAnimation  (binary VA: 0xd55220)
// Original: glitch::collada::CAnimationFilterBase::disableAnimation
// ----------------------------------------------------------------------------
int glitch::collada::CAnimationFilterBase::disableAnimation(glitch::collada::CAnimationFilterBase::Self *self, void *a2)
{
  int v2;
  int v3;
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;

  v2 = 0;
  v3 = *((uint32_t *)self + 3);
  if ( v3 != 0 )
  {
    v4 = *(uint32_t *)(v3 + 8);
    if ( v4 != 0 )
      v2 = v4 - 8;
  }
  result = *(uint32_t *)(*(uint32_t *)(v2 + 52) + 4) - **(uint32_t **)(v2 + 52);
  if ( result > 0 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = 0;
      if ( v3 != 0 )
      {
        v8 = *(uint32_t *)(v3 + 8);
        if ( v8 != 0 )
          v7 = v8 - 8;
      }
      if ( a2 == *(void **)(*(uint32_t *)(v7 + 60) + 4 * v6) )
      {
        v9 = (uint32_t *)(*((uint32_t *)self + 2) + 4 * (v6 >> 5));
        *v9 &= ~(1 << v6);
      }
      if ( ++v6 == result )
        break;
      v3 = *((uint32_t *)self + 3);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationFilterBase::disableAnimation  (binary VA: 0xd552a0)
// Original: glitch::collada::CAnimationFilterBase::disableAnimation
// ----------------------------------------------------------------------------
uint32_t * glitch::collada::CAnimationFilterBase::disableAnimation(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uint32_t *result;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  volatile int32_t *v12;
  int v13;
  char v14;
  int v15;
  bool v16;

  v3 = 0;
  v4 = *(uint32_t *)(a1 + 12);
  if ( v4 != 0 )
  {
    v5 = *(uint32_t *)(v4 + 8);
    if ( v5 != 0 )
      v3 = v5 - 8;
  }
  v15 = *(uint32_t *)(*(uint32_t *)(v3 + 52) + 4) - **(uint32_t **)(v3 + 52);
  result = (uint32_t *)v15;
  if ( v15 > 0 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = 0;
      if ( v4 != 0 )
      {
        v9 = *(uint32_t *)(v4 + 8);
        if ( v9 != 0 )
          v8 = v9 - 8;
      }
      result = *(uint32_t **)(v8 + 60);
      if ( a2 != result[v7] )
        goto LABEL_6;
      v10 = 0;
      if ( v4 != 0 )
      {
        v11 = *(uint32_t *)(v4 + 8);
        if ( v11 != 0 )
          v10 = v11 - 8;
      }
      v12 = *(volatile int32_t **)(v10 + 36);
      if ( v12 != nullptr )
      {
        sub_8B1B00(v12 + 1);
        v16 = *(uint32_t *)(G4_VCALL<int>(v12, 16, v7) + 4) == a3;
        result = (uint32_t *)sub_5459C0(v12);
      }
      else
      {
        result = (uint32_t *)G4_MEM_CALL(0x464C458F, 0, v7);
        v16 = result[1] == a3;
      }
      if ( v16 )
      {
        v13 = v7 >> 5;
        v14 = v7++;
        result = (uint32_t *)(*(uint32_t *)(a1 + 8) + 4 * v13);
        *result &= ~(1 << v14);
        if ( v7 == v15 )
          return result;
      }
      else
      {
LABEL_6:
        if ( ++v7 == v15 )
          return result;
      }
      v4 = *(uint32_t *)(a1 + 12);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationFilterBase::disableAnimation  (binary VA: 0xd553c0)
// Original: glitch::collada::CAnimationFilterBase::disableAnimation
// ----------------------------------------------------------------------------
int glitch::collada::CAnimationFilterBase::disableAnimation(glitch::collada::CAnimationFilterBase::Self *self, int a2)
{
  uint32_t *v2;
  int result;

  v2 = (uint32_t *)(*((uint32_t *)self + 2) + 4 * (a2 / 32));
  result = ~(1 << a2);
  *v2 &= result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationFilterBase::disableAnimation  (binary VA: 0xd553f0)
// Original: glitch::collada::CAnimationFilterBase::disableAnimation
// ----------------------------------------------------------------------------
uint32_t * glitch::collada::CAnimationFilterBase::disableAnimation(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint32_t *result;
  int v6;
  int v7;
  int v8;
  volatile int32_t *v9;
  int v10;
  char v11;
  int v12;
  int v13;

  v2 = 0;
  v3 = *(uint32_t *)(a1 + 12);
  if ( v3 != 0 )
  {
    v4 = *(uint32_t *)(v3 + 8);
    if ( v4 != 0 )
      v2 = v4 - 8;
  }
  result = *(uint32_t **)(v2 + 52);
  v6 = result[1] - *result;
  if ( v6 > 0 )
  {
    v12 = 0;
    while ( 1 )
    {
      v7 = 0;
      if ( v3 != 0 )
      {
        v8 = *(uint32_t *)(v3 + 8);
        if ( v8 != 0 )
          v7 = v8 - 8;
      }
      v9 = *(volatile int32_t **)(v7 + 36);
      if ( v9 != nullptr )
        sub_8B1B00(v9 + 1);
      v13 = *(uint32_t *)(G4_VCALL<int>(v9, 16, v12) + 4);
      result = (uint32_t *)sub_5459C0(v9);
      if ( v13 == a2 )
      {
        v10 = v12 >> 5;
        v11 = v12++;
        result = (uint32_t *)(*(uint32_t *)(a1 + 8) + 4 * v10);
        *result &= ~(1 << v11);
        if ( v12 == v6 )
          return result;
      }
      else if ( ++v12 == v6 )
      {
        return result;
      }
      v3 = *(uint32_t *)(a1 + 12);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationFilterBase::enableAnimation  (binary VA: 0xd554d0)
// Original: glitch::collada::CAnimationFilterBase::enableAnimation
// ----------------------------------------------------------------------------
int glitch::collada::CAnimationFilterBase::enableAnimation(glitch::collada::CAnimationFilterBase::Self *self)
{
  int v1;
  int v2;
  int v3;
  int result;
  unsigned int v5;
  uint32_t *v6;

  v1 = 0;
  v2 = *((uint32_t *)self + 3);
  if ( v2 != 0 )
  {
    v3 = *(uint32_t *)(v2 + 8);
    if ( v3 != 0 )
      v1 = v3 - 8;
  }
  result = *(uint32_t *)(v1 + 52);
  v5 = (unsigned int)(*(uint32_t *)(result + 4) - *(uint32_t *)result + 31) >> 5;
  if ( v5 != 0 )
  {
    memset(*((void **)self + 2), 255, 4 * v5);
    result = (*(uint32_t *)(*(uint32_t *)(v1 + 52) + 4) - **(uint32_t **)(v1 + 52)) & 0x1F;
    if ( result != 0 )
    {
      v6 = (uint32_t *)(*((uint32_t *)self + 2) + 4 * v5 - 4);
      result = dword_1CA87C0[result];
      *v6 &= result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationFilterBase::init  (binary VA: 0xd55570)
// Original: glitch::collada::CAnimationFilterBase::init
// ----------------------------------------------------------------------------
int glitch::collada::CAnimationFilterBase::init(glitch::collada::CAnimationFilterBase::Self *self)
{
  return glitch::collada::CAnimationFilterBase::enableAnimation(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSynchronizedBlender::onBindEx  (binary VA: 0xd555a0)
// Original: glitch::collada::CSceneNodeAnimatorSynchronizedBlender::onBindEx
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorSynchronizedBlender::onBindEx(uint32_t *a1, int a2, volatile int32_t **a3)
{
  volatile int32_t *v3;
  int v4;
  int MaskAllocationSize;
  volatile int32_t *v6;
  volatile int32_t *v7;
  volatile int32_t *v8;
  int result;
  int v10;
  int v11;
  typedef int _g4_t_v12;
  typedef volatile int32_t *_g4_t_v13;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);

  v3 = *a3;
  v13 = *a3;
  if ( v13 != nullptr )
    sub_8B1B00(v3 + 1);
  v4 = opNew(0x10u);
  glitch::collada::CAnimationFilterBase::Construct((volatile int32_t *)v4, (int)(uintptr_t)(&v13));
  *(uint32_t *)v4 = ((uint32_t)(uintptr_t)&off_2067930);
  MaskAllocationSize = glitch::collada::CAnimationFilterBase::getMaskAllocationSize((glitch::collada::CAnimationFilterBase::Self *)v4);
  *(uint32_t *)(v4 + 8) = sub_4EBDC0(4 * MaskAllocationSize);
  glitch::collada::CAnimationFilterBase::init((glitch::collada::CAnimationFilterBase::Self *)v4);
  sub_8B1B00((volatile int32_t *)(v4 + 4));
  if ( v13 != nullptr )
    sub_5459C0(v13);
  sub_8B1B00((volatile int32_t *)(v4 + 4));
  v6 = (volatile int32_t *)a1[25];
  a1[25] = v4;
  if ( v6 != nullptr )
    sub_5459C0(v6);
  sub_5459C0((volatile int32_t *)v4);
  v7 = *a3;
  if ( *a3 != nullptr )
    sub_8B1B00(v7 + 1);
  v8 = (volatile int32_t *)a1[4];
  a1[4] = (uint32_t)(uintptr_t)(v7);
  if ( v8 != nullptr )
    sub_5459C0(v8);
  result = a1[16];
  v12 = (a1[17] - result) >> 2;
  if ( v12 > 0 )
  {
    v10 = 0;
    while ( 1 )
    {
      v11 = *(uint32_t *)(result + 4 * v10++);
      result = G4_VCALL<int>(v11, 88, a2, a3);
      if ( v10 == v12 )
        break;
      result = a1[16];
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorTrackBlender::onBindEx  (binary VA: 0xd556f0)
// Original: glitch::collada::CSceneNodeAnimatorTrackBlender::onBindEx
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorTrackBlender::onBindEx(uint32_t *a1, int a2, int *a3)
{
  int v3;
  volatile int32_t *v4;
  int v5;
  int MaskAllocationSize;
  volatile int32_t *v7;
  int v8;
  int v9;
  volatile int32_t *v10;
  int v11;
  int v12;
  volatile int32_t *v13;
  typedef volatile int32_t *_g4_t_v15;
  typedef volatile int32_t *_g4_t_v16;
  typedef volatile int32_t *_g4_t_v17;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v16)) > _g4_s1 ? (16u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v17)) > _g4_s2 ? (28u + sizeof(_g4_t_v17)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);

  v3 = *a3;
  if ( *a3 != 0 )
    sub_8B1B00((volatile int32_t *)(v3 + 4));
  v4 = (volatile int32_t *)a1[4];
  a1[4] = v3;
  if ( v4 != nullptr )
    sub_5459C0(v4);
  glitch::collada::CSceneNodeAnimatorBlender::onBindEx(a1, a2, a3);
  v17 = (volatile int32_t *)a1[4];
  if ( v17 != nullptr )
    sub_8B1B00(v17 + 1);
  v5 = opNew(0x10u);
  glitch::collada::CAnimationFilterBase::Construct((volatile int32_t *)v5, (int)(uintptr_t)(&v17));
  *(uint32_t *)v5 = ((uint32_t)(uintptr_t)&off_2067930);
  MaskAllocationSize = glitch::collada::CAnimationFilterBase::getMaskAllocationSize((glitch::collada::CAnimationFilterBase::Self *)v5);
  *(uint32_t *)(v5 + 8) = sub_4EBDC0(4 * MaskAllocationSize);
  glitch::collada::CAnimationFilterBase::init((glitch::collada::CAnimationFilterBase::Self *)v5);
  sub_8B1B00((volatile int32_t *)(v5 + 4));
  if ( v17 != nullptr )
    sub_5459C0(v17);
  sub_8B1B00((volatile int32_t *)(v5 + 4));
  v7 = (volatile int32_t *)a1[22];
  a1[22] = v5;
  if ( v7 != nullptr )
    sub_5459C0(v7);
  sub_5459C0((volatile int32_t *)v5);
  v15 = (volatile int32_t *)a1[4];
  if ( v15 != nullptr )
    sub_8B1B00(v15 + 1);
  v8 = opNew(0x10u);
  glitch::collada::CAnimationFilterBase::Construct((volatile int32_t *)v8, (int)(uintptr_t)(&v15));
  *(uint32_t *)v8 = ((uint32_t)(uintptr_t)&off_2067930);
  v9 = glitch::collada::CAnimationFilterBase::getMaskAllocationSize((glitch::collada::CAnimationFilterBase::Self *)v8);
  *(uint32_t *)(v8 + 8) = sub_4EBDC0(4 * v9);
  glitch::collada::CAnimationFilterBase::init((glitch::collada::CAnimationFilterBase::Self *)v8);
  sub_8B1B00((volatile int32_t *)(v8 + 4));
  if ( v15 != nullptr )
    sub_5459C0(v15);
  sub_8B1B00((volatile int32_t *)(v8 + 4));
  v10 = (volatile int32_t *)a1[23];
  a1[23] = v8;
  if ( v10 != nullptr )
    sub_5459C0(v10);
  sub_5459C0((volatile int32_t *)v8);
  v16 = (volatile int32_t *)a1[4];
  if ( v16 != nullptr )
    sub_8B1B00(v16 + 1);
  v11 = opNew(0x10u);
  glitch::collada::CAnimationFilterBase::Construct((volatile int32_t *)v11, (int)(uintptr_t)(&v16));
  *(uint32_t *)v11 = ((uint32_t)(uintptr_t)&off_2067930);
  v12 = glitch::collada::CAnimationFilterBase::getMaskAllocationSize((glitch::collada::CAnimationFilterBase::Self *)v11);
  *(uint32_t *)(v11 + 8) = sub_4EBDC0(4 * v12);
  glitch::collada::CAnimationFilterBase::init((glitch::collada::CAnimationFilterBase::Self *)v11);
  sub_8B1B00((volatile int32_t *)(v11 + 4));
  if ( v16 != nullptr )
    sub_5459C0(v16);
  sub_8B1B00((volatile int32_t *)(v11 + 4));
  v13 = (volatile int32_t *)a1[24];
  a1[24] = v11;
  if ( v13 != nullptr )
    sub_5459C0(v13);
  return sub_5459C0((volatile int32_t *)v11);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationFilterBase::enableAnimation  (binary VA: 0xd55970)
// Original: glitch::collada::CAnimationFilterBase::enableAnimation
// ----------------------------------------------------------------------------
int glitch::collada::CAnimationFilterBase::enableAnimation(glitch::collada::CAnimationFilterBase::Self *self, void *a2)
{
  int v2;
  int v3;
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;

  v2 = 0;
  v3 = *((uint32_t *)self + 3);
  if ( v3 != 0 )
  {
    v4 = *(uint32_t *)(v3 + 8);
    if ( v4 != 0 )
      v2 = v4 - 8;
  }
  result = *(uint32_t *)(*(uint32_t *)(v2 + 52) + 4) - **(uint32_t **)(v2 + 52);
  if ( result > 0 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = 0;
      if ( v3 != 0 )
      {
        v8 = *(uint32_t *)(v3 + 8);
        if ( v8 != 0 )
          v7 = v8 - 8;
      }
      if ( a2 == *(void **)(*(uint32_t *)(v7 + 60) + 4 * v6) )
      {
        v9 = (uint32_t *)(*((uint32_t *)self + 2) + 4 * (v6 >> 5));
        *v9 |= 1 << v6;
      }
      if ( ++v6 == result )
        break;
      v3 = *((uint32_t *)self + 3);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationFilterBase::enableAnimation  (binary VA: 0xd559f0)
// Original: glitch::collada::CAnimationFilterBase::enableAnimation
// ----------------------------------------------------------------------------
uint32_t * glitch::collada::CAnimationFilterBase::enableAnimation(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uint32_t *result;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  volatile int32_t *v12;
  int v13;
  char v14;
  int v15;
  bool v16;

  v3 = 0;
  v4 = *(uint32_t *)(a1 + 12);
  if ( v4 != 0 )
  {
    v5 = *(uint32_t *)(v4 + 8);
    if ( v5 != 0 )
      v3 = v5 - 8;
  }
  v15 = *(uint32_t *)(*(uint32_t *)(v3 + 52) + 4) - **(uint32_t **)(v3 + 52);
  result = (uint32_t *)v15;
  if ( v15 > 0 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = 0;
      if ( v4 != 0 )
      {
        v9 = *(uint32_t *)(v4 + 8);
        if ( v9 != 0 )
          v8 = v9 - 8;
      }
      result = *(uint32_t **)(v8 + 60);
      if ( a2 != result[v7] )
        goto LABEL_6;
      v10 = 0;
      if ( v4 != 0 )
      {
        v11 = *(uint32_t *)(v4 + 8);
        if ( v11 != 0 )
          v10 = v11 - 8;
      }
      v12 = *(volatile int32_t **)(v10 + 36);
      if ( v12 != nullptr )
      {
        sub_8B1B00(v12 + 1);
        v16 = *(uint32_t *)(G4_VCALL<int>(v12, 16, v7) + 4) == a3;
        result = (uint32_t *)sub_5459C0(v12);
      }
      else
      {
        result = (uint32_t *)G4_MEM_CALL(0x464C458F, 0, v7);
        v16 = result[1] == a3;
      }
      if ( v16 )
      {
        v13 = v7 >> 5;
        v14 = v7++;
        result = (uint32_t *)(*(uint32_t *)(a1 + 8) + 4 * v13);
        *result |= 1 << v14;
        if ( v7 == v15 )
          return result;
      }
      else
      {
LABEL_6:
        if ( ++v7 == v15 )
          return result;
      }
      v4 = *(uint32_t *)(a1 + 12);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationFilterBase::enableAnimation  (binary VA: 0xd55b10)
// Original: glitch::collada::CAnimationFilterBase::enableAnimation
// ----------------------------------------------------------------------------
uint32_t * glitch::collada::CAnimationFilterBase::enableAnimation(glitch::collada::CAnimationFilterBase::Self *self, int a2)
{
  uint32_t *result;

  result = (uint32_t *)(*((uint32_t *)self + 2) + 4 * (a2 / 32));
  *result |= 1 << a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationFilterBase::enableAnimation  (binary VA: 0xd55b40)
// Original: glitch::collada::CAnimationFilterBase::enableAnimation
// ----------------------------------------------------------------------------
uint32_t * glitch::collada::CAnimationFilterBase::enableAnimation(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint32_t *result;
  int v6;
  int v7;
  int v8;
  volatile int32_t *v9;
  int v10;
  char v11;
  int v12;
  int v13;

  v2 = 0;
  v3 = *(uint32_t *)(a1 + 12);
  if ( v3 != 0 )
  {
    v4 = *(uint32_t *)(v3 + 8);
    if ( v4 != 0 )
      v2 = v4 - 8;
  }
  result = *(uint32_t **)(v2 + 52);
  v6 = result[1] - *result;
  if ( v6 > 0 )
  {
    v12 = 0;
    while ( 1 )
    {
      v7 = 0;
      if ( v3 != 0 )
      {
        v8 = *(uint32_t *)(v3 + 8);
        if ( v8 != 0 )
          v7 = v8 - 8;
      }
      v9 = *(volatile int32_t **)(v7 + 36);
      if ( v9 != nullptr )
        sub_8B1B00(v9 + 1);
      v13 = *(uint32_t *)(G4_VCALL<int>(v9, 16, v12) + 4);
      result = (uint32_t *)sub_5459C0(v9);
      if ( v13 == a2 )
      {
        v10 = v12 >> 5;
        v11 = v12++;
        result = (uint32_t *)(*(uint32_t *)(a1 + 8) + 4 * v10);
        *result |= 1 << v11;
        if ( v12 == v6 )
          return result;
      }
      else if ( ++v12 == v6 )
      {
        return result;
      }
      v3 = *(uint32_t *)(a1 + 12);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationFilterBase::getAnimationIndex  (binary VA: 0xd55c20)
// Original: glitch::collada::CAnimationFilterBase::getAnimationIndex
// ----------------------------------------------------------------------------
int glitch::collada::CAnimationFilterBase::getAnimationIndex(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  volatile int32_t *v12;
  bool v13;
  bool v15;

  v3 = 0;
  v4 = *(uint32_t *)(a1 + 12);
  if ( v4 != 0 )
  {
    v5 = *(uint32_t *)(v4 + 8);
    if ( v5 != 0 )
      v3 = v5 - 8;
  }
  v6 = -1;
  v7 = *(uint32_t *)(*(uint32_t *)(v3 + 52) + 4) - **(uint32_t **)(v3 + 52);
  if ( v7 > 0 )
  {
    v6 = 0;
    while ( 1 )
    {
      v8 = 0;
      if ( v4 != 0 )
      {
        v9 = *(uint32_t *)(v4 + 8);
        if ( v9 != 0 )
          v8 = v9 - 8;
      }
      if ( a2 == *(uint32_t *)(*(uint32_t *)(v8 + 60) + 4 * v6) )
      {
        v10 = 0;
        if ( v4 != 0 )
        {
          v11 = *(uint32_t *)(v4 + 8);
          if ( v11 != 0 )
            v10 = v11 - 8;
        }
        v12 = *(volatile int32_t **)(v10 + 36);
        if ( v12 != nullptr )
        {
          sub_8B1B00(v12 + 1);
          v15 = *(uint32_t *)(G4_VCALL<int>(v12, 16, v6) + 4) == a3;
          sub_5459C0(v12);
          v13 = v15;
        }
        else
        {
          v13 = *(uint32_t *)(G4_MEM_CALL(0x464C458F, 0, v6) + 4) == a3;
        }
        if ( v13 )
          break;
      }
      if ( ++v6 == v7 )
        return -1;
      v4 = *(uint32_t *)(a1 + 12);
    }
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationFilterBase::isAnimationEnabled  (binary VA: 0xd55d30)
// Original: glitch::collada::CAnimationFilterBase::isAnimationEnabled
// ----------------------------------------------------------------------------
bool glitch::collada::CAnimationFilterBase::isAnimationEnabled(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  bool result;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  volatile int32_t *v13;
  bool v14;
  bool v15;

  v3 = 0;
  v4 = *(uint32_t *)(a1 + 12);
  if ( v4 != 0 )
  {
    v5 = *(uint32_t *)(v4 + 8);
    if ( v5 != 0 )
      v3 = v5 - 8;
  }
  v6 = *(uint32_t *)(*(uint32_t *)(v3 + 52) + 4) - **(uint32_t **)(v3 + 52);
  result = false;
  if ( v6 > 0 )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = 0;
      if ( v4 != 0 )
      {
        v10 = *(uint32_t *)(v4 + 8);
        if ( v10 != 0 )
          v9 = v10 - 8;
      }
      if ( a2 == *(uint32_t *)(*(uint32_t *)(v9 + 60) + 4 * v8) )
      {
        v11 = 0;
        if ( v4 != 0 )
        {
          v12 = *(uint32_t *)(v4 + 8);
          if ( v12 != 0 )
            v11 = v12 - 8;
        }
        v13 = *(volatile int32_t **)(v11 + 36);
        if ( v13 != nullptr )
        {
          sub_8B1B00(v13 + 1);
          v15 = *(uint32_t *)(G4_VCALL<int>(v13, 16, v8) + 4) == a3;
          sub_5459C0(v13);
          v14 = v15;
        }
        else
        {
          v14 = *(uint32_t *)(G4_MEM_CALL(0x464C458F, 0, v8) + 4) == a3;
        }
        if ( v14 )
          return ((1 << v8) & *(uint32_t *)(*(uint32_t *)(a1 + 8) + 4 * (v8 >> 5))) != 0;
      }
      if ( ++v8 == v6 )
        break;
      v4 = *(uint32_t *)(a1 + 12);
    }
    return false;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationSet::Construct  (binary VA: 0xd55e50)
// Original: glitch::collada::CAnimationSet::CAnimationSet
// ----------------------------------------------------------------------------
glitch::collada::CAnimationSet::Self * glitch::collada::CAnimationSet::Construct(glitch::collada::CAnimationSet::Self *self)
{
  *((uint32_t *)self + 1) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2077D48);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 34) = 0;
  *((uint32_t *)self + 35) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationSet::getAnimationClipIndex  (binary VA: 0xd55f60)
// Original: glitch::collada::CAnimationSet::getAnimationClipIndex
// ----------------------------------------------------------------------------
int glitch::collada::CAnimationSet::getAnimationClipIndex(glitch::collada::CAnimationSet::Self *self, int a2, float a3)
{
  int v3;
  int *v4;
  int v5;
  int v6;
  int *v7;
  int *v8;
  int result;
  int v10;
  int *v11;

  v3 = *((uint32_t *)self + 32) + 12 * a2;
  v4 = *(int **)v3;
  v11 = *(int **)(v3 + 4);
  v5 = ((int)(uintptr_t)(v11) - *(uint32_t *)v3) >> 2;
  if ( v5 > 0 )
  {
    while ( 1 )
    {
      v6 = v5 >> 1;
      v7 = &v4[v5 >> 1];
      if ( a3 <= (float)*(int *)(*v7 + 4) )
        break;
      v4 = v7 + 1;
      v5 = v5 - v6 - 1;
LABEL_8:
      if ( v5 <= 0 )
        goto LABEL_9;
    }
    while ( v6 != 0 )
    {
      v8 = &v4[v6 >> 1];
      if ( a3 > (float)*(int *)(*v8 + 4) )
      {
        v4 = v8 + 1;
        v5 = v6 - (v6 >> 1) - 1;
        goto LABEL_8;
      }
      v6 >>= 1;
    }
  }
LABEL_9:
  result = 0;
  if ( v11 != v4 )
  {
    v10 = *v4;
    return (v10
          - glitch::collada::CColladaDatabase::getAnimationClip(
              (glitch::collada::CColladaDatabase::Self *)(*((uint32_t *)self + 17) + 20 * a2),
              0)) >> 4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationSet::remAnimationTemplate  (binary VA: 0xd56030)
// Original: glitch::collada::CAnimationSet::remAnimationTemplate
// ----------------------------------------------------------------------------
int glitch::collada::CAnimationSet::remAnimationTemplate(glitch::collada::CAnimationSet::Self *self)
{
  int result;

  result = *((uint32_t *)self + 35);
  if ( result != 0 )
    return (*(int (**)(uint32_t))(*(uint32_t *)result + 4))(*((uint32_t *)self + 35));
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationSet::Destroy  (binary VA: 0xd56050)
// Original: glitch::collada::CAnimationSet::~CAnimationSet
// ----------------------------------------------------------------------------
void glitch::collada::CAnimationSet::Destroy(glitch::collada::CAnimationSet::Self *self)
{
  int *v1;
  int *v2;
  int v3;
  int v4;
  glitch::collada::CAnimationSet::Self *v5;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2077D48);
  glitch::collada::CAnimationSet::remAnimationTemplate(self);
  v1 = *((int **)self + 33);
  v2 = *((int **)self + 32);
  if ( v1 != v2 )
  {
    do
    {
      if ( *v2 != 0 )
        gll_operator_delete_arr(*v2);
      v2 += 3;
    }
    while ( v1 != v2 );
    v2 = *((int **)self + 32);
  }
  if ( v2 != nullptr )
    gll_operator_delete_arr((int)(uintptr_t)(v2));
  if ( *((uint32_t *)self + 29) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 29));
  if ( *((uint32_t *)self + 26) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 26));
  if ( *((uint32_t *)self + 23) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 23));
  if ( *((uint32_t *)self + 20) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 20));
  v3 = *((uint32_t *)self + 18);
  v4 = *((uint32_t *)self + 17);
  if ( v3 != v4 )
  {
    do
    {
      v5 = (glitch::collada::CAnimationSet::Self *)v4;
      v4 += 20;
      glitch::collada::CColladaDatabase::Destroy(v5);
    }
    while ( v3 != v4 );
    v4 = *((uint32_t *)self + 17);
  }
  if ( v4 != 0 )
    gll_operator_delete_arr(v4);
  if ( *((uint32_t *)self + 13) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 13));
  if ( *((uint32_t *)self + 10) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 10));
  if ( *((uint32_t *)self + 6) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 6));
  if ( *((uint32_t *)self + 3) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 3));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationSet::Destroy_ead56170  (binary VA: 0xd56170)
// Original: glitch::collada::CAnimationSet::~CAnimationSet
// ----------------------------------------------------------------------------
void glitch::collada::CAnimationSet::Destroy_ead56170(glitch::collada::CAnimationSet::Self *self)
{
  glitch::collada::CAnimationSet::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationSetTransformationTemplate::Construct  (binary VA: 0xd561b0)
// Original: glitch::collada::CAnimationSetTransformationTemplate::CAnimationSetTransformationTemplate
// ----------------------------------------------------------------------------
glitch::collada::CAnimationSetTransformationTemplate::Self * glitch::collada::CAnimationSetTransformationTemplate::Construct(glitch::collada::CAnimationSetTransformationTemplate::Self *self)
{
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2077D90);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationSetTransformationTemplate::addTransformationTargets  (binary VA: 0xd561e0)
// Original: glitch::collada::CAnimationSetTransformationTemplate::addTransformationTargets
// ----------------------------------------------------------------------------
uint32_t * glitch::collada::CAnimationSetTransformationTemplate::addTransformationTargets(int a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  uint32_t *result;
  int v10;
  int v11;
  typedef uint32_t *_g4_t_v12;
  typedef int _g4_t_v13[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v13)) > _g4_s1 ? (28u + sizeof(_g4_t_v13)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);

  v13[0] = opNew(0x10u);
  *(uint8_t *)v13[0] = 0;
  v2 = v13[0];
  *(uint32_t *)(v13[0] + 4) = 1;
  v3 = *(int **)(a1 + 8);
  if ( v3 == *(int **)(a1 + 12) )
  {
    sub_D40D00((char **)(a1 + 4), v13);
  }
  else
  {
    v4 = 0;
    if ( v3 != nullptr )
    {
      *v3 = v2;
      v4 = *(uint32_t *)(a1 + 8);
    }
    *(uint32_t *)(a1 + 8) = v4 + 4;
  }
  v13[0] = opNew(0x10u);
  *(uint8_t *)v13[0] = 0;
  v5 = v13[0];
  *(uint32_t *)(v13[0] + 4) = 5;
  v6 = *(int **)(a1 + 8);
  if ( v6 == *(int **)(a1 + 12) )
  {
    sub_D40D00((char **)(a1 + 4), v13);
  }
  else
  {
    v7 = 0;
    if ( v6 != nullptr )
    {
      *v6 = v5;
      v7 = *(uint32_t *)(a1 + 8);
    }
    *(uint32_t *)(a1 + 8) = v7 + 4;
  }
  v13[0] = opNew(0x10u);
  *(uint8_t *)v13[0] = 0;
  v8 = v13[0];
  *(uint32_t *)(v13[0] + 4) = 10;
  result = *(uint32_t **)(a1 + 8);
  if ( result == *(uint32_t **)(a1 + 12) )
  {
    result = (uint32_t *)(sub_D40D00((char **)(a1 + 4), v13));
  }
  else
  {
    v10 = 0;
    if ( result != nullptr )
    {
      *result = v8;
      v10 = *(uint32_t *)(a1 + 8);
    }
    *(uint32_t *)(a1 + 8) = v10 + 4;
  }
  if ( *(int *)(a2 + 56) > 0 )
  {
    result = nullptr;
    v11 = 0;
    do
    {
      v12 = result;
      ++v11;
      glitch::collada::CAnimationSetTransformationTemplate::addTransformationTargets(
        a1,
        (char *)result + a2 + *(uint32_t *)(a2 + 60) + 60);
      result = v12 + 20;
    }
    while ( *(uint32_t *)(a2 + 56) > v11 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationSetTransformationTemplate::Construct  (binary VA: 0xd56340)
// Original: glitch::collada::CAnimationSetTransformationTemplate::CAnimationSetTransformationTemplate
// ----------------------------------------------------------------------------
glitch::collada::CAnimationSetTransformationTemplate::Self * glitch::collada::CAnimationSetTransformationTemplate::Construct(glitch::collada::CAnimationSetTransformationTemplate::Self *self, glitch::collada::CColladaDatabase::Self *a2)
{
  glitch::collada::CAnimationSetTransformationTemplate::Self *result;
  int v3;
  int VisualScene;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2077D90);
  result = *(glitch::collada::CAnimationSetTransformationTemplate::Self **)(*(uint32_t *)(*(uint32_t *)a2 + 16) + 32);
  if ( *((int *)result + 45) > 0 )
  {
    v10 = 0;
    v3 = 0;
    do
    {
      VisualScene = glitch::collada::CColladaDatabase::getVisualScene(a2, v3);
      if ( *(int *)(VisualScene + 8) > 0 )
      {
        v5 = 0;
        v6 = 0;
        v9 = VisualScene + 8;
        v7 = VisualScene;
        do
        {
          ++v6;
          v8 = v5 + v9 + *(uint32_t *)(v7 + 12) + 4;
          v5 += 80;
          glitch::collada::CAnimationSetTransformationTemplate::addTransformationTargets((int)(uintptr_t)(self), v8);
        }
        while ( *(uint32_t *)(v7 + 8) > v6 );
      }
      v3 = ++v10;
      result = *(glitch::collada::CAnimationSetTransformationTemplate::Self **)(*(uint32_t *)(*(uint32_t *)a2 + 16) + 32);
    }
    while ( v10 < *((uint32_t *)result + 45) );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationSet::addAnimationTemplate  (binary VA: 0xd56420)
// Original: glitch::collada::CAnimationSet::addAnimationTemplate
// ----------------------------------------------------------------------------
glitch::collada::CAnimationSet::Self * glitch::collada::CAnimationSet::addAnimationTemplate(glitch::collada::CAnimationSet::Self *self, glitch::collada::CColladaDatabase::Self *a2)
{
  glitch::collada::CAnimationSetTransformationTemplate::Self *v2;

  v2 = (glitch::collada::CAnimationSetTransformationTemplate::Self *)opNew(0x10u);
  glitch::collada::CAnimationSetTransformationTemplate::Construct(v2, a2);
  *((uint32_t *)self + 35) = (uint32_t)(uintptr_t)(v2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationSetTransformationTemplate::addTransformationTargets  (binary VA: 0xd56480)
// Original: glitch::collada::CAnimationSetTransformationTemplate::addTransformationTargets
// ----------------------------------------------------------------------------
uint32_t * glitch::collada::CAnimationSetTransformationTemplate::addTransformationTargets(glitch::collada::CAnimationSetTransformationTemplate::Self *self, glitch::collada::CSceneNode *a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  int *v6;
  int v7;
  uint32_t *result;
  uint32_t *v9;
  int v10;
  glitch::collada::CSceneNode *i;
  glitch::collada::CSceneNode *v12;
  int v13[8];

  v13[0] = opNew(0x10u);
  *(uint8_t *)v13[0] = 0;
  v2 = v13[0];
  *(uint32_t *)(v13[0] + 4) = 1;
  *(uint32_t *)(v2 + 8) = (uint32_t)(uintptr_t)(a2);
  v3 = *((int **)self + 2);
  if ( v3 == *((int **)self + 3) )
  {
    sub_D40D00((char **)self + 1, v13);
  }
  else
  {
    v4 = 0;
    if ( v3 != nullptr )
    {
      *v3 = v2;
      v4 = *((uint32_t *)self + 2);
    }
    *((uint32_t *)self + 2) = v4 + 4;
  }
  v13[0] = opNew(0x10u);
  *(uint8_t *)v13[0] = 0;
  v5 = v13[0];
  *(uint32_t *)(v13[0] + 4) = 5;
  *(uint32_t *)(v5 + 8) = (uint32_t)(uintptr_t)(a2);
  v6 = *((int **)self + 2);
  if ( v6 == *((int **)self + 3) )
  {
    sub_D40D00((char **)self + 1, v13);
  }
  else
  {
    v7 = 0;
    if ( v6 != nullptr )
    {
      *v6 = v5;
      v7 = *((uint32_t *)self + 2);
    }
    *((uint32_t *)self + 2) = v7 + 4;
  }
  v13[0] = opNew(0x10u);
  *(uint8_t *)v13[0] = 0;
  result = (uint32_t *)v13[0];
  *(uint32_t *)(v13[0] + 4) = 10;
  result[2] = (uint32_t)(uintptr_t)(a2);
  v9 = *((uint32_t **)self + 2);
  if ( v9 == *((uint32_t **)self + 3) )
  {
    result = (uint32_t *)(sub_D40D00((char **)self + 1, v13));
  }
  else
  {
    v10 = 0;
    if ( v9 != nullptr )
    {
      *v9 = (uint32_t)(uintptr_t)(result);
      v10 = *((uint32_t *)self + 2);
    }
    *((uint32_t *)self + 2) = v10 + 4;
  }
  for ( i = *((glitch::collada::CSceneNode **)a2 + 53);
        (glitch::collada::CSceneNode *)((char *)a2 + 212) != i;
        i = *(glitch::collada::CSceneNode **)i )
  {
    v12 = (glitch::collada::CSceneNode *)((char *)i - 4);
    if ( i == nullptr )
      v12 = nullptr;
    result = (uint32_t *)glitch::collada::CAnimationSetTransformationTemplate::addTransformationTargets(self, v12);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationSetTransformationTemplate::Construct  (binary VA: 0xd565e0)
// Original: glitch::collada::CAnimationSetTransformationTemplate::CAnimationSetTransformationTemplate
// ----------------------------------------------------------------------------
glitch::collada::CAnimationSetTransformationTemplate::Self * glitch::collada::CAnimationSetTransformationTemplate::Construct(glitch::collada::CAnimationSetTransformationTemplate::Self *self, glitch::collada::CSceneNode *a2)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2077D90);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  return (glitch::collada::CAnimationSetTransformationTemplate::Self *)glitch::collada::CAnimationSetTransformationTemplate::addTransformationTargets(
                                                                   self,
                                                                   a2);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationSet::addAnimationTemplate  (binary VA: 0xd56630)
// Original: glitch::collada::CAnimationSet::addAnimationTemplate
// ----------------------------------------------------------------------------
glitch::collada::CAnimationSet::Self * glitch::collada::CAnimationSet::addAnimationTemplate(glitch::collada::CAnimationSet::Self *self, glitch::collada::CSceneNode *a2)
{
  glitch::collada::CAnimationSetTransformationTemplate::Self *v2;

  v2 = (glitch::collada::CAnimationSetTransformationTemplate::Self *)opNew(0x10u);
  glitch::collada::CAnimationSetTransformationTemplate::Construct(v2, a2);
  *((uint32_t *)self + 35) = (uint32_t)(uintptr_t)(v2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationBlock::getBlock  (binary VA: 0xd56690)
// Original: glitch::collada::CAnimationBlock::getBlock
// ----------------------------------------------------------------------------
uint32_t * glitch::collada::CAnimationBlock::getBlock(uint32_t *a1, int a2)
{
  uint32_t *result;
  int v3;
  uint32_t *v4;

  result = nullptr;
  if ( (**(uint32_t **)a2 != 0) == (a1[1] != 0) && *(uint32_t *)(a2 + 4) == a1[6] )
  {
    v3 = *(uint32_t *)(a2 + 8);
    result = a1;
    do
    {
      v4 = (uint32_t *)result[7];
      if ( v3 >= *v4 )
      {
        if ( v3 <= v4[1] )
          return result;
        result = (uint32_t *)result[9];
      }
      else
      {
        result = (uint32_t *)result[10];
      }
    }
    while ( result != a1 && result != nullptr );
    return nullptr;
  }
  return result;
}



// ============================================================================
// Address:   0xd56700 (size: 128 bytes)
// Symbol:    _ZN6glitch7collada26CAnimationStreamingManagerC1Ev
// Demangled: glitch::collada::CAnimationStreamingManager::CAnimationStreamingManager(void)
// ============================================================================
// Alternative name is '_ZN6glitch7collada26CAnimationStreamingManagerC2Ev'
glitch::collada::CAnimationStreamingManager::Self *glitch::collada::CAnimationStreamingManager::Construct(
        glitch::collada::CAnimationStreamingManager::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  glf::SpinLock::Construct((glitch::collada::CAnimationStreamingManager::Self *)((char *)self + 40));
  glitch::collada::CAnimationStreamingManager::Instance = (uintptr_t)(uintptr_t)(self);
  return (struct glitch::collada::CAnimationStreamingManager::Self *)&glitch::collada::CAnimationStreamingManager::Instance;
}
// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationStreamingManager::Destroy  (binary VA: 0xd56780)
// Original: glitch::collada::CAnimationStreamingManager::~CAnimationStreamingManager
// ----------------------------------------------------------------------------
void glitch::collada::CAnimationStreamingManager::Destroy(void **self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  void *v6;
  int v7;
  int v8;
  int v9;

  glitch::collada::CAnimationStreamingManager::Instance = 0;
  glf::SpinLock::Destroy(self + 10);
  v9 = (int)(uintptr_t)(*(self + 4));
  v1 = (int)(uintptr_t)(*(self + 3));
  if ( v9 != v1 )
  {
    v2 = (int)(uintptr_t)(*(self + 3));
    v3 = v1 + 4;
    do
    {
      v4 = v2 - v1;
      v5 = *(uint32_t *)(v2 - v1 + v3);
      if ( v5 != 0 )
      {
        if ( __sync_fetch_and_add((volatile int32_t *)v5, 0xFFFFFFFF) == 1 )
        {
          v6 = *(void **)(v5 + 16);
          if ( v6 != nullptr )
          {
            v7 = v3;
            v8 = v1;
            opDeleteArray(v6);
            v1 = v8;
            v3 = v7;
          }
          *(uint32_t *)(v5 + 16) = 0;
        }
        *(uint32_t *)(v4 + v3) = 0;
      }
      v2 += 12;
    }
    while ( v9 != v2 );
    v1 = (int)(uintptr_t)(*(self + 3));
  }
  if ( v1 != 0 )
    gll_operator_delete_arr(v1);
  if ( *self != nullptr )
    gll_operator_delete_arr((int)(uintptr_t)(*self));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationStreamingManager::checkMemoryUsage  (binary VA: 0xd56850)
// Original: glitch::collada::CAnimationStreamingManager::checkMemoryUsage
// ----------------------------------------------------------------------------
char * glitch::collada::CAnimationStreamingManager::checkMemoryUsage(glitch::collada::CAnimationStreamingManager::Self *self)
{
  char *result;
  char *v2;
  int v3;
  int v4;
  uint32_t *v5;
  char *v6;
  char *v7;
  uint32_t *v8;
  uint32_t *v9;
  char *v10;
  volatile int32_t *v11;
  int v12;
  void *v13;
  glitch::collada::CAnimationStreamingManager::Self *v14;
  int v15;
  void *v16;
  uint32_t *v17;
  char *v18;
  uint32_t *v19;
  int v20;
  char *v21;

  result = *((char **)self + 3);
  v2 = *((char **)self + 4);
  v3 = *((uint32_t *)self + 6);
  v4 = *((uint32_t *)self + 7);
  while ( v4 > v3 )
  {
    if ( result == v2 )
      return (char *)glitch::os::Printer::log(
                       (int)(uintptr_t)("AnimationStreamingManager : Memory usage exceed maximum cache size"),
                       2);
    v5 = *((uint32_t **)result + 1);
    if ( v5 != nullptr && *v5 == 1 )
    {
      v6 = result + 12;
      v7 = *((char **)self + 4);
      *((uint32_t *)self + 7) = v4 - *(uint32_t *)result;
      if ( v7 != result + 12 )
      {
        v20 = -1431655765 * ((v7 - v6) >> 2);
        if ( v20 > 0 )
        {
          v8 = (uint32_t *)(result + 16);
          v21 = result;
          v9 = (uint32_t *)(result + 4);
          do
          {
            v10 = (char *)(v6 - v21);
            *((uint32_t *)v6 - 3) = *(uint32_t *)v6;
            v11 = *(volatile int32_t **)((char *)v8 + ((char *)v6 - (char *)v21) - 12);
            if ( v11 != nullptr )
              __sync_add_and_fetch(v11, 1u);
            v12 = *(uint32_t *)((char *)v9 + (uint32_t)(uintptr_t)(v10) - 12);
            if ( v12 != 0 && __sync_fetch_and_add((volatile int32_t *)v12, 0xFFFFFFFF) == 1 )
            {
              v13 = *(void **)(v12 + 16);
              if ( v13 != nullptr )
              {
                v17 = v9;
                v19 = v8;
                opDeleteArray(v13);
                v8 = v19;
                v9 = v17;
              }
              *(uint32_t *)(v12 + 16) = 0;
            }
            *(uint32_t *)((char *)v9 + (uint32_t)(uintptr_t)(v10) - 12) = *(uint32_t *)((char *)v8 + (uint32_t)(uintptr_t)(v10) - 12);
            *((uint32_t *)v6 - 1) = *((uint32_t *)v6 + 2);
            v6 += 12;
            --v20;
          }
          while ( v20 != 0 );
          result = v21;
          v7 = *((char **)self + 4);
        }
      }
      v14 = self;
      v2 = v7 - 12;
      *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(v7 - 12);
      v15 = *((uint32_t *)v7 - 2);
      if ( v15 != 0 )
      {
        if ( __sync_fetch_and_add((volatile int32_t *)v15, 0xFFFFFFFF) == 1 )
        {
          v16 = *(void **)(v15 + 16);
          if ( v16 != nullptr )
          {
            v18 = result;
            opDeleteArray(v16);
            result = v18;
          }
          *(uint32_t *)(v15 + 16) = 0;
        }
        v14 = self;
        *((uint32_t *)v7 - 2) = 0;
        v2 = *((char **)self + 4);
      }
      v3 = *((uint32_t *)v14 + 6);
      v4 = *((uint32_t *)v14 + 7);
    }
    else
    {
      result += 12;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationStreamingManager::cache  (binary VA: 0xd569e0)
// Original: glitch::collada::CAnimationStreamingManager::cache
// ----------------------------------------------------------------------------
void glitch::collada::CAnimationStreamingManager::cache(glitch::collada::CAnimationStreamingManager::Self *self, glitch::collada::CAnimationBlock::Self *a2)
{
  glitch::collada::CAnimationStreamingManager::Self *v2;
  int v3;
  volatile int32_t *v4;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *v12;
  volatile int32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  volatile int32_t *v16;
  int v17;
  uint32_t *v18;
  int v19;
  uint32_t *v20;
  int v21;
  void *v22;
  int v23;
  int v24;
  int v25;
  uint32_t *v26;
  int v27;
  uint32_t *v28;
  int v29;
  int v30;
  unsigned int v31;
  uint32_t *v32;
  size_t v33;
  uint32_t *v34;
  int v35;
  int v36;
  uint32_t *v37;

  v2 = self;
  v29 = *((uint32_t *)a2 + 7);
  if ( *((int *)self + 6) > 0 )
  {
    glitch::collada::CAnimationStreamingManager::checkMemoryUsage(self);
    v3 = *(uint32_t *)(v29 + 20);
    *((uint32_t *)self + 7) += v3;
    v24 = v3;
    glitch::collada::CAnimationStreamingManager::checkMemoryUsage(self);
    v4 = (volatile int32_t *)(v29 + 8);
    __sync_add_and_fetch((volatile int32_t *)(v29 + 8), 1u);
    v5 = *((uint32_t *)a2 + 1);
    v36 = 0;
    if ( v5 != 0 )
      v36 = *(uint32_t *)(v5 + 12);
    __sync_add_and_fetch(v4, 1u);
    v6 = *((uint32_t **)self + 4);
    if ( v6 == *((uint32_t **)self + 5) )
    {
      v8 = ((int)(uintptr_t)(v6) - *((uint32_t *)self + 3)) >> 2;
      v33 = 12;
      v9 = -1431655765 * v8;
      if ( -1431655765 * v8 != 0 )
      {
        v33 = 0xFFFFFFFC;
        v31 = 1431655766 * v8;
        if ( -1431655765 * v8 <= (unsigned int)(1431655766 * v8) )
        {
          v23 = 8 * v8;
          if ( v31 > 0x15555555 )
            v23 = -4;
          v33 = v23;
        }
      }
      v27 = v9;
      v35 = sub_4EBDC0(v33);
      v34 = (uint32_t *)(v35 + 12);
      v10 = (uint32_t *)(v35 + 12 * v27);
      if ( v10 != nullptr )
      {
        *v10 = v24;
        v10[1] = (uint32_t)(uintptr_t)(v4);
        __sync_add_and_fetch(v4, 1u);
        v10[2] = v36;
      }
      v11 = *((uint32_t **)self + 3);
      if ( v6 != v11 )
      {
        v12 = (uint32_t *)v35;
        do
        {
          if ( v12 != nullptr )
          {
            *v12 = *v11;
            v13 = (volatile int32_t *)v11[1];
            v12[1] = (uint32_t)(uintptr_t)(v13);
            if ( v13 != nullptr )
              __sync_add_and_fetch(v13, 1u);
            v12[2] = v11[2];
          }
          v11 += 3;
          v12 += 3;
        }
        while ( v6 != v11 );
        v34 = v12 + 3;
      }
      v14 = *((uint32_t **)self + 4);
      v15 = v34;
      v32 = v14;
      if ( v6 != v14 )
      {
        do
        {
          if ( v15 != nullptr )
          {
            *v15 = *v6;
            v16 = (volatile int32_t *)v6[1];
            v15[1] = (uint32_t)(uintptr_t)(v16);
            if ( v16 != nullptr )
              __sync_add_and_fetch(v16, 1u);
            v15[2] = v6[2];
          }
          v6 += 3;
          v15 += 3;
        }
        while ( v14 != v6 );
        v32 = *((uint32_t **)self + 4);
      }
      v17 = *((uint32_t *)self + 3);
      v30 = v17;
      if ( (uint32_t *)v17 != v32 )
      {
        v37 = v15;
        v18 = *((uint32_t **)self + 3);
        v19 = v17 + 4;
        v20 = v32;
        do
        {
          v21 = *(uint32_t *)((char *)v18 + v19 - v30);
          if ( v21 != 0 )
          {
            if ( __sync_fetch_and_add((volatile int32_t *)v21, 0xFFFFFFFF) == 1 )
            {
              v22 = *(void **)(v21 + 16);
              if ( v22 != nullptr )
              {
                v25 = v19;
                v28 = v20;
                opDeleteArray(v22);
                v20 = v28;
                v19 = v25;
              }
              *(uint32_t *)(v21 + 16) = 0;
            }
            *(uint32_t *)((char *)v18 + v19 - v30) = 0;
          }
          v18 += 3;
        }
        while ( v18 != v20 );
        v2 = self;
        v4 = (volatile int32_t *)(v29 + 8);
        v15 = v37;
        v30 = *((uint32_t *)self + 3);
      }
      if ( v30 != 0 )
      {
        v26 = v15;
        gll_operator_delete_arr(v30);
        v15 = v26;
      }
      *((uint32_t *)v2 + 4) = (uint32_t)(uintptr_t)(v15);
      *((uint32_t *)v2 + 3) = v35;
      *((uint32_t *)v2 + 5) = v35 + v33;
    }
    else
    {
      v7 = 0;
      if ( v6 != nullptr )
      {
        *v6 = v24;
        v6[1] = (uint32_t)(uintptr_t)(v4);
        __sync_add_and_fetch(v4, 1u);
        v6[2] = v36;
        v7 = *((uint32_t *)self + 4);
      }
      *((uint32_t *)self + 4) = v7 + 12;
    }
    if ( __sync_fetch_and_add(v4, 0xFFFFFFFF) == 1 )
    {
      if ( *(uint32_t *)(v29 + 24) != 0 )
        opDeleteArray(*(void **)(v29 + 24));
      *(uint32_t *)(v29 + 24) = 0;
    }
    if ( __sync_fetch_and_add(v4, 0xFFFFFFFF) == 1 )
    {
      if ( *(uint32_t *)(v29 + 24) != 0 )
        opDeleteArray(*(void **)(v29 + 24));
      *(uint32_t *)(v29 + 24) = 0;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationStreamingManager::registerAnimationBlock  (binary VA: 0xd56ce0)
// Original: glitch::collada::CAnimationStreamingManager::registerAnimationBlock
// ----------------------------------------------------------------------------
void glitch::collada::CAnimationStreamingManager::registerAnimationBlock(glitch::collada::CAnimationStreamingManager::Self *self, glitch::collada::CAnimationBlock::Self *a2)
{
  int v3;
  int v4;
  bool v5; // bp
  int i;
  char *v7;
  int v8;
  char *src;
  char *v10;
  int v11;
  int v12;
  unsigned int v13;
  glitch::collada::CAnimationStreamingManager::Self *v14;
  int v15;
  int v16;
  uint32_t *v17;
  char *v18;
  uint32_t *v19;
  char *v20;
  uint32_t *v21;
  unsigned int v22;
  glitch::collada::CAnimationBlock::Self *v23;
  int v24;
  int v25;
  char *v26;
  uint32_t *v27;
  unsigned int v28;
  unsigned int v29;
  char *v30;
  int v31;
  size_t v32;
  int v33;
  int v34;

  v30 = *((char **)self + 1);
  v34 = *(uint32_t *)self;
  v3 = (int)(uintptr_t)(&v30[-*(uint32_t *)self]) >> 2;
  v32 = v3;
  v26 = *(char **)self;
  if ( v3 <= 0 )
  {
LABEL_13:
    src = v26;
    v10 = v26;
  }
  else
  {
    while ( 1 )
    {
      v4 = *((uint32_t *)a2 + 1);
      v28 = *((uint32_t *)a2 + 6);
      v5 = v4 != 0;
      if ( v4 == 0 )
        break;
      while ( 1 )
      {
        i = v3 >> 1;
        v7 = &v26[4 * (v3 >> 1)];
        v8 = *(uint32_t *)v7;
        if ( *(uint32_t *)(*(uint32_t *)v7 + 4) == 0
          || v28 > *(uint32_t *)(v8 + 24)
          || v28 == *(uint32_t *)(v8 + 24) && **(uint32_t **)(v8 + 28) < **((uint32_t **)a2 + 7) )
        {
          break;
        }
        if ( i == 0 )
          goto LABEL_13;
        v3 >>= 1;
      }
LABEL_12:
      v3 = v3 - i - 1;
      v26 = v7 + 4;
      if ( v3 <= 0 )
        goto LABEL_13;
    }
    v24 = v3;
    v23 = a2;
    for ( i = v3; ; v24 = i )
    {
      i >>= 1;
      v7 = &v26[4 * i];
      v13 = *(uint32_t *)(*(uint32_t *)v7 + 24);
      if ( (*(uint32_t *)(*(uint32_t *)v7 + 4) == 0 || v5)
        && (v28 > v13 || v28 == v13 && **((uint32_t **)v23 + 7) > **(uint32_t **)(*(uint32_t *)v7 + 28)) )
      {
        v3 = v24;
        a2 = v23;
        goto LABEL_12;
      }
      if ( i == 0 )
        break;
    }
    src = v26;
    a2 = v23;
    v10 = v26;
  }
  if ( v30 != *((char **)self + 2) )
  {
    if ( v30 == src )
    {
      if ( v30 != nullptr )
      {
        v14 = self;
        *(uint32_t *)v30 = (uint32_t)(uintptr_t)(a2);
        v15 = *((uint32_t *)self + 1);
      }
      else
      {
        v15 = 0;
        v14 = self;
      }
      *((uint32_t *)v14 + 1) = v15 + 4;
    }
    else
    {
      v11 = 0;
      if ( v30 != nullptr )
      {
        *(uint32_t *)v30 = *((uint32_t *)v30 - 1);
        v11 = *((uint32_t *)self + 1);
      }
      *((uint32_t *)self + 1) = v11 + 4;
      v12 = (v11 - 4 - (int)(uintptr_t)(src)) >> 2;
      if ( v12 != 0 )
        memmove((void *)(v11 - 4 * v12), src, 4 * v12);
      *(uint32_t *)src = (uint32_t)(uintptr_t)(a2);
    }
    goto LABEL_21;
  }
  if ( v32 != 0 )
  {
    v22 = 2 * v32;
    if ( v32 > 2 * v32 || v22 > 0x3FFFFFFF )
    {
      v16 = (int)(uintptr_t)(&src[-v34]) >> 2;
      v33 = -1;
    }
    else
    {
      v33 = 2 * v32;
      v16 = (int)(uintptr_t)(&src[-v34]) >> 2;
      if ( v22 == 0 )
      {
        v29 = 4;
        v27 = nullptr;
        goto LABEL_35;
      }
    }
  }
  else
  {
    v16 = (int)(uintptr_t)(&src[-v34]) >> 2;
    v33 = 1;
  }
  v25 = v16;
  v27 = (uint32_t *)sub_4EBDC0(v33 * 4);
  v29 = (unsigned int)(uintptr_t)(v27 + 1);
  v16 = v25;
LABEL_35:
  v17 = &v27[v16];
  if ( v17 != nullptr )
    *v17 = (uint32_t)(uintptr_t)(a2);
  v18 = *(char **)self;
  v31 = *(uint32_t *)self;
  if ( src != *(char **)self )
  {
    v19 = v27;
    do
    {
      if ( v19 != nullptr )
        *v19 = *(uint32_t *)v18;
      v18 += 4;
      ++v19;
    }
    while ( src != v18 );
    v29 = (unsigned int)(uintptr_t)(&v27[((unsigned int)(uintptr_t)(&src[-v31 - 4]) >> 2) + 2]);
  }
  v20 = *((char **)self + 1);
  if ( src != v20 )
  {
    v21 = (uint32_t *)v29;
    do
    {
      if ( v21 != nullptr )
        *v21 = *(uint32_t *)src;
      src += 4;
      ++v21;
    }
    while ( v20 != src );
    v29 += 4 * ((unsigned int)(v20 - (v10 + 4)) >> 2) + 4;
  }
  if ( *(uint32_t *)self != 0 )
    gll_operator_delete_arr(*(uint32_t *)self);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v27);
  *((uint32_t *)self + 1) = v29;
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&v27[v33]);
LABEL_21:
  glitch::collada::CAnimationBlock::grab(a2);
  if ( *(uint32_t *)(*((uint32_t *)a2 + 7) + 8) == 1 )
    glitch::collada::CAnimationStreamingManager::cache(self, a2);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationBlock::Construct  (binary VA: 0xd57050)
// Original: glitch::collada::CAnimationBlock::CAnimationBlock
// ----------------------------------------------------------------------------
volatile int32_t * glitch::collada::CAnimationBlock::Construct(glitch::collada::CAnimationBlock::Self *a1, uint32_t *a2, int a3, int a4)
{
  glitch::collada::CAnimationBlock::Self *v4;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  bool v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  void *v15;
  volatile int32_t *result;
  int v17;
  int v18;
  uint32_t *v19;
  unsigned int v20;
  uint32_t *v21;
  unsigned int v22;
  int v23;
  unsigned int v24;
  __m128i *v25;
  unsigned int v26;
  uint32_t *v27;
  int v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef uint32_t *_g4_t_v37;
  typedef uint32_t *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef const boost::intrusive_ptr<glitch::io::IReadFile> *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef uint32_t *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef uint32_t *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef uint32_t *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef uint32_t *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef unsigned int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef unsigned int _g4_t_v57;
  typedef unsigned int _g4_t_v58;
  typedef uint32_t *_g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef volatile int32_t *_g4_t_v65;
  typedef uint32_t _g4_t_v66[5];
  typedef int _g4_t_v67;
  typedef char *_g4_t_v68;
  typedef uint32_t *_g4_t_v69;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v29)) > _g4_s0 ? (0u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v30)) > _g4_s1 ? (4u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v31)) > _g4_s2 ? (8u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v32)) > _g4_s3 ? (12u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v33)) > _g4_s4 ? (16u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v34)) > _g4_s5 ? (20u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v35)) > _g4_s6 ? (20u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v36)) > _g4_s7 ? (24u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v37)) > _g4_s8 ? (24u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v38)) > _g4_s9 ? (24u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v39)) > _g4_s10 ? (28u + sizeof(_g4_t_v39)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v40)) > _g4_s11 ? (28u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v41)) > _g4_s12 ? (28u + sizeof(_g4_t_v41)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v42)) > _g4_s13 ? (32u + sizeof(_g4_t_v42)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v43)) > _g4_s14 ? (32u + sizeof(_g4_t_v43)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v44)) > _g4_s15 ? (36u + sizeof(_g4_t_v44)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v45)) > _g4_s16 ? (36u + sizeof(_g4_t_v45)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v46)) > _g4_s17 ? (40u + sizeof(_g4_t_v46)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_v47)) > _g4_s18 ? (40u + sizeof(_g4_t_v47)) : _g4_s18,
    _g4_s20 = (44u + sizeof(_g4_t_v48)) > _g4_s19 ? (44u + sizeof(_g4_t_v48)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_v49)) > _g4_s20 ? (48u + sizeof(_g4_t_v49)) : _g4_s20,
    _g4_s22 = (48u + sizeof(_g4_t_v50)) > _g4_s21 ? (48u + sizeof(_g4_t_v50)) : _g4_s21,
    _g4_s23 = (52u + sizeof(_g4_t_v51)) > _g4_s22 ? (52u + sizeof(_g4_t_v51)) : _g4_s22,
    _g4_s24 = (52u + sizeof(_g4_t_v52)) > _g4_s23 ? (52u + sizeof(_g4_t_v52)) : _g4_s23,
    _g4_s25 = (56u + sizeof(_g4_t_v53)) > _g4_s24 ? (56u + sizeof(_g4_t_v53)) : _g4_s24,
    _g4_s26 = (56u + sizeof(_g4_t_v54)) > _g4_s25 ? (56u + sizeof(_g4_t_v54)) : _g4_s25,
    _g4_s27 = (60u + sizeof(_g4_t_v55)) > _g4_s26 ? (60u + sizeof(_g4_t_v55)) : _g4_s26,
    _g4_s28 = (60u + sizeof(_g4_t_v56)) > _g4_s27 ? (60u + sizeof(_g4_t_v56)) : _g4_s27,
    _g4_s29 = (64u + sizeof(_g4_t_v57)) > _g4_s28 ? (64u + sizeof(_g4_t_v57)) : _g4_s28,
    _g4_s30 = (64u + sizeof(_g4_t_v58)) > _g4_s29 ? (64u + sizeof(_g4_t_v58)) : _g4_s29,
    _g4_s31 = (64u + sizeof(_g4_t_v59)) > _g4_s30 ? (64u + sizeof(_g4_t_v59)) : _g4_s30,
    _g4_s32 = (68u + sizeof(_g4_t_v60)) > _g4_s31 ? (68u + sizeof(_g4_t_v60)) : _g4_s31,
    _g4_s33 = (72u + sizeof(_g4_t_v61)) > _g4_s32 ? (72u + sizeof(_g4_t_v61)) : _g4_s32,
    _g4_s34 = (76u + sizeof(_g4_t_v62)) > _g4_s33 ? (76u + sizeof(_g4_t_v62)) : _g4_s33,
    _g4_s35 = (80u + sizeof(_g4_t_v63)) > _g4_s34 ? (80u + sizeof(_g4_t_v63)) : _g4_s34,
    _g4_s36 = (84u + sizeof(_g4_t_v64)) > _g4_s35 ? (84u + sizeof(_g4_t_v64)) : _g4_s35,
    _g4_s37 = (88u + sizeof(_g4_t_v65)) > _g4_s36 ? (88u + sizeof(_g4_t_v65)) : _g4_s36,
    _g4_s38 = (92u + sizeof(_g4_t_v66)) > _g4_s37 ? (92u + sizeof(_g4_t_v66)) : _g4_s37,
    _g4_s39 = (112u + sizeof(_g4_t_v67)) > _g4_s38 ? (112u + sizeof(_g4_t_v67)) : _g4_s38,
    _g4_s40 = (116u + sizeof(_g4_t_v68)) > _g4_s39 ? (116u + sizeof(_g4_t_v68)) : _g4_s39,
    _g4_s41 = (120u + sizeof(_g4_t_v69)) > _g4_s40 ? (120u + sizeof(_g4_t_v69)) : _g4_s40
  };
  alignas(16) uint8_t _g4_sf[_g4_s41];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 0u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 4u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 8u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 16u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 20u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 24u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 24u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 28u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 28u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 32u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 32u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 36u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 36u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 40u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 40u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 44u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 48u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 48u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 52u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 52u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 56u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 56u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 60u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 60u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 64u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 64u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 64u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 68u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 72u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 76u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 80u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 84u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 88u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 92u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 112u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 116u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 120u);

  v66[4] = (uint32_t)(uintptr_t)(&a1);
  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  *(uint32_t *)a1 = 0;
  v8 = *v5;
  v9 = *v5 == 0;
  *((uint32_t *)v4 + 1) = *v5;
  if ( !v9 )
  {
    v36 = v6;
    v39 = v7;
    sub_8B1B00((volatile int32_t *)(v8 + 4));
    v7 = v39;
    v6 = v36;
  }
  v10 = v5[1];
  *((uint32_t *)v4 + 6) = v6;
  *((uint32_t *)v4 + 2) = v10;
  *((uint32_t *)v4 + 7) = v7;
  *((uint32_t *)v4 + 3) = 0;
  *((uint32_t *)v4 + 4) = 0;
  *((uint32_t *)v4 + 5) = 0;
  *((uint32_t *)v4 + 8) = 0;
  *((uint32_t *)v4 + 9) = 0;
  *((uint32_t *)v4 + 10) = 0;
  glitch::collada::CAnimationStreamingManager::registerAnimationBlock(
    (glitch::collada::CAnimationStreamingManager::Self *)glitch::collada::CAnimationStreamingManager::Instance,
    v4);
  v11 = **(uint32_t **)(*(uint32_t *)(glitch::collada::CResFileManager::Inst + 32) + 32);
  (*(void (**)(volatile int32_t **, uint32_t, uint32_t, int, int, int, int, int, int, int, volatile int32_t **, int, int, int, int, int, int, int, int, int, int, int, int, int, int))(v11 + 12))(
    &v65,
    *(uint32_t *)(*(uint32_t *)(glitch::collada::CResFileManager::Inst + 32) + 32),
    **(uint32_t **)(*(uint32_t *)(*(uint32_t *)(*v5 + 16) + 32) + 4),
    v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v36,
    &v65,
    v42,
    v44,
    v46,
    v48,
    v49,
    v51,
    v53,
    v55,
    v11,
    v60,
    v61,
    v62,
    v63,
    v64);
  glitch::collada::COnDemandReader::Construct((glitch::collada::COnDemandReader::Self *)v66, v40);
  v12 = *((uint32_t *)v4 + 7);
  v13 = *(uint32_t *)(v12 + 8);
  if ( v13 == 0 )
  {
    v35 = v12 + 8;
    __sync_add_and_fetch((volatile int32_t *)(v12 + 8), 1u);
    if ( *(uint32_t *)(v12 + 24) != 0 )
      goto LABEL_5;
    v37 = (uint32_t *)v12;
    v17 = *(int *)(v12 + 20) >> 2;
    v67 = 0;
    v57 = v17;
    v18 = opNewArray(4 * v17);
    v52 = (uint32_t *)v18;
    v19 = v37;
    v56 = v57 - 1;
    if ( v57 == 0 )
      goto LABEL_38;
    v20 = -((uint8_t)(v18 & 0xF) >> 2) & 3;
    if ( v57 <= v20 )
      v20 = v57;
    v54 = v20;
    if ( v20 != 0 )
    {
      v21 = v52;
      v22 = 0;
      v43 = v5;
      do
      {
        *v21 = 0;
        v23 = v57 - 2 - v22++;
        ++v21;
      }
      while ( v54 > v22 );
      v24 = v54;
      v50 = v21;
      v56 = v23;
      v19 = v37;
      v5 = v43;
      if ( v57 == v54 )
      {
LABEL_38:
        v19[6] = (uint32_t)(uintptr_t)(v52);
        v69 = v52;
        v68 = (char *)(v19[4] + 4 * v19[3]);
        v67 = v19[5];
        v38 = v19;
        (*(void (**)(uint32_t *))(v66[0] + 8))(v66);
        if ( (int)v38[3] > 0 )
          sub_D40A10(v38, (int)(uintptr_t)(v66), v67, v68);
        goto LABEL_5;
      }
    }
    else
    {
      v50 = v52;
      v24 = 0;
    }
    v58 = v57 - v24;
    v47 = 4 * (v58 >> 2);
    if ( v47 == 0 )
      goto LABEL_35;
    v45 = v19;
    v25 = (__m128i *)&v52[v24];
    v26 = 0;
    do
    {
      ++v26;
      *v25++ = g4_m128_from<__m128i>(0LL);
    }
    while ( v26 < v58 >> 2 );
    v56 -= v47;
    v19 = v45;
    v50 += 4 * (v58 >> 2);
    if ( v58 != v47 )
    {
LABEL_35:
      v59 = v19;
      v27 = v50;
      v28 = v56;
      do
      {
        --v28;
        *v27++ = 0;
      }
      while ( v28 != -1 );
      v19 = v59;
    }
    goto LABEL_38;
  }
  if ( v13 == 1 && *(uint32_t *)(v12 + 16) == 0 && *(uint32_t *)(v12 + 20) == 0 )
  {
    *(uint32_t *)(v12 + 20) = 1;
    *(uint32_t *)(v12 + 24) += v12 + 24;
  }
  v35 = v12 + 8;
  __sync_add_and_fetch((volatile int32_t *)(v12 + 8), 1u);
LABEL_5:
  __sync_add_and_fetch((volatile int32_t *)v35, 1u);
  v14 = *((uint32_t *)v4 + 8);
  if ( v14 != 0 && __sync_fetch_and_add((volatile int32_t *)v14, 0xFFFFFFFF) == 1 )
  {
    v15 = *(void **)(v14 + 16);
    if ( v15 != nullptr )
    {
      v41 = v14;
      opDeleteArray(v15);
      v14 = v41;
    }
    *(uint32_t *)(v14 + 16) = 0;
  }
  *((uint32_t *)v4 + 8) = v35;
  if ( __sync_fetch_and_add((volatile int32_t *)v35, 0xFFFFFFFF) == 1 )
  {
    if ( *(uint32_t *)(v35 + 16) != 0 )
      opDeleteArray(*(void **)(v35 + 16));
    *(uint32_t *)(v35 + 16) = 0;
  }
  if ( *((uint32_t *)v4 + 6) == 0 )
    *((uint32_t *)v4 + 6) = *(uint32_t *)(*(uint32_t *)(*v5 + 16) + 32) + 24;
  glitch::collada::COnDemandReader::Destroy((glitch::collada::COnDemandReader::Self *)v66);
  result = v65;
  if ( v65 != nullptr )
    return (volatile int32_t *)sub_5459C0(v65);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationBlock::Construct  (binary VA: 0xd573d0)
// Original: glitch::collada::CAnimationBlock::CAnimationBlock
// ----------------------------------------------------------------------------
int glitch::collada::CAnimationBlock::Construct(glitch::collada::CAnimationBlock::Self *a1, glitch::collada::CColladaDatabase::Self *a2, int a3, int a4)
{
  glitch::collada::CAnimationBlock::Self *v4;
  glitch::collada::CColladaDatabase::Self *v5;
  int v6;
  int v7;
  int v8;
  bool v9;
  int v10;
  int AnimationSegment;
  int v12;
  int v13;
  int v14;
  void *v15;
  int result;
  int v17;
  volatile int32_t *v18;
  int v19;
  int v20;
  int v21;
  void *v22;
  volatile int32_t *v23;
  int v24;
  uint32_t *v25;
  unsigned int v26;
  uint32_t *v27;
  unsigned int v28;
  int v29;
  __m128i *v30;
  unsigned int v31;
  uint32_t *v32;
  int v33;
  int v34;
  uint32_t *v35;
  unsigned int v36;
  unsigned int v37;
  uint32_t *v38;
  int v39;
  unsigned int v40;
  unsigned int v41;
  __m128i *v42;
  uint32_t *v43;
  int v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef char *_g4_t_v47;
  typedef char *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef uint32_t *_g4_t_v52;
  typedef uint32_t *_g4_t_v53;
  typedef uint32_t *_g4_t_v54;
  typedef uint32_t *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef volatile int32_t *_g4_t_v58;
  typedef int _g4_t_v59;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v60;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v61;
  typedef uint32_t *_g4_t_v62;
  typedef uint32_t *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef uint32_t *_g4_t_v66;
  typedef uint32_t *_g4_t_v67;
  typedef uint32_t *_g4_t_v68;
  typedef uint32_t *_g4_t_v69;
  typedef unsigned int _g4_t_v70;
  typedef unsigned int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef unsigned int _g4_t_v74;
  typedef unsigned int _g4_t_v75;
  typedef uint32_t *_g4_t_v76;
  typedef unsigned int _g4_t_v77;
  typedef unsigned int _g4_t_v78;
  typedef uint32_t *_g4_t_v79;
  typedef volatile int32_t *_g4_t_v80;
  typedef volatile int32_t *_g4_t_v81;
  typedef volatile int32_t *_g4_t_v82;
  typedef uint32_t _g4_t_v83[8];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v45)) > _g4_s0 ? (8u + sizeof(_g4_t_v45)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v46)) > _g4_s1 ? (8u + sizeof(_g4_t_v46)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v47)) > _g4_s2 ? (12u + sizeof(_g4_t_v47)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v48)) > _g4_s3 ? (12u + sizeof(_g4_t_v48)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v49)) > _g4_s4 ? (32u + sizeof(_g4_t_v49)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v50)) > _g4_s5 ? (32u + sizeof(_g4_t_v50)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v51)) > _g4_s6 ? (36u + sizeof(_g4_t_v51)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v52)) > _g4_s7 ? (36u + sizeof(_g4_t_v52)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v53)) > _g4_s8 ? (36u + sizeof(_g4_t_v53)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v54)) > _g4_s9 ? (36u + sizeof(_g4_t_v54)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v55)) > _g4_s10 ? (36u + sizeof(_g4_t_v55)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v56)) > _g4_s11 ? (40u + sizeof(_g4_t_v56)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v57)) > _g4_s12 ? (40u + sizeof(_g4_t_v57)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v58)) > _g4_s13 ? (40u + sizeof(_g4_t_v58)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v59)) > _g4_s14 ? (40u + sizeof(_g4_t_v59)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v60)) > _g4_s15 ? (44u + sizeof(_g4_t_v60)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v61)) > _g4_s16 ? (44u + sizeof(_g4_t_v61)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v62)) > _g4_s17 ? (48u + sizeof(_g4_t_v62)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v63)) > _g4_s18 ? (48u + sizeof(_g4_t_v63)) : _g4_s18,
    _g4_s20 = (52u + sizeof(_g4_t_v64)) > _g4_s19 ? (52u + sizeof(_g4_t_v64)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_v65)) > _g4_s20 ? (56u + sizeof(_g4_t_v65)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v66)) > _g4_s21 ? (60u + sizeof(_g4_t_v66)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v67)) > _g4_s22 ? (60u + sizeof(_g4_t_v67)) : _g4_s22,
    _g4_s24 = (64u + sizeof(_g4_t_v68)) > _g4_s23 ? (64u + sizeof(_g4_t_v68)) : _g4_s23,
    _g4_s25 = (64u + sizeof(_g4_t_v69)) > _g4_s24 ? (64u + sizeof(_g4_t_v69)) : _g4_s24,
    _g4_s26 = (68u + sizeof(_g4_t_v70)) > _g4_s25 ? (68u + sizeof(_g4_t_v70)) : _g4_s25,
    _g4_s27 = (68u + sizeof(_g4_t_v71)) > _g4_s26 ? (68u + sizeof(_g4_t_v71)) : _g4_s26,
    _g4_s28 = (72u + sizeof(_g4_t_v72)) > _g4_s27 ? (72u + sizeof(_g4_t_v72)) : _g4_s27,
    _g4_s29 = (72u + sizeof(_g4_t_v73)) > _g4_s28 ? (72u + sizeof(_g4_t_v73)) : _g4_s28,
    _g4_s30 = (76u + sizeof(_g4_t_v74)) > _g4_s29 ? (76u + sizeof(_g4_t_v74)) : _g4_s29,
    _g4_s31 = (76u + sizeof(_g4_t_v75)) > _g4_s30 ? (76u + sizeof(_g4_t_v75)) : _g4_s30,
    _g4_s32 = (76u + sizeof(_g4_t_v76)) > _g4_s31 ? (76u + sizeof(_g4_t_v76)) : _g4_s31,
    _g4_s33 = (76u + sizeof(_g4_t_v77)) > _g4_s32 ? (76u + sizeof(_g4_t_v77)) : _g4_s32,
    _g4_s34 = (76u + sizeof(_g4_t_v78)) > _g4_s33 ? (76u + sizeof(_g4_t_v78)) : _g4_s33,
    _g4_s35 = (76u + sizeof(_g4_t_v79)) > _g4_s34 ? (76u + sizeof(_g4_t_v79)) : _g4_s34,
    _g4_s36 = (100u + sizeof(_g4_t_v80)) > _g4_s35 ? (100u + sizeof(_g4_t_v80)) : _g4_s35,
    _g4_s37 = (116u + sizeof(_g4_t_v81)) > _g4_s36 ? (116u + sizeof(_g4_t_v81)) : _g4_s36,
    _g4_s38 = (120u + sizeof(_g4_t_v82)) > _g4_s37 ? (120u + sizeof(_g4_t_v82)) : _g4_s37,
    _g4_s39 = (124u + sizeof(_g4_t_v83)) > _g4_s38 ? (124u + sizeof(_g4_t_v83)) : _g4_s38
  };
  alignas(16) uint8_t _g4_sf[_g4_s39];
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 8u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 8u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 12u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 12u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 32u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 32u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 36u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 36u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 36u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 36u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 36u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 40u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 40u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 40u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 40u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 44u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 44u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 48u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 48u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 52u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 56u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 60u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 60u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 64u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 64u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 68u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 68u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 72u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 72u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 76u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 76u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 76u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 76u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 76u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 76u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 100u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 116u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 120u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 124u);

  v83[4] = (uint32_t)(uintptr_t)(&a1);
  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  *(uint32_t *)a1 = 0;
  v8 = *(uint32_t *)v5;
  v9 = *(uint32_t *)v5 == 0;
  *((uint32_t *)v4 + 1) = *(uint32_t *)v5;
  if ( !v9 )
  {
    v51 = v6;
    v56 = v7;
    sub_8B1B00((volatile int32_t *)(v8 + 4));
    v7 = v56;
    v6 = v51;
  }
  v10 = *((uint32_t *)v5 + 1);
  *((uint32_t *)v4 + 3) = 0;
  *((uint32_t *)v4 + 2) = v10;
  *((uint32_t *)v4 + 4) = 0;
  *((uint32_t *)v4 + 5) = 0;
  *((uint32_t *)v4 + 6) = v6;
  *((uint32_t *)v4 + 8) = 0;
  *((uint32_t *)v4 + 9) = 0;
  *((uint32_t *)v4 + 10) = 0;
  AnimationSegment = glitch::collada::CColladaDatabase::getAnimationSegment(v5, v7);
  *((uint32_t *)v4 + 7) = AnimationSegment;
  if ( *(int *)(AnimationSegment + 8) > 0 )
  {
    v82 = nullptr;
    glitch::collada::COnDemandReader::Construct(
      (glitch::collada::COnDemandReader::Self *)v83,
      (const boost::intrusive_ptr<glitch::io::IReadFile> *)&v82);
    if ( v82 != nullptr )
      sub_5459C0(v82);
    v12 = *((uint32_t *)v4 + 7);
    v13 = *(uint32_t *)(v12 + 8);
    if ( v13 != 0 )
    {
      if ( v13 == 1 && *(uint32_t *)(v12 + 16) == 0 && *(uint32_t *)(v12 + 20) == 0 )
      {
        *(uint32_t *)(v12 + 20) = 1;
        *(uint32_t *)(v12 + 24) += v12 + 24;
      }
      v49 = v12 + 8;
      __sync_add_and_fetch((volatile int32_t *)(v12 + 8), 1u);
      goto LABEL_8;
    }
    v49 = v12 + 8;
    __sync_add_and_fetch((volatile int32_t *)(v12 + 8), 1u);
    if ( *(uint32_t *)(v12 + 24) != 0 )
    {
LABEL_8:
      __sync_add_and_fetch((volatile int32_t *)v49, 1u);
      v14 = *((uint32_t *)v4 + 8);
      if ( v14 != 0 && __sync_fetch_and_add((volatile int32_t *)v14, 0xFFFFFFFF) == 1 )
      {
        v15 = *(void **)(v14 + 16);
        if ( v15 != nullptr )
        {
          v57 = v14;
          opDeleteArray(v15);
          v14 = v57;
        }
        *(uint32_t *)(v14 + 16) = 0;
      }
      *((uint32_t *)v4 + 8) = v49;
      if ( __sync_fetch_and_add((volatile int32_t *)v49, 0xFFFFFFFF) == 1 )
      {
        if ( *(uint32_t *)(v49 + 16) != 0 )
          opDeleteArray(*(void **)(v49 + 16));
        *(uint32_t *)(v49 + 16) = 0;
      }
      glitch::collada::COnDemandReader::Destroy((glitch::collada::COnDemandReader::Self *)v83);
      goto LABEL_18;
    }
    v52 = (uint32_t *)v12;
    v74 = *(int *)(v12 + 20) >> 2;
    v24 = opNewArray(4 * v74);
    v68 = (uint32_t *)v24;
    v25 = v52;
    v72 = v74 - 1;
    if ( v74 != 0 )
    {
      v26 = -((uint8_t)(v24 & 0xF) >> 2) & 3;
      if ( v26 > v74 )
        v26 = v74;
      v70 = v26;
      if ( v26 == 0 )
      {
        v66 = v68;
        goto LABEL_58;
      }
      v27 = v68;
      v28 = 0;
      v60 = v5;
      do
      {
        *v27 = 0;
        v29 = v74 - 2 - v28++;
        ++v27;
      }
      while ( v70 > v28 );
      v66 = v27;
      v72 = v29;
      v25 = v52;
      v5 = v60;
      if ( v70 != v74 )
      {
LABEL_58:
        v75 = v74 - v70;
        v64 = 4 * (v75 >> 2);
        if ( v64 == 0 )
          goto LABEL_62;
        v62 = v25;
        v30 = (__m128i *)&v68[v70];
        v31 = 0;
        do
        {
          ++v31;
          *v30++ = g4_m128_from<__m128i>(0LL);
        }
        while ( v31 < v75 >> 2 );
        v72 -= v64;
        v25 = v62;
        v66 += 4 * (v75 >> 2);
        if ( v75 != v64 )
        {
LABEL_62:
          v76 = v25;
          v32 = v66;
          v33 = v72;
          do
          {
            --v33;
            *v32++ = 0;
          }
          while ( v33 != -1 );
          v25 = v76;
        }
      }
    }
    v25[6] = (uint32_t)(uintptr_t)(v68);
    v47 = (char *)(v25[4] + 4 * v25[3]);
    v45 = v25[5];
    v53 = v25;
    (*(void (**)(uint32_t *))(v83[0] + 8))(v83);
    if ( (int)v53[3] > 0 )
      sub_D40A10(v53, (int)(uintptr_t)(v83), v45, v47);
    goto LABEL_8;
  }
  v17 = *(uint32_t *)v5;
  v80 = nullptr;
  if ( *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(v17 + 16) + 32) + 4) != 0 )
  {
    (*(void (**)(volatile int32_t **))(**(uint32_t **)(*(uint32_t *)(glitch::collada::CResFileManager::Inst
                                                                                + 32)
                                                                    + 32)
                                                      + 12))(&v81);
    v18 = v81;
    if ( v81 != nullptr )
    {
      v58 = v81;
      sub_8B1B00(v81 + 1);
      v18 = v58;
    }
    v80 = v18;
    if ( v81 != nullptr )
      sub_5459C0(v81);
  }
  glitch::collada::COnDemandReader::Construct(
    (glitch::collada::COnDemandReader::Self *)v83,
    (const boost::intrusive_ptr<glitch::io::IReadFile> *)&v80);
  v19 = *((uint32_t *)v4 + 7);
  v20 = *(uint32_t *)(v19 + 8);
  if ( v20 != 0 )
  {
    if ( v20 == 1 && *(uint32_t *)(v19 + 16) == 0 && *(uint32_t *)(v19 + 20) == 0 )
    {
      *(uint32_t *)(v19 + 20) = 1;
      *(uint32_t *)(v19 + 24) += v19 + 24;
    }
    v50 = v19 + 8;
    __sync_add_and_fetch((volatile int32_t *)(v19 + 8), 1u);
    goto LABEL_30;
  }
  v50 = v19 + 8;
  __sync_add_and_fetch((volatile int32_t *)(v19 + 8), 1u);
  if ( *(uint32_t *)(v19 + 24) == 0 )
  {
    v54 = (uint32_t *)v19;
    v77 = *(int *)(v19 + 20) >> 2;
    v34 = opNewArray(4 * v77);
    v69 = (uint32_t *)v34;
    v35 = v54;
    v73 = v77 - 1;
    if ( v77 != 0 )
    {
      v36 = -((uint8_t)(v34 & 0xF) >> 2) & 3;
      if ( v77 <= v36 )
        v36 = v77;
      v71 = v36;
      v67 = v69;
      if ( v36 == 0 )
      {
        v40 = 0;
        goto LABEL_74;
      }
      v37 = 0;
      v38 = v69;
      v61 = v5;
      do
      {
        *v38 = 0;
        v39 = v77 - 2 - v37++;
        ++v38;
      }
      while ( v37 < v71 );
      v40 = v71;
      v73 = v39;
      v67 = v38;
      v35 = v54;
      v5 = v61;
      if ( v77 != v71 )
      {
LABEL_74:
        v78 = v77 - v40;
        v65 = 4 * (v78 >> 2);
        if ( v65 == 0 )
          goto LABEL_78;
        v63 = v35;
        v41 = 0;
        v42 = (__m128i *)&v69[v40];
        do
        {
          ++v41;
          *v42++ = g4_m128_from<__m128i>(0LL);
        }
        while ( v78 >> 2 > v41 );
        v73 -= v65;
        v35 = v63;
        v67 += 4 * (v78 >> 2);
        if ( v65 != v78 )
        {
LABEL_78:
          v79 = v35;
          v43 = v67;
          v44 = v73;
          do
          {
            --v44;
            *v43++ = 0;
          }
          while ( v44 != -1 );
          v35 = v79;
        }
      }
    }
    v35[6] = (uint32_t)(uintptr_t)(v69);
    v48 = (char *)(v35[4] + 4 * v35[3]);
    v46 = v35[5];
    v55 = v35;
    (*(void (**)(uint32_t *))(v83[0] + 8))(v83);
    if ( (int)v55[3] > 0 )
      sub_D40A10(v55, (int)(uintptr_t)(v83), v46, v48);
  }
LABEL_30:
  __sync_add_and_fetch((volatile int32_t *)v50, 1u);
  v21 = *((uint32_t *)v4 + 8);
  if ( v21 != 0 && __sync_fetch_and_add((volatile int32_t *)v21, 0xFFFFFFFF) == 1 )
  {
    v22 = *(void **)(v21 + 16);
    if ( v22 != nullptr )
    {
      v59 = v21;
      opDeleteArray(v22);
      v21 = v59;
    }
    *(uint32_t *)(v21 + 16) = 0;
  }
  *((uint32_t *)v4 + 8) = v50;
  if ( __sync_fetch_and_add((volatile int32_t *)v50, 0xFFFFFFFF) == 1 )
  {
    if ( *(uint32_t *)(v50 + 16) != 0 )
      opDeleteArray(*(void **)(v50 + 16));
    *(uint32_t *)(v50 + 16) = 0;
  }
  v23 = v80;
  v80 = nullptr;
  if ( v23 != nullptr )
    sub_5459C0(v23);
  glitch::collada::COnDemandReader::Destroy((glitch::collada::COnDemandReader::Self *)v83);
  if ( v80 != nullptr )
    sub_5459C0(v80);
LABEL_18:
  glitch::collada::CAnimationStreamingManager::registerAnimationBlock(
    (glitch::collada::CAnimationStreamingManager::Self *)glitch::collada::CAnimationStreamingManager::Instance,
    v4);
  result = *((uint32_t *)v4 + 6);
  if ( result == 0 )
  {
    result = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)v5 + 16) + 32) + 24;
    *((uint32_t *)v4 + 6) = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationStreamingManager::getAnimationBlock  (binary VA: 0xd57a80)
// Original: glitch::collada::CAnimationStreamingManager::getAnimationBlock
// ----------------------------------------------------------------------------
glitch::collada::CAnimationBlock::Self * glitch::collada::CAnimationStreamingManager::getAnimationBlock(int a1, int **a2)
{
  glitch::collada::CAnimationBlock::Self *v2;
  pthread_t v3;
  int v4;
  glitch::collada::CAnimationBlock::Self **v5;
  int i;
  int v7;
  int v8;
  glitch::collada::CAnimationBlock::Self **v9;
  glitch::collada::CAnimationBlock::Self *j;
  unsigned int v13;
  int *v14;
  uint32_t *v15;
  int *v16;
  unsigned int v17;
  bool v18;
  glitch::collada::CAnimationBlock::Self **v19;

  v2 = nullptr;
  if ( *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(**a2 + 16) + 32) + 40) != 0 )
  {
    v3 = pthread_self();
    if ( v3 == *(uint32_t *)(a1 + 32) )
    {
      ++*(uint32_t *)(a1 + 36);
      v4 = a1;
    }
    else
    {
      glf::SpinLock::Lock((volatile int32_t **)(a1 + 40));
      v4 = a1;
      *(uint32_t *)(a1 + 32) = v3;
      *(uint32_t *)(a1 + 36) = 1;
    }
    v19 = *(glitch::collada::CAnimationBlock::Self ***)(v4 + 4);
    v5 = *(glitch::collada::CAnimationBlock::Self ***)a1;
    for ( i = ((int)(uintptr_t)(v19) - *(uint32_t *)a1) >> 2; i > 0; v5 = v9 + 1 )
    {
      v17 = (unsigned int)(uintptr_t)(a2[1]);
      v7 = **a2;
      v18 = v7 != 0;
      if ( v7 != 0 )
      {
        v8 = i >> 1;
        v9 = &v5[i >> 1];
        for ( j = *v9; *((uint32_t *)*v9 + 1) != 0; j = *v9 )
        {
          if ( *((uint32_t *)j + 6) < v17 || *((uint32_t *)j + 6) == v17 && *(uint32_t *)(*((uint32_t *)j + 7) + 4) < (int)(uintptr_t)(a2[2]) )
            break;
          if ( v8 == 0 )
            goto LABEL_12;
          i = v8;
          v8 >>= 1;
          v9 = &v5[v8];
        }
      }
      else
      {
        while ( 1 )
        {
          v8 = i >> 1;
          v9 = &v5[i >> 1];
          v13 = *((uint32_t *)*v9 + 6);
          if ( (*((uint32_t *)*v9 + 1) == 0 || v18)
            && (v13 < v17 || v13 == v17 && *(uint32_t *)(*((uint32_t *)*v9 + 7) + 4) < (int)(uintptr_t)(a2[2])) )
          {
            break;
          }
          if ( v8 == 0 )
            goto LABEL_12;
          i >>= 1;
        }
      }
      i = i - v8 - 1;
    }
LABEL_12:
    if ( v19 == v5
      || (v2 = *v5, (**a2 != 0) != (*((uint32_t *)v2 + 1) != 0))
      || (v14 = a2[1]) != *((int **)v2 + 6)
      || ((v15 = *((uint32_t **)v2 + 7), v16 = a2[2], *v15 > (int)(uintptr_t)(v16)) || (int)(uintptr_t)(v16) > v15[1])
      && (v14 == nullptr || (int)(uintptr_t)(v16) >= v14[1] && (int)(uintptr_t)(v16) <= v14[2]) )
    {
      v2 = (glitch::collada::CAnimationBlock::Self *)opNew(0x2Cu);
      glitch::collada::CAnimationBlock::Construct(
        v2,
        (glitch::collada::CColladaDatabase::Self *)*a2,
        (int)(uintptr_t)(a2[1]),
        (int)(uintptr_t)(a2[2]));
    }
    if ( (*(uint32_t *)(a1 + 36))-- == 1 )
    {
      *(uint32_t *)(a1 + 32) = 0;
      glf::SpinLock::Unlock((glf::SpinLock::Self *)(a1 + 40));
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationBlock::prepareNextBlock  (binary VA: 0xd57cb0)
// Original: glitch::collada::CAnimationBlock::prepareNextBlock
// ----------------------------------------------------------------------------
glitch::collada::CAnimationBlock::Self * glitch::collada::CAnimationBlock::prepareNextBlock(glitch::collada::CAnimationBlock::Self *self)
{
  glitch::collada::CAnimationBlock::Self *result;
  int *v2;
  uint32_t *v3;
  int v4;
  int *v5;
  int *v6;
  int *v7[3];

  result = *((glitch::collada::CAnimationBlock::Self **)self + 6);
  v2 = *((int **)result + 2);
  if ( result != nullptr )
  {
    v3 = *((uint32_t **)self + 7);
    v4 = v3[1];
    if ( (int)(uintptr_t)(v2) <= v4 )
    {
      if ( *v3 <= *((uint32_t *)result + 1) )
        *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(self);
      return result;
    }
  }
  else
  {
    v4 = *(uint32_t *)(*((uint32_t *)self + 7) + 4);
  }
  v7[1] = *((int **)self + 6);
  v5 = (int *)(v4 + 1);
  v6 = *((int **)result + 1);
  v7[0] = (int *)((char *)self + 4);
  if ( (int)(uintptr_t)(v5) < (int)(uintptr_t)(v6) )
    v5 = v6;
  if ( (int)(uintptr_t)(v5) <= (int)(uintptr_t)(v2) )
    v2 = v5;
  v7[2] = v2;
  result = glitch::collada::CAnimationStreamingManager::getAnimationBlock(
             glitch::collada::CAnimationStreamingManager::Instance,
             v7);
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(result);
  *((uint32_t *)result + 10) = (uint32_t)(uintptr_t)(self);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationBlock::grab  (binary VA: 0xd57d50)
// Original: glitch::collada::CAnimationBlock::grab
// ----------------------------------------------------------------------------
glitch::collada::CAnimationBlock::Self * glitch::collada::CAnimationBlock::grab(glitch::collada::CAnimationBlock::Self *self)
{
  glitch::collada::CAnimationBlock::Self *result;

  result = self;
  __sync_add_and_fetch((volatile int32_t *)self, 1u);
  if ( *(uint32_t *)self == 2 && *((uint32_t *)self + 9) == 0 )
    return glitch::collada::CAnimationBlock::prepareNextBlock(self);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationStreamingManager::unregisterAnimationBlock  (binary VA: 0xd57d90)
// Original: glitch::collada::CAnimationStreamingManager::unregisterAnimationBlock
// ----------------------------------------------------------------------------
int glitch::collada::CAnimationStreamingManager::unregisterAnimationBlock(glitch::collada::CAnimationStreamingManager::Self *self, glitch::collada::CAnimationBlock::Self *a2)
{
  int i;
  int v3;
  int v4;
  char *v5;
  int v6;
  unsigned int v7;
  char *v8;
  char *dest;
  unsigned int v11;
  bool v12;
  char *v13;

  v13 = *((char **)self + 1);
  dest = *(char **)self;
  for ( i = (int)(uintptr_t)(&v13[-*(uint32_t *)self]) >> 2; i > 0; dest = v5 + 4 )
  {
    v3 = *((uint32_t *)a2 + 1);
    v11 = *((uint32_t *)a2 + 6);
    v12 = v3 != 0;
    if ( v3 != 0 )
    {
      while ( 1 )
      {
        v4 = i >> 1;
        v5 = &dest[4 * (i >> 1)];
        v6 = *(uint32_t *)v5;
        if ( *(uint32_t *)(*(uint32_t *)v5 + 4) == 0
          || v11 > *(uint32_t *)(v6 + 24)
          || v11 == *(uint32_t *)(v6 + 24) && **(uint32_t **)(v6 + 28) < **((uint32_t **)a2 + 7) )
        {
          break;
        }
        if ( v4 == 0 )
          goto LABEL_14;
        i >>= 1;
      }
    }
    else
    {
      while ( 1 )
      {
        v4 = i >> 1;
        v5 = &dest[4 * (i >> 1)];
        v7 = *(uint32_t *)(*(uint32_t *)v5 + 24);
        if ( (*(uint32_t *)(*(uint32_t *)v5 + 4) == 0 || v12)
          && (v11 > v7 || v11 == v7 && **(uint32_t **)(*(uint32_t *)v5 + 28) < **((uint32_t **)a2 + 7)) )
        {
          break;
        }
        if ( v4 == 0 )
          goto LABEL_14;
        i >>= 1;
      }
    }
    i = i - v4 - 1;
  }
LABEL_14:
  v8 = dest + 4;
  if ( v13 != dest + 4 && (v13 - v8) >> 2 != 0 )
  {
    memmove(dest, dest + 4, 4 * ((v13 - v8) >> 2));
    v13 = *((char **)self + 1);
  }
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(v13 - 4);
  return (int)(uintptr_t)(glitch::collada::CAnimationBlock::drop(a2));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationBlock::free  (binary VA: 0xd57ef0)
// Original: glitch::collada::CAnimationBlock::free
// ----------------------------------------------------------------------------
void glitch::collada::CAnimationBlock::free(glitch::collada::CAnimationBlock::Self *self)
{
  glitch::collada::CAnimationStreamingManager::unregisterAnimationBlock(
    (glitch::collada::CAnimationStreamingManager::Self *)glitch::collada::CAnimationStreamingManager::Instance,
    self);
  if ( self != nullptr )
  {
    glitch::collada::CAnimationBlock::Destroy(self);
    opDelete(self);
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationBlock::drop  (binary VA: 0xd57f40)
// Original: glitch::collada::CAnimationBlock::drop
// ----------------------------------------------------------------------------
uint32_t * glitch::collada::CAnimationBlock::drop(glitch::collada::CAnimationBlock::Self *self)
{
  int v1;
  pthread_t v2;
  uint32_t *result;
  bool v4;
  uint32_t *v5;
  uint32_t *v6;

  v1 = glitch::collada::CAnimationStreamingManager::Instance;
  v2 = pthread_self();
  if ( v2 == *(uint32_t *)(v1 + 32) )
  {
    ++*(uint32_t *)(v1 + 36);
  }
  else
  {
    glf::SpinLock::Lock((volatile int32_t **)(v1 + 40));
    *(uint32_t *)(v1 + 32) = v2;
    *(uint32_t *)(v1 + 36) = 1;
  }
  __sync_sub_and_fetch((volatile int32_t *)self, 1u);
  if ( *(uint32_t *)self == 1 )
  {
    v5 = *((uint32_t **)self + 10);
    if ( v5 == nullptr || *v5 == 1 )
    {
      glitch::collada::CAnimationBlock::free(self);
    }
    else
    {
      v6 = *((uint32_t **)self + 9);
      if ( v6 != nullptr && *v6 == 1 )
        glitch::collada::CAnimationBlock::free(*((glitch::collada::CAnimationBlock::Self **)self + 9));
    }
  }
  result = (uint32_t *)(*(uint32_t *)(v1 + 36) - 1);
  v4 = *(uint32_t *)(v1 + 36) == 1;
  *(uint32_t *)(v1 + 36) = (uint32_t)(uintptr_t)(result);
  if ( v4 )
  {
    *(uint32_t *)(v1 + 32) = 0;
    return glf::SpinLock::Unlock((glf::SpinLock::Self *)(v1 + 40));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationStreamingManager::getAnimationBlock  (binary VA: 0xd58010)
// Original: glitch::collada::CAnimationStreamingManager::getAnimationBlock
// ----------------------------------------------------------------------------
uint32_t * glitch::collada::CAnimationStreamingManager::getAnimationBlock(int a1, int a2, glitch::collada::CAnimationBlock::Self **a3)
{
  glitch::collada::CAnimationBlock::Self *v3;
  pthread_t v4;
  glitch::collada::CAnimationBlock::Self *Block;
  glitch::collada::CAnimationBlock::Self *v6;
  bool v7;
  uint32_t *result;
  int v9;
  uint32_t *v10;
  pthread_t v11;
  glitch::collada::CAnimationBlock::Self *AnimationBlock;
  glitch::collada::CAnimationBlock::Self *v13;
  glitch::collada::CAnimationBlock::Self *v14;
  pthread_t v15;
  glitch::collada::CAnimationBlock::Self *v16;
  pthread_t v17;

  v3 = *a3;
  if ( *a3 == nullptr )
    goto LABEL_20;
  if ( (*((uint32_t *)v3 + 1) != 0) != (**(uint32_t **)a2 != 0)
    || (v9 = *(uint32_t *)(a2 + 4)) != *((uint32_t *)v3 + 6)
    || ((v10 = *((uint32_t **)v3 + 7), result = *(uint32_t **)(a2 + 8), *v10 > (int)(uintptr_t)(result)) || (int)(uintptr_t)(result) > v10[1])
    && (v9 == 0 || (int)(uintptr_t)(result) >= *(uint32_t *)(v9 + 4) && (int)(uintptr_t)(result) <= *(uint32_t *)(v9 + 8)) )
  {
    v4 = pthread_self();
    if ( v4 == *(uint32_t *)(a1 + 32) )
    {
      ++*(uint32_t *)(a1 + 36);
    }
    else
    {
      v15 = v4;
      glf::SpinLock::Lock((volatile int32_t **)(a1 + 40));
      *(uint32_t *)(a1 + 36) = 1;
      *(uint32_t *)(a1 + 32) = v15;
    }
    Block = (glitch::collada::CAnimationBlock::Self *)glitch::collada::CAnimationBlock::getBlock((uint32_t *)(*a3), a2);
    if ( Block != nullptr )
    {
      v16 = Block;
      glitch::collada::CAnimationBlock::grab(Block);
      v6 = *a3;
      v7 = *a3 == nullptr;
      *a3 = v16;
      if ( !v7 )
        glitch::collada::CAnimationBlock::drop(v6);
LABEL_8:
      result = (uint32_t *)(*(uint32_t *)(a1 + 36) - 1);
      v7 = *(uint32_t *)(a1 + 36) == 1;
      *(uint32_t *)(a1 + 36) = (uint32_t)(uintptr_t)(result);
      if ( v7 )
      {
        *(uint32_t *)(a1 + 32) = 0;
        return glf::SpinLock::Unlock((glf::SpinLock::Self *)(a1 + 40));
      }
      return result;
    }
    v7 = (*(uint32_t *)(a1 + 36))-- == 1;
    if ( v7 )
    {
      *(uint32_t *)(a1 + 32) = 0;
      glf::SpinLock::Unlock((glf::SpinLock::Self *)(a1 + 40));
    }
LABEL_20:
    v11 = pthread_self();
    if ( v11 == *(uint32_t *)(a1 + 32) )
    {
      ++*(uint32_t *)(a1 + 36);
    }
    else
    {
      v17 = v11;
      glf::SpinLock::Lock((volatile int32_t **)(a1 + 40));
      *(uint32_t *)(a1 + 36) = 1;
      *(uint32_t *)(a1 + 32) = v17;
    }
    AnimationBlock = glitch::collada::CAnimationStreamingManager::getAnimationBlock(a1, (int **)a2);
    v13 = AnimationBlock;
    if ( AnimationBlock != nullptr )
    {
      glitch::collada::CAnimationBlock::grab(AnimationBlock);
      v14 = *a3;
      *a3 = v13;
      if ( v14 != nullptr )
        glitch::collada::CAnimationBlock::drop(v14);
    }
    goto LABEL_8;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationBlock::Destroy  (binary VA: 0xd581d0)
// Original: glitch::collada::CAnimationBlock::~CAnimationBlock
// ----------------------------------------------------------------------------
void glitch::collada::CAnimationBlock::Destroy(glitch::collada::CAnimationBlock::Self *self)
{
  glitch::collada::CAnimationBlock::Self *v1;
  glitch::collada::CAnimationBlock::Self *v2;
  int v3;

  v1 = *((glitch::collada::CAnimationBlock::Self **)self + 9);
  if ( v1 != nullptr && self != v1 )
  {
    *((uint32_t *)v1 + 10) = 0;
    if ( **((uint32_t **)self + 9) == 1 )
      glitch::collada::CAnimationBlock::free(*((glitch::collada::CAnimationBlock::Self **)self + 9));
  }
  v2 = *((glitch::collada::CAnimationBlock::Self **)self + 10);
  if ( v2 != nullptr && self != v2 )
    *((uint32_t *)v2 + 9) = 0;
  v3 = *((uint32_t *)self + 8);
  if ( v3 != 0 )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)v3, 0xFFFFFFFF) == 1 )
    {
      if ( *(uint32_t *)(v3 + 16) != 0 )
        opDeleteArray(*(void **)(v3 + 16));
      *(uint32_t *)(v3 + 16) = 0;
    }
    *((uint32_t *)self + 8) = 0;
  }
  glitch::collada::CColladaDatabase::Destroy((glitch::collada::CAnimationBlock::Self *)((char *)self + 4));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationTrackHandlers::setCallback  (binary VA: 0xd58280)
// Original: glitch::collada::CAnimationTrackHandlers::setCallback
// ----------------------------------------------------------------------------
void glitch::collada::CAnimationTrackHandlers::setCallback()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationTrackHandlers::setCallback_ead58290  (binary VA: 0xd58290)
// Original: glitch::collada::CAnimationTrackHandlers::setCallback
// ----------------------------------------------------------------------------
void glitch::collada::CAnimationTrackHandlers::setCallback_ead58290()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationTrackHandlers::setCallback_ead582a0  (binary VA: 0xd582a0)
// Original: glitch::collada::CAnimationTrackHandlers::setCallback
// ----------------------------------------------------------------------------
void glitch::collada::CAnimationTrackHandlers::setCallback_ead582a0()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationTrackHandlers::setCallback_ead582b0  (binary VA: 0xd582b0)
// Original: glitch::collada::CAnimationTrackHandlers::setCallback
// ----------------------------------------------------------------------------
void glitch::collada::CAnimationTrackHandlers::setCallback_ead582b0()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationTrackHandlers::setType  (binary VA: 0xd582c0)
// Original: glitch::collada::CAnimationTrackHandlers::setType
// ----------------------------------------------------------------------------
void glitch::collada::CAnimationTrackHandlers::setType()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationTrackHandlers::setType_ead582d0  (binary VA: 0xd582d0)
// Original: glitch::collada::CAnimationTrackHandlers::setType
// ----------------------------------------------------------------------------
void glitch::collada::CAnimationTrackHandlers::setType_ead582d0()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationTrackHandlers::setType_ead582e0  (binary VA: 0xd582e0)
// Original: glitch::collada::CAnimationTrackHandlers::setType
// ----------------------------------------------------------------------------
void glitch::collada::CAnimationTrackHandlers::setType_ead582e0()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationTrackHandlers::setType_ead582f0  (binary VA: 0xd582f0)
// Original: glitch::collada::CAnimationTrackHandlers::setType
// ----------------------------------------------------------------------------
void glitch::collada::CAnimationTrackHandlers::setType_ead582f0()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationTrackHandlers::setTrack  (binary VA: 0xd58300)
// Original: glitch::collada::CAnimationTrackHandlers::setTrack
// ----------------------------------------------------------------------------
void glitch::collada::CAnimationTrackHandlers::setTrack()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationTrackHandlers::setTrack_ead58310  (binary VA: 0xd58310)
// Original: glitch::collada::CAnimationTrackHandlers::setTrack
// ----------------------------------------------------------------------------
void glitch::collada::CAnimationTrackHandlers::setTrack_ead58310()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationTrackHandlers::setTrack  (binary VA: 0xd58320)
// Original: glitch::collada::CAnimationTrackHandlers::setTrack
// ----------------------------------------------------------------------------
uint32_t * glitch::collada::CAnimationTrackHandlers::setTrack(int a1, int a2, int a3, char a4)
{
  char v4;
  glitch::collada::CAnimationFilterBase::Self *v6;

  *(uint32_t *)(*(uint32_t *)(a1 + 60) + 4 * a2) = a3;
  if ( a3 != 0 && *(uint8_t *)(*(uint32_t *)(a1 + 48) + a2) != 0 )
  {
    glitch::collada::CAnimationFilterBase::enableAnimation(*(glitch::collada::CAnimationFilterBase::Self **)(a1 + 80), a2);
    v4 = a4;
  }
  else
  {
    glitch::collada::CAnimationFilterBase::disableAnimation(*(glitch::collada::CAnimationFilterBase::Self **)(a1 + 80), a2);
    v4 = a4;
  }
  *(uint8_t *)(*(uint32_t *)(a1 + 48) + a2) = v4;
  v6 = *(glitch::collada::CAnimationFilterBase::Self **)(a1 + 80);
  if ( *(uint32_t *)(*(uint32_t *)(a1 + 60) + 4 * a2) != 0 && v4 != 0 )
    return glitch::collada::CAnimationFilterBase::enableAnimation(v6, a2);
  else
    return (uint32_t *)glitch::collada::CAnimationFilterBase::disableAnimation(v6, a2);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationTrackHandlers::setTrack  (binary VA: 0xd583e0)
// Original: glitch::collada::CAnimationTrackHandlers::setTrack
// ----------------------------------------------------------------------------
uint32_t * glitch::collada::CAnimationTrackHandlers::setTrack(int a1, int a2, char a3)
{
  int v3;
  int i;
  uint32_t *result;
  int v6;

  v3 = (*(uint32_t *)(a1 + 64) - *(uint32_t *)(a1 + 60)) >> 2;
  if ( v3 > 0 )
  {
    for ( i = 0; i != v3; ++i )
    {
      v6 = i;
      result = glitch::collada::CAnimationTrackHandlers::setTrack(a1, v6, a2, a3);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationTrackHandlers::setTrack  (binary VA: 0xd58440)
// Original: glitch::collada::CAnimationTrackHandlers::setTrack
// ----------------------------------------------------------------------------
uint32_t * glitch::collada::CAnimationTrackHandlers::setTrack(int a1, int a2, int a3, int a4, char a5)
{
  int v5;
  int v6;
  int v7;
  uint32_t *result;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  volatile int32_t *v14;
  int v15;
  int v16;
  bool v17;

  v5 = 0;
  v6 = *(uint32_t *)(a1 + 76);
  if ( v6 != 0 )
  {
    v7 = *(uint32_t *)(v6 + 8);
    if ( v7 != 0 )
      v5 = v7 - 8;
  }
  result = *(uint32_t **)(v5 + 52);
  v16 = result[1] - *result;
  if ( v16 > 0 )
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = 0;
      if ( v6 != 0 )
      {
        v11 = *(uint32_t *)(v6 + 8);
        if ( v11 != 0 )
          v10 = v11 - 8;
      }
      result = *(uint32_t **)(v10 + 60);
      if ( a2 != result[v9] )
        goto LABEL_6;
      v12 = 0;
      if ( v6 != 0 )
      {
        v13 = *(uint32_t *)(v6 + 8);
        if ( v13 != 0 )
          v12 = v13 - 8;
      }
      v14 = *(volatile int32_t **)(v12 + 36);
      if ( v14 != nullptr )
      {
        sub_8B1B00(v14 + 1);
        v17 = *(uint32_t *)(G4_VCALL<int>(v14, 16, v9) + 4) == a3;
        result = (uint32_t *)sub_5459C0(v14);
      }
      else
      {
        result = (uint32_t *)G4_MEM_CALL(0x464C458F, 0, v9);
        v17 = result[1] == a3;
      }
      if ( v17 )
      {
        v15 = v9++;
        result = glitch::collada::CAnimationTrackHandlers::setTrack(a1, v15, a4, a5);
        if ( v9 == v16 )
          return result;
      }
      else
      {
LABEL_6:
        if ( ++v9 == v16 )
          return result;
      }
      v6 = *(uint32_t *)(a1 + 76);
    }
  }
  return result;
}



// ============================================================================
// Address:   0xd58560 (size: 67 bytes)
// Symbol:    _ZN6glitch7collada29CAnimationTrackHandlersCookieC2Ev
// Demangled: glitch::collada::CAnimationTrackHandlersCookie::CAnimationTrackHandlersCookie(void)
// ============================================================================
// Alternative name is '_ZN6glitch7collada29CAnimationTrackHandlersCookieC1Ev'
glitch::collada::CAnimationTrackHandlersCookie::Self *glitch::collada::CAnimationTrackHandlersCookie::Construct(
        glitch::collada::CAnimationTrackHandlersCookie::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationTrackHandlersCookie::cleanup  (binary VA: 0xd585b0)
// Original: glitch::collada::CAnimationTrackHandlersCookie::cleanup
// ----------------------------------------------------------------------------
int glitch::collada::CAnimationTrackHandlersCookie::cleanup(glitch::collada::CAnimationTrackHandlersCookie::Self *self)
{
  int v1;
  int v2;
  int v3;
  void *v4;
  int v5;
  int result;

  v1 = *((uint32_t *)self + 3);
  v2 = (*((uint32_t *)self + 4) - v1) >> 2;
  if ( v2 > 0 )
  {
    v3 = 0;
    while ( 1 )
    {
      v4 = *(void **)(v1 + 4 * v3);
      if ( v4 != nullptr )
        opDeleteArray(v4);
      if ( ++v3 == v2 )
        break;
      v1 = *((uint32_t *)self + 3);
    }
  }
  v5 = *((uint32_t *)self + 6);
  if ( (unsigned int)(*((uint32_t *)self + 7) - v5) >> 2 != 0 )
    *((uint32_t *)self + 7) = v5;
  result = *((uint32_t *)self + 2);
  *(uint32_t *)self = result;
  *((uint32_t *)self + 1) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationTrackHandlersCookie::Destroy  (binary VA: 0xd58620)
// Original: glitch::collada::CAnimationTrackHandlersCookie::~CAnimationTrackHandlersCookie
// ----------------------------------------------------------------------------
void glitch::collada::CAnimationTrackHandlersCookie::Destroy(void **self)
{
  glitch::collada::CAnimationTrackHandlersCookie::cleanup((glitch::collada::CAnimationTrackHandlersCookie::Self *)self);
  if ( *(self + 6) != nullptr )
    opDelete(*(self + 6));
  if ( *(self + 3) != nullptr )
    opDelete(*(self + 3));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationTrackHandlersCookie::getHandlerBuffer  (binary VA: 0xd58670)
// Original: glitch::collada::CAnimationTrackHandlersCookie::getHandlerBuffer
// ----------------------------------------------------------------------------
int glitch::collada::CAnimationTrackHandlersCookie::getHandlerBuffer(glitch::collada::CAnimationTrackHandlersCookie::Self *self, unsigned int a2)
{
  int result;

  result = 0;
  if ( *(uint32_t *)self <= a2 && a2 < *((uint32_t *)self + 2) )
    return *(uint32_t *)(*((uint32_t *)self + 3) + 4 * (a2 - *(uint32_t *)self));
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationTrackHandlersCookie::createHandlerBuffer  (binary VA: 0xd58690)
// Original: glitch::collada::CAnimationTrackHandlersCookie::createHandlerBuffer
// ----------------------------------------------------------------------------
int glitch::collada::CAnimationTrackHandlersCookie::createHandlerBuffer(glitch::collada::CAnimationTrackHandlersCookie::Self *self, unsigned int *a2)
{
  unsigned int v2;
  int v3;
  bool v4;
  uint32_t *v5;
  int v6;
  int v7;
  int v9;
  int *v10;
  int v11;
  int v12[4];

  v2 = *((uint32_t *)self + 2);
  *a2 = v2;
  v3 = *((uint32_t *)self + 7);
  v4 = v3 == *((uint32_t *)self + 6);
  *((uint32_t *)self + 2) = v2 + 1;
  if ( !v4 )
  {
    v5 = *((uint32_t **)self + 4);
    if ( v5 == *((uint32_t **)self + 5) )
    {
      sub_D42080((int)(uintptr_t)(self) + 12, (uint32_t *)(v3 - 4));
      v7 = *((uint32_t *)self + 4);
      v3 = *((uint32_t *)self + 7);
    }
    else
    {
      v6 = 0;
      if ( v5 != nullptr )
      {
        *v5 = *(uint32_t *)(v3 - 4);
        v6 = *((uint32_t *)self + 4);
        v3 = *((uint32_t *)self + 7);
      }
      v7 = v6 + 4;
      *((uint32_t *)self + 4) = v7;
    }
    *((uint32_t *)self + 7) = v3 - 4;
    return *(uint32_t *)(v7 - 4);
  }
  v9 = opNewArray(*((uint32_t *)self + 9));
  v10 = *((int **)self + 4);
  v4 = v10 == *((int **)self + 5);
  v12[0] = v9;
  if ( v4 )
  {
    sub_D42080((int)(uintptr_t)(self) + 12, v12);
    v7 = *((uint32_t *)self + 4);
    return *(uint32_t *)(v7 - 4);
  }
  v11 = 0;
  if ( v10 != nullptr )
  {
    *v10 = v9;
    v11 = *((uint32_t *)self + 4);
  }
  *((uint32_t *)self + 4) = v11 + 4;
  return *(uint32_t *)v11;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationTrackHandlersCookie::releaseHandlerBuffer  (binary VA: 0xd58760)
// Original: glitch::collada::CAnimationTrackHandlersCookie::releaseHandlerBuffer
// ----------------------------------------------------------------------------
void glitch::collada::CAnimationTrackHandlersCookie::releaseHandlerBuffer(glitch::collada::CAnimationTrackHandlersCookie::Self *self, unsigned int a2)
{
  uint32_t *v2;
  uint32_t *v3;
  int v4;

  v2 = (uint32_t *)(*((uint32_t *)self + 3) + 4 * (a2 - *(uint32_t *)self));
  v3 = *((uint32_t **)self + 7);
  if ( v3 == *((uint32_t **)self + 8) )
  {
    sub_D42080((int)(uintptr_t)(self) + 24, v2);
  }
  else
  {
    v4 = 0;
    if ( v3 != nullptr )
    {
      *v3 = *v2;
      v4 = *((uint32_t *)self + 7);
    }
    *((uint32_t *)self + 7) = v4 + 4;
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationTrackHandlersCookie::onPostAnimate  (binary VA: 0xd587a0)
// Original: glitch::collada::CAnimationTrackHandlersCookie::onPostAnimate
// ----------------------------------------------------------------------------
char * glitch::collada::CAnimationTrackHandlersCookie::onPostAnimate(glitch::collada::CAnimationTrackHandlersCookie::Self *self)
{
  char *result;
  unsigned int i;
  int v3;
  char *v4;
  int v5;
  char *v6;
  int v7;
  unsigned int v8;
  char *v9;
  uint8_t *src;
  int v11;
  int v12;
  char *v13;
  int v14;
  int v15;
  char *v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  int v22;
  unsigned int v23;
  int v24;
  char *v25;
  int v26;
  int v27;
  char *v28;
  unsigned int v29;
  unsigned int v30;
  int v31;
  char *dest;

  v29 = *((uint32_t *)self + 1);
  result = *((char **)self + 3);
  if ( v29 != 0 )
  {
    for ( i = 0; i < v29; ++i )
    {
      v4 = &result[4 * i];
      v5 = *(uint32_t *)v4;
      if ( *(uint32_t *)v4 != 0 )
      {
        v6 = *((char **)self + 7);
        if ( v6 == *((char **)self + 8) )
        {
          v7 = (int)(uintptr_t)(&v6[-*((uint32_t *)self + 6)]) >> 2;
          v24 = 4;
          v30 = v7;
          if ( v7 != 0 )
          {
            v8 = 2 * v7;
            if ( v30 > v8 || v8 > 0x3FFFFFFF )
              v24 = -4;
            else
              v24 = 8 * v30;
          }
          v25 = v4;
          dest = (char *)opNew(v24);
          v9 = &dest[4 * v30];
          if ( v9 != nullptr )
            *(uint32_t *)v9 = *(uint32_t *)v25;
          src = *((uint8_t **)self + 6);
          v11 = 0;
          v12 = (v6 - (char *)(src)) >> 2;
          if ( v12 != 0 )
          {
            v27 = 4 * v12;
            memmove(dest, src, 4 * v12);
            v11 = v27;
          }
          v13 = &dest[v11 + 4];
          v14 = 0;
          v15 = (*((uint32_t *)self + 7) - (int)(uintptr_t)(v6)) >> 2;
          if ( v15 != 0 )
          {
            v26 = 4 * v15;
            v28 = v13;
            memmove(v13, v6, 4 * v15);
            v13 = v28;
            v14 = v26;
          }
          v16 = &v13[v14];
          if ( *((uint32_t *)self + 6) != 0 )
            opDelete(*((void **)self + 6));
          v17 = *((uint32_t *)self + 1);
          *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(dest);
          *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(v16);
          *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(&dest[v24]);
          v29 = v17;
          result = *((char **)self + 3);
        }
        else
        {
          v3 = 0;
          if ( v6 != nullptr )
          {
            *(uint32_t *)v6 = v5;
            v3 = *((uint32_t *)self + 7);
            v29 = *((uint32_t *)self + 1);
            result = *((char **)self + 3);
          }
          *((uint32_t *)self + 7) = v3 + 4;
        }
      }
    }
    v18 = v29;
  }
  else
  {
    v18 = 0;
  }
  v19 = *((uint32_t *)self + 2);
  v20 = v19;
  if ( v19 > v29 )
  {
    v21 = v29;
    v22 = 0;
    while ( 1 )
    {
      ++v21;
      *(uint32_t *)&result[v22] = *(uint32_t *)&result[4 * v29 + v22];
      v19 = *((uint32_t *)self + 2);
      v22 += 4;
      if ( v19 <= v21 )
        break;
      result = *((char **)self + 3);
    }
    v18 = *((uint32_t *)self + 1);
    result = *((char **)self + 3);
    v20 = *((uint32_t *)self + 2);
  }
  v31 = v19 - v18;
  v23 = (*((uint32_t *)self + 4) - (int)(uintptr_t)(result)) >> 2;
  if ( v19 - v18 > v23 )
  {
    result = sub_D42470((char *)self + 12, v31);
    v18 = *((uint32_t *)self + 1);
    v20 = *((uint32_t *)self + 2);
LABEL_29:
    *(uint32_t *)self = v18;
    *((uint32_t *)self + 1) = v20;
    return result;
  }
  if ( v19 - v18 >= v23 )
    goto LABEL_29;
  *(uint32_t *)self = v18;
  result += 4 * v31;
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(result);
  *((uint32_t *)self + 1) = v19;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationTrackHandlersCookie::invalidate  (binary VA: 0xd589e0)
// Original: glitch::collada::CAnimationTrackHandlersCookie::invalidate
// ----------------------------------------------------------------------------
int glitch::collada::CAnimationTrackHandlersCookie::invalidate(glitch::collada::CAnimationTrackHandlersCookie::Self *self)
{
  return glitch::collada::CAnimationTrackHandlersCookie::cleanup(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationTrackWeights::getApplyFilter  (binary VA: 0xd58a10)
// Original: glitch::collada::CAnimationTrackWeights::getApplyFilter
// ----------------------------------------------------------------------------
char * glitch::collada::CAnimationTrackWeights::getApplyFilter(glitch::collada::CAnimationTrackWeights::Self *self, int a2)
{
  char *result;

  result = (char *)self + 28;
  if ( a2 != 0 )
    return (char *)self + 32;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationTrackWeights::getBlendingFilter  (binary VA: 0xd58a30)
// Original: glitch::collada::CAnimationTrackWeights::getBlendingFilter
// ----------------------------------------------------------------------------
char * glitch::collada::CAnimationTrackWeights::getBlendingFilter(glitch::collada::CAnimationTrackWeights::Self *self)
{
  return (char *)self + 24;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationTrackWeights::setFilters  (binary VA: 0xd58a40)
// Original: glitch::collada::CAnimationTrackWeights::setFilters
// ----------------------------------------------------------------------------
uint32_t * glitch::collada::CAnimationTrackWeights::setFilters(glitch::collada::CAnimationTrackWeights::Self *self, int a2, float a3)
{
  glitch::collada::CAnimationFilterBase::Self *v4;

  v4 = *((glitch::collada::CAnimationFilterBase::Self **)self + 7);
  if ( a3 == 1.0 )
  {
    glitch::collada::CAnimationFilterBase::enableAnimation(v4, a2);
    glitch::collada::CAnimationFilterBase::disableAnimation(*((glitch::collada::CAnimationFilterBase::Self **)self + 8), a2);
    return (uint32_t *)glitch::collada::CAnimationFilterBase::disableAnimation(
                       *((glitch::collada::CAnimationFilterBase::Self **)self + 6),
                       a2);
  }
  else if ( a3 == 0.0 )
  {
    glitch::collada::CAnimationFilterBase::disableAnimation(v4, a2);
    glitch::collada::CAnimationFilterBase::enableAnimation(*((glitch::collada::CAnimationFilterBase::Self **)self + 8), a2);
    return (uint32_t *)glitch::collada::CAnimationFilterBase::disableAnimation(
                       *((glitch::collada::CAnimationFilterBase::Self **)self + 6),
                       a2);
  }
  else
  {
    glitch::collada::CAnimationFilterBase::disableAnimation(v4, a2);
    glitch::collada::CAnimationFilterBase::disableAnimation(*((glitch::collada::CAnimationFilterBase::Self **)self + 8), a2);
    return glitch::collada::CAnimationFilterBase::enableAnimation(
             *((glitch::collada::CAnimationFilterBase::Self **)self + 6),
             a2);
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationTrackWeights::setWeight  (binary VA: 0xd58b10)
// Original: glitch::collada::CAnimationTrackWeights::setWeight
// ----------------------------------------------------------------------------
int glitch::collada::CAnimationTrackWeights::setWeight(glitch::collada::CAnimationTrackWeights::Self *self, int a2, float a3)
{
  int result;

  glitch::collada::CAnimationTrackWeights::setFilters(self, a2, a3);
  result = *((uint32_t *)self + 2);
  *(float *)(result + 4 * a2) = a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationTrackWeights::setWeight  (binary VA: 0xd58b70)
// Original: glitch::collada::CAnimationTrackWeights::setWeight
// ----------------------------------------------------------------------------
uint32_t * glitch::collada::CAnimationTrackWeights::setWeight(glitch::collada::CAnimationTrackWeights::Self *self, void *a2, float a3)
{
  int v3;
  int v4;
  int v5;
  uint32_t *result;
  int v7;
  int v8;
  int v9;
  int v10;

  v3 = 0;
  v4 = *((uint32_t *)self + 5);
  if ( v4 != 0 )
  {
    v5 = *(uint32_t *)(v4 + 8);
    if ( v5 != 0 )
      v3 = v5 - 8;
  }
  result = *(uint32_t **)(v3 + 52);
  v7 = result[1] - *result;
  if ( v7 > 0 )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = 0;
      if ( v4 != 0 )
      {
        v10 = *(uint32_t *)(v4 + 8);
        if ( v10 != 0 )
          v9 = v10 - 8;
      }
      result = *(uint32_t **)(v9 + 60);
      if ( a2 == (void *)result[v8] )
      {
        glitch::collada::CAnimationTrackWeights::setFilters(self, v8, a3);
        result = *((uint32_t **)self + 2);
        *(float *)&result[v8] = a3;
      }
      if ( ++v8 == v7 )
        break;
      v4 = *((uint32_t *)self + 5);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationTrackWeights::setWeight  (binary VA: 0xd58c10)
// Original: glitch::collada::CAnimationTrackWeights::setWeight
// ----------------------------------------------------------------------------
uint32_t * glitch::collada::CAnimationTrackWeights::setWeight(glitch::collada::CAnimationTrackWeights::Self *a1, int a2, int a3, float a4)
{
  int v4;
  int v5;
  int v6;
  uint32_t *result;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  volatile int32_t *v16;
  int v17;
  bool v18;

  v4 = 0;
  v5 = *((uint32_t *)a1 + 5);
  if ( v5 != 0 )
  {
    v6 = *(uint32_t *)(v5 + 8);
    if ( v6 != 0 )
      v4 = v6 - 8;
  }
  result = *(uint32_t **)(v4 + 52);
  v17 = result[1] - *result;
  if ( v17 > 0 )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = 0;
      if ( v5 != 0 )
      {
        v10 = *(uint32_t *)(v5 + 8);
        if ( v10 != 0 )
          v9 = v10 - 8;
      }
      result = *(uint32_t **)(v9 + 60);
      v11 = v8;
      if ( a2 != result[v8] )
        goto LABEL_6;
      v12 = 0;
      if ( v5 != 0 )
      {
        v13 = *(uint32_t *)(v5 + 8);
        if ( v13 != 0 )
          v12 = v13 - 8;
      }
      v14 = *(uint32_t *)(v12 + 36);
      if ( v14 != 0 )
      {
        v16 = *(volatile int32_t **)(v12 + 36);
        sub_8B1B00((volatile int32_t *)(v14 + 4));
        v18 = *(uint32_t *)(G4_VCALL<int>(v16, 16, v8) + 4) == a3;
        result = (uint32_t *)sub_5459C0(v16);
      }
      else
      {
        result = (uint32_t *)G4_MEM_CALL(0x464C458F, 0, v8);
        v18 = result[1] == a3;
      }
      if ( v18 )
      {
        v15 = v8++;
        glitch::collada::CAnimationTrackWeights::setFilters(a1, v15, a4);
        result = *((uint32_t **)a1 + 2);
        *(float *)&result[v11] = a4;
        if ( v8 == v17 )
          return result;
      }
      else
      {
LABEL_6:
        if ( ++v8 == v17 )
          return result;
      }
      v5 = *((uint32_t *)a1 + 5);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationTrackWeights::setWeight  (binary VA: 0xd58d50)
// Original: glitch::collada::CAnimationTrackWeights::setWeight
// ----------------------------------------------------------------------------
uint32_t * glitch::collada::CAnimationTrackWeights::setWeight(glitch::collada::CAnimationTrackWeights::Self *a1, uint32_t *a2, float a3)
{
  int v3;
  int v4;
  int v5;
  uint32_t *result;
  int v7;
  int v8;
  int v9;
  volatile int32_t *v10;
  uint32_t *v11;
  int v12;

  v3 = *((uint32_t *)a1 + 5);
  v4 = 0;
  if ( v3 != 0 )
  {
    v5 = *(uint32_t *)(v3 + 8);
    if ( v5 != 0 )
      v4 = v5 - 8;
  }
  result = *(uint32_t **)(v4 + 52);
  if ( result[1] - *result > 0 )
  {
    v12 = result[1] - *result;
    v7 = 0;
    while ( 1 )
    {
      v8 = 0;
      if ( v3 != 0 )
      {
        v9 = *(uint32_t *)(v3 + 8);
        if ( v9 != 0 )
          v8 = v9 - 8;
      }
      v10 = *(volatile int32_t **)(v8 + 36);
      if ( v10 != nullptr )
        sub_8B1B00(v10 + 1);
      v11 = *(uint32_t **)(G4_VCALL<int>(v10, 16, v7) + 4);
      sub_5459C0(v10);
      result = a2;
      if ( v11 == a2 )
      {
        glitch::collada::CAnimationTrackWeights::setFilters(a1, v7, a3);
        result = *((uint32_t **)a1 + 2);
        *(float *)&result[v7++] = a3;
        if ( v7 == v12 )
          return result;
      }
      else if ( ++v7 == v12 )
      {
        return result;
      }
      v3 = *((uint32_t *)a1 + 5);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationTrackWeights::setWeight  (binary VA: 0xd58e30)
// Original: glitch::collada::CAnimationTrackWeights::setWeight
// ----------------------------------------------------------------------------
int glitch::collada::CAnimationTrackWeights::setWeight(glitch::collada::CAnimationTrackWeights::Self *self, float a2)
{
  int result;
  int i;
  int v4;

  v4 = (*((uint32_t *)self + 3) - *((uint32_t *)self + 2)) >> 2;
  result = v4;
  if ( v4 > 0 )
  {
    for ( i = 0; i != v4; ++i )
    {
      glitch::collada::CAnimationTrackWeights::setFilters(self, i, a2);
      result = *((uint32_t *)self + 2);
      *(float *)(result + 4 * i) = a2;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::createTable  (binary VA: 0xd58e90)
// Original: glitch::collada::createTable
// ----------------------------------------------------------------------------
uint32_t * glitch::collada::createTable(glitch::scene::ISceneNode::Self *a1, int *a2, int a3)
{
  glitch::scene::ISceneNode::Self *v3;
  int v4;
  int *v5;
  int v6;
  int v7;
  uint32_t *result;
  uint32_t *v9;
  uint32_t *v10;
  uint32_t *v11;
  glitch::scene::ISceneNode::Self *v12;
  int v13;
  uint32_t *v14;
  unsigned int v15;
  int *v16;
  unsigned int v17;
  uint32_t *v18;
  char *v19;
  int v20;
  char *v21;
  uint32_t *v22;
  int v23;
  unsigned int v24;
  int v25;
  bool v26; // cc
  int v27;
  char *v28;
  int v29;
  size_t v30;
  unsigned int v31;
  int v32;
  uint32_t *v33;
  int v34;
  char *v35;
  glitch::scene::ISceneNode::Self *v36;

  v3 = a1;
  if ( G4_VCALL<int>(a1, 212) != 1919246692 )
    goto LABEL_2;
  v13 = *((uint32_t *)a1 + 72);
  v14 = nullptr;
  if ( v13 != 0 )
    v14 = *(uint32_t **)(v13 + 12);
  result = nullptr;
  if ( *(uint32_t *)a3 != 0 )
    result = *(uint32_t **)(*(uint32_t *)a3 + 12);
  if ( v14 == result )
  {
LABEL_2:
    v4 = G4_VCALL<int>(a1, 96);
    v5 = (int *)a2[1];
    v6 = v4;
    if ( v5 == (int *)a2[2] )
    {
      v15 = ((int)(uintptr_t)(v5) - *a2) >> 3;
      v30 = 8;
      v31 = v15;
      if ( v15 != 0 )
      {
        v24 = 2 * v15;
        if ( v15 <= 2 * v15 )
        {
          v25 = 16 * v15;
          v26 = v24 <= 0x1FFFFFFF;
          v27 = -8;
          if ( v26 )
            v27 = v25;
          v30 = v27;
        }
        else
        {
          v30 = 0xFFFFFFF8;
        }
      }
      v28 = (char *)a2[1];
      v29 = v6;
      v34 = sub_4EBDC0(v30);
      v16 = (int *)(v34 + 8 * v31);
      if ( v16 != nullptr )
      {
        *v16 = v29;
        v16[1] = (int)(uintptr_t)(a1);
      }
      v32 = *a2;
      v17 = v34;
      if ( v28 != (char *)*a2 )
      {
        v18 = (uint32_t *)v34;
        v19 = (char *)*a2;
        do
        {
          if ( v18 != nullptr )
          {
            v20 = *(uint32_t *)v19;
            v18[1] = *((uint32_t *)v19 + 1);
            *v18 = v20;
          }
          v19 += 8;
          v18 += 2;
        }
        while ( v28 != v19 );
        v3 = a1;
        v17 = v34 + 8 * ((unsigned int)(uintptr_t)(&v28[-v32 - 8]) >> 3) + 8;
      }
      v33 = (uint32_t *)(v17 + 8);
      v35 = (char *)a2[1];
      if ( v28 != v35 )
      {
        v21 = v28;
        v22 = v33;
        v36 = v3;
        do
        {
          if ( v22 != nullptr )
          {
            v23 = *(uint32_t *)v21;
            v22[1] = *((uint32_t *)v21 + 1);
            *v22 = v23;
          }
          v21 += 8;
          v22 += 2;
        }
        while ( v35 != v21 );
        v3 = v36;
        v33 += 2 * ((unsigned int)(v35 - (v28 + 8)) >> 3) + 2;
      }
      if ( *a2 != 0 )
        gll_operator_delete_arr(*a2);
      *a2 = v34;
      a2[1] = (int)(uintptr_t)(v33);
      a2[2] = v30 + v34;
    }
    else
    {
      v7 = 0;
      if ( v5 != nullptr )
      {
        *v5 = v6;
        v5[1] = (int)(uintptr_t)(a1);
        v7 = a2[1];
      }
      a2[1] = v7 + 8;
    }
    result = (uint32_t *)glitch::scene::ISceneNode::getChildren(v3);
    if ( *result != 0 && result != (uint32_t *)*result )
    {
      result = *((uint32_t **)v3 + 53);
      v9 = (uint32_t *)((char *)v3 + 212);
      if ( result != v9 )
      {
        v10 = v9;
        v11 = result;
        do
        {
          v12 = (glitch::scene::ISceneNode::Self *)(v11 - 1);
          if ( v11 == nullptr )
            v12 = nullptr;
          result = (uint32_t *)glitch::collada::createTable(v12, (int)(uintptr_t)(a2), a3);
          v11 = (uint32_t *)*v11;
        }
        while ( v10 != v11 );
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::createTable  (binary VA: 0xd59100)
// Original: glitch::collada::createTable
// ----------------------------------------------------------------------------
void glitch::collada::createTable(glitch::collada::CRootSceneNode::Self *a1, int *a2)
{
  char *v2;
  int *v3;
  char *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  char *v10;
  uint32_t *v11;
  int v12;
  char *v13;
  char *v14;
  uint32_t *v15;
  int v16;
  unsigned int v17;
  int *v18;
  int *v19;
  int v20;
  char *v21;
  char *v22;
  char *v23;
  unsigned int v24;
  char *v25;
  int v26;
  unsigned int v27;
  int v28;
  int v29;
  int v30;
  char *v31;
  char v32;
  char *SceneNodeAliasList;

  glitch::collada::createTable(a1, a2, (int)(uintptr_t)(a1) + 288);
  SceneNodeAliasList = glitch::collada::CRootSceneNode::getSceneNodeAliasList(a1);
  v32 = 0;
  v31 = SceneNodeAliasList;
  v2 = *(char **)SceneNodeAliasList;
  v23 = SceneNodeAliasList;
  v3 = a2;
  if ( SceneNodeAliasList != *(char **)SceneNodeAliasList )
  {
    v4 = (char *)a2[1];
    do
    {
      v5 = *((uint32_t *)v2 + 2);
      v29 = *((uint32_t *)v2 + 3);
      v6 = v5 + 4;
      if ( v5 == 0 )
        v6 = 0;
      v21 = (char *)v3[2];
      if ( v21 == v4 )
      {
        v8 = (int)(uintptr_t)(&v4[-*v3]) >> 3;
        v26 = 8;
        v24 = v8;
        if ( v8 != 0 )
        {
          v17 = 2 * v8;
          if ( v24 > v17 || v17 > 0x1FFFFFFF )
            v26 = -8;
          else
            v26 = 16 * v24;
        }
        v20 = v6;
        v18 = v3;
        v28 = sub_4EBDC0(v26);
        v27 = v28 + 8;
        v3 = v18;
        v9 = (uint32_t *)(v28 + 8 * v24);
        if ( v9 != nullptr )
        {
          *v9 = v20;
          v9[1] = v29;
        }
        if ( v21 != (char *)*v18 )
        {
          v10 = (char *)*v18;
          v30 = *v18;
          v11 = (uint32_t *)v28;
          v25 = v2;
          do
          {
            if ( v11 != nullptr )
            {
              v12 = *(uint32_t *)v10;
              v11[1] = *((uint32_t *)v10 + 1);
              *v11 = v12;
            }
            v10 += 8;
            v11 += 2;
          }
          while ( v21 != v10 );
          v3 = v18;
          v2 = v25;
          v27 = v28 + 8 * ((unsigned int)(uintptr_t)(&v21[-v30 - 8]) >> 3) + 16;
        }
        v13 = (char *)v3[1];
        if ( v13 == v4 )
        {
          v4 = (char *)v27;
        }
        else
        {
          v14 = v4;
          v15 = (uint32_t *)v27;
          v22 = v2;
          do
          {
            if ( v15 != nullptr )
            {
              v16 = *(uint32_t *)v14;
              v15[1] = *((uint32_t *)v14 + 1);
              *v15 = v16;
            }
            v14 += 8;
            v15 += 2;
          }
          while ( v13 != v14 );
          v2 = v22;
          v4 = (char *)(v27 + 8 * ((unsigned int)(v13 - (v4 + 8)) >> 3) + 8);
        }
        if ( *v3 != 0 )
        {
          v19 = v3;
          gll_operator_delete_arr(*v3);
          v3 = v19;
        }
        v3[1] = (int)(uintptr_t)(v4);
        *v3 = v28;
        v3[2] = v26 + v28;
      }
      else
      {
        v7 = 0;
        if ( v4 != nullptr )
        {
          *(uint32_t *)v4 = v6;
          *((uint32_t *)v4 + 1) = v29;
          v7 = v3[1];
        }
        v4 = (char *)(v7 + 8);
        v3[1] = v7 + 8;
      }
      v2 = *(char **)v2;
    }
    while ( v23 != v2 );
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::find  (binary VA: 0xd59350)
// Original: glitch::collada::find
// ----------------------------------------------------------------------------
int glitch::collada::find(int *a1, char *s2)
{
  int v2;
  int v3;
  int result;

  v2 = *a1;
  v3 = a1[1];
  result = 0;
  if ( *a1 != v3 )
  {
    while ( strcmp(*(const char **)v2, s2) != 0 )
    {
      v2 += 8;
      if ( v3 == v2 )
        return 0;
    }
    return *(uint32_t *)(v2 + 4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationTreeCookie::unbind  (binary VA: 0xd593b0)
// Original: glitch::collada::CAnimationTreeCookie::unbind
// ----------------------------------------------------------------------------
void glitch::collada::CAnimationTreeCookie::unbind()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationTreeCookie::compile  (binary VA: 0xd593c0)
// Original: glitch::collada::CAnimationTreeCookie::compile
// ----------------------------------------------------------------------------
void glitch::collada::CAnimationTreeCookie::compile(glitch::collada::CAnimationTreeCookie::Self *self)
{
  const void **v1;
  int MaskAllocationSize;
  int v3;
  int v4;
  int v5;
  typedef volatile int32_t *_g4_t_v6;
  typedef void *_g4_t_v7[2];
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v8)) > _g4_s2 ? (24u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);

  if ( *((uint8_t *)self + 20) != 0 )
  {
    v1 = *((const void ***)self + 3);
    if ( v1 != nullptr )
    {
      glitch::collada::CAnimationFilterBase::Construct(
        (glitch::collada::CAnimationFilterBase::Self *)v7,
        *((const glitch::collada::CAnimationFilterBase::Self **)self + 3));
      v7[0] = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_2067930));
      MaskAllocationSize = glitch::collada::CAnimationFilterBase::getMaskAllocationSize((glitch::collada::CAnimationFilterBase::Self *)v7);
      v8 = sub_4EBDC0(4 * MaskAllocationSize);
      glitch::collada::CAnimationFilterBase::init(v7, v1);
      glitch::collada::CAnimationTargets::set(*((uint32_t *)self + 6), v7);
      v3 = *((uint32_t *)self + 4);
      if ( v3 != 0 )
      {
        glitch::collada::CAnimationFilterBase::intersect(
          (glitch::collada::CAnimationFilterBase::Self *)v7,
          *(const glitch::collada::CAnimationFilterBase::Self **)(v3 + 80));
        glitch::collada::CAnimationTargets::set(*((uint32_t *)self + 7), v7);
        glitch::collada::CAnimationFilterBase::set(
          (glitch::collada::CAnimationFilterBase::Self *)v7,
          *(const glitch::collada::CAnimationFilterBase::Self **)(*((uint32_t *)self + 4) + 80));
        glitch::collada::CAnimationFilterBase::inverse((glitch::collada::CAnimationFilterBase::Self *)v7);
        glitch::collada::CAnimationFilterBase::intersect(
          (glitch::collada::CAnimationFilterBase::Self *)v7,
          *((const glitch::collada::CAnimationFilterBase::Self **)self + 3));
        glitch::collada::CAnimationTargets::set(*((uint32_t *)self + 8), v7);
      }
    }
    else
    {
      v6 = (volatile int32_t *)self;
      sub_8B1B00((volatile int32_t *)self + 1);
      glitch::collada::CAnimationFilterBase::Construct((volatile int32_t *)v7, (int)(uintptr_t)(&v6));
      v7[0] = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_2067930));
      v4 = glitch::collada::CAnimationFilterBase::getMaskAllocationSize((glitch::collada::CAnimationFilterBase::Self *)v7);
      v8 = sub_4EBDC0(4 * v4);
      glitch::collada::CAnimationFilterBase::init((glitch::collada::CAnimationFilterBase::Self *)v7);
      if ( v6 != nullptr )
        sub_5459C0(v6);
      glitch::collada::CAnimationTargets::set(*((uint32_t *)self + 6), v7);
      v5 = *((uint32_t *)self + 4);
      if ( v5 != 0 )
      {
        glitch::collada::CAnimationFilterBase::intersect(
          (glitch::collada::CAnimationFilterBase::Self *)v7,
          *(const glitch::collada::CAnimationFilterBase::Self **)(v5 + 80));
        glitch::collada::CAnimationTargets::set(*((uint32_t *)self + 7), v7);
        glitch::collada::CAnimationFilterBase::set(
          (glitch::collada::CAnimationFilterBase::Self *)v7,
          *(const glitch::collada::CAnimationFilterBase::Self **)(*((uint32_t *)self + 4) + 80));
        glitch::collada::CAnimationFilterBase::inverse((glitch::collada::CAnimationFilterBase::Self *)v7);
        glitch::collada::CAnimationTargets::set(*((uint32_t *)self + 8), v7);
      }
    }
    v7[0] = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_2067930));
    gll_operator_delete_arr(v8);
    glitch::collada::CAnimationFilterBase::Destroy((volatile int32_t **)v7);
    *((uint8_t *)self + 20) = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSynchronizedBlender::animateEx  (binary VA: 0xd595c0)
// Original: glitch::collada::CSceneNodeAnimatorSynchronizedBlender::animateEx
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorSynchronizedBlender::animateEx(int a1, int a2, glitch::collada::CAnimationTreeCookie::Self **a3)
{
  glitch::collada::CAnimationTreeCookie::compile(*a3);
  return G4_VCALL<int>(a1, 112, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSet::animateEx  (binary VA: 0xd59620)
// Original: glitch::collada::CSceneNodeAnimatorSet::animateEx
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorSet::animateEx(int a1, int a2, glitch::collada::CAnimationTreeCookie::Self **a3)
{
  glitch::collada::CAnimationTreeCookie::compile(*a3);
  return G4_VCALL<int>(a1, 112, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorBlender::animateEx  (binary VA: 0xd59680)
// Original: glitch::collada::CSceneNodeAnimatorBlender::animateEx
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorBlender::animateEx(int a1, int a2, glitch::collada::CAnimationTreeCookie::Self **a3)
{
  glitch::collada::CAnimationTreeCookie::compile(*a3);
  return G4_VCALL<int>(a1, 112, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CDynamicAnimationSet::Construct  (binary VA: 0xd596e0)
// Original: glitch::collada::CDynamicAnimationSet::CDynamicAnimationSet
// ----------------------------------------------------------------------------
glitch::collada::CDynamicAnimationSet::Self * glitch::collada::CDynamicAnimationSet::Construct(glitch::collada::CDynamicAnimationSet::Self *self)
{
  glitch::collada::CAnimationSet::Construct((glitch::collada::CAnimationSet::Self *)(self));
  *((uint32_t *)self + 36) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2077DC8);
  *((uint32_t *)self + 37) = (uint32_t)(uintptr_t)(&glitch::collada::CColladaDatabase::DefaultFactory);
  *((uint32_t *)self + 38) = 0;
  *((uint32_t *)self + 39) = 0;
  *((uint32_t *)self + 40) = 0;
  *((uint8_t *)self + 164) = 1;
  *((uint32_t *)self + 42) = 0;
  *((uint32_t *)self + 43) = 0;
  *((uint32_t *)self + 44) = 0;
  return (glitch::collada::CDynamicAnimationSet::Self *)&glitch::collada::CColladaDatabase::DefaultFactory;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CDynamicAnimationSet::getDatabaseIndex  (binary VA: 0xd59780)
// Original: glitch::collada::CDynamicAnimationSet::getDatabaseIndex
// ----------------------------------------------------------------------------
int glitch::collada::CDynamicAnimationSet::getDatabaseIndex(glitch::collada::CDynamicAnimationSet::Self *self, glitch::collada::CColladaDatabase::Self *a2)
{
  uint32_t *v2;
  int result;
  int v4;
  int v5;
  int v6;

  v2 = *((uint32_t **)self + 17);
  result = -1;
  v4 = -858993459 * ((*((uint32_t *)self + 18) - (int)(uintptr_t)(v2)) >> 2);
  if ( v4 != 0 )
  {
    v5 = 5;
    result = 0;
    if ( *v2 != *(uint32_t *)a2 )
    {
      while ( ++result != v4 )
      {
        v6 = v2[v5];
        v5 += 5;
        if ( v6 == *(uint32_t *)a2 )
          return result;
      }
      return -1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CDynamicAnimationSet::clearTracks  (binary VA: 0xd597e0)
// Original: glitch::collada::CDynamicAnimationSet::clearTracks
// ----------------------------------------------------------------------------
glitch::collada::CDynamicAnimationSet::Self * glitch::collada::CDynamicAnimationSet::clearTracks(glitch::collada::CDynamicAnimationSet::Self *self)
{
  glitch::collada::CDynamicAnimationSet::Self *result;
  int v2;
  int v3;
  int v4;

  result = self;
  v2 = *((uint32_t *)self + 42);
  if ( -1431655765 * ((*((uint32_t *)self + 43) - v2) >> 2) != 0 )
    *((uint32_t *)self + 43) = v2;
  v3 = *((uint32_t *)self + 6);
  if ( (unsigned int)(*((uint32_t *)self + 7) - v3) >> 2 != 0 )
    *((uint32_t *)self + 7) = v3;
  v4 = *((uint32_t *)self + 20);
  if ( (unsigned int)(*((uint32_t *)self + 21) - v4) >> 3 != 0 )
    *((uint32_t *)self + 21) = v4;
  *((uint32_t *)self + 9) = 0;
  *((uint8_t *)self + 164) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CDynamicAnimationSet::clearSet  (binary VA: 0xd59840)
// Original: glitch::collada::CDynamicAnimationSet::clearSet
// ----------------------------------------------------------------------------
glitch::collada::CColladaDatabase::Self * glitch::collada::CDynamicAnimationSet::clearSet(glitch::collada::CDynamicAnimationSet::Self *self)
{
  glitch::collada::CColladaDatabase::Self *v1;
  glitch::collada::CColladaDatabase::Self *v2;
  glitch::collada::CColladaDatabase::Self *v4;
  glitch::collada::CColladaDatabase::Self *v5;

  v1 = *((glitch::collada::CColladaDatabase::Self **)self + 18);
  v5 = *((glitch::collada::CColladaDatabase::Self **)self + 17);
  if ( v5 != v1 )
  {
    v2 = *((glitch::collada::CColladaDatabase::Self **)self + 17);
    do
    {
      v4 = v2;
      v2 = (glitch::collada::CColladaDatabase::Self *)((char *)v2 + 20);
      glitch::collada::CColladaDatabase::Destroy(v4);
    }
    while ( v1 != v2 );
  }
  *((uint8_t *)self + 164) = 1;
  *((uint32_t *)self + 18) = (uint32_t)(uintptr_t)(v5);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CDynamicAnimationSet::setDefaultAnimationLibrary  (binary VA: 0xd598b0)
// Original: glitch::collada::CDynamicAnimationSet::setDefaultAnimationLibrary
// ----------------------------------------------------------------------------
void glitch::collada::CDynamicAnimationSet::setDefaultAnimationLibrary(glitch::collada::CDynamicAnimationSet::Self *self, const glitch::collada::CColladaDatabase::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint32_t v7[8];

  v2 = 0;
  v3 = *(uint32_t *)a2;
  v7[0] = *(uint32_t *)a2;
  if ( v7[0] != 0 )
  {
    sub_8B1B00((volatile int32_t *)(v3 + 4));
    v2 = v7[0];
  }
  v4 = *((uint32_t *)a2 + 1);
  v5 = *((uint32_t *)self + 36);
  *((uint32_t *)self + 36) = v2;
  v6 = *((uint32_t *)self + 37);
  *((uint32_t *)self + 37) = v4;
  memset(&v7[2], 0, 12);
  v7[0] = v5;
  v7[1] = v6;
  glitch::collada::CColladaDatabase::Destroy((glitch::collada::CColladaDatabase::Self *)v7);
  *((uint8_t *)self + 164) = 1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CDynamicAnimationSet::setDefaultAnimationLibrary  (binary VA: 0xd59950)
// Original: glitch::collada::CDynamicAnimationSet::setDefaultAnimationLibrary
// ----------------------------------------------------------------------------
void glitch::collada::CDynamicAnimationSet::setDefaultAnimationLibrary(glitch::collada::CDynamicAnimationSet::Self *self, unsigned int a2)
{
  int v2;
  int v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  typedef uint32_t _g4_t_v10[6];
  typedef uint32_t _g4_t_v11[5];
  typedef uint32_t _g4_t_v12[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v11)) > _g4_s1 ? (24u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v12)) > _g4_s2 ? (44u + sizeof(_g4_t_v12)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);

  v2 = *((uint32_t *)self + 17);
  if ( a2 >= -858993459 * ((*((uint32_t *)self + 18) - v2) >> 2) )
  {
    v12[0] = *((uint32_t *)self + 36);
    *((uint32_t *)self + 36) = 0;
    v3 = *((uint32_t *)self + 37);
    *((uint32_t *)self + 37) = (uint32_t)(uintptr_t)(&glitch::collada::CColladaDatabase::DefaultFactory);
    v12[1] = v3;
    v11[1] = (uint32_t)(uintptr_t)(&glitch::collada::CColladaDatabase::DefaultFactory);
    v11[0] = 0;
    memset(&v11[2], 0, 12);
    memset(&v12[2], 0, 12);
    glitch::collada::CColladaDatabase::Destroy((glitch::collada::CColladaDatabase::Self *)v12);
    glitch::collada::CColladaDatabase::Destroy((glitch::collada::CColladaDatabase::Self *)v11);
    v2 = *((uint32_t *)self + 17);
  }
  v4 = (int *)(v2 + 20 * a2);
  v5 = 0;
  v6 = *v4;
  v10[0] = *v4;
  if ( v10[0] != 0 )
  {
    sub_8B1B00((volatile int32_t *)(v6 + 4));
    v5 = v10[0];
  }
  v7 = v4[1];
  v8 = *((uint32_t *)self + 36);
  *((uint32_t *)self + 36) = v5;
  v9 = *((uint32_t *)self + 37);
  *((uint32_t *)self + 37) = v7;
  memset(&v10[2], 0, 12);
  v10[0] = v8;
  v10[1] = v9;
  glitch::collada::CColladaDatabase::Destroy((glitch::collada::CColladaDatabase::Self *)v10);
  *((uint8_t *)self + 164) = 1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CDynamicAnimationSet::remAnimationLibraryBindings  (binary VA: 0xd59a80)
// Original: glitch::collada::CDynamicAnimationSet::remAnimationLibraryBindings
// ----------------------------------------------------------------------------
void glitch::collada::CDynamicAnimationSet::remAnimationLibraryBindings(glitch::collada::CDynamicAnimationSet::Self *self, unsigned int a2)
{
  int *v2;
  int v3;
  int v4;
  char *v5;
  char *v6;
  int v7;
  uint32_t *v8;
  int v9;
  int *v10;
  uint32_t *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  glitch::collada::CColladaDatabase::Self *v16;
  typedef char *_g4_t_v17;
  typedef unsigned int _g4_t_v18;
  typedef int *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v17)) > _g4_s0 ? (8u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v18)) > _g4_s1 ? (12u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v19)) > _g4_s2 ? (12u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v20)) > _g4_s3 ? (16u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v21)) > _g4_s4 ? (20u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v22)) > _g4_s5 ? (24u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v23)) > _g4_s6 ? (28u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v24)) > _g4_s7 ? (32u + sizeof(_g4_t_v24)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);

  v2 = *((int **)self + 18);
  v3 = *((uint32_t *)self + 17);
  if ( a2 < -858993459 * (((int)(uintptr_t)(v2) - v3) >> 2) )
  {
    v4 = 8 * *((uint32_t *)self + 9);
    v18 = *((uint32_t *)self + 20) + v4 * a2;
    v5 = (char *)(v18 + v4);
    if ( (char *)v18 != v5 )
    {
      v6 = *((char **)self + 21);
      v7 = 0;
      if ( v5 != v6 )
      {
        v17 = v5;
        v7 = (v6 - v5) >> 3;
        if ( v7 > 0 )
        {
          v8 = (uint32_t *)v18;
          do
          {
            v9 = *((uint32_t *)v5 + 1);
            --v7;
            *v8 = *(uint32_t *)v5;
            v8[1] = v9;
            v5 += 8;
            v8 += 2;
          }
          while ( v7 != 0 );
          v7 = (*((uint32_t *)self + 21) - (int)(uintptr_t)(v17)) >> 3;
          v3 = *((uint32_t *)self + 17);
          v2 = *((int **)self + 18);
        }
      }
      *((uint32_t *)self + 21) = v18 + 8 * v7;
    }
    v10 = (int *)(v3 + 20 * a2);
    v11 = (uint32_t *)(v10 + 5);
    if ( v10 + 5 != v2 && -858993459 * (v2 - (int *)(v11)) > 0 )
    {
      v19 = v10 + 5;
      v12 = -858993459 * (v2 - (int *)(v11));
      while ( 1 )
      {
        v13 = 0;
        v20 = v10[5];
        if ( v20 != 0 )
        {
          sub_8B1B00((volatile int32_t *)(v20 + 4));
          v13 = v20;
        }
        v14 = v10[6];
        v22 = 0;
        v21 = v14;
        v23 = 0;
        v24 = 0;
        v20 = *v10;
        *v10 = v13;
        v15 = v21;
        v21 = v10[1];
        v10[1] = v15;
        glitch::collada::CColladaDatabase::Destroy((glitch::collada::CColladaDatabase::Self *)&v20);
        --v12;
        v10 = v19;
        if ( v12 == 0 )
          break;
        v19 += 5;
      }
      v2 = *((int **)self + 18);
    }
    v16 = (glitch::collada::CColladaDatabase::Self *)(v2 - 5);
    *((uint32_t *)self + 18) = (uint32_t)(uintptr_t)(v16);
    glitch::collada::CColladaDatabase::Destroy(v16);
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CDynamicAnimationSet::remAnimationLibraryBindings  (binary VA: 0xd59c00)
// Original: glitch::collada::CDynamicAnimationSet::remAnimationLibraryBindings
// ----------------------------------------------------------------------------
void glitch::collada::CDynamicAnimationSet::remAnimationLibraryBindings(glitch::collada::CDynamicAnimationSet::Self *self, glitch::collada::CColladaDatabase::Self *a2)
{
  unsigned int DatabaseIndex;

  DatabaseIndex = glitch::collada::CDynamicAnimationSet::getDatabaseIndex(self, a2);
  glitch::collada::CDynamicAnimationSet::remAnimationLibraryBindings(self, DatabaseIndex);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CDynamicAnimationSet::overwriteAnimationLibraryBindings  (binary VA: 0xd59c50)
// Original: glitch::collada::CDynamicAnimationSet::overwriteAnimationLibraryBindings
// ----------------------------------------------------------------------------
void glitch::collada::CDynamicAnimationSet::overwriteAnimationLibraryBindings(glitch::collada::CDynamicAnimationSet::Self *self, const glitch::collada::CColladaDatabase::Self *a2, unsigned int a3)
{
  int v3;
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  uint32_t *v12;
  char DefaultValue;
  unsigned int v14;
  char v15;
  int v16;
  uint32_t *v17;
  typedef int _g4_t_v18;
  typedef unsigned int _g4_t_v19;
  typedef uint32_t *_g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  typedef int _g4_t_BlendableAnimation;
  typedef int _g4_t_v23;
  typedef unsigned int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint32_t _g4_t_v26[7];
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v18)) > _g4_s0 ? (8u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v19)) > _g4_s1 ? (36u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v20)) > _g4_s2 ? (40u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v21)) > _g4_s3 ? (40u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_BlendableAnimation)) > _g4_s4 ? (40u + sizeof(_g4_t_BlendableAnimation)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v23)) > _g4_s5 ? (48u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v24)) > _g4_s6 ? (48u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v25)) > _g4_s7 ? (64u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v26)) > _g4_s8 ? (68u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (96u + sizeof(_g4_t_v27)) > _g4_s9 ? (96u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (100u + sizeof(_g4_t_v28)) > _g4_s10 ? (100u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (104u + sizeof(_g4_t_v29)) > _g4_s11 ? (104u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (108u + sizeof(_g4_t_v30)) > _g4_s12 ? (108u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (112u + sizeof(_g4_t_v31)) > _g4_s13 ? (112u + sizeof(_g4_t_v31)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_BlendableAnimation &BlendableAnimation = *reinterpret_cast<_g4_t_BlendableAnimation *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 64u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 68u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 96u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 100u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 104u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 108u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 112u);

  v3 = *((uint32_t *)self + 17);
  if ( a3 < -858993459 * ((*((uint32_t *)self + 18) - v3) >> 2) )
  {
    v4 = (uint32_t *)(v3 + 20 * a3);
    v5 = v4;
    v6 = *v4;
    v26[0] = *v4;
    if ( v26[0] != 0 )
    {
      v20 = v4;
      sub_8B1B00((volatile int32_t *)(v6 + 4));
      v4 = v20;
      v5 = (uint32_t *)(*((uint32_t *)self + 17) + 20 * a3);
    }
    v26[1] = v4[1];
    memset(&v26[2], 0, 12);
    v7 = *(uint32_t *)a2;
    v8 = 0;
    v27 = *(uint32_t *)a2;
    if ( v27 != 0 )
    {
      v21 = v5;
      sub_8B1B00((volatile int32_t *)(v7 + 4));
      v8 = v27;
      v5 = v21;
    }
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v28 = *((uint32_t *)a2 + 1);
    v27 = *v5;
    *v5 = v8;
    v23 = v28;
    v28 = v5[1];
    v5[1] = v23;
    glitch::collada::CColladaDatabase::Destroy((glitch::collada::CColladaDatabase::Self *)&v27);
    v9 = *((uint32_t *)self + 9);
    if ( v9 != 0 )
    {
      v10 = a3 * 8 * v9;
      v24 = 0;
      v11 = 0;
      do
      {
        v19 = v10;
        BlendableAnimation = glitch::collada::CColladaDatabase::getBlendableAnimation(a2, v11 + *((uint32_t *)self + 42));
        v18 = v11 + *((uint32_t *)self + 42);
        v25 = 0;
        DefaultValue = glitch::collada::CColladaDatabase::getDefaultValue(a2, v18, (int)(uintptr_t)(&v25));
        v14 = v19;
        if ( BlendableAnimation != 0 )
        {
          v12 = (uint32_t *)(*((uint32_t *)self + 20) + v19);
          *v12 = 2;
          v12[1] = BlendableAnimation;
        }
        else if ( DefaultValue != 0
               || *((uint32_t *)self + 36) != 0
               && (v15 = glitch::collada::CColladaDatabase::getDefaultValue(
                           (glitch::collada::CDynamicAnimationSet::Self *)((char *)self + 144),
                           v11 + *((uint32_t *)self + 42),
                           (int)(uintptr_t)(&v25)),
                   v14 = v19,
                   v15 != 0) )
        {
          v16 = v25;
          v17 = (uint32_t *)(*((uint32_t *)self + 20) + v14);
          *v17 = 1;
          v17[1] = v16;
        }
        ++v24;
        v11 += 12;
        v10 = v14 + 8;
      }
      while ( *((uint32_t *)self + 9) > v24 );
    }
    glitch::collada::CColladaDatabase::Destroy((glitch::collada::CColladaDatabase::Self *)v26);
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CDynamicAnimationSet::overwriteAnimationLibraryBindings  (binary VA: 0xd59e70)
// Original: glitch::collada::CDynamicAnimationSet::overwriteAnimationLibraryBindings
// ----------------------------------------------------------------------------
void glitch::collada::CDynamicAnimationSet::overwriteAnimationLibraryBindings(glitch::collada::CDynamicAnimationSet::Self *self, const glitch::collada::CColladaDatabase::Self *a2, glitch::collada::CColladaDatabase::Self *a3)
{
  unsigned int DatabaseIndex;

  DatabaseIndex = glitch::collada::CDynamicAnimationSet::getDatabaseIndex(self, a3);
  glitch::collada::CDynamicAnimationSet::overwriteAnimationLibraryBindings(self, a2, DatabaseIndex);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CRootMotion::enable  (binary VA: 0xd59ec0)
// Original: glitch::collada::CRootMotion::enable
// ----------------------------------------------------------------------------
int glitch::collada::CRootMotion::enable(glitch::collada::CRootMotion::Self *self, bool a2)
{
  int v2;
  int result;
  int v4;
  int v5;
  int v6;
  int v7;
  volatile int32_t *v8;

  if ( a2 )
  {
    v4 = *((uint32_t *)self + 7);
    if ( v4 != 0 )
      sub_8B1B00((volatile int32_t *)(v4 + 4));
    v5 = *(uint32_t *)(v4 + 76);
    v6 = 0;
    if ( v5 != 0 )
    {
      v7 = *(uint32_t *)(v5 + 8);
      if ( v7 != 0 )
        v6 = v7 - 8;
    }
    *(uint8_t *)(v6 + 20) = 1;
    sub_8B1B00((volatile int32_t *)(v4 + 4));
    v8 = *(volatile int32_t **)(v6 + 16);
    *(uint32_t *)(v6 + 16) = v4;
    if ( v8 != nullptr )
      sub_5459C0(v8);
    return sub_5459C0((volatile int32_t *)v4);
  }
  else
  {
    v2 = *((uint32_t *)self + 7);
    result = *(uint32_t *)(v2 + 76);
    if ( result != 0 )
    {
      result = *(uint32_t *)(result + 8);
      if ( result != 0 && result != 8 && v2 == *(uint32_t *)(result + 8) )
      {
        *(uint8_t *)(result + 12) = 1;
        *(uint32_t *)(result + 8) = 0;
        if ( v2 != 0 )
          return sub_5459C0((volatile int32_t *)v2);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CRootMotion::Destroy  (binary VA: 0xd59fa0)
// Original: glitch::collada::CRootMotion::~CRootMotion
// ----------------------------------------------------------------------------
void glitch::collada::CRootMotion::Destroy(volatile int32_t **self)
{
  volatile int32_t **v1;
  volatile int32_t **v2;

  *self = (volatile int32_t *)((uint32_t)(uintptr_t)&off_2077E10);
  glitch::collada::CRootMotion::enable((glitch::collada::CRootMotion::Self *)self, false);
  if ( *(self + 7) != nullptr )
    sub_5459C0(*(self + 7));
  v1 = (volatile int32_t **)*(self + 4);
  v2 = (volatile int32_t **)*(self + 3);
  if ( v1 != v2 )
  {
    do
    {
      if ( *v2 != nullptr )
        sub_5459C0(*v2);
      ++v2;
    }
    while ( v1 != v2 );
    v2 = (volatile int32_t **)*(self + 3);
  }
  if ( v2 != nullptr )
    gll_operator_delete_arr((int)(uintptr_t)(v2));
  *self = (volatile int32_t *)&off_20483C0;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CRootMotion::Destroy_ead5a030  (binary VA: 0xd5a030)
// Original: glitch::collada::CRootMotion::~CRootMotion
// ----------------------------------------------------------------------------
void glitch::collada::CRootMotion::Destroy_ead5a030(volatile int32_t **self)
{
  glitch::collada::CRootMotion::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CRootMotion::rotate  (binary VA: 0xd5a070)
// Original: glitch::collada::CRootMotion::rotate
// ----------------------------------------------------------------------------
glitch::collada::CRootMotion::Self * glitch::collada::CRootMotion::rotate(int **self, glitch::core::quaternion::Self *a2)
{
  glitch::collada::CRootMotion::Self *result;
  int *v3;
  int *i;
  int v5;

  result = (glitch::collada::CRootMotion::Self *)self;
  v3 = *(self + 3);
  for ( i = *(self + 4);
        i != v3;
        result = (glitch::collada::CRootMotion::Self *)G4_VCALL<int>(v5, 16, a2) )
  {
    v5 = *v3++;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CRootMotion::rotateCallback  (binary VA: 0xd5a0b0)
// Original: glitch::collada::CRootMotion::rotateCallback
// ----------------------------------------------------------------------------
glitch::collada::CRootMotion::Self * glitch::collada::CRootMotion::rotateCallback(int a1, int a2, int a3, int a4, glitch::core::quaternion::Self *a5, int **a6)
{
  return glitch::collada::CRootMotion::rotate(a6, a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CRootMotion::move  (binary VA: 0xd5a0e0)
// Original: glitch::collada::CRootMotion::move
// ----------------------------------------------------------------------------
int glitch::collada::CRootMotion::move(int a1, int a2)
{
  int result;
  int *v3;
  int *i;
  int v5;

  result = a1;
  v3 = *(int **)(a1 + 12);
  for ( i = *(int **)(a1 + 16); i != v3; result = G4_VCALL<int>(v5, 12, a2) )
    v5 = *v3++;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CRootMotion::moveCallback  (binary VA: 0xd5a120)
// Original: glitch::collada::CRootMotion::moveCallback
// ----------------------------------------------------------------------------
int glitch::collada::CRootMotion::moveCallback(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return glitch::collada::CRootMotion::move(a6, a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::IAnimationSetTemplate::setUnAdded  (binary VA: 0xd5a150)
// Original: glitch::collada::IAnimationSetTemplate::setUnAdded
// ----------------------------------------------------------------------------
unsigned int glitch::collada::IAnimationSetTemplate::setUnAdded(glitch::collada::IAnimationSetTemplate::Self *self)
{
  int v1;
  unsigned int result;
  unsigned int v3;
  int v4;

  v1 = *((uint32_t *)self + 1);
  result = (unsigned int)(*((uint32_t *)self + 2) - v1) >> 2;
  if ( result != 0 )
  {
    v3 = 0;
    do
    {
      **(uint8_t **)(v1 + 4 * v3) = 0;
      v4 = *(uint32_t *)(*((uint32_t *)self + 1) + 4 * v3++);
      *(uint32_t *)(v4 + 12) = 0;
      v1 = *((uint32_t *)self + 1);
      result = (*((uint32_t *)self + 2) - v1) >> 2;
    }
    while ( v3 < result );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::IAnimationSetTemplate::addChannels  (binary VA: 0xd5a190)
// Original: glitch::collada::IAnimationSetTemplate::addChannels
// ----------------------------------------------------------------------------
unsigned int glitch::collada::IAnimationSetTemplate::addChannels(glitch::collada::IAnimationSetTemplate::Self *self)
{
  int v1;
  unsigned int result;
  unsigned int v3;
  unsigned int v4;
  uint32_t *v5;
  uint8_t *v6;

  v1 = *((uint32_t *)self + 2);
  result = *((uint32_t *)self + 1);
  if ( (v1 - result) >> 2 != 0 )
  {
    v3 = *((uint32_t *)self + 1);
    v4 = 0;
    while ( 1 )
    {
      if ( **(uint8_t **)(result + 4 * v4) != 0 )
      {
        ++v4;
        result = (int)(v1 - v3) >> 2;
        if ( v4 >= result )
          return result;
      }
      else
      {
        v5 = (uint32_t *)opNew(0xCu);
        v5[1] = *(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 1) + 4 * v4) + 4);
        *v5 = (*(int (**)(uint32_t, uint32_t))(**(uint32_t **)(*(uint32_t *)(*((uint32_t *)self + 1) + 4 * v4) + 8) + 96))(
                *(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 1) + 4 * v4) + 8),
                0);
        *(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 1) + 4 * v4) + 12) = (uint32_t)(uintptr_t)(v5);
        v6 = *(uint8_t **)(*((uint32_t *)self + 1) + 4 * v4++);
        *v6 = 1;
        v1 = *((uint32_t *)self + 2);
        v3 = *((uint32_t *)self + 1);
        result = (int)(v1 - v3) >> 2;
        if ( v4 >= result )
          return result;
      }
      result = v3;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationTrackEx::Construct  (binary VA: 0xd5a240)
// Original: glitch::collada::CAnimationTrackEx::CAnimationTrackEx
// ----------------------------------------------------------------------------
int16_t glitch::collada::CAnimationTrackEx::Construct(int a1, unsigned int a2, uint8_t a3)
{
  int16_t result;

  *(uint32_t *)(a1 + 4) = a2;
  *(uint8_t *)(a1 + 8) = a3;
  result = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2077E48);
  if ( a2 <= 9 )
    result = (uint8_t)byte_1CA8860[4 * a2] * a3;
  *(uint8_t *)(a1 + 9) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorBlender::getAnimator  (binary VA: 0xd5a2b0)
// Original: glitch::collada::CSceneNodeAnimatorBlender::getAnimator
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorBlender::getAnimator(glitch::collada::CSceneNodeAnimatorBlender::Self *self, int a2)
{
  return *((uint32_t *)self + 16) + 4 * a2;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorBlender::prepareAnimationValues  (binary VA: 0xd5a2c0)
// Original: glitch::collada::CSceneNodeAnimatorBlender::prepareAnimationValues
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorBlender::prepareAnimationValues(uint32_t *a1, int64_t a2, int a3)
{
  int result;
  int v4;
  int v5;
  int v6;
  int v7;
  typedef int _g4_t_v8;
  typedef uint32_t _g4_t_v9[9];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v9)) > _g4_s1 ? (40u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 40u);

  result = 0;
  v4 = (a1[17] - a1[16]) >> 2;
  if ( v4 != 0 )
  {
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      while ( *(float *)(a1[10] + 4 * v5) <= 0.00000011920929f )
      {
        if ( ++v5 == v4 )
          return 0;
      }
      v7 = a1[16];
      v9[1] = v6;
      v9[0] = a3;
      v8 = v6;
      if ( (*(uint8_t (**)(uint32_t, uint32_t, uint32_t, uint32_t *))(**(uint32_t **)(v7 + 4 * v5) + 104))(
             *(uint32_t *)(v7 + 4 * v5),
             a2,
             HIDWORD(a2),
             v9) != 0 )
        break;
      ++v5;
      v6 = v8 + 1;
      if ( v5 == v4 )
        return 0;
    }
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorBlender::getWeightIndex  (binary VA: 0xd5a390)
// Original: glitch::collada::CSceneNodeAnimatorBlender::getWeightIndex
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorBlender::getWeightIndex(glitch::collada::CSceneNodeAnimatorBlender::Self *self, const boost::intrusive_ptr<glitch::collada::ISceneNodeAnimator::Self> *a2)
{
  uint32_t *v2;
  int result;
  int v4;

  v2 = *((uint32_t **)self + 16);
  result = -2;
  v4 = (*((uint32_t *)self + 17) - (int)(uintptr_t)(v2)) >> 2;
  if ( v4 != 0 )
  {
    result = 0;
    if ( *v2 != *(uint32_t *)a2 )
    {
      while ( ++result != v4 )
      {
        if ( v2[result] == *(uint32_t *)a2 )
          return result;
      }
      return -2;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::getStringsInternal  (binary VA: 0xd5a3d0)
// Original: glitch::collada::getStringsInternal
// ----------------------------------------------------------------------------
char ** glitch::collada::getStringsInternal()
{
  return (char **)(uintptr_t)(((uint32_t)(uintptr_t)&off_2031260));
}



// ============================================================================
// Address:   0xd5a3f0 (size: 81 bytes)
// Symbol:    _ZN6glitch7collada29CSceneNodeAnimatorBlenderBaseC2Ev
// Demangled: glitch::collada::CSceneNodeAnimatorBlenderBase::CSceneNodeAnimatorBlenderBase(void)
// ============================================================================
// Alternative name is '_ZN6glitch7collada29CSceneNodeAnimatorBlenderBaseC1Ev'
glitch::collada::CSceneNodeAnimatorBlenderBase::Self *glitch::collada::CSceneNodeAnimatorBlenderBase::Construct(
        glitch::collada::CSceneNodeAnimatorBlenderBase::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorBlenderBase::normalizeWeights  (binary VA: 0xd5a450)
// Original: glitch::collada::CSceneNodeAnimatorBlenderBase::normalizeWeights
// ----------------------------------------------------------------------------
signed int glitch::collada::CSceneNodeAnimatorBlenderBase::normalizeWeights(glitch::collada::CSceneNodeAnimatorBlenderBase::Self *self)
{
  int v1;
  int v2;
  int v3;
  float v4; // xmm0_4
  signed int result;
  float *v6;

  v1 = *((uint32_t *)self + 9);
  if ( v1 <= 0 )
    goto LABEL_9;
  v2 = *((uint32_t *)self + 3);
  v3 = 0;
  v4 = 0.0;
  do
    v4 = v4 + *(float *)(v2 + 4 * v3++);
  while ( v3 != v1 );
  if ( v4 == 0.0 )
  {
LABEL_9:
    result = (unsigned int)(*((uint32_t *)self + 1) - *(uint32_t *)self) >> 2;
    if ( result != 0 )
    {
      result = *((uint32_t *)self + 3);
      *(uint32_t *)result = 1065353216;
    }
  }
  else
  {
    result = 0;
    while ( 1 )
    {
      v6 = (float *)(v2 + 4 * result++);
      *v6 = *v6 * (float)(1.0 / v4);
      if ( *((uint32_t *)self + 9) <= result )
        break;
      v2 = *((uint32_t *)self + 3);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorBlenderBase::prepareWeightsTable  (binary VA: 0xd5a4e0)
// Original: glitch::collada::CSceneNodeAnimatorBlenderBase::prepareWeightsTable
// ----------------------------------------------------------------------------
signed int glitch::collada::CSceneNodeAnimatorBlenderBase::prepareWeightsTable(glitch::collada::CSceneNodeAnimatorBlenderBase::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  float v5; // xmm0_4
  int v6;
  signed int result;

  v1 = *(uint32_t *)self;
  v2 = (*((uint32_t *)self + 1) - *(uint32_t *)self) >> 2;
  if ( v2 > 0 )
  {
    v3 = 0;
    v4 = 0;
    while ( 1 )
    {
      v5 = *(float *)(v1 + 4 * v4);
      if ( v5 > 0.00000011920929f )
      {
        v6 = v3++;
        *(float *)(*((uint32_t *)self + 3) + 4 * v6) = v5;
      }
      if ( ++v4 == v2 )
        break;
      v1 = *(uint32_t *)self;
    }
  }
  result = *((uint32_t *)self + 10);
  if ( result == 0 )
    return glitch::collada::CSceneNodeAnimatorBlenderBase::normalizeWeights(self);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorBlenderBase::applyTrackValue  (binary VA: 0xd5a550)
// Original: glitch::collada::CSceneNodeAnimatorBlenderBase::applyTrackValue
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorBlenderBase::applyTrackValue(int a1, int a2, int a3, int *a4)
{
  volatile int32_t *v4;
  int v5;
  int v6;
  uint32_t *v7;
  int (*v8)(int, int, uint32_t, char, int, uint32_t);
  char v10;
  int v11;

  v4 = *(volatile int32_t **)(*a4 + 36);
  if ( v4 != nullptr )
    sub_8B1B00(v4 + 1);
  v5 = G4_VCALL<int>(v4, 20, a2);
  sub_5459C0(v4);
  v6 = *a4;
  v7 = *(uint32_t **)(*a4 + 16);
  v11 = *(uint32_t *)(*(uint32_t *)(*a4 + 60) + 4 * a2);
  if ( v7 == nullptr )
    return G4_VCALL<int>(v5, 76, a3, v11, *(uint32_t *)(*(uint32_t *)(v6 + 72) + 4 * a2));
  v8 = *(int (**)(int, int, uint32_t, char, int, uint32_t))(v7[15] + 4 * a2);
  if ( v8 == nullptr )
    return G4_VCALL<int>(v5, 76, a3, v11, *(uint32_t *)(*(uint32_t *)(v6 + 72) + 4 * a2));
  v10 = *(uint8_t *)(v7[12] + a2);
  return v8(v5, v11, *(uint32_t *)(*(uint32_t *)(v6 + 72) + 4 * a2), v10, a3, v7[18]);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorBlenderBase::applyTrackBlendedValue  (binary VA: 0xd5a630)
// Original: glitch::collada::CSceneNodeAnimatorBlenderBase::applyTrackBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorBlenderBase::applyTrackBlendedValue(int a1, int a2, int a3, int a4, int a5, int *a6)
{
  volatile int32_t *v6;
  int v7;
  int v8;
  int v9;
  int v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int (*_g4_t_v15)(int, int, uint32_t, int, uint8_t *, uint32_t);
  typedef int _g4_t_v16;
  typedef uint8_t _g4_t_v17[76];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v13)) > _g4_s1 ? (20u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v14)) > _g4_s2 ? (48u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v15)) > _g4_s3 ? (56u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v16)) > _g4_s4 ? (60u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v17)) > _g4_s5 ? (64u + sizeof(_g4_t_v17)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 56u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 60u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 64u);

  v6 = *(volatile int32_t **)(*a6 + 36);
  if ( v6 != nullptr )
    sub_8B1B00(v6 + 1);
  v14 = G4_VCALL<int>(v6, 20, a2);
  sub_5459C0(v6);
  v7 = *a6;
  v16 = *(uint32_t *)(*(uint32_t *)(*a6 + 60) + 4 * a2);
  v8 = *(uint32_t *)(*a6 + 16);
  if ( v8 != 0
    && (v15 = *(int (**)(int, int, uint32_t, int, uint8_t *, uint32_t))(*(uint32_t *)(v8 + 60) + 4 * a2)) != nullptr )
  {
    if ( *(uint32_t *)(a1 + 40) != 0 )
      G4_VCALL<void>(v14, 28, a3, a4, a5, v17);
    else
      G4_VCALL<void>(v14, 16, a3, a4, a5, v17);
    v9 = *(uint32_t *)(v7 + 16);
    LOBYTE(v12) = *(uint8_t *)(*(uint32_t *)(v9 + 48) + a2);
    return v15(v14, v16, *(uint32_t *)(*(uint32_t *)(*a6 + 72) + 4 * a2), v12, v17, *(uint32_t *)(v9 + 72));
  }
  else
  {
    v11 = *(uint32_t *)v14;
    v13 = *(uint32_t *)(*(uint32_t *)(v7 + 72) + 4 * a2);
    if ( *(uint32_t *)(a1 + 40) != 0 )
      return (*(int (**)(int, int, int, int, int, int))(v11 + 36))(v14, a3, a4, a5, v16, v13);
    else
      return (*(int (**)(int, int, int, int, int, int))(v11 + 32))(v14, a3, a4, a5, v16, v13);
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorBlenderBase::computeTrackBlendedValue  (binary VA: 0xd5a830)
// Original: glitch::collada::CSceneNodeAnimatorBlenderBase::computeTrackBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorBlenderBase::computeTrackBlendedValue(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  volatile int32_t *v7;
  int v8;
  int *v10;

  v7 = *(volatile int32_t **)(*(uint32_t *)a7 + 36);
  if ( v7 != nullptr )
    sub_8B1B00(v7 + 1);
  v10 = (int *)G4_VCALL<int>(v7, 20, a2);
  sub_5459C0(v7);
  v8 = *v10;
  if ( *(uint32_t *)(a1 + 40) != 0 )
    return (*(int (**)(int *, int, int, int, int))(v8 + 28))(v10, a3, a4, a5, a6);
  else
    return (*(int (**)(int *, int, int, int, int))(v8 + 16))(v10, a3, a4, a5, a6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorBlenderBase::computeBlendedValue  (binary VA: 0xd5a8e0)
// Original: glitch::collada::CSceneNodeAnimatorBlenderBase::computeBlendedValue
// ----------------------------------------------------------------------------
uint16_t * glitch::collada::CSceneNodeAnimatorBlenderBase::computeBlendedValue(int a1, uint32_t *a2, int a3, uint32_t *a4, int a5)
{
  int v5;
  int v6;
  int v7;
  char v8;
  uint16_t *v9;
  uint32_t **v10;
  uint16_t *result;
  int v12;
  int v13;
  int v14;
  typedef uint16_t *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint16_t *_g4_t_v17;
  typedef char _g4_t_v18;
  typedef uint16_t *_g4_t_v19;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v15)) > _g4_s0 ? (4u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v16)) > _g4_s1 ? (8u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v17)) > _g4_s2 ? (12u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v18)) > _g4_s3 ? (16u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v19)) > _g4_s4 ? (20u + sizeof(_g4_t_v19)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);

  v5 = *(uint32_t *)a5;
  v16 = a2[3];
  v6 = *(uint32_t *)(*(uint32_t *)a5 + 44);
  v7 = *(uint32_t *)a5 + 28;
  if ( v6 != 1 )
  {
    v7 = v5 + 24;
    if ( v6 == 2 )
    {
      v7 = v5 + 32;
      if ( *(uint32_t *)(v5 + 16) == 0 )
        v7 = v5 + 24;
    }
  }
  sub_D434A0((int)(uintptr_t)(&v18), (uint32_t *)(*(uint32_t *)v7 + 8), 0);
  v8 = v18;
  if ( v18 != 0 )
  {
    v9 = v19;
    v10 = (uint32_t **)&v19;
  }
  else
  {
    v10 = (uint32_t **)v19;
    v9 = *(uint16_t **)v19;
  }
  result = (uint16_t *)v10[1];
  v15 = result;
  if ( result != v9 )
  {
    v17 = v9;
    do
    {
      while ( 1 )
      {
        v12 = *v17;
        if ( *(uint32_t *)(*(uint32_t *)(*(uint32_t *)a5 + 60) + 4 * v12) != 0 )
        {
          v13 = *(uint32_t *)(*(uint32_t *)a5 + 12);
          if ( v13 == 0 )
            break;
          v14 = *(uint32_t *)(v13 + 8);
          if ( v14 == 0 || ((1 << v12) & *(uint32_t *)(v14 + 4 * ((int)*v17 >> 5))) != 0 )
            break;
        }
        result = ++v17;
        if ( v15 == v17 )
          goto LABEL_13;
      }
      glitch::collada::CSceneNodeAnimatorBlenderBase::computeTrackBlendedValue(
        a1,
        v12,
        a2[2] + a2[3] * *(uint16_t *)(**(uint32_t **)(a2[1] + 56) + 2 * v12),
        a3,
        v16,
        *(uint32_t *)(*a4 + 8)
      + *(uint32_t *)(*a4 + 12) * *(uint16_t *)(**(uint32_t **)(*(uint32_t *)(*a4 + 4) + 56) + 2 * v12)
      + a4[1] * *(uint8_t *)(**(uint32_t **)(*(uint32_t *)(*a4 + 4) + 52) + v12),
        a5);
      result = ++v17;
    }
    while ( v15 != v17 );
LABEL_13:
    v8 = v18;
  }
  if ( v8 != 0 )
  {
    result = v19;
    if ( v19 != nullptr )
      return (uint16_t *)gll_operator_delete_arr((int)(uintptr_t)(v19));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorBlenderBase::applyBlendedValue  (binary VA: 0xd5aa70)
// Original: glitch::collada::CSceneNodeAnimatorBlenderBase::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorBlenderBase::applyBlendedValue(int a1, uint32_t *a2, int a3, int *a4)
{
  int v4;
  int v5;
  int v6;
  char v7;
  uint16_t *v8;
  uint16_t **v9;
  int result;
  int v11;
  int v12;
  typedef uint16_t *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint16_t *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef char _g4_t_v17;
  typedef uint16_t *_g4_t_v18;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v14)) > _g4_s1 ? (4u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v15)) > _g4_s2 ? (8u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v16)) > _g4_s3 ? (12u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v17)) > _g4_s4 ? (16u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v18)) > _g4_s5 ? (20u + sizeof(_g4_t_v18)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);

  v4 = *a4;
  v14 = a2[3];
  v5 = *(uint32_t *)(*a4 + 44);
  v6 = *a4 + 28;
  if ( v5 != 1 )
  {
    v6 = v4 + 24;
    if ( v5 == 2 )
    {
      v6 = v4 + 32;
      if ( *(uint32_t *)(v4 + 16) == 0 )
        v6 = v4 + 24;
    }
  }
  sub_D434A0((int)(uintptr_t)(&v17), (uint32_t *)(*(uint32_t *)v6 + 8), 0);
  v7 = v17;
  if ( v17 != 0 )
  {
    v8 = v18;
    v9 = &v18;
  }
  else
  {
    v9 = (uint16_t **)v18;
    v8 = *(uint16_t **)v18;
  }
  result = (int)(uintptr_t)(v9[1]);
  v13 = (uint16_t *)result;
  if ( (uint16_t *)result != v8 )
  {
    v15 = v8;
    do
    {
      while ( 1 )
      {
        v16 = *v15;
        result = v16 >> 5;
        if ( *(uint32_t *)(*(uint32_t *)(*a4 + 60) + 4 * v16) != 0 )
        {
          v11 = *(uint32_t *)(*a4 + 12);
          if ( v11 == 0 )
            break;
          v12 = *(uint32_t *)(v11 + 8);
          if ( v12 == 0 || ((1 << v16) & *(uint32_t *)(v12 + 4 * result)) != 0 )
            break;
        }
        if ( v13 == ++v15 )
          goto LABEL_13;
      }
      result = glitch::collada::CSceneNodeAnimatorBlenderBase::applyTrackBlendedValue(
                 a1,
                 v16,
                 a2[2] + a2[3] * *(uint16_t *)(**(uint32_t **)(a2[1] + 56) + 2 * v16),
                 a3,
                 v14,
                 a4);
      ++v15;
    }
    while ( v13 != v15 );
LABEL_13:
    v7 = v17;
  }
  if ( v7 != 0 )
  {
    result = (int)(uintptr_t)(v18);
    if ( v18 != nullptr )
      return gll_operator_delete_arr((int)(uintptr_t)(v18));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorBlenderBase::checkBlendingPassThrought  (binary VA: 0xd5abf0)
// Original: glitch::collada::CSceneNodeAnimatorBlenderBase::checkBlendingPassThrought
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorBlenderBase::checkBlendingPassThrought(float **a1, int a2, int a3, int a4, uint8_t *a5)
{
  float *v5;
  int result;
  float *v7;
  int v8;
  int v9;
  int v10;

  v5 = a1[9];
  if ( v5 != nullptr )
  {
    result = 1;
    if ( v5 == (float *)((char *)&dword_0 + 1) )
    {
      v7 = a1[6];
      v8 = a1[7] - v7;
      if ( v8 != 0 )
      {
        v9 = 0;
        if ( **a1 <= 0.00000011920929f )
        {
          while ( ++v9 != v8 )
          {
            v10 = v9;
            if ( (*a1)[v9] > 0.00000011920929f )
              goto LABEL_11;
          }
          return 1;
        }
        else
        {
          v10 = 0;
LABEL_11:
          *a5 = G4_VCALL<int>(LODWORD(v7[v10]), 104, a2, a3, a4);
          return 0;
        }
      }
    }
  }
  else
  {
    glitch::os::Printer::logf(3, (int)(uintptr_t)("[GLITCH] - Animation Blender - All blending weigths are null"));
    *a5 = 1;
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorBlender::computeAnimationValues  (binary VA: 0xd5acd0)
// Original: glitch::collada::CSceneNodeAnimatorBlender::computeAnimationValues
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorBlender::computeAnimationValues(float **a1, int64_t a2, uint32_t *a3)
{
  int result;
  float *v4;
  int v5;
  signed int v6;
  bool v7;
  typedef int _g4_t_v8;
  typedef void *_g4_t_v9;
  typedef float *_g4_t_v10;
  typedef uint8_t _g4_t_v11;
  typedef uint8_t _g4_t_v12;
  typedef glitch::collada::CSceneNodeAnimatorBlenderBase::Self *_g4_t_v13;
  typedef uint8_t _g4_t_v14;
  typedef void (**_g4_t_v15)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *);
  typedef volatile int32_t *_g4_t_v16;
  typedef glitch::core::Self *_g4_t_v17;
  typedef float *_g4_t_v18;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v8)) > _g4_s0 ? (4u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v9)) > _g4_s1 ? (4u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v10)) > _g4_s2 ? (40u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v11)) > _g4_s3 ? (40u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v12)) > _g4_s4 ? (40u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v13)) > _g4_s5 ? (44u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (63u + sizeof(_g4_t_v14)) > _g4_s6 ? (63u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v15)) > _g4_s7 ? (64u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v16)) > _g4_s8 ? (68u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v17)) > _g4_s9 ? (72u + sizeof(_g4_t_v17)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v18)) > _g4_s10 ? (76u + sizeof(_g4_t_v18)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 40u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 63u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 64u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 68u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 72u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 76u);

  v14 = 0;
  v13 = (glitch::collada::CSceneNodeAnimatorBlenderBase::Self *)(a1 + 10);
  if ( (uint8_t)glitch::collada::CSceneNodeAnimatorBlenderBase::checkBlendingPassThrought(
                          a1 + 10,
                          a2,
                          SHIDWORD(a2),
                          (int)(uintptr_t)(a3),
                          &v14) == 0 )
    return v14;
  glitch::collada::CSceneNodeAnimatorBlenderBase::prepareWeightsTable(v13);
  v4 = a1[19];
  v15 = (void (**)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *))&off_2047EB8;
  v5 = *(uint32_t *)HIDWORD(a2);
  v16 = *(volatile int32_t **)HIDWORD(a2);
  if ( v16 != nullptr )
  {
    v10 = v4;
    sub_8B1B00((volatile int32_t *)(v5 + 4));
    v4 = v10;
  }
  v17 = nullptr;
  v18 = nullptr;
  v15 = (void (**)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20795A0));
  if ( v4 != nullptr )
  {
    v18 = v4;
    v6 = *((uint32_t *)v16 + 12) * (uint32_t)(uintptr_t)(v4);
    if ( v6 > 0 )
      v17 = (glitch::core::Self *)glitch::core::allocProcessBuffer(v6, v8);
  }
  v7 = (uint8_t)glitch::collada::CSceneNodeAnimatorBlender::prepareAnimationValues((uint32_t *)(a1), a2, (int)(uintptr_t)(&v15)) == 0;
  result = 1;
  if ( v7 )
  {
    glitch::collada::CSceneNodeAnimatorBlenderBase::computeBlendedValue((int)(uintptr_t)(v13), (uint32_t *)(&v15), (int)(uintptr_t)(a1[13]), a3, SHIDWORD(a2));
    result = 0;
  }
  v15 = (void (**)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20795A0));
  if ( v17 != nullptr )
  {
    v11 = result;
    glitch::core::releaseProcessBuffer(v17, v9);
    result = v11;
  }
  v15 = (void (**)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *))&off_2047EB8;
  if ( v16 != nullptr )
  {
    v12 = result;
    sub_5459C0(v16);
    return v12;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorBlenderBase::checkBlendingPassThrought  (binary VA: 0xd5ae80)
// Original: glitch::collada::CSceneNodeAnimatorBlenderBase::checkBlendingPassThrought
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorBlenderBase::checkBlendingPassThrought(float **a1, int a2, int a3)
{
  float *v3;
  int result;
  float *v5;
  int v6;
  int v7;
  int v8;

  v3 = a1[9];
  if ( v3 != nullptr )
  {
    result = 1;
    if ( v3 == (float *)((char *)&dword_0 + 1) )
    {
      v5 = a1[6];
      v6 = a1[7] - v5;
      if ( v6 != 0 )
      {
        v7 = 0;
        if ( **a1 <= 0.00000011920929f )
        {
          while ( ++v7 != v6 )
          {
            v8 = v7;
            if ( (*a1)[v7] > 0.00000011920929f )
              goto LABEL_11;
          }
          return 1;
        }
        else
        {
          v8 = 0;
LABEL_11:
          G4_VCALL<void>(LODWORD(v5[v8]), 112, a2, a3);
          return 0;
        }
      }
    }
  }
  else
  {
    glitch::os::Printer::logf(3, (int)(uintptr_t)("[GLITCH] - Animation Blender - All blending weigths are null"));
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorBlender::applyAnimationValues  (binary VA: 0xd5af50)
// Original: glitch::collada::CSceneNodeAnimatorBlender::applyAnimationValues
// ----------------------------------------------------------------------------
volatile int32_t * glitch::collada::CSceneNodeAnimatorBlender::applyAnimationValues(float **a1, int64_t a2)
{
  volatile int32_t *result;
  float *v3;
  int v4;
  signed int v5;
  typedef int _g4_t_v6;
  typedef void *_g4_t_v7;
  typedef float *_g4_t_v8;
  typedef glitch::collada::CSceneNodeAnimatorBlenderBase::Self *_g4_t_v9;
  typedef void (**_g4_t_v10)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *);
  typedef volatile int32_t *_g4_t_v11;
  typedef glitch::core::Self *_g4_t_v12;
  typedef float *_g4_t_v13;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v7)) > _g4_s1 ? (4u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v8)) > _g4_s2 ? (24u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v9)) > _g4_s3 ? (28u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v10)) > _g4_s4 ? (32u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v11)) > _g4_s5 ? (36u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v12)) > _g4_s6 ? (40u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v13)) > _g4_s7 ? (44u + sizeof(_g4_t_v13)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 36u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);

  v9 = (glitch::collada::CSceneNodeAnimatorBlenderBase::Self *)(a1 + 10);
  result = (volatile int32_t *)glitch::collada::CSceneNodeAnimatorBlenderBase::checkBlendingPassThrought(
                                        a1 + 10,
                                        a2,
                                        SHIDWORD(a2));
  if ( (uint8_t)(uintptr_t)(result) != 0 )
  {
    glitch::collada::CSceneNodeAnimatorBlenderBase::prepareWeightsTable(v9);
    v3 = a1[19];
    v10 = (void (**)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *))&off_2047EB8;
    v4 = *(uint32_t *)HIDWORD(a2);
    v11 = *(volatile int32_t **)HIDWORD(a2);
    if ( v11 != nullptr )
    {
      v8 = v3;
      sub_8B1B00((volatile int32_t *)(v4 + 4));
      v3 = v8;
    }
    v12 = nullptr;
    v13 = nullptr;
    v10 = (void (**)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20795A0));
    if ( v3 != nullptr )
    {
      v13 = v3;
      v5 = *((uint32_t *)v11 + 12) * (uint32_t)(uintptr_t)(v3);
      if ( v5 > 0 )
        v12 = (glitch::core::Self *)glitch::core::allocProcessBuffer(v5, v6);
    }
    if ( (uint8_t)glitch::collada::CSceneNodeAnimatorBlender::prepareAnimationValues((uint32_t *)(a1), a2, (int)(uintptr_t)(&v10)) == 0 )
      glitch::collada::CSceneNodeAnimatorBlenderBase::applyBlendedValue((int)(uintptr_t)(v9), (uint32_t *)(&v10), (int)(uintptr_t)(a1[13]), (int *)HIDWORD(a2));
    v10 = (void (**)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20795A0));
    if ( v12 != nullptr )
      glitch::core::releaseProcessBuffer(v12, v7);
    v10 = (void (**)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *))&off_2047EB8;
    result = v11;
    if ( v11 != nullptr )
      return (volatile int32_t *)sub_5459C0(v11);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSet::getAnimationLength  (binary VA: 0xd5b0b0)
// Original: glitch::collada::CSceneNodeAnimatorSet::getAnimationLength
// ----------------------------------------------------------------------------
long double glitch::collada::CSceneNodeAnimatorSet::getAnimationLength(glitch::collada::CSceneNodeAnimatorSet::Self *self, int a2, unsigned int a3)
{
  uint32_t *AnimationClipLibrary;
  int v4;
  float v5; // xmm0_4
  int v6;

  AnimationClipLibrary = (uint32_t *)glitch::collada::CColladaDatabase::getAnimationClipLibrary((glitch::collada::CColladaDatabase::Self *)(*(uint32_t *)(*((uint32_t *)self + 10) + 68) + 20 * a2));
  if ( *AnimationClipLibrary != 0 )
  {
    return (float)(*(uint32_t *)((char *)&AnimationClipLibrary[4 * a3 + 3] + AnimationClipLibrary[1])
                 - *(uint32_t *)((char *)&AnimationClipLibrary[4 * a3 + 2] + AnimationClipLibrary[1]));
  }
  else
  {
    v4 = *((uint32_t *)self + 10);
    v5 = 0.0;
    v6 = *(uint32_t *)(v4 + 116);
    if ( a3 < (*(uint32_t *)(v4 + 120) - v6) >> 2 )
      return *(float *)(v6 + 4 * a3);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSet::getAnimationStart  (binary VA: 0xd5b150)
// Original: glitch::collada::CSceneNodeAnimatorSet::getAnimationStart
// ----------------------------------------------------------------------------
long double glitch::collada::CSceneNodeAnimatorSet::getAnimationStart(glitch::collada::CSceneNodeAnimatorSet::Self *self, unsigned int a2, int a3)
{
  uint32_t *AnimationClipLibrary;
  int v4;
  float v5; // xmm0_4
  int v6;

  AnimationClipLibrary = (uint32_t *)glitch::collada::CColladaDatabase::getAnimationClipLibrary((glitch::collada::CColladaDatabase::Self *)(*(uint32_t *)(*((uint32_t *)self + 10) + 68) + 20 * a2));
  if ( *AnimationClipLibrary != 0 )
  {
    return (float)*(int *)((char *)&AnimationClipLibrary[4 * a3 + 2] + AnimationClipLibrary[1]);
  }
  else
  {
    v4 = *((uint32_t *)self + 10);
    v5 = 0.0;
    v6 = *(uint32_t *)(v4 + 92);
    if ( a2 < (*(uint32_t *)(v4 + 96) - v6) >> 2 )
      return *(float *)(v6 + 4 * a2);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSet::getAnimationEnd  (binary VA: 0xd5b1e0)
// Original: glitch::collada::CSceneNodeAnimatorSet::getAnimationEnd
// ----------------------------------------------------------------------------
long double glitch::collada::CSceneNodeAnimatorSet::getAnimationEnd(glitch::collada::CSceneNodeAnimatorSet::Self *self, unsigned int a2, int a3)
{
  uint32_t *AnimationClipLibrary;
  int v4;
  float v5; // xmm0_4
  int v6;

  AnimationClipLibrary = (uint32_t *)glitch::collada::CColladaDatabase::getAnimationClipLibrary((glitch::collada::CColladaDatabase::Self *)(*(uint32_t *)(*((uint32_t *)self + 10) + 68) + 20 * a2));
  if ( *AnimationClipLibrary != 0 )
  {
    return (float)*(int *)((char *)&AnimationClipLibrary[4 * a3 + 3] + AnimationClipLibrary[1]);
  }
  else
  {
    v4 = *((uint32_t *)self + 10);
    v5 = 0.0;
    v6 = *(uint32_t *)(v4 + 104);
    if ( a2 < (*(uint32_t *)(v4 + 108) - v6) >> 2 )
      return *(float *)(v6 + 4 * a2);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSet::setCurrentAnimation  (binary VA: 0xd5b270)
// Original: glitch::collada::CSceneNodeAnimatorSet::setCurrentAnimation
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorSet::setCurrentAnimation(glitch::collada::CSceneNodeAnimatorSet::Self *self, unsigned int a2)
{
  int v2;
  int v3;
  uint32_t *AnimationClipLibrary;
  float *v5;
  int v6;
  int v7;
  int v8;
  volatile int32_t *v9;
  uint32_t *v10;
  int v12;
  int v13;
  volatile int32_t *v14;
  int v15;
  int v16;
  float AnimationStart;
  float *v18;
  uint32_t *v19;
  float AnimationEnd;
  void (*v21)(float *, uint32_t, uint32_t, int);

  v2 = *((uint32_t *)self + 10);
  v3 = *(uint32_t *)(v2 + 36);
  *((uint32_t *)self + 15) = a2;
  *((uint32_t *)self + 14) = a2 * v3;
  AnimationClipLibrary = (uint32_t *)glitch::collada::CColladaDatabase::getAnimationClipLibrary((glitch::collada::CColladaDatabase::Self *)(20 * a2 + *(uint32_t *)(v2 + 68)));
  *((uint32_t *)self + 17) = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 10) + 68)
                                                                         + 20 * a2)
                                                             + 16)
                                                 + 32)
                                     + 56)
                         & 1;
  v19 = AnimationClipLibrary;
  v5 = *(float **)G4_VCALL<int>(self, 68);
  v18 = v5;
  if ( *v19 != 0 )
  {
    glitch::collada::CTimelineController::setAnimationClips(v5, v19);
  }
  else
  {
    glitch::collada::CTimelineController::setAnimationClips(v5, 0);
    v21 = *(void (**)(float *, uint32_t, uint32_t, int))(*(uint32_t *)v18 + 88);
    AnimationEnd = glitch::collada::CSceneNodeAnimatorSet::getAnimationEnd(self, a2, 0);
    AnimationStart = glitch::collada::CSceneNodeAnimatorSet::getAnimationStart(self, a2, 0);
    v21(v18, LODWORD(AnimationStart), LODWORD(AnimationEnd), 1);
  }
  v6 = *((uint32_t *)self + 10);
  *((float *)self + 6) = v18[5] - v18[4];
  v7 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(v6 + 68) + 20 * a2) + 16) + 32);
  v8 = *(uint32_t *)(v7 + 48);
  if ( v8 != 0 )
  {
    v12 = v7 + v8 + 48;
    v16 = 0;
    v13 = opNew(0x18u);
    *(uint32_t *)(v13 + 4) = 0;
    *(uint32_t *)(v13 + 8) = (uint32_t)(uintptr_t)(sub_D3FD80);
    *(uint32_t *)(v13 + 12) = 0;
    *(uint32_t *)v13 = ((uint32_t)(uintptr_t)&off_207B8C8);
    *(uint32_t *)(v13 + 16) = -1;
    *(uint32_t *)(v13 + 20) = v12;
    sub_8B1B00((volatile int32_t *)(v13 + 4));
    v14 = *((volatile int32_t **)self + 7);
    *((uint32_t *)self + 7) = v13;
    if ( v14 != nullptr )
    {
      sub_5459C0(v14);
      v13 = *((uint32_t *)self + 7);
    }
    v15 = *((uint32_t *)self + 9);
    *(uint32_t *)(v13 + 8) = *((uint32_t *)self + 8);
    *(uint32_t *)(v13 + 12) = v15;
  }
  else
  {
    v9 = *((volatile int32_t **)self + 7);
    *((uint32_t *)self + 7) = 0;
    if ( v9 != nullptr )
      sub_5459C0(v9);
  }
  v10 = (uint32_t *)G4_VCALL<int>(self, 68, v16);
  return G4_VCALL<int>(*v10, 92, *((uint32_t *)self + 7));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSet::getAnimationDictionary  (binary VA: 0xd5b450)
// Original: glitch::collada::CSceneNodeAnimatorSet::getAnimationDictionary
// ----------------------------------------------------------------------------
char * glitch::collada::CSceneNodeAnimatorSet::getAnimationDictionary(glitch::collada::CSceneNodeAnimatorSet::Self *self)
{
  return (char *)self + 76;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSet::setMode  (binary VA: 0xd5b460)
// Original: glitch::collada::CSceneNodeAnimatorSet::setMode
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorSet::setMode(int a1, int a2)
{
  *(uint32_t *)(a1 + 64) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSet::getCurrentAnimation  (binary VA: 0xd5b470)
// Original: glitch::collada::CSceneNodeAnimatorSet::getCurrentAnimation
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorSet::getCurrentAnimation(glitch::collada::CSceneNodeAnimatorSet::Self *self)
{
  return *((uint32_t *)self + 15);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSet::getAnimationData  (binary VA: 0xd5b480)
// Original: glitch::collada::CSceneNodeAnimatorSet::getAnimationData
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorSet::getAnimationData(glitch::collada::CSceneNodeAnimatorSet::Self *self, float a2, int a3, glitch::collada::CColladaDatabase::Self *a4, int a5, int a6)
{
  glitch::collada::CColladaDatabase::Self *v6;
  int v7;
  int AnimationClipIndex;
  int AnimationClip;
  __m128 v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;

  v6 = (glitch::collada::CColladaDatabase::Self *)(*(uint32_t *)(*((uint32_t *)self + 10) + 68) + 20 * *((uint32_t *)self + 15));
  v7 = *(uint32_t *)G4_VCALL<int>(self, 68, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27);
  AnimationClipIndex = 0;
  if ( v7 != 0 )
  {
    v28 = G4_VCALL<int>(v7, 60);
    AnimationClip = glitch::collada::CColladaDatabase::getAnimationClip(v6, v28);
    AnimationClipIndex = v28;
    if ( (float)*(int *)(AnimationClip + 4) > a2 || a2 > (float)*(int *)(AnimationClip + 8) )
      AnimationClipIndex = glitch::collada::CAnimationSet::getAnimationClipIndex(
                             *((glitch::collada::CAnimationSet::Self **)self + 10),
                             *((uint32_t *)self + 15),
                             a2);
  }
  v10 = _mm_cmple_ps(G4_BITCAST<__m128>(xmmword_1C7C220), g4_m128_from<__m128>(LODWORD(a2)));
  a4 = v6;
  a5 = 0;
  v11 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)v6 + 16) + 32);
  v12 = _mm_cvtsi128_si32(
          _mm_xor_si128(
            _mm_cvttps_epi32(_mm_sub_ps(g4_m128_from<__m128>(LODWORD(a2)), _mm_and_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v10))),
            _mm_slli_epi32(g4_m128_raw(G4_BITCAST<__m128i>(v10)), 0x1Fu)));
  if ( *(uint32_t *)(v11 + 60) != 0 )
  {
    v29 = v12;
    v13 = glitch::collada::CColladaDatabase::getAnimationClip(v6, AnimationClipIndex);
    a5 = v13;
    v12 = v29;
  }
  else
  {
    v13 = v11 + 24;
    a5 = v13;
  }
  if ( *(uint32_t *)(v13 + 4) >= v12 )
    v12 = *(uint32_t *)(v13 + 4);
  v14 = *(uint32_t *)(v13 + 8);
  if ( v12 > v14 )
    v12 = v14;
  a6 = v12;
  glitch::collada::CAnimationStreamingManager::getAnimationBlock(
    glitch::collada::CAnimationStreamingManager::Instance,
    (int)(uintptr_t)(&a4),
    (glitch::collada::CAnimationBlock::Self **)self + 18);
  v15 = *((uint32_t *)self + 18);
  if ( v15 != 0 )
    return *(uint32_t *)(*(uint32_t *)(v15 + 32) + 16);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSet::getAnimationValue  (binary VA: 0xd5b5e0)
// Original: glitch::collada::CSceneNodeAnimatorSet::getAnimationValue
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorSet::getAnimationValue(glitch::collada::CSceneNodeAnimatorSet::Self *self, int a2, int64_t a3)
{
  uint32_t *v3;
  int v4;
  int v5;
  int result;
  int AnimationData;
  int v8;
  int v9;
  size_t v10;
  typedef void *_g4_t_dest;
  typedef int _g4_t_n;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_n_4;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint32_t _g4_t_v19[3];
  typedef uint32_t _g4_t_v20[3];
  typedef char _g4_t_v21;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_dest)) > _g4_s0 ? (0u + sizeof(_g4_t_dest)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_n)) > _g4_s1 ? (8u + sizeof(_g4_t_n)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_n_4)) > _g4_s2 ? (12u + sizeof(_g4_t_n_4)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v14)) > _g4_s3 ? (16u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v15)) > _g4_s4 ? (20u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v16)) > _g4_s5 ? (40u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v17)) > _g4_s6 ? (40u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v18)) > _g4_s7 ? (44u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v19)) > _g4_s8 ? (52u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v20)) > _g4_s9 ? (64u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (77u + sizeof(_g4_t_v21)) > _g4_s10 ? (77u + sizeof(_g4_t_v21)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 0u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 8u);
  _g4_t_n_4 &n_4 = *reinterpret_cast<_g4_t_n_4 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 52u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 64u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 77u);

  v18 = *((uint32_t *)self + 5);
  v3 = *((uint32_t **)self + 10);
  v4 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(v3[17] + 20 * *((uint32_t *)self + 15)) + 16) + 32) + 20);
  v5 = v3[20] + 8 * (a2 + *((uint32_t *)self + 14));
  result = *(uint32_t *)v5;
  if ( *(uint32_t *)v5 == 1 )
  {
    v17 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(v3[17] + 20 * *((uint32_t *)self + 15)) + 16) + 32) + 20);
    dest = *(void **)(v3[6] + 4 * a2);
    v10 = G4_VCALL<int>(dest, 8);
    memcpy((void *)HIDWORD(a3), *(const void **)(v5 + 4), v10);
    result = *(uint32_t *)v5;
    v4 = v17;
  }
  if ( result == 2 )
  {
    v16 = v4;
    v20[0] = 0;
    v20[1] = -8388609;
    v20[2] = 0;
    v21 = 0;
    AnimationData = glitch::collada::CSceneNodeAnimatorSet::getAnimationData(self, *(float *)&a3, n, n_4, v14, v15);
    v8 = *(uint32_t *)(v5 + 4);
    v19[1] = AnimationData;
    v19[0] = v8;
    v19[2] = (uint32_t)(uintptr_t)(v20);
    if ( v16 != 0 )
      v9 = *((uint32_t *)self + 11);
    else
      v9 = *((uint32_t *)self + 11) + 4 * a2;
    return (*(int (**)(uint32_t, uint32_t *, uint32_t, uint32_t, int, bool))(**(uint32_t **)(v8 + 20) + 68))(
             *(uint32_t *)(v8 + 20),
             v19,
             a3,
             HIDWORD(a3),
             v9,
             v18 != 1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSet::computeAnimationNoHandlingAdditiveValuesEx  (binary VA: 0xd5b740)
// Original: glitch::collada::CSceneNodeAnimatorSet::computeAnimationNoHandlingAdditiveValuesEx
// ----------------------------------------------------------------------------
volatile int32_t * glitch::collada::CSceneNodeAnimatorSet::computeAnimationNoHandlingAdditiveValuesEx(glitch::collada::CSceneNodeAnimatorSet::Self *a1, float a2, int a3, uint32_t *a4, int a5, void (***a6)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *__hidden self), int a7, void (**a8)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *__hidden self), volatile int32_t *a9, glitch::core::Self *a10, int a11, char a12, glitch::collada::CSceneNodeAnimatorSet::Self *a13)
{
  int v13;
  int v14;
  signed int v15;
  int v16;
  uint32_t *v17;
  int v18;
  int v19;
  int v20;
  char v21;
  glitch::collada::CSceneNodeAnimatorSet::Self *v22;
  uint32_t **v23;
  int v24;
  int v25;
  int v26;
  uint32_t *v27;
  int v28;
  volatile int32_t *result;
  int *retaddr;
  glitch::collada::CSceneNodeAnimatorSet::Self *v47;
  glitch::collada::CSceneNodeAnimatorSet::Self *v48;
  int v49;
  int v50;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef void (**_g4_t_v39)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *);
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int *_g4_t_v43;
  typedef float _g4_t_v44;
  typedef int _g4_t_v45;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v30)) > _g4_s0 ? (4u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v31)) > _g4_s1 ? (8u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v32)) > _g4_s2 ? (12u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v33)) > _g4_s3 ? (16u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v34)) > _g4_s4 ? (20u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v35)) > _g4_s5 ? (24u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v36)) > _g4_s6 ? (28u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v37)) > _g4_s7 ? (40u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v38)) > _g4_s8 ? (44u + sizeof(_g4_t_v38)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v39)) > _g4_s9 ? (48u + sizeof(_g4_t_v39)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v40)) > _g4_s10 ? (52u + sizeof(_g4_t_v40)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v41)) > _g4_s11 ? (56u + sizeof(_g4_t_v41)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v42)) > _g4_s12 ? (60u + sizeof(_g4_t_v42)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v43)) > _g4_s13 ? (80u + sizeof(_g4_t_v43)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v44)) > _g4_s14 ? (84u + sizeof(_g4_t_v44)) : _g4_s14,
    _g4_s16 = (88u + sizeof(_g4_t_v45)) > _g4_s15 ? (88u + sizeof(_g4_t_v45)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 4u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 8u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 16u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 20u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 24u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 28u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 40u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 44u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 48u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 52u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 56u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 60u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 80u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 84u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 88u);

  v39 = (void (**)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *))&off_2047EB8;
  v13 = 0;
  v14 = *(uint32_t *)a3;
  v40 = *(uint32_t *)a3;
  if ( v40 != 0 )
  {
    sub_8B1B00((volatile int32_t *)(v14 + 4));
    v13 = v40;
  }
  v15 = 2 * *(uint32_t *)(v13 + 48);
  v41 = 0;
  v42 = 2;
  v39 = (void (**)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20795A0));
  if ( v15 > 0 )
    v41 = glitch::core::allocProcessBuffer(v15, v30);
  v16 = *(uint32_t *)a1;
  *((uint32_t *)a1 + 16) = 0;
  v17 = (uint32_t *)(*(int (**)(glitch::collada::CSceneNodeAnimatorSet::Self *, int, int, int, int, int, int, int, void (***)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *), uint32_t, int, int))(v16 + 68))(
                    a1,
                    v30,
                    v31,
                    v32,
                    v33,
                    v34,
                    v35,
                    v36,
                    &v39,
                    0,
                    v37,
                    v38);
  v44 = ((long double (*)(uint32_t))*(uint32_t *)(*(uint32_t *)*v17 + 64))(*v17);
  glitch::collada::CSceneNodeAnimatorSet::computeAnimationNoHandlingValuesEx(a1, v44, a3, (int)(uintptr_t)(&a4));
  a6 = &v39;
  a7 = 1;
  glitch::collada::CSceneNodeAnimatorSet::computeAnimationNoHandlingValuesEx(a1, a2, a3, (int)(uintptr_t)(&a6));
  *((uint32_t *)a1 + 16) = 1;
  v18 = *(uint32_t *)a3;
  v19 = *(uint32_t *)(*(uint32_t *)a3 + 44);
  v20 = *(uint32_t *)a3 + 28;
  if ( v19 != 1 )
  {
    v20 = v18 + 24;
    if ( v19 == 2 )
    {
      v20 = v18 + 32;
      if ( *(uint32_t *)(v18 + 16) == 0 )
        v20 = v18 + 24;
    }
  }
  sub_D434A0((int)(uintptr_t)(&a12), (uint32_t *)(*(uint32_t *)v20 + 8), 0);
  v21 = a12;
  if ( a12 != 0 )
  {
    v22 = a13;
    v23 = (uint32_t **)&a13;
  }
  else
  {
    v23 = (uint32_t **)a13;
    v22 = *(glitch::collada::CSceneNodeAnimatorSet::Self **)a13;
  }
  v47 = (glitch::collada::CSceneNodeAnimatorSet::Self *)v23[1];
  if ( v47 != v22 )
  {
    v48 = v22;
    do
    {
      while ( 1 )
      {
        v24 = *(uint16_t *)v48;
        v49 = 1 << *(uint16_t *)v48;
        if ( *(uint32_t *)(*(uint32_t *)(*(uint32_t *)v49 + 60) + 4 * v24) != 0 )
        {
          v25 = *(uint32_t *)(*(uint32_t *)v49 + 12);
          if ( v25 == 0 )
            break;
          v26 = *(uint32_t *)(v25 + 8);
          if ( v26 == 0 || (v49 & *(uint32_t *)(v26 + 4 * ((int)*(uint16_t *)v48 >> 5))) != 0 )
            break;
        }
        v48 = (glitch::collada::CSceneNodeAnimatorSet::Self *)((char *)v48 + 2);
        if ( v47 == v48 )
          goto LABEL_17;
      }
      v27 = (uint32_t *)G4_VCALL<int>(v47, 84);
      retaddr = (int *)G4_VCALL<int>(*v27, 20, v24);
      v50 = *retaddr;
      v45 = *(uint32_t *)(*a4 + 8)
          + *(uint32_t *)(*a4 + 12) * *(uint16_t *)(**(uint32_t **)(*(uint32_t *)(*a4 + 4) + 56) + 2 * v24)
          + a4[1] * *(uint8_t *)(**(uint32_t **)(*(uint32_t *)(*a4 + 4) + 52) + v24);
      v28 = *(uint16_t *)(**((uint32_t **)a9 + 14) + 2 * v24);
      v43 = retaddr;
      LODWORD(v44) = (uint32_t)(uintptr_t)((char *)a10 + a11 * v28);
      (*(void (**)(int *))(v50 + 88))(retaddr);
      v48 = (glitch::collada::CSceneNodeAnimatorSet::Self *)((char *)v48 + 2);
    }
    while ( v47 != v48 );
LABEL_17:
    v21 = a12;
  }
  if ( v21 != 0 && a13 != nullptr )
    gll_operator_delete_arr((int)(uintptr_t)(a13));
  a8 = (void (**)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20795A0));
  if ( a10 != nullptr )
    glitch::core::releaseProcessBuffer(a10, (void *)LODWORD(v44));
  a8 = (void (**)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *))&off_2047EB8;
  result = a9;
  if ( a9 != nullptr )
    return (volatile int32_t *)sub_5459C0(a9);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSet::computeAnimationNoHandlingValuesEx  (binary VA: 0xd5b9f0)
// Original: glitch::collada::CSceneNodeAnimatorSet::computeAnimationNoHandlingValuesEx
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorSet::computeAnimationNoHandlingValuesEx(int **a1, int64_t a2, uint32_t *a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int result;
  uint16_t *v8;
  uint32_t **v9;
  int v10;
  int v11;
  int v12;
  int v13;
  void *v14;
  int *v15;
  int *v16;
  int *v17;
  int v18;
  int v19;
  int v20;
  char v21;
  uint32_t **v22;
  uint16_t *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  void *v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  char v34;
  uint32_t **v35;
  uint16_t *v36;
  int v37;
  int v38;
  int v39;
  int v40;
  void *v41;
  int v42;
  int v43;
  typedef int _g4_t_v44;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef void (***_g4_t_v47)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *);
  typedef int _g4_t_v48;
  typedef void (**_g4_t_v49)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *);
  typedef volatile int32_t *_g4_t_v50;
  typedef glitch::core::Self *_g4_t_v51;
  typedef int _g4_t_v52;
  typedef char _g4_t_v53;
  typedef glitch::collada::CSceneNodeAnimatorSet::Self *_g4_t_v54;
  typedef uint16_t *_g4_t_v55;
  typedef bool _g4_t_v56;
  typedef bool _g4_t_v57;
  typedef uint32_t *_g4_t_AnimationData;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef uint16_t *_g4_t_v64;
  typedef uint16_t *_g4_t_v65;
  typedef uint16_t *_g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef float _g4_t_v69;
  typedef uint32_t _g4_t_v70[3];
  typedef int _g4_t_v71;
  typedef uint32_t *_g4_t_v72;
  typedef uint32_t *_g4_t_v73;
  typedef char _g4_t_v74;
  typedef uint16_t *_g4_t_v75;
  typedef char _g4_t_v76;
  typedef uint16_t *_g4_t_v77;
  typedef uint8_t _g4_t_v78;
  typedef uint16_t *_g4_t_v79;
  typedef uint32_t _g4_t_v80[7];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (8u + sizeof(_g4_t_v44)) > _g4_s0 ? (8u + sizeof(_g4_t_v44)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v45)) > _g4_s1 ? (12u + sizeof(_g4_t_v45)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v46)) > _g4_s2 ? (16u + sizeof(_g4_t_v46)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v47)) > _g4_s3 ? (20u + sizeof(_g4_t_v47)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v48)) > _g4_s4 ? (24u + sizeof(_g4_t_v48)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v49)) > _g4_s5 ? (28u + sizeof(_g4_t_v49)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v50)) > _g4_s6 ? (32u + sizeof(_g4_t_v50)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v51)) > _g4_s7 ? (36u + sizeof(_g4_t_v51)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v52)) > _g4_s8 ? (40u + sizeof(_g4_t_v52)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v53)) > _g4_s9 ? (44u + sizeof(_g4_t_v53)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v54)) > _g4_s10 ? (48u + sizeof(_g4_t_v54)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v55)) > _g4_s11 ? (64u + sizeof(_g4_t_v55)) : _g4_s11,
    _g4_s13 = (70u + sizeof(_g4_t_v56)) > _g4_s12 ? (70u + sizeof(_g4_t_v56)) : _g4_s12,
    _g4_s14 = (71u + sizeof(_g4_t_v57)) > _g4_s13 ? (71u + sizeof(_g4_t_v57)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_AnimationData)) > _g4_s14 ? (72u + sizeof(_g4_t_AnimationData)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v59)) > _g4_s15 ? (76u + sizeof(_g4_t_v59)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v60)) > _g4_s16 ? (76u + sizeof(_g4_t_v60)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v61)) > _g4_s17 ? (76u + sizeof(_g4_t_v61)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v62)) > _g4_s18 ? (80u + sizeof(_g4_t_v62)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v63)) > _g4_s19 ? (80u + sizeof(_g4_t_v63)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v64)) > _g4_s20 ? (84u + sizeof(_g4_t_v64)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v65)) > _g4_s21 ? (84u + sizeof(_g4_t_v65)) : _g4_s21,
    _g4_s23 = (84u + sizeof(_g4_t_v66)) > _g4_s22 ? (84u + sizeof(_g4_t_v66)) : _g4_s22,
    _g4_s24 = (88u + sizeof(_g4_t_v67)) > _g4_s23 ? (88u + sizeof(_g4_t_v67)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v68)) > _g4_s24 ? (96u + sizeof(_g4_t_v68)) : _g4_s24,
    _g4_s26 = (112u + sizeof(_g4_t_v69)) > _g4_s25 ? (112u + sizeof(_g4_t_v69)) : _g4_s25,
    _g4_s27 = (120u + sizeof(_g4_t_v70)) > _g4_s26 ? (120u + sizeof(_g4_t_v70)) : _g4_s26,
    _g4_s28 = (132u + sizeof(_g4_t_v71)) > _g4_s27 ? (132u + sizeof(_g4_t_v71)) : _g4_s27,
    _g4_s29 = (136u + sizeof(_g4_t_v72)) > _g4_s28 ? (136u + sizeof(_g4_t_v72)) : _g4_s28,
    _g4_s30 = (140u + sizeof(_g4_t_v73)) > _g4_s29 ? (140u + sizeof(_g4_t_v73)) : _g4_s29,
    _g4_s31 = (144u + sizeof(_g4_t_v74)) > _g4_s30 ? (144u + sizeof(_g4_t_v74)) : _g4_s30,
    _g4_s32 = (148u + sizeof(_g4_t_v75)) > _g4_s31 ? (148u + sizeof(_g4_t_v75)) : _g4_s31,
    _g4_s33 = (160u + sizeof(_g4_t_v76)) > _g4_s32 ? (160u + sizeof(_g4_t_v76)) : _g4_s32,
    _g4_s34 = (164u + sizeof(_g4_t_v77)) > _g4_s33 ? (164u + sizeof(_g4_t_v77)) : _g4_s33,
    _g4_s35 = (176u + sizeof(_g4_t_v78)) > _g4_s34 ? (176u + sizeof(_g4_t_v78)) : _g4_s34,
    _g4_s36 = (180u + sizeof(_g4_t_v79)) > _g4_s35 ? (180u + sizeof(_g4_t_v79)) : _g4_s35,
    _g4_s37 = (192u + sizeof(_g4_t_v80)) > _g4_s36 ? (192u + sizeof(_g4_t_v80)) : _g4_s36
  };
  alignas(16) uint8_t _g4_sf[_g4_s37];
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 8u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 12u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 16u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 20u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 24u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 28u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 32u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 36u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 40u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 44u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 48u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 64u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 70u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 71u);
  _g4_t_AnimationData &AnimationData = *reinterpret_cast<_g4_t_AnimationData *>(_g4_sf + 72u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 76u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 76u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 76u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 80u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 80u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 84u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 84u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 84u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 88u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 96u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 112u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 120u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 132u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 136u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 140u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 144u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 148u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 160u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 164u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 176u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 180u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 192u);

  if ( a1[16] == (int *)((char *)&dword_0 + 1) && a1[17] != (int *)((char *)&dword_0 + 1) )
    return (int)(uintptr_t)glitch::collada::CSceneNodeAnimatorSet::computeAnimationNoHandlingAdditiveValuesEx(
                  (glitch::collada::CSceneNodeAnimatorSet::Self *)a1,
                  *(float *)&a2,
                  SHIDWORD(a2),
                  a3,
                  v46,
                  v47,
                  v48,
                  v49,
                  v50,
                  v51,
                  v52,
                  v53,
                  v54);
  v56 = a1[5] != (int *)((char *)&dword_0 + 1);
  v57 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1[10][17] + 20 * (uint32_t)(uintptr_t)(a1[15])) + 16) + 32) + 20) != 0;
  AnimationData = (uint32_t *)glitch::collada::CSceneNodeAnimatorSet::getAnimationData(
                              (glitch::collada::CSceneNodeAnimatorSet::Self *)a1,
                              *(float *)&a2,
                              v44,
                              v45,
                              v46,
                              (int)(uintptr_t)(v47));
  v80[0] = 0;
  BYTE1(v80[3]) = v57;
  v80[1] = -8388609;
  v80[2] = 0;
  v3 = *(uint32_t *)(*(uint32_t *)HIDWORD(a2) + 16);
  v67 = v3;
  if ( v3 != 0 )
    sub_8B1B00((volatile int32_t *)(v3 + 4));
  if ( AnimationData != nullptr && *AnimationData == 2 )
  {
    v15 = a1[10];
    v16 = a1[15];
    v68 = 0;
    v70[0] = glitch::collada::CColladaDatabase::getAnimation(
               (glitch::collada::CColladaDatabase::Self *)(v15[17] + 20 * (uint32_t)(uintptr_t)(v16)),
               0);
    v70[1] = (uint32_t)(uintptr_t)(AnimationData);
    v17 = a1[11];
    v70[2] = (uint32_t)(uintptr_t)(v80);
    if ( ((uint8_t)sub_D41960(v70, &v68, *(float *)&a2, &v69, *v17) & v56) == 0 )
    {
      *a1[11] = v68;
LABEL_33:
      v18 = *(uint32_t *)HIDWORD(a2);
      v19 = *(uint32_t *)(*(uint32_t *)HIDWORD(a2) + 44);
      v20 = *(uint32_t *)HIDWORD(a2) + 28;
      if ( v19 != 1 )
      {
        v20 = v18 + 24;
        if ( v19 == 2 )
        {
          v20 = v18 + 32;
          if ( *(uint32_t *)(v18 + 16) == 0 )
            v20 = v18 + 24;
        }
      }
      sub_D434A0((int)(uintptr_t)(&v76), (uint32_t *)(*(uint32_t *)v20 + 8), 0);
      v21 = v76;
      if ( v76 != 0 )
      {
        v23 = v77;
        v22 = (uint32_t **)&v77;
      }
      else
      {
        v22 = (uint32_t **)v77;
        v23 = *(uint16_t **)v77;
      }
      result = (int)(uintptr_t)(v22[1]);
      v62 = result;
      if ( (uint16_t *)result != v23 )
      {
        v65 = v23;
        do
        {
          v24 = *v65;
          result = 1 << v24;
          v25 = *(uint32_t *)HIDWORD(a2);
          if ( *(uint32_t *)(*(uint32_t *)(*(uint32_t *)HIDWORD(a2) + 60) + 4 * v24) != 0 )
          {
            v26 = *(uint32_t *)(v25 + 12);
            if ( (v26 == 0
               || (v27 = *(uint32_t *)(v26 + 8)) == 0
               || (result & *(uint32_t *)(v27 + 4 * ((int)*v65 >> 5))) != 0)
              && (*(uint32_t *)(*(uint32_t *)(v67 + 60) + 4 * v24) == 0
               || *(uint8_t *)((result = *(uint32_t *)(v67 + 48)) + v24) == 0) )
            {
              v60 = a1[10][20] + 8 * ((uint32_t)(uintptr_t)(a1[14]) + v24);
              v28 = (void *)(*(uint32_t *)(*a3 + 8)
                           + *(uint32_t *)(*a3 + 12)
                           * *(uint16_t *)(**(uint32_t **)(*(uint32_t *)(*a3 + 4) + 56) + 2 * v24)
                           + a3[1] * *(uint8_t *)(**(uint32_t **)(*(uint32_t *)(*a3 + 4) + 52) + v24));
              result = *(uint32_t *)v60;
              if ( *(uint32_t *)v60 == 2 )
              {
                v71 = *(uint32_t *)(v60 + 4);
                v72 = AnimationData;
                v73 = v80;
                result = (*(int (**)(uint32_t, int *, int, void *))(**(uint32_t **)(v71 + 20) + 48))(
                           *(uint32_t *)(v71 + 20),
                           &v71,
                           v68,
                           v28);
              }
              else if ( result == 1 )
              {
                result = (int)(uintptr_t)memcpy(
                                v28,
                                *(const void **)(v60 + 4),
                                *(uint8_t *)(**(uint32_t **)(v25 + 52) + v24));
              }
            }
          }
          ++v65;
        }
        while ( (uint16_t *)v62 != v65 );
        v21 = v76;
      }
      if ( v21 == 0 )
        goto LABEL_26;
      result = (int)(uintptr_t)(v77);
      if ( v77 == nullptr )
        goto LABEL_26;
      goto LABEL_25;
    }
    if ( a1[5] != (int *)((char *)&dword_0 + 3) )
    {
LABEL_57:
      *a1[11] = v68;
      v31 = *(uint32_t *)HIDWORD(a2);
      v32 = *(uint32_t *)(*(uint32_t *)HIDWORD(a2) + 44);
      v33 = *(uint32_t *)HIDWORD(a2) + 28;
      if ( v32 != 1 )
      {
        v33 = v31 + 24;
        if ( v32 == 2 )
        {
          v33 = v31 + 32;
          if ( *(uint32_t *)(v31 + 16) == 0 )
            v33 = v31 + 24;
        }
      }
      sub_D434A0((int)(uintptr_t)(&v74), (uint32_t *)(*(uint32_t *)v33 + 8), 0);
      v34 = v74;
      if ( v74 != 0 )
      {
        v36 = v75;
        v35 = (uint32_t **)&v75;
      }
      else
      {
        v35 = (uint32_t **)v75;
        v36 = *(uint16_t **)v75;
      }
      result = (int)(uintptr_t)(v35[1]);
      v63 = result;
      if ( (uint16_t *)result != v36 )
      {
        v66 = v36;
        do
        {
          v37 = *v66;
          result = 1 << v37;
          v38 = *(uint32_t *)HIDWORD(a2);
          if ( *(uint32_t *)(*(uint32_t *)(*(uint32_t *)HIDWORD(a2) + 60) + 4 * v37) != 0 )
          {
            v39 = *(uint32_t *)(v38 + 12);
            if ( (v39 == 0
               || (v40 = *(uint32_t *)(v39 + 8)) == 0
               || (result & *(uint32_t *)(v40 + 4 * ((int)*v66 >> 5))) != 0)
              && (*(uint32_t *)(*(uint32_t *)(v67 + 60) + 4 * v37) == 0
               || *(uint8_t *)((result = *(uint32_t *)(v67 + 48)) + v37) == 0) )
            {
              v61 = a1[10][20] + 8 * ((uint32_t)(uintptr_t)(a1[14]) + v37);
              v41 = (void *)(*(uint32_t *)(*a3 + 8)
                           + *(uint32_t *)(*a3 + 12)
                           * *(uint16_t *)(**(uint32_t **)(*(uint32_t *)(*a3 + 4) + 56) + 2 * v37)
                           + a3[1] * *(uint8_t *)(**(uint32_t **)(*(uint32_t *)(*a3 + 4) + 52) + v37));
              result = *(uint32_t *)v61;
              if ( *(uint32_t *)v61 == 2 )
              {
                v42 = *(uint32_t *)(v61 + 4);
                v72 = AnimationData;
                v71 = v42;
                v73 = v80;
                result = (*(int (**)(uint32_t, int *, int, int, float, void *))(**(uint32_t **)(v42 + 20) + 44))(
                           *(uint32_t *)(v42 + 20),
                           &v71,
                           v68,
                           v68 + 1,
                           COERCE_FLOAT(LODWORD(v69)),
                           v41);
              }
              else if ( result == 1 )
              {
                result = (int)(uintptr_t)memcpy(
                                v41,
                                *(const void **)(v61 + 4),
                                *(uint8_t *)(**(uint32_t **)(v38 + 52) + v37));
              }
            }
          }
          ++v66;
        }
        while ( (uint16_t *)v63 != v66 );
        v34 = v74;
      }
      if ( v34 == 0 )
        goto LABEL_26;
      result = (int)(uintptr_t)(v75);
      if ( v75 == nullptr )
        goto LABEL_26;
      goto LABEL_25;
    }
    if ( v69 >= 0.25 )
    {
      if ( v69 <= 0.75 )
        goto LABEL_57;
      v69 = 0.0;
      v43 = ++v68;
    }
    else
    {
      v69 = 0.0;
      v43 = v68;
    }
    *a1[11] = v43;
    goto LABEL_33;
  }
  v4 = *(uint32_t *)HIDWORD(a2);
  v5 = *(uint32_t *)(*(uint32_t *)HIDWORD(a2) + 44);
  v6 = *(uint32_t *)HIDWORD(a2) + 28;
  if ( v5 != 1 )
  {
    v6 = v4 + 24;
    if ( v5 == 2 )
    {
      v6 = v4 + 32;
      if ( *(uint32_t *)(v4 + 16) == 0 )
        v6 = v4 + 24;
    }
  }
  sub_D434A0((int)(uintptr_t)(&v78), (uint32_t *)(*(uint32_t *)v6 + 8), 0);
  result = v78;
  if ( v78 != 0 )
  {
    v8 = v79;
    v9 = (uint32_t **)&v79;
  }
  else
  {
    v9 = (uint32_t **)v79;
    v8 = *(uint16_t **)v79;
  }
  v55 = (uint16_t *)v9[1];
  if ( v55 != v8 )
  {
    v64 = v8;
    while ( 1 )
    {
      v10 = *v64;
      v11 = *(uint32_t *)HIDWORD(a2);
      if ( *(uint32_t *)(*(uint32_t *)(*(uint32_t *)HIDWORD(a2) + 60) + 4 * v10) == 0 )
        goto LABEL_12;
      v12 = *(uint32_t *)(v11 + 12);
      if ( v12 != 0 )
      {
        v13 = *(uint32_t *)(v12 + 8);
        if ( v13 != 0 && ((1 << v10) & *(uint32_t *)(v13 + 4 * ((int)*v64 >> 5))) == 0 )
          goto LABEL_12;
      }
      if ( *(uint32_t *)(*(uint32_t *)(v67 + 60) + 4 * v10) != 0 && *(uint8_t *)(*(uint32_t *)(v67 + 48) + v10) != 0 )
        goto LABEL_12;
      v59 = a1[10][20] + 8 * ((uint32_t)(uintptr_t)(a1[14]) + v10);
      v14 = (void *)(*(uint32_t *)(*a3 + 8)
                   + a3[1] * *(uint8_t *)(**(uint32_t **)(*(uint32_t *)(*a3 + 4) + 52) + v10)
                   + *(uint32_t *)(*a3 + 12) * *(uint16_t *)(**(uint32_t **)(*(uint32_t *)(*a3 + 4) + 56) + 2 * v10));
      if ( *(uint32_t *)v59 == 2 )
        break;
      if ( *(uint32_t *)v59 == 1 )
      {
        memcpy(v14, *(const void **)(v59 + 4), *(uint8_t *)(**(uint32_t **)(v11 + 52) + v10));
        if ( v55 == ++v64 )
        {
LABEL_22:
          result = v78;
          goto LABEL_23;
        }
      }
      else
      {
LABEL_12:
        if ( v55 == ++v64 )
          goto LABEL_22;
      }
    }
    v29 = *(uint32_t *)(v59 + 4);
    v71 = v29;
    v73 = v80;
    v72 = AnimationData;
    if ( v57 )
      v30 = (int)(uintptr_t)(a1[11]);
    else
      v30 = (int)(uintptr_t)(&a1[11][v10]);
    (*(void (**)(uint32_t, int *, uint32_t, void *, int, bool))(**(uint32_t **)(v29 + 20) + 68))(
      *(uint32_t *)(v29 + 20),
      &v71,
      a2,
      v14,
      v30,
      v56);
    goto LABEL_12;
  }
LABEL_23:
  if ( (uint8_t)result != 0 )
  {
    result = (int)(uintptr_t)(v79);
    if ( v79 != nullptr )
LABEL_25:
      result = gll_operator_delete_arr(result);
  }
LABEL_26:
  if ( v67 != 0 )
    return sub_5459C0((volatile int32_t *)v67);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSet::computeAnimationAdditiveValuesEx  (binary VA: 0xd5c1f0)
// Original: glitch::collada::CSceneNodeAnimatorSet::computeAnimationAdditiveValuesEx
// ----------------------------------------------------------------------------
volatile int32_t * glitch::collada::CSceneNodeAnimatorSet::computeAnimationAdditiveValuesEx(glitch::collada::CSceneNodeAnimatorSet::Self *a1, float a2, int a3, uint32_t *a4, int a5, void (***a6)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *__hidden self), int a7, void (**a8)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *__hidden self), volatile int32_t *a9, glitch::core::Self *a10, int a11, char a12, glitch::collada::CSceneNodeAnimatorSet::Self *a13)
{
  int v13;
  int v14;
  signed int v15;
  uint32_t *v16;
  int v17;
  int v18;
  int v19;
  char v20;
  glitch::collada::CSceneNodeAnimatorSet::Self *v21;
  uint32_t **v22;
  int v23;
  int v24;
  int v25;
  uint32_t *v26;
  int v27;
  volatile int32_t *result;
  int *retaddr;
  glitch::collada::CSceneNodeAnimatorSet::Self *v46;
  glitch::collada::CSceneNodeAnimatorSet::Self *v47;
  int v48;
  int v49;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef void (**_g4_t_v38)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *);
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int *_g4_t_v42;
  typedef float _g4_t_v43;
  typedef int _g4_t_v44;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v29)) > _g4_s0 ? (4u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v30)) > _g4_s1 ? (8u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v31)) > _g4_s2 ? (12u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v32)) > _g4_s3 ? (16u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v33)) > _g4_s4 ? (20u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v34)) > _g4_s5 ? (24u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v35)) > _g4_s6 ? (28u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v36)) > _g4_s7 ? (40u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v37)) > _g4_s8 ? (44u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v38)) > _g4_s9 ? (48u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v39)) > _g4_s10 ? (52u + sizeof(_g4_t_v39)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v40)) > _g4_s11 ? (56u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v41)) > _g4_s12 ? (60u + sizeof(_g4_t_v41)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v42)) > _g4_s13 ? (80u + sizeof(_g4_t_v42)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v43)) > _g4_s14 ? (84u + sizeof(_g4_t_v43)) : _g4_s14,
    _g4_s16 = (88u + sizeof(_g4_t_v44)) > _g4_s15 ? (88u + sizeof(_g4_t_v44)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 4u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 8u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 20u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 24u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 40u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 44u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 48u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 52u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 56u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 60u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 80u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 84u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 88u);

  *((uint32_t *)a1 + 16) = 0;
  v38 = (void (**)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *))&off_2047EB8;
  v13 = 0;
  v14 = *(uint32_t *)a3;
  v39 = *(uint32_t *)a3;
  if ( v39 != 0 )
  {
    sub_8B1B00((volatile int32_t *)(v14 + 4));
    v13 = v39;
  }
  v15 = 2 * *(uint32_t *)(v13 + 48);
  v40 = 0;
  v41 = 2;
  v38 = (void (**)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20795A0));
  if ( v15 > 0 )
    v40 = glitch::core::allocProcessBuffer(v15, v29);
  v16 = (uint32_t *)G4_VCALL<int>(a1, 68, v29, v30, v31, v32, v33, v34, v35, &v38, 0, v36, v37);
  v43 = ((long double (*)(uint32_t))*(uint32_t *)(*(uint32_t *)*v16 + 64))(*v16);
  glitch::collada::CSceneNodeAnimatorSet::computeAnimationValuesEx(a1, v43, a3, (int)(uintptr_t)(&a4));
  a6 = &v38;
  a7 = 1;
  glitch::collada::CSceneNodeAnimatorSet::computeAnimationValuesEx(a1, a2, a3, (int)(uintptr_t)(&a6));
  *((uint32_t *)a1 + 16) = 1;
  v17 = *(uint32_t *)a3;
  v18 = *(uint32_t *)(*(uint32_t *)a3 + 44);
  v19 = *(uint32_t *)a3 + 28;
  if ( v18 != 1 )
  {
    v19 = v17 + 24;
    if ( v18 == 2 )
    {
      v19 = v17 + 32;
      if ( *(uint32_t *)(v17 + 16) == 0 )
        v19 = v17 + 24;
    }
  }
  sub_D434A0((int)(uintptr_t)(&a12), (uint32_t *)(*(uint32_t *)v19 + 8), 0);
  v20 = a12;
  if ( a12 != 0 )
  {
    v21 = a13;
    v22 = (uint32_t **)&a13;
  }
  else
  {
    v22 = (uint32_t **)a13;
    v21 = *(glitch::collada::CSceneNodeAnimatorSet::Self **)a13;
  }
  v46 = (glitch::collada::CSceneNodeAnimatorSet::Self *)v22[1];
  if ( v46 != v21 )
  {
    v47 = v21;
    do
    {
      while ( 1 )
      {
        v23 = *(uint16_t *)v47;
        v48 = 1 << *(uint16_t *)v47;
        if ( *(uint32_t *)(*(uint32_t *)(*(uint32_t *)v48 + 60) + 4 * v23) != 0 )
        {
          v24 = *(uint32_t *)(*(uint32_t *)v48 + 12);
          if ( v24 == 0 )
            break;
          v25 = *(uint32_t *)(v24 + 8);
          if ( v25 == 0 || (v48 & *(uint32_t *)(v25 + 4 * ((int)*(uint16_t *)v47 >> 5))) != 0 )
            break;
        }
        v47 = (glitch::collada::CSceneNodeAnimatorSet::Self *)((char *)v47 + 2);
        if ( v46 == v47 )
          goto LABEL_17;
      }
      v26 = (uint32_t *)G4_VCALL<int>(v46, 84);
      retaddr = (int *)G4_VCALL<int>(*v26, 20, v23);
      v49 = *retaddr;
      v44 = *(uint32_t *)(*a4 + 8)
          + *(uint32_t *)(*a4 + 12) * *(uint16_t *)(**(uint32_t **)(*(uint32_t *)(*a4 + 4) + 56) + 2 * v23)
          + a4[1] * *(uint8_t *)(**(uint32_t **)(*(uint32_t *)(*a4 + 4) + 52) + v23);
      v27 = *(uint16_t *)(**((uint32_t **)a9 + 14) + 2 * v23);
      v42 = retaddr;
      LODWORD(v43) = (uint32_t)(uintptr_t)((char *)a10 + a11 * v27);
      (*(void (**)(int *))(v49 + 88))(retaddr);
      v47 = (glitch::collada::CSceneNodeAnimatorSet::Self *)((char *)v47 + 2);
    }
    while ( v46 != v47 );
LABEL_17:
    v20 = a12;
  }
  if ( v20 != 0 && a13 != nullptr )
    gll_operator_delete_arr((int)(uintptr_t)(a13));
  a8 = (void (**)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20795A0));
  if ( a10 != nullptr )
    glitch::core::releaseProcessBuffer(a10, (void *)LODWORD(v43));
  a8 = (void (**)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *))&off_2047EB8;
  result = a9;
  if ( a9 != nullptr )
    return (volatile int32_t *)sub_5459C0(a9);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSet::computeAnimationValuesEx  (binary VA: 0xd5c4a0)
// Original: glitch::collada::CSceneNodeAnimatorSet::computeAnimationValuesEx
// ----------------------------------------------------------------------------
volatile int32_t * glitch::collada::CSceneNodeAnimatorSet::computeAnimationValuesEx(int **a1, int64_t a2, uint32_t *a3)
{
  volatile int32_t *result;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int *v15;
  int *v16;
  int *v17;
  glitch::collada::CColladaDatabase::Self *v18;
  int v19;
  int **v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  char v41;
  int v42;
  typedef int _g4_t_v43;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v44;
  typedef int _g4_t_v45;
  typedef void (***_g4_t_v46)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *);
  typedef int _g4_t_v47;
  typedef void (**_g4_t_v48)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *);
  typedef volatile int32_t *_g4_t_v49;
  typedef glitch::core::Self *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef uint8_t _g4_t_v52;
  typedef char _g4_t_v53;
  typedef uint32_t *_g4_t_AnimationData;
  typedef glitch::collada::CSceneNodeAnimatorSet::Self *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef uint8_t _g4_t_v57;
  typedef uint8_t _g4_t_v58;
  typedef uint8_t _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef bool _g4_t_v62;
  typedef uint8_t _g4_t_v63;
  typedef uint16_t _g4_t_v64;
  typedef uint8_t _g4_t_v65;
  typedef uint8_t _g4_t_v66;
  typedef uint16_t _g4_t_v67;
  typedef uint16_t _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef void *_g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef float _g4_t_v81;
  typedef int _g4_t_Animation;
  typedef uint32_t *_g4_t_v83;
  typedef uint32_t *_g4_t_v84;
  typedef uint32_t _g4_t_v85[7];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v43)) > _g4_s0 ? (8u + sizeof(_g4_t_v43)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v44)) > _g4_s1 ? (12u + sizeof(_g4_t_v44)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v45)) > _g4_s2 ? (16u + sizeof(_g4_t_v45)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v46)) > _g4_s3 ? (20u + sizeof(_g4_t_v46)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v47)) > _g4_s4 ? (24u + sizeof(_g4_t_v47)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v48)) > _g4_s5 ? (28u + sizeof(_g4_t_v48)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v49)) > _g4_s6 ? (32u + sizeof(_g4_t_v49)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v50)) > _g4_s7 ? (36u + sizeof(_g4_t_v50)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v51)) > _g4_s8 ? (40u + sizeof(_g4_t_v51)) : _g4_s8,
    _g4_s10 = (43u + sizeof(_g4_t_v52)) > _g4_s9 ? (43u + sizeof(_g4_t_v52)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v53)) > _g4_s10 ? (44u + sizeof(_g4_t_v53)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_AnimationData)) > _g4_s11 ? (44u + sizeof(_g4_t_AnimationData)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v55)) > _g4_s12 ? (48u + sizeof(_g4_t_v55)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v56)) > _g4_s13 ? (48u + sizeof(_g4_t_v56)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v57)) > _g4_s14 ? (48u + sizeof(_g4_t_v57)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v58)) > _g4_s15 ? (48u + sizeof(_g4_t_v58)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v59)) > _g4_s16 ? (52u + sizeof(_g4_t_v59)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v60)) > _g4_s17 ? (52u + sizeof(_g4_t_v60)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v61)) > _g4_s18 ? (52u + sizeof(_g4_t_v61)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v62)) > _g4_s19 ? (56u + sizeof(_g4_t_v62)) : _g4_s19,
    _g4_s21 = (57u + sizeof(_g4_t_v63)) > _g4_s20 ? (57u + sizeof(_g4_t_v63)) : _g4_s20,
    _g4_s22 = (58u + sizeof(_g4_t_v64)) > _g4_s21 ? (58u + sizeof(_g4_t_v64)) : _g4_s21,
    _g4_s23 = (58u + sizeof(_g4_t_v65)) > _g4_s22 ? (58u + sizeof(_g4_t_v65)) : _g4_s22,
    _g4_s24 = (58u + sizeof(_g4_t_v66)) > _g4_s23 ? (58u + sizeof(_g4_t_v66)) : _g4_s23,
    _g4_s25 = (60u + sizeof(_g4_t_v67)) > _g4_s24 ? (60u + sizeof(_g4_t_v67)) : _g4_s24,
    _g4_s26 = (60u + sizeof(_g4_t_v68)) > _g4_s25 ? (60u + sizeof(_g4_t_v68)) : _g4_s25,
    _g4_s27 = (64u + sizeof(_g4_t_v69)) > _g4_s26 ? (64u + sizeof(_g4_t_v69)) : _g4_s26,
    _g4_s28 = (64u + sizeof(_g4_t_v70)) > _g4_s27 ? (64u + sizeof(_g4_t_v70)) : _g4_s27,
    _g4_s29 = (68u + sizeof(_g4_t_v71)) > _g4_s28 ? (68u + sizeof(_g4_t_v71)) : _g4_s28,
    _g4_s30 = (68u + sizeof(_g4_t_v72)) > _g4_s29 ? (68u + sizeof(_g4_t_v72)) : _g4_s29,
    _g4_s31 = (68u + sizeof(_g4_t_v73)) > _g4_s30 ? (68u + sizeof(_g4_t_v73)) : _g4_s30,
    _g4_s32 = (72u + sizeof(_g4_t_v74)) > _g4_s31 ? (72u + sizeof(_g4_t_v74)) : _g4_s31,
    _g4_s33 = (72u + sizeof(_g4_t_v75)) > _g4_s32 ? (72u + sizeof(_g4_t_v75)) : _g4_s32,
    _g4_s34 = (72u + sizeof(_g4_t_v76)) > _g4_s33 ? (72u + sizeof(_g4_t_v76)) : _g4_s33,
    _g4_s35 = (76u + sizeof(_g4_t_v77)) > _g4_s34 ? (76u + sizeof(_g4_t_v77)) : _g4_s34,
    _g4_s36 = (76u + sizeof(_g4_t_v78)) > _g4_s35 ? (76u + sizeof(_g4_t_v78)) : _g4_s35,
    _g4_s37 = (76u + sizeof(_g4_t_v79)) > _g4_s36 ? (76u + sizeof(_g4_t_v79)) : _g4_s36,
    _g4_s38 = (80u + sizeof(_g4_t_v80)) > _g4_s37 ? (80u + sizeof(_g4_t_v80)) : _g4_s37,
    _g4_s39 = (96u + sizeof(_g4_t_v81)) > _g4_s38 ? (96u + sizeof(_g4_t_v81)) : _g4_s38,
    _g4_s40 = (100u + sizeof(_g4_t_Animation)) > _g4_s39 ? (100u + sizeof(_g4_t_Animation)) : _g4_s39,
    _g4_s41 = (104u + sizeof(_g4_t_v83)) > _g4_s40 ? (104u + sizeof(_g4_t_v83)) : _g4_s40,
    _g4_s42 = (108u + sizeof(_g4_t_v84)) > _g4_s41 ? (108u + sizeof(_g4_t_v84)) : _g4_s41,
    _g4_s43 = (112u + sizeof(_g4_t_v85)) > _g4_s42 ? (112u + sizeof(_g4_t_v85)) : _g4_s42
  };
  alignas(16) uint8_t _g4_sf[_g4_s43];
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 8u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 12u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 16u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 20u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 24u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 28u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 32u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 36u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 40u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 43u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 44u);
  _g4_t_AnimationData &AnimationData = *reinterpret_cast<_g4_t_AnimationData *>(_g4_sf + 44u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 48u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 48u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 48u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 48u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 52u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 52u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 52u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 56u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 57u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 58u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 58u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 58u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 60u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 60u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 64u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 64u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 68u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 68u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 68u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 72u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 72u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 72u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 76u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 76u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 76u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 80u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 96u);
  _g4_t_Animation &Animation = *reinterpret_cast<_g4_t_Animation *>(_g4_sf + 100u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 104u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 108u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 112u);

  if ( a1[16] == (int *)((char *)&dword_0 + 1) && a1[17] != (int *)((char *)&dword_0 + 1) )
    return glitch::collada::CSceneNodeAnimatorSet::computeAnimationAdditiveValuesEx(
             (glitch::collada::CSceneNodeAnimatorSet::Self *)a1,
             *(float *)&a2,
             SHIDWORD(a2),
             a3,
             v45,
             v46,
             v47,
             v48,
             v49,
             v50,
             v51,
             v53,
             v55);
  v52 = a1[5] != (int *)((char *)&dword_0 + 1);
  v62 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1[10][17] + 20 * (uint32_t)(uintptr_t)(a1[15])) + 16) + 32) + 20) != 0;
  v85[0] = 0;
  v85[1] = -8388609;
  v85[2] = 0;
  BYTE1(v85[3]) = v62;
  AnimationData = (uint32_t *)glitch::collada::CSceneNodeAnimatorSet::getAnimationData(
                              (glitch::collada::CSceneNodeAnimatorSet::Self *)a1,
                              *(float *)&a2,
                              v43,
                              v44,
                              v45,
                              (int)(uintptr_t)(v46));
  if ( *AnimationData == 2 )
  {
    v16 = a1[10];
    v17 = a1[15];
    v80 = 0;
    v18 = (glitch::collada::CColladaDatabase::Self *)(v16[17] + 20 * (uint32_t)(uintptr_t)(v17));
    v19 = 0;
    if ( *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)v18 + 16) + 32) + 40) != 0 )
    {
      Animation = glitch::collada::CColladaDatabase::getAnimation(v18, 0);
      v83 = AnimationData;
      v84 = v85;
      v41 = sub_D41960(&Animation, &v80, *(float *)&a2, &v81, *a1[11]);
      v19 = v80;
      v52 &= v41;
    }
    v20 = a1;
    if ( v52 != 0 )
    {
      if ( a1[5] != (int *)((char *)&dword_0 + 3) )
        goto LABEL_27;
      if ( v81 >= 0.25 )
      {
        if ( v81 <= 0.75 )
        {
LABEL_27:
          *a1[11] = v19;
          result = *(volatile int32_t **)HIDWORD(a2);
          v21 = *(uint32_t *)(*(uint32_t *)HIDWORD(a2) + 44);
          v22 = *(uint32_t *)HIDWORD(a2) + 28;
          if ( v21 != 1 )
          {
            v22 = (int)(uintptr_t)(result + 6);
            if ( v21 == 2 )
            {
              v22 = (int)(uintptr_t)(result + 8);
              if ( *((uint32_t *)result + 4) == 0 )
                v22 = (int)(uintptr_t)(result + 6);
            }
          }
          v75 = *(uint32_t *)v22;
          v23 = *(uint32_t *)(*(uint32_t *)v22 + 8);
          v24 = (*(uint32_t *)(v75 + 12) - v23) >> 1;
          if ( v24 > 0 )
          {
            v25 = 0;
            v60 = 2 * v24;
            while ( 1 )
            {
              v26 = *(uint16_t *)(v23 + v25);
              v72 = a3[1];
              v57 = *(uint8_t *)(**((uint32_t **)result + 13) + v26);
              v78 = *(uint32_t *)(*a3 + 12);
              v27 = *(uint32_t *)(*a3 + 4);
              v69 = *(uint32_t *)(*a3 + 8);
              v65 = *(uint8_t *)(**(uint32_t **)(v27 + 52) + v26);
              v67 = *(uint16_t *)(**(uint32_t **)(v27 + 56) + 2 * v26);
              if ( *(uint32_t *)(*((uint32_t *)result + 15) + 4 * v26) != 0 )
              {
                v28 = *((uint32_t *)result + 3);
                if ( v28 == 0
                  || (v29 = *(uint32_t *)(v28 + 8)) == 0
                  || (result = (volatile int32_t *)(1 << v26),
                      ((1 << v26) & *(uint32_t *)(v29 + 4 * (v26 >> 5))) != 0) )
                {
                  v30 = a1[10][20] + 8 * ((uint32_t)(uintptr_t)(a1[14]) + v26);
                  result = *(volatile int32_t **)v30;
                  if ( *(uint32_t *)v30 == 2 )
                  {
                    Animation = *(uint32_t *)(v30 + 4);
                    v83 = AnimationData;
                    v84 = v85;
                    result = (volatile int32_t *)(*(int (**)(uint32_t, int *, int, int, float, int))(**(uint32_t **)(Animation + 20) + 44))(
                                                          *(uint32_t *)(Animation + 20),
                                                          &Animation,
                                                          v80,
                                                          v80 + 1,
                                                          COERCE_FLOAT(LODWORD(v81)),
                                                          v67 * v78 + v72 * v65 + v69);
                  }
                  else if ( result == (int *)((char *)&dword_0 + 1) )
                  {
                    result = (volatile int32_t *)memcpy(
                                                          (void *)(v67 * v78 + v72 * v65 + v69),
                                                          *(const void **)(v30 + 4),
                                                          v57);
                  }
                }
              }
              v25 += 2;
              if ( v25 == v60 )
                break;
              v23 = *(uint32_t *)(v75 + 8);
              result = *(volatile int32_t **)HIDWORD(a2);
            }
          }
          return result;
        }
        v80 = ++v19;
      }
      v81 = 0.0;
      v20 = a1;
    }
    *v20[11] = v19;
    result = *(volatile int32_t **)HIDWORD(a2);
    v31 = *(uint32_t *)(*(uint32_t *)HIDWORD(a2) + 44);
    v32 = *(uint32_t *)HIDWORD(a2) + 28;
    if ( v31 != 1 )
    {
      v32 = (int)(uintptr_t)(result + 6);
      if ( v31 == 2 )
      {
        v32 = (int)(uintptr_t)(result + 8);
        if ( *((uint32_t *)result + 4) == 0 )
          v32 = (int)(uintptr_t)(result + 6);
      }
    }
    v76 = *(uint32_t *)v32;
    v33 = *(uint32_t *)(*(uint32_t *)v32 + 8);
    v34 = (*(uint32_t *)(v76 + 12) - v33) >> 1;
    if ( v34 > 0 )
    {
      v35 = 0;
      v61 = 2 * v34;
      while ( 1 )
      {
        v36 = *(uint16_t *)(v33 + v35);
        v73 = a3[1];
        v58 = *(uint8_t *)(**((uint32_t **)result + 13) + v36);
        v79 = *(uint32_t *)(*a3 + 12);
        v37 = *(uint32_t *)(*a3 + 4);
        v70 = *(uint32_t *)(*a3 + 8);
        v66 = *(uint8_t *)(**(uint32_t **)(v37 + 52) + v36);
        v68 = *(uint16_t *)(**(uint32_t **)(v37 + 56) + 2 * v36);
        if ( *(uint32_t *)(*((uint32_t *)result + 15) + 4 * v36) != 0 )
        {
          v38 = *((uint32_t *)result + 3);
          if ( v38 == 0
            || (v39 = *(uint32_t *)(v38 + 8)) == 0
            || (result = (volatile int32_t *)(1 << v36), ((1 << v36) & *(uint32_t *)(v39 + 4 * (v36 >> 5))) != 0) )
          {
            v40 = a1[10][20] + 8 * ((uint32_t)(uintptr_t)(a1[14]) + v36);
            result = *(volatile int32_t **)v40;
            if ( *(uint32_t *)v40 == 2 )
            {
              v42 = *(uint32_t *)(v40 + 4);
              v83 = AnimationData;
              Animation = v42;
              v84 = v85;
              result = (volatile int32_t *)(*(int (**)(uint32_t, int *, int, int))(**(uint32_t **)(v42 + 20)
                                                                                              + 48))(
                                                    *(uint32_t *)(v42 + 20),
                                                    &Animation,
                                                    v80,
                                                    v68 * v79 + v73 * v66 + v70);
            }
            else if ( result == (int *)((char *)&dword_0 + 1) )
            {
              result = (volatile int32_t *)memcpy(
                                                    (void *)(v68 * v79 + v73 * v66 + v70),
                                                    *(const void **)(v40 + 4),
                                                    v58);
            }
          }
        }
        v35 += 2;
        if ( v35 == v61 )
          break;
        v33 = *(uint32_t *)(v76 + 8);
        result = *(volatile int32_t **)HIDWORD(a2);
      }
    }
    return result;
  }
  result = *(volatile int32_t **)HIDWORD(a2);
  v4 = *(uint32_t *)(*(uint32_t *)HIDWORD(a2) + 44);
  v5 = *(uint32_t *)HIDWORD(a2) + 28;
  if ( v4 != 1 )
  {
    v5 = (int)(uintptr_t)(result + 6);
    if ( v4 == 2 )
    {
      v5 = (int)(uintptr_t)(result + 8);
      if ( *((uint32_t *)result + 4) == 0 )
        v5 = (int)(uintptr_t)(result + 6);
    }
  }
  v74 = *(uint32_t *)v5;
  v6 = *(uint32_t *)(*(uint32_t *)v5 + 8);
  v7 = (*(uint32_t *)(v74 + 12) - v6) >> 1;
  if ( v7 > 0 )
  {
    v8 = 0;
    v71 = 2 * v7;
    while ( 1 )
    {
      v9 = *(uint16_t *)(v6 + v8);
      v63 = *(uint8_t *)(**((uint32_t **)result + 13) + v9);
      v10 = *(uint32_t *)(*a3 + 4);
      v59 = *(uint8_t *)(**(uint32_t **)(v10 + 52) + v9);
      v56 = v9;
      v64 = *(uint16_t *)(**(uint32_t **)(v10 + 56) + 2 * v9);
      if ( *(uint32_t *)(*((uint32_t *)result + 15) + 4 * v9) == 0 )
        goto LABEL_7;
      v11 = *((uint32_t *)result + 3);
      if ( v11 != 0 )
      {
        v12 = *(uint32_t *)(v11 + 8);
        if ( v12 != 0 )
        {
          result = (volatile int32_t *)(1 << v9);
          if ( ((1 << v9) & *(uint32_t *)(v12 + 4 * (v9 >> 5))) == 0 )
            goto LABEL_7;
        }
      }
      v77 = (void *)(*(uint32_t *)(*a3 + 8) + v64 * *(uint32_t *)(*a3 + 12) + a3[1] * v59);
      v13 = a1[10][20] + 8 * ((uint32_t)(uintptr_t)(a1[14]) + v9);
      result = *(volatile int32_t **)v13;
      if ( *(uint32_t *)v13 == 2 )
        break;
      if ( result != (int *)((char *)&dword_0 + 1) )
        goto LABEL_7;
      v8 += 2;
      result = (volatile int32_t *)memcpy(v77, *(const void **)(v13 + 4), v63);
      if ( v8 == v71 )
        return result;
LABEL_8:
      v6 = *(uint32_t *)(v74 + 8);
      result = *(volatile int32_t **)HIDWORD(a2);
    }
    v14 = *(uint32_t *)(v13 + 4);
    Animation = v14;
    v83 = AnimationData;
    v84 = v85;
    if ( v62 )
      v15 = a1[11];
    else
      v15 = &a1[11][v56];
    result = (volatile int32_t *)(*(int (**)(uint32_t, int *, uint32_t, void *, int *, uint32_t))(**(uint32_t **)(v14 + 20) + 68))(
                                          *(uint32_t *)(v14 + 20),
                                          &Animation,
                                          a2,
                                          v77,
                                          v15,
                                          v52);
LABEL_7:
    v8 += 2;
    if ( v8 == v71 )
      return result;
    goto LABEL_8;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSet::applyAnimationValuesEx  (binary VA: 0xd5cb40)
// Original: glitch::collada::CSceneNodeAnimatorSet::applyAnimationValuesEx
// ----------------------------------------------------------------------------
volatile int32_t * glitch::collada::CSceneNodeAnimatorSet::applyAnimationValuesEx(glitch::collada::CSceneNodeAnimatorSet::Self *a1, float a2, int *a3)
{
  int v3;
  int v4;
  volatile int32_t *v5;
  int v6;
  int v7;
  int v8;
  char v9;
  uint16_t *v10;
  uint16_t **v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  uint32_t *v17;
  int v18;
  int v19;
  volatile int32_t *result;
  int v21;
  int v22;
  glitch::collada::CColladaDatabase::Self *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  char v28;
  uint16_t **v29;
  uint16_t *v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  uint32_t *v36;
  int v37;
  int v38;
  int v39;
  int v40;
  char v41;
  uint16_t **v42;
  uint16_t *v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  uint32_t *v49;
  int v50;
  typedef int _g4_t_v51;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef uint16_t *_g4_t_v55;
  typedef uint8_t _g4_t_v56;
  typedef uint16_t *_g4_t_v57;
  typedef volatile int32_t *_g4_t_v58;
  typedef uint32_t *_g4_t_AnimationData;
  typedef uint16_t *_g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef uint16_t *_g4_t_v64;
  typedef uint16_t *_g4_t_v65;
  typedef uint16_t *_g4_t_v66;
  typedef int _g4_t_v67;
  typedef float _g4_t_v68;
  typedef int _g4_t_Animation;
  typedef uint32_t *_g4_t_v70;
  typedef uint32_t *_g4_t_v71;
  typedef char _g4_t_v72;
  typedef uint16_t *_g4_t_v73;
  typedef char _g4_t_v74;
  typedef uint16_t *_g4_t_v75;
  typedef char _g4_t_v76;
  typedef uint16_t *_g4_t_v77;
  typedef uint32_t _g4_t_v78[7];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (8u + sizeof(_g4_t_v51)) > _g4_s0 ? (8u + sizeof(_g4_t_v51)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v52)) > _g4_s1 ? (12u + sizeof(_g4_t_v52)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v53)) > _g4_s2 ? (16u + sizeof(_g4_t_v53)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v54)) > _g4_s3 ? (20u + sizeof(_g4_t_v54)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v55)) > _g4_s4 ? (44u + sizeof(_g4_t_v55)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v56)) > _g4_s5 ? (52u + sizeof(_g4_t_v56)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v57)) > _g4_s6 ? (52u + sizeof(_g4_t_v57)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v58)) > _g4_s7 ? (56u + sizeof(_g4_t_v58)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_AnimationData)) > _g4_s8 ? (60u + sizeof(_g4_t_AnimationData)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v60)) > _g4_s9 ? (64u + sizeof(_g4_t_v60)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v61)) > _g4_s10 ? (68u + sizeof(_g4_t_v61)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v62)) > _g4_s11 ? (68u + sizeof(_g4_t_v62)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v63)) > _g4_s12 ? (68u + sizeof(_g4_t_v63)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v64)) > _g4_s13 ? (72u + sizeof(_g4_t_v64)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v65)) > _g4_s14 ? (72u + sizeof(_g4_t_v65)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v66)) > _g4_s15 ? (72u + sizeof(_g4_t_v66)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v67)) > _g4_s16 ? (80u + sizeof(_g4_t_v67)) : _g4_s16,
    _g4_s18 = (96u + sizeof(_g4_t_v68)) > _g4_s17 ? (96u + sizeof(_g4_t_v68)) : _g4_s17,
    _g4_s19 = (100u + sizeof(_g4_t_Animation)) > _g4_s18 ? (100u + sizeof(_g4_t_Animation)) : _g4_s18,
    _g4_s20 = (104u + sizeof(_g4_t_v70)) > _g4_s19 ? (104u + sizeof(_g4_t_v70)) : _g4_s19,
    _g4_s21 = (108u + sizeof(_g4_t_v71)) > _g4_s20 ? (108u + sizeof(_g4_t_v71)) : _g4_s20,
    _g4_s22 = (112u + sizeof(_g4_t_v72)) > _g4_s21 ? (112u + sizeof(_g4_t_v72)) : _g4_s21,
    _g4_s23 = (116u + sizeof(_g4_t_v73)) > _g4_s22 ? (116u + sizeof(_g4_t_v73)) : _g4_s22,
    _g4_s24 = (128u + sizeof(_g4_t_v74)) > _g4_s23 ? (128u + sizeof(_g4_t_v74)) : _g4_s23,
    _g4_s25 = (132u + sizeof(_g4_t_v75)) > _g4_s24 ? (132u + sizeof(_g4_t_v75)) : _g4_s24,
    _g4_s26 = (144u + sizeof(_g4_t_v76)) > _g4_s25 ? (144u + sizeof(_g4_t_v76)) : _g4_s25,
    _g4_s27 = (148u + sizeof(_g4_t_v77)) > _g4_s26 ? (148u + sizeof(_g4_t_v77)) : _g4_s26,
    _g4_s28 = (160u + sizeof(_g4_t_v78)) > _g4_s27 ? (160u + sizeof(_g4_t_v78)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 8u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 12u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 16u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 20u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 44u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 52u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 52u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 56u);
  _g4_t_AnimationData &AnimationData = *reinterpret_cast<_g4_t_AnimationData *>(_g4_sf + 60u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 64u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 68u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 68u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 68u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 72u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 72u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 72u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 80u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 96u);
  _g4_t_Animation &Animation = *reinterpret_cast<_g4_t_Animation *>(_g4_sf + 100u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 104u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 108u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 112u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 116u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 128u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 132u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 144u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 148u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 160u);

  v56 = *((uint32_t *)a1 + 5) != 1;
  v3 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)a1 + 10) + 68) + 20
                                                                                              * *((uint32_t *)a1 + 15))
                                         + 16)
                             + 32)
                 + 20);
  AnimationData = (uint32_t *)glitch::collada::CSceneNodeAnimatorSet::getAnimationData(a1, a2, v51, v52, v53, v54);
  v78[0] = 0;
  BYTE1(v78[3]) = v3 != 0;
  v4 = *a3;
  v78[1] = -8388609;
  v78[2] = 0;
  v5 = *(volatile int32_t **)(v4 + 16);
  v58 = v5;
  if ( v5 != nullptr )
    sub_8B1B00(v5 + 1);
  if ( AnimationData != nullptr && *AnimationData == 2 )
  {
    v21 = *((uint32_t *)a1 + 10);
    v22 = *((uint32_t *)a1 + 15);
    v67 = 0;
    v23 = (glitch::collada::CColladaDatabase::Self *)(*(uint32_t *)(v21 + 68) + 20 * v22);
    v24 = 0;
    if ( *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)v23 + 16) + 32) + 40) != 0 )
    {
      Animation = glitch::collada::CColladaDatabase::getAnimation(v23, 0);
      v70 = AnimationData;
      v71 = v78;
      v56 &= sub_D41960(&Animation, &v67, a2, &v68, **((uint32_t **)a1 + 11));
      v24 = v67;
    }
    if ( v56 != 0 )
    {
      if ( *((uint32_t *)a1 + 5) != 3 )
        goto LABEL_30;
      if ( v68 >= 0.25 )
      {
        if ( v68 <= 0.75 )
        {
LABEL_30:
          **((uint32_t **)a1 + 11) = v24;
          v25 = *a3;
          v26 = *(uint32_t *)(*a3 + 44);
          v27 = *a3 + 28;
          if ( v26 != 1 )
          {
            v27 = v25 + 24;
            if ( v26 == 2 )
            {
              v27 = v25 + 32;
              if ( *(uint32_t *)(v25 + 16) == 0 )
                v27 = v25 + 24;
            }
          }
          sub_D434A0((int)(uintptr_t)(&v72), (uint32_t *)(*(uint32_t *)v27 + 8), 0);
          v28 = v72;
          if ( v72 != 0 )
          {
            v30 = v73;
            v29 = &v73;
          }
          else
          {
            v29 = (uint16_t **)v73;
            v30 = *(uint16_t **)v73;
          }
          v57 = v29[1];
          if ( v57 == v30 )
          {
LABEL_45:
            if ( v28 == 0 )
              goto LABEL_23;
            v19 = (int)(uintptr_t)(v73);
            if ( v73 == nullptr )
              goto LABEL_23;
            goto LABEL_22;
          }
          v65 = v30;
          while ( 1 )
          {
            v31 = *a3;
            v32 = *v65;
            v62 = *(uint32_t *)(*(uint32_t *)(*a3 + 60) + 4 * v32);
            if ( v62 == 0 )
              goto LABEL_36;
            v33 = *(uint32_t *)(v31 + 12);
            if ( v33 != 0 )
            {
              v34 = *(uint32_t *)(v33 + 8);
              if ( v34 != 0 && ((1 << v32) & *(uint32_t *)(v34 + 4 * ((int)*v65 >> 5))) == 0 )
                goto LABEL_36;
            }
            v35 = *((uint32_t *)a1 + 10);
            v36 = (uint32_t *)(*(uint32_t *)(v35 + 80) + 8 * (v32 + *((uint32_t *)a1 + 14)));
            if ( *v36 == 2 )
              break;
            if ( *v36 == 1 )
            {
              v37 = *(uint32_t *)(*(uint32_t *)(v35 + 24) + 4 * v32);
              G4_VCALL<void>(v37, 76, v36[1], v62, *(uint32_t *)(*(uint32_t *)(v31 + 72) + 4 * v32));
              if ( v57 == ++v65 )
              {
LABEL_44:
                v28 = v72;
                goto LABEL_45;
              }
            }
            else
            {
LABEL_36:
              if ( v57 == ++v65 )
                goto LABEL_44;
            }
          }
          Animation = v36[1];
          v70 = AnimationData;
          v71 = v78;
          (*(void (**)(uint32_t, int *, int, int, float, int, uint32_t))(**(uint32_t **)(Animation + 20) + 52))(
            *(uint32_t *)(Animation + 20),
            &Animation,
            v67,
            v67 + 1,
            COERCE_FLOAT(LODWORD(v68)),
            v62,
            *(uint32_t *)(*(uint32_t *)(v31 + 72) + 4 * v32));
          goto LABEL_36;
        }
        v67 = ++v24;
      }
      v68 = 0.0;
    }
    **((uint32_t **)a1 + 11) = v24;
    v38 = *a3;
    v39 = *(uint32_t *)(*a3 + 44);
    v40 = *a3 + 28;
    if ( v39 != 1 )
    {
      v40 = v38 + 24;
      if ( v39 == 2 )
      {
        v40 = v38 + 32;
        if ( *(uint32_t *)(v38 + 16) == 0 )
          v40 = v38 + 24;
      }
    }
    sub_D434A0((int)(uintptr_t)(&v74), (uint32_t *)(*(uint32_t *)v40 + 8), 0);
    v41 = v74;
    if ( v74 != 0 )
    {
      v43 = v75;
      v42 = &v75;
    }
    else
    {
      v42 = (uint16_t **)v75;
      v43 = *(uint16_t **)v75;
    }
    v60 = v42[1];
    if ( v60 == v43 )
    {
LABEL_67:
      if ( v41 == 0 )
        goto LABEL_23;
      v19 = (int)(uintptr_t)(v75);
      if ( v75 == nullptr )
        goto LABEL_23;
      goto LABEL_22;
    }
    v66 = v43;
    while ( 1 )
    {
      v44 = *a3;
      v45 = *v66;
      v63 = *(uint32_t *)(*(uint32_t *)(*a3 + 60) + 4 * v45);
      if ( v63 == 0 )
        goto LABEL_58;
      v46 = *(uint32_t *)(v44 + 12);
      if ( v46 != 0 )
      {
        v47 = *(uint32_t *)(v46 + 8);
        if ( v47 != 0 && ((1 << v45) & *(uint32_t *)(v47 + 4 * ((int)*v66 >> 5))) == 0 )
          goto LABEL_58;
      }
      v48 = *((uint32_t *)a1 + 10);
      v49 = (uint32_t *)(*(uint32_t *)(v48 + 80) + 8 * (*((uint32_t *)a1 + 14) + v45));
      if ( *v49 == 2 )
        break;
      if ( *v49 == 1 )
      {
        v50 = *(uint32_t *)(*(uint32_t *)(v48 + 24) + 4 * v45);
        G4_VCALL<void>(v50, 76, v49[1], v63, *(uint32_t *)(*(uint32_t *)(v44 + 72) + 4 * v45));
        if ( v60 == ++v66 )
        {
LABEL_66:
          v41 = v74;
          goto LABEL_67;
        }
      }
      else
      {
LABEL_58:
        if ( v60 == ++v66 )
          goto LABEL_66;
      }
    }
    Animation = v49[1];
    v70 = AnimationData;
    v71 = v78;
    (*(void (**)(uint32_t, int *, int, int, uint32_t))(**(uint32_t **)(Animation + 20) + 56))(
      *(uint32_t *)(Animation + 20),
      &Animation,
      v67,
      v63,
      *(uint32_t *)(*(uint32_t *)(v44 + 72) + 4 * v45));
    goto LABEL_58;
  }
  v6 = *a3;
  v7 = *(uint32_t *)(*a3 + 44);
  v8 = *a3 + 28;
  if ( v7 != 1 )
  {
    v8 = v6 + 24;
    if ( v7 == 2 )
    {
      v8 = v6 + 32;
      if ( *(uint32_t *)(v6 + 16) == 0 )
        v8 = v6 + 24;
    }
  }
  sub_D434A0((int)(uintptr_t)(&v76), (uint32_t *)(*(uint32_t *)v8 + 8), 0);
  v9 = v76;
  if ( v76 != 0 )
  {
    v10 = v77;
    v11 = &v77;
  }
  else
  {
    v11 = (uint16_t **)v77;
    v10 = *(uint16_t **)v77;
  }
  v55 = v11[1];
  if ( v10 != v55 )
  {
    v64 = v10;
    while ( 1 )
    {
      v12 = *v64;
      v13 = *a3;
      v61 = *(uint32_t *)(*(uint32_t *)(*a3 + 60) + 4 * v12);
      if ( v61 == 0 )
        goto LABEL_11;
      v14 = *(uint32_t *)(v13 + 12);
      if ( v14 != 0 )
      {
        v15 = *(uint32_t *)(v14 + 8);
        if ( v15 != 0 && ((1 << v12) & *(uint32_t *)(v15 + 4 * ((int)*v64 >> 5))) == 0 )
          goto LABEL_11;
      }
      v16 = *((uint32_t *)a1 + 10);
      v17 = (uint32_t *)(*(uint32_t *)(v16 + 80) + 8 * (*((uint32_t *)a1 + 14) + v12));
      if ( *v17 == 2 )
        break;
      if ( *v17 == 1 )
      {
        v18 = *(uint32_t *)(*(uint32_t *)(v16 + 24) + 4 * v12);
        G4_VCALL<void>(v18, 76, v17[1], v61, *(uint32_t *)(*(uint32_t *)(v13 + 72) + 4 * v12));
        if ( v55 == ++v64 )
        {
LABEL_19:
          v9 = v76;
          goto LABEL_20;
        }
      }
      else
      {
LABEL_11:
        if ( v55 == ++v64 )
          goto LABEL_19;
      }
    }
    Animation = v17[1];
    v70 = AnimationData;
    v71 = v78;
    (*(void (**)(uint32_t, int *, uint32_t, int, uint32_t, int, uint32_t))(**(uint32_t **)(Animation + 20) + 72))(
      *(uint32_t *)(Animation + 20),
      &Animation,
      LODWORD(a2),
      v61,
      *(uint32_t *)(*(uint32_t *)(v13 + 72) + 4 * v12),
      *((uint32_t *)a1 + 11) + 4 * v12,
      v56);
    goto LABEL_11;
  }
LABEL_20:
  if ( v9 != 0 )
  {
    v19 = (int)(uintptr_t)(v77);
    if ( v77 != nullptr )
LABEL_22:
      gll_operator_delete_arr(v19);
  }
LABEL_23:
  result = v58;
  if ( v58 != nullptr )
    return (volatile int32_t *)sub_5459C0(v58);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSet::prepareAnimationHandlingValues  (binary VA: 0xd5d220)
// Original: glitch::collada::CSceneNodeAnimatorSet::prepareAnimationHandlingValues
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorSet::prepareAnimationHandlingValues(int **a1, unsigned int a2, int64_t a3, int a4)
{
  int v4;
  signed int v5;
  typedef void *_g4_t_v7;
  typedef int _g4_t_v8[2];
  typedef int _g4_t_v9[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v9)) > _g4_s2 ? (24u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);

  if ( *(uint32_t *)(a4 + 12) != 2 )
  {
    if ( *(uint32_t *)(a4 + 8) != 0 )
      glitch::core::releaseProcessBuffer(*(glitch::core::Self **)(a4 + 8), v7);
    v4 = *(uint32_t *)(a4 + 4);
    *(uint32_t *)(a4 + 12) = 2;
    v5 = 2 * *(uint32_t *)(v4 + 48);
    if ( v5 > 0 )
      *(uint32_t *)(a4 + 8) = glitch::core::allocProcessBuffer(v5, (int)(uintptr_t)(v7));
  }
  v8[0] = a4;
  v8[1] = 0;
  glitch::collada::CSceneNodeAnimatorSet::computeAnimationValuesEx(a1, a3, (uint32_t *)(v8));
  v9[0] = a4;
  v9[1] = 1;
  glitch::collada::CSceneNodeAnimatorSet::computeAnimationValuesEx(a1, __SPAIR64__(HIDWORD(a3), a2), (uint32_t *)(v9));
  return 2;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSet::prepareAnimationHandlingValues  (binary VA: 0xd5d2f0)
// Original: glitch::collada::CSceneNodeAnimatorSet::prepareAnimationHandlingValues
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorSet::prepareAnimationHandlingValues(int **a1, void *a2, unsigned int a3, int a4)
{
  uint32_t *v4;
  int v5;
  signed int v6;
  char v7;
  unsigned int v8;
  unsigned int v9;
  int v11;
  signed int v12;
  typedef int _g4_t_v13;
  typedef float _g4_t_v14;
  typedef float _g4_t_v15;
  typedef char _g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef unsigned int _g4_t_v19;
  typedef unsigned int _g4_t_v20;
  typedef unsigned int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v14)) > _g4_s1 ? (24u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v15)) > _g4_s2 ? (24u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v16)) > _g4_s3 ? (28u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v17)) > _g4_s4 ? (32u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v18)) > _g4_s5 ? (32u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v19)) > _g4_s6 ? (32u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v20)) > _g4_s7 ? (36u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v21)) > _g4_s8 ? (44u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v22)) > _g4_s9 ? (48u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v23)) > _g4_s10 ? (52u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v24)) > _g4_s11 ? (56u + sizeof(_g4_t_v24)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v25)) > _g4_s12 ? (60u + sizeof(_g4_t_v25)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 52u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 56u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 60u);

  v4 = (uint32_t *)((int (*)(int **))(*a1)[17])(a1);
  v21 = *(uint32_t *)(*v4 + 4);
  v17 = (uint32_t *)*v4;
  v14 = ((long double (*)(uint32_t))*(uint32_t *)(*(uint32_t *)*v4 + 84))(*v4);
  if ( v14 <= 0.0 )
    v20 = v17[4];
  else
    v20 = v17[5];
  if ( G4_VCALL<uint8_t>(v17, 76) != 0
    && (v13 = (int)(uintptr_t)(a2), G4_VCALL<uint8_t>(v17, 4) != 0) )
  {
    if ( *(uint32_t *)(a4 + 12) != 4 )
    {
      if ( *(uint32_t *)(a4 + 8) != 0 )
        glitch::core::releaseProcessBuffer(*(glitch::core::Self **)(a4 + 8), a2);
      v11 = *(uint32_t *)(a4 + 4);
      *(uint32_t *)(a4 + 12) = 4;
      v12 = 4 * *(uint32_t *)(v11 + 48);
      if ( v12 > 0 )
        *(uint32_t *)(a4 + 8) = glitch::core::allocProcessBuffer(v12, v13);
    }
    v22 = a4;
    v23 = 0;
    glitch::collada::CSceneNodeAnimatorSet::computeAnimationValuesEx(a1, __SPAIR64__(a3, v20), (uint32_t *)(&v22));
    v24 = a4;
    v25 = 1;
    glitch::collada::CSceneNodeAnimatorSet::computeAnimationValuesEx(a1, __SPAIR64__(a3, v21), (uint32_t *)(&v24));
    v7 = 1;
  }
  else
  {
    if ( *(uint32_t *)(a4 + 12) != 2 )
    {
      if ( *(uint32_t *)(a4 + 8) != 0 )
        glitch::core::releaseProcessBuffer(*(glitch::core::Self **)(a4 + 8), (void *)v13);
      v5 = *(uint32_t *)(a4 + 4);
      *(uint32_t *)(a4 + 12) = 2;
      v6 = 2 * *(uint32_t *)(v5 + 48);
      if ( v6 > 0 )
        *(uint32_t *)(a4 + 8) = glitch::core::allocProcessBuffer(v6, v13);
    }
    v7 = 0;
  }
  v16 = v7;
  glitch::collada::ISceneNodeAnimator::updateTime((glitch::collada::ISceneNodeAnimator::Self *)a1, *(float *)&a2);
  v18 = *(uint32_t **)((int (*)(int **))(*a1)[17])(a1);
  v15 = ((long double (*)(uint32_t *))*(uint32_t *)(*v18 + 84))(v18);
  if ( v15 <= 0.0 )
    v8 = v18[5];
  else
    v8 = v18[4];
  v9 = v18[1];
  v22 = a4;
  if ( v16 != 0 )
  {
    v19 = v8;
    v23 = 2;
    glitch::collada::CSceneNodeAnimatorSet::computeAnimationValuesEx(a1, __SPAIR64__(a3, v9), (uint32_t *)(&v22));
    v24 = a4;
    v25 = 3;
    glitch::collada::CSceneNodeAnimatorSet::computeAnimationValuesEx(a1, __SPAIR64__(a3, v19), (uint32_t *)(&v24));
    return 4;
  }
  else
  {
    v23 = 0;
    glitch::collada::CSceneNodeAnimatorSet::computeAnimationValuesEx(a1, __SPAIR64__(a3, v9), (uint32_t *)(&v22));
    v24 = a4;
    v25 = 1;
    glitch::collada::CSceneNodeAnimatorSet::computeAnimationValuesEx(a1, __SPAIR64__(a3, v21), (uint32_t *)(&v24));
    return 2;
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSet::applyAnimationHandlingValues  (binary VA: 0xd5d5a0)
// Original: glitch::collada::CSceneNodeAnimatorSet::applyAnimationHandlingValues
// ----------------------------------------------------------------------------
const glitch::collada::CAnimationFilterBase::Self * glitch::collada::CSceneNodeAnimatorSet::applyAnimationHandlingValues(glitch::collada::ISceneNodeAnimator::Self *a1, void *a2, volatile int32_t **a3)
{
  int v3;
  int MaskAllocationSize;
  volatile int32_t *v5;
  int v6;
  volatile int32_t *v7;
  int v8;
  volatile int32_t *v9;
  volatile int32_t *v10;
  volatile int32_t *v11;
  int v12;
  int v13;
  volatile int32_t *v14;
  char v15;
  uint32_t *v16;
  uint32_t **v17;
  int v18;
  int v19;
  int v20;
  uint32_t *v21;
  int v22;
  const glitch::collada::CAnimationFilterBase::Self *v23;
  int v24;
  volatile int32_t *v25;
  const glitch::collada::CAnimationFilterBase::Self *result;
  typedef int _g4_t_v27;
  typedef void *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef uint16_t *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef uint16_t *_g4_t_v32;
  typedef void *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef volatile int32_t *_g4_t_v36;
  typedef glitch::core::Self *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef char _g4_t_v39[4];
  typedef uint32_t *_g4_t_v40;
  typedef const glitch::collada::CAnimationFilterBase::Self *_g4_t_v41;
  typedef volatile int32_t *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef void (**_g4_t_v44)(glitch::collada::detail::CAnimationFilter<glitch::core::SProcessBufferAllocator<unsigned int, false>> *);
  typedef int32_t _g4_t_v45;
  typedef glitch::core::Self *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef char _g4_t_v48;
  typedef int _g4_t_v49;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (4u + sizeof(_g4_t_v27)) > _g4_s0 ? (4u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v28)) > _g4_s1 ? (4u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v29)) > _g4_s2 ? (12u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v30)) > _g4_s3 ? (40u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v31)) > _g4_s4 ? (44u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v32)) > _g4_s5 ? (48u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v33)) > _g4_s6 ? (52u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v34)) > _g4_s7 ? (56u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v35)) > _g4_s8 ? (64u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v36)) > _g4_s9 ? (68u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v37)) > _g4_s10 ? (72u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v38)) > _g4_s11 ? (76u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v39)) > _g4_s12 ? (80u + sizeof(_g4_t_v39)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v40)) > _g4_s13 ? (84u + sizeof(_g4_t_v40)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v41)) > _g4_s14 ? (96u + sizeof(_g4_t_v41)) : _g4_s14,
    _g4_s16 = (100u + sizeof(_g4_t_v42)) > _g4_s15 ? (100u + sizeof(_g4_t_v42)) : _g4_s15,
    _g4_s17 = (104u + sizeof(_g4_t_v43)) > _g4_s16 ? (104u + sizeof(_g4_t_v43)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v44)) > _g4_s17 ? (108u + sizeof(_g4_t_v44)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v45)) > _g4_s18 ? (112u + sizeof(_g4_t_v45)) : _g4_s18,
    _g4_s20 = (116u + sizeof(_g4_t_v46)) > _g4_s19 ? (116u + sizeof(_g4_t_v46)) : _g4_s19,
    _g4_s21 = (124u + sizeof(_g4_t_v47)) > _g4_s20 ? (124u + sizeof(_g4_t_v47)) : _g4_s20,
    _g4_s22 = (128u + sizeof(_g4_t_v48)) > _g4_s21 ? (128u + sizeof(_g4_t_v48)) : _g4_s21,
    _g4_s23 = (144u + sizeof(_g4_t_v49)) > _g4_s22 ? (144u + sizeof(_g4_t_v49)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 4u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 56u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 64u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 68u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 72u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 76u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 80u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 84u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 96u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 100u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 104u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 108u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 112u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 116u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 124u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 128u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 144u);

  v41 = nullptr;
  v42 = *a3;
  v3 = *((uint32_t *)v42 + 11);
  *((uint32_t *)v42 + 11) = 1;
  v43 = v3;
  glitch::collada::CAnimationFilterBase::Construct((volatile int32_t *)&v44, (int)(uintptr_t)(a3));
  v44 = (void (**)(glitch::collada::detail::CAnimationFilter<glitch::core::SProcessBufferAllocator<unsigned int, false>> *))(uintptr_t)((void (**))(uintptr_t)(((uint32_t)(uintptr_t)&off_2079838)));
  MaskAllocationSize = glitch::collada::CAnimationFilterBase::getMaskAllocationSize((glitch::collada::CAnimationFilterBase::Self *)&v44);
  v46 = (glitch::core::Self *)glitch::core::allocProcessBuffer(4 * MaskAllocationSize, v27);
  glitch::collada::CAnimationFilterBase::init((glitch::collada::CAnimationFilterBase::Self *)&v44);
  v47 = (int)(uintptr_t)(a3);
  _mm_mfence();
  sub_8B1B00(&v45);
  v5 = *(volatile int32_t **)(*(uint32_t *)v47 + 12);
  v6 = *(uint32_t *)(*(uint32_t *)v47 + 16);
  if ( v5 != nullptr )
    sub_8B1B00(v5 + 1);
  v7 = (volatile int32_t *)v41;
  v41 = (const glitch::collada::CAnimationFilterBase::Self *)v5;
  if ( v7 != nullptr )
    sub_5459C0(v7);
  glitch::collada::CAnimationFilterBase::set(
    (glitch::collada::CAnimationFilterBase::Self *)&v44,
    *(const glitch::collada::CAnimationFilterBase::Self **)(v6 + 80));
  if ( v41 != nullptr )
    glitch::collada::CAnimationFilterBase::intersect((glitch::collada::CAnimationFilterBase::Self *)&v44, v41);
  if ( (uint8_t)glitch::collada::CAnimationFilterBase::isNull((glitch::collada::CAnimationFilterBase::Self *)&v44) != 0 )
  {
    v48 = 0;
    glitch::collada::ISceneNodeAnimator::updateTime(a1, *(float *)&a2);
    if ( v48 == 0 )
      goto LABEL_47;
    goto LABEL_39;
  }
  sub_8B1B00(&v45);
  v8 = *(uint32_t *)v47;
  if ( *(void (****)(glitch::collada::detail::CAnimationFilter<glitch::core::SProcessBufferAllocator<unsigned int, false>> *))(*(uint32_t *)v47 + 12) != &v44 )
  {
    sub_8B1B00(&v45);
    v9 = *(volatile int32_t **)(v8 + 12);
    *(uint32_t *)(v8 + 12) = (uint32_t)(uintptr_t)(&v44);
    if ( v9 != nullptr )
      sub_5459C0(v9);
    *(uint8_t *)(v8 + 20) = 1;
  }
  sub_5459C0((volatile int32_t *)&v44);
  v48 = 1;
  v35 = (int)(uintptr_t)(&off_2047EB8);
  v10 = *a3;
  v36 = *a3;
  if ( v36 != nullptr )
    sub_8B1B00(v10 + 1);
  v37 = nullptr;
  v38 = 0;
  v35 = (int)((uint32_t)(uintptr_t)&off_20795A0);
  v31 = glitch::collada::CSceneNodeAnimatorSet::prepareAnimationHandlingValues(
          (int **)a1,
          a2,
          (unsigned int)(uintptr_t)(a3),
          (int)(uintptr_t)(&v35));
  v11 = *a3;
  v12 = *((uint32_t *)*a3 + 4);
  v34 = v12;
  if ( v12 != 0 )
  {
    sub_8B1B00((volatile int32_t *)(v12 + 4));
    v11 = *a3;
  }
  v13 = *((uint32_t *)v11 + 11);
  v14 = v11 + 7;
  if ( v13 != 1 )
  {
    v14 = v11 + 6;
    if ( v13 == 2 )
    {
      v14 = v11 + 8;
      if ( *((uint32_t *)v11 + 4) == 0 )
        v14 = v11 + 6;
    }
  }
  sub_D434A0((int)(uintptr_t)(v39), (uint32_t *)(*v14 + 8), 0);
  v15 = v39[0];
  if ( v39[0] != 0 )
  {
    v16 = v40;
    v17 = &v40;
  }
  else
  {
    v17 = (uint32_t **)v40;
    v16 = (uint32_t *)*v40;
  }
  v30 = (uint16_t *)(v17[1]);
  if ( v30 != (uint16_t *)v16 )
  {
    v32 = (uint16_t *)(v16);
    do
    {
      while ( 1 )
      {
        v18 = (uint16_t)*v32;
        v33 = *(void **)(*((uint32_t *)*a3 + 15) + 4 * v18);
        if ( v33 != nullptr )
        {
          v19 = *((uint32_t *)*a3 + 3);
          if ( v19 == 0 )
            break;
          v20 = *(uint32_t *)(v19 + 8);
          if ( v20 == 0 || ((1 << *v32) & *(uint32_t *)(v20 + 4 * ((int)(uint16_t)*v32 >> 5))) != 0 )
            break;
        }
        if ( v30 == ++v32 )
          goto LABEL_28;
      }
      v21 = (uint32_t *)G4_VCALL<int>(a1, 84);
      v22 = G4_VCALL<int>(*v21, 20, v18);
      LOBYTE(v29) = *(uint8_t *)(*(uint32_t *)(v34 + 48) + v18);
      G4_VCALL<void>(v22, 24, (char *)v37 + v38 * *(uint16_t *)(**((uint32_t **)v36 + 14) + 2 * v18), v31, v29, &v49);
      v28 = v33;
      (*(void (**)(int))(*(uint32_t *)(v34 + 60) + 4 * v18))(v22);
      ++v32;
    }
    while ( v30 != v32 );
LABEL_28:
    v15 = v39[0];
  }
  if ( v15 != 0 && v40 != nullptr )
    gll_operator_delete_arr((int)(uintptr_t)(v40));
  if ( v34 != 0 )
    sub_5459C0((volatile int32_t *)v34);
  v35 = (int)((uint32_t)(uintptr_t)&off_20795A0);
  if ( v37 != nullptr )
    glitch::core::releaseProcessBuffer(v37, v28);
  v35 = (int)(uintptr_t)(&off_2047EB8);
  if ( v36 != nullptr )
    sub_5459C0(v36);
  if ( v48 != 0 )
  {
LABEL_39:
    v23 = v41;
    v24 = *(uint32_t *)v47;
    v25 = *(volatile int32_t **)(*(uint32_t *)v47 + 12);
    if ( v25 != (volatile int32_t *)v41 )
    {
      if ( v41 != nullptr )
      {
        sub_8B1B00((volatile int32_t *)v41 + 1);
        v25 = *(volatile int32_t **)(v24 + 12);
      }
      *(uint32_t *)(v24 + 12) = (uint32_t)(uintptr_t)(v23);
      if ( v25 != nullptr )
        sub_5459C0(v25);
      *(uint8_t *)(v24 + 20) = 1;
    }
    _mm_mfence();
  }
LABEL_47:
  v44 = (void (**)(glitch::collada::detail::CAnimationFilter<glitch::core::SProcessBufferAllocator<unsigned int, false>> *))(uintptr_t)((void (**))(uintptr_t)(((uint32_t)(uintptr_t)&off_2079838)));
  if ( v46 != nullptr )
    glitch::core::releaseProcessBuffer(v46, v28);
  glitch::collada::CAnimationFilterBase::Destroy((volatile int32_t **)&v44);
  *((uint32_t *)v42 + 11) = v43;
  result = v41;
  if ( v41 != nullptr )
    return (const glitch::collada::CAnimationFilterBase::Self *)sub_5459C0((volatile int32_t *)v41);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSet::computeAnimationHandlingValues  (binary VA: 0xd5da40)
// Original: glitch::collada::CSceneNodeAnimatorSet::computeAnimationHandlingValues
// ----------------------------------------------------------------------------
const glitch::collada::CAnimationFilterBase::Self * glitch::collada::CSceneNodeAnimatorSet::computeAnimationHandlingValues(glitch::collada::ISceneNodeAnimator::Self *a1, void *a2, volatile int32_t **a3)
{
  int v3;
  int MaskAllocationSize;
  volatile int32_t *v5;
  int v6;
  volatile int32_t *v7;
  int v8;
  volatile int32_t *v9;
  volatile int32_t *v10;
  volatile int32_t *v11;
  volatile int32_t *v12;
  int v13;
  volatile int32_t *v14;
  char v15;
  uint32_t *v16;
  uint32_t **v17;
  int v18;
  int v19;
  int v20;
  uint32_t *v21;
  const glitch::collada::CAnimationFilterBase::Self *v22;
  int v23;
  volatile int32_t *v24;
  const glitch::collada::CAnimationFilterBase::Self *result;
  int v26;
  char *v27;
  uint16_t *v28;
  uint16_t *v29;
  int v30;
  int v31;
  volatile int32_t *v32;
  glitch::core::Self *v33;
  int v34;
  char v35[4];
  uint32_t *v36;
  const glitch::collada::CAnimationFilterBase::Self *v37;
  volatile int32_t *v38;
  int v39;
  void (**v40)(glitch::collada::detail::CAnimationFilter<glitch::core::SProcessBufferAllocator<unsigned int, false>> *);
  int32_t v41;
  glitch::core::Self *v42;
  int v43;
  char v44;

  v37 = nullptr;
  v38 = *a3;
  v3 = *((uint32_t *)v38 + 11);
  *((uint32_t *)v38 + 11) = 1;
  v39 = v3;
  glitch::collada::CAnimationFilterBase::Construct((volatile int32_t *)&v40, (int)(uintptr_t)(a3));
  v40 = (void (**)(glitch::collada::detail::CAnimationFilter<glitch::core::SProcessBufferAllocator<unsigned int, false>> *))(uintptr_t)((void (**))(uintptr_t)(((uint32_t)(uintptr_t)&off_2079838)));
  MaskAllocationSize = glitch::collada::CAnimationFilterBase::getMaskAllocationSize((glitch::collada::CAnimationFilterBase::Self *)&v40);
  v42 = (glitch::core::Self *)glitch::core::allocProcessBuffer(4 * MaskAllocationSize, v26);
  glitch::collada::CAnimationFilterBase::init((glitch::collada::CAnimationFilterBase::Self *)&v40);
  v43 = (int)(uintptr_t)(a3);
  _mm_mfence();
  sub_8B1B00(&v41);
  v5 = *(volatile int32_t **)(*(uint32_t *)v43 + 12);
  v6 = *(uint32_t *)(*(uint32_t *)v43 + 16);
  if ( v5 != nullptr )
    sub_8B1B00(v5 + 1);
  v7 = (volatile int32_t *)v37;
  v37 = (const glitch::collada::CAnimationFilterBase::Self *)v5;
  if ( v7 != nullptr )
    sub_5459C0(v7);
  glitch::collada::CAnimationFilterBase::set(
    (glitch::collada::CAnimationFilterBase::Self *)&v40,
    *(const glitch::collada::CAnimationFilterBase::Self **)(v6 + 80));
  if ( v37 != nullptr )
    glitch::collada::CAnimationFilterBase::intersect((glitch::collada::CAnimationFilterBase::Self *)&v40, v37);
  if ( (uint8_t)glitch::collada::CAnimationFilterBase::isNull((glitch::collada::CAnimationFilterBase::Self *)&v40) != 0 )
  {
    v44 = 0;
    glitch::collada::ISceneNodeAnimator::updateTime(a1, *(float *)&a2);
    if ( v44 == 0 )
      goto LABEL_47;
    goto LABEL_39;
  }
  sub_8B1B00(&v41);
  v8 = *(uint32_t *)v43;
  if ( *(void (****)(glitch::collada::detail::CAnimationFilter<glitch::core::SProcessBufferAllocator<unsigned int, false>> *))(*(uint32_t *)v43 + 12) != &v40 )
  {
    sub_8B1B00(&v41);
    v9 = *(volatile int32_t **)(v8 + 12);
    *(uint32_t *)(v8 + 12) = (uint32_t)(uintptr_t)(&v40);
    if ( v9 != nullptr )
      sub_5459C0(v9);
    *(uint8_t *)(v8 + 20) = 1;
  }
  sub_5459C0((volatile int32_t *)&v40);
  v44 = 1;
  v31 = (int)(uintptr_t)(&off_2047EB8);
  v10 = *a3;
  v32 = *a3;
  if ( v32 != nullptr )
    sub_8B1B00(v10 + 1);
  v33 = nullptr;
  v34 = 0;
  v31 = (int)((uint32_t)(uintptr_t)&off_20795A0);
  glitch::collada::CSceneNodeAnimatorSet::prepareAnimationHandlingValues((int **)a1, a2, (unsigned int)(uintptr_t)(a3), (int)(uintptr_t)(&v31));
  v11 = *a3;
  v12 = *((volatile int32_t **)*a3 + 4);
  if ( v12 != nullptr )
  {
    sub_8B1B00(v12 + 1);
    v11 = *a3;
  }
  v13 = *((uint32_t *)v11 + 11);
  v14 = v11 + 7;
  if ( v13 != 1 )
  {
    v14 = v11 + 6;
    if ( v13 == 2 )
    {
      v14 = v11 + 8;
      if ( *((uint32_t *)v11 + 4) == 0 )
        v14 = v11 + 6;
    }
  }
  sub_D434A0((int)(uintptr_t)(v35), (uint32_t *)(*v14 + 8), 0);
  v15 = v35[0];
  if ( v35[0] != 0 )
  {
    v16 = v36;
    v17 = &v36;
  }
  else
  {
    v17 = (uint32_t **)v36;
    v16 = (uint32_t *)*v36;
  }
  v28 = (uint16_t *)(v17[1]);
  if ( v28 != (uint16_t *)v16 )
  {
    v29 = (uint16_t *)(v16);
    do
    {
      while ( 1 )
      {
        v18 = (uint16_t)*v29;
        if ( *(uint32_t *)(*((uint32_t *)*a3 + 15) + 4 * v18) != 0 )
        {
          v19 = *((uint32_t *)*a3 + 3);
          if ( v19 == 0 )
            break;
          v20 = *(uint32_t *)(v19 + 8);
          if ( v20 == 0 || ((1 << *v29) & *(uint32_t *)(v20 + 4 * ((int)(uint16_t)*v29 >> 5))) != 0 )
            break;
        }
        if ( v28 == ++v29 )
          goto LABEL_28;
      }
      v21 = (uint32_t *)G4_VCALL<int>(a1, 84);
      v30 = G4_VCALL<int>(*v21, 20, v18);
      v27 = (char *)v33 + v34 * *(uint16_t *)(**((uint32_t **)v32 + 14) + 2 * v18);
      G4_VCALL<void>(v30, 24);
      ++v29;
    }
    while ( v28 != v29 );
LABEL_28:
    v15 = v35[0];
  }
  if ( v15 != 0 && v36 != nullptr )
    gll_operator_delete_arr((int)(uintptr_t)(v36));
  if ( v12 != nullptr )
    sub_5459C0(v12);
  v31 = (int)((uint32_t)(uintptr_t)&off_20795A0);
  if ( v33 != nullptr )
    glitch::core::releaseProcessBuffer(v33, v27);
  v31 = (int)(uintptr_t)(&off_2047EB8);
  if ( v32 != nullptr )
    sub_5459C0(v32);
  if ( v44 != 0 )
  {
LABEL_39:
    v22 = v37;
    v23 = *(uint32_t *)v43;
    v24 = *(volatile int32_t **)(*(uint32_t *)v43 + 12);
    if ( v24 != (volatile int32_t *)v37 )
    {
      if ( v37 != nullptr )
      {
        sub_8B1B00((volatile int32_t *)v37 + 1);
        v24 = *(volatile int32_t **)(v23 + 12);
      }
      *(uint32_t *)(v23 + 12) = (uint32_t)(uintptr_t)(v22);
      if ( v24 != nullptr )
        sub_5459C0(v24);
      *(uint8_t *)(v23 + 20) = 1;
    }
    _mm_mfence();
  }
LABEL_47:
  v40 = (void (**)(glitch::collada::detail::CAnimationFilter<glitch::core::SProcessBufferAllocator<unsigned int, false>> *))(uintptr_t)((void (**))(uintptr_t)(((uint32_t)(uintptr_t)&off_2079838)));
  if ( v42 != nullptr )
    glitch::core::releaseProcessBuffer(v42, v27);
  glitch::collada::CAnimationFilterBase::Destroy((volatile int32_t **)&v40);
  *((uint32_t *)v38 + 11) = v39;
  result = v37;
  if ( v37 != nullptr )
    return (const glitch::collada::CAnimationFilterBase::Self *)sub_5459C0((volatile int32_t *)v37);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSet::computeAnimationValues  (binary VA: 0xd5eb10)
// Original: glitch::collada::CSceneNodeAnimatorSet::computeAnimationValues
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorSet::computeAnimationValues(glitch::collada::ISceneNodeAnimator::Self *a1, void *a2, volatile int32_t **a3, uint32_t *a4)
{
  volatile int32_t *v4;
  int v5;
  int v6;
  int64_t v8;
  int64_t v9;
  int v10;
  volatile int32_t *v11;
  int v12;

  v4 = *a3;
  v5 = *((uint32_t *)*a3 + 11);
  *((uint32_t *)*a3 + 11) = 2;
  if ( *(uint32_t *)(*((uint32_t *)a1 + 10) + 36) != 0 || *((uint32_t *)a1 + 7) != 0 )
  {
    v6 = *((uint32_t *)*a3 + 4);
    v10 = v5;
    if ( v6 != 0 )
    {
      v11 = *((volatile int32_t **)*a3 + 4);
      sub_8B1B00((volatile int32_t *)(v6 + 4));
      G4_VCALL<void>(a1, 68);
      glitch::collada::CSceneNodeAnimatorSet::computeAnimationHandlingValues(a1, a2, a3);
      HIDWORD(v8) = (uint32_t)(uintptr_t)(a3);
      LODWORD(v8) = *(uint32_t *)(*(uint32_t *)(*(int (**)(glitch::collada::ISceneNodeAnimator::Self *))(*(uint32_t *)a1 + 68))(a1)
                              + 4);
      glitch::collada::CSceneNodeAnimatorSet::computeAnimationNoHandlingValuesEx((int **)a1, v8, a4);
      sub_5459C0(v11);
    }
    else
    {
      v12 = *(uint32_t *)G4_VCALL<int>(a1, 68);
      glitch::collada::ISceneNodeAnimator::updateTime(a1, *(float *)&a2);
      HIDWORD(v9) = (uint32_t)(uintptr_t)(a3);
      LODWORD(v9) = *(uint32_t *)(v12 + 4);
      glitch::collada::CSceneNodeAnimatorSet::computeAnimationValuesEx((int **)a1, v9, a4);
    }
    v5 = v10;
  }
  *((uint32_t *)v4 + 11) = v5;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSet::computeAnimationHandlingValues  (binary VA: 0xd5ec50)
// Original: glitch::collada::CSceneNodeAnimatorSet::computeAnimationHandlingValues
// ----------------------------------------------------------------------------
const glitch::collada::CAnimationFilterBase::Self * glitch::collada::CSceneNodeAnimatorSet::computeAnimationHandlingValues(int **a1, unsigned int a2, int64_t a3)
{
  int v3;
  int MaskAllocationSize;
  volatile int32_t *v5;
  int v6;
  volatile int32_t *v7;
  int v8;
  volatile int32_t *v9;
  int v10;
  int v11;
  volatile int32_t *v12;
  int v13;
  int v14;
  char v15;
  uint32_t *v16;
  uint32_t **v17;
  int v18;
  int v19;
  int v20;
  uint32_t *v21;
  const glitch::collada::CAnimationFilterBase::Self *result;
  const glitch::collada::CAnimationFilterBase::Self *v23;
  int v24;
  volatile int32_t *v25;
  typedef int _g4_t_v26;
  typedef void *_g4_t_v27;
  typedef char *_g4_t_v28;
  typedef uint16_t *_g4_t_v29;
  typedef uint16_t *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef volatile int32_t *_g4_t_v34;
  typedef glitch::core::Self *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef uint8_t _g4_t_v37[4];
  typedef uint32_t *_g4_t_v38;
  typedef const glitch::collada::CAnimationFilterBase::Self *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef void (**_g4_t_v42)(glitch::collada::detail::CAnimationFilter<glitch::core::SProcessBufferAllocator<unsigned int, false>> *);
  typedef int32_t _g4_t_v43;
  typedef glitch::core::Self *_g4_t_v44;
  typedef int *_g4_t_v45;
  typedef char _g4_t_v46;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v26)) > _g4_s0 ? (4u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v27)) > _g4_s1 ? (4u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v28)) > _g4_s2 ? (4u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v29)) > _g4_s3 ? (32u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v30)) > _g4_s4 ? (36u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v31)) > _g4_s5 ? (40u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v32)) > _g4_s6 ? (52u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v33)) > _g4_s7 ? (64u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v34)) > _g4_s8 ? (68u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v35)) > _g4_s9 ? (72u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v36)) > _g4_s10 ? (76u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v37)) > _g4_s11 ? (80u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v38)) > _g4_s12 ? (84u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v39)) > _g4_s13 ? (96u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v40)) > _g4_s14 ? (100u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (104u + sizeof(_g4_t_v41)) > _g4_s15 ? (104u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (108u + sizeof(_g4_t_v42)) > _g4_s16 ? (108u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (112u + sizeof(_g4_t_v43)) > _g4_s17 ? (112u + sizeof(_g4_t_v43)) : _g4_s17,
    _g4_s19 = (116u + sizeof(_g4_t_v44)) > _g4_s18 ? (116u + sizeof(_g4_t_v44)) : _g4_s18,
    _g4_s20 = (124u + sizeof(_g4_t_v45)) > _g4_s19 ? (124u + sizeof(_g4_t_v45)) : _g4_s19,
    _g4_s21 = (128u + sizeof(_g4_t_v46)) > _g4_s20 ? (128u + sizeof(_g4_t_v46)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 4u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 4u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 52u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 64u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 68u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 72u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 76u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 80u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 84u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 96u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 100u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 104u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 108u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 112u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 116u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 124u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 128u);

  v39 = nullptr;
  v40 = *(uint32_t *)HIDWORD(a3);
  v3 = *(uint32_t *)(v40 + 44);
  *(uint32_t *)(v40 + 44) = 1;
  v41 = v3;
  glitch::collada::CAnimationFilterBase::Construct((volatile int32_t *)&v42, SHIDWORD(a3));
  v42 = (void (**)(glitch::collada::detail::CAnimationFilter<glitch::core::SProcessBufferAllocator<unsigned int, false>> *))(uintptr_t)((void (**))(uintptr_t)(((uint32_t)(uintptr_t)&off_2079838)));
  MaskAllocationSize = glitch::collada::CAnimationFilterBase::getMaskAllocationSize((glitch::collada::CAnimationFilterBase::Self *)&v42);
  v44 = (glitch::core::Self *)glitch::core::allocProcessBuffer(4 * MaskAllocationSize, v26);
  glitch::collada::CAnimationFilterBase::init((glitch::collada::CAnimationFilterBase::Self *)&v42);
  v45 = (int *)HIDWORD(a3);
  _mm_mfence();
  sub_8B1B00(&v43);
  v5 = *(volatile int32_t **)(*v45 + 12);
  v6 = *(uint32_t *)(*v45 + 16);
  if ( v5 != nullptr )
    sub_8B1B00(v5 + 1);
  v7 = (volatile int32_t *)v39;
  v39 = (const glitch::collada::CAnimationFilterBase::Self *)v5;
  if ( v7 != nullptr )
    sub_5459C0(v7);
  glitch::collada::CAnimationFilterBase::set(
    (glitch::collada::CAnimationFilterBase::Self *)&v42,
    *(const glitch::collada::CAnimationFilterBase::Self **)(v6 + 80));
  if ( v39 != nullptr )
    glitch::collada::CAnimationFilterBase::intersect((glitch::collada::CAnimationFilterBase::Self *)&v42, v39);
  if ( (uint8_t)glitch::collada::CAnimationFilterBase::isNull((glitch::collada::CAnimationFilterBase::Self *)&v42) != 0 )
  {
    v46 = 0;
    v42 = (void (**)(glitch::collada::detail::CAnimationFilter<glitch::core::SProcessBufferAllocator<unsigned int, false>> *))(uintptr_t)((void (**))(uintptr_t)(((uint32_t)(uintptr_t)&off_2079838)));
    if ( v44 != nullptr )
      glitch::core::releaseProcessBuffer(v44, v27);
  }
  else
  {
    sub_8B1B00(&v43);
    v8 = *v45;
    if ( *(void (****)(glitch::collada::detail::CAnimationFilter<glitch::core::SProcessBufferAllocator<unsigned int, false>> *))(*v45 + 12) != &v42 )
    {
      sub_8B1B00(&v43);
      v9 = *(volatile int32_t **)(v8 + 12);
      *(uint32_t *)(v8 + 12) = (uint32_t)(uintptr_t)(&v42);
      if ( v9 != nullptr )
        sub_5459C0(v9);
      *(uint8_t *)(v8 + 20) = 1;
    }
    sub_5459C0((volatile int32_t *)&v42);
    v46 = 1;
    v33 = (int)(uintptr_t)(&off_2047EB8);
    v10 = *(uint32_t *)HIDWORD(a3);
    v34 = *(volatile int32_t **)HIDWORD(a3);
    if ( v34 != nullptr )
      sub_8B1B00((volatile int32_t *)(v10 + 4));
    v35 = nullptr;
    v36 = 0;
    v33 = (int)((uint32_t)(uintptr_t)&off_20795A0);
    v31 = glitch::collada::CSceneNodeAnimatorSet::prepareAnimationHandlingValues(a1, a2, a3, (int)(uintptr_t)(&v33));
    v11 = *(uint32_t *)HIDWORD(a3);
    v12 = *(volatile int32_t **)(*(uint32_t *)HIDWORD(a3) + 16);
    if ( v12 != nullptr )
    {
      sub_8B1B00(v12 + 1);
      v11 = *(uint32_t *)HIDWORD(a3);
    }
    v13 = *(uint32_t *)(v11 + 44);
    v14 = v11 + 28;
    if ( v13 != 1 )
    {
      v14 = v11 + 24;
      if ( v13 == 2 )
      {
        v14 = v11 + 32;
        if ( *(uint32_t *)(v11 + 16) == 0 )
          v14 = v11 + 24;
      }
    }
    sub_D434A0((int)(uintptr_t)(v37), (uint32_t *)(*(uint32_t *)v14 + 8), 0);
    v15 = v37[0];
    if ( v37[0] != 0 )
    {
      v16 = v38;
      v17 = &v38;
    }
    else
    {
      v17 = (uint32_t **)v38;
      v16 = (uint32_t *)*v38;
    }
    v29 = (uint16_t *)(v17[1]);
    if ( v29 != (uint16_t *)v16 )
    {
      v30 = (uint16_t *)(v16);
      do
      {
        while ( 1 )
        {
          v18 = (uint16_t)*v30;
          if ( *(uint32_t *)(*(uint32_t *)(*(uint32_t *)HIDWORD(a3) + 60) + 4 * v18) != 0 )
          {
            v19 = *(uint32_t *)(*(uint32_t *)HIDWORD(a3) + 12);
            if ( v19 == 0 )
              break;
            v20 = *(uint32_t *)(v19 + 8);
            if ( v20 == 0 || ((1 << *v30) & *(uint32_t *)(v20 + 4 * (v18 >> 5))) != 0 )
              break;
          }
          if ( v29 == ++v30 )
            goto LABEL_28;
        }
        v21 = (uint32_t *)((int (*)(int **))(*a1)[21])(a1);
        v32 = G4_VCALL<int>(*v21, 20, v18);
        v28 = (char *)v35 + v36 * *(uint16_t *)(**((uint32_t **)v34 + 14) + 2 * v18 * v31);
        G4_VCALL<void>(v32, 24);
        ++v30;
      }
      while ( v29 != v30 );
LABEL_28:
      v15 = v37[0];
    }
    if ( v15 != 0 && v38 != nullptr )
      gll_operator_delete_arr((int)(uintptr_t)(v38));
    if ( v12 != nullptr )
      sub_5459C0(v12);
    v33 = (int)((uint32_t)(uintptr_t)&off_20795A0);
    if ( v35 != nullptr )
      glitch::core::releaseProcessBuffer(v35, v28);
    v33 = (int)(uintptr_t)(&off_2047EB8);
    if ( v34 != nullptr )
      sub_5459C0(v34);
    if ( v46 != 0 )
    {
      v23 = v39;
      v24 = *v45;
      v25 = *(volatile int32_t **)(*v45 + 12);
      if ( v25 != (volatile int32_t *)v39 )
      {
        if ( v39 != nullptr )
        {
          sub_8B1B00((volatile int32_t *)v39 + 1);
          v25 = *(volatile int32_t **)(v24 + 12);
        }
        *(uint32_t *)(v24 + 12) = (uint32_t)(uintptr_t)(v23);
        if ( v25 != nullptr )
          sub_5459C0(v25);
        *(uint8_t *)(v24 + 20) = 1;
      }
      _mm_mfence();
    }
    v42 = (void (**)(glitch::collada::detail::CAnimationFilter<glitch::core::SProcessBufferAllocator<unsigned int, false>> *))(uintptr_t)((void (**))(uintptr_t)(((uint32_t)(uintptr_t)&off_2079838)));
    if ( v44 != nullptr )
      glitch::core::releaseProcessBuffer(v44, v28);
  }
  glitch::collada::CAnimationFilterBase::Destroy((volatile int32_t **)&v42);
  *(uint32_t *)(v40 + 44) = v41;
  result = v39;
  if ( v39 != nullptr )
    return (const glitch::collada::CAnimationFilterBase::Self *)sub_5459C0((volatile int32_t *)v39);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSet::getAnimationValues  (binary VA: 0xd5f100)
// Original: glitch::collada::CSceneNodeAnimatorSet::getAnimationValues
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorSet::getAnimationValues(int **a1, unsigned int a2, int64_t a3, uint32_t *a4)
{
  int v4;
  int v5;
  volatile int32_t *v6;
  int v8;

  v4 = *(uint32_t *)HIDWORD(a3);
  v5 = *(uint32_t *)(*(uint32_t *)HIDWORD(a3) + 44);
  *(uint32_t *)(*(uint32_t *)HIDWORD(a3) + 44) = 2;
  v6 = *(volatile int32_t **)(*(uint32_t *)HIDWORD(a3) + 16);
  v8 = v5;
  if ( v6 != nullptr )
  {
    sub_8B1B00(v6 + 1);
    glitch::collada::CSceneNodeAnimatorSet::computeAnimationHandlingValues(a1, a2, a3);
    glitch::collada::CSceneNodeAnimatorSet::computeAnimationNoHandlingValuesEx(a1, a3, a4);
    sub_5459C0(v6);
  }
  else
  {
    glitch::collada::CSceneNodeAnimatorSet::computeAnimationValuesEx(a1, a3, a4);
  }
  *(uint32_t *)(v4 + 44) = v8;
  return v8;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSnapShot::captureFrame  (binary VA: 0xd5f200)
// Original: glitch::collada::CSceneNodeAnimatorSnapShot::captureFrame
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorSnapShot::captureFrame(glitch::collada::CSceneNodeAnimatorSnapShot::Self *self, int a2, int a3, int a4, int a5, int a6, int a7, uint8_t a8, uint32_t *a9)
{
  glitch::collada::CSceneNodeAnimatorSnapShot::Self *v9;
  volatile int32_t *v10;
  glitch::collada::CSceneNodeAnimatorSnapShot::Self *v11;
  int v12;
  int v13;
  glitch::collada::CSceneNodeAnimatorSnapShot::Self *v14;
  int i;
  int v16;
  int v17;
  int v18;
  int v19;
  int result;
  uint32_t **v21;
  int v22;
  int v23;
  int v24;
  bool v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  glitch::collada::CSceneNodeAnimatorSnapShot::Self *thisb;
  glitch::collada::CSceneNodeAnimatorSnapShot::Self *thisa;
  int v43;
  volatile int32_t *v44;
  int v45;
  int v46;
  uint16_t *v47;
  int v48;
  glitch::collada::CSceneNodeAnimatorSnapShot::Self *v49;
  int v50;
  uint16_t *v51;

  v9 = *((glitch::collada::CSceneNodeAnimatorSnapShot::Self **)self + 21);
  v10 = *(volatile int32_t **)G4_VCALL<int>(self, 84, v27, v28, v29, v30, self, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40);
  v11 = self;
  v44 = v10;
  if ( v10 != nullptr )
  {
    sub_8B1B00(v10 + 1);
    v11 = self;
  }
  v12 = *((uint32_t *)v11 + 22);
  v45 = *(uint32_t *)(*(uint32_t *)(v12 + 52) + 4) - **(uint32_t **)(v12 + 52);
  if ( v45 > 0 )
  {
    v13 = *((uint32_t *)v11 + 22);
    v49 = v11;
    v14 = v9;
    for ( i = 0; i != v45; ++i )
    {
      v16 = *(uint32_t *)(*(uint32_t *)(v13 + 60) + 4 * i);
      if ( v16 != 0 )
      {
        thisb = v14;
        v17 = (*(int (**)(uint32_t, int))(**((uint32_t **)v49 + 10) + 20))(*((uint32_t *)v49 + 10), i);
        G4_VCALL<void>(v17, 84, v16, *((uint32_t *)thisb + 2)
        + *((uint32_t *)thisb + 3) * *(uint16_t *)(**(uint32_t **)(*((uint32_t *)thisb + 1) + 56) + 2 * i));
        v14 = thisb;
        v13 = *((uint32_t *)v49 + 22);
      }
    }
    v9 = v14;
    v12 = v13;
    v11 = v49;
  }
  v18 = *(uint32_t *)(v12 + 44);
  *(uint32_t *)(v12 + 44) = 1;
  v48 = v18;
  v19 = *((uint32_t *)v11 + 22);
  v50 = *(uint32_t *)(v19 + 44);
  v46 = v19 + 28;
  if ( v50 != 1 )
  {
    if ( v50 == 2 )
    {
      v24 = v19 + 24;
      v25 = *(uint32_t *)(v19 + 16) == 0;
      v26 = v19 + 32;
      if ( v25 )
        v26 = v24;
      v46 = v26;
    }
    else
    {
      v46 = v19 + 24;
    }
  }
  thisa = v11;
  sub_D434A0((int)(uintptr_t)(&a8), (uint32_t *)(*(uint32_t *)v46 + 8), 0);
  result = a8;
  v21 = (uint32_t **)a9;
  if ( a8 != 0 )
  {
    v51 = (uint16_t *)a9;
    v21 = &a9;
  }
  else
  {
    v51 = (uint16_t *)*a9;
  }
  v47 = (uint16_t *)v21[1];
  if ( v47 != v51 )
  {
    v43 = v12;
    do
    {
      v22 = *((uint32_t *)v9 + 2)
          + *((uint32_t *)v9 + 3) * *(uint16_t *)(**(uint32_t **)(*((uint32_t *)v9 + 1) + 56) + 2 * *v51);
      v23 = (*(int (**)(uint32_t, uint32_t))(**((uint32_t **)thisa + 10) + 20))(*((uint32_t *)thisa + 10), *v51);
      G4_VCALL<void>(v23, 12, v22);
      ++v51;
    }
    while ( v47 != v51 );
    v12 = v43;
    result = a8;
  }
  if ( (uint8_t)result != 0 )
  {
    result = (int)(uintptr_t)(a9);
    if ( a9 != nullptr )
      result = gll_operator_delete_arr((int)(uintptr_t)(a9));
  }
  *(uint32_t *)(v12 + 44) = v48;
  if ( v44 != nullptr )
    return sub_5459C0(v44);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSnapShot::onBindEx  (binary VA: 0xd5f440)
// Original: glitch::collada::CSceneNodeAnimatorSnapShot::onBindEx
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorSnapShot::onBindEx(glitch::collada::CSceneNodeAnimatorSnapShot::Self *a1, int a2, int *a3)
{
  int v3;
  volatile int32_t *v4;
  int result;

  glitch::collada::CSceneNodeAnimatorSet::onBindEx((int)(uintptr_t)(a1), a2, a3);
  v3 = *a3;
  if ( *a3 != 0 )
    sub_8B1B00((volatile int32_t *)(v3 + 4));
  v4 = *((volatile int32_t **)a1 + 22);
  *((uint32_t *)a1 + 22) = v3;
  if ( v4 != nullptr )
    sub_5459C0(v4);
  glitch::collada::CSceneNodeAnimatorSnapShot::prepareForCapture(a1);
  result = *((uint32_t *)a1 + 23);
  if ( result != 0 )
    return G4_VCALL<int>(result, 88, a2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorTrackBlender::setAnimators  (binary VA: 0xd5f5a0)
// Original: glitch::collada::CSceneNodeAnimatorTrackBlender::setAnimators
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorTrackBlender::setAnimators(glitch::collada::CSceneNodeAnimatorTrackBlender::Self *self, const boost::intrusive_ptr<glitch::collada::ISceneNodeAnimator::Self> *a2, const boost::intrusive_ptr<glitch::collada::ISceneNodeAnimator::Self> *a3)
{
  G4_VCALL<void>(self, 168, a2);
  return G4_VCALL<int>(self, 168, a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorTrackBlender::setTrackWeights  (binary VA: 0xd5f5e0)
// Original: glitch::collada::CSceneNodeAnimatorTrackBlender::setTrackWeights
// ----------------------------------------------------------------------------
volatile int32_t * glitch::collada::CSceneNodeAnimatorTrackBlender::setTrackWeights(int a1, int *a2)
{
  int v2;
  volatile int32_t *result;

  v2 = *a2;
  if ( *a2 != 0 )
    sub_8B1B00((volatile int32_t *)(v2 + 4));
  result = *(volatile int32_t **)(a1 + 84);
  *(uint32_t *)(a1 + 84) = v2;
  if ( result != nullptr )
    return (volatile int32_t *)sub_5459C0(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorTrackBlender::initAnimatorFilters  (binary VA: 0xd5f640)
// Original: glitch::collada::CSceneNodeAnimatorTrackBlender::initAnimatorFilters
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorTrackBlender::initAnimatorFilters(int a1, int *a2, int *a3)
{
  int result;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  float v9; // xmm2_4
  int v10;
  int v11;

  glitch::collada::CAnimationFilterBase::set(
    *(glitch::collada::CAnimationFilterBase::Self **)(a1 + 92),
    *(const glitch::collada::CAnimationFilterBase::Self **)(a1 + 88));
  glitch::collada::CAnimationFilterBase::set(
    *(glitch::collada::CAnimationFilterBase::Self **)(a1 + 96),
    *(const glitch::collada::CAnimationFilterBase::Self **)(a1 + 88));
  result = *a2;
  v4 = (a2[1] - *a2) >> 1;
  if ( v4 > 0 )
  {
    v5 = 0;
    v11 = 2 * v4;
    while ( 1 )
    {
      v6 = *(uint16_t *)(result + v5);
      result = *a3;
      if ( *(uint32_t *)(*(uint32_t *)(*a3 + 60) + 4 * v6) == 0
        || (v7 = *(uint32_t *)(result + 12)) != 0
        && (v8 = *(uint32_t *)(v7 + 8)) != 0
        && (result = 1 << v6, ((1 << v6) & *(uint32_t *)(v8 + 4 * (v6 >> 5))) == 0) )
      {
LABEL_3:
        v5 += 2;
        if ( v5 == v11 )
          return result;
        goto LABEL_4;
      }
      result = *(uint32_t *)(a1 + 52);
      v9 = *(float *)(*(uint32_t *)(*(uint32_t *)(a1 + 84) + 8) + 4 * v6) * *(float *)(result + 4);
      if ( *(uint32_t *)(a1 + 80) != 0 )
      {
        if ( *(float *)result != 0.0 )
          goto LABEL_11;
      }
      else if ( (float)(1.0 - v9) != 0.0 )
      {
        goto LABEL_11;
      }
      v10 = v6;
      result = glitch::collada::CAnimationFilterBase::disableAnimation(
                 *(glitch::collada::CAnimationFilterBase::Self **)(a1 + 92),
                 v6);
      v6 = v10;
LABEL_11:
      if ( v9 != 0.0 )
        goto LABEL_3;
      v5 += 2;
      result = glitch::collada::CAnimationFilterBase::disableAnimation(
                 *(glitch::collada::CAnimationFilterBase::Self **)(a1 + 96),
                 v6);
      if ( v5 == v11 )
        return result;
LABEL_4:
      result = *a2;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorTrackBlender::computeAnimationValues  (binary VA: 0xd5f790)
// Original: glitch::collada::CSceneNodeAnimatorTrackBlender::computeAnimationValues
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorTrackBlender::computeAnimationValues(int a1, int64_t a2, uint32_t *a3)
{
  int v3;
  int v4;
  uint32_t *v6;
  int v7;
  volatile int32_t *v8;
  volatile int32_t *v9;
  volatile int32_t *v10;
  int v11;
  volatile int32_t *v12;
  volatile int32_t *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  volatile int32_t *v18;
  volatile int32_t *v19;
  int v20;
  volatile int32_t *v21;
  volatile int32_t *v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  volatile int32_t *v30;
  volatile int32_t *v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  float *v38;
  int v39;
  float v40; // xmm0_4
  volatile int32_t *v41;
  int v42;
  typedef int _g4_t_v43;
  typedef void *_g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef volatile int32_t *_g4_t_v57;
  typedef int _g4_t_v58;
  typedef const glitch::collada::CAnimationFilterBase::Self *_g4_t_v59;
  typedef int _g4_t_v60;
  typedef float _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef float _g4_t_v69;
  typedef float _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef void (**_g4_t_v73)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *);
  typedef volatile int32_t *_g4_t_v74;
  typedef glitch::core::Self *_g4_t_v75;
  typedef int _g4_t_v76;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v43)) > _g4_s0 ? (4u + sizeof(_g4_t_v43)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v44)) > _g4_s1 ? (4u + sizeof(_g4_t_v44)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v45)) > _g4_s2 ? (16u + sizeof(_g4_t_v45)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v46)) > _g4_s3 ? (20u + sizeof(_g4_t_v46)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v47)) > _g4_s4 ? (24u + sizeof(_g4_t_v47)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v48)) > _g4_s5 ? (28u + sizeof(_g4_t_v48)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v49)) > _g4_s6 ? (32u + sizeof(_g4_t_v49)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v50)) > _g4_s7 ? (36u + sizeof(_g4_t_v50)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v51)) > _g4_s8 ? (40u + sizeof(_g4_t_v51)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v52)) > _g4_s9 ? (44u + sizeof(_g4_t_v52)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v53)) > _g4_s10 ? (48u + sizeof(_g4_t_v53)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v54)) > _g4_s11 ? (52u + sizeof(_g4_t_v54)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v55)) > _g4_s12 ? (52u + sizeof(_g4_t_v55)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v56)) > _g4_s13 ? (56u + sizeof(_g4_t_v56)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v57)) > _g4_s14 ? (56u + sizeof(_g4_t_v57)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v58)) > _g4_s15 ? (60u + sizeof(_g4_t_v58)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v59)) > _g4_s16 ? (60u + sizeof(_g4_t_v59)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v60)) > _g4_s17 ? (64u + sizeof(_g4_t_v60)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v61)) > _g4_s18 ? (64u + sizeof(_g4_t_v61)) : _g4_s18,
    _g4_s20 = (68u + sizeof(_g4_t_v62)) > _g4_s19 ? (68u + sizeof(_g4_t_v62)) : _g4_s19,
    _g4_s21 = (68u + sizeof(_g4_t_v63)) > _g4_s20 ? (68u + sizeof(_g4_t_v63)) : _g4_s20,
    _g4_s22 = (72u + sizeof(_g4_t_v64)) > _g4_s21 ? (72u + sizeof(_g4_t_v64)) : _g4_s21,
    _g4_s23 = (72u + sizeof(_g4_t_v65)) > _g4_s22 ? (72u + sizeof(_g4_t_v65)) : _g4_s22,
    _g4_s24 = (76u + sizeof(_g4_t_v66)) > _g4_s23 ? (76u + sizeof(_g4_t_v66)) : _g4_s23,
    _g4_s25 = (76u + sizeof(_g4_t_v67)) > _g4_s24 ? (76u + sizeof(_g4_t_v67)) : _g4_s24,
    _g4_s26 = (76u + sizeof(_g4_t_v68)) > _g4_s25 ? (76u + sizeof(_g4_t_v68)) : _g4_s25,
    _g4_s27 = (80u + sizeof(_g4_t_v69)) > _g4_s26 ? (80u + sizeof(_g4_t_v69)) : _g4_s26,
    _g4_s28 = (84u + sizeof(_g4_t_v70)) > _g4_s27 ? (84u + sizeof(_g4_t_v70)) : _g4_s27,
    _g4_s29 = (88u + sizeof(_g4_t_v71)) > _g4_s28 ? (88u + sizeof(_g4_t_v71)) : _g4_s28,
    _g4_s30 = (92u + sizeof(_g4_t_v72)) > _g4_s29 ? (92u + sizeof(_g4_t_v72)) : _g4_s29,
    _g4_s31 = (96u + sizeof(_g4_t_v73)) > _g4_s30 ? (96u + sizeof(_g4_t_v73)) : _g4_s30,
    _g4_s32 = (100u + sizeof(_g4_t_v74)) > _g4_s31 ? (100u + sizeof(_g4_t_v74)) : _g4_s31,
    _g4_s33 = (104u + sizeof(_g4_t_v75)) > _g4_s32 ? (104u + sizeof(_g4_t_v75)) : _g4_s32,
    _g4_s34 = (108u + sizeof(_g4_t_v76)) > _g4_s33 ? (108u + sizeof(_g4_t_v76)) : _g4_s33
  };
  alignas(16) uint8_t _g4_sf[_g4_s34];
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 4u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 4u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 16u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 20u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 24u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 28u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 32u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 36u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 40u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 44u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 48u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 52u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 52u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 56u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 56u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 60u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 60u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 64u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 64u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 68u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 68u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 72u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 72u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 76u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 76u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 76u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 80u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 84u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 88u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 92u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 96u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 100u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 104u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 108u);

  v3 = *(uint32_t *)(a1 + 76);
  if ( v3 == 0 || (v6 = *(uint32_t **)(a1 + 64), (*(uint32_t *)(a1 + 68) - (int)(uintptr_t)(v6)) >> 2 != 2) )
  {
    v4 = 1;
    glitch::os::Printer::logf(
      3,
      (int)(uintptr_t)("A CSceneNodeAnimatorTrackBlender can't be evaluated. See CSceneNodeAnimatorTrackBlender::applyAnimationValues(...)"));
    return v4;
  }
  if ( v3 != 1 || *(float *)(*(uint32_t *)(a1 + 40) + 4) != 0.0 )
  {
    v73 = (void (**)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *))&off_2047EB8;
    v7 = *(uint32_t *)HIDWORD(a2);
    v8 = nullptr;
    v74 = *(volatile int32_t **)HIDWORD(a2);
    if ( v74 != nullptr )
    {
      sub_8B1B00((volatile int32_t *)(v7 + 4));
      v8 = v74;
    }
    v75 = nullptr;
    v76 = 2;
    v73 = (void (**)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20795A0));
    if ( 2 * *((uint32_t *)v8 + 12) > 0 )
      v75 = (glitch::core::Self *)glitch::core::allocProcessBuffer(2 * *((uint32_t *)v8 + 12), v43);
    v55 = *(uint32_t *)HIDWORD(a2);
    v9 = *(volatile int32_t **)(*(uint32_t *)HIDWORD(a2) + 12);
    v57 = v9;
    if ( v9 != nullptr
      && (sub_8B1B00(v9 + 1),
          v10 = *(volatile int32_t **)(*(uint32_t *)HIDWORD(a2) + 12),
          v59 = (const glitch::collada::CAnimationFilterBase::Self *)v10,
          v10 != nullptr) )
    {
      sub_8B1B00(v10 + 1);
      glitch::collada::CAnimationFilterBase::enableAnimation(*(glitch::collada::CAnimationFilterBase::Self **)(a1 + 88));
      glitch::collada::CAnimationFilterBase::intersect(*(glitch::collada::CAnimationFilterBase::Self **)(a1 + 88), v59);
    }
    else
    {
      glitch::collada::CAnimationFilterBase::enableAnimation(*(glitch::collada::CAnimationFilterBase::Self **)(a1 + 88));
      v59 = nullptr;
    }
    v11 = *(uint32_t *)HIDWORD(a2);
    v12 = *(volatile int32_t **)(a1 + 88);
    v13 = *(volatile int32_t **)(*(uint32_t *)HIDWORD(a2) + 12);
    if ( v13 != v12 )
    {
      if ( v12 != nullptr )
      {
        sub_8B1B00(v12 + 1);
        v13 = *(volatile int32_t **)(v11 + 12);
      }
      *(uint32_t *)(v11 + 12) = (uint32_t)(uintptr_t)(v12);
      if ( v13 != nullptr )
        sub_5459C0(v13);
      *(uint8_t *)(v11 + 20) = 1;
    }
    **(uint32_t **)(a1 + 52) = **(uint32_t **)(a1 + 40);
    *(uint32_t *)(*(uint32_t *)(a1 + 52) + 4) = *(uint32_t *)(*(uint32_t *)(a1 + 40) + 4);
    if ( *(uint32_t *)(a1 + 80) == 0 )
      glitch::collada::CSceneNodeAnimatorBlenderBase::normalizeWeights((glitch::collada::CSceneNodeAnimatorBlenderBase::Self *)(a1 + 40));
    v14 = *(uint32_t *)HIDWORD(a2);
    v15 = *(uint32_t *)(*(uint32_t *)HIDWORD(a2) + 44);
    v16 = *(uint32_t *)HIDWORD(a2) + 28;
    if ( v15 != 1 )
    {
      v16 = v14 + 24;
      if ( v15 == 2 )
      {
        v16 = v14 + 32;
        if ( *(uint32_t *)(v14 + 16) == 0 )
          v16 = v14 + 24;
      }
    }
    v65 = *(uint32_t *)v16;
    glitch::collada::CSceneNodeAnimatorTrackBlender::initAnimatorFilters(
      a1,
      (int *)(*(uint32_t *)v16 + 8),
      (int *)HIDWORD(a2));
    v61 = 0.0;
    do
    {
      v17 = *(uint32_t *)HIDWORD(a2);
      v18 = *(volatile int32_t **)(a1 + 4 * LODWORD(v61) + 92);
      v19 = *(volatile int32_t **)(*(uint32_t *)HIDWORD(a2) + 12);
      if ( v19 != v18 )
      {
        if ( v18 != nullptr )
        {
          sub_8B1B00(v18 + 1);
          v19 = *(volatile int32_t **)(v17 + 12);
        }
        *(uint32_t *)(v17 + 12) = (uint32_t)(uintptr_t)(v18);
        if ( v19 != nullptr )
          sub_5459C0(v19);
        *(uint8_t *)(v17 + 20) = 1;
      }
      v70 = v61;
      v69 = COERCE_FLOAT(&v73);
      v44 = (void *)a2;
      if ( (*(uint8_t (**)(uint32_t))(**(uint32_t **)(*(uint32_t *)(a1 + 64) + 4 * LODWORD(v61)) + 104))(*(uint32_t *)(*(uint32_t *)(a1 + 64) + 4 * LODWORD(v61))) != 0 )
      {
        v4 = 1;
        goto LABEL_69;
      }
      glitch::collada::CAnimationFilterBase::set(
        *(glitch::collada::CAnimationFilterBase::Self **)(a1 + 88),
        *(const glitch::collada::CAnimationFilterBase::Self **)(a1 + 4 * (1 - LODWORD(v61)) + 92));
      glitch::collada::CAnimationFilterBase::inverse(*(glitch::collada::CAnimationFilterBase::Self **)(a1 + 88));
      if ( v59 != nullptr )
        glitch::collada::CAnimationFilterBase::intersect(*(glitch::collada::CAnimationFilterBase::Self **)(a1 + 88), v59);
      v20 = *(uint32_t *)HIDWORD(a2);
      v21 = *(volatile int32_t **)(*(uint32_t *)HIDWORD(a2) + 12);
      v22 = *(volatile int32_t **)(a1 + 88);
      if ( v21 != v22 )
      {
        if ( v22 != nullptr )
        {
          sub_8B1B00(v22 + 1);
          v21 = *(volatile int32_t **)(v20 + 12);
        }
        *(uint32_t *)(v20 + 12) = (uint32_t)(uintptr_t)(v22);
        if ( v21 != nullptr )
          sub_5459C0(v21);
        *(uint8_t *)(v20 + 20) = 1;
      }
      v23 = *(uint32_t *)(v65 + 8);
      v24 = (*(uint32_t *)(v65 + 12) - v23) >> 1;
      if ( v24 > 0 )
      {
        v67 = 0;
        v63 = 2 * v24;
        while ( 1 )
        {
          v25 = *(uint16_t *)(v23 + v67);
          v26 = *(uint32_t *)HIDWORD(a2);
          if ( *(uint32_t *)(*(uint32_t *)(*(uint32_t *)HIDWORD(a2) + 60) + 4 * v25) == 0
            || (v27 = *(uint32_t *)(v26 + 12)) != 0
            && (v28 = *(uint32_t *)(v27 + 8)) != 0
            && ((1 << v25) & *(uint32_t *)(v28 + 4 * (v25 >> 5))) == 0 )
          {
            v67 += 2;
            if ( v67 == v63 )
              break;
          }
          else
          {
            memcpy(
              (void *)(*(uint32_t *)(*a3 + 8)
                     + *(uint32_t *)(*a3 + 12) * *(uint16_t *)(**(uint32_t **)(*(uint32_t *)(*a3 + 4) + 56) + 2 * v25)
                     + a3[1] * *(uint8_t *)(**(uint32_t **)(*(uint32_t *)(*a3 + 4) + 52) + v25)),
              (char *)v75
            + LODWORD(v61) * *(uint8_t *)(**((uint32_t **)v74 + 13) + v25)
            + v76 * *(uint16_t *)(**((uint32_t **)v74 + 14) + 2 * v25),
              *(uint8_t *)(**(uint32_t **)(v26 + 52) + v25));
            v67 += 2;
            if ( v67 == v63 )
              break;
          }
          v23 = *(uint32_t *)(v65 + 8);
        }
      }
      ++LODWORD(v61);
    }
    while ( LODWORD(v61) != 2 );
    glitch::collada::CAnimationFilterBase::set(
      *(glitch::collada::CAnimationFilterBase::Self **)(a1 + 88),
      *(const glitch::collada::CAnimationFilterBase::Self **)(a1 + 92));
    glitch::collada::CAnimationFilterBase::intersect(
      *(glitch::collada::CAnimationFilterBase::Self **)(a1 + 88),
      *(const glitch::collada::CAnimationFilterBase::Self **)(a1 + 96));
    v29 = *(uint32_t *)HIDWORD(a2);
    v30 = *(volatile int32_t **)(a1 + 88);
    v31 = *(volatile int32_t **)(*(uint32_t *)HIDWORD(a2) + 12);
    if ( v31 != v30 )
    {
      if ( v30 != nullptr )
      {
        sub_8B1B00(v30 + 1);
        v31 = *(volatile int32_t **)(v29 + 12);
      }
      *(uint32_t *)(v29 + 12) = (uint32_t)(uintptr_t)(v30);
      if ( v31 != nullptr )
        sub_5459C0(v31);
      *(uint8_t *)(v29 + 20) = 1;
    }
    v32 = *(uint32_t *)(v65 + 8);
    v4 = 0;
    v33 = (*(uint32_t *)(v65 + 12) - v32) >> 1;
    if ( v33 > 0 )
    {
      v34 = 0;
      v68 = 2 * v33;
      while ( 1 )
      {
        v35 = *(uint16_t *)(v32 + v34);
        if ( *(uint32_t *)(*(uint32_t *)(*(uint32_t *)HIDWORD(a2) + 60) + 4 * v35) == 0
          || (v36 = *(uint32_t *)(*(uint32_t *)HIDWORD(a2) + 12)) != 0
          && (v37 = *(uint32_t *)(v36 + 8)) != 0
          && ((1 << v35) & *(uint32_t *)(v37 + 4 * (v35 >> 5))) == 0 )
        {
          v34 += 2;
          if ( v34 == v68 )
            goto LABEL_68;
        }
        else
        {
          v38 = *(float **)(a1 + 52);
          v39 = *(uint32_t *)(a1 + 80);
          v40 = *(float *)(*(uint32_t *)(*(uint32_t *)(a1 + 84) + 8) + 4 * v35) * v38[1];
          v70 = v40;
          if ( v39 != 0 )
            v69 = *v38;
          else
            v69 = 1.0 - v40;
          v34 += 2;
          glitch::collada::CSceneNodeAnimatorBlenderBase::computeTrackBlendedValue(
            a1 + 40,
            v35,
            (int)(uintptr_t)(v75) + v76 * *(uint16_t *)(**((uint32_t **)v74 + 14) + 2 * v35),
            (int)(uintptr_t)(&v69),
            2,
            *(uint32_t *)(*a3 + 8)
          + *(uint32_t *)(*a3 + 12) * *(uint16_t *)(**(uint32_t **)(*(uint32_t *)(*a3 + 4) + 56) + 2 * v35)
          + a3[1] * *(uint8_t *)(**(uint32_t **)(*(uint32_t *)(*a3 + 4) + 52) + v35),
            SHIDWORD(a2));
          if ( v34 == v68 )
          {
LABEL_68:
            v4 = 0;
            break;
          }
        }
        v32 = *(uint32_t *)(v65 + 8);
      }
    }
LABEL_69:
    if ( v59 != nullptr )
      sub_5459C0((volatile int32_t *)v59);
    v41 = *(volatile int32_t **)(v55 + 12);
    if ( v57 != v41 )
    {
      if ( v57 != nullptr )
      {
        sub_8B1B00(v57 + 1);
        v41 = *(volatile int32_t **)(v55 + 12);
      }
      v42 = v55;
      *(uint32_t *)(v55 + 12) = (uint32_t)(uintptr_t)(v57);
      if ( v41 != nullptr )
      {
        sub_5459C0(v41);
        v42 = v55;
      }
      *(uint8_t *)(v42 + 20) = 1;
    }
    if ( v57 != nullptr )
      sub_5459C0(v57);
    v73 = (void (**)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20795A0));
    if ( v75 != nullptr )
      glitch::core::releaseProcessBuffer(v75, v44);
    v73 = (void (**)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *))&off_2047EB8;
    if ( v74 != nullptr )
    {
      sub_5459C0(v74);
      return v4;
    }
    return v4;
  }
  return G4_VCALL<int>(*v6, 104, a2, HIDWORD(a2), a3, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v56, v58, v60, v62, v64, v66, COERCE_FLOAT(LODWORD(v69)), COERCE_FLOAT(LODWORD(v70)), v71, v72, v73, v74, v75, v76);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorTrackBlender::applyAnimationValues  (binary VA: 0xd5fe50)
// Original: glitch::collada::CSceneNodeAnimatorTrackBlender::applyAnimationValues
// ----------------------------------------------------------------------------
volatile int32_t * glitch::collada::CSceneNodeAnimatorTrackBlender::applyAnimationValues(int a1, int64_t a2)
{
  int v2;
  volatile int32_t *result;
  uint32_t *v4;
  volatile int32_t *v5;
  volatile int32_t *v6;
  int v7;
  volatile int32_t *v8;
  volatile int32_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  volatile int32_t *v14;
  int v15;
  volatile int32_t *v16;
  volatile int32_t *v17;
  int v18;
  volatile int32_t *v19;
  volatile int32_t *v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  volatile int32_t *v28;
  volatile int32_t *v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  float *v36;
  int v37;
  float v38; // xmm0_4
  volatile int32_t *v39;
  int v40;
  typedef int _g4_t_v41;
  typedef void *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef const glitch::collada::CAnimationFilterBase::Self *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef volatile int32_t *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef float _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef void (**_g4_t_v67)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *);
  typedef volatile int32_t *_g4_t_v68;
  typedef glitch::core::Self *_g4_t_v69;
  typedef int _g4_t_v70;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v41)) > _g4_s0 ? (4u + sizeof(_g4_t_v41)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v42)) > _g4_s1 ? (4u + sizeof(_g4_t_v42)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v43)) > _g4_s2 ? (12u + sizeof(_g4_t_v43)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v44)) > _g4_s3 ? (16u + sizeof(_g4_t_v44)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v45)) > _g4_s4 ? (20u + sizeof(_g4_t_v45)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v46)) > _g4_s5 ? (24u + sizeof(_g4_t_v46)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v47)) > _g4_s6 ? (28u + sizeof(_g4_t_v47)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v48)) > _g4_s7 ? (32u + sizeof(_g4_t_v48)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v49)) > _g4_s8 ? (36u + sizeof(_g4_t_v49)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v50)) > _g4_s9 ? (40u + sizeof(_g4_t_v50)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v51)) > _g4_s10 ? (40u + sizeof(_g4_t_v51)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v52)) > _g4_s11 ? (44u + sizeof(_g4_t_v52)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v53)) > _g4_s12 ? (44u + sizeof(_g4_t_v53)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v54)) > _g4_s13 ? (48u + sizeof(_g4_t_v54)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v55)) > _g4_s14 ? (48u + sizeof(_g4_t_v55)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v56)) > _g4_s15 ? (52u + sizeof(_g4_t_v56)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v57)) > _g4_s16 ? (52u + sizeof(_g4_t_v57)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v58)) > _g4_s17 ? (56u + sizeof(_g4_t_v58)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v59)) > _g4_s18 ? (56u + sizeof(_g4_t_v59)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v60)) > _g4_s19 ? (60u + sizeof(_g4_t_v60)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v61)) > _g4_s20 ? (60u + sizeof(_g4_t_v61)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v62)) > _g4_s21 ? (60u + sizeof(_g4_t_v62)) : _g4_s21,
    _g4_s23 = (64u + sizeof(_g4_t_v63)) > _g4_s22 ? (64u + sizeof(_g4_t_v63)) : _g4_s22,
    _g4_s24 = (68u + sizeof(_g4_t_v64)) > _g4_s23 ? (68u + sizeof(_g4_t_v64)) : _g4_s23,
    _g4_s25 = (72u + sizeof(_g4_t_v65)) > _g4_s24 ? (72u + sizeof(_g4_t_v65)) : _g4_s24,
    _g4_s26 = (76u + sizeof(_g4_t_v66)) > _g4_s25 ? (76u + sizeof(_g4_t_v66)) : _g4_s25,
    _g4_s27 = (80u + sizeof(_g4_t_v67)) > _g4_s26 ? (80u + sizeof(_g4_t_v67)) : _g4_s26,
    _g4_s28 = (84u + sizeof(_g4_t_v68)) > _g4_s27 ? (84u + sizeof(_g4_t_v68)) : _g4_s27,
    _g4_s29 = (88u + sizeof(_g4_t_v69)) > _g4_s28 ? (88u + sizeof(_g4_t_v69)) : _g4_s28,
    _g4_s30 = (92u + sizeof(_g4_t_v70)) > _g4_s29 ? (92u + sizeof(_g4_t_v70)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 4u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 4u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 12u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 16u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 20u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 24u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 28u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 32u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 36u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 40u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 40u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 44u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 44u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 48u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 48u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 52u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 52u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 56u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 56u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 60u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 60u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 60u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 64u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 68u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 72u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 76u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 80u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 84u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 88u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 92u);

  v2 = *(uint32_t *)(a1 + 76);
  if ( v2 == 0 )
    return (volatile int32_t *)(glitch::os::Printer::logf(
             3,
             (int)(uintptr_t)("A CSceneNodeAnimatorTrackBlender can't be evaluated. See CSceneNodeAnimatorTrackBlender::applyAnimationValues(...)")));
  v4 = *(uint32_t **)(a1 + 64);
  if ( (*(uint32_t *)(a1 + 68) - (int)(uintptr_t)(v4)) >> 2 != 2 )
    return (volatile int32_t *)(glitch::os::Printer::logf(
             3,
             (int)(uintptr_t)("A CSceneNodeAnimatorTrackBlender can't be evaluated. See CSceneNodeAnimatorTrackBlender::applyAnimationValues(...)")));
  if ( v2 == 1 && *(float *)(*(uint32_t *)(a1 + 40) + 4) == 0.0 )
    return (volatile int32_t *)G4_VCALL<int>(*v4, 112, a2, HIDWORD(a2), v43, v44, v45, v46, v47, v48, v49, v50, v52, v54, v56, v58, v60, COERCE_FLOAT(LODWORD(v63)), COERCE_FLOAT(LODWORD(v64)), v65, v66, v67, v68, v69, v70);
  v51 = *(uint32_t *)HIDWORD(a2);
  v5 = *(volatile int32_t **)(*(uint32_t *)HIDWORD(a2) + 12);
  v55 = v5;
  if ( v5 != nullptr
    && (sub_8B1B00(v5 + 1),
        v6 = *(volatile int32_t **)(*(uint32_t *)HIDWORD(a2) + 12),
        v53 = (const glitch::collada::CAnimationFilterBase::Self *)v6,
        v6 != nullptr) )
  {
    sub_8B1B00(v6 + 1);
    glitch::collada::CAnimationFilterBase::enableAnimation(*(glitch::collada::CAnimationFilterBase::Self **)(a1 + 88));
    glitch::collada::CAnimationFilterBase::intersect(*(glitch::collada::CAnimationFilterBase::Self **)(a1 + 88), v53);
  }
  else
  {
    glitch::collada::CAnimationFilterBase::enableAnimation(*(glitch::collada::CAnimationFilterBase::Self **)(a1 + 88));
    v53 = nullptr;
  }
  v7 = *(uint32_t *)HIDWORD(a2);
  v8 = *(volatile int32_t **)(*(uint32_t *)HIDWORD(a2) + 12);
  v9 = *(volatile int32_t **)(a1 + 88);
  if ( v8 != v9 )
  {
    if ( v9 != nullptr )
    {
      sub_8B1B00(v9 + 1);
      v8 = *(volatile int32_t **)(v7 + 12);
    }
    *(uint32_t *)(v7 + 12) = (uint32_t)(uintptr_t)(v9);
    if ( v8 != nullptr )
      sub_5459C0(v8);
    *(uint8_t *)(v7 + 20) = 1;
  }
  **(uint32_t **)(a1 + 52) = **(uint32_t **)(a1 + 40);
  *(uint32_t *)(*(uint32_t *)(a1 + 52) + 4) = *(uint32_t *)(*(uint32_t *)(a1 + 40) + 4);
  if ( *(uint32_t *)(a1 + 80) == 0 )
    glitch::collada::CSceneNodeAnimatorBlenderBase::normalizeWeights((glitch::collada::CSceneNodeAnimatorBlenderBase::Self *)(a1 + 40));
  v10 = *(uint32_t *)HIDWORD(a2);
  v11 = *(uint32_t *)(*(uint32_t *)HIDWORD(a2) + 44);
  v12 = *(uint32_t *)HIDWORD(a2) + 28;
  if ( v11 != 1 )
  {
    v12 = v10 + 24;
    if ( v11 == 2 )
    {
      v12 = v10 + 32;
      if ( *(uint32_t *)(v10 + 16) == 0 )
        v12 = v10 + 24;
    }
  }
  v59 = *(uint32_t *)v12;
  glitch::collada::CSceneNodeAnimatorTrackBlender::initAnimatorFilters(
    a1,
    (int *)(*(uint32_t *)v12 + 8),
    (int *)HIDWORD(a2));
  v67 = (void (**)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *))&off_2047EB8;
  v13 = *(uint32_t *)HIDWORD(a2);
  v14 = nullptr;
  v68 = *(volatile int32_t **)HIDWORD(a2);
  if ( v68 != nullptr )
  {
    sub_8B1B00((volatile int32_t *)(v13 + 4));
    v14 = v68;
  }
  v69 = nullptr;
  v70 = 2;
  v67 = (void (**)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20795A0));
  if ( 2 * *((uint32_t *)v14 + 12) > 0 )
    v69 = (glitch::core::Self *)glitch::core::allocProcessBuffer(2 * *((uint32_t *)v14 + 12), v41);
  v57 = 0.0;
  while ( 1 )
  {
    v15 = *(uint32_t *)HIDWORD(a2);
    v16 = *(volatile int32_t **)(a1 + 4 * LODWORD(v57) + 92);
    v17 = *(volatile int32_t **)(*(uint32_t *)HIDWORD(a2) + 12);
    if ( v17 != v16 )
    {
      if ( v16 != nullptr )
      {
        sub_8B1B00(v16 + 1);
        v17 = *(volatile int32_t **)(v15 + 12);
      }
      *(uint32_t *)(v15 + 12) = (uint32_t)(uintptr_t)(v16);
      if ( v17 != nullptr )
        sub_5459C0(v17);
      *(uint8_t *)(v15 + 20) = 1;
    }
    v63 = COERCE_FLOAT(&v67);
    v64 = v57;
    if ( (*(uint8_t (**)(uint32_t))(**(uint32_t **)(*(uint32_t *)(a1 + 64) + 4 * LODWORD(v57)) + 104))(*(uint32_t *)(*(uint32_t *)(a1 + 64) + 4 * LODWORD(v57))) != 0 )
      break;
    glitch::collada::CAnimationFilterBase::set(
      *(glitch::collada::CAnimationFilterBase::Self **)(a1 + 88),
      *(const glitch::collada::CAnimationFilterBase::Self **)(a1 + 4 * (21 - LODWORD(v57)) + 12));
    glitch::collada::CAnimationFilterBase::inverse(*(glitch::collada::CAnimationFilterBase::Self **)(a1 + 88));
    glitch::collada::CAnimationFilterBase::intersect(
      *(glitch::collada::CAnimationFilterBase::Self **)(a1 + 88),
      *(const glitch::collada::CAnimationFilterBase::Self **)(a1 + 4 * LODWORD(v57) + 92));
    if ( v53 != nullptr )
      glitch::collada::CAnimationFilterBase::intersect(*(glitch::collada::CAnimationFilterBase::Self **)(a1 + 88), v53);
    v18 = *(uint32_t *)HIDWORD(a2);
    v19 = *(volatile int32_t **)(*(uint32_t *)HIDWORD(a2) + 12);
    v20 = *(volatile int32_t **)(a1 + 88);
    if ( v19 != v20 )
    {
      if ( v20 != nullptr )
      {
        sub_8B1B00(v20 + 1);
        v19 = *(volatile int32_t **)(v18 + 12);
      }
      *(uint32_t *)(v18 + 12) = (uint32_t)(uintptr_t)(v20);
      if ( v19 != nullptr )
        sub_5459C0(v19);
      *(uint8_t *)(v18 + 20) = 1;
    }
    v21 = *(uint32_t *)(v59 + 8);
    v22 = (*(uint32_t *)(v59 + 12) - v21) >> 1;
    if ( v22 > 0 )
    {
      v23 = 0;
      v61 = 2 * v22;
      while ( 1 )
      {
        v24 = *(uint16_t *)(v21 + v23);
        if ( *(uint32_t *)(*(uint32_t *)(*(uint32_t *)HIDWORD(a2) + 60) + 4 * v24) == 0
          || (v25 = *(uint32_t *)(*(uint32_t *)HIDWORD(a2) + 12)) != 0
          && (v26 = *(uint32_t *)(v25 + 8)) != 0
          && ((1 << v24) & *(uint32_t *)(v26 + 4 * (v24 >> 5))) == 0 )
        {
          v23 += 2;
          if ( v23 == v61 )
            break;
        }
        else
        {
          v23 += 2;
          glitch::collada::CSceneNodeAnimatorBlenderBase::applyTrackValue(
            a1 + 40,
            v24,
            (int)(uintptr_t)(v69)
          + LODWORD(v57) * *(uint8_t *)(**((uint32_t **)v68 + 13) + v24)
          + v70 * *(uint16_t *)(**((uint32_t **)v68 + 14) + 2 * v24),
            (int *)HIDWORD(a2));
          if ( v23 == v61 )
            break;
        }
        v21 = *(uint32_t *)(v59 + 8);
      }
    }
    if ( ++LODWORD(v57) == 2 )
    {
      glitch::collada::CAnimationFilterBase::set(
        *(glitch::collada::CAnimationFilterBase::Self **)(a1 + 88),
        *(const glitch::collada::CAnimationFilterBase::Self **)(a1 + 92));
      glitch::collada::CAnimationFilterBase::intersect(
        *(glitch::collada::CAnimationFilterBase::Self **)(a1 + 88),
        *(const glitch::collada::CAnimationFilterBase::Self **)(a1 + 96));
      v27 = *(uint32_t *)HIDWORD(a2);
      v28 = *(volatile int32_t **)(*(uint32_t *)HIDWORD(a2) + 12);
      v29 = *(volatile int32_t **)(a1 + 88);
      if ( v28 != v29 )
      {
        if ( v29 != nullptr )
        {
          sub_8B1B00(v29 + 1);
          v28 = *(volatile int32_t **)(v27 + 12);
        }
        *(uint32_t *)(v27 + 12) = (uint32_t)(uintptr_t)(v29);
        if ( v28 != nullptr )
          sub_5459C0(v28);
        *(uint8_t *)(v27 + 20) = 1;
      }
      v30 = *(uint32_t *)(v59 + 8);
      v31 = (*(uint32_t *)(v59 + 12) - v30) >> 1;
      if ( v31 > 0 )
      {
        v32 = 0;
        v62 = 2 * v31;
        while ( 1 )
        {
          v33 = *(uint16_t *)(v30 + v32);
          if ( *(uint32_t *)(*(uint32_t *)(*(uint32_t *)HIDWORD(a2) + 60) + 4 * v33) == 0
            || (v34 = *(uint32_t *)(*(uint32_t *)HIDWORD(a2) + 12)) != 0
            && (v35 = *(uint32_t *)(v34 + 8)) != 0
            && ((1 << v33) & *(uint32_t *)(v35 + 4 * (v33 >> 5))) == 0 )
          {
            v32 += 2;
            if ( v32 == v62 )
              break;
          }
          else
          {
            v36 = *(float **)(a1 + 52);
            v37 = *(uint32_t *)(a1 + 80);
            v38 = *(float *)(*(uint32_t *)(*(uint32_t *)(a1 + 84) + 8) + 4 * v33) * v36[1];
            v64 = v38;
            if ( v37 != 0 )
              v63 = *v36;
            else
              v63 = 1.0 - v38;
            v32 += 2;
            glitch::collada::CSceneNodeAnimatorBlenderBase::applyTrackBlendedValue(
              a1 + 40,
              v33,
              (int)(uintptr_t)(v69) + v70 * *(uint16_t *)(**((uint32_t **)v68 + 14) + 2 * v33),
              (int)(uintptr_t)(&v63),
              2,
              (int *)HIDWORD(a2));
            if ( v32 == v62 )
              break;
          }
          v30 = *(uint32_t *)(v59 + 8);
        }
      }
      v67 = (void (**)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20795A0));
      if ( v69 != nullptr )
        glitch::core::releaseProcessBuffer(v69, v42);
      v67 = (void (**)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *))&off_2047EB8;
      if ( v68 != nullptr )
        sub_5459C0(v68);
      if ( v53 != nullptr )
        sub_5459C0((volatile int32_t *)v53);
      v39 = *(volatile int32_t **)(v51 + 12);
      if ( v55 != v39 )
      {
        if ( v55 != nullptr )
        {
          sub_8B1B00(v55 + 1);
          v39 = *(volatile int32_t **)(v51 + 12);
        }
LABEL_77:
        v40 = v51;
        *(uint32_t *)(v51 + 12) = (uint32_t)(uintptr_t)(v55);
        if ( v39 != nullptr )
        {
          sub_5459C0(v39);
          v40 = v51;
        }
        *(uint8_t *)(v40 + 20) = 1;
        goto LABEL_80;
      }
      goto LABEL_80;
    }
  }
  v67 = (void (**)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20795A0));
  if ( v69 != nullptr )
    glitch::core::releaseProcessBuffer(v69, (void *)a2);
  v67 = (void (**)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *))&off_2047EB8;
  if ( v68 != nullptr )
    sub_5459C0(v68);
  if ( v53 != nullptr )
    sub_5459C0((volatile int32_t *)v53);
  v39 = *(volatile int32_t **)(v51 + 12);
  if ( v55 != v39 )
  {
    if ( v55 != nullptr )
    {
      sub_8B1B00(v55 + 1);
      v39 = *(volatile int32_t **)(v51 + 12);
    }
    goto LABEL_77;
  }
LABEL_80:
  result = v55;
  if ( v55 != nullptr )
    return (volatile int32_t *)sub_5459C0(v55);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSynchronizedBlender::setAnimatorsMode  (binary VA: 0xd60520)
// Original: glitch::collada::CSceneNodeAnimatorSynchronizedBlender::setAnimatorsMode
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorSynchronizedBlender::setAnimatorsMode(uint32_t *a1, int a2)
{
  int v2;
  int i;
  int v4;
  int result;

  v2 = (a1[11] - a1[10]) >> 2;
  if ( v2 > 0 )
  {
    for ( i = 0; i != v2; ++i )
    {
      v4 = *(uint32_t *)(a1[16] + 4 * i);
      result = glitch::collada::CSceneNodeAnimatorSet::setMode(v4, a2);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSynchronizedBlender::getCurrentAnimation  (binary VA: 0xd60570)
// Original: glitch::collada::CSceneNodeAnimatorSynchronizedBlender::getCurrentAnimation
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorSynchronizedBlender::getCurrentAnimation(glitch::collada::CSceneNodeAnimatorSynchronizedBlender::Self *self, int a2, int *a3, int *a4)
{
  uint32_t *v4;
  int result;

  *a3 = glitch::collada::CSceneNodeAnimatorSet::getCurrentAnimation(*(glitch::collada::CSceneNodeAnimatorSet::Self **)(*((uint32_t *)self + 16) + 4 * a2));
  v4 = (uint32_t *)(*(int (**)(uint32_t))(**(uint32_t **)(*((uint32_t *)self + 16) + 4 * a2) + 68))(*(uint32_t *)(*((uint32_t *)self + 16) + 4 * a2));
  result = G4_VCALL<int>(*v4, 60);
  *a4 = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSynchronizedBlender::getCurrentAnimation  (binary VA: 0xd605e0)
// Original: glitch::collada::CSceneNodeAnimatorSynchronizedBlender::getCurrentAnimation
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorSynchronizedBlender::getCurrentAnimation(glitch::collada::CSceneNodeAnimatorSynchronizedBlender::Self *self, int a2)
{
  return glitch::collada::CSceneNodeAnimatorSet::getCurrentAnimation(*(glitch::collada::CSceneNodeAnimatorSet::Self **)(*((uint32_t *)self + 16) + 4 * a2));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSynchronizedBlender::getCurrentAnimationClip  (binary VA: 0xd60610)
// Original: glitch::collada::CSceneNodeAnimatorSynchronizedBlender::getCurrentAnimationClip
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorSynchronizedBlender::getCurrentAnimationClip(glitch::collada::CSceneNodeAnimatorSynchronizedBlender::Self *self, int a2)
{
  uint32_t *v2;

  v2 = (uint32_t *)(*(int (**)(uint32_t))(**(uint32_t **)(*((uint32_t *)self + 16) + 4 * a2) + 68))(*(uint32_t *)(*((uint32_t *)self + 16) + 4 * a2));
  return G4_VCALL<int>(*v2, 60);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSynchronizedBlender::getAnimationLength  (binary VA: 0xd60640)
// Original: glitch::collada::CSceneNodeAnimatorSynchronizedBlender::getAnimationLength
// ----------------------------------------------------------------------------
long double glitch::collada::CSceneNodeAnimatorSynchronizedBlender::getAnimationLength(glitch::collada::CSceneNodeAnimatorSynchronizedBlender::Self *self)
{
  return *((float *)self + 22);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSynchronizedBlender::adjustTimeline  (binary VA: 0xd60650)
// Original: glitch::collada::CSceneNodeAnimatorSynchronizedBlender::adjustTimeline
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorSynchronizedBlender::adjustTimeline(glitch::collada::CSceneNodeAnimatorSynchronizedBlender::Self *self)
{
  int v1;
  int *v2;
  int v3;
  float AnimationLength;
  float v6;
  float v7;

  v1 = G4_VCALL<int>(self, 68);
  v2 = *(int **)v1;
  v6 = *(float *)(*(uint32_t *)v1 + 20);
  v7 = *(float *)(*(uint32_t *)v1 + 4);
  AnimationLength = glitch::collada::CSceneNodeAnimatorSynchronizedBlender::getAnimationLength(self);
  G4_VCALL<void>(v2, 88, 0, COERCE_FLOAT(LODWORD(AnimationLength)), 0);
  v3 = *v2;
  if ( v6 == 0.0 )
    return (*(int (**)(int *, uint32_t))(v3 + 16))(v2, 0);
  else
    return (*(int (**)(int *, uint32_t))(v3 + 16))(v2, (float)(AnimationLength * v7) / v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSynchronizedBlender::setCurrentAnimation  (binary VA: 0xd60720)
// Original: glitch::collada::CSceneNodeAnimatorSynchronizedBlender::setCurrentAnimation
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorSynchronizedBlender::setCurrentAnimation(glitch::collada::CSceneNodeAnimatorSynchronizedBlender::Self *self, int a2, int a3, int a4)
{
  int v6;
  uint32_t *v7;
  int v8;
  float v10;

  v6 = (*(int (**)(uint32_t))(**(uint32_t **)(*((uint32_t *)self + 16) + 4 * a2) + 68))(*(uint32_t *)(*((uint32_t *)self + 16) + 4 * a2));
  v10 = *(float *)(*(uint32_t *)v6 + 20) - *(float *)(*(uint32_t *)v6 + 16);
  (*(void (**)(uint32_t, int))(**(uint32_t **)(*((uint32_t *)self + 16) + 4 * a2) + 164))(
    *(uint32_t *)(*((uint32_t *)self + 16) + 4 * a2),
    a3);
  v7 = (uint32_t *)(*(int (**)(uint32_t))(**(uint32_t **)(*((uint32_t *)self + 16) + 4 * a2) + 68))(*(uint32_t *)(*((uint32_t *)self + 16) + 4 * a2));
  G4_VCALL<void>(*v7, 20, a4);
  v8 = (*(int (**)(uint32_t))(**(uint32_t **)(*((uint32_t *)self + 16) + 4 * a2) + 68))(*(uint32_t *)(*((uint32_t *)self + 16) + 4 * a2));
  *((float *)self + 22) = (float)((float)((float)(*(float *)(*(uint32_t *)v8 + 20) - *(float *)(*(uint32_t *)v8 + 16)) - v10)
                                * *(float *)(*((uint32_t *)self + 10) + 4 * a2))
                        + *((float *)self + 22);
  return glitch::collada::CSceneNodeAnimatorSynchronizedBlender::adjustTimeline(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSynchronizedBlender::prepareAnimationHandlingValuesEx  (binary VA: 0xd607e0)
// Original: glitch::collada::CSceneNodeAnimatorSynchronizedBlender::prepareAnimationHandlingValuesEx
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorSynchronizedBlender::prepareAnimationHandlingValuesEx(glitch::collada::ISceneNodeAnimator::Self *a1, float a2, unsigned int a3, int a4)
{
  int v4;
  float *v5;
  float v6; // xmm0_4
  int v7;
  int v8;
  signed int v9;
  int v10;
  int v11;
  int v12;
  float v13; // xmm3_4
  uint32_t *v14;
  int v15;
  __m128 v16;
  float v17; // xmm0_4
  uint32_t *v18;
  uint32_t *v19;
  int v20;
  int v21;
  int v22;
  float v23; // xmm1_4
  int **v24;
  int v26;
  typedef int _g4_t_v27;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef float _g4_t_v31;
  typedef float _g4_t_v32;
  typedef float _g4_t_v33;
  typedef float _g4_t_v34;
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef float *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef float _g4_t_v41;
  typedef float _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef char _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (4u + sizeof(_g4_t_v27)) > _g4_s0 ? (4u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v28)) > _g4_s1 ? (16u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v29)) > _g4_s2 ? (44u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v30)) > _g4_s3 ? (44u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v31)) > _g4_s4 ? (44u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v32)) > _g4_s5 ? (44u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v33)) > _g4_s6 ? (48u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v34)) > _g4_s7 ? (64u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (96u + sizeof(_g4_t_v35)) > _g4_s8 ? (96u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (96u + sizeof(_g4_t_v36)) > _g4_s9 ? (96u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (112u + sizeof(_g4_t_v37)) > _g4_s10 ? (112u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (112u + sizeof(_g4_t_v38)) > _g4_s11 ? (112u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (116u + sizeof(_g4_t_v39)) > _g4_s12 ? (116u + sizeof(_g4_t_v39)) : _g4_s12,
    _g4_s14 = (116u + sizeof(_g4_t_v40)) > _g4_s13 ? (116u + sizeof(_g4_t_v40)) : _g4_s13,
    _g4_s15 = (120u + sizeof(_g4_t_v41)) > _g4_s14 ? (120u + sizeof(_g4_t_v41)) : _g4_s14,
    _g4_s16 = (124u + sizeof(_g4_t_v42)) > _g4_s15 ? (124u + sizeof(_g4_t_v42)) : _g4_s15,
    _g4_s17 = (128u + sizeof(_g4_t_v43)) > _g4_s16 ? (128u + sizeof(_g4_t_v43)) : _g4_s16,
    _g4_s18 = (132u + sizeof(_g4_t_v44)) > _g4_s17 ? (132u + sizeof(_g4_t_v44)) : _g4_s17,
    _g4_s19 = (143u + sizeof(_g4_t_v45)) > _g4_s18 ? (143u + sizeof(_g4_t_v45)) : _g4_s18,
    _g4_s20 = (144u + sizeof(_g4_t_v46)) > _g4_s19 ? (144u + sizeof(_g4_t_v46)) : _g4_s19,
    _g4_s21 = (148u + sizeof(_g4_t_v47)) > _g4_s20 ? (148u + sizeof(_g4_t_v47)) : _g4_s20,
    _g4_s22 = (152u + sizeof(_g4_t_v48)) > _g4_s21 ? (152u + sizeof(_g4_t_v48)) : _g4_s21,
    _g4_s23 = (156u + sizeof(_g4_t_v49)) > _g4_s22 ? (156u + sizeof(_g4_t_v49)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 48u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 64u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 96u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 96u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 112u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 112u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 116u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 116u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 120u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 124u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 128u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 132u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 143u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 144u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 148u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 152u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 156u);

  v4 = a4;
  v5 = *(float **)G4_VCALL<int>(a1, 68);
  v6 = v5[5];
  v37 = v5;
  if ( v6 <= 0.0 )
    v42 = 0.0;
  else
    v42 = v5[1] / v6;
  if ( G4_VCALL<uint8_t>(v5, 76) != 0
    && (v27 = LODWORD(a2), G4_VCALL<uint8_t>(v37, 4) != 0) )
  {
    v45 = 1;
    v43 = 4;
  }
  else
  {
    v45 = 0;
    v43 = 2;
  }
  v7 = *((uint32_t *)a1 + 19) * v43;
  if ( v7 != *(uint32_t *)(a4 + 12) )
  {
    if ( *(uint32_t *)(a4 + 8) != 0 )
      glitch::core::releaseProcessBuffer(*(glitch::core::Self **)(a4 + 8), (void *)v27);
    v8 = *(uint32_t *)(a4 + 4);
    *(uint32_t *)(a4 + 12) = v7;
    v9 = *(uint32_t *)(v8 + 48) * v7;
    if ( v9 > 0 )
      *(uint32_t *)(a4 + 8) = glitch::core::allocProcessBuffer(v9, v27);
  }
  if ( v45 != 0 )
  {
    v39 = (*((uint32_t *)a1 + 17) - *((uint32_t *)a1 + 16)) >> 2;
    if ( v39 != 0 )
    {
      v10 = 0;
      v44 = 0;
      do
      {
        while ( 1 )
        {
          v11 = 4 * v10;
          if ( *(float *)(*((uint32_t *)a1 + 10) + 4 * v10) > 0.00000011920929f )
            break;
          if ( ++v10 == v39 )
            goto LABEL_18;
        }
        v34 = *(float *)(*(uint32_t *)(*(int (**)(uint32_t))(**(uint32_t **)(*((uint32_t *)a1 + 16) + 4 * v10) + 68))(*(uint32_t *)(*((uint32_t *)a1 + 16) + 4 * v10))
                       + 16);
        v12 = (*(int (**)(uint32_t))(**(uint32_t **)(*((uint32_t *)a1 + 16) + 4 * v10) + 68))(*(uint32_t *)(*((uint32_t *)a1 + 16) + 4 * v10));
        v35 = *(float *)(*(uint32_t *)v12 + 20) - *(float *)(*(uint32_t *)v12 + 16);
        v29 = ((long double (*)(float *))*(uint32_t *)(*(uint32_t *)v37 + 84))(v37);
        if ( v29 < 0.0 )
          v13 = v34;
        else
          v13 = v35 + v34;
        v46 = a4;
        ++v10;
        v47 = 4 * v44 + 2;
        glitch::collada::CSceneNodeAnimatorSet::computeAnimationValuesEx(
          *(int ***)(*((uint32_t *)a1 + 16) + v11),
          __SPAIR64__(a3, LODWORD(v13)),
          (uint32_t *)(&v46));
        v48 = a4;
        v49 = 4 * v44 + 3;
        glitch::collada::CSceneNodeAnimatorSet::computeAnimationValuesEx(
          *(int ***)(*((uint32_t *)a1 + 16) + v11),
          __SPAIR64__(a3, (float)(v35 * v42) + v34),
          (uint32_t *)(&v48));
        ++v44;
      }
      while ( v10 != v39 );
LABEL_18:
      v4 = a4;
    }
    glitch::collada::ISceneNodeAnimator::updateTime(a1, a2);
    v14 = (uint32_t *)G4_VCALL<int>(a1, 68);
    v15 = *v14;
    v30 = ((long double (*)(uint32_t))*(uint32_t *)(*(uint32_t *)*v14 + 84))(*v14);
g4_m128_lane<float>(v16, 0) = v30;
    LODWORD(v42) =g4_m128_lane<uint32_t>(_mm_andnot_ps(_mm_cmple_ss(g4_m128_from<__m128>(0LL), v16), g4_to_m128(0x3F800000u)), 0);
    v17 = *(float *)(v15 + 20);
    if ( v17 > 0.0 )
      goto LABEL_20;
  }
  else
  {
    glitch::collada::ISceneNodeAnimator::updateTime(a1, a2);
    v26 = G4_VCALL<int>(a1, 68);
    v15 = *(uint32_t *)v26;
    v17 = *(float *)(*(uint32_t *)v26 + 20);
    if ( v17 > 0.0 )
    {
LABEL_20:
      v41 = *(float *)(v15 + 4) / v17;
      goto LABEL_21;
    }
  }
  v41 = 0.0;
LABEL_21:
  v18 = *((uint32_t **)a1 + 16);
  if ( *(uint32_t *)(*v18 + 28) != 0 )
  {
    v19 = (uint32_t *)G4_VCALL<int>(*v18, 68);
    v31 = ((long double (*)(uint32_t))*(uint32_t *)(*(uint32_t *)*v19 + 56))(*v19);
    v33 = v31;
    v32 = ((long double (*)(uint32_t))*(uint32_t *)(*(uint32_t *)*v19 + 48))(*v19);
    v28 = ((long double (*)(uint32_t))*(uint32_t *)(*(uint32_t *)*v19 + 52))(*v19);
    (*(void (**)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))(**(uint32_t **)(**((uint32_t **)a1 + 16) + 28) + 16))(
      *(uint32_t *)(**((uint32_t **)a1 + 16) + 28),
      (float)(v33 * v42) + v32,
      (float)(v41 * v33) + v32,
      LODWORD(v32),
      LODWORD(v28));
    v18 = *((uint32_t **)a1 + 16);
  }
  if ( (*((uint32_t *)a1 + 17) - (int)(uintptr_t)(v18)) >> 2 != 0 )
  {
    v40 = v4;
    v20 = 0;
    v38 = 0;
    v21 = (*((uint32_t *)a1 + 17) - (int)(uintptr_t)(v18)) >> 2;
    do
    {
      while ( *(float *)(*((uint32_t *)a1 + 10) + 4 * v20) <= 0.00000011920929f )
      {
        if ( ++v20 == v21 )
          return v45 == 0 ? 2 : 4;
      }
      v36 = *(float *)(*(uint32_t *)(*(int (**)(uint32_t))(**(uint32_t **)(*((uint32_t *)a1 + 16) + 4 * v20) + 68))(*(uint32_t *)(*((uint32_t *)a1 + 16) + 4 * v20))
                     + 16);
      v22 = (*(int (**)(uint32_t))(**(uint32_t **)(*((uint32_t *)a1 + 16) + 4 * v20) + 68))(*(uint32_t *)(*((uint32_t *)a1 + 16) + 4 * v20));
      v23 = *(float *)(*(uint32_t *)v22 + 20) - *(float *)(*(uint32_t *)v22 + 16);
      v46 = v40;
      v47 = v43 * v38;
      glitch::collada::CSceneNodeAnimatorSet::computeAnimationValuesEx(
        *(int ***)(*((uint32_t *)a1 + 16) + 4 * v20),
        __SPAIR64__(a3, (float)(v23 * v41) + v36),
        (uint32_t *)(&v46));
      v48 = v40;
      v49 = v43 * v38 + 1;
      v24 = *(int ***)(*((uint32_t *)a1 + 16) + 4 * v20++);
      glitch::collada::CSceneNodeAnimatorSet::computeAnimationValuesEx(
        v24,
        __SPAIR64__(a3, (float)(v42 * v23) + v36),
        (uint32_t *)(&v48));
      ++v38;
    }
    while ( v20 != v21 );
  }
  return v45 == 0 ? 2 : 4;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSynchronizedBlender::prepareAnimationNoHandlingValuesEx  (binary VA: 0xd60d50)
// Original: glitch::collada::CSceneNodeAnimatorSynchronizedBlender::prepareAnimationNoHandlingValuesEx
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorSynchronizedBlender::prepareAnimationNoHandlingValuesEx(uint32_t *a1, float a2, int a3, int a4)
{
  float v4; // xmm1_4
  int v5;
  int v6;
  int v7;
  float v8; // xmm0_4
  unsigned int v9; // xmm0_4
  int **v10;
  typedef int _g4_t_v12;
  typedef float _g4_t_v13;
  typedef int _g4_t_v14;
  typedef float _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17[9];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v14)) > _g4_s2 ? (20u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v15)) > _g4_s3 ? (24u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v16)) > _g4_s4 ? (28u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v17)) > _g4_s5 ? (40u + sizeof(_g4_t_v17)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);

  v14 = *(uint32_t *)a3;
  v16 = *(uint32_t *)(*(uint32_t *)a3 + 44);
  *(uint32_t *)(*(uint32_t *)a3 + 44) = 2;
  v4 = *(float *)(a1[3] + 20);
  if ( v4 == 0.0 )
    v15 = 0.0;
  else
    v15 = a2 / v4;
  v5 = (a1[17] - a1[16]) >> 2;
  if ( v5 != 0 )
  {
    v6 = 0;
    v12 = 0;
    do
    {
      while ( *(float *)(a1[10] + 4 * v6) <= 0.00000011920929f )
      {
        if ( ++v6 == v5 )
          goto LABEL_8;
      }
      v13 = *(float *)(*(uint32_t *)(*(int (**)(uint32_t))(**(uint32_t **)(a1[16] + 4 * v6) + 68))(*(uint32_t *)(a1[16] + 4 * v6))
                     + 16);
      v7 = *(uint32_t *)(*(int (**)(uint32_t))(**(uint32_t **)(a1[16] + 4 * v6) + 68))(*(uint32_t *)(a1[16] + 4 * v6));
      v8 = *(float *)(v7 + 20);
      v17[0] = a4;
      v17[1] = v12;
      *(float *)&v9 = (float)((float)(v8 - *(float *)(v7 + 16)) * v15) + v13;
      v10 = *(int ***)(a1[16] + 4 * v6++);
      glitch::collada::CSceneNodeAnimatorSet::computeAnimationValuesEx(v10, __SPAIR64__(a3, v9), (uint32_t *)(v17));
      ++v12;
    }
    while ( v6 != v5 );
  }
LABEL_8:
  *(uint32_t *)(v14 + 44) = v16;
  return v16;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSynchronizedBlender::prepareAnimationHandlingValues  (binary VA: 0xd60ea0)
// Original: glitch::collada::CSceneNodeAnimatorSynchronizedBlender::prepareAnimationHandlingValues
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorSynchronizedBlender::prepareAnimationHandlingValues(glitch::collada::CAnimationFilterBase::Self **a1, float a2, unsigned int a3)
{
  int v3;
  int v4;
  volatile int32_t *v5;
  volatile int32_t *v6;
  int v7;
  volatile int32_t *v8;
  int v9;
  volatile int32_t *v10;
  int v11;
  int v12;
  char v13;
  uint16_t *v14;
  uint32_t **v15;
  uint16_t *v16;
  int v17;
  int v18;
  uint32_t *v19;
  int v20;
  int v21;
  int v22;
  volatile int32_t *v23;
  typedef char *_g4_t_v25;
  typedef glitch::collada::CAnimationFilterBase::Self *_g4_t_v26;
  typedef glitch::collada::CAnimationFilterBase::Self *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint16_t *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef volatile int32_t *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef glitch::collada::CAnimationFilterBase::Self *_g4_t_v34;
  typedef uint8_t _g4_t_i;
  typedef uint16_t *_g4_t_v36;
  typedef volatile int32_t *_g4_t_v37;
  typedef volatile int32_t *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef volatile int32_t *_g4_t_v41;
  typedef glitch::core::Self *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef char _g4_t_v44[4];
  typedef uint16_t *_g4_t_v45;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v25)) > _g4_s0 ? (4u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (48u + sizeof(_g4_t_v26)) > _g4_s1 ? (48u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (52u + sizeof(_g4_t_v27)) > _g4_s2 ? (52u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v28)) > _g4_s3 ? (60u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v29)) > _g4_s4 ? (64u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (68u + sizeof(_g4_t_v30)) > _g4_s5 ? (68u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v31)) > _g4_s6 ? (72u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v32)) > _g4_s7 ? (80u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (84u + sizeof(_g4_t_v33)) > _g4_s8 ? (84u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (88u + sizeof(_g4_t_v34)) > _g4_s9 ? (88u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (94u + sizeof(_g4_t_i)) > _g4_s10 ? (94u + sizeof(_g4_t_i)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v36)) > _g4_s11 ? (96u + sizeof(_g4_t_v36)) : _g4_s11,
    _g4_s13 = (100u + sizeof(_g4_t_v37)) > _g4_s12 ? (100u + sizeof(_g4_t_v37)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v38)) > _g4_s13 ? (104u + sizeof(_g4_t_v38)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v39)) > _g4_s14 ? (108u + sizeof(_g4_t_v39)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v40)) > _g4_s15 ? (112u + sizeof(_g4_t_v40)) : _g4_s15,
    _g4_s17 = (116u + sizeof(_g4_t_v41)) > _g4_s16 ? (116u + sizeof(_g4_t_v41)) : _g4_s16,
    _g4_s18 = (120u + sizeof(_g4_t_v42)) > _g4_s17 ? (120u + sizeof(_g4_t_v42)) : _g4_s17,
    _g4_s19 = (124u + sizeof(_g4_t_v43)) > _g4_s18 ? (124u + sizeof(_g4_t_v43)) : _g4_s18,
    _g4_s20 = (128u + sizeof(_g4_t_v44)) > _g4_s19 ? (128u + sizeof(_g4_t_v44)) : _g4_s19,
    _g4_s21 = (132u + sizeof(_g4_t_v45)) > _g4_s20 ? (132u + sizeof(_g4_t_v45)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 52u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 60u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 68u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 72u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 80u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 84u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 88u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 94u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 96u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 100u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 104u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 108u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 112u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 116u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 120u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 124u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 128u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 132u);

  v33 = *(uint32_t *)a3;
  v3 = *(uint32_t *)(*(uint32_t *)a3 + 44);
  *(uint32_t *)(*(uint32_t *)a3 + 44) = 1;
  v28 = v3;
  v4 = *(uint32_t *)(*(uint32_t *)a3 + 16);
  v5 = *(volatile int32_t **)(*(uint32_t *)a3 + 12);
  v37 = v5;
  if ( v5 != nullptr )
  {
    sub_8B1B00(v5 + 1);
    glitch::collada::CAnimationFilterBase::set(a1[25], *(const glitch::collada::CAnimationFilterBase::Self **)(v4 + 80));
    glitch::collada::CAnimationFilterBase::intersect(a1[25], (const glitch::collada::CAnimationFilterBase::Self *)v37);
  }
  else
  {
    glitch::collada::CAnimationFilterBase::set(a1[25], *(const glitch::collada::CAnimationFilterBase::Self **)(v4 + 80));
  }
  if ( (uint8_t)glitch::collada::CAnimationFilterBase::isNull(a1[25]) != 0 )
  {
    glitch::collada::ISceneNodeAnimator::updateTime((glitch::collada::ISceneNodeAnimator::Self *)a1, a2);
    if ( v37 == nullptr )
      goto LABEL_49;
LABEL_48:
    sub_5459C0(v37);
    goto LABEL_49;
  }
  v6 = (volatile int32_t *)a1[25];
  v7 = *(uint32_t *)a3;
  v8 = *(volatile int32_t **)(*(uint32_t *)a3 + 12);
  if ( v8 != v6 )
  {
    if ( v6 != nullptr )
    {
      v27 = a1[25];
      sub_8B1B00(v6 + 1);
      v8 = *(volatile int32_t **)(v7 + 12);
      v6 = (volatile int32_t *)v27;
    }
    *(uint32_t *)(v7 + 12) = (uint32_t)(uintptr_t)(v6);
    if ( v8 != nullptr )
      sub_5459C0(v8);
    *(uint8_t *)(v7 + 20) = 1;
    v7 = *(uint32_t *)a3;
  }
  v41 = (volatile int32_t *)v7;
  v40 = (int)(uintptr_t)(&off_2047EB8);
  if ( v7 != 0 )
    sub_8B1B00((volatile int32_t *)(v7 + 4));
  v42 = nullptr;
  v43 = 0;
  v40 = (int)((uint32_t)(uintptr_t)&off_20795A0);
  v30 = glitch::collada::CSceneNodeAnimatorSynchronizedBlender::prepareAnimationHandlingValuesEx(
          (glitch::collada::ISceneNodeAnimator::Self *)a1,
          a2,
          a3,
          (int)(uintptr_t)(&v40));
  v9 = *(uint32_t *)a3;
  v10 = *(volatile int32_t **)(*(uint32_t *)a3 + 16);
  v38 = v10;
  if ( v10 != nullptr )
  {
    sub_8B1B00(v10 + 1);
    v9 = *(uint32_t *)a3;
  }
  v11 = *(uint32_t *)(v9 + 44);
  v12 = v9 + 28;
  if ( v11 != 1 )
  {
    v12 = v9 + 24;
    if ( v11 == 2 )
    {
      v12 = v9 + 32;
      if ( *(uint32_t *)(v9 + 16) == 0 )
        v12 = v9 + 24;
    }
  }
  sub_D434A0((int)(uintptr_t)(v44), (uint32_t *)(*(uint32_t *)v12 + 8), 0);
  v13 = v44[0];
  if ( v44[0] != 0 )
  {
    v14 = v45;
    v15 = (uint32_t **)&v45;
  }
  else
  {
    v15 = (uint32_t **)v45;
    v14 = *(uint16_t **)v45;
  }
  v29 = (uint16_t *)v15[1];
  if ( v29 != v14 )
  {
    v36 = v14;
    v16 = v14;
    do
    {
      while ( 1 )
      {
        v39 = *v16;
        if ( *(uint32_t *)(*(uint32_t *)(*(uint32_t *)a3 + 60) + 4 * v39) != 0 )
        {
          v17 = *(uint32_t *)(*(uint32_t *)a3 + 12);
          if ( v17 == 0 || (v18 = *(uint32_t *)(v17 + 8)) == 0 || ((1 << v39) & *(uint32_t *)(v18 + 4 * (v39 >> 5))) != 0 )
          {
            v19 = (uint32_t *)(*((int (**)(glitch::collada::CAnimationFilterBase::Self **))*a1 + 21))(a1);
            v25 = (char *)v39;
            v20 = G4_VCALL<int>(*v19, 20);
            if ( a1[19] != nullptr )
              break;
          }
        }
        v16 = ++v36;
        if ( v29 == v36 )
          goto LABEL_29;
      }
      v31 = v41;
      v26 = a1[19];
      v32 = 0;
      v21 = v20;
      v34 = nullptr;
      for ( i = *(uint8_t *)(**((uint32_t **)v41 + 13) + v39); ; i = *(uint8_t *)(**((uint32_t **)v41 + 13) + v39) )
      {
        v25 = (char *)v42 + v43 * *(uint16_t *)(**((uint32_t **)v31 + 14) + 2 * v39) + v32 * i;
        G4_VCALL<void>(v21, 24);
        v34 = (glitch::collada::CAnimationFilterBase::Self *)((char *)v34 + 1);
        v32 += v30;
        if ( v26 == v34 )
          break;
        v31 = v41;
      }
      v16 = ++v36;
    }
    while ( v29 != v36 );
LABEL_29:
    v13 = v44[0];
  }
  if ( v13 != 0 && v45 != nullptr )
    gll_operator_delete_arr((int)(uintptr_t)(v45));
  v22 = *(uint32_t *)a3;
  v23 = *(volatile int32_t **)(*(uint32_t *)a3 + 12);
  if ( v37 != v23 )
  {
    if ( v37 != nullptr )
    {
      sub_8B1B00(v37 + 1);
      v23 = *(volatile int32_t **)(v22 + 12);
    }
    *(uint32_t *)(v22 + 12) = (uint32_t)(uintptr_t)(v37);
    if ( v23 != nullptr )
      sub_5459C0(v23);
    *(uint8_t *)(v22 + 20) = 1;
  }
  if ( v38 != nullptr )
    sub_5459C0(v38);
  v40 = (int)((uint32_t)(uintptr_t)&off_20795A0);
  if ( v42 != nullptr )
    glitch::core::releaseProcessBuffer(v42, v25);
  v40 = (int)(uintptr_t)(&off_2047EB8);
  if ( v41 != nullptr )
    sub_5459C0(v41);
  if ( v37 != nullptr )
    goto LABEL_48;
LABEL_49:
  *(uint32_t *)(v33 + 44) = v28;
  return v28;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSynchronizedBlender::prepareAnimationValues  (binary VA: 0xd61340)
// Original: glitch::collada::CSceneNodeAnimatorSynchronizedBlender::prepareAnimationValues
// ----------------------------------------------------------------------------
glitch::collada::CAnimationFilterBase::Self * glitch::collada::CSceneNodeAnimatorSynchronizedBlender::prepareAnimationValues(glitch::collada::CAnimationFilterBase::Self **a1, float a2, int a3, int a4)
{
  volatile int32_t *v4;
  int v5;
  glitch::collada::CAnimationFilterBase::Self *v6;
  int v8;

  v4 = *(volatile int32_t **)(*(uint32_t *)a3 + 16);
  if ( v4 != nullptr )
  {
    sub_8B1B00(v4 + 1);
    glitch::collada::CSceneNodeAnimatorSynchronizedBlender::prepareAnimationHandlingValues(a1, a2, a3);
    v5 = (*((int (**)(glitch::collada::CAnimationFilterBase::Self **))*a1 + 17))(a1);
    glitch::collada::CSceneNodeAnimatorSynchronizedBlender::prepareAnimationNoHandlingValuesEx(
      (uint32_t *)(a1),
      *(float *)(*(uint32_t *)v5 + 4),
      a3,
      a4);
    v6 = a1[19];
    sub_5459C0(v4);
  }
  else
  {
    (**(void (***)(glitch::collada::CAnimationFilterBase::Self *, uint32_t))a1[3])(a1[3], LODWORD(a2));
    v8 = (*((int (**)(glitch::collada::CAnimationFilterBase::Self **))*a1 + 17))(a1);
    glitch::collada::CSceneNodeAnimatorSynchronizedBlender::prepareAnimationNoHandlingValuesEx(
      (uint32_t *)(a1),
      *(float *)(*(uint32_t *)v8 + 4),
      a3,
      a4);
    return a1[19];
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSynchronizedBlender::computeAnimationValues  (binary VA: 0xd61430)
// Original: glitch::collada::CSceneNodeAnimatorSynchronizedBlender::computeAnimationValues
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorSynchronizedBlender::computeAnimationValues(glitch::collada::ISceneNodeAnimator::Self *a1, float a2, volatile int32_t **a3, uint32_t *a4)
{
  int v4;
  volatile int32_t *v5;
  signed int v6;
  int result;
  typedef int _g4_t_v8;
  typedef void *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef volatile int32_t *_g4_t_v12;
  typedef glitch::core::Self *_g4_t_v13;
  typedef int _g4_t_v14;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v8)) > _g4_s0 ? (4u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v9)) > _g4_s1 ? (4u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v10)) > _g4_s2 ? (40u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v11)) > _g4_s3 ? (48u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v12)) > _g4_s4 ? (52u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v13)) > _g4_s5 ? (56u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v14)) > _g4_s6 ? (60u + sizeof(_g4_t_v14)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 48u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 52u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 56u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 60u);

  if ( *((uint32_t *)a1 + 19) != 0 )
  {
    glitch::collada::CSceneNodeAnimatorBlenderBase::prepareWeightsTable((glitch::collada::CSceneNodeAnimatorBlenderBase::Self *)((glitch::collada::ISceneNodeAnimator::Self *)((char *)a1 + 40)));
    v4 = *((uint32_t *)a1 + 19);
    v11 = (int)(uintptr_t)(&off_2047EB8);
    v5 = *a3;
    v12 = *a3;
    if ( v12 != nullptr )
    {
      v10 = v4;
      sub_8B1B00(v5 + 1);
      v4 = v10;
    }
    v13 = nullptr;
    v14 = 0;
    v11 = (int)((uint32_t)(uintptr_t)&off_20795A0);
    if ( v4 != 0 )
    {
      v14 = v4;
      v6 = *((uint32_t *)v12 + 12) * v4;
      if ( v6 > 0 )
        v13 = (glitch::core::Self *)glitch::core::allocProcessBuffer(v6, v8);
    }
    glitch::collada::CSceneNodeAnimatorSynchronizedBlender::prepareAnimationValues(
      (glitch::collada::CAnimationFilterBase::Self **)a1,
      a2,
      (int)(uintptr_t)(a3),
      (int)(uintptr_t)(&v11));
    glitch::collada::CSceneNodeAnimatorBlenderBase::computeBlendedValue(
      (int)(uintptr_t)(a1) + 40,
      (uint32_t *)(&v11),
      *((uint32_t *)a1 + 13),
      a4,
      (int)(uintptr_t)(a3));
    v11 = (int)((uint32_t)(uintptr_t)&off_20795A0);
    if ( v13 != nullptr )
      glitch::core::releaseProcessBuffer(v13, v9);
    v11 = (int)(uintptr_t)(&off_2047EB8);
    result = 0;
    if ( v12 != nullptr )
    {
      sub_5459C0(v12);
      return 0;
    }
  }
  else
  {
    glitch::os::Printer::logf(3, (int)(uintptr_t)("[GLITCH] - Animation Blender - All blending weigths are null"));
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSynchronizedBlender::applyAnimationValues  (binary VA: 0xd61590)
// Original: glitch::collada::CSceneNodeAnimatorSynchronizedBlender::applyAnimationValues
// ----------------------------------------------------------------------------
volatile int32_t * glitch::collada::CSceneNodeAnimatorSynchronizedBlender::applyAnimationValues(glitch::collada::ISceneNodeAnimator::Self *a1, float a2, int *a3)
{
  int v3;
  volatile int32_t *v4;
  signed int v5;
  volatile int32_t *result;
  typedef int _g4_t_v7;
  typedef void *_g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef volatile int32_t *_g4_t_v11;
  typedef glitch::core::Self *_g4_t_v12;
  typedef int _g4_t_v13;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v9)) > _g4_s2 ? (24u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v10)) > _g4_s3 ? (32u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v11)) > _g4_s4 ? (36u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v12)) > _g4_s5 ? (40u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v13)) > _g4_s6 ? (44u + sizeof(_g4_t_v13)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 36u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);

  if ( *((uint32_t *)a1 + 19) == 0 )
    return (volatile int32_t *)(glitch::os::Printer::logf(3, (int)(uintptr_t)("[GLITCH] - Animation Blender - All blending weigths are null")));
  glitch::collada::CSceneNodeAnimatorBlenderBase::prepareWeightsTable((glitch::collada::CSceneNodeAnimatorBlenderBase::Self *)((glitch::collada::ISceneNodeAnimator::Self *)((char *)a1 + 40)));
  v3 = *((uint32_t *)a1 + 19);
  v10 = (int)(uintptr_t)(&off_2047EB8);
  v4 = (volatile int32_t *)*a3;
  v11 = (volatile int32_t *)*a3;
  if ( v11 != nullptr )
  {
    v9 = v3;
    sub_8B1B00(v4 + 1);
    v3 = v9;
  }
  v12 = nullptr;
  v13 = 0;
  v10 = (int)((uint32_t)(uintptr_t)&off_20795A0);
  if ( v3 != 0 )
  {
    v13 = v3;
    v5 = *((uint32_t *)v11 + 12) * v3;
    if ( v5 > 0 )
      v12 = (glitch::core::Self *)glitch::core::allocProcessBuffer(v5, v7);
  }
  glitch::collada::CSceneNodeAnimatorSynchronizedBlender::prepareAnimationValues(
    (glitch::collada::CAnimationFilterBase::Self **)a1,
    a2,
    (int)(uintptr_t)(a3),
    (int)(uintptr_t)(&v10));
  glitch::collada::CSceneNodeAnimatorBlenderBase::applyBlendedValue((int)(uintptr_t)(a1) + 40, (uint32_t *)(&v10), *((uint32_t *)a1 + 13), a3);
  v10 = (int)((uint32_t)(uintptr_t)&off_20795A0);
  if ( v12 != nullptr )
    glitch::core::releaseProcessBuffer(v12, v8);
  v10 = (int)(uintptr_t)(&off_2047EB8);
  result = v11;
  if ( v11 != nullptr )
    return (volatile int32_t *)sub_5459C0(v11);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::getStringsInternal_ead616f0  (binary VA: 0xd616f0)
// Original: glitch::collada::getStringsInternal
// ----------------------------------------------------------------------------
char ** glitch::collada::getStringsInternal_ead616f0()
{
  return (char **)(uintptr_t)(((uint32_t)(uintptr_t)&off_203126C));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::getStringsInternal_ead61710  (binary VA: 0xd61710)
// Original: glitch::collada::getStringsInternal
// ----------------------------------------------------------------------------
char ** glitch::collada::getStringsInternal_ead61710()
{
  return (char **)(uintptr_t)(((uint32_t)(uintptr_t)&off_2031278));
}



// ============================================================================
// Address:   0xd61730 (size: 192 bytes)
// Symbol:    _ZN6glitch7collada18ISceneNodeAnimatorC2Ev
// Demangled: glitch::collada::ISceneNodeAnimator::ISceneNodeAnimator(void)
// ============================================================================
void (**glitch::collada::ISceneNodeAnimator::ISceneNodeAnimator(
        glitch::collada::ISceneNodeAnimator::Self *self,
        int *a2))(glitch::collada::ISceneNodeAnimator::Self * self)
{
  int v2;
  int v3;
  int v4;

  v2 = a2[2];
  *(uint32_t *)self = v2;
  *(uint32_t *)((char *)self + *(uint32_t *)(v2 - 12)) = a2[3];
  *((uint8_t *)self + 8) = 1;
  *((uint32_t *)self + 1) = ((uint32_t)(uintptr_t)&off_206D428);
  glitch::IObject::Construct();
  v3 = a2[1];
  *(uint32_t *)self = v3;
  *(uint32_t *)((char *)self + *(uint32_t *)(v3 - 12)) = a2[4];
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 1) = ((uint32_t)(uintptr_t)&off_20815C8);
  v4 = *a2;
  *(uint32_t *)self = *a2;
  *(uint32_t *)((char *)self + *(uint32_t *)(v4 - 12)) = a2[5];
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 1) = ((uint32_t)(uintptr_t)&off_2079078);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  return (void (**)(glitch::collada::ISceneNodeAnimator::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2079078));
}


// ============================================================================
// Address:   0xd617f0 (size: 119 bytes)
// Symbol:    _ZN6glitch7collada25CSceneNodeAnimatorBlenderC1Ev
// Demangled: glitch::collada::CSceneNodeAnimatorBlender::CSceneNodeAnimatorBlender(void)
// ============================================================================
void (**glitch::collada::CSceneNodeAnimatorBlender::CSceneNodeAnimatorBlender(
        glitch::collada::CSceneNodeAnimatorBlender::Self *self))(glitch::collada::CSceneNodeAnimatorBlender::Self * self)
{
  *((uint32_t *)self + 21) = (uint32_t)(uintptr_t)(&off_20483C0);
  *((uint32_t *)self + 22) = 0;
  glitch::collada::ISceneNodeAnimator::ISceneNodeAnimator(self, (int *)&off_20780E4);
  glitch::collada::CSceneNodeAnimatorBlenderBase::Construct((glitch::collada::CSceneNodeAnimatorBlenderBase::Self *)((glitch::collada::CSceneNodeAnimatorBlender::Self *)((char *)self + 40)));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_207810C);
  *((uint32_t *)self + 21) = ((uint32_t)(uintptr_t)&off_20781DC);
  *((uint32_t *)self + 1) = ((uint32_t)(uintptr_t)&off_20781C0);
  return (void (**)(glitch::collada::CSceneNodeAnimatorBlender::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20781C0));
}


// ============================================================================
// Address:   0xd61870 (size: 105 bytes)
// Symbol:    _ZN6glitch7collada25CSceneNodeAnimatorBlenderC2Ev
// Demangled: glitch::collada::CSceneNodeAnimatorBlender::CSceneNodeAnimatorBlender(void)
// ============================================================================
void (**glitch::collada::CSceneNodeAnimatorBlender::CSceneNodeAnimatorBlender(
        glitch::collada::CSceneNodeAnimatorBlender::Self *self,
        int *a2))(glitch::collada::CSceneNodeAnimatorBlender::Self * self)
{
  int v2;

  glitch::collada::ISceneNodeAnimator::ISceneNodeAnimator(self, a2 + 1);
  glitch::collada::CSceneNodeAnimatorBlenderBase::Construct((glitch::collada::CSceneNodeAnimatorBlenderBase::Self *)((glitch::collada::CSceneNodeAnimatorBlender::Self *)((char *)self + 40)));
  v2 = *a2;
  *(uint32_t *)self = *a2;
  *(uint32_t *)((char *)self + *(uint32_t *)(v2 - 12)) = a2[7];
  *((uint32_t *)self + 1) = ((uint32_t)(uintptr_t)&off_20781C0);
  return (void (**)(glitch::collada::CSceneNodeAnimatorBlender::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20781C0));
}


// ============================================================================
// Address:   0xd618e0 (size: 124 bytes)
// Symbol:    _ZN6glitch7collada30CSceneNodeAnimatorTrackBlenderC1Ev
// Demangled: glitch::collada::CSceneNodeAnimatorTrackBlender::CSceneNodeAnimatorTrackBlender(void)
// ============================================================================
void (**glitch::collada::CSceneNodeAnimatorTrackBlender::CSceneNodeAnimatorTrackBlender(
        glitch::collada::CSceneNodeAnimatorTrackBlender::Self *self))(glitch::collada::CSceneNodeAnimatorTrackBlender::Self * self)
{
  *((uint32_t *)self + 25) = (uint32_t)(uintptr_t)(&off_20483C0);
  *((uint32_t *)self + 26) = 0;
  glitch::collada::CSceneNodeAnimatorBlender::CSceneNodeAnimatorBlender(self, (int *)((uint32_t)(uintptr_t)&off_2078B04));
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2078B4C);
  *((uint32_t *)self + 25) = ((uint32_t)(uintptr_t)&off_2078C1C);
  *((uint32_t *)self + 1) = ((uint32_t)(uintptr_t)&off_2078C00);
  return (void (**)(glitch::collada::CSceneNodeAnimatorTrackBlender::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2078C00));
}


// ============================================================================
// Address:   0xd61960 (size: 122 bytes)
// Symbol:    _ZN6glitch7collada30CSceneNodeAnimatorTrackBlenderC2Ev
// Demangled: glitch::collada::CSceneNodeAnimatorTrackBlender::CSceneNodeAnimatorTrackBlender(void)
// ============================================================================
void (**glitch::collada::CSceneNodeAnimatorTrackBlender::CSceneNodeAnimatorTrackBlender(
        glitch::collada::CSceneNodeAnimatorTrackBlender::Self *self,
        int *a2))(glitch::collada::CSceneNodeAnimatorTrackBlender::Self * self)
{
  int v2;

  glitch::collada::CSceneNodeAnimatorBlender::CSceneNodeAnimatorBlender(self, a2 + 1);
  v2 = *a2;
  *(uint32_t *)self = *a2;
  *(uint32_t *)((char *)self + *(uint32_t *)(v2 - 12)) = a2[9];
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 1) = ((uint32_t)(uintptr_t)&off_2078C00);
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0;
  return (void (**)(glitch::collada::CSceneNodeAnimatorTrackBlender::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2078C00));
}
// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSynchronizedBlender::Construct  (binary VA: 0xd619e0)
// Original: glitch::collada::CSceneNodeAnimatorSynchronizedBlender::CSceneNodeAnimatorSynchronizedBlender
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorSynchronizedBlender::Construct(uint32_t *a1, int *a2)
{
  uint32_t *v2;
  int *v3;
  int v4;
  bool v5;
  void *Instance;
  int result;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef uint32_t *_g4_t_v10;
  typedef uint32_t _g4_t_v11[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v10)) > _g4_s2 ? (16u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v11)) > _g4_s3 ? (28u + sizeof(_g4_t_v11)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  v11[3] = (uint32_t)(uintptr_t)(&a1);
  v2 = a1;
  v3 = a2;
  a1[26] = (uint32_t)(uintptr_t)(&off_20483C0);
  v2[27] = 0;
  glitch::collada::ISceneNodeAnimator::ISceneNodeAnimator(
    (glitch::collada::ISceneNodeAnimator::Self *)v2,
    (int *)&off_2078DE4);
  glitch::collada::CSceneNodeAnimatorBlenderBase::Construct((glitch::collada::CSceneNodeAnimatorBlenderBase::Self *)(v2 + 10));
  *v2 = ((uint32_t)(uintptr_t)&off_2078E0C);
  v2[26] = ((uint32_t)(uintptr_t)&off_2078ED4);
  v2[1] = ((uint32_t)(uintptr_t)&off_2078EB8);
  v4 = *v3;
  v5 = *v3 == 0;
  v2[21] = *v3;
  if ( !v5 )
    sub_8B1B00((volatile int32_t *)(v4 + 4));
  v2[22] = 0;
  v2[23] = 0;
  v2[24] = 0;
  v2[25] = 0;
  Instance = glitch::CIrrFactory::getInstance();
  (*(void (**)(uint32_t **, void *, int, int))(*(uint32_t *)Instance + 36))(&v10, Instance, v8, v9);
  v11[0] = (uint32_t)(uintptr_t)(v10);
  if ( v10 != nullptr )
    sub_8B1B00((uint32_t *)((char *)v10 + *(uint32_t *)(*v10 - 12) + 4));
  glitch::scene::ISceneNodeAnimator::setTimelineCtrl(v2, v11);
  if ( v11[0] != 0 )
    sub_5459C0((volatile int32_t *)(*(uint32_t *)(*(uint32_t *)v11[0] - 12) + v11[0]));
  result = (int)(uintptr_t)(v10);
  if ( v10 != nullptr )
    return sub_5459C0((uint32_t *)((char *)v10 + *(uint32_t *)(*v10 - 12)));
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSynchronizedBlender::Construct  (binary VA: 0xd61b00)
// Original: glitch::collada::CSceneNodeAnimatorSynchronizedBlender::CSceneNodeAnimatorSynchronizedBlender
// ----------------------------------------------------------------------------
int glitch::collada::CSceneNodeAnimatorSynchronizedBlender::Construct(glitch::collada::ISceneNodeAnimator::Self *a1, int *a2, int *a3)
{
  glitch::collada::ISceneNodeAnimator::Self *v3;
  int *v4;
  int v5;
  int v6;
  bool v7;
  void *Instance;
  int result;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int *_g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef uint32_t _g4_t_v17[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v11)) > _g4_s1 ? (16u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v12)) > _g4_s2 ? (20u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v13)) > _g4_s3 ? (24u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v14)) > _g4_s4 ? (28u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v15)) > _g4_s5 ? (32u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v16)) > _g4_s6 ? (36u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v17)) > _g4_s7 ? (48u + sizeof(_g4_t_v17)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);

  v17[3] = (uint32_t)(uintptr_t)(&a1);
  v3 = a1;
  v4 = a2;
  v15 = a3;
  glitch::collada::ISceneNodeAnimator::ISceneNodeAnimator(a1, a2 + 1);
  glitch::collada::CSceneNodeAnimatorBlenderBase::Construct((glitch::collada::CSceneNodeAnimatorBlenderBase::Self *)((glitch::collada::ISceneNodeAnimator::Self *)((char *)v3 + 40)));
  v5 = *v4;
  *(uint32_t *)v3 = *v4;
  *(uint32_t *)((char *)v3 + *(uint32_t *)(v5 - 12)) = v4[7];
  *((uint32_t *)v3 + 1) = ((uint32_t)(uintptr_t)&off_2078EB8);
  v6 = *v15;
  v7 = *v15 == 0;
  *((uint32_t *)v3 + 21) = *v15;
  if ( !v7 )
    sub_8B1B00((volatile int32_t *)(v6 + 4));
  *((uint32_t *)v3 + 22) = 0;
  *((uint32_t *)v3 + 23) = 0;
  *((uint32_t *)v3 + 24) = 0;
  *((uint32_t *)v3 + 25) = 0;
  Instance = glitch::CIrrFactory::getInstance();
  (*(void (**)(uint32_t **, void *, int, int, int, int, int, int *))(*(uint32_t *)Instance + 36))(
    &v16,
    Instance,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v17[0] = (uint32_t)(uintptr_t)(v16);
  if ( v16 != nullptr )
    sub_8B1B00((uint32_t *)((char *)v16 + *(uint32_t *)(*v16 - 12) + 4));
  glitch::scene::ISceneNodeAnimator::setTimelineCtrl(v3, v17);
  if ( v17[0] != 0 )
    sub_5459C0((volatile int32_t *)(*(uint32_t *)(*(uint32_t *)v17[0] - 12) + v17[0]));
  result = (int)(uintptr_t)(v16);
  if ( v16 != nullptr )
    return sub_5459C0((uint32_t *)((char *)v16 + *(uint32_t *)(*v16 - 12)));
  return result;
}



// ============================================================================
// Address:   0xd61c10 (size: 153 bytes)
// Symbol:    _ZN6glitch7collada18ISceneNodeAnimatorC1Ev
// Demangled: glitch::collada::ISceneNodeAnimator::ISceneNodeAnimator(void)
// ============================================================================
void (**glitch::collada::ISceneNodeAnimator::ISceneNodeAnimator(
        glitch::collada::ISceneNodeAnimator::Self *self))(glitch::collada::ISceneNodeAnimator::Self * self)
{
  *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)(&off_2078F0C);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2078EEC);
  *((uint32_t *)self + 1) = ((uint32_t)(uintptr_t)&off_206D428);
  *((uint32_t *)self + 11) = 0;
  *((uint8_t *)self + 8) = 1;
  glitch::IObject::Construct();
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2078FCC);
  *((uint32_t *)self + 10) = ((uint32_t)(uintptr_t)&off_2079094);
  *((uint32_t *)self + 1) = ((uint32_t)(uintptr_t)&off_2079078);
  return (void (**)(glitch::collada::ISceneNodeAnimator::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2079078));
}
// ----------------------------------------------------------------------------
// Function: glitch::collada::ISceneNodeAnimator::Destroy  (binary VA: 0xd61cb0)
// Original: glitch::collada::ISceneNodeAnimator::~ISceneNodeAnimator
// ----------------------------------------------------------------------------
void glitch::collada::ISceneNodeAnimator::Destroy(glitch::collada::ISceneNodeAnimator::Self *self, int *a2)
{
  int v2;

  v2 = *a2;
  *(uint32_t *)self = *a2;
  *(uint32_t *)((char *)self + *(uint32_t *)(v2 - 12)) = a2[5];
  *((uint32_t *)self + 1) = ((uint32_t)(uintptr_t)&off_2079078);
  if ( *((uint32_t *)self + 7) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 4));
  glitch::scene::ISceneNodeAnimator::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationTrackEx::Destroy  (binary VA: 0xd61d30)
// Original: glitch::collada::CAnimationTrackEx::~CAnimationTrackEx
// ----------------------------------------------------------------------------
void glitch::collada::CAnimationTrackEx::Destroy(glitch::collada::CAnimationTrackEx::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CFloatEx::applyBlendedValue  (binary VA: 0xd7d840)
// Original: glitch::collada::animation_track::CFloatEx::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CFloatEx::applyBlendedValue(glitch::collada::animation_track::CFloatEx::Self *self, float *a2, const float *a3, int a4, float *a5)
{
  int result;
  float v6; // xmm1_4
  float v7; // xmm0_4

  result = 0;
  *a5 = 0.0;
  if ( a4 > 0 )
  {
    v6 = 0.0;
    for ( result = 0; result != a4; ++result )
    {
      v7 = a3[result] * a2[result];
      v6 = v6 + v7;
      *a5 = v6;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CFloatEx::getValueSize  (binary VA: 0xd7d890)
// Original: glitch::collada::animation_track::CFloatEx::getValueSize
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CFloatEx::getValueSize()
{
  return 4;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CFloatEx::getIdentityValue  (binary VA: 0xd7d8a0)
// Original: glitch::collada::animation_track::CFloatEx::getIdentityValue
// ----------------------------------------------------------------------------
uint32_t * glitch::collada::animation_track::CFloatEx::getIdentityValue(glitch::collada::animation_track::CFloatEx::Self *self, uint32_t *a2)
{
  *a2 = 0;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CFloatEx::getBlendedValue  (binary VA: 0xd7d8b0)
// Original: glitch::collada::animation_track::CFloatEx::getBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CFloatEx::getBlendedValue(glitch::collada::animation_track::CFloatEx::Self *self, float *a2, const float *a3, int a4, float *a5)
{
  int result;
  float v6; // xmm1_4
  float v7; // xmm0_4

  result = 0;
  *a5 = 0.0;
  if ( a4 > 0 )
  {
    v6 = 0.0;
    for ( result = 0; result != a4; ++result )
    {
      v7 = a3[result] * a2[result];
      v6 = v6 + v7;
      *a5 = v6;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CFloatEx::getAddedValue  (binary VA: 0xd7d900)
// Original: glitch::collada::animation_track::CFloatEx::getAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CFloatEx::getAddedValue(glitch::collada::animation_track::CFloatEx::Self *self, float *a2, const float *a3, int a4, float *a5)
{
  int result;
  float v6; // xmm1_4
  float v7; // xmm0_4

  result = 0;
  *a5 = 0.0;
  if ( a4 > 0 )
  {
    v6 = 0.0;
    for ( result = 0; result != a4; ++result )
    {
      v7 = a3[result] * a2[result];
      v6 = v6 + v7;
      *a5 = v6;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVector3dEx::getValueSize  (binary VA: 0xd7d980)
// Original: glitch::collada::animation_track::CVector3dEx::getValueSize
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVector3dEx::getValueSize()
{
  return 12;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVector3dEx::getIdentityValue  (binary VA: 0xd7d990)
// Original: glitch::collada::animation_track::CVector3dEx::getIdentityValue
// ----------------------------------------------------------------------------
uint32_t * glitch::collada::animation_track::CVector3dEx::getIdentityValue(glitch::collada::animation_track::CVector3dEx::Self *self, uint32_t *a2)
{
  *a2 = 0;
  a2[1] = 0;
  a2[2] = 0;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVector3dEx::getAddedValue  (binary VA: 0xd7d9a0)
// Original: glitch::collada::animation_track::CVector3dEx::getAddedValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVector3dEx::getAddedValue(glitch::collada::animation_track::CVector3dEx::Self *self, float *a2, const float *a3, int a4, float *a5)
{
  float v5; // xmm1_4
  float v6; // xmm2_4
  float v7; // xmm3_4
  int v9;
  float v10; // xmm0_4
  float v11; // xmm4_4
  float v12; // xmm0_4

  v5 = 0.0;
  v6 = 0.0;
  v7 = 0.0;
  if ( a4 > 0 )
  {
    v5 = 0.0;
    v6 = 0.0;
    v7 = 0.0;
    v9 = 0;
    do
    {
      v10 = a3[v9++];
      v7 = v7 + (float)(*a2 * v10);
      v11 = a2[1] * v10;
      v12 = v10 * a2[2];
      a2 += 3;
      v6 = v6 + v11;
      v5 = v5 + v12;
    }
    while ( v9 != a4 );
  }
  *a5 = v7;
  a5[1] = v6;
  a5[2] = v5;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVisibilityEx::retrieveValue  (binary VA: 0xd7da20)
// Original: glitch::collada::animation_track::CVisibilityEx::retrieveValue
// ----------------------------------------------------------------------------
bool * glitch::collada::animation_track::CVisibilityEx::retrieveValue(glitch::collada::animation_track::CVisibilityEx::Self *self, uint32_t *a2, bool *a3)
{
  *a3 = (a2[61] & 0x18) == 24;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVisibilityEx::applyValue  (binary VA: 0xd7da40)
// Original: glitch::collada::animation_track::CVisibilityEx::applyValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVisibilityEx::applyValue(glitch::collada::animation_track::CVisibilityEx::Self *self, uint8_t *a2, void *a3)
{
  return G4_VCALL<int>(a3, 76, *a2);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVisibilityEx::getValueSize  (binary VA: 0xd7da60)
// Original: glitch::collada::animation_track::CVisibilityEx::getValueSize
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVisibilityEx::getValueSize()
{
  return 4;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVisibilityEx::getIdentityValue  (binary VA: 0xd7da70)
// Original: glitch::collada::animation_track::CVisibilityEx::getIdentityValue
// ----------------------------------------------------------------------------
uint32_t * glitch::collada::animation_track::CVisibilityEx::getIdentityValue(glitch::collada::animation_track::CVisibilityEx::Self *self, uint32_t *a2)
{
  *a2 = 1;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVisibilityEx::getBlendedValue  (binary VA: 0xd7da80)
// Original: glitch::collada::animation_track::CVisibilityEx::getBlendedValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVisibilityEx::getBlendedValue(glitch::collada::animation_track::CVisibilityEx::Self *self, uint32_t *a2, const float *a3, int a4, uint32_t *a5)
{
  int v5;

  *a5 = 1;
  if ( a4 > 0 )
  {
    v5 = 0;
    while ( a3[v5] == 0.0 || a2[v5] != 0 )
    {
      if ( ++v5 == a4 )
        return;
    }
    *a5 = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVisibilityEx::getAddedValue  (binary VA: 0xd7dad0)
// Original: glitch::collada::animation_track::CVisibilityEx::getAddedValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVisibilityEx::getAddedValue(glitch::collada::animation_track::CVisibilityEx::Self *self, uint32_t *a2, const float *a3, int a4, uint32_t *a5)
{
  int v5;

  *a5 = 0;
  if ( a4 > 0 )
  {
    v5 = 0;
    while ( a3[v5] == 0.0 || a2[v5] != 1 )
    {
      if ( ++v5 == a4 )
        return;
    }
    *a5 = 1;
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CWeightEx::getValueSize  (binary VA: 0xd7db20)
// Original: glitch::collada::animation_track::CWeightEx::getValueSize
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CWeightEx::getValueSize()
{
  return 4;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CWeightEx::getIdentityValue  (binary VA: 0xd7db30)
// Original: glitch::collada::animation_track::CWeightEx::getIdentityValue
// ----------------------------------------------------------------------------
uint32_t * glitch::collada::animation_track::CWeightEx::getIdentityValue(glitch::collada::animation_track::CWeightEx::Self *self, uint32_t *a2)
{
  *a2 = 0;
  return a2;
}


