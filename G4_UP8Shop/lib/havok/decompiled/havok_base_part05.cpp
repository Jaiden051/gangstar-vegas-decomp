#include "Core/Utils/DecompTypes.h"
#include "havok_base_part05.h"

// ----------------------------------------------------------------------------
// Function: hkxVertexAnimation::staticClass  (binary VA: 0x187aae0)
// Original: hkxVertexAnimation::staticClass
// ----------------------------------------------------------------------------
void * hkxVertexAnimation::staticClass()
{
  return &hkxVertexAnimationClass;
}

// ----------------------------------------------------------------------------
// Function: hkxVertexDescription::ElementDecl::staticClass  (binary VA: 0x187add0)
// Original: hkxVertexDescription::ElementDecl::staticClass
// ----------------------------------------------------------------------------
void * hkxVertexDescription::ElementDecl::staticClass()
{
  return &hkxVertexDescriptionElementDeclClass;
}

// ----------------------------------------------------------------------------
// Function: hkxVertexDescription::staticClass  (binary VA: 0x187adf0)
// Original: hkxVertexDescription::staticClass
// ----------------------------------------------------------------------------
void * hkxVertexDescription::staticClass()
{
  return &hkxVertexDescriptionClass;
}

// ----------------------------------------------------------------------------
// Function: hkxScene::Destroy  (binary VA: 0x187afa0)
// Original: hkxScene::~hkxScene
// ----------------------------------------------------------------------------
void hkxScene::Destroy(hkxScene::Self *self)
{
  hkxScene::Self *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int32_t v7; // kr00_4
  int32_t v8;
  int32_t v9; // ett
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int32_t v16; // kr04_4
  int32_t v17;
  int32_t v18; // ett
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int32_t v25; // kr08_4
  int32_t v26;
  int32_t v27; // ett
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int32_t v34; // kr0C_4
  int32_t v35;
  int32_t v36; // ett
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int32_t v43; // kr10_4
  int32_t v44;
  int32_t v45; // ett
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int32_t v52; // kr14_4
  int32_t v53;
  int32_t v54; // ett
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int32_t v61; // kr18_4
  int32_t v62;
  int32_t v63; // ett
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int32_t v70; // kr1C_4
  int32_t v71;
  int32_t v72; // ett
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int32_t v79; // kr20_4
  int32_t v80;
  int32_t v81; // ett
  int v82;
  int v83;
  int v84;
  int32_t v85; // kr24_4
  int32_t v86;
  int32_t v87; // ett
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;

  v1 = self;
  v2 = *((uint32_t *)self + 32);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A61F8);
  v3 = v2 - 1;
  v4 = *((uint32_t *)self + 31);
  if ( v3 >= 0 )
  {
    do
    {
      v5 = *(uint32_t *)(v4 + 4 * v3);
      if ( v5 != 0 && *(uint16_t *)(v5 + 6) != 0 )
      {
        v88 = v3;
        do
        {
          v7 = *(uint32_t *)(v5 + 4);
          HIWORD(v6) = HIWORD(v7);
          LOWORD(v6) = 0;
          v8 = v6 | (uint16_t)(v7 - 1);
          v9 = v7;
        }
        while ( v9 != __sync_val_compare_and_swap((volatile int32_t *)(v5 + 4), v9, v8) );
        v3 = v88;
        if ( (uint16_t)v8 == 0 )
          G4_VCALL<void>(v5, 16);
      }
      *(uint32_t *)(v4 + 4 * v3--) = 0;
    }
    while ( v3 != -1 );
    v1 = self;
  }
  v10 = *((uint32_t *)v1 + 33);
  *((uint32_t *)v1 + 32) = 0;
  if ( v10 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 31),
      4 * v10);
  v11 = *((uint32_t *)v1 + 29);
  *((uint32_t *)v1 + 31) = 0;
  v12 = v11 - 1;
  *((uint32_t *)v1 + 33) = 0x80000000;
  v13 = *((uint32_t *)v1 + 28);
  if ( v12 >= 0 )
  {
    do
    {
      v14 = *(uint32_t *)(v13 + 4 * v12);
      if ( v14 != 0 && *(uint16_t *)(v14 + 6) != 0 )
      {
        v89 = v12;
        do
        {
          v16 = *(uint32_t *)(v14 + 4);
          HIWORD(v15) = HIWORD(v16);
          LOWORD(v15) = 0;
          v17 = v15 | (uint16_t)(v16 - 1);
          v18 = v16;
        }
        while ( v18 != __sync_val_compare_and_swap((volatile int32_t *)(v14 + 4), v18, v17) );
        v12 = v89;
        if ( (uint16_t)v17 == 0 )
          G4_VCALL<void>(v14, 16);
      }
      *(uint32_t *)(v13 + 4 * v12--) = 0;
    }
    while ( v12 != -1 );
  }
  v19 = *((uint32_t *)v1 + 30);
  *((uint32_t *)v1 + 29) = 0;
  if ( v19 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 28),
      4 * v19);
  v20 = *((uint32_t *)v1 + 26);
  *((uint32_t *)v1 + 28) = 0;
  v21 = v20 - 1;
  *((uint32_t *)v1 + 30) = 0x80000000;
  v22 = *((uint32_t *)v1 + 25);
  if ( v21 >= 0 )
  {
    do
    {
      v23 = *(uint32_t *)(v22 + 4 * v21);
      if ( v23 != 0 && *(uint16_t *)(v23 + 6) != 0 )
      {
        v90 = v21;
        do
        {
          v25 = *(uint32_t *)(v23 + 4);
          HIWORD(v24) = HIWORD(v25);
          LOWORD(v24) = 0;
          v26 = v24 | (uint16_t)(v25 - 1);
          v27 = v25;
        }
        while ( v27 != __sync_val_compare_and_swap((volatile int32_t *)(v23 + 4), v27, v26) );
        v21 = v90;
        if ( (uint16_t)v26 == 0 )
          G4_VCALL<void>(v23, 16);
      }
      *(uint32_t *)(v22 + 4 * v21--) = 0;
    }
    while ( v21 != -1 );
  }
  v28 = *((uint32_t *)v1 + 27);
  *((uint32_t *)v1 + 26) = 0;
  if ( v28 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 25),
      4 * v28);
  v29 = *((uint32_t *)v1 + 23);
  *((uint32_t *)v1 + 25) = 0;
  v30 = v29 - 1;
  *((uint32_t *)v1 + 27) = 0x80000000;
  v31 = *((uint32_t *)v1 + 22);
  if ( v30 >= 0 )
  {
    do
    {
      v32 = *(uint32_t *)(v31 + 4 * v30);
      if ( v32 != 0 && *(uint16_t *)(v32 + 6) != 0 )
      {
        v91 = v30;
        do
        {
          v34 = *(uint32_t *)(v32 + 4);
          HIWORD(v33) = HIWORD(v34);
          LOWORD(v33) = 0;
          v35 = v33 | (uint16_t)(v34 - 1);
          v36 = v34;
        }
        while ( v36 != __sync_val_compare_and_swap((volatile int32_t *)(v32 + 4), v36, v35) );
        v30 = v91;
        if ( (uint16_t)v35 == 0 )
          G4_VCALL<void>(v32, 16);
      }
      *(uint32_t *)(v31 + 4 * v30--) = 0;
    }
    while ( v30 != -1 );
  }
  v37 = *((uint32_t *)v1 + 24);
  *((uint32_t *)v1 + 23) = 0;
  if ( v37 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 22),
      4 * v37);
  v38 = *((uint32_t *)v1 + 20);
  *((uint32_t *)v1 + 22) = 0;
  v39 = v38 - 1;
  *((uint32_t *)v1 + 24) = 0x80000000;
  v40 = *((uint32_t *)v1 + 19);
  if ( v39 >= 0 )
  {
    do
    {
      v41 = *(uint32_t *)(v40 + 4 * v39);
      if ( v41 != 0 && *(uint16_t *)(v41 + 6) != 0 )
      {
        v92 = v39;
        do
        {
          v43 = *(uint32_t *)(v41 + 4);
          HIWORD(v42) = HIWORD(v43);
          LOWORD(v42) = 0;
          v44 = v42 | (uint16_t)(v43 - 1);
          v45 = v43;
        }
        while ( v45 != __sync_val_compare_and_swap((volatile int32_t *)(v41 + 4), v45, v44) );
        v39 = v92;
        if ( (uint16_t)v44 == 0 )
          G4_VCALL<void>(v41, 16);
      }
      *(uint32_t *)(v40 + 4 * v39--) = 0;
    }
    while ( v39 != -1 );
  }
  v46 = *((uint32_t *)v1 + 21);
  *((uint32_t *)v1 + 20) = 0;
  if ( v46 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 19),
      4 * v46);
  v47 = *((uint32_t *)v1 + 17);
  *((uint32_t *)v1 + 19) = 0;
  v48 = v47 - 1;
  *((uint32_t *)v1 + 21) = 0x80000000;
  v49 = *((uint32_t *)v1 + 16);
  if ( v48 >= 0 )
  {
    do
    {
      v50 = *(uint32_t *)(v49 + 4 * v48);
      if ( v50 != 0 && *(uint16_t *)(v50 + 6) != 0 )
      {
        v93 = v48;
        do
        {
          v52 = *(uint32_t *)(v50 + 4);
          HIWORD(v51) = HIWORD(v52);
          LOWORD(v51) = 0;
          v53 = v51 | (uint16_t)(v52 - 1);
          v54 = v52;
        }
        while ( v54 != __sync_val_compare_and_swap((volatile int32_t *)(v50 + 4), v54, v53) );
        v48 = v93;
        if ( (uint16_t)v53 == 0 )
          G4_VCALL<void>(v50, 16);
      }
      *(uint32_t *)(v49 + 4 * v48--) = 0;
    }
    while ( v48 != -1 );
  }
  v55 = *((uint32_t *)v1 + 18);
  *((uint32_t *)v1 + 17) = 0;
  if ( v55 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 16),
      4 * v55);
  v56 = *((uint32_t *)v1 + 14);
  *((uint32_t *)v1 + 16) = 0;
  v57 = v56 - 1;
  *((uint32_t *)v1 + 18) = 0x80000000;
  v58 = *((uint32_t *)v1 + 13);
  if ( v57 >= 0 )
  {
    do
    {
      v59 = *(uint32_t *)(v58 + 4 * v57);
      if ( v59 != 0 && *(uint16_t *)(v59 + 6) != 0 )
      {
        v94 = v57;
        do
        {
          v61 = *(uint32_t *)(v59 + 4);
          HIWORD(v60) = HIWORD(v61);
          LOWORD(v60) = 0;
          v62 = v60 | (uint16_t)(v61 - 1);
          v63 = v61;
        }
        while ( v63 != __sync_val_compare_and_swap((volatile int32_t *)(v59 + 4), v63, v62) );
        v57 = v94;
        if ( (uint16_t)v62 == 0 )
          G4_VCALL<void>(v59, 16);
      }
      *(uint32_t *)(v58 + 4 * v57--) = 0;
    }
    while ( v57 != -1 );
  }
  v64 = *((uint32_t *)v1 + 15);
  *((uint32_t *)v1 + 14) = 0;
  if ( v64 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 13),
      4 * v64);
  v65 = *((uint32_t *)v1 + 11);
  *((uint32_t *)v1 + 13) = 0;
  v66 = v65 - 1;
  *((uint32_t *)v1 + 15) = 0x80000000;
  v67 = *((uint32_t *)v1 + 10);
  if ( v66 >= 0 )
  {
    do
    {
      v68 = *(uint32_t *)(v67 + 4 * v66);
      if ( v68 != 0 && *(uint16_t *)(v68 + 6) != 0 )
      {
        v95 = v66;
        do
        {
          v70 = *(uint32_t *)(v68 + 4);
          HIWORD(v69) = HIWORD(v70);
          LOWORD(v69) = 0;
          v71 = v69 | (uint16_t)(v70 - 1);
          v72 = v70;
        }
        while ( v72 != __sync_val_compare_and_swap((volatile int32_t *)(v68 + 4), v72, v71) );
        v66 = v95;
        if ( (uint16_t)v71 == 0 )
          G4_VCALL<void>(v68, 16);
      }
      *(uint32_t *)(v67 + 4 * v66--) = 0;
    }
    while ( v66 != -1 );
  }
  v73 = *((uint32_t *)v1 + 12);
  *((uint32_t *)v1 + 11) = 0;
  if ( v73 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 10),
      4 * v73);
  v74 = *((uint32_t *)v1 + 8);
  *((uint32_t *)v1 + 10) = 0;
  v75 = v74 - 1;
  *((uint32_t *)v1 + 12) = 0x80000000;
  v76 = *((uint32_t *)v1 + 7);
  if ( v75 >= 0 )
  {
    do
    {
      v77 = *(uint32_t *)(v76 + 4 * v75);
      if ( v77 != 0 && *(uint16_t *)(v77 + 6) != 0 )
      {
        v96 = v75;
        do
        {
          v79 = *(uint32_t *)(v77 + 4);
          HIWORD(v78) = HIWORD(v79);
          LOWORD(v78) = 0;
          v80 = v78 | (uint16_t)(v79 - 1);
          v81 = v79;
        }
        while ( v81 != __sync_val_compare_and_swap((volatile int32_t *)(v77 + 4), v81, v80) );
        v75 = v96;
        if ( (uint16_t)v80 == 0 )
          G4_VCALL<void>(v77, 16);
      }
      *(uint32_t *)(v76 + 4 * v75--) = 0;
    }
    while ( v75 != -1 );
  }
  v82 = *((uint32_t *)v1 + 9);
  *((uint32_t *)v1 + 8) = 0;
  if ( v82 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 7),
      4 * v82);
  v83 = *((uint32_t *)v1 + 6);
  *((uint32_t *)v1 + 7) = 0;
  *((uint32_t *)v1 + 9) = 0x80000000;
  if ( v83 != 0 && *(uint16_t *)(v83 + 6) != 0 )
  {
    do
    {
      v85 = *(uint32_t *)(v83 + 4);
      HIWORD(v84) = HIWORD(v85);
      LOWORD(v84) = 0;
      v86 = v84 | (uint16_t)(v85 - 1);
      v87 = v85;
    }
    while ( v87 != __sync_val_compare_and_swap((volatile int32_t *)(v83 + 4), v87, v86) );
    if ( (uint16_t)v86 == 0 )
      G4_VCALL<void>(v83, 16);
  }
  *((uint32_t *)v1 + 6) = 0;
  hkStringPtr::Destroy((hkxScene::Self *)((char *)v1 + 12));
  hkStringPtr::Destroy((hkxScene::Self *)((char *)v1 + 8));
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkxScene::Destroy_ea187b5f0  (binary VA: 0x187b5f0)
// Original: hkxScene::~hkxScene
// ----------------------------------------------------------------------------
void hkxScene::Destroy_ea187b5f0(hkxScene::Self *self)
{
  int v1;
  int v2;

  hkxScene::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 192;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkxScene::Construct  (binary VA: 0x187b650)
// Original: hkxScene::hkxScene
// ----------------------------------------------------------------------------
void hkxScene::Construct(hkxScene::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A61F8);
  *((uint32_t *)self + 1) = -65535;
  hkStringPtr::Construct((hkxScene::Self *)((char *)self + 8));
  hkStringPtr::Construct((hkxScene::Self *)((char *)self + 12));
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0x80000000;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 36) = 1065353216;
  *((uint32_t *)self + 12) = 0x80000000;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0x80000000;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0x80000000;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0x80000000;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0x80000000;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 27) = 0x80000000;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 30) = 0x80000000;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 33) = 0x80000000;
  *((uint32_t *)self + 37) = 0;
  *((uint32_t *)self + 38) = 0;
  *((uint32_t *)self + 39) = 0;
  *((uint32_t *)self + 40) = 0;
  *((uint32_t *)self + 41) = 1065353216;
  *((uint32_t *)self + 42) = 0;
  *((uint32_t *)self + 43) = 0;
  *((uint32_t *)self + 44) = 0;
  *((uint32_t *)self + 45) = 0;
  *((uint32_t *)self + 46) = 1065353216;
  *((uint32_t *)self + 47) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkxScene::findNodeByName  (binary VA: 0x187b810)
// Original: hkxScene::findNodeByName
// ----------------------------------------------------------------------------
hkxNode::Self * hkxScene::findNodeByName(hkxScene::Self *self, char *a2)
{
  hkxNode::Self *result;

  if ( a2 == nullptr )
    return nullptr;
  result = *((hkxNode::Self **)self + 6);
  if ( result != nullptr )
  {
    if ( (*((uint32_t *)result + 5) & 0xFFFFFFFE) != 0 )
    {
      if ( hkString::strCasecmp((hkString::Self *)(*((uint32_t *)result + 5) & 0xFFFFFFFE), a2) == 0 )
        return *((hkxNode::Self **)self + 6);
      result = *((hkxNode::Self **)self + 6);
    }
    return hkxNode::findDescendantByName(result, a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkxScene::getFullPathToNode  (binary VA: 0x187b880)
// Original: hkxScene::getFullPathToNode
// ----------------------------------------------------------------------------
int * hkxScene::getFullPathToNode(int *a1, int a2, int a3, hkMemoryAllocator::Self *a4)
{
  hkxNode::getPathToNode(a1, *(uint32_t *)(a2 + 24), a3, a4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkxScene::getWorldFromNodeTransform  (binary VA: 0x187b8d0)
// Original: hkxScene::getWorldFromNodeTransform
// ----------------------------------------------------------------------------
hkxScene::Self * hkxScene::getWorldFromNodeTransform(hkxScene::Self *self, const hkxNode::Self *a2, hkMatrix4f::Self *a3, int32_t *a4, int a5)
{
  int32_t *v5;
  int v7;
  int v8;
  int v9;
  __m128 *v10;
  __m128 v11;
  __m128 v12;
  __m128 v13;
  __m128 v14;
  __m128 v15;
  __m128 v16;
  int32_t v17;
  __m128 v18;
  __m128 v19;
  int32_t v20;
  __m128 v21;
  __m128 v22;
  int32_t v23;
  __m128 v24;
  int32_t v25;
  int32_t v26;
  int32_t v27;
  int32_t v28;
  int32_t v29;
  int32_t v30;
  int32_t v31;
  __m128 v32;
  int32_t v33;
  bool v34; // cc
  typedef hkxScene::Self *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef __m128 _g4_t_v39;
  typedef __m128 _g4_t_v40;
  typedef __m128 _g4_t_v41;
  typedef __m128 _g4_t_v42;
  typedef int32_t _g4_t_v43;
  typedef unsigned int _g4_t_v44;
  typedef unsigned int _g4_t_v45;
  typedef unsigned int _g4_t_v46;
  typedef unsigned int _g4_t_v47;
  typedef unsigned int _g4_t_v48;
  typedef unsigned int _g4_t_v49;
  typedef unsigned int _g4_t_v50;
  typedef unsigned int _g4_t_v51;
  typedef unsigned int _g4_t_v52;
  typedef unsigned int _g4_t_v53;
  typedef unsigned int _g4_t_v54;
  typedef unsigned int _g4_t_v55;
  typedef unsigned int _g4_t_v56;
  typedef unsigned int _g4_t_v57;
  typedef unsigned int _g4_t_v58;
  typedef uint32_t *_g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef uint32_t _g4_t_v62[39];
  enum : size_t {
    _g4_s0 = 416u,
    _g4_s1 = (12u + sizeof(_g4_t_v35)) > _g4_s0 ? (12u + sizeof(_g4_t_v35)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v36)) > _g4_s1 ? (36u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v37)) > _g4_s2 ? (40u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v38)) > _g4_s3 ? (44u + sizeof(_g4_t_v38)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v39)) > _g4_s4 ? (48u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v40)) > _g4_s5 ? (64u + sizeof(_g4_t_v40)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v41)) > _g4_s6 ? (80u + sizeof(_g4_t_v41)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v42)) > _g4_s7 ? (96u + sizeof(_g4_t_v42)) : _g4_s7,
    _g4_s9 = (112u + sizeof(_g4_t_v43)) > _g4_s8 ? (112u + sizeof(_g4_t_v43)) : _g4_s8,
    _g4_s10 = (116u + sizeof(_g4_t_v44)) > _g4_s9 ? (116u + sizeof(_g4_t_v44)) : _g4_s9,
    _g4_s11 = (120u + sizeof(_g4_t_v45)) > _g4_s10 ? (120u + sizeof(_g4_t_v45)) : _g4_s10,
    _g4_s12 = (124u + sizeof(_g4_t_v46)) > _g4_s11 ? (124u + sizeof(_g4_t_v46)) : _g4_s11,
    _g4_s13 = (128u + sizeof(_g4_t_v47)) > _g4_s12 ? (128u + sizeof(_g4_t_v47)) : _g4_s12,
    _g4_s14 = (132u + sizeof(_g4_t_v48)) > _g4_s13 ? (132u + sizeof(_g4_t_v48)) : _g4_s13,
    _g4_s15 = (136u + sizeof(_g4_t_v49)) > _g4_s14 ? (136u + sizeof(_g4_t_v49)) : _g4_s14,
    _g4_s16 = (140u + sizeof(_g4_t_v50)) > _g4_s15 ? (140u + sizeof(_g4_t_v50)) : _g4_s15,
    _g4_s17 = (144u + sizeof(_g4_t_v51)) > _g4_s16 ? (144u + sizeof(_g4_t_v51)) : _g4_s16,
    _g4_s18 = (148u + sizeof(_g4_t_v52)) > _g4_s17 ? (148u + sizeof(_g4_t_v52)) : _g4_s17,
    _g4_s19 = (152u + sizeof(_g4_t_v53)) > _g4_s18 ? (152u + sizeof(_g4_t_v53)) : _g4_s18,
    _g4_s20 = (156u + sizeof(_g4_t_v54)) > _g4_s19 ? (156u + sizeof(_g4_t_v54)) : _g4_s19,
    _g4_s21 = (160u + sizeof(_g4_t_v55)) > _g4_s20 ? (160u + sizeof(_g4_t_v55)) : _g4_s20,
    _g4_s22 = (164u + sizeof(_g4_t_v56)) > _g4_s21 ? (164u + sizeof(_g4_t_v56)) : _g4_s21,
    _g4_s23 = (168u + sizeof(_g4_t_v57)) > _g4_s22 ? (168u + sizeof(_g4_t_v57)) : _g4_s22,
    _g4_s24 = (172u + sizeof(_g4_t_v58)) > _g4_s23 ? (172u + sizeof(_g4_t_v58)) : _g4_s23,
    _g4_s25 = (176u + sizeof(_g4_t_v59)) > _g4_s24 ? (176u + sizeof(_g4_t_v59)) : _g4_s24,
    _g4_s26 = (180u + sizeof(_g4_t_v60)) > _g4_s25 ? (180u + sizeof(_g4_t_v60)) : _g4_s25,
    _g4_s27 = (184u + sizeof(_g4_t_v61)) > _g4_s26 ? (184u + sizeof(_g4_t_v61)) : _g4_s26,
    _g4_s28 = (188u + sizeof(_g4_t_v62)) > _g4_s27 ? (188u + sizeof(_g4_t_v62)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 36u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 40u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 44u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 48u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 64u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 80u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 96u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 112u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 116u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 120u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 124u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 128u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 132u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 136u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 140u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 144u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 148u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 152u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 156u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 160u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 164u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 168u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 172u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 176u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 180u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 184u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 188u);

  v62[35] = (uint32_t)(uintptr_t)(&self);
  v5 = a4;
  v35 = self;
  v36 = a5;
  v59 = v62;
  v60 = 0;
  v61 = -2147483616;
  hkxScene::getFullPathToNode(&v38, (int)(uintptr_t)(a2), (int)(uintptr_t)(a3), (hkMemoryAllocator::Self *)&v59);
  if ( v38 != 0 )
  {
    *(uint32_t *)v35 = 1;
  }
  else
  {
    *v5 = 1065353216;
    v5[1] = 0;
    v5[2] = 0;
    v5[3] = 0;
    v5[4] = 0;
    v5[5] = 1065353216;
    v5[6] = 0;
    v5[7] = 0;
    v5[8] = 0;
    v5[9] = 0;
    v5[10] = 1065353216;
    v5[11] = 0;
    v5[12] = 0;
    v5[13] = 0;
    v5[14] = 0;
    v5[15] = 1065353216;
    v37 = 0;
    if ( v60 > 0 )
    {
      v7 = 0;
      do
      {
        v8 = v59[v7];
        v9 = *(uint32_t *)(v8 + 32) - 1;
        if ( *(uint32_t *)(v8 + 32) > v36 )
          v9 = v36;
        v10 = (__m128 *)(*(uint32_t *)(v8 + 28) + (v9 << 6));
        v43 = *v5;
        v44 = v5[1];
        v45 = v5[2];
        v46 = v5[3];
        v47 = v5[4];
        v48 = v5[5];
        v49 = v5[6];
        v50 = v5[7];
        v51 = v5[8];
        v52 = v5[9];
        v53 = v5[10];
        v54 = v5[11];
        v55 = v5[12];
        v56 = v5[13];
        v57 = v5[14];
        v58 = v5[15];
        hkMatrix4f::transpose((hkMatrix4f::Self *)&v43);
g4_m128_lane<uint64_t>(v11, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_to_m128((unsigned int)v43), G4_BITCAST<__m128>(v47)), 0);
g4_m128_lane<uint64_t>(v11, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(G4_BITCAST<__m128>(v51), G4_BITCAST<__m128>(v55)), 0);
g4_m128_lane<uint64_t>(v12, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(G4_BITCAST<__m128>(v44), G4_BITCAST<__m128>(v48)), 0);
g4_m128_lane<uint64_t>(v12, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(G4_BITCAST<__m128>(v52), G4_BITCAST<__m128>(v56)), 0);
g4_m128_lane<uint64_t>(v13, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(G4_BITCAST<__m128>(v45), G4_BITCAST<__m128>(v49)), 0);
g4_m128_lane<uint64_t>(v13, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(G4_BITCAST<__m128>(v53), G4_BITCAST<__m128>(v57)), 0);
g4_m128_lane<uint64_t>(v14, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(G4_BITCAST<__m128>(v46), G4_BITCAST<__m128>(v50)), 0);
        v15 = *v10;
g4_m128_lane<uint64_t>(v14, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(G4_BITCAST<__m128>(v54), G4_BITCAST<__m128>(v58)), 0);
        v16 = _mm_add_ps(
                _mm_mul_ps(_mm_shuffle_ps(v15, v15, 255), v14),
                _mm_add_ps(
                  _mm_mul_ps(_mm_shuffle_ps(v15, v15, 170), v13),
                  _mm_add_ps(
                    _mm_mul_ps(_mm_shuffle_ps(v15, v15, 85), v12),
                    _mm_mul_ps(_mm_shuffle_ps(v15, v15, 0), v11))));
        v17 =g4_m128_lane<int32_t>(v16, 0);
        v39 = v16;
        v18 = v10[1];
        v19 = _mm_add_ps(
                _mm_mul_ps(_mm_shuffle_ps(v18, v18, 255), v14),
                _mm_add_ps(
                  _mm_mul_ps(_mm_shuffle_ps(v18, v18, 170), v13),
                  _mm_add_ps(
                    _mm_mul_ps(_mm_shuffle_ps(v18, v18, 85), v12),
                    _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), v11))));
        v20 =g4_m128_lane<int32_t>(v19, 0);
        v40 = v19;
        v21 = v10[2];
        v22 = _mm_add_ps(
                _mm_mul_ps(_mm_shuffle_ps(v21, v21, 255), v14),
                _mm_add_ps(
                  _mm_mul_ps(_mm_shuffle_ps(v21, v21, 170), v13),
                  _mm_add_ps(
                    _mm_mul_ps(_mm_shuffle_ps(v21, v21, 85), v12),
                    _mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), v11))));
        v23 =g4_m128_lane<int32_t>(v22, 0);
        v41 = v22;
        v24 = v10[3];
        v5[8] = v23;
        v5[9] =g4_m128_lane<int32_t>(v41, 1);
        v25 =g4_m128_lane<int32_t>(v41, 2);
        *v5 = v17;
        v5[4] = v20;
        v26 =g4_m128_lane<int32_t>(v39, 1);
        v27 =g4_m128_lane<int32_t>(v40, 1);
        v5[10] = v25;
        v28 =g4_m128_lane<int32_t>(v41, 3);
        v5[1] = v26;
        v5[5] = v27;
        v29 =g4_m128_lane<int32_t>(v39, 2);
        v30 =g4_m128_lane<int32_t>(v40, 2);
        v5[11] = v28;
        v5[2] = v29;
        v5[6] = v30;
        v31 =g4_m128_lane<int32_t>(v40, 3);
        v5[3] =g4_m128_lane<int32_t>(v39, 3);
        v5[7] = v31;
        v32 = _mm_add_ps(
                _mm_mul_ps(_mm_shuffle_ps(v24, v24, 255), v14),
                _mm_add_ps(
                  _mm_mul_ps(_mm_shuffle_ps(v24, v24, 170), v13),
                  _mm_add_ps(
                    _mm_mul_ps(_mm_shuffle_ps(v24, v24, 85), v12),
                    _mm_mul_ps(v11, _mm_shuffle_ps(v24, v24, 0)))));
        v42 = v32;
        v5[13] =g4_m128_lane<int32_t>(v32, 1);
        v33 =g4_m128_lane<int32_t>(v42, 2);
        v5[12] =g4_m128_lane<int32_t>(v32, 0);
        v5[14] = v33;
        v7 = ++v37;
        v34 = v60 <= v37;
        v5[15] =g4_m128_lane<int32_t>(v42, 3);
      }
      while ( !v34 );
    }
    *(uint32_t *)v35 = 0;
  }
  v60 = 0;
  if ( v61 >= 0 )
    (*(void (**)(uint32_t *, uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v59,
      4 * v61);
  return v35;
}

// ----------------------------------------------------------------------------
// Function: hkxEnvironment::Variable::staticClass  (binary VA: 0x187bec0)
// Original: hkxEnvironment::Variable::staticClass
// ----------------------------------------------------------------------------
void * hkxEnvironment::Variable::staticClass()
{
  return &hkxEnvironmentVariableClass;
}

// ----------------------------------------------------------------------------
// Function: hkxEnvironment::staticClass  (binary VA: 0x187bee0)
// Original: hkxEnvironment::staticClass
// ----------------------------------------------------------------------------
void * hkxEnvironment::staticClass()
{
  return &hkxEnvironmentClass;
}

// ----------------------------------------------------------------------------
// Function: hkxMeshSection::Destroy  (binary VA: 0x187c0d0)
// Original: hkxMeshSection::~hkxMeshSection
// ----------------------------------------------------------------------------
void hkxMeshSection::Destroy(hkxMeshSection::Self *self)
{
  hkxMeshSection::Self *v1;
  int v2;
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int32_t v13; // kr00_4
  int32_t v14;
  int32_t v15; // ett
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int32_t v22; // kr04_4
  int32_t v23;
  int32_t v24; // ett
  int v25;
  int v26;
  int v27;
  int32_t v28; // kr08_4
  int32_t v29;
  int32_t v30; // ett
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int32_t v36; // kr0C_4
  int32_t v37;
  int32_t v38; // ett
  int v39;
  int v40;
  int v41;
  int32_t v42; // kr10_4
  int32_t v43;
  int32_t v44; // ett
  uint32_t *v45;
  int v46;
  int v47;
  int v48;

  v1 = self;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6300);
  v2 = *((uint32_t *)self + 17) - 1;
  if ( v2 >= 0 )
  {
    v3 = *((uint32_t *)self + 16) + 12 * *((uint32_t *)self + 17);
    v4 = (uint32_t *)(&hkContainerHeapAllocator::s_alloc);
    do
    {
      v5 = *(uint32_t *)(v3 - 4);
      *(uint32_t *)(v3 - 8) = 0;
      if ( v5 >= 0 )
      {
        v45 = v4;
        G4_VCALL<void>(v4, 20, *(uint32_t *)(v3 - 12), 2 * (v5 & 0x3FFFFFFF));
        v4 = v45;
      }
      --v2;
      *(uint32_t *)(v3 - 12) = 0;
      *(uint32_t *)(v3 - 4) = 0x80000000;
      v3 -= 12;
    }
    while ( v2 != -1 );
  }
  v6 = *((uint32_t *)self + 18);
  *((uint32_t *)self + 17) = 0;
  if ( v6 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 16),
      12 * v6);
  v7 = *((uint32_t *)self + 15);
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 18) = 0x80000000;
  *((uint32_t *)self + 14) = 0;
  if ( v7 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 13),
      4 * v7);
  v8 = *((uint32_t *)self + 11);
  *((uint32_t *)self + 13) = 0;
  v9 = v8 - 1;
  *((uint32_t *)self + 15) = 0x80000000;
  v10 = *((uint32_t *)self + 10);
  if ( v9 >= 0 )
  {
    do
    {
      v11 = *(uint32_t *)(v10 + 4 * v9);
      if ( v11 != 0 && *(uint16_t *)(v11 + 6) != 0 )
      {
        v46 = v9;
        do
        {
          v13 = *(uint32_t *)(v11 + 4);
          HIWORD(v12) = HIWORD(v13);
          LOWORD(v12) = 0;
          v14 = v12 | (uint16_t)(v13 - 1);
          v15 = v13;
        }
        while ( v15 != __sync_val_compare_and_swap((volatile int32_t *)(v11 + 4), v15, v14) );
        v9 = v46;
        if ( (uint16_t)v14 == 0 )
          G4_VCALL<void>(v11, 16);
      }
      *(uint32_t *)(v10 + 4 * v9--) = 0;
    }
    while ( v9 != -1 );
    v1 = self;
  }
  v16 = *((uint32_t *)v1 + 12);
  *((uint32_t *)v1 + 11) = 0;
  if ( v16 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 10),
      4 * v16);
  v17 = *((uint32_t *)v1 + 8);
  *((uint32_t *)v1 + 10) = 0;
  v18 = v17 - 1;
  *((uint32_t *)v1 + 12) = 0x80000000;
  v19 = *((uint32_t *)v1 + 7);
  if ( v18 >= 0 )
  {
    do
    {
      v20 = *(uint32_t *)(v19 + 4 * v18);
      if ( v20 != 0 && *(uint16_t *)(v20 + 6) != 0 )
      {
        v47 = v18;
        do
        {
          v22 = *(uint32_t *)(v20 + 4);
          HIWORD(v21) = HIWORD(v22);
          LOWORD(v21) = 0;
          v23 = v21 | (uint16_t)(v22 - 1);
          v24 = v22;
        }
        while ( v24 != __sync_val_compare_and_swap((volatile int32_t *)(v20 + 4), v24, v23) );
        v18 = v47;
        if ( (uint16_t)v23 == 0 )
          G4_VCALL<void>(v20, 16);
      }
      *(uint32_t *)(v19 + 4 * v18--) = 0;
    }
    while ( v18 != -1 );
  }
  v25 = *((uint32_t *)v1 + 9);
  *((uint32_t *)v1 + 8) = 0;
  if ( v25 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 7),
      4 * v25);
  v26 = *((uint32_t *)v1 + 6);
  *((uint32_t *)v1 + 7) = 0;
  *((uint32_t *)v1 + 9) = 0x80000000;
  if ( v26 != 0 && *(uint16_t *)(v26 + 6) != 0 )
  {
    do
    {
      v28 = *(uint32_t *)(v26 + 4);
      HIWORD(v27) = HIWORD(v28);
      LOWORD(v27) = 0;
      v29 = v27 | (uint16_t)(v28 - 1);
      v30 = v28;
    }
    while ( v30 != __sync_val_compare_and_swap((volatile int32_t *)(v26 + 4), v30, v29) );
    if ( (uint16_t)v29 == 0 )
      G4_VCALL<void>(v26, 16);
  }
  v31 = *((uint32_t *)v1 + 4);
  *((uint32_t *)v1 + 6) = 0;
  v32 = v31 - 1;
  v33 = *((uint32_t *)v1 + 3);
  if ( v32 >= 0 )
  {
    do
    {
      v34 = *(uint32_t *)(v33 + 4 * v32);
      if ( v34 != 0 && *(uint16_t *)(v34 + 6) != 0 )
      {
        v48 = v32;
        do
        {
          v36 = *(uint32_t *)(v34 + 4);
          HIWORD(v35) = HIWORD(v36);
          LOWORD(v35) = 0;
          v37 = v35 | (uint16_t)(v36 - 1);
          v38 = v36;
        }
        while ( v38 != __sync_val_compare_and_swap((volatile int32_t *)(v34 + 4), v38, v37) );
        v32 = v48;
        if ( (uint16_t)v37 == 0 )
          G4_VCALL<void>(v34, 16);
      }
      *(uint32_t *)(v33 + 4 * v32--) = 0;
    }
    while ( v32 != -1 );
  }
  v39 = *((uint32_t *)v1 + 5);
  *((uint32_t *)v1 + 4) = 0;
  if ( v39 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 3),
      4 * v39);
  v40 = *((uint32_t *)v1 + 2);
  *((uint32_t *)v1 + 3) = 0;
  *((uint32_t *)v1 + 5) = 0x80000000;
  if ( v40 != 0 && *(uint16_t *)(v40 + 6) != 0 )
  {
    do
    {
      v42 = *(uint32_t *)(v40 + 4);
      HIWORD(v41) = HIWORD(v42);
      LOWORD(v41) = 0;
      v43 = v41 | (uint16_t)(v42 - 1);
      v44 = v42;
    }
    while ( v44 != __sync_val_compare_and_swap((volatile int32_t *)(v40 + 4), v44, v43) );
    if ( (uint16_t)v43 == 0 )
      G4_VCALL<void>(v40, 16);
  }
  *((uint32_t *)v1 + 2) = 0;
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkxMeshSection::Destroy_ea187c460  (binary VA: 0x187c460)
// Original: hkxMeshSection::~hkxMeshSection
// ----------------------------------------------------------------------------
void hkxMeshSection::Destroy_ea187c460(hkxMeshSection::Self *self)
{
  hkxMeshSection::Self *v1;
  int v2;
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int32_t v13; // kr00_4
  int32_t v14;
  int32_t v15; // ett
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int32_t v22; // kr04_4
  int32_t v23;
  int32_t v24; // ett
  int v25;
  int v26;
  int v27;
  int32_t v28; // kr08_4
  int32_t v29;
  int32_t v30; // ett
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int32_t v36; // kr0C_4
  int32_t v37;
  int32_t v38; // ett
  int v39;
  int v40;
  int v41;
  int32_t v42; // kr10_4
  int32_t v43;
  int32_t v44; // ett
  int v45;
  int v46;
  uint32_t *v47;
  int v48;
  int v49;
  int v50;

  v1 = self;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6300);
  v2 = *((uint32_t *)self + 17) - 1;
  if ( v2 >= 0 )
  {
    v3 = *((uint32_t *)self + 16) + 12 * *((uint32_t *)self + 17);
    v4 = (uint32_t *)(&hkContainerHeapAllocator::s_alloc);
    do
    {
      v5 = *(uint32_t *)(v3 - 4);
      *(uint32_t *)(v3 - 8) = 0;
      if ( v5 >= 0 )
      {
        v47 = v4;
        G4_VCALL<void>(v4, 20, *(uint32_t *)(v3 - 12), 2 * (v5 & 0x3FFFFFFF));
        v4 = v47;
      }
      --v2;
      *(uint32_t *)(v3 - 12) = 0;
      *(uint32_t *)(v3 - 4) = 0x80000000;
      v3 -= 12;
    }
    while ( v2 != -1 );
  }
  v6 = *((uint32_t *)self + 18);
  *((uint32_t *)self + 17) = 0;
  if ( v6 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 16),
      12 * v6);
  v7 = *((uint32_t *)self + 15);
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 18) = 0x80000000;
  *((uint32_t *)self + 14) = 0;
  if ( v7 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 13),
      4 * v7);
  v8 = *((uint32_t *)self + 11);
  *((uint32_t *)self + 13) = 0;
  v9 = v8 - 1;
  *((uint32_t *)self + 15) = 0x80000000;
  v10 = *((uint32_t *)self + 10);
  if ( v9 >= 0 )
  {
    do
    {
      v11 = *(uint32_t *)(v10 + 4 * v9);
      if ( v11 != 0 && *(uint16_t *)(v11 + 6) != 0 )
      {
        v48 = v9;
        do
        {
          v13 = *(uint32_t *)(v11 + 4);
          HIWORD(v12) = HIWORD(v13);
          LOWORD(v12) = 0;
          v14 = v12 | (uint16_t)(v13 - 1);
          v15 = v13;
        }
        while ( v15 != __sync_val_compare_and_swap((volatile int32_t *)(v11 + 4), v15, v14) );
        v9 = v48;
        if ( (uint16_t)v14 == 0 )
          G4_VCALL<void>(v11, 16);
      }
      *(uint32_t *)(v10 + 4 * v9--) = 0;
    }
    while ( v9 != -1 );
    v1 = self;
  }
  v16 = *((uint32_t *)v1 + 12);
  *((uint32_t *)v1 + 11) = 0;
  if ( v16 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 10),
      4 * v16);
  v17 = *((uint32_t *)v1 + 8);
  *((uint32_t *)v1 + 10) = 0;
  v18 = v17 - 1;
  *((uint32_t *)v1 + 12) = 0x80000000;
  v19 = *((uint32_t *)v1 + 7);
  if ( v18 >= 0 )
  {
    do
    {
      v20 = *(uint32_t *)(v19 + 4 * v18);
      if ( v20 != 0 && *(uint16_t *)(v20 + 6) != 0 )
      {
        v49 = v18;
        do
        {
          v22 = *(uint32_t *)(v20 + 4);
          HIWORD(v21) = HIWORD(v22);
          LOWORD(v21) = 0;
          v23 = v21 | (uint16_t)(v22 - 1);
          v24 = v22;
        }
        while ( v24 != __sync_val_compare_and_swap((volatile int32_t *)(v20 + 4), v24, v23) );
        v18 = v49;
        if ( (uint16_t)v23 == 0 )
          G4_VCALL<void>(v20, 16);
      }
      *(uint32_t *)(v19 + 4 * v18--) = 0;
    }
    while ( v18 != -1 );
  }
  v25 = *((uint32_t *)v1 + 9);
  *((uint32_t *)v1 + 8) = 0;
  if ( v25 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 7),
      4 * v25);
  v26 = *((uint32_t *)v1 + 6);
  *((uint32_t *)v1 + 7) = 0;
  *((uint32_t *)v1 + 9) = 0x80000000;
  if ( v26 != 0 && *(uint16_t *)(v26 + 6) != 0 )
  {
    do
    {
      v28 = *(uint32_t *)(v26 + 4);
      HIWORD(v27) = HIWORD(v28);
      LOWORD(v27) = 0;
      v29 = v27 | (uint16_t)(v28 - 1);
      v30 = v28;
    }
    while ( v30 != __sync_val_compare_and_swap((volatile int32_t *)(v26 + 4), v30, v29) );
    if ( (uint16_t)v29 == 0 )
      G4_VCALL<void>(v26, 16);
  }
  v31 = *((uint32_t *)v1 + 4);
  *((uint32_t *)v1 + 6) = 0;
  v32 = v31 - 1;
  v33 = *((uint32_t *)v1 + 3);
  if ( v32 >= 0 )
  {
    do
    {
      v34 = *(uint32_t *)(v33 + 4 * v32);
      if ( v34 != 0 && *(uint16_t *)(v34 + 6) != 0 )
      {
        v50 = v32;
        do
        {
          v36 = *(uint32_t *)(v34 + 4);
          HIWORD(v35) = HIWORD(v36);
          LOWORD(v35) = 0;
          v37 = v35 | (uint16_t)(v36 - 1);
          v38 = v36;
        }
        while ( v38 != __sync_val_compare_and_swap((volatile int32_t *)(v34 + 4), v38, v37) );
        v32 = v50;
        if ( (uint16_t)v37 == 0 )
          G4_VCALL<void>(v34, 16);
      }
      *(uint32_t *)(v33 + 4 * v32--) = 0;
    }
    while ( v32 != -1 );
  }
  v39 = *((uint32_t *)v1 + 5);
  *((uint32_t *)v1 + 4) = 0;
  if ( v39 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 3),
      4 * v39);
  v40 = *((uint32_t *)v1 + 2);
  *((uint32_t *)v1 + 3) = 0;
  *((uint32_t *)v1 + 5) = 0x80000000;
  if ( v40 != 0 && *(uint16_t *)(v40 + 6) != 0 )
  {
    do
    {
      v42 = *(uint32_t *)(v40 + 4);
      HIWORD(v41) = HIWORD(v42);
      LOWORD(v41) = 0;
      v43 = v41 | (uint16_t)(v42 - 1);
      v44 = v42;
    }
    while ( v44 != __sync_val_compare_and_swap((volatile int32_t *)(v40 + 4), v44, v43) );
    if ( (uint16_t)v43 == 0 )
      G4_VCALL<void>(v40, 16);
  }
  *((uint32_t *)v1 + 2) = 0;
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_2054CB8);
  v45 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v46 = 76;
  if ( *((uint16_t *)v1 + 3) != 0xFFFF )
    v46 = *((uint16_t *)v1 + 3);
  G4_VCALL<void>(v45, 12, v1, v46);
}

// ----------------------------------------------------------------------------
// Function: hkxMeshSection::staticClass  (binary VA: 0x187c820)
// Original: hkxMeshSection::staticClass
// ----------------------------------------------------------------------------
void * hkxMeshSection::staticClass()
{
  return &hkxMeshSectionClass;
}

// ----------------------------------------------------------------------------
// Function: hkxMeshSection::Construct  (binary VA: 0x187c910)
// Original: hkxMeshSection::hkxMeshSection
// ----------------------------------------------------------------------------
void hkxMeshSection::Construct(hkxMeshSection::Self *self, const hkxMeshSection::Self *a2)
{
  const hkxMeshSection::Self *v2;
  hkxMeshSection::Self *v3;
  const hkxMeshSection::Self *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int32_t v10; // kr00_4
  const hkxMeshSection::Self *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int32_t v17; // kr04_4
  int v18;
  int v19;
  int v20;
  int32_t v21; // kr08_4
  int32_t v22;
  int32_t v23; // ett
  int v24;
  int v25;
  int v26;
  int32_t v27; // kr0C_4
  int32_t v28;
  int32_t v29; // ett
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  uint32_t *v36;
  int v37;
  int v38;
  int v39;
  uint32_t *v40;
  uint32_t *v41;
  unsigned int *v42;
  int *v43;
  int v44;
  unsigned int v45;
  int v46;
  unsigned int v47;
  unsigned int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int32_t v53; // kr10_4
  int v54;
  int32_t v55; // kr14_4
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef hkxMeshSection::Self *_g4_t_v58;
  typedef const hkxMeshSection::Self *_g4_t_v59;
  typedef const hkxMeshSection::Self *_g4_t_v60;
  typedef unsigned int _g4_t_v61;
  typedef const hkxMeshSection::Self *_g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef unsigned int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef unsigned int _g4_t_v67;
  typedef uint32_t *_g4_t_v68;
  typedef const hkxMeshSection::Self *_g4_t_v69;
  typedef uint32_t *_g4_t_v70;
  typedef const hkxMeshSection::Self *_g4_t_v71;
  typedef int _g4_t_v72;
  typedef int *_g4_t_v73;
  typedef int *_g4_t_v74;
  typedef int *_g4_t_v75;
  typedef uint32_t *_g4_t_v76;
  typedef int _g4_t_v77;
  typedef uint32_t _g4_t_v78[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v56)) > _g4_s0 ? (0u + sizeof(_g4_t_v56)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v57)) > _g4_s1 ? (16u + sizeof(_g4_t_v57)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v58)) > _g4_s2 ? (20u + sizeof(_g4_t_v58)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v59)) > _g4_s3 ? (24u + sizeof(_g4_t_v59)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v60)) > _g4_s4 ? (24u + sizeof(_g4_t_v60)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v61)) > _g4_s5 ? (24u + sizeof(_g4_t_v61)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v62)) > _g4_s6 ? (28u + sizeof(_g4_t_v62)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v63)) > _g4_s7 ? (32u + sizeof(_g4_t_v63)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v64)) > _g4_s8 ? (32u + sizeof(_g4_t_v64)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v65)) > _g4_s9 ? (32u + sizeof(_g4_t_v65)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v66)) > _g4_s10 ? (36u + sizeof(_g4_t_v66)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v67)) > _g4_s11 ? (40u + sizeof(_g4_t_v67)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v68)) > _g4_s12 ? (40u + sizeof(_g4_t_v68)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v69)) > _g4_s13 ? (40u + sizeof(_g4_t_v69)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v70)) > _g4_s14 ? (40u + sizeof(_g4_t_v70)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v71)) > _g4_s15 ? (40u + sizeof(_g4_t_v71)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v72)) > _g4_s16 ? (40u + sizeof(_g4_t_v72)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v73)) > _g4_s17 ? (40u + sizeof(_g4_t_v73)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v74)) > _g4_s18 ? (44u + sizeof(_g4_t_v74)) : _g4_s18,
    _g4_s20 = (44u + sizeof(_g4_t_v75)) > _g4_s19 ? (44u + sizeof(_g4_t_v75)) : _g4_s19,
    _g4_s21 = (44u + sizeof(_g4_t_v76)) > _g4_s20 ? (44u + sizeof(_g4_t_v76)) : _g4_s20,
    _g4_s22 = (44u + sizeof(_g4_t_v77)) > _g4_s21 ? (44u + sizeof(_g4_t_v77)) : _g4_s21,
    _g4_s23 = (48u + sizeof(_g4_t_v78)) > _g4_s22 ? (48u + sizeof(_g4_t_v78)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 0u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 16u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 20u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 24u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 24u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 24u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 28u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 32u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 32u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 32u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 36u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 40u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 40u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 40u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 40u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 40u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 40u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 40u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 44u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 44u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 44u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 44u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 48u);

  v78[3] = (uint32_t)(uintptr_t)(&self);
  v2 = a2;
  v3 = self;
  v58 = self;
  v62 = a2;
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)v3 + 2) = 0;
  *(uint32_t *)v3 = ((uint32_t)(uintptr_t)&off_20A6300);
  *((uint32_t *)v3 + 3) = 0;
  *((uint32_t *)v3 + 4) = 0;
  *((uint32_t *)v3 + 5) = 0x80000000;
  *((uint32_t *)v3 + 6) = 0;
  *((uint32_t *)v3 + 7) = 0;
  *((uint32_t *)v3 + 8) = 0;
  *((uint32_t *)v3 + 9) = 0x80000000;
  *((uint32_t *)v3 + 10) = 0;
  *((uint32_t *)v3 + 11) = 0;
  *((uint32_t *)v3 + 12) = 0x80000000;
  *((uint32_t *)v3 + 13) = 0;
  *((uint32_t *)v3 + 14) = 0;
  *((uint32_t *)v3 + 15) = 0x80000000;
  *((uint32_t *)v3 + 16) = 0;
  *((uint32_t *)v3 + 17) = 0;
  *((uint32_t *)v3 + 18) = 0x80000000;
  if ( *((int *)v2 + 4) > 0 )
  {
    v4 = v2;
    v5 = 0;
    v67 = 0x80000000;
    v6 = 0;
    while ( 1 )
    {
      v74 = (int *)(*((uint32_t *)v4 + 3) + 4 * v5);
      if ( (v67 & 0x3FFFFFFF) == v6 )
      {
        v69 = v4;
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkxMeshSection::Self *)((char *)v58 + 12),
          4,
          v56);
        v6 = *((uint32_t *)v58 + 4);
        v4 = v69;
      }
      v68 = (uint32_t *)(*((uint32_t *)v58 + 3) + 4 * v6);
      v7 = *v74;
      if ( *v74 != 0 )
      {
        v8 = *v74;
        if ( *(uint16_t *)(v7 + 6) != 0 )
        {
          v63 = *v74;
          v59 = v4;
          do
          {
            v10 = *(uint32_t *)(v63 + 4);
            HIWORD(v9) = HIWORD(v10);
            LOWORD(v9) = 0;
          }
          while ( v10 != __sync_val_compare_and_swap(
                           (volatile int32_t *)(v7 + 4),
                           v10,
                           v9 | (uint16_t)(v10 + 1)) );
          v4 = v59;
          v8 = *v74;
        }
      }
      else
      {
        v8 = 0;
      }
      ++v5;
      *v68 = v8;
      v6 = *((uint32_t *)v58 + 4) + 1;
      *((uint32_t *)v58 + 4) = v6;
      if ( *((uint32_t *)v4 + 4) <= v5 )
        break;
      v67 = *((uint32_t *)v58 + 5);
    }
  }
  if ( *((int *)v62 + 8) > 0 )
  {
    v11 = v62;
    v12 = 0;
    v13 = *((uint32_t *)v58 + 8);
    do
    {
      v75 = (int *)(*((uint32_t *)v11 + 7) + 4 * v12);
      if ( (*((uint32_t *)v58 + 9) & 0x3FFFFFFF) == v13 )
      {
        v71 = v11;
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkxMeshSection::Self *)((char *)v58 + 28),
          4,
          v56);
        v13 = *((uint32_t *)v58 + 8);
        v11 = v71;
      }
      v70 = (uint32_t *)(*((uint32_t *)v58 + 7) + 4 * v13);
      v14 = *v75;
      if ( *v75 != 0 )
      {
        v15 = *v75;
        if ( *(uint16_t *)(v14 + 6) != 0 )
        {
          v64 = *v75;
          v60 = v11;
          do
          {
            v17 = *(uint32_t *)(v64 + 4);
            HIWORD(v16) = HIWORD(v17);
            LOWORD(v16) = 0;
          }
          while ( v17 != __sync_val_compare_and_swap(
                           (volatile int32_t *)(v14 + 4),
                           v17,
                           v16 | (uint16_t)(v17 + 1)) );
          v11 = v60;
          v15 = *v75;
        }
      }
      else
      {
        v15 = 0;
      }
      ++v12;
      *v70 = v15;
      v13 = *((uint32_t *)v58 + 8) + 1;
      *((uint32_t *)v58 + 8) = v13;
    }
    while ( *((uint32_t *)v11 + 8) > v12 );
  }
  v18 = *((uint32_t *)v62 + 6);
  if ( v18 != 0 && *(uint16_t *)(v18 + 6) != 0 )
  {
    do
    {
      v55 = *(uint32_t *)(v18 + 4);
      HIWORD(v54) = HIWORD(v55);
      LOWORD(v54) = 0;
    }
    while ( v55 != __sync_val_compare_and_swap(
                     (volatile int32_t *)(v18 + 4),
                     v55,
                     v54 | (uint16_t)(v55 + 1)) );
  }
  v19 = *((uint32_t *)v58 + 6);
  if ( v19 != 0 && *(uint16_t *)(v19 + 6) != 0 )
  {
    do
    {
      v21 = *(uint32_t *)(v19 + 4);
      HIWORD(v20) = HIWORD(v21);
      LOWORD(v20) = 0;
      v22 = v20 | (uint16_t)(v21 - 1);
      v23 = v21;
    }
    while ( v23 != __sync_val_compare_and_swap((volatile int32_t *)(v19 + 4), v23, v22) );
    if ( (uint16_t)v22 == 0 )
      G4_VCALL<void>(v19, 16);
  }
  *((uint32_t *)v58 + 6) = *((uint32_t *)v62 + 6);
  v24 = *((uint32_t *)v62 + 2);
  if ( v24 != 0 && *(uint16_t *)(v24 + 6) != 0 )
  {
    do
    {
      v53 = *(uint32_t *)(v24 + 4);
      HIWORD(v52) = HIWORD(v53);
      LOWORD(v52) = 0;
    }
    while ( v53 != __sync_val_compare_and_swap(
                     (volatile int32_t *)(v24 + 4),
                     v53,
                     v52 | (uint16_t)(v53 + 1)) );
  }
  v25 = *((uint32_t *)v58 + 2);
  if ( v25 != 0 && *(uint16_t *)(v25 + 6) != 0 )
  {
    do
    {
      v27 = *(uint32_t *)(v25 + 4);
      HIWORD(v26) = HIWORD(v27);
      LOWORD(v26) = 0;
      v28 = v26 | (uint16_t)(v27 - 1);
      v29 = v27;
    }
    while ( v29 != __sync_val_compare_and_swap((volatile int32_t *)(v25 + 4), v29, v28) );
    if ( (uint16_t)v28 == 0 )
      G4_VCALL<void>(v25, 16);
  }
  *((uint32_t *)v58 + 2) = *((uint32_t *)v62 + 2);
  v30 = *((uint32_t *)v62 + 17);
  v72 = v30;
  v31 = *((uint32_t *)v58 + 18) & 0x3FFFFFFF;
  if ( v30 > v31 )
  {
    v32 = 2 * v31;
    if ( v32 < v30 )
      v32 = *((uint32_t *)v62 + 17);
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v78,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)v58 + 16,
      v32,
      12);
  }
  v33 = *((uint32_t *)v58 + 17);
  v34 = *((uint32_t *)v58 + 16);
  v35 = v33 - v30 - 1;
  if ( v35 >= 0 )
  {
    v36 = (uint32_t *)(&hkContainerHeapAllocator::s_alloc);
    v37 = v34 + 12 * v72 + 12 * (*((uint32_t *)v58 + 17) - v72);
    do
    {
      v38 = *(uint32_t *)(v37 - 4);
      *(uint32_t *)(v37 - 8) = 0;
      if ( v38 >= 0 )
      {
        v76 = v36;
        G4_VCALL<void>(v36, 20, *(uint32_t *)(v37 - 12), 2 * (v38 & 0x3FFFFFFF));
        v36 = v76;
      }
      --v35;
      *(uint32_t *)(v37 - 12) = 0;
      *(uint32_t *)(v37 - 4) = 0x80000000;
      v37 -= 12;
    }
    while ( v35 != -1 );
    v33 = *((uint32_t *)v58 + 17);
    v34 = *((uint32_t *)v58 + 16);
  }
  v39 = v72 - v33;
  v40 = (uint32_t *)(v34 + 12 * v33);
  if ( v39 > 0 )
  {
    v41 = &v40[3 * v39];
    do
    {
      *v40 = 0;
      v40[1] = 0;
      v40[2] = 0x80000000;
      v40 += 3;
    }
    while ( v40 != v41 );
  }
  v66 = 0;
  *((uint32_t *)v58 + 17) = v72;
  if ( *((int *)v62 + 17) > 0 )
  {
    while ( 1 )
    {
      v42 = (unsigned int *)(12 * v66 + *((uint32_t *)v62 + 16));
      v43 = (int *)(*((uint32_t *)v58 + 16) + 12 * v66);
      v73 = v43;
      v43[1] = 0;
      v44 = v42[1];
      v45 = *v42;
      v46 = v43[2] & 0x3FFFFFFF;
      if ( v44 > v46 )
        break;
      v47 = *v43;
      v65 = *v43;
      if ( v44 > 0 )
        goto LABEL_54;
LABEL_66:
      ++v66;
      v73[1] = v44;
      if ( *((uint32_t *)v62 + 17) <= v66 )
        return;
    }
    v51 = 2 * v46;
    if ( v51 < v44 )
      v51 = v44;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v78, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v43, v51, 2);
    v47 = v73[1] + v73[1] + *v73;
    v65 = v47;
LABEL_54:
    if ( (v47 >= v45 + 16 || v45 >= v47 + 16) && (unsigned int)v44 > 0xA )
    {
      v57 = v44;
      v61 = 0;
      v48 = (unsigned int)v44 >> 3;
      v77 = 8 * ((unsigned int)v44 >> 3);
      v49 = 0;
      do
      {
        ++v61;
        *(__m128i *)(v47 + v49) = *(__m128i *)(v45 + v49);
        v49 += 16;
      }
      while ( v61 < v48 );
      v44 = v57;
      if ( v57 != v77 )
      {
        *(uint16_t *)(v65 + 2 * v77) = *(uint16_t *)(v45 + 2 * v77);
        if ( v57 > v77 + 1 )
        {
          *(uint16_t *)(v65 + 2 * (v77 + 1)) = *(uint16_t *)(v45 + 2 * (v77 + 1));
          if ( v57 > v77 + 2 )
          {
            *(uint16_t *)(v65 + 2 * (v77 + 2)) = *(uint16_t *)(v45 + 2 * (v77 + 2));
            if ( v57 > v77 + 3 )
            {
              *(uint16_t *)(v65 + 2 * (v77 + 3)) = *(uint16_t *)(v45 + 2 * (v77 + 3));
              if ( v57 > v77 + 4 )
              {
                *(uint16_t *)(v65 + 2 * (v77 + 4)) = *(uint16_t *)(v45 + 2 * (v77 + 4));
                if ( v57 > v77 + 5 )
                {
                  *(uint16_t *)(v65 + 2 * (v77 + 5)) = *(uint16_t *)(v45 + 2 * (v77 + 5));
                  if ( v57 > v77 + 6 )
                    *(uint16_t *)(v65 + 2 * (v77 + 6)) = *(uint16_t *)(v45 + 2 * (v77 + 6));
                }
              }
            }
          }
        }
      }
    }
    else
    {
      v50 = 0;
      do
      {
        *(uint16_t *)(v65 + 2 * v50) = *(uint16_t *)(v45 + 2 * v50);
        ++v50;
      }
      while ( v50 != v44 );
    }
    goto LABEL_66;
  }
}

// ----------------------------------------------------------------------------
// Function: hkxMeshSection::getNumTriangles  (binary VA: 0x187cfa0)
// Original: hkxMeshSection::getNumTriangles
// ----------------------------------------------------------------------------
int hkxMeshSection::getNumTriangles(hkxMeshSection::Self *self)
{
  int v1;
  int v2;
  hkxIndexBuffer::Self *v3;

  if ( *((int *)self + 4) <= 0 )
    return 0;
  v1 = 0;
  v2 = 0;
  do
  {
    v3 = *(hkxIndexBuffer::Self **)(*((uint32_t *)self + 3) + 4 * v1++);
    v2 += hkxIndexBuffer::getNumTriangles(v3);
  }
  while ( *((uint32_t *)self + 4) > v1 );
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkxMeshSection::getTriangleIndices  (binary VA: 0x187d000)
// Original: hkxMeshSection::getTriangleIndices
// ----------------------------------------------------------------------------
void hkxMeshSection::getTriangleIndices(hkxMeshSection::Self *self, unsigned int a2, unsigned int *a3, unsigned int *a4, unsigned int *a5)
{
  int v5;
  hkxIndexBuffer::Self *v6;
  unsigned int v7;
  unsigned int v8;

  v5 = 0;
  v8 = 0;
  if ( *((int *)self + 4) > 0 )
  {
    while ( 1 )
    {
      v6 = *(hkxIndexBuffer::Self **)(*((uint32_t *)self + 3) + 4 * v5);
      v7 = v8 + hkxIndexBuffer::getNumTriangles(v6);
      if ( v7 > a2 )
        break;
      if ( *((uint32_t *)self + 4) <= ++v5 )
        return;
      v8 = v7;
    }
    hkxIndexBuffer::getTriangleIndices(v6, a2 - v8, a3, a4, a5);
  }
}

// ----------------------------------------------------------------------------
// Function: hkxMeshSection::collectVertexPositions  (binary VA: 0x187d090)
// Original: hkxMeshSection::collectVertexPositions
// ----------------------------------------------------------------------------
hkxVertexBuffer::Self * hkxMeshSection::collectVertexPositions(hkxMeshSection::Self *self, hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *a2)
{
  hkxVertexBuffer::Self *result;
  hkxVertexBuffer::Self *v3;
  int v4;
  uint32_t *v5;
  uint32_t *VertexDataPtr;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13; // xmm0_4
  int v14;
  typedef hkxVertexBuffer::Self *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef char *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef hkxVertexBuffer::Self *_g4_t_v21;
  typedef uint32_t _g4_t_v22[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v16)) > _g4_s1 ? (0u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v17)) > _g4_s2 ? (4u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v18)) > _g4_s3 ? (8u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v19)) > _g4_s4 ? (8u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v20)) > _g4_s5 ? (12u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v21)) > _g4_s6 ? (12u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v22)) > _g4_s7 ? (16u + sizeof(_g4_t_v22)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);

  v22[3] = (uint32_t)(uintptr_t)(&self);
  v17 = (int *)a2;
  result = *((hkxVertexBuffer::Self **)self + 2);
  v15 = result;
  if ( result != nullptr )
  {
    v20 = *((uint32_t *)result + 24);
    if ( v20 > 0 )
    {
      v3 = *((hkxVertexBuffer::Self **)result + 23);
      if ( *((uint16_t *)v3 + 3) == 1 )
      {
LABEL_8:
        result = *((hkxVertexBuffer::Self **)v15 + 17);
        v21 = result;
        if ( v3 != nullptr && (int)(uintptr_t)(result) > 0 )
        {
          VertexDataPtr = (uint32_t *)hkxVertexBuffer::getVertexDataPtr(v15, v3);
          v7 = *((uint32_t *)v3 + 2);
          v8 = v17[1];
          v9 = (int)(uintptr_t)(v21) + v8;
          v10 = v17[2] & 0x3FFFFFFF;
          if ( (int)(uintptr_t)(v21) + v8 > v10 )
          {
            v14 = 2 * v10;
            v16 = v17[1];
            if ( v14 < v9 )
              v14 = (int)(uintptr_t)(v21) + v17[1];
            v19 = (char *)v21 + v17[1];
            hkArrayUtil::reserve(
              (hkArrayUtil::Self *)v22,
              (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
              v17,
              v14,
              16);
            v8 = v16;
            v9 = (int)(uintptr_t)(v19);
          }
          v11 = 16 * v8;
          v17[1] = v9;
          v12 = 0;
          do
          {
            ++v12;
            result = (hkxVertexBuffer::Self *)(v11 + *v17);
            *(uint32_t *)result = *VertexDataPtr;
            v11 += 16;
            *((uint32_t *)result + 1) = VertexDataPtr[1];
            *((uint32_t *)result + 2) = VertexDataPtr[2];
            v13 = VertexDataPtr[3];
            VertexDataPtr = (uint32_t *)((char *)VertexDataPtr + v7);
            *((uint32_t *)result + 3) = v13;
          }
          while ( v12 < (int)(uintptr_t)(v21) );
        }
      }
      else
      {
        v4 = 0;
        v5 = (uint32_t *)((char *)v3 + 20);
        v18 = *((uint32_t *)result + 23);
        result = (hkxVertexBuffer::Self *)((char *)v3 + 20);
        while ( ++v4 != v20 )
        {
          v3 = result;
          result = (hkxVertexBuffer::Self *)((char *)result + 20);
          if ( *(uint16_t *)((char *)result + (uint32_t)(uintptr_t)(v5) - v18 - 34) == 1 )
            goto LABEL_8;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkxMeshSection::appendGeometry  (binary VA: 0x187d1f0)
// Original: hkxMeshSection::appendGeometry
// ----------------------------------------------------------------------------
int hkxMeshSection::appendGeometry(hkxMeshSection::Self *self, hkGeometry::Self *a2, int a3)
{
  int result;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  char v11;
  int v12;
  int v13;
  uint16_t *v14;
  int *v15;
  typedef char *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef bool _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24[3];
  typedef int _g4_t_v25[135];
  enum : size_t {
    _g4_s0 = 672u,
    _g4_s1 = (12u + sizeof(_g4_t_v16)) > _g4_s0 ? (12u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v17)) > _g4_s1 ? (16u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v18)) > _g4_s2 ? (24u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v19)) > _g4_s3 ? (28u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v20)) > _g4_s4 ? (32u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (39u + sizeof(_g4_t_v21)) > _g4_s5 ? (39u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v22)) > _g4_s6 ? (40u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v23)) > _g4_s7 ? (44u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v24)) > _g4_s8 ? (52u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v25)) > _g4_s9 ? (64u + sizeof(_g4_t_v25)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 39u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 64u);

  hkxMeshSection::collectVertexPositions(self, (hkGeometry::Self *)((char *)a2 + 8));
  v22 = 0;
  result = *((uint32_t *)self + 4);
  if ( result <= 0 )
    return result;
  do
  {
    v4 = *(uint32_t *)(*((uint32_t *)self + 3) + 4 * v22);
    v5 = *(uint32_t *)(v4 + 16);
    v21 = v5 > 0;
    v18 = *(uint32_t *)(v4 + 28) | v5;
    if ( v18 <= 0 )
      goto LABEL_16;
    v6 = 0;
    while ( 1 )
    {
      v11 = *(uint8_t *)(v4 + 8);
      if ( v11 == 1 )
      {
        if ( v21 )
        {
          v12 = *(uint32_t *)(v4 + 12);
          v20 = *(uint16_t *)(v12 + 2 * v6);
          v19 = *(uint16_t *)(v12 + 2 * v6 + 2);
          v9 = *(uint16_t *)(v12 + 2 * v6 + 4);
        }
        else
        {
          v13 = *(uint32_t *)(v4 + 24);
          v20 = *(uint32_t *)(v13 + 4 * v6);
          v19 = *(uint32_t *)(v13 + 4 * v6 + 4);
          v9 = *(uint32_t *)(v13 + 4 * v6 + 8);
        }
        v7 = *((uint32_t *)a2 + 6);
        v6 += 3;
        if ( (*((uint32_t *)a2 + 7) & 0x3FFFFFFF) != v7 )
          goto LABEL_10;
LABEL_21:
        v23 = v4;
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkGeometry::Self *)((char *)a2 + 20),
          &word_10,
          v16);
        v7 = *((uint32_t *)a2 + 6);
        v4 = v23;
        goto LABEL_10;
      }
      if ( v11 != 2 )
        break;
      if ( v6 <= 1 )
      {
        ++v6;
        goto LABEL_11;
      }
      if ( v6 == 2 )
      {
        if ( v21 )
        {
          v14 = *(uint16_t **)(v4 + 12);
          v20 = *v14;
          v19 = v14[1];
          v9 = v14[2];
        }
        else
        {
          v15 = *(int **)(v4 + 24);
          v20 = *v15;
          v19 = v15[1];
          v9 = v15[2];
        }
        v7 = *((uint32_t *)a2 + 6);
        v6 = 3;
      }
      else
      {
        v7 = *((uint32_t *)a2 + 6);
        v8 = *((uint32_t *)a2 + 5) + 16 * (v7 - 1);
        v20 = *(uint32_t *)(v8 + 8);
        v19 = *(uint32_t *)(v8 + 4);
        if ( v21 )
          v9 = *(uint16_t *)(*(uint32_t *)(v4 + 12) + 2 * v6);
        else
          v9 = *(uint32_t *)(*(uint32_t *)(v4 + 24) + 4 * v6);
        ++v6;
      }
      if ( (*((uint32_t *)a2 + 7) & 0x3FFFFFFF) == v7 )
        goto LABEL_21;
LABEL_10:
      v10 = (uint32_t *)(*((uint32_t *)a2 + 5) + 16 * v7);
      *v10 = v20;
      v10[1] = v19;
      v10[2] = v9;
      v10[3] = a3;
      ++*((uint32_t *)a2 + 6);
LABEL_11:
      if ( v18 <= v6 )
        goto LABEL_15;
    }
    hkErrStream::Construct((hkErrStream::Self *)v24, (hkString::Self *)v25, 512);
    hkOstream::opShl((int)(uintptr_t)(v24), (hkString::Self *)"Unsupported index buffer type - Ignoring");
    hkError::messageWarning(
      (hkError::Self *)0xABBAA883,
      (int)(uintptr_t)(v25),
      "Mesh/hkxMeshSection.cpp",
      (const char *)&dword_98 + 3,
      v17);
    hkErrStream::Destroy((hkErrStream::Self *)v24);
LABEL_15:
    result = *((uint32_t *)self + 4);
LABEL_16:
    ++v22;
  }
  while ( v22 < result );
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkxSparselyAnimatedBool::Destroy  (binary VA: 0x187d4d0)
// Original: hkxSparselyAnimatedBool::~hkxSparselyAnimatedBool
// ----------------------------------------------------------------------------
void hkxSparselyAnimatedBool::Destroy(hkxSparselyAnimatedBool::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6328);
  v1 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 6) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 5),
      4 * v1);
  v2 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  *((uint32_t *)self + 3) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      v2 & 0x3FFFFFFF);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkxSparselyAnimatedBool::Destroy_ea187d580  (binary VA: 0x187d580)
// Original: hkxSparselyAnimatedBool::~hkxSparselyAnimatedBool
// ----------------------------------------------------------------------------
void hkxSparselyAnimatedBool::Destroy_ea187d580(hkxSparselyAnimatedBool::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6328);
  v1 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 6) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 5),
      4 * v1);
  v2 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  *((uint32_t *)self + 3) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      v2 & 0x3FFFFFFF);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v3 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v4 = 32;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v4 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v3, 12, self, v4);
}

// ----------------------------------------------------------------------------
// Function: hkxSparselyAnimatedBool::staticClass  (binary VA: 0x187d660)
// Original: hkxSparselyAnimatedBool::staticClass
// ----------------------------------------------------------------------------
void * hkxSparselyAnimatedBool::staticClass()
{
  return &hkxSparselyAnimatedBoolClass;
}

// ----------------------------------------------------------------------------
// Function: hkAlignSceneToNodeOptions::Destroy  (binary VA: 0x187d750)
// Original: hkAlignSceneToNodeOptions::~hkAlignSceneToNodeOptions
// ----------------------------------------------------------------------------
void hkAlignSceneToNodeOptions::Destroy(hkAlignSceneToNodeOptions::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6350);
  hkStringPtr::Destroy((hkAlignSceneToNodeOptions::Self *)((char *)self + 20));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkAlignSceneToNodeOptions::Destroy_ea187d790  (binary VA: 0x187d790)
// Original: hkAlignSceneToNodeOptions::~hkAlignSceneToNodeOptions
// ----------------------------------------------------------------------------
void hkAlignSceneToNodeOptions::Destroy_ea187d790(hkAlignSceneToNodeOptions::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6350);
  hkStringPtr::Destroy((hkAlignSceneToNodeOptions::Self *)((char *)self + 20));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 24;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkAlignSceneToNodeOptions::Construct  (binary VA: 0x187d810)
// Original: hkAlignSceneToNodeOptions::hkAlignSceneToNodeOptions
// ----------------------------------------------------------------------------
void hkAlignSceneToNodeOptions::Construct(hkAlignSceneToNodeOptions::Self *self)
{
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6350);
  hkStringPtr::Construct((hkAlignSceneToNodeOptions::Self *)((char *)self + 20));
}

// ----------------------------------------------------------------------------
// Function: hkAlignSceneToNodeOptions::Construct  (binary VA: 0x187d850)
// Original: hkAlignSceneToNodeOptions::hkAlignSceneToNodeOptions
// ----------------------------------------------------------------------------
void hkAlignSceneToNodeOptions::Construct(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_20A6350);
  hkStringPtr::Construct();
}

// ----------------------------------------------------------------------------
// Function: hkAlignSceneToNodeOptions::getNodeName  (binary VA: 0x187d890)
// Original: hkAlignSceneToNodeOptions::getNodeName
// ----------------------------------------------------------------------------
char * hkAlignSceneToNodeOptions::getNodeName(hkAlignSceneToNodeOptions::Self *self)
{
  return (char *)self + 20;
}

// ----------------------------------------------------------------------------
// Function: hkAlignSceneToNodeOptions::setNodeName  (binary VA: 0x187d8a0)
// Original: hkAlignSceneToNodeOptions::setNodeName
// ----------------------------------------------------------------------------
hkStringPtr::Self * hkAlignSceneToNodeOptions::setNodeName(hkAlignSceneToNodeOptions::Self *self, hkString::Self *a2)
{
  return hkStringPtr::opAssign((hkAlignSceneToNodeOptions::Self *)((char *)self + 20), a2);
}

// ----------------------------------------------------------------------------
// Function: hkxEnvironment::Destroy  (binary VA: 0x187d8d0)
// Original: hkxEnvironment::~hkxEnvironment
// ----------------------------------------------------------------------------
void hkxEnvironment::Destroy(hkxEnvironment::Self *self)
{
  int v1;
  hkStringPtr::Self *v2;
  hkStringPtr::Self *v3;
  int v4;
  int v5;
  int v6;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6378);
  v1 = *((uint32_t *)self + 3) - 1;
  v2 = (hkStringPtr::Self *)(*((uint32_t *)self + 2) + 8 * v1 + 4);
  if ( v1 >= 0 )
  {
    do
    {
      --v1;
      hkStringPtr::Destroy(v2);
      v3 = v2;
      v2 = (hkStringPtr::Self *)((char *)v2 - 8);
      hkStringPtr::Destroy((hkStringPtr::Self *)((char *)v3 - 4));
    }
    while ( v1 != -1 );
  }
  v4 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 3) = 0;
  if ( v4 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      8 * v4);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v5 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v6 = 20;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v6 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v5, 12, self, v6);
}

// ----------------------------------------------------------------------------
// Function: hkxEnvironment::Destroy_ea187d9c0  (binary VA: 0x187d9c0)
// Original: hkxEnvironment::~hkxEnvironment
// ----------------------------------------------------------------------------
void hkxEnvironment::Destroy_ea187d9c0(hkxEnvironment::Self *self)
{
  int v1;
  hkStringPtr::Self *v2;
  hkStringPtr::Self *v3;
  int v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6378);
  v1 = *((uint32_t *)self + 3) - 1;
  v2 = (hkStringPtr::Self *)(*((uint32_t *)self + 2) + 8 * v1 + 4);
  if ( v1 >= 0 )
  {
    do
    {
      --v1;
      hkStringPtr::Destroy(v2);
      v3 = v2;
      v2 = (hkStringPtr::Self *)((char *)v2 - 8);
      hkStringPtr::Destroy((hkStringPtr::Self *)((char *)v3 - 4));
    }
    while ( v1 != -1 );
  }
  v4 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 3) = 0;
  if ( v4 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      8 * v4);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkxEnvironment::Construct  (binary VA: 0x187da70)
// Original: hkxEnvironment::hkxEnvironment
// ----------------------------------------------------------------------------
void hkxEnvironment::Construct(hkxEnvironment::Self *self)
{
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6378);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
}

// ----------------------------------------------------------------------------
// Function: hkxEnvironment::Construct  (binary VA: 0x187dab0)
// Original: hkxEnvironment::hkxEnvironment
// ----------------------------------------------------------------------------
uint32_t * hkxEnvironment::Construct(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_20A6378);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkxEnvironment::clear  (binary VA: 0x187dad0)
// Original: hkxEnvironment::clear
// ----------------------------------------------------------------------------
void hkxEnvironment::clear(hkxEnvironment::Self *self)
{
  int v1;
  hkStringPtr::Self *v2;
  hkStringPtr::Self *v3;

  v1 = *((uint32_t *)self + 3) - 1;
  v2 = (hkStringPtr::Self *)(*((uint32_t *)self + 2) + 8 * v1 + 4);
  if ( v1 >= 0 )
  {
    do
    {
      --v1;
      hkStringPtr::Destroy(v2);
      v3 = v2;
      v2 = (hkStringPtr::Self *)((char *)v2 - 8);
      hkStringPtr::Destroy((hkStringPtr::Self *)((char *)v3 - 4));
    }
    while ( v1 != -1 );
  }
  *((uint32_t *)self + 3) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkxEnvironment::findVariableByName  (binary VA: 0x187db40)
// Original: hkxEnvironment::findVariableByName
// ----------------------------------------------------------------------------
int hkxEnvironment::findVariableByName(hkxEnvironment::Self *self, char *a2)
{
  int v2;

  v2 = 0;
  if ( *((int *)self + 3) <= 0 )
    return -1;
  while ( hkString::strCasecmp((hkString::Self *)(*(uint32_t *)(*((uint32_t *)self + 2) + 8 * v2) & 0xFFFFFFFE), a2) != 0 )
  {
    if ( *((uint32_t *)self + 3) <= ++v2 )
      return -1;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkxEnvironment::getVariableValue  (binary VA: 0x187dbb0)
// Original: hkxEnvironment::getVariableValue
// ----------------------------------------------------------------------------
unsigned int hkxEnvironment::getVariableValue(hkxEnvironment::Self *self, char *a2)
{
  int VariableByName;

  VariableByName = hkxEnvironment::findVariableByName(self, a2);
  if ( VariableByName == -1 )
    return 0;
  else
    return *(uint32_t *)(*((uint32_t *)self + 2) + 8 * VariableByName + 4) & 0xFFFFFFFE;
}

// ----------------------------------------------------------------------------
// Function: hkxEnvironment::setVariable  (binary VA: 0x187dc00)
// Original: hkxEnvironment::setVariable
// ----------------------------------------------------------------------------
hkxEnvironment::Self * hkxEnvironment::setVariable(hkxEnvironment::Self *self, hkxEnvironment::Self *a2, char *a3, hkString::Self *a4)
{
  int VariableByName;
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  typedef int _g4_t_v12;
  typedef hkStringPtr::Self *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint8_t _g4_t_v16[4];
  typedef uint8_t _g4_t_v17[32];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v13)) > _g4_s1 ? (24u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v14)) > _g4_s2 ? (28u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v15)) > _g4_s3 ? (28u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v16)) > _g4_s4 ? (40u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v17)) > _g4_s5 ? (44u + sizeof(_g4_t_v17)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);

  VariableByName = hkxEnvironment::findVariableByName(a2, a3);
  if ( a4 != nullptr )
  {
    if ( VariableByName == -1 )
    {
      hkStringPtr::Construct((hkStringPtr::Self *)v16);
      hkStringPtr::Construct((hkStringPtr::Self *)v17);
      hkStringPtr::opAssign((hkStringPtr::Self *)v16, (hkString::Self *)a3);
      hkStringPtr::opAssign((hkStringPtr::Self *)v17, a4);
      v6 = *((uint32_t *)a2 + 3);
      if ( v6 == (*((uint32_t *)a2 + 4) & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkxEnvironment::Self *)((char *)a2 + 8),
          8,
          v12);
        v6 = *((uint32_t *)a2 + 3);
      }
      v14 = *((uint32_t *)a2 + 2) + 8 * v6;
      hkStringPtr::Construct((hkStringPtr::Self *)v14, (const hkStringPtr::Self *)v16);
      hkStringPtr::Construct((hkStringPtr::Self *)(v14 + 4), (const hkStringPtr::Self *)v17);
      ++*((uint32_t *)a2 + 3);
      hkStringPtr::Destroy((hkStringPtr::Self *)v17);
      hkStringPtr::Destroy((hkStringPtr::Self *)v16);
    }
    else
    {
      hkStringPtr::opAssign((hkStringPtr::Self *)(*((uint32_t *)a2 + 2) + 8 * VariableByName + 4), a4);
    }
  }
  else
  {
    if ( VariableByName == -1 )
    {
      *(uint32_t *)self = 1;
      return self;
    }
    v7 = *((uint32_t *)a2 + 2) + 8 * VariableByName;
    v13 = (hkStringPtr::Self *)VariableByName;
    v15 = 8 * VariableByName;
    hkStringPtr::Destroy((hkStringPtr::Self *)(v7 + 4));
    hkStringPtr::Destroy((hkStringPtr::Self *)v7);
    v8 = *((uint32_t *)a2 + 3) - 1;
    *((uint32_t *)a2 + 3) = v8;
    if ( v13 != (hkStringPtr::Self *)v8 )
    {
      v9 = *((uint32_t *)a2 + 2);
      v10 = (uint32_t *)(v9 + v15);
      v11 = (uint32_t *)(v9 + 8 * v8);
      *v10 = *v11;
      v10[1] = v11[1];
    }
  }
  *(uint32_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkxEnvironment::getNumVariables  (binary VA: 0x187ddb0)
// Original: hkxEnvironment::getNumVariables
// ----------------------------------------------------------------------------
int hkxEnvironment::getNumVariables(hkxEnvironment::Self *self)
{
  return *((uint32_t *)self + 3);
}

// ----------------------------------------------------------------------------
// Function: hkxEnvironment::getVariableName  (binary VA: 0x187ddc0)
// Original: hkxEnvironment::getVariableName
// ----------------------------------------------------------------------------
unsigned int hkxEnvironment::getVariableName(hkxEnvironment::Self *self, int a2)
{
  return *(uint32_t *)(*((uint32_t *)self + 2) + 8 * a2) & 0xFFFFFFFE;
}

// ----------------------------------------------------------------------------
// Function: hkxEnvironment::getVariableValue  (binary VA: 0x187dde0)
// Original: hkxEnvironment::getVariableValue
// ----------------------------------------------------------------------------
unsigned int hkxEnvironment::getVariableValue(hkxEnvironment::Self *self, int a2)
{
  return *(uint32_t *)(*((uint32_t *)self + 2) + 8 * a2 + 4) & 0xFFFFFFFE;
}

// ----------------------------------------------------------------------------
// Function: hkxEnvironment::convertToString  (binary VA: 0x187de00)
// Original: hkxEnvironment::convertToString
// ----------------------------------------------------------------------------
int hkxEnvironment::convertToString(hkxEnvironment::Self *self, hkStringBuf::Self *a2)
{
  int v2;
  int result;
  uint32_t *v4;
  char *v5;
  char *v6;
  char v7;
  char *v8;
  char v9;
  char v10;
  char *v11;
  char v12;
  const char *v13;
  const char *v14;

  v2 = 0;
  hkStringBuf::clear(a2);
  result = *((uint32_t *)self + 3);
  if ( result > 0 )
  {
    while ( 1 )
    {
      v4 = (uint32_t *)(*((uint32_t *)self + 2) + 8 * v2);
      v5 = (char *)(*v4 & 0xFFFFFFFE);
      v6 = (char *)(v4[1] & 0xFFFFFFFE);
      v7 = *v5;
      if ( *v5 == 0 )
        goto LABEL_11;
      if ( v7 > 32 && v7 != 61 && v7 != 59 )
        break;
LABEL_26:
      v14 = "\"";
LABEL_12:
      v10 = *v6;
      if ( *v6 != 0 )
      {
        if ( v10 <= 32 || v10 == 61 || v10 == 59 )
        {
LABEL_27:
          v13 = "\"";
          goto LABEL_22;
        }
        v11 = v6;
        while ( 1 )
        {
          v12 = *++v11;
          if ( v12 == 0 )
            break;
          if ( v12 <= 32 || v12 == 61 || v12 == 59 )
            goto LABEL_27;
        }
      }
      v13 = (const char *)&unk_1B15112;
LABEL_22:
      hkStringBuf::appendPrintf(a2, "%s%s%s=%s%s%s", v14, v5, v14, v13, v6, v13);
      result = *((uint32_t *)self + 3);
      if ( result - 1 > v2 )
      {
        hkStringBuf::opAddAssign(a2, (hkString::Self *)"; ");
        result = *((uint32_t *)self + 3);
      }
      if ( ++v2 >= result )
        return result;
    }
    v8 = v5;
    while ( 1 )
    {
      v9 = *++v8;
      if ( v9 == 0 )
        break;
      if ( v9 <= 32 || v9 == 61 || v9 == 59 )
        goto LABEL_26;
    }
LABEL_11:
    v14 = (const char *)&unk_1B15112;
    goto LABEL_12;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkxEnvironment::interpretString  (binary VA: 0x187df90)
// Original: hkxEnvironment::interpretString
// ----------------------------------------------------------------------------
hkxEnvironment::Self * hkxEnvironment::interpretString(hkxEnvironment::Self *self, char *a2, hkString::Self *a3)
{
  int v3;
  int v4;
  char v5;
  const char *v6;
  int v7;
  int v8;
  const hkStringBuf::Self *v9;
  int v10;
  int v11;
  int v13;
  int v14;
  typedef const char *_g4_t_v15;
  typedef char *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef char *_g4_t_v18;
  typedef hkxEnvironment::Self *_g4_t_v19;
  typedef hkString::Self *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint8_t _g4_t_v24[8];
  typedef int _g4_t_v25[3];
  typedef char *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef char _g4_t_v29;
  typedef char *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef char _g4_t_v33;
  typedef uint32_t _g4_t_v34[134];
  enum : size_t {
    _g4_s0 = 976u,
    _g4_s1 = (8u + sizeof(_g4_t_v15)) > _g4_s0 ? (8u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v16)) > _g4_s1 ? (16u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v17)) > _g4_s2 ? (20u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v18)) > _g4_s3 ? (36u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v19)) > _g4_s4 ? (40u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v20)) > _g4_s5 ? (44u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v21)) > _g4_s6 ? (52u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v22)) > _g4_s7 ? (56u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v23)) > _g4_s8 ? (60u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v24)) > _g4_s9 ? (64u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v25)) > _g4_s10 ? (72u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v26)) > _g4_s11 ? (84u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v27)) > _g4_s12 ? (88u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v28)) > _g4_s13 ? (92u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v29)) > _g4_s14 ? (96u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (228u + sizeof(_g4_t_v30)) > _g4_s15 ? (228u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (232u + sizeof(_g4_t_v31)) > _g4_s16 ? (232u + sizeof(_g4_t_v31)) : _g4_s16,
    _g4_s18 = (236u + sizeof(_g4_t_v32)) > _g4_s17 ? (236u + sizeof(_g4_t_v32)) : _g4_s17,
    _g4_s19 = (240u + sizeof(_g4_t_v33)) > _g4_s18 ? (240u + sizeof(_g4_t_v33)) : _g4_s18,
    _g4_s20 = (372u + sizeof(_g4_t_v34)) > _g4_s19 ? (372u + sizeof(_g4_t_v34)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 52u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 56u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 64u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 72u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 84u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 88u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 92u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 96u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 228u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 232u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 236u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 240u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 372u);

  v3 = 0;
  v34[130] = (uint32_t)(uintptr_t)(&self);
  v19 = self;
  v18 = a2;
  v20 = a3;
  v28 = -2147483520;
  v26 = &v29;
  v27 = 1;
  v29 = 0;
  v30 = &v33;
  v32 = -2147483520;
  v31 = 1;
  v33 = 0;
  v21 = hkString::strLen(a3, v15);
  v22 = 0;
  while ( 2 )
  {
    v4 = 5;
    if ( v22 < v21 )
    {
      v5 = *((uint8_t *)v20 + v22);
      if ( v5 <= 32 )
      {
        v4 = 0;
        goto LABEL_17;
      }
      v4 = 1;
      if ( v5 != 34 )
      {
        if ( v5 == 61 )
        {
          v4 = 2;
          goto LABEL_5;
        }
        LOBYTE(v4) = 4;
LABEL_17:
        if ( v5 == 59 )
          v4 = 3;
      }
    }
LABEL_5:
    v23 = 9;
    v6 = (const char *)&unk_1D1C1E0;
    v7 = 6;
    do
    {
      while ( v3 != *(uint32_t *)v6 || v4 != *((uint32_t *)v6 + 1) )
      {
        v6 += 16;
        if ( v6 == "14hkxEnvironment" )
          goto LABEL_10;
      }
      v8 = *((uint32_t *)v6 + 2);
      v6 += 16;
      v23 = v8;
      v7 = *((uint32_t *)v6 - 1);
    }
    while ( v6 != "14hkxEnvironment" );
LABEL_10:
    switch ( v7 )
    {
      case 0:
        goto LABEL_13;
      case 1:
        LOWORD(v34[0]) = 0;
        LOBYTE(v34[0]) = *((uint8_t *)v20 + v22);
        hkStringBuf::opAddAssign((hkStringBuf::Self *)&v26, (const char *)v34);
        ++v22;
        goto LABEL_14;
      case 2:
        LOWORD(v34[0]) = 0;
        LOBYTE(v34[0]) = *((uint8_t *)v20 + v22);
        hkStringBuf::opAddAssign((hkStringBuf::Self *)&v30, (const char *)v34);
        v3 = v23;
        ++v22;
        if ( v23 != 8 )
          continue;
        goto LABEL_15;
      case 3:
        v16 = v30;
        goto LABEL_12;
      case 4:
        v16 = nullptr;
LABEL_12:
        hkxEnvironment::setVariable((hkxEnvironment::Self *)v24, v18, v26);
        v9 = (const hkStringBuf::Self *)hkStringBuf::opAssign((hkStringBuf::Self *)&v30, (hkString::Self *)&unk_1B15112);
        hkStringBuf::opAssign((hkStringBuf::Self *)&v26, v9);
LABEL_13:
        ++v22;
      case 5:
LABEL_14:
        v3 = v23;
        if ( v23 != 8 )
          continue;
LABEL_15:
        *(uint32_t *)v19 = 0;
        break;
      case 6:
        hkErrStream::Construct((hkErrStream::Self *)v25, (hkString::Self *)v34, 512);
        v10 = hkOstream::opShl((int)(uintptr_t)(v25), (hkString::Self *)"Error parsing environment string: '");
        v11 = hkOstream::opShl(v10, v20);
        hkOstream::opShl(v11, (hkString::Self *)a0);
        hkError::messageWarning((hkError::Self *)0xABBA7881, (int)(uintptr_t)(v34), "Environment/hkxEnvironment.cpp", stru_134, v17);
        goto LABEL_25;
      default:
        hkErrStream::Construct((hkErrStream::Self *)v25, (hkString::Self *)v34, 512);
        v13 = hkOstream::opShl(
                (int)(uintptr_t)(v25),
                (hkString::Self *)"Internal Error: Unknown action parsing environment string: '");
        v14 = hkOstream::opShl(v13, v20);
        hkOstream::opShl(v14, (hkString::Self *)a0);
        hkError::messageWarning((hkError::Self *)0xABBA0032, (int)(uintptr_t)(v34), "Environment/hkxEnvironment.cpp", &stru_134[12], v17);
LABEL_25:
        hkErrStream::Destroy((hkErrStream::Self *)v25);
        *(uint32_t *)v19 = 1;
        break;
    }
    break;
  }
  v31 = 0;
  if ( v32 >= 0 )
    (*(void (**)(uint32_t *, char *, int, char *))(hkContainerTempAllocator::s_alloc[0] + 20))(
      (uint32_t *)(hkContainerTempAllocator::s_alloc),
      v30,
      v32 & 0x3FFFFFFF,
      v16);
  v30 = nullptr;
  v32 = 0x80000000;
  v27 = 0;
  if ( v28 >= 0 )
    (*(void (**)(uint32_t *, char *, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
      (uint32_t *)(hkContainerTempAllocator::s_alloc),
      v26,
      v28 & 0x3FFFFFFF);
  return v19;
}

// ----------------------------------------------------------------------------
// Function: hkxEnum::getNameOfValue  (binary VA: 0x187e3e0)
// Original: hkxEnum::getNameOfValue
// ----------------------------------------------------------------------------
hkxEnum::Self * hkxEnum::getNameOfValue(hkxEnum::Self *self, int a2, const char **a3, unsigned int *a4)
{
  hkxEnum::Self *result;
  int v5;
  const char ***v6;
  const char ***v7;
  int v8;
  const char ***v9;
  unsigned int v10;

  result = self;
  v5 = *(uint32_t *)(a2 + 12);
  if ( v5 <= 0 )
  {
LABEL_6:
    *(uint32_t *)self = 1;
    return result;
  }
  v6 = *(const char ****)(a2 + 8);
  if ( *v6 != a3 )
  {
    v7 = v6 + 2;
    v8 = 0;
    while ( ++v8 != v5 )
    {
      v9 = v7;
      v7 += 2;
      if ( *(v7 - 2) == a3 )
        goto LABEL_8;
    }
    goto LABEL_6;
  }
  v9 = *(const char ****)(a2 + 8);
LABEL_8:
  v10 = (unsigned int)(uintptr_t)(v9[1]) & 0xFFFFFFFE;
  *(uint32_t *)self = 0;
  *a4 = v10;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkxEnum::getValueOfName  (binary VA: 0x187e450)
// Original: hkxEnum::getValueOfName
// ----------------------------------------------------------------------------
hkxEnum::Self * hkxEnum::getValueOfName(hkxEnum::Self *self, const char *a2, hkString::Self *a3, uint32_t *a4)
{
  int v4;

  v4 = 0;
  if ( *((int *)a2 + 3) > 0 )
  {
    while ( hkString::strCasecmp(a3, (const char *)(*(uint32_t *)(*((uint32_t *)a2 + 2) + 8 * v4 + 4) & 0xFFFFFFFE)) != 0 )
    {
      if ( *((uint32_t *)a2 + 3) <= ++v4 )
        goto LABEL_6;
    }
    *a4 = *(uint32_t *)(*((uint32_t *)a2 + 2) + 8 * v4);
    *(uint32_t *)self = 0;
    return self;
  }
  else
  {
LABEL_6:
    *(uint32_t *)self = 1;
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: hkxIndexBuffer::getNumTriangles  (binary VA: 0x187e4e0)
// Original: hkxIndexBuffer::getNumTriangles
// ----------------------------------------------------------------------------
int hkxIndexBuffer::getNumTriangles(hkxIndexBuffer::Self *self)
{
  int v1;
  char v2;
  int v4;

  v1 = *((uint32_t *)self + 4);
  if ( v1 == 0 )
    v1 = *((uint32_t *)self + 7);
  v2 = *((uint8_t *)self + 8);
  if ( v2 == 1 )
    return v1 / 3;
  if ( v2 != 2 )
    return 0;
  v4 = 0;
  if ( v1 >= 3 )
    return v1 - 2;
  return v4;
}

// ----------------------------------------------------------------------------
// Function: hkxIndexBuffer::getTriangleIndices  (binary VA: 0x187e530)
// Original: hkxIndexBuffer::getTriangleIndices
// ----------------------------------------------------------------------------
int hkxIndexBuffer::getTriangleIndices(hkxIndexBuffer::Self *self, unsigned int a2, unsigned int *a3, unsigned int *a4, unsigned int *a5)
{
  char v5;
  char v7;
  unsigned int v8;
  unsigned int v9;

  if ( *((uint32_t *)self + 4) != 0 )
  {
    v5 = *((uint8_t *)self + 8);
    if ( v5 != 1 )
    {
      if ( v5 == 2 )
      {
        *a3 = *(uint16_t *)(*((uint32_t *)self + 3) + 2 * a2);
        *a4 = *(uint16_t *)(*((uint32_t *)self + 3) + 2 * a2 + 2);
        *a5 = *(uint16_t *)(*((uint32_t *)self + 3) + 2 * a2 + 4);
        return 1;
      }
      goto LABEL_9;
    }
    v8 = 3 * a2 + 1;
    *a3 = *(uint16_t *)(*((uint32_t *)self + 3) + 6 * a2);
    *a4 = *(uint16_t *)(*((uint32_t *)self + 3) + 2 * v8);
    *a5 = *(uint16_t *)(*((uint32_t *)self + 3) + 2 * v8 + 2);
    return 1;
  }
  else
  {
    if ( *((uint32_t *)self + 7) == 0 )
    {
LABEL_9:
      *a3 = 0xFFFFFFFF;
      *a4 = 0xFFFFFFFF;
      *a5 = 0xFFFFFFFF;
      return 0;
    }
    v7 = *((uint8_t *)self + 8);
    if ( v7 != 1 )
    {
      if ( v7 == 2 )
      {
        *a3 = *(uint32_t *)(*((uint32_t *)self + 6) + 4 * a2);
        *a4 = *(uint32_t *)(*((uint32_t *)self + 6) + 4 * a2 + 4);
        *a5 = *(uint32_t *)(*((uint32_t *)self + 6) + 4 * a2 + 8);
        return 1;
      }
      goto LABEL_9;
    }
    v9 = 3 * a2 + 1;
    *a3 = *(uint32_t *)(*((uint32_t *)self + 6) + 12 * a2);
    *a4 = *(uint32_t *)(*((uint32_t *)self + 6) + 4 * v9);
    *a5 = *(uint32_t *)(*((uint32_t *)self + 6) + 4 * v9 + 4);
    return 1;
  }
}

// ----------------------------------------------------------------------------
// Function: hkxAttribute::Construct  (binary VA: 0x187e680)
// Original: hkxAttribute::hkxAttribute
// ----------------------------------------------------------------------------
void hkxAttribute::Construct(hkxAttribute::Self *self)
{
  hkStringPtr::Construct(self);
  *((uint32_t *)self + 1) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkxAttribute::Construct  (binary VA: 0x187e6b0)
// Original: hkxAttribute::hkxAttribute
// ----------------------------------------------------------------------------
void hkxAttribute::Construct()
{
  hkStringPtr::Construct();
}

// ----------------------------------------------------------------------------
// Function: hkxAttribute::setValue  (binary VA: 0x187e6e0)
// Original: hkxAttribute::setValue
// ----------------------------------------------------------------------------
int hkxAttribute::setValue(hkxAttribute::Self *self, hkReferencedObject::Self *a2, const hkClass::Self *a3)
{
  return hkRefVariant::set((hkxAttribute::Self *)((char *)self + 4), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkPackfileHeader::staticClass  (binary VA: 0x187e730)
// Original: hkPackfileHeader::staticClass
// ----------------------------------------------------------------------------
void * hkPackfileHeader::staticClass()
{
  return &hkPackfileHeaderClass;
}

// ----------------------------------------------------------------------------
// Function: hkTagfileReader::Destroy  (binary VA: 0x187e820)
// Original: hkTagfileReader::~hkTagfileReader
// ----------------------------------------------------------------------------
void hkTagfileReader::Destroy(hkTagfileReader::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkTagfileWriter::AddDataObjectListener::Destroy  (binary VA: 0x187e840)
// Original: hkTagfileWriter::AddDataObjectListener::~AddDataObjectListener
// ----------------------------------------------------------------------------
void hkTagfileWriter::AddDataObjectListener::Destroy(hkTagfileWriter::AddDataObjectListener::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkTagfileWriter::Destroy  (binary VA: 0x187e860)
// Original: hkTagfileWriter::~hkTagfileWriter
// ----------------------------------------------------------------------------
void hkTagfileWriter::Destroy(hkTagfileWriter::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkVersionPatchManager::ClassWrapper::Destroy  (binary VA: 0x187e930)
// Original: hkVersionPatchManager::ClassWrapper::~ClassWrapper
// ----------------------------------------------------------------------------
void hkVersionPatchManager::ClassWrapper::Destroy(hkVersionPatchManager::ClassWrapper::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkTypeInfoRegistry::registerTypeInfo  (binary VA: 0x187e950)
// Original: hkTypeInfoRegistry::registerTypeInfo
// ----------------------------------------------------------------------------
int hkTypeInfoRegistry::registerTypeInfo(hkTypeInfoRegistry::Self *self, hkString::Self **a2)
{
  return hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
           (hkTypeInfoRegistry::Self *)((char *)self + 8),
           *a2,
           (unsigned int)(uintptr_t)(a2));
}

// ----------------------------------------------------------------------------
// Function: hkTypeInfoRegistry::finishLoadedObject  (binary VA: 0x187e990)
// Original: hkTypeInfoRegistry::finishLoadedObject
// ----------------------------------------------------------------------------
hkTypeInfo * hkTypeInfoRegistry::finishLoadedObject(hkTypeInfoRegistry::Self *self, void *a2, hkString::Self *a3)
{
  hkTypeInfo *v3;

  v3 = (hkTypeInfo *)hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
                       (hkTypeInfoRegistry::Self *)((char *)self + 8),
                       a3,
                       0);
  if ( v3 != nullptr )
    hkTypeInfo::finishLoadedObject(v3, a2, *((uint32_t *)self + 6));
  return v3;
}

// ----------------------------------------------------------------------------
// Function: hkTypeInfoRegistry::getTypeInfo  (binary VA: 0x187e9f0)
// Original: hkTypeInfoRegistry::getTypeInfo
// ----------------------------------------------------------------------------
int hkTypeInfoRegistry::getTypeInfo(hkTypeInfoRegistry::Self *self, hkString::Self *a2)
{
  return hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
           (hkTypeInfoRegistry::Self *)((char *)self + 8),
           a2,
           0);
}

// ----------------------------------------------------------------------------
// Function: hkTypeInfoRegistry::cleanupLoadedObject  (binary VA: 0x187ea30)
// Original: hkTypeInfoRegistry::cleanupLoadedObject
// ----------------------------------------------------------------------------
hkTypeInfo * hkTypeInfoRegistry::cleanupLoadedObject(hkTypeInfoRegistry::Self *self, void *a2, hkString::Self *a3)
{
  hkTypeInfo *v3;

  v3 = (hkTypeInfo *)hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
                       (hkTypeInfoRegistry::Self *)((char *)self + 8),
                       a3,
                       0);
  if ( v3 != nullptr )
    hkTypeInfo::cleanupLoadedObject(v3, a2);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: hkTypeInfoRegistry::merge  (binary VA: 0x187ea80)
// Original: hkTypeInfoRegistry::merge
// ----------------------------------------------------------------------------
bool * hkTypeInfoRegistry::merge(hkTypeInfoRegistry::Self *self, const hkTypeInfoRegistry::Self *a2)
{
  uint32_t *v2;
  int Iterator;
  bool *result;
  hkString::Self *Key;
  typedef int _g4_t_Value;
  typedef bool _g4_t_v7[25];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_Value)) > _g4_s0 ? (8u + sizeof(_g4_t_Value)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v7)) > _g4_s1 ? (15u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_Value &Value = *reinterpret_cast<_g4_t_Value *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 15u);

  v2 = (uint32_t *)((char *)a2 + 8);
  Iterator = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getIterator((const hkTypeInfoRegistry::Self *)((char *)a2 + 8));
  result = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::isValid(v7, (int)(uintptr_t)(a2) + 8, Iterator);
  while ( v7[0] )
  {
    Value = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getValue(v2, Iterator);
    Key = (hkString::Self *)hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getKey(v2, Iterator);
    hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
      (hkTypeInfoRegistry::Self *)((char *)self + 8),
      Key,
      Value);
    Iterator = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getNext(v2, Iterator);
    result = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::isValid(v7, (int)(uintptr_t)(v2), Iterator);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkTypeInfoRegistry::Destroy  (binary VA: 0x187ec90)
// Original: hkTypeInfoRegistry::~hkTypeInfoRegistry
// ----------------------------------------------------------------------------
void hkTypeInfoRegistry::Destroy(hkTypeInfoRegistry::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A64C8);
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Destroy((hkTypeInfoRegistry::Self *)((char *)self + 8));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkVersionPatchManager::ClassWrapper::Destroy_ea187ee30  (binary VA: 0x187ee30)
// Original: hkVersionPatchManager::ClassWrapper::~ClassWrapper
// ----------------------------------------------------------------------------
void hkVersionPatchManager::ClassWrapper::Destroy_ea187ee30(hkVersionPatchManager::ClassWrapper::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 8;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkTypeInfoRegistry::Destroy_ea187ee90  (binary VA: 0x187ee90)
// Original: hkTypeInfoRegistry::~hkTypeInfoRegistry
// ----------------------------------------------------------------------------
void hkTypeInfoRegistry::Destroy_ea187ee90(hkTypeInfoRegistry::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A64C8);
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Destroy((hkTypeInfoRegistry::Self *)((char *)self + 8));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 32;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkTagfileWriter::Destroy_ea187ef70  (binary VA: 0x187ef70)
// Original: hkTagfileWriter::~hkTagfileWriter
// ----------------------------------------------------------------------------
void hkTagfileWriter::Destroy_ea187ef70(hkTagfileWriter::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 8;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkTagfileWriter::AddDataObjectListener::Destroy_ea187efd0  (binary VA: 0x187efd0)
// Original: hkTagfileWriter::AddDataObjectListener::~AddDataObjectListener
// ----------------------------------------------------------------------------
void hkTagfileWriter::AddDataObjectListener::Destroy_ea187efd0(hkTagfileWriter::AddDataObjectListener::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 8;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkTagfileReader::Destroy_ea187f030  (binary VA: 0x187f030)
// Original: hkTagfileReader::~hkTagfileReader
// ----------------------------------------------------------------------------
void hkTagfileReader::Destroy_ea187f030(hkTagfileReader::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 8;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkSerializeUtil::LoadOptions::getClassNameRegistry  (binary VA: 0x187f2f0)
// Original: hkSerializeUtil::LoadOptions::getClassNameRegistry
// ----------------------------------------------------------------------------
int hkSerializeUtil::LoadOptions::getClassNameRegistry(hkSerializeUtil::LoadOptions::Self *self)
{
  int result;

  result = *((uint32_t *)self + 1);
  if ( result == 0 )
    return (*(int (**)(uint32_t *))(*hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance + 24))(hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkSerializeUtil::LoadOptions::getTypeInfoRegistry  (binary VA: 0x187f330)
// Original: hkSerializeUtil::LoadOptions::getTypeInfoRegistry
// ----------------------------------------------------------------------------
int hkSerializeUtil::LoadOptions::getTypeInfoRegistry(hkSerializeUtil::LoadOptions::Self *self)
{
  int result;

  result = *((uint32_t *)self + 2);
  if ( result == 0 )
    return (*(int (**)(uint32_t *))(*hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance + 20))(hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkSerializeUtil::FormatDetails::verifiesPredicate  (binary VA: 0x187f370)
// Original: hkSerializeUtil::FormatDetails::verifiesPredicate
// ----------------------------------------------------------------------------
uint32_t * hkSerializeUtil::FormatDetails::verifiesPredicate(uint32_t *a1, int a2, uint16_t a3)
{
  uint32_t *result;
  int v4;
  uint16_t *v5;
  int v6;

  result = a1;
  if ( *(uint16_t *)(a2 + 16) <= a3 )
  {
    *a1 = -1;
  }
  else
  {
    v4 = *(uint32_t *)(a2 + 24);
    if ( v4 <= 0 )
    {
LABEL_7:
      *a1 = 0;
      return result;
    }
    v5 = *(uint16_t **)(a2 + 20);
    if ( *v5 != a3 )
    {
      v6 = 0;
      while ( ++v6 != v4 )
      {
        if ( v5[v6] == a3 )
        {
          *a1 = v6 >= 0;
          return result;
        }
      }
      goto LABEL_7;
    }
    *a1 = 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkSerializeUtil::detectFormat  (binary VA: 0x187f3e0)
// Original: hkSerializeUtil::detectFormat
// ----------------------------------------------------------------------------
int hkSerializeUtil::detectFormat(int a1, uint32_t *a2, uint32_t *a3)
{
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int result;
  int v10;
  int v11;
  int v12;
  int v13;
  unsigned int v14;
  int v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  int v20;
  int v21;
  unsigned int v22;
  int v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  char v27;
  char v28;
  char v29;
  int v30;
  int k;
  bool v32; // cc
  int v33;
  unsigned int v34;
  int v35;
  int v36;
  hkStringPtr::Self *v37;
  int v38;
  unsigned int v39;
  unsigned int v40;
  int v41;
  int i;
  int v43;
  int j;
  int v45;
  uint32_t *savedregs;
  typedef hkMemUtil::Self *_g4_t_v46;
  typedef uint32_t *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef hkStringPtr::Self *_g4_t_v51;
  typedef hkStringPtr::Self *_g4_t_v52;
  typedef hkStringPtr::Self *_g4_t_v53;
  typedef hkStringPtr::Self *_g4_t_v54;
  typedef uint32_t *_g4_t_v55;
  typedef hkPackfileHeader::Self *_g4_t_v56;
  typedef hkPackfileHeader::Self *_g4_t_v57;
  typedef hkPackfileHeader::Self *_g4_t_v58;
  typedef int _g4_t_v59;
  typedef uint32_t _g4_t_v60[2];
  typedef uint32_t _g4_t_v61[2];
  typedef char *_g4_t_v62;
  typedef char _g4_t_v63[4];
  typedef int _g4_t_v64;
  typedef unsigned int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef uint32_t _g4_t_v68[2];
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef char _g4_t_v75[4];
  typedef char _g4_t_v76[4];
  typedef int16_t _g4_t_v77;
  typedef unsigned int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef uint8_t _g4_t_v83[6];
  typedef int16_t _g4_t_v84;
  typedef unsigned int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef uint32_t _g4_t_v88[4];
  typedef char _g4_t_v89[24];
  typedef char _g4_t_v90[16];
  typedef int _g4_t_v91;
  typedef int16_t _g4_t_v92;
  typedef int *_g4_t_v93;
  typedef uint32_t *_g4_t_v94;
  typedef int *_g4_t_v95;
  typedef int *_g4_t_v96;
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (8u + sizeof(_g4_t_v46)) > _g4_s0 ? (8u + sizeof(_g4_t_v46)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v47)) > _g4_s1 ? (12u + sizeof(_g4_t_v47)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v48)) > _g4_s2 ? (12u + sizeof(_g4_t_v48)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v49)) > _g4_s3 ? (12u + sizeof(_g4_t_v49)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v50)) > _g4_s4 ? (12u + sizeof(_g4_t_v50)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v51)) > _g4_s5 ? (16u + sizeof(_g4_t_v51)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v52)) > _g4_s6 ? (16u + sizeof(_g4_t_v52)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v53)) > _g4_s7 ? (16u + sizeof(_g4_t_v53)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v54)) > _g4_s8 ? (16u + sizeof(_g4_t_v54)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v55)) > _g4_s9 ? (28u + sizeof(_g4_t_v55)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v56)) > _g4_s10 ? (32u + sizeof(_g4_t_v56)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v57)) > _g4_s11 ? (32u + sizeof(_g4_t_v57)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v58)) > _g4_s12 ? (32u + sizeof(_g4_t_v58)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v59)) > _g4_s13 ? (36u + sizeof(_g4_t_v59)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v60)) > _g4_s14 ? (40u + sizeof(_g4_t_v60)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v61)) > _g4_s15 ? (48u + sizeof(_g4_t_v61)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v62)) > _g4_s16 ? (56u + sizeof(_g4_t_v62)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v63)) > _g4_s17 ? (60u + sizeof(_g4_t_v63)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v64)) > _g4_s18 ? (64u + sizeof(_g4_t_v64)) : _g4_s18,
    _g4_s20 = (68u + sizeof(_g4_t_v65)) > _g4_s19 ? (68u + sizeof(_g4_t_v65)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_v66)) > _g4_s20 ? (72u + sizeof(_g4_t_v66)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v67)) > _g4_s21 ? (76u + sizeof(_g4_t_v67)) : _g4_s21,
    _g4_s23 = (88u + sizeof(_g4_t_v68)) > _g4_s22 ? (88u + sizeof(_g4_t_v68)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v69)) > _g4_s23 ? (96u + sizeof(_g4_t_v69)) : _g4_s23,
    _g4_s25 = (100u + sizeof(_g4_t_v70)) > _g4_s24 ? (100u + sizeof(_g4_t_v70)) : _g4_s24,
    _g4_s26 = (104u + sizeof(_g4_t_v71)) > _g4_s25 ? (104u + sizeof(_g4_t_v71)) : _g4_s25,
    _g4_s27 = (108u + sizeof(_g4_t_v72)) > _g4_s26 ? (108u + sizeof(_g4_t_v72)) : _g4_s26,
    _g4_s28 = (112u + sizeof(_g4_t_v73)) > _g4_s27 ? (112u + sizeof(_g4_t_v73)) : _g4_s27,
    _g4_s29 = (120u + sizeof(_g4_t_v74)) > _g4_s28 ? (120u + sizeof(_g4_t_v74)) : _g4_s28,
    _g4_s30 = (124u + sizeof(_g4_t_v75)) > _g4_s29 ? (124u + sizeof(_g4_t_v75)) : _g4_s29,
    _g4_s31 = (128u + sizeof(_g4_t_v76)) > _g4_s30 ? (128u + sizeof(_g4_t_v76)) : _g4_s30,
    _g4_s32 = (132u + sizeof(_g4_t_v77)) > _g4_s31 ? (132u + sizeof(_g4_t_v77)) : _g4_s31,
    _g4_s33 = (136u + sizeof(_g4_t_v78)) > _g4_s32 ? (136u + sizeof(_g4_t_v78)) : _g4_s32,
    _g4_s34 = (140u + sizeof(_g4_t_v79)) > _g4_s33 ? (140u + sizeof(_g4_t_v79)) : _g4_s33,
    _g4_s35 = (144u + sizeof(_g4_t_v80)) > _g4_s34 ? (144u + sizeof(_g4_t_v80)) : _g4_s34,
    _g4_s36 = (152u + sizeof(_g4_t_v81)) > _g4_s35 ? (152u + sizeof(_g4_t_v81)) : _g4_s35,
    _g4_s37 = (164u + sizeof(_g4_t_v82)) > _g4_s36 ? (164u + sizeof(_g4_t_v82)) : _g4_s36,
    _g4_s38 = (168u + sizeof(_g4_t_v83)) > _g4_s37 ? (168u + sizeof(_g4_t_v83)) : _g4_s37,
    _g4_s39 = (174u + sizeof(_g4_t_v84)) > _g4_s38 ? (174u + sizeof(_g4_t_v84)) : _g4_s38,
    _g4_s40 = (176u + sizeof(_g4_t_v85)) > _g4_s39 ? (176u + sizeof(_g4_t_v85)) : _g4_s39,
    _g4_s41 = (180u + sizeof(_g4_t_v86)) > _g4_s40 ? (180u + sizeof(_g4_t_v86)) : _g4_s40,
    _g4_s42 = (184u + sizeof(_g4_t_v87)) > _g4_s41 ? (184u + sizeof(_g4_t_v87)) : _g4_s41,
    _g4_s43 = (200u + sizeof(_g4_t_v88)) > _g4_s42 ? (200u + sizeof(_g4_t_v88)) : _g4_s42,
    _g4_s44 = (216u + sizeof(_g4_t_v89)) > _g4_s43 ? (216u + sizeof(_g4_t_v89)) : _g4_s43,
    _g4_s45 = (240u + sizeof(_g4_t_v90)) > _g4_s44 ? (240u + sizeof(_g4_t_v90)) : _g4_s44,
    _g4_s46 = (256u + sizeof(_g4_t_v91)) > _g4_s45 ? (256u + sizeof(_g4_t_v91)) : _g4_s45,
    _g4_s47 = (260u + sizeof(_g4_t_v92)) > _g4_s46 ? (260u + sizeof(_g4_t_v92)) : _g4_s46,
    _g4_s48 = (272u + sizeof(_g4_t_v93)) > _g4_s47 ? (272u + sizeof(_g4_t_v93)) : _g4_s47,
    _g4_s49 = (276u + sizeof(_g4_t_v94)) > _g4_s48 ? (276u + sizeof(_g4_t_v94)) : _g4_s48,
    _g4_s50 = (280u + sizeof(_g4_t_v95)) > _g4_s49 ? (280u + sizeof(_g4_t_v95)) : _g4_s49,
    _g4_s51 = (284u + sizeof(_g4_t_v96)) > _g4_s50 ? (284u + sizeof(_g4_t_v96)) : _g4_s50
  };
  alignas(16) uint8_t _g4_sf[_g4_s51];
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 8u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 12u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 12u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 12u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 12u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 16u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 16u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 16u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 16u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 28u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 32u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 32u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 32u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 36u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 40u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 48u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 56u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 60u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 64u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 68u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 72u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 76u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 88u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 96u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 100u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 104u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 108u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 112u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 120u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 124u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 128u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 132u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 136u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 140u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 144u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 152u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 164u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 168u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 174u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 176u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 180u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 184u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 200u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 216u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 240u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 256u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 260u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 272u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 276u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 280u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 284u);

  v93 = &a1;
  v3 = a2;
  v55 = a2;
  v4 = a1;
  v5 = a3;
  *a2 = 0;
  v3[1] = 0;
  v47 = v5;
  v51 = (hkStringPtr::Self *)(v3 + 2);
  hkStringPtr::opAssign((hkStringPtr::Self *)(v3 + 2), nullptr);
  *((uint16_t *)v3 + 8) = 0;
  v46 = (hkMemUtil::Self *)(v3 + 3);
  hkMemUtil::memSet((hkMemUtil::Self *)(v3 + 3), nullptr, 4u);
  v69 = v4;
  v68[0] = ((uint32_t)(uintptr_t)&off_20A63E8);
  v68[1] = -65535;
  v70 = 0;
  v71 = 0;
  v72 = 0x80000000;
  v73 = 0;
  hkArrayUtil::reserve((hkArrayUtil::Self *)&v59, (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc, &v70, 513, 1);
  v71 = 513;
  v6 = G4_VCALL<int>(v69, 32, v70, 513);
  v7 = v6;
  if ( v6 > (v72 & 0x3FFFFFFF) )
  {
    v8 = 2 * (v72 & 0x3FFFFFFF);
    savedregs = &dword_0 + 1;
    v95 = &v70;
    if ( v6 >= v8 )
      v8 = v6;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)&v59,
      (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
      v95,
      v8,
      (int)(uintptr_t)(savedregs));
  }
  v71 = v7;
  hkBinaryTagfileReader::Construct((hkBinaryTagfileReader::Self *)v61);
  hkStringPtr::Construct((hkStringPtr::Self *)v83);
  v96 = &v81;
  v94 = v61;
  v95 = (int *)(v68);
  v85 = 0;
  v86 = 0;
  v87 = 0x80000000;
  hkBinaryTagfileReader::readHeader(&v59);
  if ( v59 == 0 )
  {
    v55[1] = v82;
    *v55 = 4;
    hkStringPtr::opAssign(v51, (const hkStringPtr::Self *)v83);
    if ( v82 > 4 )
    {
      v13 = v86;
      v14 = v85;
      *((uint16_t *)v55 + 8) = v84;
      v15 = v55[6];
      v52 = (hkStringPtr::Self *)(v15 + v13);
      v16 = v55[7] & 0x3FFFFFFF;
      if ( v15 + v13 > v16 )
      {
        v43 = 2 * v16;
        savedregs = &dword_0 + 2;
        v49 = v13;
        if ( v43 < v15 + v13 )
          v43 = v15 + v13;
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)&v59,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          v55 + 5,
          v43,
          (int)(uintptr_t)(savedregs));
        v15 = v55[6];
        v13 = v49;
      }
      v17 = v55[5] + 2 * v15;
      if ( v13 > 0 )
      {
        if ( (v17 >= v14 + 16 || v14 >= v17 + 16) && (unsigned int)v13 > 0xA )
        {
          v18 = 0;
          v56 = (hkPackfileHeader::Self *)(8 * ((unsigned int)v13 >> 3));
          v19 = 0;
          do
          {
            ++v18;
            *(__m128i *)(v17 + v19) = *(__m128i *)(v14 + v19);
            v19 += 16;
          }
          while ( (unsigned int)v13 >> 3 > v18 );
          if ( v56 != (hkPackfileHeader::Self *)v13 )
          {
            *(uint16_t *)(v17 + 16 * ((unsigned int)v13 >> 3)) = *(uint16_t *)(v14 + 16 * ((unsigned int)v13 >> 3));
            if ( v13 > (int)(uintptr_t)(v56) + 1 )
            {
              *(uint16_t *)(v17 + 2 * ((uint32_t)(uintptr_t)(v56) + 1)) = *(uint16_t *)(v14 + 2 * ((uint32_t)(uintptr_t)(v56) + 1));
              if ( v13 > (int)(uintptr_t)(v56) + 2 )
              {
                *(uint16_t *)(v17 + 2 * ((uint32_t)(uintptr_t)(v56) + 2)) = *(uint16_t *)(v14 + 2 * ((uint32_t)(uintptr_t)(v56) + 2));
                if ( v13 > (int)(uintptr_t)(v56) + 3 )
                {
                  *(uint16_t *)(v17 + 2 * ((uint32_t)(uintptr_t)(v56) + 3)) = *(uint16_t *)(v14 + 2 * ((uint32_t)(uintptr_t)(v56) + 3));
                  if ( v13 > (int)(uintptr_t)(v56) + 4 )
                  {
                    *(uint16_t *)(v17 + 2 * ((uint32_t)(uintptr_t)(v56) + 4)) = *(uint16_t *)(v14 + 2 * ((uint32_t)(uintptr_t)(v56) + 4));
                    if ( v13 > (int)(uintptr_t)(v56) + 5 )
                    {
                      *(uint16_t *)(v17 + 2 * ((uint32_t)(uintptr_t)(v56) + 5)) = *(uint16_t *)(v14 + 2 * ((uint32_t)(uintptr_t)(v56) + 5));
                      if ( v13 > (int)(uintptr_t)(v56) + 6 )
                        *(uint16_t *)(v17 + 2 * ((uint32_t)(uintptr_t)(v56) + 6)) = *(uint16_t *)(v14 + 2 * ((uint32_t)(uintptr_t)(v56) + 6));
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          for ( i = 0; i != v13; ++i )
            *(uint16_t *)(v17 + 2 * i) = *(uint16_t *)(v14 + 2 * i);
        }
      }
      v55[6] = (uint32_t)(uintptr_t)(v52);
    }
    goto LABEL_7;
  }
  v73 = 0;
  hkString::memSet((hkString::Self *)v88, (void *)0xFFFFFFFF, 0x40u);
  v88[0] = 1474355287;
  v88[1] = 281067536;
  v90[0] = 0;
  v91 = 0;
  hkPackfileHeader::readHeader((hkPackfileHeader::Self *)&v59, (hkStreamReader::Self *)v68, (hkPackfileHeader::Self *)v88);
  if ( v59 != 0 )
  {
    v73 = 0;
    while ( 1 )
    {
      v10 = (*(int (**)(uint32_t *, int *, int))(v68[0] + 32))(v68, &v74, 1);
      v73 += v10;
      if ( v10 == 0 )
        break;
      if ( (uint8_t)v74 != 32 && (uint8_t)(v74 - 9) > 1u && (uint8_t)v74 != 13 )
      {
        if ( (uint8_t)v74 != 60 )
          goto LABEL_7;
        break;
      }
    }
    v73 = 0;
    v60[1] = -65535;
    v60[0] = ((uint32_t)(uintptr_t)&off_20A6868);
    hkStringPtr::Construct((hkStringPtr::Self *)v63);
    v65 = 0;
    v66 = 0;
    v67 = 0x80000000;
    hkXmlTagfileReader::readHeader(&v59, (int)(uintptr_t)(v60), (hkStreamReader::Self *)v68, &v62);
    if ( v59 != 0 )
    {
      v73 = 0;
      hkStringPtr::Construct((hkStringPtr::Self *)v75);
      hkStringPtr::Construct((hkStringPtr::Self *)v76);
      v78 = 0;
      v79 = 0;
      v80 = 0x80000000;
      v11 = *hkSingleton<hkSerializeDeprecated::Self>::s_instance;
      v94 = (uint32_t *)hkSingleton<hkSerializeDeprecated::Self>::s_instance;
      savedregs = v47;
      v96 = &v74;
      v95 = (int *)(v68);
      (*(void (**)(int *))(v11 + 40))(&v59);
      if ( v59 == 0 )
      {
        *v55 = 3;
        hkStringPtr::opAssign(v51, (const hkStringPtr::Self *)v75);
        v32 = v74 <= 9;
        v55[1] = v74;
        if ( !v32 )
        {
          v33 = v79;
          v34 = v78;
          v35 = v79;
          *((uint16_t *)v55 + 8) = v77;
          v36 = v55[6];
          v37 = (hkStringPtr::Self *)(v36 + v35);
          v54 = v37;
          v38 = v55[7] & 0x3FFFFFFF;
          if ( (int)(uintptr_t)(v37) > v38 )
          {
            v45 = 2 * v38;
            savedregs = &dword_0 + 2;
            v50 = v33;
            if ( v45 < (int)(uintptr_t)(v37) )
              v45 = (int)(uintptr_t)(v37);
            hkArrayUtil::reserve(
              (hkArrayUtil::Self *)&v59,
              (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
              v55 + 5,
              v45,
              (int)(uintptr_t)(savedregs));
            v36 = v55[6];
            v33 = v50;
          }
          v39 = v55[5] + 2 * v36;
          if ( v33 > 0 )
          {
            if ( (v39 >= v34 + 16 || v34 >= v39 + 16) && (unsigned int)v33 > 0xA )
            {
              v40 = 0;
              v58 = (hkPackfileHeader::Self *)(8 * ((unsigned int)v33 >> 3));
              v41 = 0;
              do
              {
                ++v40;
                *(__m128i *)(v39 + v41) = *(__m128i *)(v34 + v41);
                v41 += 16;
              }
              while ( (unsigned int)v33 >> 3 > v40 );
              if ( (hkPackfileHeader::Self *)v33 != v58 )
              {
                *(uint16_t *)(v39 + 16 * ((unsigned int)v33 >> 3)) = *(uint16_t *)(v34 + 16 * ((unsigned int)v33 >> 3));
                if ( v33 > (int)(uintptr_t)(v58) + 1 )
                {
                  *(uint16_t *)(v39 + 2 * ((uint32_t)(uintptr_t)(v58) + 1)) = *(uint16_t *)(v34 + 2 * ((uint32_t)(uintptr_t)(v58) + 1));
                  if ( v33 > (int)(uintptr_t)(v58) + 2 )
                  {
                    *(uint16_t *)(v39 + 2 * ((uint32_t)(uintptr_t)(v58) + 2)) = *(uint16_t *)(v34 + 2 * ((uint32_t)(uintptr_t)(v58) + 2));
                    if ( v33 > (int)(uintptr_t)(v58) + 3 )
                    {
                      *(uint16_t *)(v39 + 2 * ((uint32_t)(uintptr_t)(v58) + 3)) = *(uint16_t *)(v34 + 2 * ((uint32_t)(uintptr_t)(v58) + 3));
                      if ( v33 > (int)(uintptr_t)(v58) + 4 )
                      {
                        *(uint16_t *)(v39 + 2 * ((uint32_t)(uintptr_t)(v58) + 4)) = *(uint16_t *)(v34 + 2 * ((uint32_t)(uintptr_t)(v58) + 4));
                        if ( v33 > (int)(uintptr_t)(v58) + 5 )
                        {
                          *(uint16_t *)(v39 + 2 * ((uint32_t)(uintptr_t)(v58) + 5)) = *(uint16_t *)(v34 + 2 * ((uint32_t)(uintptr_t)(v58) + 5));
                          if ( v33 > (int)(uintptr_t)(v58) + 6 )
                            *(uint16_t *)(v39 + 2 * ((uint32_t)(uintptr_t)(v58) + 6)) = *(uint16_t *)(v34 + 2 * ((uint32_t)(uintptr_t)(v58) + 6));
                        }
                      }
                    }
                  }
                }
              }
            }
            else
            {
              for ( j = 0; j != v33; ++j )
                *(uint16_t *)(v39 + 2 * j) = *(uint16_t *)(v34 + 2 * j);
            }
          }
          v55[6] = (uint32_t)(uintptr_t)(v54);
        }
      }
      v79 = 0;
      if ( v80 >= 0 )
        (*(void (**)(uint32_t *, unsigned int, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v78,
          2 * (v80 & 0x3FFFFFFF));
      v78 = 0;
      v80 = 0x80000000;
      hkStringPtr::Destroy((hkStringPtr::Self *)v76);
      hkStringPtr::Destroy((hkStringPtr::Self *)v75);
      v12 = v67;
      v66 = 0;
      if ( v67 < 0 )
        goto LABEL_25;
    }
    else
    {
      v55[1] = (uint32_t)(uintptr_t)(v62);
      *v55 = 5;
      hkStringPtr::opAssign(v51, (const hkStringPtr::Self *)v63);
      if ( (int)(uintptr_t)(v62) > 1 )
      {
        v20 = v66;
        *((uint16_t *)v55 + 8) = v64;
        v21 = v55[6];
        v22 = v65;
        v53 = (hkStringPtr::Self *)(v21 + v20);
        v23 = v55[7] & 0x3FFFFFFF;
        if ( v21 + v20 > v23 )
        {
          v30 = 2 * v23;
          savedregs = &dword_0 + 2;
          v48 = v20;
          if ( v30 < v21 + v20 )
            v30 = v21 + v20;
          hkArrayUtil::reserve(
            (hkArrayUtil::Self *)&v59,
            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
            v55 + 5,
            v30,
            (int)(uintptr_t)(savedregs));
          v21 = v55[6];
          v20 = v48;
        }
        v24 = v55[5] + 2 * v21;
        if ( v20 > 0 )
        {
          if ( (v24 >= v22 + 16 || v22 >= v24 + 16) && (unsigned int)v20 > 0xA )
          {
            v25 = 0;
            v57 = (hkPackfileHeader::Self *)(8 * ((unsigned int)v20 >> 3));
            v26 = 0;
            do
            {
              ++v25;
              *(__m128i *)(v24 + v26) = *(__m128i *)(v22 + v26);
              v26 += 16;
            }
            while ( (unsigned int)v20 >> 3 > v25 );
            if ( (hkPackfileHeader::Self *)v20 != v57 )
            {
              *(uint16_t *)(v24 + 16 * ((unsigned int)v20 >> 3)) = *(uint16_t *)(v22 + 16 * ((unsigned int)v20 >> 3));
              if ( v20 > (int)(uintptr_t)(v57) + 1 )
              {
                *(uint16_t *)(v24 + 2 * ((uint32_t)(uintptr_t)(v57) + 1)) = *(uint16_t *)(v22 + 2 * ((uint32_t)(uintptr_t)(v57) + 1));
                if ( v20 > (int)(uintptr_t)(v57) + 2 )
                {
                  *(uint16_t *)(v24 + 2 * ((uint32_t)(uintptr_t)(v57) + 2)) = *(uint16_t *)(v22 + 2 * ((uint32_t)(uintptr_t)(v57) + 2));
                  if ( v20 > (int)(uintptr_t)(v57) + 3 )
                  {
                    *(uint16_t *)(v24 + 2 * ((uint32_t)(uintptr_t)(v57) + 3)) = *(uint16_t *)(v22 + 2 * ((uint32_t)(uintptr_t)(v57) + 3));
                    if ( v20 > (int)(uintptr_t)(v57) + 4 )
                    {
                      *(uint16_t *)(v24 + 2 * ((uint32_t)(uintptr_t)(v57) + 4)) = *(uint16_t *)(v22 + 2 * ((uint32_t)(uintptr_t)(v57) + 4));
                      if ( v20 > (int)(uintptr_t)(v57) + 5 )
                      {
                        *(uint16_t *)(v24 + 2 * ((uint32_t)(uintptr_t)(v57) + 5)) = *(uint16_t *)(v22 + 2 * ((uint32_t)(uintptr_t)(v57) + 5));
                        if ( v20 > (int)(uintptr_t)(v57) + 6 )
                          *(uint16_t *)(v24 + 2 * ((uint32_t)(uintptr_t)(v57) + 6)) = *(uint16_t *)(v22 + 2 * ((uint32_t)(uintptr_t)(v57) + 6));
                      }
                    }
                  }
                }
              }
            }
          }
          else
          {
            for ( k = 0; k != v20; ++k )
              *(uint16_t *)(v24 + 2 * k) = *(uint16_t *)(v22 + 2 * k);
          }
        }
        v55[6] = (uint32_t)(uintptr_t)(v53);
      }
      v12 = v67;
      v66 = 0;
      if ( v67 < 0 )
        goto LABEL_25;
    }
    (*(void (**)(uint32_t *, unsigned int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v65,
      2 * (v12 & 0x3FFFFFFF));
LABEL_25:
    v65 = 0;
    v67 = 0x80000000;
    hkStringPtr::Destroy((hkStringPtr::Self *)v63);
    v60[0] = ((uint32_t)(uintptr_t)&off_2054CB8);
    goto LABEL_7;
  }
  *v55 = 2;
  hkStringPtr::opAssign(v51, (hkString::Self *)v90);
  v55[1] = v88[3];
  hkMemUtil::memCpy(v46, v89, 4u);
  if ( *((uint8_t *)v55 + 12) != (uint8_t)hkStructureLayout::HostLayoutRules )
  {
    if ( *((uint8_t *)v55 + 13) == BYTE1(hkStructureLayout::HostLayoutRules) )
    {
LABEL_43:
      if ( v47 != nullptr && *v47 == 0 )
      {
        *v47 = 3;
        hkStringPtr::opAssign(
          (hkStringPtr::Self *)(v47 + 1),
          (hkString::Self *)"Binary Packfile has the wrong endiannes or pointer size. Predicates won't be read.");
      }
      goto LABEL_7;
    }
LABEL_64:
    v27 = *((uint8_t *)v55 + 7);
    *((uint8_t *)v55 + 7) = *((uint8_t *)v55 + 4);
    v28 = *((uint8_t *)v55 + 5);
    *((uint8_t *)v55 + 4) = v27;
    v29 = *((uint8_t *)v55 + 6);
    *((uint8_t *)v55 + 6) = v28;
    *((uint8_t *)v55 + 5) = v29;
    goto LABEL_43;
  }
  if ( *((uint8_t *)v55 + 13) != BYTE1(hkStructureLayout::HostLayoutRules) )
    goto LABEL_64;
  v96 = (int *)(v55 + 5);
  hkPackfileHeader::readPredicates(
    (hkPackfileHeader::Self *)&v59,
    (hkStreamReader::Self *)v88,
    (hkArray<unsigned short, hkContainerHeapAllocator::Self> *)v68);
  if ( v59 == 0 )
    *((uint16_t *)v55 + 8) = v92;
LABEL_7:
  v86 = 0;
  if ( v87 >= 0 )
    (*(void (**)(uint32_t *, unsigned int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v85,
      2 * (v87 & 0x3FFFFFFF));
  v85 = 0;
  v87 = 0x80000000;
  hkStringPtr::Destroy((hkStringPtr::Self *)v83);
  v61[0] = ((uint32_t)(uintptr_t)&off_2054CB8);
  v71 = 0;
  v68[0] = ((uint32_t)(uintptr_t)&off_20A63E8);
  result = v72;
  if ( v72 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
             (uint32_t *)(hkContainerTempAllocator::s_alloc),
             v70,
             v72 & 0x3FFFFFFF);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkSerializeUtil::isLoadable  (binary VA: 0x1880070)
// Original: hkSerializeUtil::isLoadable
// ----------------------------------------------------------------------------
int hkSerializeUtil::isLoadable(hkSerializeUtil::Self *self)
{
  hkStreamReader::Self *v1;
  int result;
  int v3;
  int v4;
  char *CurrentVersion;
  unsigned int v6;
  typedef hkVersionUtil::Self *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef char _g4_t_v11;
  typedef uint32_t _g4_t_v12[2];
  typedef int _g4_t_v13;
  typedef uint8_t _g4_t_v14[8];
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef hkSerializeUtil::Self **_g4_t_v18;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v8)) > _g4_s1 ? (32u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v9)) > _g4_s2 ? (32u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v10)) > _g4_s3 ? (36u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (43u + sizeof(_g4_t_v11)) > _g4_s4 ? (43u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v12)) > _g4_s5 ? (44u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v13)) > _g4_s6 ? (52u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v14)) > _g4_s7 ? (56u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v15)) > _g4_s8 ? (64u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v16)) > _g4_s9 ? (68u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v17)) > _g4_s10 ? (72u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v18)) > _g4_s11 ? (84u + sizeof(_g4_t_v18)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 36u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 43u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 52u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 56u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 64u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 68u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 72u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 84u);

  v18 = &self;
  v1 = (hkStreamReader::Self *)(self);
  if ( self == nullptr )
    return 0;
  (*(void (**)(char *))(*(uint32_t *)self + 20))(&v11);
  if ( v11 == 0 )
    return 0;
  hkTagfileReader::detectFormat((hkTagfileReader::Self *)&v10, v1);
  result = 1;
  if ( v10 > 1 )
    return result;
  hkStringPtr::Construct((hkStringPtr::Self *)&v13);
  v15 = 0;
  v16 = 0;
  v17 = 0x80000000;
  hkSerializeUtil::detectFormat((int)(uintptr_t)(v1), v12, nullptr);
  v3 = v12[0];
  if ( v12[0] == 2 )
  {
    if ( hkString::memCmp((hkString::Self *)v14, &hkStructureLayout::HostLayoutRules, (size_t)&loc_4) != 0 )
    {
      v3 = v12[0];
      goto LABEL_5;
    }
    CurrentVersion = (char *)hkVersionUtil::getCurrentVersion(v7);
    v6 = v13 & 0xFFFFFFFE;
    if ( CurrentVersion != nullptr && v6 != 0 )
    {
      if ( hkString::strCmp((hkString::Self *)(v13 & 0xFFFFFFFE), CurrentVersion) != 0 )
        goto LABEL_16;
    }
    else if ( v6 != 0 || CurrentVersion != nullptr )
    {
LABEL_16:
      if ( (*(int (**)(uint32_t, uint32_t *))(*hkSingleton<hkSerializeDeprecated::Self>::s_instance + 28))(
             (uint32_t)(uintptr_t)(hkSingleton<hkSerializeDeprecated::Self>::s_instance),
             v12) == 0 )
        goto LABEL_6;
LABEL_17:
      v4 = 1;
      goto LABEL_7;
    }
    if ( v12[1] == *(uint32_t *)"\v" )
      goto LABEL_17;
    goto LABEL_16;
  }
LABEL_5:
  if ( v3 == 3 )
    goto LABEL_16;
LABEL_6:
  v4 = 0;
LABEL_7:
  v16 = 0;
  if ( v17 >= 0 )
  {
    v8 = v4;
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v15,
      2 * (v17 & 0x3FFFFFFF));
    v4 = v8;
  }
  v9 = v4;
  v15 = 0;
  v17 = 0x80000000;
  hkStringPtr::Destroy((hkStringPtr::Self *)&v13);
  return v9;
}

// ----------------------------------------------------------------------------
// Function: hkSerializeUtil::detectFormat  (binary VA: 0x1880240)
// Original: hkSerializeUtil::detectFormat
// ----------------------------------------------------------------------------
uint32_t * hkSerializeUtil::detectFormat(uint32_t *a1, int a2, uint32_t *a3)
{
  typedef int _g4_t_v4;
  typedef uint8_t _g4_t_v5[12];
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v5)) > _g4_s1 ? (16u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v6)) > _g4_s2 ? (28u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v7)) > _g4_s3 ? (32u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v8)) > _g4_s4 ? (36u + sizeof(_g4_t_v8)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 16u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 32u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 36u);

  hkStringPtr::Construct((hkStringPtr::Self *)v5);
  v6 = 0;
  v7 = 0;
  v8 = 0x80000000;
  hkSerializeUtil::detectFormat(a2, &v4, a3);
  v7 = 0;
  *a1 = v4;
  if ( v8 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v6,
      2 * (v8 & 0x3FFFFFFF));
  v6 = 0;
  v8 = 0x80000000;
  hkStringPtr::Destroy((hkStringPtr::Self *)v5);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkSerializeUtil::detectFormat  (binary VA: 0x1880820)
// Original: hkSerializeUtil::detectFormat
// ----------------------------------------------------------------------------
void hkSerializeUtil::detectFormat(char *a1, uint32_t *a2, uint32_t *a3)
{
  typedef uint8_t _g4_t_v3[8];
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_v3)) > _g4_s0 ? (4u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 4u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  hkIstream::Construct((hkIstream::Self *)v3, a1);
  hkSerializeUtil::detectFormat(v4, a2, a3);
  hkIstream::Destroy((hkIstream::Self *)v3);
}

// ----------------------------------------------------------------------------
// Function: hkSerializeUtil::savePackfile  (binary VA: 0x1880870)
// Original: hkSerializeUtil::savePackfile
// ----------------------------------------------------------------------------
uint32_t * hkSerializeUtil::savePackfile(uint32_t *a1, int a2, int a3, int a4, int a5, int a6, char a7)
{
  int v7;
  int v8;
  char v9;
  char v10;
  unsigned int v11;
  int16_t *j;
  int v13;
  int16_t v14;
  int v16;
  unsigned int v17;
  int i;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef signed int _g4_t_v21;
  typedef unsigned int _g4_t_v22;
  typedef unsigned int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef unsigned int _g4_t_v25;
  typedef unsigned int _g4_t_v26;
  typedef int16_t _g4_t_v27;
  typedef int _g4_t_v28;
  typedef char _g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef char _g4_t_v32[8];
  typedef uint8_t _g4_t_v33[12];
  typedef uint32_t _g4_t_v34[2];
  typedef char _g4_t_v35;
  typedef char _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41[134];
  enum : size_t {
    _g4_s0 = 736u,
    _g4_s1 = (12u + sizeof(_g4_t_v19)) > _g4_s0 ? (12u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v20)) > _g4_s1 ? (16u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v21)) > _g4_s2 ? (36u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v22)) > _g4_s3 ? (40u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v23)) > _g4_s4 ? (44u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v24)) > _g4_s5 ? (44u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v25)) > _g4_s6 ? (48u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v26)) > _g4_s7 ? (52u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v27)) > _g4_s8 ? (52u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v28)) > _g4_s9 ? (56u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v29)) > _g4_s10 ? (64u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v30)) > _g4_s11 ? (68u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v31)) > _g4_s12 ? (72u + sizeof(_g4_t_v31)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v32)) > _g4_s13 ? (76u + sizeof(_g4_t_v32)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v33)) > _g4_s14 ? (84u + sizeof(_g4_t_v33)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v34)) > _g4_s15 ? (96u + sizeof(_g4_t_v34)) : _g4_s15,
    _g4_s17 = (104u + sizeof(_g4_t_v35)) > _g4_s16 ? (104u + sizeof(_g4_t_v35)) : _g4_s16,
    _g4_s18 = (105u + sizeof(_g4_t_v36)) > _g4_s17 ? (105u + sizeof(_g4_t_v36)) : _g4_s17,
    _g4_s19 = (108u + sizeof(_g4_t_v37)) > _g4_s18 ? (108u + sizeof(_g4_t_v37)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v38)) > _g4_s19 ? (112u + sizeof(_g4_t_v38)) : _g4_s19,
    _g4_s21 = (116u + sizeof(_g4_t_v39)) > _g4_s20 ? (116u + sizeof(_g4_t_v39)) : _g4_s20,
    _g4_s22 = (120u + sizeof(_g4_t_v40)) > _g4_s21 ? (120u + sizeof(_g4_t_v40)) : _g4_s21,
    _g4_s23 = (128u + sizeof(_g4_t_v41)) > _g4_s22 ? (128u + sizeof(_g4_t_v41)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 52u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 52u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 56u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 68u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 72u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 76u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 84u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 96u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 104u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 105u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 108u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 112u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 116u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 120u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 128u);

  v41[130] = (int)(uintptr_t)(&a1);
  v30 = a1;
  v31 = a2;
  v7 = a3;
  v28 = a6;
  v29 = a7;
  if ( a4 != 0 )
  {
    v8 = *(uint32_t *)(a5 + 20);
    v34[0] = *(uint32_t *)a5;
    v34[1] = *(uint32_t *)(a5 + 4);
    v9 = *(uint8_t *)(a5 + 8);
    v38 = 0;
    v35 = v9;
    v39 = 0;
    v10 = *(uint8_t *)(a5 + 9);
    v40 = 0x80000000;
    v36 = v10;
    v11 = *(uint32_t *)(a5 + 16);
    v37 = *(uint32_t *)(a5 + 12);
    v26 = v11;
    if ( v8 > 0 )
    {
      v23 = v8;
      hkArrayUtil::reserve((hkArrayUtil::Self *)v32, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v38, v8, 2);
      v25 = v39 + v39 + v38;
      v8 = v23;
      if ( (v26 >= v25 + 16 || v25 >= v26 + 16) && v23 > 0xA )
      {
        v21 = v23;
        v22 = v23 >> 3;
        v16 = 0;
        v24 = 8 * (v23 >> 3);
        v17 = 0;
        do
        {
          ++v17;
          *(__m128i *)(v25 + v16) = *(__m128i *)(v26 + v16);
          v16 += 16;
        }
        while ( v22 > v17 );
        v8 = v21;
        if ( v24 != v21 )
        {
          *(uint16_t *)(v25 + 2 * v24) = *(uint16_t *)(v26 + 2 * v24);
          if ( v21 > v24 + 1 )
          {
            *(uint16_t *)(v25 + 2 * (v24 + 1)) = *(uint16_t *)(v26 + 2 * (v24 + 1));
            if ( v21 > v24 + 2 )
            {
              *(uint16_t *)(v25 + 2 * (v24 + 2)) = *(uint16_t *)(v26 + 2 * (v24 + 2));
              if ( v21 > v24 + 3 )
              {
                *(uint16_t *)(v25 + 2 * (v24 + 3)) = *(uint16_t *)(v26 + 2 * (v24 + 3));
                if ( v21 > v24 + 4 )
                {
                  *(uint16_t *)(v25 + 2 * (v24 + 4)) = *(uint16_t *)(v26 + 2 * (v24 + 4));
                  if ( v21 > v24 + 5 )
                  {
                    *(uint16_t *)(v25 + 2 * (v24 + 5)) = *(uint16_t *)(v26 + 2 * (v24 + 5));
                    if ( v21 > v24 + 6 )
                      *(uint16_t *)(v25 + 2 * (v24 + 6)) = *(uint16_t *)(v26 + 2 * (v24 + 6));
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        for ( i = 0; i != v23; ++i )
          *(uint16_t *)(v25 + 2 * i) = *(uint16_t *)(v26 + 2 * i);
      }
    }
    v39 = v8;
    for ( j = (int16_t *)hkContentPredicate::m_head; j != nullptr; j = *((int16_t **)j + 3) )
    {
      while ( (*((uint8_t (**)(int, int))j + 2))(v31, v7) == 0 )
      {
        j = *((int16_t **)j + 3);
        if ( j == nullptr )
          goto LABEL_10;
      }
      v13 = v39;
      v14 = *j;
      if ( v39 == (v40 & 0x3FFFFFFF) )
      {
        v27 = *j;
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkMemoryAllocator::Self *)&v38,
          (char *)&dword_0 + 2,
          v19);
        v13 = v39;
        v14 = v27;
      }
      *(uint16_t *)(v38 + 2 * v13) = v14;
      ++v39;
    }
LABEL_10:
    if ( (v29 & 2) != 0 )
      v36 = 1;
    if ( (v29 & 1) != 0 )
    {
      hkErrStream::Construct((hkErrStream::Self *)v33, (hkString::Self *)v41, 512);
      hkOstream::opShl(
        (int)(uintptr_t)(v33),
        (hkString::Self *)"hkSerializeUtil::savePackfile will not save an Xml Packfile as this format can lose data precision, "
                    "writing a binary packfile instead. Use the deprecated packfile writer if you need an Xml Packfile");
      hkError::messageWarning(
        (hkError::Self *)0x1D29011F,
        (int)(uintptr_t)(v41),
        "Util/hkSerializeUtil.cpp",
        (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_264)->st_shndx + 1,
        v20);
      hkErrStream::Destroy((hkErrStream::Self *)v33);
    }
    hkBinaryPackfileWriter::Construct((hkPackfileWriter::Self *)v41, v34);
    (*(void (**)(int *, int, int, int))(v41[0] + 24))(v41, v31, v7, v28);
    hkBinaryPackfileWriter::save(v30);
    hkBinaryPackfileWriter::Destroy((hkBinaryPackfileWriter::Self *)v41);
    v39 = 0;
    if ( v40 >= 0 )
      (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v38,
        2 * (v40 & 0x3FFFFFFF));
  }
  else
  {
    *a1 = 1;
  }
  return v30;
}

// ----------------------------------------------------------------------------
// Function: hkSerializeUtil::saveTagfile  (binary VA: 0x1880d50)
// Original: hkSerializeUtil::saveTagfile
// ----------------------------------------------------------------------------
uint32_t * hkSerializeUtil::saveTagfile(uint32_t *a1, void *a2, const hkClass::Self *a3, int a4, int a5, char a6)
{
  const hkClass::Self *v6;
  int v7;
  int16_t *i;
  int v9;
  int16_t v10;
  uint32_t *v11;
  int v12;
  int v13;
  uint32_t *savedregs;
  uint8_t *retaddr;
  typedef int16_t _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef char _g4_t_v18;
  typedef void *_g4_t_v19;
  typedef uint32_t *_g4_t_v20;
  typedef void (**_g4_t_v21)(hkBinaryTagfileWriter::Self *);
  typedef int _g4_t_v22;
  typedef uint8_t _g4_t_v23[4];
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint32_t _g4_t_v27[7];
  typedef uint32_t _g4_t_v28[54];
  typedef int _g4_t_v29;
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v16)) > _g4_s1 ? (4u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v17)) > _g4_s2 ? (8u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v18)) > _g4_s3 ? (12u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v19)) > _g4_s4 ? (20u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v20)) > _g4_s5 ? (28u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v21)) > _g4_s6 ? (32u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v22)) > _g4_s7 ? (36u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v23)) > _g4_s8 ? (40u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v24)) > _g4_s9 ? (44u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v25)) > _g4_s10 ? (48u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v26)) > _g4_s11 ? (52u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v27)) > _g4_s12 ? (56u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v28)) > _g4_s13 ? (84u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (300u + sizeof(_g4_t_v29)) > _g4_s14 ? (300u + sizeof(_g4_t_v29)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 52u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 56u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 84u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 300u);

  v28[51] = (uint32_t)(uintptr_t)(&a1);
  v17 = a1;
  v19 = a2;
  v18 = a6;
  v6 = a3;
  v7 = a5;
  v16 = a4;
  hkDataWorldNative::Construct(v28, (a6 & 2) != 0);
  hkDataWorldNative::setContents((hkDataWorldNative::Self *)v28, v19, v6);
  v27[4] = (*(int (**)(uint32_t *))(*hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance + 24))(hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance);
  v27[0] = ((uint32_t)(uintptr_t)&off_20A63C8);
  v27[1] = -65535;
  v27[2] = v7;
  v27[3] = (uint32_t)(uintptr_t)(v28);
  if ( v16 == 0 )
  {
    *v17 = 1;
    goto LABEL_15;
  }
  v23[1] = 1;
  v23[2] = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0x80000000;
  v23[0] = (v18 & 8) == 0;
  for ( i = (int16_t *)hkContentPredicate::m_head; i != nullptr; ++v25 )
  {
    while ( (*((uint8_t (**)(void *, const hkClass::Self *))i + 2))(v19, v6) == 0 )
    {
      i = *((int16_t **)i + 3);
      if ( i == nullptr )
        goto LABEL_9;
    }
    v9 = v25;
    v10 = *i;
    if ( v25 == (v26 & 0x3FFFFFFF) )
    {
      v15 = *i;
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)&v24, 2, v29);
      v9 = v25;
      v10 = v15;
    }
    *(uint16_t *)(v24 + 2 * v9) = v10;
    i = *((int16_t **)i + 3);
  }
LABEL_9:
  if ( (v18 & 1) != 0 )
  {
    v28[52] = (uint32_t)(uintptr_t)(v28);
    hkDataWorldNative::getContents((hkDataWorldNative::Self *)&v20);
    v22 = -65535;
    v21 = (void (**)(hkBinaryTagfileWriter::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A69E8));
    retaddr = v23;
    savedregs = v27;
    v29 = v16;
    v28[52] = (uint32_t)(uintptr_t)(&v21);
    v28[53] = (uint32_t)(uintptr_t)(&v20);
    hkXmlTagfileWriter::save(v17);
    v11 = v20;
    if ( v20 != nullptr )
    {
LABEL_11:
      v12 = v11[1];
      v13 = v11[2];
      LOWORD(v12) = 0;
      v11[1] = v12 | (uint16_t)(v11[1] - 1);
      v11[2] = v13 - 1;
      if ( v13 == 1 )
        G4_VCALL<void>(v11, 4);
    }
  }
  else
  {
    v28[52] = (uint32_t)(uintptr_t)(v28);
    hkDataWorldNative::getContents((hkDataWorldNative::Self *)&v20);
    v22 = -65535;
    v21 = (void (**)(hkBinaryTagfileWriter::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A67A8));
    retaddr = v23;
    savedregs = v27;
    v29 = v16;
    v28[52] = (uint32_t)(uintptr_t)(&v21);
    v28[53] = (uint32_t)(uintptr_t)(&v20);
    hkBinaryTagfileWriter::save(v17);
    v11 = v20;
    if ( v20 != nullptr )
      goto LABEL_11;
  }
  v25 = 0;
  if ( v26 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v24,
      2 * (v26 & 0x3FFFFFFF));
LABEL_15:
  v27[0] = ((uint32_t)(uintptr_t)&off_2054CB8);
  hkDataWorldNative::Destroy((hkDataWorldNative::Self *)v28);
  return v17;
}

// ----------------------------------------------------------------------------
// Function: hkSerializeUtil::save  (binary VA: 0x18810d0)
// Original: hkSerializeUtil::save
// ----------------------------------------------------------------------------
uint32_t * hkSerializeUtil::save(uint32_t *a1, void *a2, const hkClass::Self *a3, int a4, char a5)
{
  hkSerializeUtil::saveTagfile(a1, a2, a3, a4, 0, a5);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkSerializeUtil::load  (binary VA: 0x1881800)
// Original: hkSerializeUtil::load
// ----------------------------------------------------------------------------
int hkSerializeUtil::load(hkDataWorld::Self *a1, hkStringPtr::Self *a2, char a3, unsigned int a4, int a5)
{
  hkDataWorld::Self *v5;
  hkStringPtr::Self *v6;
  int v8;
  char *v9;
  hkLifoAllocator::Self *v10;
  hkStringPtr::Self *v11;
  int v12;
  uint32_t *v13;
  int v14;
  int v15;
  int v16;
  hkLifoAllocator::Self *v17;
  hkStringPtr::Self *v18;
  int v19;
  hkLifoAllocator::Self *v20;
  typedef unsigned int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_TypeInfoRegistry;
  typedef hkStringPtr::Self *_g4_t_v24;
  typedef hkStringPtr::Self *_g4_t_v25;
  typedef hkClassNameRegistry::Self *_g4_t_ClassNameRegistry;
  typedef hkLifoAllocator::Self **_g4_t_address;
  typedef char *_g4_t_v28;
  typedef hkStringPtr::Self *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef char _g4_t_v31[13];
  typedef uint32_t *_g4_t_v32;
  typedef uint32_t _g4_t_v33[2];
  typedef uint8_t _g4_t_v34[12];
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef uint32_t _g4_t_v38[44];
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (12u + sizeof(_g4_t_v21)) > _g4_s0 ? (12u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v22)) > _g4_s1 ? (16u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_TypeInfoRegistry)) > _g4_s2 ? (36u + sizeof(_g4_t_TypeInfoRegistry)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v24)) > _g4_s3 ? (36u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v25)) > _g4_s4 ? (36u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_ClassNameRegistry)) > _g4_s5 ? (40u + sizeof(_g4_t_ClassNameRegistry)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_address)) > _g4_s6 ? (44u + sizeof(_g4_t_address)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v28)) > _g4_s7 ? (48u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v29)) > _g4_s8 ? (52u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v30)) > _g4_s9 ? (56u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (63u + sizeof(_g4_t_v31)) > _g4_s10 ? (63u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v32)) > _g4_s11 ? (76u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v33)) > _g4_s12 ? (80u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v34)) > _g4_s13 ? (88u + sizeof(_g4_t_v34)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v35)) > _g4_s14 ? (100u + sizeof(_g4_t_v35)) : _g4_s14,
    _g4_s16 = (104u + sizeof(_g4_t_v36)) > _g4_s15 ? (104u + sizeof(_g4_t_v36)) : _g4_s15,
    _g4_s17 = (108u + sizeof(_g4_t_v37)) > _g4_s16 ? (108u + sizeof(_g4_t_v37)) : _g4_s16,
    _g4_s18 = (120u + sizeof(_g4_t_v38)) > _g4_s17 ? (120u + sizeof(_g4_t_v38)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_TypeInfoRegistry &TypeInfoRegistry = *reinterpret_cast<_g4_t_TypeInfoRegistry *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 36u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_ClassNameRegistry &ClassNameRegistry = *reinterpret_cast<_g4_t_ClassNameRegistry *>(_g4_sf + 40u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 52u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 56u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 63u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 76u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 80u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 88u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 100u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 104u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 108u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 120u);

  v38[40] = (uint32_t)(uintptr_t)(&a1);
  v5 = a1;
  v6 = a2;
  if ( a1 == nullptr )
  {
    if ( a2 == nullptr || *(uint32_t *)a2 != 0 )
      return 0;
    *(uint32_t *)a2 = 1;
    v9 = "Stream pointer is null";
    goto LABEL_17;
  }
  v29 = a2;
  (*(void (**)(char *))(*(uint32_t *)a1 + 20))(v31);
  v6 = v29;
  if ( v31[0] == 0 )
  {
    if ( v29 == nullptr || *(uint32_t *)v29 != 0 )
      return 0;
    *(uint32_t *)v29 = 1;
    v9 = "Stream is not ok";
LABEL_17:
    hkStringPtr::opAssign((hkStringPtr::Self *)((char *)v6 + 4), (hkString::Self *)v9);
    return 0;
  }
  ClassNameRegistry = (hkClassNameRegistry::Self *)hkSerializeUtil::LoadOptions::getClassNameRegistry((hkSerializeUtil::LoadOptions::Self *)&a3);
  TypeInfoRegistry = hkSerializeUtil::LoadOptions::getTypeInfoRegistry((hkSerializeUtil::LoadOptions::Self *)&a3);
  hkStringPtr::Construct((hkStringPtr::Self *)v34);
  v35 = 0;
  v36 = 0;
  v37 = 0x80000000;
  hkSerializeUtil::detectFormat((int)(uintptr_t)(v5), v33, v29);
  if ( v33[0] == 4 )
  {
    address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v10 = *address;
    v11 = v29;
    v28 = *((char **)*address + 3);
    if ( *((int *)*address + 2) > 0x3FFF
      && (unsigned int)(v12 = *((uint32_t *)*address + 3) + 0x4000) <= *((uint32_t *)v10 + 4) )
    {
      *((uint32_t *)v10 + 3) = v12;
    }
    else
    {
      v28 = (char *)hkLifoAllocator::allocateFromNewSlab(v10, 0x4000);
      v11 = v29;
    }
    v24 = v11;
    hkDataWorldDict::Construct((hkDataWorldDict::Self *)v38, *((hkMemoryAllocator::Self **)*address + 11));
    sub_18815B0(
      (hkVersionPatchManager::ClassWrapper::Self *)&v30,
      v5,
      (hkVersionPatchManager::ClassWrapper::Self *)v38,
      v24,
      ClassNameRegistry);
    if ( v30 == 0 )
    {
LABEL_22:
      hkDataWorldDict::getContents((hkDataWorldDict::Self *)&v32);
      v8 = (int)(uintptr_t)(hkDataObjectUtil::toResourceWithRegistry(
             (hkDataObjectUtil::Self *)&v32,
             ClassNameRegistry,
             (const hkClassNameRegistry::Self *)((char *)&dword_0 + 1),
             v21));
      v13 = v32;
      if ( v32 != nullptr )
      {
        v14 = v32[1];
        LOWORD(v14) = 0;
        v15 = v14 | (uint16_t)(v32[1] - 1);
        v16 = v32[2];
        v32[1] = v15;
        v13[2] = v16 - 1;
        if ( v16 == 1 )
          G4_VCALL<void>(v13, 4);
      }
      goto LABEL_31;
    }
  }
  else
  {
    if ( v33[0] <= 4 )
    {
      if ( v33[0] >= 2 )
      {
        v21 = a4;
        v22 = a5;
        v8 = sub_1880300((int)(uintptr_t)(v5), v33, v29, TypeInfoRegistry, a3);
        goto LABEL_10;
      }
LABEL_34:
      v8 = 0;
      if ( v29 != nullptr && *(uint32_t *)v29 == 0 )
      {
        *(uint32_t *)v29 = 2;
        hkStringPtr::opAssign((hkStringPtr::Self *)((char *)v29 + 4), (hkString::Self *)"Unable to detect format from stream");
      }
      goto LABEL_10;
    }
    if ( v33[0] != 5 )
      goto LABEL_34;
    address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v17 = *address;
    v18 = v29;
    v28 = *((char **)*address + 3);
    if ( *((int *)*address + 2) > 0x3FFF
      && (unsigned int)(v19 = *((uint32_t *)*address + 3) + 0x4000) <= *((uint32_t *)v17 + 4) )
    {
      *((uint32_t *)v17 + 3) = v19;
    }
    else
    {
      v28 = (char *)hkLifoAllocator::allocateFromNewSlab(v17, 0x4000);
      v18 = v29;
    }
    v25 = v18;
    hkDataWorldDict::Construct((hkDataWorldDict::Self *)v38, *((hkMemoryAllocator::Self **)*address + 11));
    sub_1881360(
      (hkVersionPatchManager::ClassWrapper::Self *)&v30,
      v5,
      (hkVersionPatchManager::ClassWrapper::Self *)v38,
      v25,
      ClassNameRegistry);
    if ( v30 == 0 )
      goto LABEL_22;
  }
  v8 = 0;
  if ( (a3 & 2) != 0 )
    goto LABEL_22;
LABEL_31:
  hkDataWorldDict::Destroy((hkDataWorldDict::Self *)v38);
  v20 = *address;
  if ( *((int *)*address + 2) <= 0x3FFF || *((char **)v20 + 3) != v28 + 0x4000 || v28 == *((char **)v20 + 5) )
    hkLifoAllocator::slowBlockFree(v20, v28, 0x4000);
  else
    *((uint32_t *)v20 + 3) = (uint32_t)(uintptr_t)(v28);
LABEL_10:
  v36 = 0;
  if ( v37 >= 0 )
    (*(void (**)(uint32_t *, int, int, unsigned int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v35,
      2 * (v37 & 0x3FFFFFFF),
      v21,
      v22);
  v35 = 0;
  v37 = 0x80000000;
  hkStringPtr::Destroy((hkStringPtr::Self *)v34);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: hkSerializeUtil::load  (binary VA: 0x1881d00)
// Original: hkSerializeUtil::load
// ----------------------------------------------------------------------------
int hkSerializeUtil::load(char *a1, hkStringPtr::Self *a2, char a3, unsigned int a4, int a5)
{
  int v5;
  typedef uint8_t _g4_t_v7[8];
  typedef hkDataWorld::Self *_g4_t_v8;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  hkIstream::Construct((hkIstream::Self *)v7, a1);
  v5 = hkSerializeUtil::load(v8, a2, a3, a4, a5);
  hkIstream::Destroy((hkIstream::Self *)v7);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkSerializeUtil::load  (binary VA: 0x1881d70)
// Original: hkSerializeUtil::load
// ----------------------------------------------------------------------------
int hkSerializeUtil::load(hkNativePackfileUtils::Self *a1, size_t a2, hkStringPtr::Self *a3, char a4, unsigned int a5, int a6)
{
  bool v6;
  char *CurrentVersion;
  int ClassNameRegistry;
  typedef hkString::Self *_g4_t_v10;
  typedef const hkTypeInfoRegistry::Self *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef uint8_t _g4_t_v13[5];
  typedef uint8_t _g4_t_v14[8];
  typedef hkDataWorld::Self *_g4_t_v15;
  typedef uint32_t _g4_t_v16[10];
  typedef char _g4_t_v17;
  typedef int _g4_t_v18;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v12)) > _g4_s2 ? (24u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (31u + sizeof(_g4_t_v13)) > _g4_s3 ? (31u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v14)) > _g4_s4 ? (36u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v15)) > _g4_s5 ? (44u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v16)) > _g4_s6 ? (48u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (88u + sizeof(_g4_t_v17)) > _g4_s7 ? (88u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (104u + sizeof(_g4_t_v18)) > _g4_s8 ? (104u + sizeof(_g4_t_v18)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 31u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 88u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 104u);

  hkString::memSet((hkString::Self *)v16, (void *)0xFFFFFFFF, 0x40u);
  v6 = *(uint32_t *)a1 == 1474355287;
  v16[0] = 1474355287;
  v16[1] = 281067536;
  v17 = 0;
  v18 = 0;
  if ( v6
    && *((uint32_t *)a1 + 1) == 281067536
    && hkString::memCmp((hkNativePackfileUtils::Self *)((char *)a1 + 16), &hkStructureLayout::HostLayoutRules, (size_t)&loc_4) == 0 )
  {
    CurrentVersion = (char *)hkVersionUtil::getCurrentVersion(v10);
    if ( hkString::strCmp((hkNativePackfileUtils::Self *)((char *)a1 + 40), CurrentVersion) == 0 )
    {
      ClassNameRegistry = hkSerializeUtil::LoadOptions::getClassNameRegistry((hkSerializeUtil::LoadOptions::Self *)&a4);
      sub_187EB20(v13, (int *)a1, ClassNameRegistry);
      if ( v13[0] != 0 )
        return (int)(uintptr_t)(hkNativePackfileUtils::load(a1, (const void *)a2, 0, v11));
    }
  }
  hkIstream::Construct((hkIstream::Self *)v14, a1, a2);
  v12 = hkSerializeUtil::load(v15, a3, a4, a5, a6);
  hkIstream::Destroy((hkIstream::Self *)v14);
  return v12;
}

// ----------------------------------------------------------------------------
// Function: hkSerializeUtil::loadOnHeap  (binary VA: 0x1881ed0)
// Original: hkSerializeUtil::loadOnHeap
// ----------------------------------------------------------------------------
int hkSerializeUtil::loadOnHeap(int a1, hkSerializeUtil::LoadOptions::Self *a2, int a3, int a4, unsigned int a5)
{
  int v5;
  hkSerializeUtil::LoadOptions::Self *v6;
  hkSerializeUtil::LoadOptions::Self *v8;
  hkDataWorld::Self *v9;
  int v10;
  char *v11;
  char *v12;
  hkDataWorld::Self *v13;
  uint32_t *v14;
  int v15;
  int v16;
  bool v17;
  int v18;
  int Iterator;
  uint32_t *i;
  hkString::Self *Key;
  int (*v22)(hkClassNameRegistry::Self *, int);
  int v23;
  const hkClass::Self *v24;
  void *v25;
  uint32_t *v26;
  int v27;
  int16_t v28;
  uint32_t *v29;
  int v30;
  int v31;
  int v32;
  int32_t v33; // kr00_4
  int32_t v34;
  int32_t v35; // ett
  typedef int _g4_t_v36;
  typedef unsigned int _g4_t_v37;
  typedef unsigned int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef hkClassNameRegistry::Self *_g4_t_TypeInfoRegistry;
  typedef hkClassNameRegistry::Self *_g4_t_ClassNameRegistry;
  typedef char *_g4_t_Value;
  typedef hkSerializeUtil::LoadOptions::Self *_g4_t_v43;
  typedef volatile int32_t *_g4_t_v44;
  typedef int _g4_t_v45;
  typedef bool _g4_t_v46;
  typedef uint32_t *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef unsigned int _g4_t_v50;
  typedef uint32_t _g4_t_v51[2];
  typedef int _g4_t_v52;
  typedef char _g4_t_v53;
  typedef char _g4_t_v54;
  typedef char _g4_t_v55;
  typedef char _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef uint32_t _g4_t_v60[2];
  typedef hkString::Self *_g4_t_v61[9];
  typedef uint32_t _g4_t_v62[55];
  enum : size_t {
    _g4_s0 = 448u,
    _g4_s1 = (8u + sizeof(_g4_t_v36)) > _g4_s0 ? (8u + sizeof(_g4_t_v36)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v37)) > _g4_s1 ? (12u + sizeof(_g4_t_v37)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v38)) > _g4_s2 ? (12u + sizeof(_g4_t_v38)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v39)) > _g4_s3 ? (20u + sizeof(_g4_t_v39)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_TypeInfoRegistry)) > _g4_s4 ? (28u + sizeof(_g4_t_TypeInfoRegistry)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_ClassNameRegistry)) > _g4_s5 ? (32u + sizeof(_g4_t_ClassNameRegistry)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_Value)) > _g4_s6 ? (36u + sizeof(_g4_t_Value)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v43)) > _g4_s7 ? (48u + sizeof(_g4_t_v43)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v44)) > _g4_s8 ? (48u + sizeof(_g4_t_v44)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v45)) > _g4_s9 ? (52u + sizeof(_g4_t_v45)) : _g4_s9,
    _g4_s11 = (59u + sizeof(_g4_t_v46)) > _g4_s10 ? (59u + sizeof(_g4_t_v46)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v47)) > _g4_s11 ? (60u + sizeof(_g4_t_v47)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v48)) > _g4_s12 ? (64u + sizeof(_g4_t_v48)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v49)) > _g4_s13 ? (68u + sizeof(_g4_t_v49)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v50)) > _g4_s14 ? (72u + sizeof(_g4_t_v50)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v51)) > _g4_s15 ? (76u + sizeof(_g4_t_v51)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v52)) > _g4_s16 ? (84u + sizeof(_g4_t_v52)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v53)) > _g4_s17 ? (88u + sizeof(_g4_t_v53)) : _g4_s17,
    _g4_s19 = (89u + sizeof(_g4_t_v54)) > _g4_s18 ? (89u + sizeof(_g4_t_v54)) : _g4_s18,
    _g4_s20 = (90u + sizeof(_g4_t_v55)) > _g4_s19 ? (90u + sizeof(_g4_t_v55)) : _g4_s19,
    _g4_s21 = (91u + sizeof(_g4_t_v56)) > _g4_s20 ? (91u + sizeof(_g4_t_v56)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v57)) > _g4_s21 ? (96u + sizeof(_g4_t_v57)) : _g4_s21,
    _g4_s23 = (100u + sizeof(_g4_t_v58)) > _g4_s22 ? (100u + sizeof(_g4_t_v58)) : _g4_s22,
    _g4_s24 = (104u + sizeof(_g4_t_v59)) > _g4_s23 ? (104u + sizeof(_g4_t_v59)) : _g4_s23,
    _g4_s25 = (108u + sizeof(_g4_t_v60)) > _g4_s24 ? (108u + sizeof(_g4_t_v60)) : _g4_s24,
    _g4_s26 = (116u + sizeof(_g4_t_v61)) > _g4_s25 ? (116u + sizeof(_g4_t_v61)) : _g4_s25,
    _g4_s27 = (152u + sizeof(_g4_t_v62)) > _g4_s26 ? (152u + sizeof(_g4_t_v62)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 8u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 12u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 12u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 20u);
  _g4_t_TypeInfoRegistry &TypeInfoRegistry = *reinterpret_cast<_g4_t_TypeInfoRegistry *>(_g4_sf + 28u);
  _g4_t_ClassNameRegistry &ClassNameRegistry = *reinterpret_cast<_g4_t_ClassNameRegistry *>(_g4_sf + 32u);
  _g4_t_Value &Value = *reinterpret_cast<_g4_t_Value *>(_g4_sf + 36u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 48u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 48u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 52u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 59u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 60u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 64u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 68u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 72u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 76u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 84u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 88u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 89u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 90u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 91u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 96u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 100u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 104u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 108u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 116u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 152u);

  v62[51] = (uint32_t)(uintptr_t)(&a1);
  v5 = a1;
  v6 = a2;
  if ( a1 == 0 )
  {
    if ( a2 == nullptr || *(uint32_t *)a2 != 0 )
      return 0;
    *(uint32_t *)a2 = 1;
    v11 = "Stream pointer is null";
    goto LABEL_16;
  }
  v43 = a2;
  (*(void (**)(bool *))(*(uint32_t *)a1 + 20))(&v46);
  v6 = v43;
  if ( !v46 )
  {
    if ( v43 == nullptr || *(uint32_t *)v43 != 0 )
      return 0;
    *(uint32_t *)v43 = 1;
    v11 = "Stream is not ok";
LABEL_16:
    hkStringPtr::opAssign((hkSerializeUtil::LoadOptions::Self *)((char *)v6 + 4), (hkString::Self *)v11);
    return 0;
  }
  ClassNameRegistry = (hkClassNameRegistry::Self *)hkSerializeUtil::LoadOptions::getClassNameRegistry((hkSerializeUtil::LoadOptions::Self *)&a3);
  TypeInfoRegistry = (hkClassNameRegistry::Self *)hkSerializeUtil::LoadOptions::getTypeInfoRegistry((hkSerializeUtil::LoadOptions::Self *)&a3);
  hkStringPtr::Construct((hkStringPtr::Self *)&v52);
  v57 = 0;
  v58 = 0;
  v59 = 0x80000000;
  hkSerializeUtil::detectFormat(v5, v51, v43);
  v8 = v43;
  switch ( v51[0] )
  {
    case 2:
      if ( v53 == (uint8_t)hkStructureLayout::HostLayoutRules
        && v54 == BYTE1(hkStructureLayout::HostLayoutRules)
        && v55 == BYTE2(hkStructureLayout::HostLayoutRules)
        && v56 == HIBYTE(hkStructureLayout::HostLayoutRules)
        && (v52 & 0xFFFFFFFE) != 0 )
      {
        v18 = hkString::strCmp((hkString::Self *)(v52 & 0xFFFFFFFE), "hk_2014.1.0-r1");
        v8 = v43;
        if ( v18 == 0 && v51[1] == *(uint32_t *)"\v" )
        {
          v48 = a3;
          v49 = a4;
          v50 = a5;
          v60[0] = ((uint32_t)(uintptr_t)&off_20A64C8);
          v60[1] = -65535;
          hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Construct(v61);
          v61[4] = nullptr;
          v61[5] = (hkString::Self *)(&dword_0 + 1);
          Iterator = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getIterator((hkClassNameRegistry::Self *)((char *)TypeInfoRegistry + 8));
          v39 = v5;
          for ( i = (uint32_t *)((char *)TypeInfoRegistry + 8);
                ;
                Iterator = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getNext(i, Iterator) )
          {
            hkCachedHashMap_hkStringMapOperations_hk_b9db0c::isValid(&v46, (int)(uintptr_t)(i), Iterator);
            if ( !v46 )
              break;
            Value = (char *)hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getValue(i, Iterator);
            Key = (hkString::Self *)hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getKey(i, Iterator);
            hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
              (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)v61,
              Key,
              (unsigned int)(uintptr_t)(Value));
          }
          v36 = v49;
          v38 = v50;
          v44 = (volatile int32_t *)sub_1880300(v39, v51, v43, (int)(uintptr_t)(v60), v48);
          if ( v44 != nullptr )
          {
            hkDataWorldNative::Construct(v62, 0);
            hkDataWorldNative::setClassRegistry((hkDataWorldNative::Self *)v62, ClassNameRegistry);
            v22 = *(int (**)(hkClassNameRegistry::Self *, int))(*(uint32_t *)ClassNameRegistry + 24);
            v23 = G4_VCALL<int>(v44, 36);
            v24 = (const hkClass::Self *)v22(ClassNameRegistry, v23);
            if ( v24 != nullptr )
            {
              v25 = (void *)G4_VCALL<int>(v44, 32, 0, TypeInfoRegistry, v36);
              v26 = (uint32_t *)hkDataWorldNative::wrapObject((hkDataWorldNative::Self *)v62, v25, v24);
              v47 = v26;
              if ( v26 != nullptr )
              {
                v27 = v26[1];
                ++v26[2];
                v28 = v27;
                LOWORD(v27) = 0;
                v26[1] = v27 | (uint16_t)(v28 + 1);
              }
              v10 = (int)(uintptr_t)(hkDataObjectUtil::toObjectWithRegistry(
                      (hkDataObjectUtil::Self *)&v47,
                      ClassNameRegistry,
                      TypeInfoRegistry,
                      (const hkTypeInfoRegistry::Self *)((char *)&dword_0 + 1),
                      v38));
              v29 = v47;
              if ( v47 != nullptr )
              {
                v30 = v47[1];
                LOWORD(v30) = 0;
                v31 = v30 | (uint16_t)(v47[1] - 1);
                v17 = v47[2]-- == 1;
                v29[1] = v31;
                if ( v17 )
                  G4_VCALL<void>(v29, 4);
              }
              hkDataWorldNative::Destroy((hkDataWorldNative::Self *)v62);
            }
            else
            {
              v10 = 0;
              hkDataWorldNative::Destroy((hkDataWorldNative::Self *)v62);
            }
            if ( *((uint16_t *)v44 + 3) != 0 )
            {
              do
              {
                v33 = *((uint32_t *)v44 + 1);
                HIWORD(v32) = HIWORD(v33);
                LOWORD(v32) = 0;
                v34 = v32 | (uint16_t)(v33 - 1);
                v35 = v33;
              }
              while ( v35 != __sync_val_compare_and_swap(v44 + 1, v35, v34) );
              if ( (uint16_t)v34 == 0 )
                G4_VCALL<void>(v44, 16);
            }
          }
          else
          {
            v10 = 0;
          }
          v60[0] = ((uint32_t)(uintptr_t)&off_20A64C8);
          hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Destroy((hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)v61);
          goto LABEL_18;
        }
      }
      if ( (a3 & 1) != 0 )
      {
        if ( v8 != nullptr && *(uint32_t *)v8 == 0 )
        {
          *(uint32_t *)v8 = 4;
          v12 = "Packfile required versioning but versioning not supported in this context.";
          goto LABEL_30;
        }
LABEL_26:
        v10 = 0;
        goto LABEL_18;
      }
LABEL_17:
      v10 = (*(int (**)(uint32_t, int, uint32_t *, hkSerializeUtil::LoadOptions::Self *))(*hkSingleton<hkSerializeDeprecated::Self>::s_instance
                                                                                      + 36))(
              (uint32_t)(uintptr_t)(hkSingleton<hkSerializeDeprecated::Self>::s_instance),
              v5,
              v51,
              v8);
      goto LABEL_18;
    case 3:
      goto LABEL_17;
    case 4:
      hkDataWorldDict::Construct((hkDataWorldDict::Self *)v62);
      v13 = (hkDataWorld::Self *)v5;
      v10 = 0;
      sub_18815B0(
        (hkVersionPatchManager::ClassWrapper::Self *)&v45,
        v13,
        (hkVersionPatchManager::ClassWrapper::Self *)v62,
        v43,
        ClassNameRegistry);
      if ( v45 != 0 )
        goto LABEL_11;
LABEL_33:
      hkDataWorldDict::getContents((hkDataWorldDict::Self *)v60);
      v10 = (int)(uintptr_t)(hkDataObjectUtil::toObjectWithRegistry(
              (hkDataObjectUtil::Self *)v60,
              ClassNameRegistry,
              TypeInfoRegistry,
              (const hkTypeInfoRegistry::Self *)((char *)&dword_0 + 1),
              v37));
      v14 = (uint32_t *)v60[0];
      if ( v60[0] != 0 )
      {
        v15 = *(uint32_t *)(v60[0] + 4);
        LOWORD(v15) = 0;
        v16 = v15 | (uint16_t)(*(uint32_t *)(v60[0] + 4) - 1);
        v17 = (*(uint32_t *)(v60[0] + 8))-- == 1;
        v14[1] = v16;
        if ( v17 )
          G4_VCALL<void>(v14, 4);
      }
      goto LABEL_11;
    case 5:
      hkDataWorldDict::Construct((hkDataWorldDict::Self *)v62);
      v9 = (hkDataWorld::Self *)v5;
      v10 = 0;
      sub_1881360(
        (hkVersionPatchManager::ClassWrapper::Self *)&v45,
        v9,
        (hkVersionPatchManager::ClassWrapper::Self *)v62,
        v43,
        ClassNameRegistry);
      if ( v45 == 0 )
        goto LABEL_33;
LABEL_11:
      hkDataWorldDict::Destroy((hkDataWorldDict::Self *)v62);
LABEL_18:
      v58 = 0;
      if ( v59 >= 0 )
        (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v57,
          2 * (v59 & 0x3FFFFFFF));
      v57 = 0;
      v59 = 0x80000000;
      hkStringPtr::Destroy((hkStringPtr::Self *)&v52);
      return v10;
    default:
      if ( v43 != nullptr && *(uint32_t *)v43 == 0 )
      {
        *(uint32_t *)v43 = 2;
        v12 = "Unable to detect format from stream";
LABEL_30:
        v10 = 0;
        hkStringPtr::opAssign((hkSerializeUtil::LoadOptions::Self *)((char *)v8 + 4), (hkString::Self *)v12);
        goto LABEL_18;
      }
      goto LABEL_26;
  }
}

// ----------------------------------------------------------------------------
// Function: hkSerializeUtil::loadOnHeap  (binary VA: 0x18825c0)
// Original: hkSerializeUtil::loadOnHeap
// ----------------------------------------------------------------------------
int hkSerializeUtil::loadOnHeap(char *a1, hkSerializeUtil::LoadOptions::Self *a2, int a3, int a4, unsigned int a5)
{
  int v5;
  typedef uint8_t _g4_t_v7[8];
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  hkIstream::Construct((hkIstream::Self *)v7, a1);
  v5 = hkSerializeUtil::loadOnHeap(v8, a2, a3, a4, a5);
  hkIstream::Destroy((hkIstream::Self *)v7);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkSerializeUtil::loadOnHeap  (binary VA: 0x1882630)
// Original: hkSerializeUtil::loadOnHeap
// ----------------------------------------------------------------------------
int hkSerializeUtil::loadOnHeap(void *a1, size_t a2, hkSerializeUtil::LoadOptions::Self *a3, int a4, int a5, unsigned int a6)
{
  int v6;
  typedef uint8_t _g4_t_v8[8];
  typedef int _g4_t_v9;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_v8)) > _g4_s0 ? (4u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);

  hkIstream::Construct((hkIstream::Self *)v8, a1, a2);
  v6 = hkSerializeUtil::loadOnHeap(v9, a3, a4, a5, a6);
  hkIstream::Destroy((hkIstream::Self *)v8);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: hkRootLevelContainer::NamedVariant::Construct  (binary VA: 0x18826e0)
// Original: hkRootLevelContainer::NamedVariant::NamedVariant
// ----------------------------------------------------------------------------
hkRootLevelContainer::NamedVariant::Self * hkRootLevelContainer::NamedVariant::Construct(hkRootLevelContainer::NamedVariant::Self *self, hkString::Self *a2, void *a3, const hkClass::Self *a4)
{
  int Class;
  hkString::Self *Name;
  hkClass::Self *v6;

  hkStringPtr::Construct(self);
  hkStringPtr::Construct((hkRootLevelContainer::NamedVariant::Self *)((char *)self + 4));
  *((uint32_t *)self + 2) = 0;
  hkStringPtr::opAssign(self, a2);
  hkRefVariant::set((hkRootLevelContainer::NamedVariant::Self *)((char *)self + 8), a3, a4);
  Class = hkRefVariant::getClass((hkRootLevelContainer::NamedVariant::Self *)((char *)self + 8));
  Name = nullptr;
  if ( Class != 0 )
  {
    v6 = (hkClass::Self *)hkRefVariant::getClass((hkRootLevelContainer::NamedVariant::Self *)((char *)self + 8));
    Name = (hkString::Self *)hkClass::getName(v6);
  }
  return (hkRootLevelContainer::NamedVariant::Self *)(hkStringPtr::opAssign((hkRootLevelContainer::NamedVariant::Self *)((char *)self + 4), Name));
}

// ----------------------------------------------------------------------------
// Function: hkRootLevelContainer::NamedVariant::Construct  (binary VA: 0x1882780)
// Original: hkRootLevelContainer::NamedVariant::NamedVariant
// ----------------------------------------------------------------------------
hkStringPtr::Self * hkRootLevelContainer::NamedVariant::Construct(hkStringPtr::Self *a1, hkString::Self *a2, int a3)
{
  hkStringPtr::Self *v3;
  int v4;
  int v5;
  int32_t v6; // kr00_4
  int v7;
  int v8;
  int32_t v9; // kr04_4
  int32_t v10;
  int32_t v11; // ett
  uint32_t *v12;
  volatile int32_t *v13;
  int v14;
  int32_t v15; // kr08_4
  int32_t v16;
  int32_t v17; // ett
  int Class;
  hkString::Self *Name;
  hkClass::Self *v20;
  typedef volatile int32_t *_g4_t_v22;
  typedef hkRefVariant::Self *_g4_t_v23;
  typedef uint32_t _g4_t_v24[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v22)) > _g4_s0 ? (4u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v23)) > _g4_s1 ? (8u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v24)) > _g4_s2 ? (16u + sizeof(_g4_t_v24)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);

  v3 = a1;
  hkStringPtr::Construct(a1);
  hkStringPtr::Construct((hkStringPtr::Self *)((char *)a1 + 4));
  *((uint32_t *)a1 + 2) = 0;
  hkStringPtr::opAssign(a1, a2);
  hkRefVariant::Construct(v24, a3);
  v23 = (hkRefVariant::Self *)((hkStringPtr::Self *)((char *)a1 + 8));
  if ( (uint32_t *)((char *)a1 + 8) != v24 )
  {
    v4 = v24[0];
    if ( v24[0] != 0 && *(uint16_t *)(v24[0] + 6) != 0 )
    {
      v22 = (volatile int32_t *)(v24[0] + 4);
      do
      {
        v6 = *(uint32_t *)(v4 + 4);
        HIWORD(v5) = HIWORD(v6);
        LOWORD(v5) = 0;
      }
      while ( v6 != __sync_val_compare_and_swap(v22, v6, v5 | (uint16_t)(v6 + 1)) );
    }
    v7 = *((uint32_t *)a1 + 2);
    if ( v7 != 0 && *(uint16_t *)(v7 + 6) != 0 )
    {
      do
      {
        v9 = *(uint32_t *)(v7 + 4);
        HIWORD(v8) = HIWORD(v9);
        LOWORD(v8) = 0;
        v10 = v8 | (uint16_t)(v9 - 1);
        v11 = v9;
      }
      while ( v11 != __sync_val_compare_and_swap((volatile int32_t *)(v7 + 4), v11, v10) );
      v3 = a1;
      if ( (uint16_t)v10 == 0 )
        G4_VCALL<void>(v7, 16);
    }
    *((uint32_t *)v3 + 2) = v4;
  }
  v12 = (uint32_t *)v24[0];
  if ( v24[0] != 0 && *(uint16_t *)(v24[0] + 6) != 0 )
  {
    v13 = (volatile int32_t *)(v24[0] + 4);
    do
    {
      v15 = v12[1];
      HIWORD(v14) = HIWORD(v15);
      LOWORD(v14) = 0;
      v16 = v14 | (uint16_t)(v15 - 1);
      v17 = v15;
    }
    while ( v17 != __sync_val_compare_and_swap(v13, v17, v16) );
    if ( (uint16_t)v16 == 0 )
      G4_VCALL<void>(v12, 16);
  }
  Class = hkRefVariant::getClass(v23);
  Name = nullptr;
  if ( Class != 0 )
  {
    v20 = (hkClass::Self *)hkRefVariant::getClass(v23);
    Name = (hkString::Self *)hkClass::getName(v20);
  }
  return hkStringPtr::opAssign((hkStringPtr::Self *)((char *)a1 + 4), Name);
}

// ----------------------------------------------------------------------------
// Function: hkRootLevelContainer::NamedVariant::Construct  (binary VA: 0x18828f0)
// Original: hkRootLevelContainer::NamedVariant::NamedVariant
// ----------------------------------------------------------------------------
void hkRootLevelContainer::NamedVariant::Construct()
{
  hkStringPtr::Construct();
  hkStringPtr::Construct();
}

// ----------------------------------------------------------------------------
// Function: hkRootLevelContainer::Construct  (binary VA: 0x1882930)
// Original: hkRootLevelContainer::hkRootLevelContainer
// ----------------------------------------------------------------------------
void hkRootLevelContainer::Construct()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkRootLevelContainer::findObjectByType  (binary VA: 0x1882940)
// Original: hkRootLevelContainer::findObjectByType
// ----------------------------------------------------------------------------
int hkRootLevelContainer::findObjectByType(hkRootLevelContainer::Self *self, hkString::Self *a2, const void *a3)
{
  int v3;
  int v4;
  int v5;
  int i;
  hkClass::Self *Class;
  unsigned int Name;
  hkClass::Self *v9;
  char *v10;
  char *v12;
  char *v13;

  v3 = *((uint32_t *)self + 1);
  if ( a3 != nullptr )
  {
    if ( v3 <= 0 )
      return 0;
    if ( a3 != *(const void **)(*(uint32_t *)self + 8) )
    {
      v4 = *(uint32_t *)self + 20;
      v5 = 1;
      while ( v5 != v3 )
      {
        v4 += 12;
        ++v5;
        if ( a3 == *(const void **)(v4 - 12) )
          goto LABEL_7;
      }
      return 0;
    }
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
LABEL_7:
  if ( v5 >= v3 )
    return 0;
  for ( i = 12 * v5; ; i += 12 )
  {
    v13 = (char *)(i + *(uint32_t *)self);
    if ( hkRefVariant::getClass((hkRefVariant::Self *)(v13 + 8)) != 0 )
    {
      Class = (hkClass::Self *)hkRefVariant::getClass((hkRefVariant::Self *)(v13 + 8));
      Name = hkClass::getName(Class);
    }
    else
    {
      Name = *((uint32_t *)v13 + 1) & 0xFFFFFFFE;
    }
    if ( Name != 0 )
    {
      v12 = (char *)(i + *(uint32_t *)self);
      if ( hkRefVariant::getClass((hkRefVariant::Self *)(v12 + 8)) != 0 )
      {
        v9 = (hkClass::Self *)hkRefVariant::getClass((hkRefVariant::Self *)(v12 + 8));
        v10 = (char *)hkClass::getName(v9);
      }
      else
      {
        v10 = (char *)(*((uint32_t *)v12 + 1) & 0xFFFFFFFE);
      }
      if ( hkString::strCmp(a2, v10) == 0 )
        break;
    }
    if ( *((uint32_t *)self + 1) <= ++v5 )
      return 0;
  }
  return *(uint32_t *)(*(uint32_t *)self + i + 8);
}

// ----------------------------------------------------------------------------
// Function: hkRootLevelContainer::findObjectByName  (binary VA: 0x1882aa0)
// Original: hkRootLevelContainer::findObjectByName
// ----------------------------------------------------------------------------
int hkRootLevelContainer::findObjectByName(hkRootLevelContainer::Self *self, hkString::Self *a2, const void *a3)
{
  int v3;
  int v4;
  int v5;
  int i;

  v3 = *((uint32_t *)self + 1);
  if ( a3 == nullptr )
  {
    v5 = 0;
    goto LABEL_7;
  }
  if ( v3 <= 0 )
    return 0;
  if ( a3 == *(const void **)(*(uint32_t *)self + 8) )
  {
    v5 = 1;
LABEL_7:
    if ( v5 < v3 )
    {
      for ( i = 12 * v5; ; i += 12 )
      {
        if ( (*(uint32_t *)(*(uint32_t *)self + i) & 0xFFFFFFFE) != 0 )
        {
          if ( hkString::strCmp(a2, (char *)(*(uint32_t *)(*(uint32_t *)self + i) & 0xFFFFFFFE)) == 0 )
            return *(uint32_t *)(*(uint32_t *)self + i + 8);
          v3 = *((uint32_t *)self + 1);
        }
        if ( ++v5 >= v3 )
          return 0;
      }
    }
    return 0;
  }
  v4 = *(uint32_t *)self + 20;
  v5 = 1;
  while ( v5 != v3 )
  {
    v4 += 12;
    ++v5;
    if ( a3 == *(const void **)(v4 - 12) )
      goto LABEL_7;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkResource::Destroy  (binary VA: 0x1882bb0)
// Original: hkResource::~hkResource
// ----------------------------------------------------------------------------
void hkResource::Destroy(hkResource::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkResource::callDestructors  (binary VA: 0x1882bd0)
// Original: hkResource::callDestructors
// ----------------------------------------------------------------------------
void hkResource::callDestructors()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkResource::Destroy_ea1882cb0  (binary VA: 0x1882cb0)
// Original: hkResource::~hkResource
// ----------------------------------------------------------------------------
void hkResource::Destroy_ea1882cb0(hkResource::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 8;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkNativePackfileUtils::validatePackfileHeader  (binary VA: 0x1882d10)
// Original: hkNativePackfileUtils::validatePackfileHeader
// ----------------------------------------------------------------------------
hkNativePackfileUtils::Self * hkNativePackfileUtils::validatePackfileHeader(hkNativePackfileUtils::Self *self, char *a2, const char **a3)
{
  bool v3;
  char *CurrentVersion;
  typedef hkString::Self *_g4_t_v6;
  typedef uint32_t _g4_t_v7[10];
  typedef char _g4_t_v8;
  typedef int _g4_t_v9;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (56u + sizeof(_g4_t_v8)) > _g4_s2 ? (56u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (72u + sizeof(_g4_t_v9)) > _g4_s3 ? (72u + sizeof(_g4_t_v9)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 56u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 72u);

  if ( a2 != nullptr )
  {
    hkString::memSet((hkString::Self *)v7, (void *)0xFFFFFFFF, (size_t)&dword_40);
    v3 = *(uint32_t *)a2 == 1474355287;
    v7[0] = 1474355287;
    v7[1] = 281067536;
    v8 = 0;
    v9 = 0;
    if ( v3 && *((uint32_t *)a2 + 1) == 281067536 )
    {
      if ( a2[16] == (uint8_t)hkStructureLayout::HostLayoutRules )
      {
        if ( a2[17] == BYTE1(hkStructureLayout::HostLayoutRules) )
        {
          if ( a2[18] == BYTE2(hkStructureLayout::HostLayoutRules) )
          {
            if ( a2[19] == HIBYTE(hkStructureLayout::HostLayoutRules) )
            {
              if ( ((uint8_t)(uintptr_t)(a2) & 3) != 0 )
              {
                if ( a3 != nullptr )
                  *a3 = "Packfile data source needs to be 4 byte aligned";
              }
              else if ( a2[40] == -1 )
              {
                if ( a3 != nullptr )
                  *a3 = "Packfile file format is too old";
              }
              else
              {
                CurrentVersion = (char *)hkVersionUtil::getCurrentVersion(v6);
                if ( hkString::strCmp((hkString::Self *)(a2 + 40), CurrentVersion) == 0 )
                {
                  *(uint32_t *)self = 0;
                  return self;
                }
                if ( a3 != nullptr )
                  *a3 = "Packfile contents are not up to date";
              }
            }
            else if ( a3 != nullptr )
            {
              *a3 = "Trying to process a binary file with a different empty base class optimization than this platform.";
            }
          }
          else if ( a3 != nullptr )
          {
            *a3 = "Trying to process a binary file with a different padding optimization than this platform.";
          }
        }
        else if ( a3 != nullptr )
        {
          *a3 = "Trying to process a binary file with a different endian than this platform.";
        }
      }
      else if ( a3 != nullptr )
      {
        *a3 = "Trying to process a binary file with a different pointer size than this platform.";
      }
    }
    else if ( a3 != nullptr )
    {
      *a3 = "Missing packfile magic header. Is this from a binary file?";
    }
  }
  else if ( a3 != nullptr )
  {
    *a3 = "Pointer is null";
  }
  *(uint32_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkNativePackfileUtils::getRequiredBufferSize  (binary VA: 0x1882e90)
// Original: hkNativePackfileUtils::getRequiredBufferSize
// ----------------------------------------------------------------------------
int hkNativePackfileUtils::getRequiredBufferSize(hkNativePackfileUtils::Self *self)
{
  int v1;
  int v2;
  int v3;
  hkPackfileHeader::Self *v4;
  uint32_t *SectionHeader;
  int v6;
  int v7;
  int v9;
  int v10;

  v1 = *((uint32_t *)self + 5);
  if ( v1 <= 0 )
  {
    v7 = 0;
    v6 = 48;
  }
  else
  {
    v2 = 0;
    v10 = 0;
    v3 = 0;
    v4 = (hkPackfileHeader::Self *)(self);
    do
    {
      v9 = v2++;
      SectionHeader = (uint32_t *)hkPackfileHeader::getSectionHeader(v4, v4, v9);
      v4 = (hkPackfileHeader::Self *)(self);
      v3 = SectionHeader[11] + SectionHeader[6] + v3 - SectionHeader[9];
      v10 += (SectionHeader[9] - SectionHeader[8]) / 12;
      v1 = *((uint32_t *)self + 5);
    }
    while ( v1 > v2 );
    v6 = v3 + 48;
    v7 = 8 * v10;
  }
  return (v1 << 6) + v6 + v7;
}

// ----------------------------------------------------------------------------
// Function: hkNativePackfileUtils::load  (binary VA: 0x1882f30)
// Original: hkNativePackfileUtils::load
// ----------------------------------------------------------------------------
char * hkNativePackfileUtils::load(hkNativePackfileUtils::Self *self, const void *a2, uint32_t *a3, void *a4, int a5, const hkTypeInfoRegistry::Self *a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, char *a16, int a17, int a18, char *a19, int a20)
{
  int v20;
  int v21;
  int v22;
  int v23;
  unsigned int v24;
  int v25;
  int v26;
  uint32_t *v27;
  bool v28; // cc
  int v29;
  int SectionHeader;
  int v31;
  char v32;
  char *v33;
  int v34;
  char *v35;
  int v36;
  int v37;
  int v38;
  uint32_t *v39;
  int v40;
  int v41;
  uint32_t *v42;
  int v43;
  char *v44;
  int v45;
  int v46;
  uint32_t *v47;
  int *v48;
  int v49;
  int v50;
  char *v51;
  uint32_t *v52;
  int v53;
  int v54;
  uint32_t *v55;
  hkClass::Self *v56;
  int v57;
  char **v58;
  int v59;
  int *v60;
  int v61;
  void (***Attribute)(int);
  char *v63;
  int v64;
  signed int v65;
  int v66;
  hkLifoAllocator::Self **address;
  hkLifoAllocator::Self *v69;
  signed int v70;
  int v71;
  int savedregs;
  uint32_t *v100;
  char *v101;
  uint32_t *v102;
  int v103;
  char *v104;
  int v105;
  uint32_t *v106;
  char *v107;
  int v108;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef uint32_t *_g4_t_v82;
  typedef int _g4_t_v83;
  typedef char *_g4_t_v84;
  typedef uint32_t *_g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef unsigned int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v72)) > _g4_s0 ? (4u + sizeof(_g4_t_v72)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v73)) > _g4_s1 ? (8u + sizeof(_g4_t_v73)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v74)) > _g4_s2 ? (12u + sizeof(_g4_t_v74)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v75)) > _g4_s3 ? (16u + sizeof(_g4_t_v75)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v76)) > _g4_s4 ? (20u + sizeof(_g4_t_v76)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v77)) > _g4_s5 ? (24u + sizeof(_g4_t_v77)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v78)) > _g4_s6 ? (28u + sizeof(_g4_t_v78)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v79)) > _g4_s7 ? (32u + sizeof(_g4_t_v79)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v80)) > _g4_s8 ? (36u + sizeof(_g4_t_v80)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v81)) > _g4_s9 ? (40u + sizeof(_g4_t_v81)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v82)) > _g4_s10 ? (44u + sizeof(_g4_t_v82)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v83)) > _g4_s11 ? (48u + sizeof(_g4_t_v83)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v84)) > _g4_s12 ? (52u + sizeof(_g4_t_v84)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v85)) > _g4_s13 ? (56u + sizeof(_g4_t_v85)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v86)) > _g4_s14 ? (60u + sizeof(_g4_t_v86)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v87)) > _g4_s15 ? (64u + sizeof(_g4_t_v87)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v88)) > _g4_s16 ? (68u + sizeof(_g4_t_v88)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v89)) > _g4_s17 ? (72u + sizeof(_g4_t_v89)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v90)) > _g4_s18 ? (76u + sizeof(_g4_t_v90)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v91)) > _g4_s19 ? (80u + sizeof(_g4_t_v91)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v92)) > _g4_s20 ? (84u + sizeof(_g4_t_v92)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v93)) > _g4_s21 ? (88u + sizeof(_g4_t_v93)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v94)) > _g4_s22 ? (92u + sizeof(_g4_t_v94)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v95)) > _g4_s23 ? (96u + sizeof(_g4_t_v95)) : _g4_s23,
    _g4_s25 = (100u + sizeof(_g4_t_v96)) > _g4_s24 ? (100u + sizeof(_g4_t_v96)) : _g4_s24,
    _g4_s26 = (104u + sizeof(_g4_t_v97)) > _g4_s25 ? (104u + sizeof(_g4_t_v97)) : _g4_s25,
    _g4_s27 = (108u + sizeof(_g4_t_v98)) > _g4_s26 ? (108u + sizeof(_g4_t_v98)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 4u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 8u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 12u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 16u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 20u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 24u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 28u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 32u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 36u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 40u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 44u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 48u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 52u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 56u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 60u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 64u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 68u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 72u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 76u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 80u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 84u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 88u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 92u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 96u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 100u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 104u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 108u);

  v91 = 0;
  v92 = 0;
  v93 = 0x80000000;
  *a3 = -720334526;
  v20 = *((uint32_t *)self + 5);
  a3[6] = v20;
  a3[5] = (uint32_t)(uintptr_t)(a3 + 12);
  a3[7] = v20 | 0x80000000;
  v95 = *((uint32_t *)self + 5);
  v21 = v95;
  v80 = (v95 << 6) + 48;
  if ( v95 != 0 )
  {
    address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v69 = *address;
    v86 = (int)(uintptr_t)(address);
    v70 = (4 * v95 + 127) & 0xFFFFFF80;
    v71 = *((uint32_t *)v69 + 3);
    if ( v70 <= *((uint32_t *)v69 + 2) && (unsigned int)(v70 + v71) <= *((uint32_t *)v69 + 4) )
      *((uint32_t *)v69 + 3) = v70 + v71;
    else
      v71 = hkLifoAllocator::allocateFromNewSlab(v69, (4 * v95 + 127) & 0xFFFFFF80);
    v22 = a3[6];
    v76 = v86;
    v23 = v71;
  }
  else
  {
    v76 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v22 = v20;
    v23 = 0;
  }
  v91 = v23;
  v24 = v21 | 0x80000000;
  v93 = v21 | 0x80000000;
  v94 = v23;
  if ( v22 > 0 )
  {
    v25 = v92;
    v26 = 0;
    v27 = a3;
    while ( 1 )
    {
      v29 = v27[5] + (v26 << 6);
      if ( (v24 & 0x3FFFFFFF) == v25 )
      {
        v86 = (int)(uintptr_t)(v27);
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)&v91, 4, v74);
        v25 = v92;
        v27 = (uint32_t *)v86;
      }
      ++v26;
      *(uint32_t *)(v91 + 4 * v25) = v29;
      v25 = v92 + 1;
      v28 = v27[6] <= v26;
      ++v92;
      if ( v28 )
        break;
      v24 = v93;
    }
  }
  v81 = 0;
  if ( *((int *)self + 5) > 0 )
  {
    do
    {
      SectionHeader = (int)(uintptr_t)(hkPackfileHeader::getSectionHeader(self, self, v81));
      v31 = a3[5] + (v81 << 6);
      hkString::memCpy((hkString::Self *)v31, (void *)SectionHeader, 0x13u);
      v32 = *(uint8_t *)(SectionHeader + 19);
      *(uint32_t *)(v31 + 20) = v80;
      *(uint8_t *)(v31 + 19) = v32;
      v82 = (uint32_t *)v31;
      *(uint32_t *)(v31 + 24) = *(uint32_t *)(SectionHeader + 24);
      *(uint32_t *)(v31 + 28) = *(uint32_t *)(SectionHeader + 24);
      *(uint32_t *)(v31 + 32) = *(uint32_t *)(SectionHeader + 24);
      *(uint32_t *)(v31 + 36) = *(uint32_t *)(SectionHeader + 24);
      *(uint32_t *)(v31 + 40) = *(uint32_t *)(SectionHeader + 24)
                            + *(uint32_t *)(SectionHeader + 40)
                            - *(uint32_t *)(SectionHeader + 36);
      *(uint32_t *)(v31 + 44) = *(uint32_t *)(SectionHeader + 44)
                            + *(uint32_t *)(SectionHeader + 24)
                            - *(uint32_t *)(SectionHeader + 36);
      v33 = (char *)self + *(uint32_t *)(SectionHeader + 20);
      v84 = (char *)a3 + v80;
      hkString::memCpy((hkString::Self *)((char *)a3 + v80), v33, *(uint32_t *)(SectionHeader + 24));
      hkString::memCpy(
        (hkString::Self *)((char *)a3 + v80 + v82[9]),
        &v33[*(uint32_t *)(SectionHeader + 36)],
        *(uint32_t *)(SectionHeader + 40) - *(uint32_t *)(SectionHeader + 36));
      hkString::memCpy(
        (hkString::Self *)((char *)a3 + v80 + v82[10]),
        &v33[*(uint32_t *)(SectionHeader + 40)],
        *(uint32_t *)(SectionHeader + 44) - *(uint32_t *)(SectionHeader + 40));
      if ( *((uint32_t *)self + 6) == v81 )
        a3[1] = *((uint32_t *)self + 7) + v80;
      v34 = *(uint32_t *)(SectionHeader + 24);
      v35 = (char *)self + *(uint32_t *)(SectionHeader + 20) + v34;
      v85 = *(uint32_t **)(SectionHeader + 28);
      v36 = 0;
      v86 = v34;
      if ( (int)(uintptr_t)(v85) - v34 > 3 )
      {
        v83 = SectionHeader;
        do
        {
          v37 = *(uint32_t *)&v35[4 * v36];
          if ( v37 != -1 )
          {
            *(uint32_t *)&v84[v37] = (uint32_t)(uintptr_t)(&v84[*(uint32_t *)&v35[4 * v36 + 4]]);
            v86 = *(uint32_t *)(SectionHeader + 24);
            v85 = *(uint32_t **)(SectionHeader + 28);
          }
          v36 += 2;
        }
        while ( v36 < ((int)(uintptr_t)(v85) - v86) / 4 );
      }
      ++v81;
      v80 += v82[11];
      v38 = *((uint32_t *)self + 5);
    }
    while ( v38 > v81 );
    if ( v38 > 0 )
    {
      v83 = 0;
      do
      {
        v39 = (uint32_t *)hkPackfileHeader::getSectionHeader(self, self, v83);
        v40 = v39[7];
        v41 = v39[8];
        v85 = v39;
        if ( v40 != v41 )
        {
          v84 = (char *)a3 + *(uint32_t *)(a3[5] + (v83 << 6) + 20);
          v42 = (uint32_t *)((char *)self + v40 + v39[5]);
          if ( v41 - v40 > 3 )
          {
            v86 = 0;
            do
            {
              if ( *v42 != -1 )
              {
                v43 = *(uint32_t *)(v91 + 4 * v42[1]);
                v44 = nullptr;
                if ( *(uint32_t *)(v43 + 24) != 0 )
                  v44 = (char *)a3 + *(uint32_t *)(v43 + 20) + v42[2];
                *(uint32_t *)&v84[*v42] = (uint32_t)(uintptr_t)(v44);
                v40 = v85[7];
                v41 = v85[8];
              }
              v86 += 3;
              v42 += 3;
            }
            while ( v86 < (v41 - v40) / 4 );
          }
        }
        ++v83;
      }
      while ( *((uint32_t *)self + 5) > v83 );
    }
  }
  a3[2] = (uint32_t)(uintptr_t)((char *)a3 + v80);
  a3[3] = 0;
  a3[4] = ((int)(uintptr_t)(a4) - v80) | 0x80000000;
  if ( a5 == 0 )
    (*(void (**)(uint32_t *))(*hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance + 20))(hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance);
  v105 = (*(int (**)(uint32_t *, int, int, int, int, int, int, int, int, int, int, uint32_t *, int, char *, uint32_t *, int, int, int, int, int, int, int, unsigned int, int, int, int, int, int))(*hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance + 24))(
           hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance,
           v72,
           v73,
           v74,
           v75,
           v76,
           v77,
           v78,
           v79,
           v80,
           v81,
           v82,
           v83,
           v84,
           v85,
           v86,
           v87,
           v88,
           v89,
           v90,
           v91,
           v92,
           v93,
           v94,
           v95,
           v96,
           v97,
           v98);
  a12 = 0;
  a13 = 0;
  a14 = 0x80000000;
  a3[8] = 0;
  if ( *((int *)self + 5) > 0 )
  {
    v103 = 0;
    do
    {
      v106 = (uint32_t *)hkPackfileHeader::getSectionHeader(self, self, v103);
      v45 = v106[8];
      v46 = v106[9];
      if ( v45 != v46 )
      {
        v47 = a3;
        v102 = (uint32_t *)((v103 << 6) + a3[5]);
        a3 += 2;
        v104 = (char *)a3 + v102[5];
        v101 = (char *)v47 + v47[1];
        v48 = (int *)((char *)self + v45 + v106[5]);
        if ( v46 - v45 > 3 )
        {
          v108 = 0;
          do
          {
            v49 = *v48;
            if ( *v48 != -1 )
            {
              v50 = *(uint32_t *)&a16[4 * v48[1]];
              v51 = nullptr;
              if ( *(uint32_t *)(v50 + 24) != 0 )
                v51 = (char *)a3 + v48[2] + *(uint32_t *)(v50 + 20);
              v107 = &v104[v49];
              v52 = (uint32_t *)G4_VCALL<int>(v102, 24, &v104[v49], v51);
              if ( v52 != nullptr )
              {
                v53 = v102[5] + v49;
                v54 = a3[3];
                if ( v54 == (a3[4] & 0x3FFFFFFF) )
                {
                  v100 = v52;
                  hkArrayUtil::reserveMore(
                    (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                    (hkMemoryAllocator::Self *)a3,
                    8,
                    savedregs);
                  v54 = a3[3];
                  v52 = v100;
                }
                v55 = (uint32_t *)(a3[2] + 8 * v54);
                v55[1] = v53;
                *v55 = (uint32_t)(uintptr_t)(v52);
                ++a3[3];
                if ( v101 == v107 )
                  a3[8] = (uint32_t)(uintptr_t)(v52);
                if ( v105 != 0 )
                {
                  v56 = (hkClass::Self *)G4_VCALL<int>(v105, 24, *v52);
                  if ( v56 != nullptr && hkClass::getAttribute(v56, "hk.PostFinish") != 0 )
                  {
                    v57 = a13;
                    if ( a13 == (a14 & 0x3FFFFFFF) )
                    {
                      hkArrayUtil::reserveMore(
                        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                        (hkMemoryAllocator::Self *)&a12,
                        8,
                        savedregs);
                      v57 = a13;
                    }
                    v58 = (char **)(a12 + 8 * v57);
                    *v58 = v107;
                    v58[1] = (char *)v56;
                    ++a13;
                  }
                }
              }
              v45 = v106[8];
              v46 = v106[9];
            }
            v108 += 3;
            v48 += 3;
          }
          while ( v108 < (v46 - v45) / 4 );
        }
      }
      ++v103;
    }
    while ( *((uint32_t *)self + 5) > v103 );
    if ( a13 > 0 )
    {
      v59 = 0;
      do
      {
        v60 = (int *)(a12 + 8 * v59++);
        v61 = *v60;
        Attribute = (void (***)(int))hkClass::getAttribute((hkClass::Self *)v60[1], "hk.PostFinish");
        (**Attribute)(v61);
      }
      while ( a13 > v59 );
    }
  }
  a13 = 0;
  v63 = (char *)a3 + a3[1];
  if ( a14 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      a12,
      8 * a14);
  v64 = 0;
  if ( a16 != a19 )
    v64 = a17;
  a14 = 0x80000000;
  a17 = v64;
  a12 = 0;
  v65 = (4 * a20 + 127) & 0xFFFFFF80;
  v66 = *(uint32_t *)self;
  if ( v65 > *(uint32_t *)(*(uint32_t *)self + 8) || *(char **)(v66 + 12) != &a19[v65] || a19 == *(char **)(v66 + 20) )
    hkLifoAllocator::slowBlockFree((hkLifoAllocator::Self *)v66, a19, (4 * a20 + 127) & 0xFFFFFF80);
  else
    *(uint32_t *)(v66 + 12) = (uint32_t)(uintptr_t)(a19);
  a17 = 0;
  if ( a18 >= 0 )
    (*(void (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      a16,
      4 * a18);
  return v63;
}

// ----------------------------------------------------------------------------
// Function: hkNativePackfileUtils::loadInPlace  (binary VA: 0x1883720)
// Original: hkNativePackfileUtils::loadInPlace
// ----------------------------------------------------------------------------
char * hkNativePackfileUtils::loadInPlace(hkNativePackfileUtils::Self *self, void *a2, int a3, const char **a4)
{
  const char **v4;
  int v5;
  char *v6;
  int v7;
  uint32_t *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  hkClass::Self *v13;
  int v14;
  char **v15;
  int v16;
  int v17;
  char *v18;
  uint32_t *v19;
  int v20;
  int v21;
  int *v22;
  int v23;
  void (***Attribute)(int);
  int v25;
  signed int v26;
  hkLifoAllocator::Self *v27;
  hkLifoAllocator::Self **address;
  hkLifoAllocator::Self *v30;
  signed int v31;
  char *v32;
  int v33;
  int v34;
  char *SectionHeader;
  int v36;
  hkString::Self *v37;
  int v38;
  char *v39;
  char *v40;
  int v41;
  int v42;
  int v43;
  uint32_t *v44;
  int v45;
  int v46;
  int v47;
  char *v48;
  uint32_t *v49;
  int v50;
  char *v51;
  int v52;
  int v53;
  hkLifoAllocator::Self **v54;
  int v55;
  int v56;
  char *v57;
  int v58;
  int v59;
  int v60;
  char *v61;
  int v62;
  int v63;
  char *v64;
  hkPackfileHeader::Self *v65;
  uint32_t *v66;
  int v67;
  uint32_t *v68;
  char *v69;
  char *v70;
  char *v71;
  char *v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  uint32_t *v78;
  int v79;
  signed int v80;
  void *v81;
  int v82;
  hkNativePackfileUtils::Self **v83;

  v83 = &self;
  v65 = (hkPackfileHeader::Self *)(self);
  v60 = a3;
  v4 = a4;
  if ( a4 != nullptr )
    *a4 = nullptr;
  hkNativePackfileUtils::validatePackfileHeader((hkNativePackfileUtils::Self *)&v74, (char *)v65, v4);
  if ( v74 == 0 )
  {
    v5 = *((uint32_t *)v65 + 14);
    v6 = nullptr;
    if ( (v5 & 1) != 0 )
      return v6;
    v7 = *((uint32_t *)v65 + 5);
    *((uint32_t *)v65 + 14) = v5 | 1;
    v78 = nullptr;
    v79 = 0;
    v80 = 0x80000000;
    v82 = v7;
    if ( v7 != 0 )
    {
      address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v30 = *address;
      v54 = address;
      v31 = (4 * v7 + 127) & 0xFFFFFF80;
      v32 = *((char **)v30 + 3);
      if ( v31 <= *((uint32_t *)v30 + 2) && (unsigned int)(uintptr_t)(&v32[v31]) <= *((uint32_t *)v30 + 4) )
        *((uint32_t *)v30 + 3) = (uint32_t)(uintptr_t)(&v32[v31]);
      else
        v32 = (char *)hkLifoAllocator::allocateFromNewSlab(v30, (4 * v7 + 127) & 0xFFFFFF80);
      v78 = (uint32_t *)(v32);
      v80 = v7 | 0x80000000;
      v81 = v32;
      if ( *((int *)v65 + 5) > 0 )
      {
        v33 = 0;
        do
        {
          SectionHeader = (char *)hkPackfileHeader::getSectionHeader(v65, v65, v33);
          v36 = v79;
          if ( v79 == (v80 & 0x3FFFFFFF) )
          {
            v70 = SectionHeader;
            hkArrayUtil::reserveMore(
              (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
              (hkMemoryAllocator::Self *)&v78,
              4,
              v52);
            v36 = v79;
            SectionHeader = v70;
          }
          ++v33;
          v78[v36] = (uint32_t)(uintptr_t)(SectionHeader);
          ++v79;
          v34 = *((uint32_t *)v65 + 5);
        }
        while ( v34 > v33 );
        if ( v34 > 0 )
        {
          v59 = 0;
          v56 = -1;
          do
          {
            v37 = (hkString::Self *)v78[v59];
            v38 = *((uint32_t *)v37 + 5);
            hkString::strCmp(v37, "__types__");
            if ( *((uint32_t *)v65 + 6) == v59 )
              v56 = v38 + *((uint32_t *)v65 + 7);
            v39 = *((char **)v37 + 6);
            v64 = (char *)v65 + v38;
            v40 = (char *)v65 + *((uint32_t *)v37 + 5) + (uint32_t)(uintptr_t)(v39);
            v67 = *((uint32_t *)v37 + 7);
            v41 = 0;
            v71 = v39;
            if ( v67 - (int)(uintptr_t)(v39) > 3 )
            {
              do
              {
                v42 = *(uint32_t *)&v40[4 * v41];
                if ( v42 != -1 )
                {
                  *(uint32_t *)&v64[v42] = (uint32_t)(uintptr_t)(&v64[*(uint32_t *)&v40[4 * v41 + 4]]);
                  v71 = *((char **)v37 + 6);
                  v67 = *((uint32_t *)v37 + 7);
                }
                v41 += 2;
              }
              while ( v41 < (v67 - (int)(uintptr_t)(v71)) / 4 );
            }
            ++v59;
            v43 = *((uint32_t *)v65 + 5);
          }
          while ( v43 > v59 );
          if ( v43 > 0 )
          {
            v62 = 0;
            v72 = *((char **)v65 + 5);
            do
            {
              v44 = (uint32_t *)v78[v62];
              v68 = v44;
              v45 = v44[7];
              v46 = v44[8];
              if ( v45 != v46 )
              {
                v47 = v44[5];
                v48 = (char *)v65 + v47;
                v49 = (uint32_t *)((char *)v65 + v45 + v47);
                if ( v46 - v45 > 3 )
                {
                  v73 = 0;
                  do
                  {
                    if ( *v49 != -1 )
                    {
                      v50 = v78[v49[1]];
                      v51 = nullptr;
                      if ( *(uint32_t *)(v50 + 24) != 0 )
                        v51 = (char *)v65 + *(uint32_t *)(v50 + 20) + v49[2];
                      *(uint32_t *)&v48[*v49] = (uint32_t)(uintptr_t)(v51);
                      v45 = v68[7];
                      v46 = v68[8];
                    }
                    v73 += 3;
                    v49 += 3;
                  }
                  while ( v73 < (v46 - v45) / 4 );
                  v72 = *((char **)v65 + 5);
                }
              }
              ++v62;
            }
            while ( v62 < (int)(uintptr_t)(v72) );
          }
          v53 = v56;
          goto LABEL_8;
        }
      }
    }
    else
    {
      v54 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v81 = nullptr;
    }
    v53 = -1;
LABEL_8:
    if ( v60 == 0 )
      v60 = (*(int (**)(uint32_t *))(*hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance + 20))(hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance);
    v58 = (*(int (**)(uint32_t *))(*hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance + 24))(hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance);
    v75 = 0;
    v76 = 0;
    v77 = 0x80000000;
    if ( *((int *)v65 + 5) > 0 )
    {
      v55 = 0;
      v63 = *((uint32_t *)v65 + 5);
      while ( 1 )
      {
        v8 = (uint32_t *)v78[v55];
        v66 = v8;
        v9 = v8[8];
        v10 = v8[9];
        if ( v9 != v10 )
        {
          v11 = v8[5];
          v57 = (char *)v65 + v11;
          v69 = (char *)v65 + v9 + v11;
          if ( v10 - v9 > 3 )
            break;
        }
LABEL_29:
        if ( ++v55 >= v63 )
        {
          if ( v76 > 0 )
          {
            v21 = 0;
            do
            {
              v22 = (int *)(v75 + 8 * v21++);
              v23 = *v22;
              Attribute = (void (***)(int))hkClass::getAttribute((hkClass::Self *)v22[1], "hk.PostFinish");
              (**Attribute)(v23);
            }
            while ( v76 > v21 );
          }
          goto LABEL_33;
        }
      }
      v12 = 0;
      while ( 1 )
      {
        v16 = *(uint32_t *)&v69[4 * v12];
        if ( v16 != -1 )
        {
          v17 = v78[*(uint32_t *)&v69[4 * v12 + 4]];
          v18 = nullptr;
          if ( *(uint32_t *)(v17 + 24) != 0 )
            v18 = (char *)v65 + *(uint32_t *)(v17 + 20) + *(uint32_t *)&v69[4 * v12 + 8];
          v61 = &v57[v16];
          v19 = (uint32_t *)G4_VCALL<int>(v60, 24, &v57[v16], v18);
          if ( v19 != nullptr )
          {
            v20 = (int)(uintptr_t)(v65) + v66[5] + v66[8];
            *(uint32_t *)(v20 + 4 * (v12 + 1)) = 0;
            *(uint32_t *)(v20 + 4 * (v12 + 1) + 4) = (uint32_t)(uintptr_t)(v19);
            if ( v58 == 0 )
            {
              v9 = v66[8];
              v10 = v66[9];
              goto LABEL_21;
            }
            v13 = (hkClass::Self *)G4_VCALL<int>(v58, 24, *v19);
            if ( v13 != nullptr && hkClass::getAttribute(v13, "hk.PostFinish") != 0 )
            {
              v14 = v76;
              if ( v76 == (v77 & 0x3FFFFFFF) )
              {
                hkArrayUtil::reserveMore(
                  (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                  (hkMemoryAllocator::Self *)&v75,
                  8,
                  v52);
                v14 = v76;
              }
              v15 = (char **)(v75 + 8 * v14);
              *v15 = v61;
              v15[1] = (char *)v13;
              ++v76;
            }
          }
          v9 = v66[8];
          v10 = v66[9];
        }
LABEL_21:
        v12 += 3;
        if ( v12 >= (v10 - v9) / 4 )
        {
          v63 = *((uint32_t *)v65 + 5);
          goto LABEL_29;
        }
      }
    }
LABEL_33:
    v6 = (char *)v65 + v53;
    v76 = 0;
    if ( v77 >= 0 )
      (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v75,
        8 * v77);
    v25 = 0;
    if ( v78 != v81 )
      v25 = v79;
    v79 = v25;
    v77 = 0x80000000;
    v75 = 0;
    v26 = (4 * v82 + 127) & 0xFFFFFF80;
    v27 = *v54;
    if ( v26 > *((uint32_t *)*v54 + 2) || *((void **)v27 + 3) != (char *)v81 + v26 || v81 == *((void **)v27 + 5) )
      hkLifoAllocator::slowBlockFree(v27, (char *)v81, (4 * v82 + 127) & 0xFFFFFF80);
    else
      *((uint32_t *)v27 + 3) = (uint32_t)(uintptr_t)(v81);
    v79 = 0;
    if ( v80 >= 0 )
      (*(void (**)(uint32_t *, uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v78,
        4 * v80);
    return v6;
  }
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: hkNativePackfileUtils::getContentsClassName  (binary VA: 0x1883e80)
// Original: hkNativePackfileUtils::getContentsClassName
// ----------------------------------------------------------------------------
char * hkNativePackfileUtils::getContentsClassName(hkNativePackfileUtils::Self *self, const void *a2)
{
  int v2;

  if ( self != nullptr
    && (int)(uintptr_t)(a2) > 63
    && *(uint32_t *)self == 1474355287
    && *((uint32_t *)self + 1) == 281067536
    && *((int *)self + 5) > 0
    && (int)(uintptr_t)(a2) >= (*((uint32_t *)self + 5) << 6) + 64
    && (v2 = *((uint32_t *)self + 9)
           + *(uint32_t *)(hkPackfileHeader::getSectionHeader(self, self, 0) + (*((uint32_t *)self + 8) << 6) + 20),
        (int)(uintptr_t)(a2) >= v2) )
  {
    return (char *)self + v2;
  }
  else
  {
    return nullptr;
  }
}

// ----------------------------------------------------------------------------
// Function: hkNativePackfileUtils::unload  (binary VA: 0x1883f10)
// Original: hkNativePackfileUtils::unload
// ----------------------------------------------------------------------------
int hkNativePackfileUtils::unload(hkNativePackfileUtils::Self *self)
{
  unsigned int v1;
  int v2;
  int v3;
  int v4;
  int result;

  v1 = *((uint32_t *)self + 2);
  v2 = 8 * *((uint32_t *)self + 3);
  *(uint32_t *)self = 0;
  if ( v1 < v1 + v2 )
  {
    do
    {
      v3 = *(uint32_t *)(v1 + 4);
      v1 += 8;
      hkTypeInfo::cleanupLoadedObject(*(hkTypeInfo **)(v1 - 8), (char *)self + v3);
    }
    while ( v1 < *((uint32_t *)self + 2) + 8 * *((uint32_t *)self + 3) );
  }
  v4 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 6) = 0;
  if ( v4 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 5),
      v4 << 6);
  result = *((uint32_t *)self + 4);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  *((uint32_t *)self + 3) = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *((uint32_t *)self + 2),
               8 * result);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkNativePackfileUtils::unloadInPlace  (binary VA: 0x18841a0)
// Original: hkNativePackfileUtils::unloadInPlace
// ----------------------------------------------------------------------------
hkNativePackfileUtils::Self * hkNativePackfileUtils::unloadInPlace(hkNativePackfileUtils::Self *self)
{
  hkNativePackfileUtils::Self *result;
  uint32_t *SectionHeader;
  int v3;
  int v4;
  char *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v10 = 0;
  result = *((hkNativePackfileUtils::Self **)self + 5);
  if ( (int)(uintptr_t)(result) > 0 )
  {
    do
    {
      SectionHeader = (uint32_t *)hkPackfileHeader::getSectionHeader(self, self, v10);
      v3 = SectionHeader[8];
      v4 = SectionHeader[9];
      if ( v3 != v4 )
      {
        v5 = (char *)self + v3 + SectionHeader[5];
        if ( v4 - v3 > 3 )
        {
          v9 = SectionHeader[9];
          v6 = SectionHeader[8];
          v7 = 0;
          do
          {
            v8 = *(uint32_t *)&v5[4 * v7];
            if ( v8 != -1 && *(uint32_t *)&v5[4 * v7 + 8] != 0 )
            {
              hkTypeInfo::cleanupLoadedObject(*(hkTypeInfo **)&v5[4 * v7 + 8], (char *)self + SectionHeader[5] + v8);
              v6 = SectionHeader[8];
              v9 = SectionHeader[9];
            }
            v7 += 3;
          }
          while ( (v9 - v6) / 4 > v7 );
        }
      }
      result = self;
      ++v10;
    }
    while ( *((uint32_t *)self + 5) > v10 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkNativePackfileUtils::getImportsExports  (binary VA: 0x1884290)
// Original: hkNativePackfileUtils::getImportsExports
// ----------------------------------------------------------------------------
int hkNativePackfileUtils::getImportsExports(int a1, int a2, int a3)
{
  int v3;
  int result;
  int v5;
  int v6;

  v3 = 0;
  result = *(uint32_t *)(a1 + 24);
  if ( result > 0 )
  {
    do
    {
      v5 = *(uint32_t *)(a1 + 20) + (v3++ << 6);
      v6 = a1 + *(uint32_t *)(v5 + 20);
      hkPackfileSectionHeader::getExports(v5, v6, a2);
      result = hkPackfileSectionHeader::getImports(v5, v6, a3);
    }
    while ( *(uint32_t *)(a1 + 24) > v3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: LOCALNAMESPACE::hkNativeResource::getImportsExports  (binary VA: 0x1884300)
// Original: LOCALNAMESPACE::hkNativeResource::getImportsExports
// ----------------------------------------------------------------------------
int LOCALNAMESPACE::hkNativeResource::getImportsExports(int a1, int a2, int a3)
{
  return hkNativePackfileUtils::getImportsExports(*(uint32_t *)(a1 + 8), a3, a2);
}

// ----------------------------------------------------------------------------
// Function: getImportsExportsInPlace  (binary VA: 0x1884340)
// Original: getImportsExportsInPlace
// ----------------------------------------------------------------------------
void getImportsExportsInPlace(hkPackfileHeader::Self *a1, int a2, int a3)
{
  hkPackfileHeader::Self *SectionHeader;
  hkPackfileHeader::Self *v4;
  int v5;
  hkPackfileHeader::Self *v6;
  char *v7;

  if ( *((int *)a1 + 5) > 0 )
  {
    SectionHeader = (hkPackfileHeader::Self *)hkPackfileHeader::getSectionHeader(a1, a1, 0);
    if ( *((int *)a1 + 5) > 0 )
    {
      v4 = SectionHeader;
      v5 = 0;
      do
      {
        v7 = (char *)a1 + *((uint32_t *)v4 + 5);
        ++v5;
        hkPackfileSectionHeader::getExports(v4, v7, a2);
        v6 = v4;
        v4 = (hkPackfileHeader::Self *)((char *)v4 + 64);
        hkPackfileSectionHeader::getImports(v6, v7, a3);
      }
      while ( *((uint32_t *)a1 + 5) > v5 );
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkPackfileSectionHeader::staticClass  (binary VA: 0x18843e0)
// Original: hkPackfileSectionHeader::staticClass
// ----------------------------------------------------------------------------
void * hkPackfileSectionHeader::staticClass()
{
  return &hkPackfileSectionHeaderClass;
}

// ----------------------------------------------------------------------------
// Function: hkContentPredicate::Construct  (binary VA: 0x18844d0)
// Original: hkContentPredicate::hkContentPredicate
// ----------------------------------------------------------------------------
int hkContentPredicate::Construct(int a1, int16_t a2, int a3, int a4)
{
  int v5;

  *(uint16_t *)a1 = a2;
  *(uint32_t *)(a1 + 4) = a3;
  *(uint32_t *)(a1 + 8) = a4;
  v5 = hkContentPredicate::m_head;
  hkContentPredicate::m_head = a1;
  *(uint32_t *)(a1 + 12) = v5;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkContentPredicate::findPredicate  (binary VA: 0x1884510)
// Original: hkContentPredicate::findPredicate
// ----------------------------------------------------------------------------
uint16_t * hkContentPredicate::findPredicate(int16_t a1)
{
  uint16_t *result;

  result = (uint16_t *)(uintptr_t)(hkContentPredicate::m_head);
  if ( hkContentPredicate::m_head == 0 )
    return nullptr;
  if ( a1 != *(uintptr_t *)(hkContentPredicate::m_head) )
  {
    do
      result = *((uint16_t **)result + 3);
    while ( result != nullptr && a1 != *result );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkContentPredicate::mergePredicateList  (binary VA: 0x1884560)
// Original: hkContentPredicate::mergePredicateList
// ----------------------------------------------------------------------------
void hkContentPredicate::mergePredicateList(hkContentPredicate::Self *self)
{
  hkContentPredicate::Self *v1;
  hkContentPredicate::Self *v2;

  v1 = self;
  if ( self != nullptr )
  {
    while ( 1 )
    {
      v2 = *((hkContentPredicate::Self **)v1 + 3);
      if ( hkContentPredicate::findPredicate(*(uint16_t *)v1) != nullptr )
      {
        if ( v2 == nullptr )
          return;
      }
      else
      {
        *((uint32_t *)v1 + 3) = hkContentPredicate::m_head;
        if ( v2 == nullptr )
          return;
      }
      v1 = v2;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkClassNameRegistry::Destroy  (binary VA: 0x18845c0)
// Original: hkClassNameRegistry::~hkClassNameRegistry
// ----------------------------------------------------------------------------
void hkClassNameRegistry::Destroy(hkClassNameRegistry::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkDynamicClassNameRegistry::getName  (binary VA: 0x18845e0)
// Original: hkDynamicClassNameRegistry::getName
// ----------------------------------------------------------------------------
int hkDynamicClassNameRegistry::getName(hkDynamicClassNameRegistry::Self *self)
{
  return *((uint32_t *)self + 2);
}

// ----------------------------------------------------------------------------
// Function: hkDynamicClassNameRegistry::setName  (binary VA: 0x18845f0)
// Original: hkDynamicClassNameRegistry::setName
// ----------------------------------------------------------------------------
hkDynamicClassNameRegistry::Self * hkDynamicClassNameRegistry::setName(hkDynamicClassNameRegistry::Self *self, const char *a2)
{
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDynamicClassNameRegistry::registerList  (binary VA: 0x1884600)
// Original: hkDynamicClassNameRegistry::registerList
// ----------------------------------------------------------------------------
const hkClass::Self * hkDynamicClassNameRegistry::registerList(hkDynamicClassNameRegistry::Self *self, const hkClass::Self *const *a2)
{
  const hkClass::Self *const *v2;
  const hkClass::Self *result;

  v2 = a2;
  for ( result = *a2; *v2 != nullptr; result = *v2 )
  {
    ++v2;
    G4_VCALL<void>(self, 36, result, 0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkBuiltinTypeRegistry::Destroy  (binary VA: 0x1884650)
// Original: hkBuiltinTypeRegistry::~hkBuiltinTypeRegistry
// ----------------------------------------------------------------------------
void hkBuiltinTypeRegistry::Destroy(hkBuiltinTypeRegistry::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkDefaultBuiltinTypeRegistry::getTypeInfoRegistry  (binary VA: 0x1884670)
// Original: hkDefaultBuiltinTypeRegistry::getTypeInfoRegistry
// ----------------------------------------------------------------------------
int hkDefaultBuiltinTypeRegistry::getTypeInfoRegistry()
{
  return (int)(uintptr_t)(hkSingleton<hkTypeInfoRegistry::Self>::s_instance);
}

// ----------------------------------------------------------------------------
// Function: hkDefaultBuiltinTypeRegistry::getClassNameRegistry  (binary VA: 0x1884690)
// Original: hkDefaultBuiltinTypeRegistry::getClassNameRegistry
// ----------------------------------------------------------------------------
int hkDefaultBuiltinTypeRegistry::getClassNameRegistry()
{
  return (int)(uintptr_t)(hkSingleton<hkDefaultClassNameRegistry::Self>::s_instance);
}

// ----------------------------------------------------------------------------
// Function: hkDefaultBuiltinTypeRegistry::getVtableClassRegistry  (binary VA: 0x18846b0)
// Original: hkDefaultBuiltinTypeRegistry::getVtableClassRegistry
// ----------------------------------------------------------------------------
int hkDefaultBuiltinTypeRegistry::getVtableClassRegistry()
{
  return (int)(uintptr_t)(hkSingleton<hkVtableClassRegistry::Self>::s_instance);
}

// ----------------------------------------------------------------------------
// Function: hkDynamicClassNameRegistry::merge  (binary VA: 0x18846d0)
// Original: hkDynamicClassNameRegistry::merge
// ----------------------------------------------------------------------------
const hkClassNameRegistry::Self * hkDynamicClassNameRegistry::merge(hkDynamicClassNameRegistry::Self *self, const hkClassNameRegistry::Self *a2)
{
  int v2;
  int v3;
  int v4;
  const hkClassNameRegistry::Self *result;
  uint32_t *retaddr;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef uint32_t _g4_t_v8[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v8)) > _g4_s2 ? (16u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);

  v2 = 0;
  v8[0] = 0;
  v8[1] = 0;
  v8[2] = 0x80000000;
  G4_VCALL<void>(a2, 28, v8, v6, v7);
  if ( (int)(uintptr_t)(self) > 0 )
  {
    do
    {
      v3 = *(uint32_t *)self;
      v8[6] = 0;
      v4 = retaddr[v2++];
      (*(void (**)(hkDynamicClassNameRegistry::Self *, int, uint32_t))(v3 + 36))(self, v4, 0);
    }
    while ( (int)(uintptr_t)(self) > v2 );
  }
  result = a2;
  if ( (int)(uintptr_t)(a2) >= 0 )
    return (const hkClassNameRegistry::Self *)(*(int (**)(uint32_t *, uint32_t *, int))(hkContainerHeapAllocator::s_alloc
                                                                                    + 20))(
                                          (uint32_t *)((uint32_t *)(&hkContainerHeapAllocator::s_alloc)),
                                          retaddr,
                                          4 * (uint32_t)(uintptr_t)(a2));
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDefaultBuiltinTypeRegistry::Destroy  (binary VA: 0x1884780)
// Original: hkDefaultBuiltinTypeRegistry::~hkDefaultBuiltinTypeRegistry
// ----------------------------------------------------------------------------
void hkDefaultBuiltinTypeRegistry::Destroy(hkDefaultBuiltinTypeRegistry::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkStaticClassNameRegistry::Destroy  (binary VA: 0x18847a0)
// Original: hkStaticClassNameRegistry::~hkStaticClassNameRegistry
// ----------------------------------------------------------------------------
void hkStaticClassNameRegistry::Destroy(hkStaticClassNameRegistry::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkDynamicClassNameRegistry::getClassByName  (binary VA: 0x18847c0)
// Original: hkDynamicClassNameRegistry::getClassByName
// ----------------------------------------------------------------------------
int hkDynamicClassNameRegistry::getClassByName(hkDynamicClassNameRegistry::Self *self, hkString::Self *a2)
{
  return hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
           (hkDynamicClassNameRegistry::Self *)((char *)self + 12),
           a2,
           0);
}

// ----------------------------------------------------------------------------
// Function: hkDynamicClassNameRegistry::merge  (binary VA: 0x1884800)
// Original: hkDynamicClassNameRegistry::merge
// ----------------------------------------------------------------------------
bool * hkDynamicClassNameRegistry::merge(int a1, hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *a2)
{
  int i;
  int Value;
  bool *result;
  typedef void (*_g4_t_v5)(int, int, uint32_t);
  typedef bool _g4_t_v6;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (11u + sizeof(_g4_t_v6)) > _g4_s1 ? (11u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 11u);

  for ( i = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getIterator(a2);
        ;
        i = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getNext(a2, i) )
  {
    result = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::isValid(&v6, (int)(uintptr_t)(a2), i);
    if ( !v6 )
      break;
    v5 = *(void (**)(int, int, uint32_t))(*(uint32_t *)a1 + 36);
    Value = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getValue(a2, i);
    v5(a1, Value, 0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDynamicClassNameRegistry::registerClass  (binary VA: 0x1884890)
// Original: hkDynamicClassNameRegistry::registerClass
// ----------------------------------------------------------------------------
int hkDynamicClassNameRegistry::registerClass(hkDynamicClassNameRegistry::Self *self, const hkClass::Self *a2, hkString::Self *a3)
{
  hkString::Self *Name;

  Name = a3;
  if ( a3 == nullptr )
    Name = (hkString::Self *)hkClass::getName(a2);
  return hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
           (hkDynamicClassNameRegistry::Self *)((char *)self + 12),
           Name,
           (unsigned int)(uintptr_t)(a2));
}

// ----------------------------------------------------------------------------
// Function: hkDynamicClassNameRegistry::Destroy  (binary VA: 0x18848e0)
// Original: hkDynamicClassNameRegistry::~hkDynamicClassNameRegistry
// ----------------------------------------------------------------------------
void hkDynamicClassNameRegistry::Destroy(hkDynamicClassNameRegistry::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A66A8);
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Destroy((hkDynamicClassNameRegistry::Self *)((char *)self + 12));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkDefaultClassNameRegistry::Destroy  (binary VA: 0x1884920)
// Original: hkDefaultClassNameRegistry::~hkDefaultClassNameRegistry
// ----------------------------------------------------------------------------
void hkDefaultClassNameRegistry::Destroy(hkDefaultClassNameRegistry::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A66A8);
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Destroy((hkDefaultClassNameRegistry::Self *)((char *)self + 12));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkBuiltinTypeRegistry::addType  (binary VA: 0x1884960)
// Original: hkBuiltinTypeRegistry::addType
// ----------------------------------------------------------------------------
int hkBuiltinTypeRegistry::addType(hkBuiltinTypeRegistry::Self *self, const hkTypeInfo *a2, const hkClass::Self *a3)
{
  int v3;
  void (*v4)(int, const hkClass::Self *, int);
  int Name;
  int result;

  v3 = (int)(uintptr_t)(hkSingleton<hkDefaultClassNameRegistry::Self>::s_instance);
  v4 = *(void (**)(int, const hkClass::Self *, int))(*hkSingleton<hkDefaultClassNameRegistry::Self>::s_instance + 36);
  Name = hkClass::getName(a3);
  v4(v3, a3, Name);
  (*(void (**)(uint32_t, const hkTypeInfo *))(*hkSingleton<hkTypeInfoRegistry::Self>::s_instance + 20))(
    (uint32_t)(uintptr_t)(hkSingleton<hkTypeInfoRegistry::Self>::s_instance),
    a2);
  result = hkClass::getNumInterfaces(a3);
  if ( result > 0 )
    return (*(int (**)(uint32_t, uint32_t, const hkClass::Self *))(*hkSingleton<hkVtableClassRegistry::Self>::s_instance + 20))(
             (uint32_t)(uintptr_t)(hkSingleton<hkVtableClassRegistry::Self>::s_instance),
             *((uint32_t *)a2 + 4),
             a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkStaticClassNameRegistry::Destroy_ea18849f0  (binary VA: 0x18849f0)
// Original: hkStaticClassNameRegistry::~hkStaticClassNameRegistry
// ----------------------------------------------------------------------------
void hkStaticClassNameRegistry::Destroy_ea18849f0(hkStaticClassNameRegistry::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 24;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkDefaultClassNameRegistry::Destroy_ea1884a50  (binary VA: 0x1884a50)
// Original: hkDefaultClassNameRegistry::~hkDefaultClassNameRegistry
// ----------------------------------------------------------------------------
void hkDefaultClassNameRegistry::Destroy_ea1884a50(hkDefaultClassNameRegistry::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A66A8);
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Destroy((hkDefaultClassNameRegistry::Self *)((char *)self + 12));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 28;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkDefaultBuiltinTypeRegistry::Destroy_ea1884ad0  (binary VA: 0x1884ad0)
// Original: hkDefaultBuiltinTypeRegistry::~hkDefaultBuiltinTypeRegistry
// ----------------------------------------------------------------------------
void hkDefaultBuiltinTypeRegistry::Destroy_ea1884ad0(hkDefaultBuiltinTypeRegistry::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 8;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkBuiltinTypeRegistry::Destroy_ea1884b30  (binary VA: 0x1884b30)
// Original: hkBuiltinTypeRegistry::~hkBuiltinTypeRegistry
// ----------------------------------------------------------------------------
void hkBuiltinTypeRegistry::Destroy_ea1884b30(hkBuiltinTypeRegistry::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 8;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkDynamicClassNameRegistry::Destroy_ea1884b90  (binary VA: 0x1884b90)
// Original: hkDynamicClassNameRegistry::~hkDynamicClassNameRegistry
// ----------------------------------------------------------------------------
void hkDynamicClassNameRegistry::Destroy_ea1884b90(hkDynamicClassNameRegistry::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A66A8);
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Destroy((hkDynamicClassNameRegistry::Self *)((char *)self + 12));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 28;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkClassNameRegistry::Destroy_ea1884c10  (binary VA: 0x1884c10)
// Original: hkClassNameRegistry::~hkClassNameRegistry
// ----------------------------------------------------------------------------
void hkClassNameRegistry::Destroy_ea1884c10(hkClassNameRegistry::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 8;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkDynamicClassNameRegistry::getClasses  (binary VA: 0x1884c70)
// Original: hkDynamicClassNameRegistry::getClasses
// ----------------------------------------------------------------------------
bool * hkDynamicClassNameRegistry::getClasses(int a1, hkMemoryAllocator::Self *a2)
{
  int Iterator;
  bool *result;
  int v4;
  int v5;
  typedef int _g4_t_v6;
  typedef uint32_t *_g4_t_v7;
  typedef bool _g4_t_v8[25];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v7)) > _g4_s1 ? (24u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (31u + sizeof(_g4_t_v8)) > _g4_s2 ? (31u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 31u);

  v7 = (uint32_t *)(a1 + 12);
  Iterator = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getIterator((hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(a1 + 12));
  result = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::isValid(v8, a1 + 12, Iterator);
  while ( v8[0] )
  {
    v5 = *((uint32_t *)a2 + 1);
    if ( v5 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 4, v6);
      v5 = *((uint32_t *)a2 + 1);
    }
    v4 = *(uint32_t *)a2;
    *((uint32_t *)a2 + 1) = v5 + 1;
    *(uint32_t *)(v4 + 4 * v5) = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getValue(v7, Iterator);
    Iterator = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getNext(v7, Iterator);
    result = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::isValid(v8, (int)(uintptr_t)(v7), Iterator);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDefaultBuiltinTypeRegistry::reinitialize  (binary VA: 0x1884e50)
// Original: hkDefaultBuiltinTypeRegistry::reinitialize
// ----------------------------------------------------------------------------
int hkDefaultBuiltinTypeRegistry::reinitialize()
{
  int address;
  int v1;
  volatile int32_t *v2;
  int v3;
  int32_t v4; // kr00_4
  int32_t v5;
  int32_t v6; // ett
  int v7;
  volatile int32_t *v8;
  int v9;
  int32_t v10; // kr04_4
  int32_t v11;
  int32_t v12; // ett
  uint32_t *v13;
  int v14;
  bool v15;
  int v16;
  int32_t v17; // kr08_4
  int32_t v18;
  int32_t v19; // ett
  int (**v20)[8];
  int v21;
  int *v22;
  hkTypeInfo **v24;
  hkTypeInfo **v25;
  int v26;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v1 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
         *(uint32_t *)(*(uint32_t *)address + 44),
         28);
  *(uint32_t *)(v1 + 4) = -65535;
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_20A66A8);
  *(uint32_t *)(v1 + 8) = (uint32_t)(uintptr_t)("hk_2014.1.0-r1");
  LOBYTE(v24) = 0;
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Construct((hkString::Self **)(v1 + 12));
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_20A66E8);
  v2 = (volatile int32_t *)hkSingleton<hkDefaultClassNameRegistry::Self>::s_instance;
  if ( hkSingleton<hkDefaultClassNameRegistry::Self>::s_instance != 0
    && *(uint16_t *)(hkSingleton<hkDefaultClassNameRegistry::Self>::s_instance + 6) != 0 )
  {
    v26 = v1;
    do
    {
      v4 = *((uint32_t *)v2 + 1);
      HIWORD(v3) = HIWORD(v4);
      LOWORD(v3) = 0;
      v5 = v3 | (uint16_t)(v4 - 1);
      v6 = v4;
    }
    while ( v6 != __sync_val_compare_and_swap(v2 + 1, v6, v5) );
    v1 = v26;
    if ( (uint16_t)v5 == 0 )
      G4_VCALL<void>(v2, 16, v24);
  }
  hkSingleton<hkDefaultClassNameRegistry::Self>::s_instance = (uint32_t *)(uintptr_t)(v1);
  v7 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
         *(uint32_t *)(*(uint32_t *)address + 44),
         32);
  *(uint32_t *)(v7 + 4) = -65535;
  *(uint32_t *)v7 = ((uint32_t)(uintptr_t)&off_20A64C8);
  LOBYTE(v25) = 0;
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Construct((hkString::Self **)(v7 + 8));
  *(uint32_t *)(v7 + 24) = 1;
  *(uint32_t *)(v7 + 28) = 1;
  v8 = (volatile int32_t *)hkSingleton<hkTypeInfoRegistry::Self>::s_instance;
  if ( hkSingleton<hkTypeInfoRegistry::Self>::s_instance != 0
    && *(uint16_t *)(hkSingleton<hkTypeInfoRegistry::Self>::s_instance + 6) != 0 )
  {
    do
    {
      v10 = *((uint32_t *)v8 + 1);
      HIWORD(v9) = HIWORD(v10);
      LOWORD(v9) = 0;
      v11 = v9 | (uint16_t)(v10 - 1);
      v12 = v10;
    }
    while ( v12 != __sync_val_compare_and_swap(v8 + 1, v12, v11) );
    if ( (uint16_t)v11 == 0 )
      G4_VCALL<void>(v8, 16, v25);
  }
  hkSingleton<hkTypeInfoRegistry::Self>::s_instance = (uint32_t *)(uintptr_t)(v7);
  v13 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                    *(uint32_t *)(*(uint32_t *)address + 44),
                    20);
  v13[1] = -65535;
  *v13 = ((uint32_t)(uintptr_t)&off_20B0EC8);
  v14 = (int)(uintptr_t)(hkSingleton<hkVtableClassRegistry::Self>::s_instance);
  v15 = hkSingleton<hkVtableClassRegistry::Self>::s_instance == 0;
  v13[2] = 0;
  v13[3] = 0;
  v13[4] = -1;
  if ( !v15 && *(uint16_t *)(v14 + 6) != 0 )
  {
    do
    {
      v17 = *(uint32_t *)(v14 + 4);
      HIWORD(v16) = HIWORD(v17);
      LOWORD(v16) = 0;
      v18 = v16 | (uint16_t)(v17 - 1);
      v19 = v17;
    }
    while ( v19 != __sync_val_compare_and_swap((volatile int32_t *)(v14 + 4), v19, v18) );
    if ( (uint16_t)v18 == 0 )
      G4_VCALL<void>(v14, 16);
  }
  hkSingleton<hkVtableClassRegistry::Self>::s_instance = v13;
  (*(void (**)(uint32_t, void *))(*hkSingleton<hkDefaultClassNameRegistry::Self>::s_instance + 48))(
    (uint32_t)(uintptr_t)(hkSingleton<hkDefaultClassNameRegistry::Self>::s_instance),
    &hkHavokCurrentClasses::hkHavokDefaultClassRegistry);
  v20 = (int (**)[8])(uintptr_t)(&off_20543C0);
  v21 = (int)(uintptr_t)(hkSingleton<hkTypeInfoRegistry::Self>::s_instance);
  v22 = (int *)(hkGeometryTypeInfo);
  if ( hkGeometryTypeInfo != nullptr )
  {
    do
    {
      ++v20;
      G4_VCALL<void>(v21, 20, v22);
      v22 = (int *)*v20;
    }
    while ( *v20 != nullptr );
  }
  return (int)(uintptr_t)(hkVtableClassRegistry::registerList(
           hkSingleton<hkVtableClassRegistry::Self>::s_instance,
           (const hkTypeInfo *const *)&off_20543C0,
           (const hkClass::Self *const *)&off_2053A40));
}

// ----------------------------------------------------------------------------
// Function: hkBinaryTagfileWriter::Destroy  (binary VA: 0x1885160)
// Original: hkBinaryTagfileWriter::~hkBinaryTagfileWriter
// ----------------------------------------------------------------------------
void hkBinaryTagfileWriter::Destroy(hkBinaryTagfileWriter::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkBinaryTagfileWriter::Destroy_ea1885400  (binary VA: 0x1885400)
// Original: hkBinaryTagfileWriter::~hkBinaryTagfileWriter
// ----------------------------------------------------------------------------
void hkBinaryTagfileWriter::Destroy_ea1885400(hkBinaryTagfileWriter::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 8;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkDataRefCounted::removeExternalReference  (binary VA: 0x1888250)
// Original: hkDataRefCounted::removeExternalReference
// ----------------------------------------------------------------------------
hkDataRefCounted::Self * hkDataRefCounted::removeExternalReference(hkDataRefCounted::Self *self)
{
  hkDataRefCounted::Self *result;
  int v2;
  int v3;
  int v4;

  result = self;
  v2 = *((uint32_t *)self + 1);
  LOWORD(v2) = 0;
  v3 = v2 | (uint16_t)(*((uint32_t *)self + 1) - 1);
  v4 = *((uint32_t *)self + 2);
  *((uint32_t *)self + 1) = v3;
  *((uint32_t *)self + 2) = v4 - 1;
  if ( v4 == 1 )
    return (hkDataRefCounted::Self *)G4_VCALL<int>(self, 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataObject_Value::asObject  (binary VA: 0x1888290)
// Original: hkDataObject_Value::asObject
// ----------------------------------------------------------------------------
hkDataObject_Value::Self * hkDataObject_Value::asObject(hkDataObject_Value::Self *self, uint32_t *a2)
{
  int v2;
  int v3;
  int v4;
  int16_t v5;

  v2 = G4_VCALL<int>(*a2, 56, a2[1]);
  v3 = v2;
  *(uint32_t *)self = v2;
  if ( v2 != 0 )
  {
    v4 = *(uint32_t *)(v2 + 4);
    ++*(uint32_t *)(v2 + 8);
    v5 = v4;
    LOWORD(v4) = 0;
    *(uint32_t *)(v3 + 4) = v4 | (uint16_t)(v5 + 1);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkArray_hkDataClass_MemberInfo_h_3e2cfa::Construct  (binary VA: 0x18882e0)
// Original: hkArray<hkDataClass_MemberInfo,hkContainerTempAllocator>::hkArray
// ----------------------------------------------------------------------------
void hkArray_hkDataClass_MemberInfo_h_3e2cfa::Construct(hkArray_Raw *self, int a2)
{
  int v2;
  int v3;
  int v4;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);

  v2 = 0;
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0x80000000;
  if ( a2 == 0
    || (v5 = 16 * a2,
        v2 = (*(int (**)(uint32_t *, int *))(hkContainerTempAllocator::s_alloc[0] + 16))(
               (uint32_t *)(hkContainerTempAllocator::s_alloc),
               &v5),
        v3 = v5 / 16,
        v5 / 16 == 0) )
  {
    v3 = 0x80000000;
  }
  *((uint32_t *)self + 2) = v3;
  v4 = 0;
  *(uint32_t *)self = v2;
  *((uint32_t *)self + 1) = a2;
  if ( a2 > 0 )
  {
    do
    {
      *(__m128i *)(v2 + v4) = g4_m128_from<__m128i>(0LL);
      v4 += 16;
    }
    while ( v4 != 16 * a2 );
  }
}

// ----------------------------------------------------------------------------
// Function: hkArray_hkDataClass_MemberInfo_h_3e2cfa::clearAndDeallocate  (binary VA: 0x1888390)
// Original: hkArray<hkDataClass_MemberInfo,hkContainerTempAllocator>::clearAndDeallocate
// ----------------------------------------------------------------------------
int hkArray_hkDataClass_MemberInfo_h_3e2cfa::clearAndDeallocate(hkArray<hkDataClass_MemberInfo, hkContainerTempAllocator::Self> *self)
{
  int result;

  result = *((uint32_t *)self + 2);
  *((uint32_t *)self + 1) = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
               (uint32_t *)(hkContainerTempAllocator::s_alloc),
               *(uint32_t *)self,
               16 * result);
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 2) = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkBinaryTagfileWriter::save  (binary VA: 0x188e790)
// Original: hkBinaryTagfileWriter::save
// ----------------------------------------------------------------------------
uint32_t * hkBinaryTagfileWriter::save(int a1, int a2, uint32_t *a3, int a4, int a5, int a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint32_t *v13;
  int v14;
  int v15;
  uint64_t v16; // rax
  unsigned int v17;
  int64_t v18; // kr18_8
  unsigned int v19;
  char v20;
  int64_t v21; // rdi
  uint8_t v22;
  uint8_t v23;
  char v24;
  int v25;
  int v26;
  uint16_t v27;
  int v28;
  int v29;
  int v30;
  int i;
  int v32;
  uint32_t *v33;
  int v34;
  hkString::Self *v35;
  int v36;
  int16_t v37;
  int v38;
  int v39;
  int16_t v40;
  int v41;
  int j;
  int v43;
  uint32_t *v44;
  int v45;
  int v46;
  hkString::Self *v47;
  int v48;
  uint64_t v49; // rax
  int64_t v50; // rdi
  uint8_t v51;
  uint8_t v52;
  char v53;
  int v54;
  uint32_t *v55;
  int v56;
  int v57;
  int v58;
  int k;
  uint32_t **v60;
  uint32_t *v61;
  int v62;
  int v63;
  bool v64;
  int address;
  int v66;
  int v67;
  int v68;
  bool v69;
  int v70;
  int v71;
  int v72;
  uint64_t v74; // rax
  uint64_t v75; // rax
  int64_t v76; // kr20_8
  int64_t v77; // rdi
  char v78;
  uint8_t v79;
  int64_t v80; // rax
  int64_t v81; // rax
  uint64_t v148; // 0:esi.4,4:^24.4
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef uint32_t *_g4_t_v93;
  typedef hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *_g4_t_v94;
  typedef hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *_g4_t_v95;
  typedef int _g4_t_v96;
  typedef hkString::Self *_g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef hkString::Self *_g4_t_v102;
  typedef hkString::Self *_g4_t_v103;
  typedef hkString::Self *_g4_t_v104;
  typedef int _g4_t_v105;
  typedef uint32_t *_g4_t_v106;
  typedef int _g4_t_v107;
  typedef unsigned int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  typedef hkOArchive::Self *_g4_t_v111;
  typedef unsigned int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef int _g4_t_v115;
  typedef uint32_t _g4_t_v116[4];
  typedef uint32_t _g4_t_v117[4];
  typedef hkString::Self *_g4_t_v118;
  typedef int _g4_t_v119;
  typedef int _g4_t_v120;
  typedef int _g4_t_v121;
  typedef hkString::Self *_g4_t_v122[4];
  typedef int _g4_t_v123;
  typedef int _g4_t_v124;
  typedef int _g4_t_v125;
  typedef int _g4_t_v126;
  typedef int _g4_t_v127;
  typedef int _g4_t_v128;
  typedef int _g4_t_v129;
  typedef int _g4_t_v130;
  typedef int _g4_t_v131;
  typedef int _g4_t_v132;
  typedef int _g4_t_v133;
  typedef int _g4_t_v134;
  typedef int _g4_t_v135;
  typedef int _g4_t_v136;
  typedef int _g4_t_v137;
  typedef int _g4_t_v138;
  typedef int _g4_t_v139;
  typedef int _g4_t_v140;
  typedef int _g4_t_v141;
  typedef int _g4_t_v142;
  typedef int _g4_t_v143;
  typedef int _g4_t_v144;
  typedef int *_g4_t_v145;
  typedef hkString::Self *_g4_t_v146;
  typedef int _g4_t_v147;
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (8u + sizeof(_g4_t_v82)) > _g4_s0 ? (8u + sizeof(_g4_t_v82)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v83)) > _g4_s1 ? (12u + sizeof(_g4_t_v83)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v84)) > _g4_s2 ? (16u + sizeof(_g4_t_v84)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v85)) > _g4_s3 ? (20u + sizeof(_g4_t_v85)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v86)) > _g4_s4 ? (24u + sizeof(_g4_t_v86)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v87)) > _g4_s5 ? (28u + sizeof(_g4_t_v87)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v88)) > _g4_s6 ? (32u + sizeof(_g4_t_v88)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v89)) > _g4_s7 ? (32u + sizeof(_g4_t_v89)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v90)) > _g4_s8 ? (36u + sizeof(_g4_t_v90)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v91)) > _g4_s9 ? (40u + sizeof(_g4_t_v91)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v92)) > _g4_s10 ? (44u + sizeof(_g4_t_v92)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v93)) > _g4_s11 ? (44u + sizeof(_g4_t_v93)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v94)) > _g4_s12 ? (48u + sizeof(_g4_t_v94)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v95)) > _g4_s13 ? (52u + sizeof(_g4_t_v95)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v96)) > _g4_s14 ? (56u + sizeof(_g4_t_v96)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v97)) > _g4_s15 ? (56u + sizeof(_g4_t_v97)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v98)) > _g4_s16 ? (60u + sizeof(_g4_t_v98)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v99)) > _g4_s17 ? (64u + sizeof(_g4_t_v99)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v100)) > _g4_s18 ? (64u + sizeof(_g4_t_v100)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v101)) > _g4_s19 ? (64u + sizeof(_g4_t_v101)) : _g4_s19,
    _g4_s21 = (68u + sizeof(_g4_t_v102)) > _g4_s20 ? (68u + sizeof(_g4_t_v102)) : _g4_s20,
    _g4_s22 = (68u + sizeof(_g4_t_v103)) > _g4_s21 ? (68u + sizeof(_g4_t_v103)) : _g4_s21,
    _g4_s23 = (72u + sizeof(_g4_t_v104)) > _g4_s22 ? (72u + sizeof(_g4_t_v104)) : _g4_s22,
    _g4_s24 = (72u + sizeof(_g4_t_v105)) > _g4_s23 ? (72u + sizeof(_g4_t_v105)) : _g4_s23,
    _g4_s25 = (76u + sizeof(_g4_t_v106)) > _g4_s24 ? (76u + sizeof(_g4_t_v106)) : _g4_s24,
    _g4_s26 = (76u + sizeof(_g4_t_v107)) > _g4_s25 ? (76u + sizeof(_g4_t_v107)) : _g4_s25,
    _g4_s27 = (76u + sizeof(_g4_t_v108)) > _g4_s26 ? (76u + sizeof(_g4_t_v108)) : _g4_s26,
    _g4_s28 = (76u + sizeof(_g4_t_v109)) > _g4_s27 ? (76u + sizeof(_g4_t_v109)) : _g4_s27,
    _g4_s29 = (76u + sizeof(_g4_t_v110)) > _g4_s28 ? (76u + sizeof(_g4_t_v110)) : _g4_s28,
    _g4_s30 = (80u + sizeof(_g4_t_v111)) > _g4_s29 ? (80u + sizeof(_g4_t_v111)) : _g4_s29,
    _g4_s31 = (84u + sizeof(_g4_t_v112)) > _g4_s30 ? (84u + sizeof(_g4_t_v112)) : _g4_s30,
    _g4_s32 = (88u + sizeof(_g4_t_v113)) > _g4_s31 ? (88u + sizeof(_g4_t_v113)) : _g4_s31,
    _g4_s33 = (92u + sizeof(_g4_t_v114)) > _g4_s32 ? (92u + sizeof(_g4_t_v114)) : _g4_s32,
    _g4_s34 = (96u + sizeof(_g4_t_v115)) > _g4_s33 ? (96u + sizeof(_g4_t_v115)) : _g4_s33,
    _g4_s35 = (100u + sizeof(_g4_t_v116)) > _g4_s34 ? (100u + sizeof(_g4_t_v116)) : _g4_s34,
    _g4_s36 = (116u + sizeof(_g4_t_v117)) > _g4_s35 ? (116u + sizeof(_g4_t_v117)) : _g4_s35,
    _g4_s37 = (132u + sizeof(_g4_t_v118)) > _g4_s36 ? (132u + sizeof(_g4_t_v118)) : _g4_s36,
    _g4_s38 = (136u + sizeof(_g4_t_v119)) > _g4_s37 ? (136u + sizeof(_g4_t_v119)) : _g4_s37,
    _g4_s39 = (140u + sizeof(_g4_t_v120)) > _g4_s38 ? (140u + sizeof(_g4_t_v120)) : _g4_s38,
    _g4_s40 = (144u + sizeof(_g4_t_v121)) > _g4_s39 ? (144u + sizeof(_g4_t_v121)) : _g4_s39,
    _g4_s41 = (148u + sizeof(_g4_t_v122)) > _g4_s40 ? (148u + sizeof(_g4_t_v122)) : _g4_s40,
    _g4_s42 = (164u + sizeof(_g4_t_v123)) > _g4_s41 ? (164u + sizeof(_g4_t_v123)) : _g4_s41,
    _g4_s43 = (168u + sizeof(_g4_t_v124)) > _g4_s42 ? (168u + sizeof(_g4_t_v124)) : _g4_s42,
    _g4_s44 = (172u + sizeof(_g4_t_v125)) > _g4_s43 ? (172u + sizeof(_g4_t_v125)) : _g4_s43,
    _g4_s45 = (176u + sizeof(_g4_t_v126)) > _g4_s44 ? (176u + sizeof(_g4_t_v126)) : _g4_s44,
    _g4_s46 = (180u + sizeof(_g4_t_v127)) > _g4_s45 ? (180u + sizeof(_g4_t_v127)) : _g4_s45,
    _g4_s47 = (184u + sizeof(_g4_t_v128)) > _g4_s46 ? (184u + sizeof(_g4_t_v128)) : _g4_s46,
    _g4_s48 = (188u + sizeof(_g4_t_v129)) > _g4_s47 ? (188u + sizeof(_g4_t_v129)) : _g4_s47,
    _g4_s49 = (192u + sizeof(_g4_t_v130)) > _g4_s48 ? (192u + sizeof(_g4_t_v130)) : _g4_s48,
    _g4_s50 = (196u + sizeof(_g4_t_v131)) > _g4_s49 ? (196u + sizeof(_g4_t_v131)) : _g4_s49,
    _g4_s51 = (200u + sizeof(_g4_t_v132)) > _g4_s50 ? (200u + sizeof(_g4_t_v132)) : _g4_s50,
    _g4_s52 = (204u + sizeof(_g4_t_v133)) > _g4_s51 ? (204u + sizeof(_g4_t_v133)) : _g4_s51,
    _g4_s53 = (208u + sizeof(_g4_t_v134)) > _g4_s52 ? (208u + sizeof(_g4_t_v134)) : _g4_s52,
    _g4_s54 = (212u + sizeof(_g4_t_v135)) > _g4_s53 ? (212u + sizeof(_g4_t_v135)) : _g4_s53,
    _g4_s55 = (216u + sizeof(_g4_t_v136)) > _g4_s54 ? (216u + sizeof(_g4_t_v136)) : _g4_s54,
    _g4_s56 = (220u + sizeof(_g4_t_v137)) > _g4_s55 ? (220u + sizeof(_g4_t_v137)) : _g4_s55,
    _g4_s57 = (224u + sizeof(_g4_t_v138)) > _g4_s56 ? (224u + sizeof(_g4_t_v138)) : _g4_s56,
    _g4_s58 = (228u + sizeof(_g4_t_v139)) > _g4_s57 ? (228u + sizeof(_g4_t_v139)) : _g4_s57,
    _g4_s59 = (232u + sizeof(_g4_t_v140)) > _g4_s58 ? (232u + sizeof(_g4_t_v140)) : _g4_s58,
    _g4_s60 = (236u + sizeof(_g4_t_v141)) > _g4_s59 ? (236u + sizeof(_g4_t_v141)) : _g4_s59,
    _g4_s61 = (240u + sizeof(_g4_t_v142)) > _g4_s60 ? (240u + sizeof(_g4_t_v142)) : _g4_s60,
    _g4_s62 = (244u + sizeof(_g4_t_v143)) > _g4_s61 ? (244u + sizeof(_g4_t_v143)) : _g4_s61,
    _g4_s63 = (248u + sizeof(_g4_t_v144)) > _g4_s62 ? (248u + sizeof(_g4_t_v144)) : _g4_s62,
    _g4_s64 = (252u + sizeof(_g4_t_v145)) > _g4_s63 ? (252u + sizeof(_g4_t_v145)) : _g4_s63,
    _g4_s65 = (260u + sizeof(_g4_t_v146)) > _g4_s64 ? (260u + sizeof(_g4_t_v146)) : _g4_s64,
    _g4_s66 = (264u + sizeof(_g4_t_v147)) > _g4_s65 ? (264u + sizeof(_g4_t_v147)) : _g4_s65
  };
  alignas(16) uint8_t _g4_sf[_g4_s66];
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 8u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 12u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 16u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 20u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 24u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 28u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 32u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 32u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 36u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 40u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 44u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 44u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 48u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 52u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 56u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 56u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 60u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 64u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 64u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 64u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 68u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 68u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 72u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 72u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 76u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 76u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 76u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 76u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 76u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 80u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 84u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 88u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 92u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 96u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 100u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 116u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 132u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 136u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 140u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 144u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 148u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 164u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 168u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 172u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 176u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 180u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 184u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 188u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 192u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 196u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 200u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 204u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 208u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 212u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 216u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 220u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 224u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 228u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 232u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 236u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 240u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 244u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 248u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 252u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 260u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 264u);

  v145 = &a1;
  v92 = a1;
  v106 = a3;
  v6 = a6;
  v7 = a5;
  v88 = a4;
  hkOArchive::Construct((int)(uintptr_t)(v117), a4, 0);
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Construct(&v118);
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Construct(v122);
  v141 = v6;
  v123 = 1;
  v124 = 0;
  v125 = 0;
  v126 = -1;
  v127 = 0;
  v128 = 0;
  v129 = 0x80000000;
  v130 = 0;
  v131 = 0;
  v132 = 0x80000000;
  v133 = v7;
  v134 = 0;
  v135 = 0;
  v136 = -1;
  v137 = 0;
  v138 = 0;
  v139 = 0x80000000;
  v140 = 0;
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
    (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)v122,
    (hkString::Self *)&unk_1B15112,
    0);
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
    (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)&v118,
    (hkString::Self *)&unk_1B15112,
    0);
  sub_1885180(&v124, &hkContainerHeapAllocator::s_alloc, 0, 0, 0);
  if ( (v129 & 0x3FFFFFFFu) <= 0x1FF )
  {
    v8 = 512;
    if ( 2 * (v129 & 0x3FFFFFFFu) >= 0x200 )
      v8 = 2 * (v129 & 0x3FFFFFFF);
    hkArrayUtil::reserve((hkArrayUtil::Self *)&v115, (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc, &v127, v8, 1);
  }
  v9 = v132 & 0x3FFFFFFF;
  if ( (v132 & 0x3FFFFFFFu) <= 0x7F )
  {
    v10 = 2 * v9;
    v11 = 128;
    if ( v10 >= 128 )
      v11 = v10;
    hkArrayUtil::reserve((hkArrayUtil::Self *)&v115, (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc, &v130, v11, 16);
    v9 = v132 & 0x3FFFFFFF;
  }
  v12 = v131;
  if ( v131 == v9 )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc, (hkMemoryAllocator::Self *)&v130, 16, v84);
    v12 = v131;
  }
  v131 = v12 + 1;
  v13 = (uint32_t *)(v130 + 16 * v12);
  *v13 = 0;
  v13[2] = -1;
  v13[1] = 0;
  v13[3] = 0;
  v14 = G4_VCALL<int>(*v106, 12, v82, v83, v84, v85, v86, v87, v88, v90, v91, v92, &v118, v122, v96, v98, v99, v102, v104, v106, v117, v112, v113, v114, v115, v116[0], v116[1], v116[2], v116[3], v117[0], v117[1], v117[2], v117[3], v118, v119, v120, v121, v122[0], v122[1], v122[2], v122[3], v123, v124, v125, v126, v127, v128, v129, v130, v131, v132, v133, v134, v135, v136, v137, v138, v139, v140, v141, v142, v143, v144, v145);
  v97 = (hkString::Self *)G4_VCALL<int>(v14, 8);
  hkOArchive::write32(v111, -894431970);
  hkOArchive::write32(v111, -804128050);
  hkOArchive::write8u(v111, 2u);
  hkOArchive::write8u(v111, 0xAu);
  v15 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
          v94,
          (hkString::Self *)"hk_2014.1.0-r1",
          -1);
  if ( v15 == -1 )
  {
    LODWORD(v75) = hkString::strLen((hkString::Self *)"hk_2014.1.0-r1");
    v76 = 2LL * (int)v75;
    HIDWORD(v75) = HIDWORD(v76);
    HIDWORD(v77) = v76;
    v101 = v75;
    LODWORD(v77) = v75 >> 31;
    if ( v76 < 0 )
    {
      v81 = -2LL * v75;
      LODWORD(v77) = HIDWORD(v81);
      HIDWORD(v77) = v81 | 1;
    }
    while ( 1 )
    {
      v78 = BYTE4(v77);
      HIDWORD(v77) = __PAIR64__(v77, HIDWORD(v77)) >> 7;
      LODWORD(v77) = (unsigned int)v77 >> 7;
      v79 = v78 & 0x7F;
      if ( v77 == 0 )
        break;
      hkOArchive::write8u(v111, v79 | 0x80);
    }
    hkOArchive::write8u(v111, v79);
    hkOArchive::writeRaw(v111, "hk_2014.1.0-r1", v101);
    hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v94, (hkString::Self *)"hk_2014.1.0-r1", v119 + 1);
  }
  else
  {
    LODWORD(v16) = -v15;
    v18 = 2LL * (int)v16;
    HIDWORD(v16) = HIDWORD(v18);
    v17 = v18;
    v19 = v16 >> 31;
    if ( v18 < 0 )
    {
      v80 = -2LL * v16;
      v19 = HIDWORD(v80);
      v17 = v80 | 1;
    }
    v20 = v17;
    HIDWORD(v21) = __PAIR64__(v19, v17) >> 7;
    LODWORD(v21) = v19 >> 7;
    v22 = v20 & 0x7F;
    if ( v21 != 0 )
    {
      v23 = v22;
      do
      {
        hkOArchive::write8u(v111, v23 | 0x80);
        v24 = BYTE4(v21);
        HIDWORD(v21) = __PAIR64__(v21, HIDWORD(v21)) >> 7;
        LODWORD(v21) = (unsigned int)v21 >> 7;
        v23 = v24 & 0x7F;
      }
      while ( v21 != 0 );
      v22 = v23;
    }
    hkOArchive::write8u(v111, v22);
  }
  hkOArchive::write16u(v111, 0x15u);
  v25 = 0;
  hkOArchive::write16u(v111, *(uint16_t *)(v141 + 8));
  v26 = v141;
  if ( *(int *)(v141 + 8) > 0 )
  {
    do
    {
      v27 = *(uint16_t *)(*(uint32_t *)(v26 + 4) + 2 * v25++);
      hkOArchive::write16u(v111, v27);
      v26 = v141;
    }
    while ( v25 < *(uint32_t *)(v141 + 8) );
  }
  sub_188B790((int)(uintptr_t)(v111), (int)(uintptr_t)(v97), v107);
  v28 = v131;
  v105 = 1;
  if ( v131 > 1 )
  {
    while ( *(uint32_t *)(v130 + 16 * v105 + 12) == -1 )
    {
LABEL_57:
      if ( ++v105 >= v28 )
        goto LABEL_58;
    }
    v29 = *(uint32_t *)v97;
    v147 = v130 + 16 * v105;
    v146 = v97;
    (*(void (**)(uint32_t *))(v29 + 48))(v116);
    if ( v133 != 0 )
    {
      if ( v116[0] == 0 )
        goto LABEL_81;
      v30 = *(uint32_t *)v116[0];
      v146 = (hkString::Self *)v116[0];
      (*(void (**)(unsigned int *))(v30 + 8))(&v112);
      if ( v136 > 0 )
      {
        for ( i = -1640531535 * (v112 >> 4); ; i = v32 + 1 )
        {
          v32 = v136 & i;
          v33 = (uint32_t *)(v134 + 12 * v32);
          if ( *v33 == -1 )
            break;
          if ( *v33 == v112 && v33[1] == v113 )
          {
            v34 = v33[2];
            if ( v34 == -1 )
              break;
            v35 = **(hkString::Self ***)(v137 + 4 * v34);
            v103 = v35;
            if ( v35 != nullptr )
            {
              v36 = *((uint32_t *)v35 + 1);
              ++*((uint32_t *)v35 + 2);
              v37 = v36;
              LOWORD(v36) = 0;
              *((uint32_t *)v35 + 1) = v36 | (uint16_t)(v37 + 1);
              goto LABEL_36;
            }
            goto LABEL_81;
          }
        }
      }
    }
    v38 = v116[0];
    v103 = (hkString::Self *)v116[0];
    if ( v116[0] != 0 )
    {
      v39 = *(uint32_t *)(v116[0] + 4);
      ++*(uint32_t *)(v116[0] + 8);
      v40 = v39;
      LOWORD(v39) = 0;
      *(uint32_t *)(v38 + 4) = v39 | (uint16_t)(v40 + 1);
LABEL_36:
      v41 = *(uint32_t *)v103;
      v146 = v103;
      (*(void (**)(unsigned int *))(v41 + 8))(&v112);
      v108 = v112;
      v100 = v113;
      goto LABEL_37;
    }
LABEL_81:
    v103 = nullptr;
    v100 = 0;
    v108 = 0;
LABEL_37:
    if ( v126 > 0 )
    {
      for ( j = -1640531535 * (v108 >> 4); ; j = v43 + 1 )
      {
        v43 = v126 & j;
        v44 = (uint32_t *)(v124 + 12 * v43);
        if ( *v44 == -1 )
          break;
        if ( *v44 == v108 && v44[1] == v100 )
        {
          v45 = 16 * v44[2];
          goto LABEL_44;
        }
      }
    }
    v45 = -16;
LABEL_44:
    v109 = v130 + v45;
    hkOArchive::write8u(v111, 8u);
    v46 = G4_VCALL<int>(v103, 12);
    if ( v46 != 0 )
    {
      v47 = (hkString::Self *)G4_VCALL<int>(v46, 12);
      v48 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(v95, v47, -1);
      if ( v48 >> 31 < 0 )
      {
        v74 = -(int64_t)v48;
        HIDWORD(v148) = v74 >> 31;
        LODWORD(v148) = (2 * v74) | 1;
        v51 = (2 * v74) & 0x7E | 1;
        HIDWORD(v50) = v148 >> 7;
        LODWORD(v50) = HIDWORD(v148) >> 7;
      }
      else
      {
        v49 = 2LL * v48;
        LODWORD(v50) = HIDWORD(v49) >> 7;
        HIDWORD(v50) = v49 >> 7;
        v51 = v49 & 0x7F;
      }
    }
    else
    {
      v51 = 0;
      v50 = 0;
    }
    if ( v50 != 0 )
    {
      v52 = v51;
      do
      {
        hkOArchive::write8u(v111, v52 | 0x80);
        v53 = BYTE4(v50);
        HIDWORD(v50) = __PAIR64__(v50, HIDWORD(v50)) >> 7;
        LODWORD(v50) = (unsigned int)v50 >> 7;
        v52 = v53 & 0x7F;
      }
      while ( v50 != 0 );
      v51 = v52;
    }
    hkOArchive::write8u(v111, v51);
    sub_1886830((int)(uintptr_t)(v111), v116, v109 + 8);
    v54 = *((uint32_t *)v103 + 1);
    LOWORD(v54) = 0;
    *((uint32_t *)v103 + 1) = v54 | (uint16_t)(*((uint32_t *)v103 + 1) - 1);
    v110 = *((uint32_t *)v103 + 2);
    *((uint32_t *)v103 + 2) = v110 - 1;
    if ( v110 == 1 )
      G4_VCALL<void>(v103, 4);
    v55 = (uint32_t *)v116[0];
    if ( v116[0] != 0 )
    {
      v56 = *(uint32_t *)(v116[0] + 4);
      v57 = *(uint32_t *)(v116[0] + 8);
      LOWORD(v56) = 0;
      *(uint32_t *)(v116[0] + 4) = v56 | (uint16_t)(*(uint32_t *)(v116[0] + 4) - 1);
      v55[2] = v57 - 1;
      if ( v57 == 1 )
        G4_VCALL<void>(v55, 4);
    }
    v28 = v131;
    goto LABEL_57;
  }
LABEL_58:
  hkOArchive::write8u(v111, 0xEu);
  G4_VCALL<void>(v89, 28);
  (*(void (**)(char *, int))(*(uint32_t *)v89 + 20))((char *)&v114 + 3, v89);
  v58 = 0;
  *v93 = HIBYTE(v114) == 0;
  for ( k = v138; v58 < k; ++v58 )
  {
    v60 = *(uint32_t ***)(v137 + 4 * v58);
    if ( v60 != nullptr )
    {
      v61 = *v60;
      if ( *v60 != nullptr )
      {
        v62 = v61[1];
        LOWORD(v62) = 0;
        v63 = v62 | (uint16_t)(v61[1] - 1);
        v64 = v61[2]-- == 1;
        v61[1] = v63;
        if ( v64 )
          G4_VCALL<void>(v61, 4);
      }
      address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      (*(void (**)(uint32_t, uint32_t **, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
        *(uint32_t *)(*(uint32_t *)address + 44),
        v60,
        4);
      k = v138;
    }
  }
  v138 = 0;
  if ( v139 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
      (uint32_t *)(hkContainerTempAllocator::s_alloc),
      v137,
      4 * v139);
  v66 = 0;
  v67 = 0;
  v68 = v136 + 1;
  v137 = 0;
  v139 = 0x80000000;
  if ( v136 >= 0 )
  {
    do
    {
      ++v67;
      *(uint32_t *)(v134 + v66) = -1;
      v66 += 12;
    }
    while ( v67 != v68 );
  }
  v69 = v135 < 0;
  v135 &= 0x80000000;
  if ( !v69 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 12))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v134,
      4 * (3 * v136 + 3));
  v134 = 0;
  v135 = 0;
  v136 = -1;
  v131 = 0;
  if ( v132 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
      (uint32_t *)(hkContainerTempAllocator::s_alloc),
      v130,
      16 * v132);
  v130 = 0;
  v132 = 0x80000000;
  v128 = 0;
  if ( v129 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
      (uint32_t *)(hkContainerTempAllocator::s_alloc),
      v127,
      v129 & 0x3FFFFFFF);
  v70 = 0;
  v71 = 0;
  v72 = v126 + 1;
  v127 = 0;
  v129 = 0x80000000;
  if ( v126 >= 0 )
  {
    do
    {
      ++v71;
      *(uint32_t *)(v124 + v70) = -1;
      v70 += 12;
    }
    while ( v71 != v72 );
  }
  v69 = v125 < 0;
  v125 &= 0x80000000;
  if ( !v69 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 12))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v124,
      4 * (3 * v126 + 3));
  v124 = 0;
  v125 = 0;
  v126 = -1;
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Destroy(v95);
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Destroy(v94);
  hkOArchive::Destroy(v111);
  return v93;
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::Destroy  (binary VA: 0x188f2d0)
// Original: hkTypeManager::~hkTypeManager
// ----------------------------------------------------------------------------
void hkTypeManager::Destroy(hkTypeManager::Self *self)
{
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v1;
  int i;
  hkString::Self *Key;
  typedef bool _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A67D8);
  hkFreeList::freeAllMemory((hkTypeManager::Self *)((char *)self + 80));
  hkMultiMap_unsigned_long_unsigned_l_56398e::Destroy((hkTypeManager::Self *)((char *)self + 68));
  v1 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)((hkTypeManager::Self *)((char *)self + 52));
  for ( i = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getIterator((hkTypeManager::Self *)((char *)self + 52));
        ;
        i = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getNext(v1, i) )
  {
    hkCachedHashMap_hkStringMapOperations_hk_b9db0c::isValid(&v4, (int)(uintptr_t)(v1), i);
    if ( !v4 )
      break;
    Key = (hkString::Self *)hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getKey(v1, i);
    hkString::strFree(Key, (hkMemoryRouter::Self *)&hkContainerHeapAllocator::s_alloc);
  }
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::clear(v1);
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Destroy(v1);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::Destroy_ea188f3a0  (binary VA: 0x188f3a0)
// Original: hkTypeManager::~hkTypeManager
// ----------------------------------------------------------------------------
void hkTypeManager::Destroy_ea188f3a0(hkTypeManager::Self *self)
{
  int v1;
  int v2;

  hkTypeManager::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 136;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::Type::getTupleSize  (binary VA: 0x188f480)
// Original: hkTypeManager::Type::getTupleSize
// ----------------------------------------------------------------------------
int hkTypeManager::Type::getTupleSize(hkTypeManager::Type::Self *self)
{
  if ( *(uint32_t *)self == 9 )
    return *((uint32_t *)self + 2);
  else
    return -1;
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::Type::getTypeName  (binary VA: 0x188f4a0)
// Original: hkTypeManager::Type::getTypeName
// ----------------------------------------------------------------------------
int hkTypeManager::Type::getTypeName(hkTypeManager::Type::Self *self)
{
  int result;

  result = 0;
  if ( *(uint32_t *)self == 6 )
    return *((uint32_t *)self + 2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::Type::calcHash  (binary VA: 0x188f4b0)
// Original: hkTypeManager::Type::_calcHash
// ----------------------------------------------------------------------------
int hkTypeManager::Type::calcHash(hkTypeManager::Type::Self *self)
{
  int result;

  result = 0;
  do
  {
    while ( 1 )
    {
      result = __builtin_rotateright32(result, 31) ^ (-1640531535 * *(uint32_t *)self);
      if ( *(uint32_t *)self != 6 )
        break;
      result ^= (unsigned int)(uintptr_t)(self);
      self = *((hkTypeManager::Type::Self **)self + 1);
      if ( self == nullptr )
        return result;
    }
    if ( *(uint32_t *)self == 9 )
      result ^= *((uint32_t *)self + 2);
    self = *((hkTypeManager::Type::Self **)self + 1);
  }
  while ( self != nullptr );
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::Type::calcHash_ea188f4f0  (binary VA: 0x188f4f0)
// Original: hkTypeManager::Type::calcHash
// ----------------------------------------------------------------------------
int hkTypeManager::Type::calcHash_ea188f4f0(hkTypeManager::Type::Self *self)
{
  int v1;
  int v2;

  v1 = hkTypeManager::Type::calcHash(self);
  v2 = 2062676778;
  if ( v1 != -1 )
    return v1;
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::Type::equals  (binary VA: 0x188f520)
// Original: hkTypeManager::Type::_equals
// ----------------------------------------------------------------------------
hkTypeManager::Type::Self * hkTypeManager::Type::equals(hkTypeManager::Type::Self *self, const hkTypeManager::Type::Self *a2, uint32_t *a3)
{
  hkTypeManager::Type::Self *result;
  int v4;

  result = self;
  v4 = *(uint32_t *)a2;
  *(uint8_t *)self = *(uint32_t *)a2 == *a3
                && *((uint32_t *)a2 + 1) == a3[1]
                && (v4 != 6 && v4 != 9 || *((uint32_t *)a2 + 2) == a3[2]);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::Type::findTerminal  (binary VA: 0x188f570)
// Original: hkTypeManager::Type::findTerminal
// ----------------------------------------------------------------------------
hkTypeManager::Type::Self * hkTypeManager::Type::findTerminal(hkTypeManager::Type::Self *self)
{
  hkTypeManager::Type::Self *result;

  for ( result = self; *((uint32_t *)result + 1) != 0; result = *((hkTypeManager::Type::Self **)result + 1) )
    ;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::Type::asText  (binary VA: 0x188f590)
// Original: hkTypeManager::Type::asText
// ----------------------------------------------------------------------------
int hkTypeManager::Type::asText(hkTypeManager::Type::Self *self, const hkTypeManager::Type::Self *a2)
{
  hkTypeManager::Type::Self *i;
  int result;
  int v4;
  int v5;
  int v6;
  hkString::Self *TypeName;
  char *v8;

  for ( i = self; i != nullptr; i = *((hkTypeManager::Type::Self **)i + 1) )
  {
    switch ( *(uint32_t *)i )
    {
      case 0:
        result = hkOstream::opShl((int)(uintptr_t)(a2), (hkString::Self *)"!");
        break;
      case 1:
        result = hkOstream::opShl((int)(uintptr_t)(a2), (hkString::Self *)"void");
        break;
      case 2:
        result = hkOstream::opShl((int)(uintptr_t)(a2), (hkString::Self *)"byte");
        break;
      case 3:
        result = hkOstream::opShl((int)(uintptr_t)(a2), (hkString::Self *)"real");
        break;
      case 4:
        result = hkOstream::opShl((int)(uintptr_t)(a2), (hkString::Self *)"int");
        break;
      case 5:
        result = hkOstream::opShl((int)(uintptr_t)(a2), (hkString::Self *)"cstring");
        break;
      case 6:
        if ( hkTypeManager::Type::getTypeName(i) != 0 )
        {
          TypeName = (hkString::Self *)hkTypeManager::Type::getTypeName(i);
          v4 = hkOstream::opShl((int)(uintptr_t)(a2), (hkString::Self *)"class ");
          result = hkOstream::opShl(v4, TypeName);
        }
        else
        {
          result = hkOstream::opShl((int)(uintptr_t)(a2), (hkString::Self *)"homogeneous/variant class");
        }
        break;
      case 7:
        result = hkOstream::opShl((int)(uintptr_t)(a2), (hkString::Self *)"*");
        break;
      case 8:
        result = hkOstream::opShl((int)(uintptr_t)(a2), (hkString::Self *)"[]");
        break;
      case 9:
        v8 = *((char **)i + 2);
        v5 = hkOstream::opShl((int)(uintptr_t)(a2), (hkString::Self *)"{");
        v6 = hkOstream::opShl(v5, v8);
        result = hkOstream::opShl(v6, (hkString::Self *)"}");
        break;
      default:
        continue;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::Type::asText  (binary VA: 0x188f740)
// Original: hkTypeManager::Type::asText
// ----------------------------------------------------------------------------
int hkTypeManager::Type::asText(hkTypeManager::Type::Self *self, hkOstream::Self *a2)
{
  return hkTypeManager::Type::asText(self, a2);
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::Type::getTypePath  (binary VA: 0x188f770)
// Original: hkTypeManager::Type::getTypePath
// ----------------------------------------------------------------------------
int hkTypeManager::Type::getTypePath(int a1, hkMemoryAllocator::Self *a2)
{
  int result;
  int v3;
  int v4;

  result = 0;
  v3 = a1;
  for ( *((uint32_t *)a2 + 1) = 0; v3 != 0; v3 = *(uint32_t *)(v3 + 4) )
  {
    if ( (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) == result )
    {
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 4, v4);
      result = *((uint32_t *)a2 + 1);
    }
    *(uint32_t *)(*(uint32_t *)a2 + 4 * result) = v3;
    result = *((uint32_t *)a2 + 1) + 1;
    *((uint32_t *)a2 + 1) = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::Type::isEqual  (binary VA: 0x188f7f0)
// Original: hkTypeManager::Type::_isEqual
// ----------------------------------------------------------------------------
hkTypeManager::Type::Self * hkTypeManager::Type::isEqual(hkTypeManager::Type::Self *self, const hkTypeManager::Type::Self *a2, const hkTypeManager::Type::Self *a3)
{
  const hkTypeManager::Type::Self *v3;
  const hkTypeManager::Type::Self *v4;
  int TupleSize;
  int v6;
  hkString::Self *TypeName;
  char *v8;

  v3 = a2;
  v4 = a3;
  if ( a2 == nullptr || a3 == nullptr )
  {
LABEL_14:
    *(uint8_t *)self = v3 == nullptr && v4 == nullptr;
    return self;
  }
  while ( 1 )
  {
    v6 = *(uint32_t *)v3;
    if ( *(uint32_t *)v3 != *(uint32_t *)v4 )
    {
LABEL_13:
      *(uint8_t *)self = 0;
      return self;
    }
    if ( v6 == 6 )
      break;
    if ( v6 == 9 )
    {
      TupleSize = hkTypeManager::Type::getTupleSize((hkTypeManager::Type::Self *)(v3));
      if ( TupleSize != hkTypeManager::Type::getTupleSize((hkTypeManager::Type::Self *)(v4)) )
        goto LABEL_13;
    }
LABEL_6:
    v4 = *((const hkTypeManager::Type::Self **)v4 + 1);
    v3 = *((const hkTypeManager::Type::Self **)v3 + 1);
    if ( v4 == nullptr || v3 == nullptr )
      goto LABEL_14;
  }
  TypeName = (hkString::Self *)hkTypeManager::Type::getTypeName((hkTypeManager::Type::Self *)(v3));
  v8 = (char *)hkTypeManager::Type::getTypeName((hkTypeManager::Type::Self *)(v4));
  if ( v8 != nullptr && TypeName != nullptr )
  {
    if ( hkString::strCmp(TypeName, v8) != 0 )
      goto LABEL_13;
    goto LABEL_6;
  }
  *(uint8_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::Type::isEqual  (binary VA: 0x188f8d0)
// Original: hkTypeManager::Type::isEqual
// ----------------------------------------------------------------------------
hkTypeManager::Type::Self * hkTypeManager::Type::isEqual(hkTypeManager::Type::Self *self, const hkTypeManager::Type::Self *a2, hkTypeManager::Type::Self *a3)
{
  if ( a3 == a2 )
    *(uint8_t *)self = 1;
  else
    hkTypeManager::Type::isEqual(self, a2, a3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::addType  (binary VA: 0x188f920)
// Original: hkTypeManager::_addType
// ----------------------------------------------------------------------------
uint32_t * hkTypeManager::addType(hkTypeManager::Self *self, const hkTypeManager::Type::Self *a2)
{
  unsigned int v2;
  int Key;
  int v4;
  uint32_t *v5;
  int *v6;
  int v7;
  uint32_t *v8;
  uint32_t *v10;
  char *v11;
  int v12;
  typedef int _g4_t_v13;
  typedef char _g4_t_v14[25];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v14)) > _g4_s1 ? (15u + sizeof(_g4_t_v14)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 15u);

  v2 = hkTypeManager::Type::calcHash((hkTypeManager::Type::Self *)(a2));
  Key = hkMultiMap_unsigned_long_unsigned_l_56398e::findKey(
          (hkTypeManager::Self *)((char *)self + 68),
          v2);
  v4 = *((uint32_t *)self + 19);
LABEL_2:
  if ( Key > v4 )
  {
LABEL_12:
    v8 = *((uint32_t **)self + 20);
    if ( v8 != nullptr )
    {
      --*((uint32_t *)self + 33);
      *((uint32_t *)self + 20) = *v8;
      v5 = v8;
    }
    else
    {
      v10 = *((uint32_t **)self + 28);
      if ( (unsigned int)(uintptr_t)(v10) >= *((uint32_t *)self + 29) )
      {
        v5 = (uint32_t *)hkFreeList::addSpace((hkTypeManager::Self *)((char *)self + 80));
      }
      else
      {
        v11 = (char *)v10 + *((uint32_t *)self + 21);
        --*((uint32_t *)self + 33);
        v5 = v10;
        *((uint32_t *)self + 28) = (uint32_t)(uintptr_t)(v11);
      }
    }
    *v5 = *(uint32_t *)a2;
    v5[1] = *((uint32_t *)a2 + 1);
    v5[2] = *((uint32_t *)a2 + 2);
    hkMultiMap_unsigned_long_unsigned_l_56398e::insert(
      (hkTypeManager::Self *)((char *)self + 68),
      v2,
      (unsigned int)(uintptr_t)(v5));
  }
  else
  {
    while ( 1 )
    {
      v13 = Key;
      v5 = *(uint32_t **)(*((uint32_t *)self + 17) + 8 * Key + 4);
      hkTypeManager::Type::equals((hkTypeManager::Type::Self *)v14, a2, v5);
      if ( v14[0] != 0 )
        break;
      v4 = *((uint32_t *)self + 19);
      v6 = *((int **)self + 17);
      Key = v13 + 1;
      if ( v4 >= 0 )
      {
        while ( 1 )
        {
          if ( v4 < Key )
          {
            Key = 0;
            v7 = *v6;
            if ( *v6 == -1 )
              goto LABEL_11;
          }
          else
          {
            v7 = v6[2 * Key];
            if ( v7 == -1 )
              goto LABEL_11;
          }
          if ( v2 == v7 )
            goto LABEL_2;
          ++Key;
        }
      }
      while ( 1 )
      {
        if ( v4 < Key )
        {
          while ( 1 )
            ;
        }
        v12 = v6[2 * Key];
        if ( v12 == -1 )
          break;
        if ( v2 == v12 )
          goto LABEL_2;
        ++Key;
      }
LABEL_11:
      Key = v4 + 1;
      if ( v4 + 1 > v4 )
        goto LABEL_12;
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::addBuiltIn  (binary VA: 0x188fab0)
// Original: hkTypeManager::_addBuiltIn
// ----------------------------------------------------------------------------
uint32_t * hkTypeManager::addBuiltIn(hkTypeManager::Self *a1, int a2)
{
  uint32_t *result;
  uint32_t v3[7];

  v3[0] = a2;
  v3[1] = 0;
  v3[2] = 0;
  result = hkTypeManager::addType(a1, (const hkTypeManager::Type::Self *)v3);
  *((uint32_t *)a1 + a2 + 3) = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::Construct  (binary VA: 0x188fb00)
// Original: hkTypeManager::hkTypeManager
// ----------------------------------------------------------------------------
void hkTypeManager::Construct(hkTypeManager::Self *self)
{
  hkTypeManager::Type::Self *v1;
  unsigned int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A67D8);
  *((uint32_t *)self + 1) = -65535;
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Construct((hkString::Self **)self + 13);
  hkMultiMap_unsigned_long_unsigned_l_56398e::Construct((hkTypeManager::Self *)((char *)self + 68));
  hkFreeList::Construct((hkTypeManager::Self *)((char *)self + 80), 0xCu, 4u, 0x800u, nullptr, nullptr);
  hkString::memSet((hkTypeManager::Self *)((char *)self + 12), nullptr, 0x28u);
  hkTypeManager::addBuiltIn(self, 1);
  hkTypeManager::addBuiltIn(self, 4);
  hkTypeManager::addBuiltIn(self, 3);
  hkTypeManager::addBuiltIn(self, 5);
  hkTypeManager::addBuiltIn(self, 2);
  v1 = *((hkTypeManager::Type::Self **)self + 20);
  if ( v1 != nullptr )
  {
    --*((uint32_t *)self + 33);
    *((uint32_t *)self + 20) = *(uint32_t *)v1;
  }
  else
  {
    v1 = *((hkTypeManager::Type::Self **)self + 28);
    if ( (unsigned int)(uintptr_t)(v1) >= *((uint32_t *)self + 29) )
    {
      v1 = (hkTypeManager::Type::Self *)hkFreeList::addSpace((hkTypeManager::Self *)((char *)self + 80));
    }
    else
    {
      v3 = *((uint32_t *)self + 21);
      --*((uint32_t *)self + 33);
      *((uint32_t *)self + 28) = (uint32_t)(uintptr_t)((char *)v1 + v3);
    }
  }
  *(uint32_t *)v1 = 6;
  *((uint32_t *)v1 + 1) = 0;
  *((uint32_t *)v1 + 2) = 0;
  v2 = hkTypeManager::Type::calcHash(v1);
  hkMultiMap_unsigned_long_unsigned_l_56398e::insert(
    (hkTypeManager::Self *)((char *)self + 68),
    v2,
    (unsigned int)(uintptr_t)(v1));
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v1);
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::findTypesUsingClass  (binary VA: 0x188fc70)
// Original: hkTypeManager::findTypesUsingClass
// ----------------------------------------------------------------------------
uint32_t * hkTypeManager::findTypesUsingClass(int a1, hkTypeManager::Type::Self *a2, hkMemoryAllocator::Self *a3)
{
  int v3;
  uint32_t *result;
  int v5;
  hkTypeManager::Type::Self *v6;
  int v7;
  int v8;
  int i;
  int v10;

  *((uint32_t *)a3 + 1) = 0;
  v3 = *(uint32_t *)(a1 + 76);
  result = *(uint32_t **)(a1 + 68);
  if ( v3 >= 0 )
  {
    v5 = 0;
    if ( *result == -1 )
    {
      while ( v3 >= ++v5 )
      {
        if ( result[2 * v5] != -1 )
          goto LABEL_7;
      }
    }
    else
    {
      for ( i = 0; ; i = v5 )
      {
        v6 = (hkTypeManager::Type::Self *)result[2 * i + 1];
        if ( hkTypeManager::Type::findTerminal(v6) == a2 )
        {
          v8 = *((uint32_t *)a3 + 1);
          if ( v8 == (*((uint32_t *)a3 + 2) & 0x3FFFFFFF) )
          {
            hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a3, 4, v10);
            v8 = *((uint32_t *)a3 + 1);
          }
          *(uint32_t *)(*(uint32_t *)a3 + 4 * v8) = (uint32_t)(uintptr_t)(v6);
          ++*((uint32_t *)a3 + 1);
        }
        v7 = *(uint32_t *)(a1 + 76);
        ++v5;
        result = *(uint32_t **)(a1 + 68);
        if ( v7 < v5 )
          break;
        while ( result[2 * v5] == -1 )
        {
          if ( v7 < ++v5 )
            return result;
        }
LABEL_7:
        ;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::removeClass  (binary VA: 0x188fd60)
// Original: hkTypeManager::removeClass
// ----------------------------------------------------------------------------
int hkTypeManager::removeClass(hkTypeManager::Self *self, hkTypeManager::Type::Self *a2)
{
  hkTypeManager::Type::Self *v2;
  hkTypeManager::Self *v3;
  int v4;
  int i;
  int *v6;
  hkTypeManager::Type::Self *v7;
  int j;
  uint32_t *v9;
  int *v10;
  int Key;
  int result;
  hkString::Self *v13;
  typedef uint32_t *_g4_t_v14;
  typedef hkString::Self *_g4_t_TypeName;
  typedef hkTypeManager::Self *_g4_t_v16;
  typedef bool _g4_t_v17;
  typedef uint8_t _g4_t_v18[4];
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef hkTypeManager::Self **_g4_t_v25;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v14)) > _g4_s0 ? (4u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_TypeName)) > _g4_s1 ? (16u + sizeof(_g4_t_TypeName)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v16)) > _g4_s2 ? (20u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (35u + sizeof(_g4_t_v17)) > _g4_s3 ? (35u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v18)) > _g4_s4 ? (36u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v19)) > _g4_s5 ? (40u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v20)) > _g4_s6 ? (44u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v21)) > _g4_s7 ? (48u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v22)) > _g4_s8 ? (56u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v23)) > _g4_s9 ? (60u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v24)) > _g4_s10 ? (64u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v25)) > _g4_s11 ? (80u + sizeof(_g4_t_v25)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_TypeName &TypeName = *reinterpret_cast<_g4_t_TypeName *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 35u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 56u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 64u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 80u);

  v25 = &self;
  v2 = a2;
  v3 = self;
  v16 = self;
  TypeName = (hkString::Self *)hkTypeManager::Type::getTypeName(a2);
  v19 = 0;
  v20 = 0;
  v21 = 0x80000000;
  hkTypeManager::findTypesUsingClass((int)(uintptr_t)(v3), v2, (hkMemoryAllocator::Self *)&v19);
  v4 = v20;
  v22 = 0;
  v23 = 0;
  v24 = 0x80000000;
  if ( v20 <= 0 )
  {
    v23 = v20;
  }
  else
  {
    hkArrayUtil::reserve((hkArrayUtil::Self *)v18, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v22, v20, 4);
    v23 = v4;
    if ( v20 > 0 )
    {
      for ( i = 0; i < v20; ++i )
      {
        v6 = (int *)(v22 + 4 * i);
        v7 = *(hkTypeManager::Type::Self **)(v19 + 4 * i);
        *v6 = hkTypeManager::Type::calcHash(v7);
      }
      if ( v20 > 0 )
      {
        for ( j = 0; j < v20; ++j )
        {
          v9 = *(uint32_t **)(v19 + 4 * j);
          v14 = v9;
          hkMultiMap_unsigned_long_unsigned_l_56398e::remove(
            (hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *)v18,
            (unsigned int)(uintptr_t)(v16) + 68,
            *(uint32_t *)(v22 + 4 * j));
          *v9 = 0;
          v9[1] = 0;
        }
      }
    }
  }
  v10 = (int *)((char *)v16 + 52);
  Key = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::findKey(
          (hkTypeManager::Self *)((char *)v16 + 52),
          TypeName);
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::isValid(&v17, (int)(uintptr_t)(v16) + 52, Key);
  if ( v17 )
  {
    v13 = (hkString::Self *)hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getKey(v10, Key);
    hkString::strFree(v13, (hkMemoryRouter::Self *)&hkContainerHeapAllocator::s_alloc);
    hkCachedHashMap_hkStringMapOperations_hk_b9db0c::remove(v10, Key);
  }
  v23 = 0;
  if ( v24 >= 0 )
    (*(void (**)(uint32_t *, int, int, uint32_t *))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v22,
      4 * v24,
      v14);
  result = v21;
  v22 = 0;
  v24 = 0x80000000;
  v20 = 0;
  if ( v21 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v19,
             4 * v21);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::garbageCollect  (binary VA: 0x188ff80)
// Original: hkTypeManager::garbageCollect
// ----------------------------------------------------------------------------
int hkTypeManager::garbageCollect(hkTypeManager::Self *self)
{
  hkFreeList::Self *v1;
  uint32_t *v2;
  int v3;
  uint32_t *v4;
  bool v5; // cc
  int result;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v9)) > _g4_s2 ? (8u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);

  v1 = (hkFreeList::Self *)((hkTypeManager::Self *)((char *)self + 80));
  v7 = 0;
  v8 = 0;
  v9 = 0x80000000;
  hkFreeList::walkMemory(
    (hkTypeManager::Self *)((char *)self + 80),
    (void (*)(void *, unsigned int, bool, int, void *))sub_188F400,
    0,
    &v7);
  if ( v8 > 0 )
  {
    v2 = *((uint32_t **)self + 20);
    v3 = 0;
    while ( 1 )
    {
      v4 = *(uint32_t **)(v7 + 4 * v3);
      ++*((uint32_t *)self + 33);
      ++v3;
      *v4 = (uint32_t)(uintptr_t)(v2);
      v5 = v8 <= v3;
      *((uint32_t *)self + 20) = (uint32_t)(uintptr_t)(v4);
      if ( v5 )
        break;
      v2 = v4;
    }
  }
  hkFreeList::findGarbage(v1);
  hkFreeList::freeAllFreeBlocks(v1);
  result = v9;
  v8 = 0;
  if ( v9 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v7,
             4 * v9);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::makePointer  (binary VA: 0x1890060)
// Original: hkTypeManager::makePointer
// ----------------------------------------------------------------------------
uint32_t * hkTypeManager::makePointer(hkTypeManager::Self *self, hkTypeManager::Type::Self *a2)
{
  uint32_t v3[4];

  v3[1] = (uint32_t)(uintptr_t)(a2);
  v3[0] = 7;
  v3[2] = 0;
  return hkTypeManager::addType(self, (const hkTypeManager::Type::Self *)v3);
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::makeArray  (binary VA: 0x18900b0)
// Original: hkTypeManager::makeArray
// ----------------------------------------------------------------------------
uint32_t * hkTypeManager::makeArray(hkTypeManager::Self *self, hkTypeManager::Type::Self *a2)
{
  uint32_t v3[4];

  v3[1] = (uint32_t)(uintptr_t)(a2);
  v3[0] = 8;
  return hkTypeManager::addType(self, (const hkTypeManager::Type::Self *)v3);
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::makeTuple  (binary VA: 0x18900f0)
// Original: hkTypeManager::makeTuple
// ----------------------------------------------------------------------------
uint32_t * hkTypeManager::makeTuple(hkTypeManager::Self *self, hkTypeManager::Type::Self *a2, int a3)
{
  uint32_t v4[4];

  v4[1] = (uint32_t)(uintptr_t)(a2);
  v4[2] = a3;
  v4[0] = 9;
  return hkTypeManager::addType(self, (const hkTypeManager::Type::Self *)v4);
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::isValidClassName  (binary VA: 0x1890140)
// Original: hkTypeManager::_isValidClassName
// ----------------------------------------------------------------------------
hkTypeManager::Self * hkTypeManager::isValidClassName(hkTypeManager::Self *self, const char *a2)
{
  char v2;
  char v3;
  const char *v4;

  if ( a2 != nullptr )
  {
    v2 = *a2;
    if ( *a2 != 0 && ((uint8_t)((v2 & 0xDF) - 65) <= 0x19u || v2 == 95) )
    {
      v3 = a2[1];
      v4 = a2 + 1;
      if ( v3 == 0 )
      {
LABEL_9:
        *(uint8_t *)self = 1;
        return self;
      }
      while ( (uint8_t)((v3 & 0xDF) - 65) <= 0x19u || (uint8_t)(v3 - 48) <= 0xAu || v3 == 95 )
      {
        v3 = *++v4;
        if ( v3 == 0 )
          goto LABEL_9;
      }
    }
  }
  *(uint8_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::getClass  (binary VA: 0x18901b0)
// Original: hkTypeManager::getClass
// ----------------------------------------------------------------------------
int hkTypeManager::getClass(hkTypeManager::Self *self, hkString::Self *a2)
{
  return hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
           (hkTypeManager::Self *)((char *)self + 52),
           a2,
           0);
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::renameClass  (binary VA: 0x18901f0)
// Original: hkTypeManager::renameClass
// ----------------------------------------------------------------------------
int hkTypeManager::renameClass(hkTypeManager::Self *self, hkString::Self *a2, hkString::Self *a3)
{
  int result;
  unsigned int v4;
  int *v5;
  hkString::Self *v6;
  typedef int _g4_t_Key;
  typedef int _g4_t_v8;
  typedef hkString::Self *_g4_t_v9;
  typedef bool _g4_t_v10[25];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_Key)) > _g4_s0 ? (0u + sizeof(_g4_t_Key)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v8)) > _g4_s1 ? (0u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v9)) > _g4_s2 ? (4u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (11u + sizeof(_g4_t_v10)) > _g4_s3 ? (11u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_Key &Key = *reinterpret_cast<_g4_t_Key *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 11u);

  result = hkTypeManager::getClass(self, a2);
  v4 = result;
  if ( result != 0 )
  {
    result = hkTypeManager::getClass(self, a3);
    if ( result == 0 )
    {
      v5 = (int *)((char *)self + 52);
      Key = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::findKey(
              (hkTypeManager::Self *)((char *)self + 52),
              a2);
      hkCachedHashMap_hkStringMapOperations_hk_b9db0c::isValid(v10, (int)(uintptr_t)(self) + 52, Key);
      if ( v10[0] )
      {
        v6 = (hkString::Self *)hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getKey(v5, Key);
        hkString::strFree(v6, (hkMemoryRouter::Self *)&hkContainerHeapAllocator::s_alloc);
        hkCachedHashMap_hkStringMapOperations_hk_b9db0c::remove(v5, Key);
      }
      v8 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::findKey(
             (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)v5,
             a3);
      hkCachedHashMap_hkStringMapOperations_hk_b9db0c::isValid(v10, (int)(uintptr_t)(v5), v8);
      if ( v10[0] )
      {
        v9 = (hkString::Self *)hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getKey(v5, v8);
        hkCachedHashMap_hkStringMapOperations_hk_b9db0c::setValue(v5, v8, v4);
      }
      else
      {
        v9 = hkString::strDup(a3, (hkMemoryRouter::Self *)&hkContainerHeapAllocator::s_alloc);
        hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
          (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)v5,
          v9,
          v4);
      }
      *(uint32_t *)(v4 + 8) = (uint32_t)(uintptr_t)(v9);
      return (int)(uintptr_t)(v9);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::addClass  (binary VA: 0x1890340)
// Original: hkTypeManager::addClass
// ----------------------------------------------------------------------------
int hkTypeManager::addClass(hkTypeManager::Type::Self **self, hkString::Self *a2)
{
  int result;
  hkTypeManager::Type::Self *v3;
  unsigned int v4;
  int v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_Key;
  typedef hkString::Self *_g4_t_v8;
  typedef hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *_g4_t_v9;
  typedef bool _g4_t_v10;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_Key)) > _g4_s1 ? (4u + sizeof(_g4_t_Key)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v8)) > _g4_s2 ? (4u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v9)) > _g4_s3 ? (8u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (15u + sizeof(_g4_t_v10)) > _g4_s4 ? (15u + sizeof(_g4_t_v10)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_Key &Key = *reinterpret_cast<_g4_t_Key *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 15u);

  result = hkTypeManager::getClass((hkTypeManager::Self *)self, a2);
  if ( result == 0 )
  {
    v3 = *(self + 20);
    if ( v3 != nullptr )
    {
      *(self + 33) = (hkTypeManager::Type::Self *)((char *)*(self + 33) - 1);
      *(self + 20) = *(hkTypeManager::Type::Self **)v3;
    }
    else
    {
      v3 = *(self + 28);
      if ( v3 >= *(self + 29) )
      {
        v3 = (hkTypeManager::Type::Self *)hkFreeList::addSpace((hkFreeList::Self *)(self + 20));
      }
      else
      {
        v5 = (int)(uintptr_t)(*(self + 21));
        *(self + 33) = (hkTypeManager::Type::Self *)((char *)*(self + 33) - 1);
        *(self + 28) = (hkTypeManager::Type::Self *)((char *)v3 + v5);
      }
    }
    *(uint32_t *)v3 = 6;
    *((uint32_t *)v3 + 1) = 0;
    v9 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(self + 13);
    Key = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::findKey(
            (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(self + 13),
            a2);
    hkCachedHashMap_hkStringMapOperations_hk_b9db0c::isValid(&v10, (int)(uintptr_t)(self + 13), Key);
    if ( v10 )
    {
      v6 = Key;
      v8 = (hkString::Self *)hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getKey(v9, Key);
      hkCachedHashMap_hkStringMapOperations_hk_b9db0c::setValue(v9, v6, (int)(uintptr_t)(v3));
    }
    else
    {
      v8 = hkString::strDup(a2, (hkMemoryRouter::Self *)&hkContainerHeapAllocator::s_alloc);
      hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v9, v8, (unsigned int)(uintptr_t)(v3));
    }
    *((uint32_t *)v3 + 2) = (uint32_t)(uintptr_t)(v8);
    v4 = hkTypeManager::Type::calcHash(v3);
    hkMultiMap_unsigned_long_unsigned_l_56398e::insert(
      (hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *)(self + 17),
      v4,
      (unsigned int)(uintptr_t)(v3));
    return (int)(uintptr_t)(v3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::replaceParent  (binary VA: 0x1890490)
// Original: hkTypeManager::replaceParent
// ----------------------------------------------------------------------------
hkTypeManager::Type::Self * hkTypeManager::replaceParent(hkTypeManager::Self *self, hkTypeManager::Type::Self *a2, hkTypeManager::Type::Self *a3)
{
  hkTypeManager::Type::Self *result;
  int v4;
  int TupleSize;

  result = a2;
  if ( *((hkTypeManager::Type::Self **)a2 + 1) != a3 )
  {
    v4 = *(uint32_t *)a2;
    if ( *(uint32_t *)a2 == 8 )
    {
      return (hkTypeManager::Type::Self *)hkTypeManager::makeArray(self, a3);
    }
    else if ( v4 == 9 )
    {
      TupleSize = hkTypeManager::Type::getTupleSize(a2);
      return (hkTypeManager::Type::Self *)hkTypeManager::makeTuple(self, a3, TupleSize);
    }
    else
    {
      result = nullptr;
      if ( v4 == 7 )
        return (hkTypeManager::Type::Self *)hkTypeManager::makePointer(self, a3);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::replaceTerminal  (binary VA: 0x1890520)
// Original: hkTypeManager::replaceTerminal
// ----------------------------------------------------------------------------
hkTypeManager::Type::Self * hkTypeManager::replaceTerminal(hkTypeManager::Self *self, hkTypeManager::Type::Self *a2, hkTypeManager::Type::Self *a3)
{
  int v3;
  hkTypeManager::Type::Self *v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  hkTypeManager::Type::Self *v10;
  typedef hkTypeManager::Type::Self *_g4_t_v12;
  typedef int *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v14)) > _g4_s2 ? (20u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v15)) > _g4_s3 ? (24u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v16)) > _g4_s4 ? (28u + sizeof(_g4_t_v16)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);

  v3 = -2147483632;
  v14 = 0;
  v13 = &v16;
  v15 = -2147483632;
  v5 = a2;
  v6 = 0;
  while ( 1 )
  {
    if ( (v3 & 0x3FFFFFFF) == v6 )
    {
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkMemoryAllocator::Self *)&v13,
        4,
        (int)(uintptr_t)(a3));
      v6 = v14;
      a3 = v12;
    }
    v13[v6] = (int)(uintptr_t)(v5);
    v7 = v14;
    v6 = ++v14;
    v5 = *((hkTypeManager::Type::Self **)v5 + 1);
    if ( v5 == nullptr )
      break;
    v3 = v15;
  }
  v8 = v13;
  if ( (hkTypeManager::Type::Self *)v13[v7] == a3 )
  {
    v10 = a2;
  }
  else
  {
    if ( v7 >= 0 )
    {
      v9 = v7;
      while ( 1 )
      {
        --v7;
        a3 = hkTypeManager::replaceParent(self, (hkTypeManager::Type::Self *)v8[v9--], a3);
        if ( v7 == -1 )
          break;
        v8 = v13;
      }
    }
    v10 = a3;
  }
  v14 = 0;
  if ( v15 >= 0 )
    (*(void (**)(uint32_t *, int *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v13,
      4 * v15);
  return v10;
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::makeArray  (binary VA: 0x1890640)
// Original: hkTypeManager::makeArray
// ----------------------------------------------------------------------------
uint32_t * hkTypeManager::makeArray(hkTypeManager::Self *a1, int a2)
{
  uint32_t *result;

  result = *((uint32_t **)a1 + a2 + 3);
  if ( result != nullptr )
    return hkTypeManager::makeArray(a1, *((hkTypeManager::Type::Self **)a1 + a2 + 3));
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::getClassPointer  (binary VA: 0x1890680)
// Original: hkTypeManager::getClassPointer
// ----------------------------------------------------------------------------
uint32_t * hkTypeManager::getClassPointer(hkTypeManager::Type::Self **self, hkString::Self *a2)
{
  hkTypeManager::Type::Self *v2;

  v2 = (hkTypeManager::Type::Self *)hkTypeManager::addClass(self, a2);
  return hkTypeManager::makePointer((hkTypeManager::Self *)self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::isOwned  (binary VA: 0x18906c0)
// Original: hkTypeManager::isOwned
// ----------------------------------------------------------------------------
hkTypeManager::Self * hkTypeManager::isOwned(hkTypeManager::Self *self, hkTypeManager::Type::Self *a2, hkTypeManager::Type::Self *a3)
{
  unsigned int v3;
  int Key;
  int v5;
  int v6;
  int *v7;
  int v8;
  int v9;
  int v11;
  int v12;

  v3 = hkTypeManager::Type::calcHash(a3);
  Key = hkMultiMap_unsigned_long_unsigned_l_56398e::findKey(
          (hkTypeManager::Type::Self *)((char *)a2 + 68),
          v3);
  v5 = *((uint32_t *)a2 + 19);
  v6 = Key;
  v12 = v5 + 1;
  while ( v6 <= v5 )
  {
    while ( 1 )
    {
      v7 = *((int **)a2 + 17);
      if ( a3 == (hkTypeManager::Type::Self *)v7[2 * v6 + 1] )
      {
        *(uint8_t *)self = 1;
        return self;
      }
      v8 = v6 + 1;
      if ( v5 >= 0 )
        break;
      while ( 1 )
      {
        if ( v8 == v12 )
        {
          while ( 1 )
            ;
        }
        v11 = v7[2 * v8];
        if ( v11 == -1 )
          break;
        if ( v3 == v11 )
          goto LABEL_13;
        ++v8;
      }
LABEL_11:
      v6 = v5 + 1;
      if ( v12 > v5 )
        goto LABEL_12;
    }
    while ( 1 )
    {
      if ( v8 > v5 )
      {
        v8 = 0;
        v9 = *v7;
        if ( *v7 == -1 )
          goto LABEL_11;
      }
      else
      {
        v9 = v7[2 * v8];
        if ( v9 == -1 )
          goto LABEL_11;
      }
      if ( v3 == v9 )
        break;
      ++v8;
    }
LABEL_13:
    v6 = v8;
  }
LABEL_12:
  *(uint8_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::copyType  (binary VA: 0x18907b0)
// Original: hkTypeManager::copyType
// ----------------------------------------------------------------------------
hkTypeManager::Type::Self * hkTypeManager::copyType(hkTypeManager::Self *self, hkTypeManager::Type::Self *a2)
{
  hkTypeManager::Type::Self *v2;
  hkTypeManager::Type::Self *result;
  int v4;
  int v5;
  int v6;
  hkTypeManager::Type::Self *v7;
  hkString::Self *TypeName;
  typedef hkTypeManager::Type::Self *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef hkTypeManager::Self *_g4_t_v13;
  typedef hkTypeManager::Self *_g4_t_v14;
  typedef char _g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint32_t _g4_t_v19[23];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v10)) > _g4_s1 ? (4u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v11)) > _g4_s2 ? (8u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v12)) > _g4_s3 ? (12u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v13)) > _g4_s4 ? (16u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v14)) > _g4_s5 ? (16u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (23u + sizeof(_g4_t_v15)) > _g4_s6 ? (23u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v16)) > _g4_s7 ? (24u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v17)) > _g4_s8 ? (28u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v18)) > _g4_s9 ? (32u + sizeof(_g4_t_v18)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v19)) > _g4_s10 ? (36u + sizeof(_g4_t_v19)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 23u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);

  v19[19] = (uint32_t)(uintptr_t)(&self);
  v2 = a2;
  v13 = self;
  hkTypeManager::isOwned((hkTypeManager::Self *)&v15, (hkTypeManager::Type::Self *)(self), a2);
  result = v2;
  if ( v15 == 0 )
  {
    v17 = 0;
    v16 = v19;
    v18 = -2147483632;
    hkTypeManager::Type::getTypePath((int)(uintptr_t)(v2), (hkMemoryAllocator::Self *)&v16);
    v4 = *(uint32_t *)v16[v17 - 1];
    if ( v4 == 6 )
    {
      TypeName = (hkString::Self *)hkTypeManager::Type::getTypeName((hkTypeManager::Type::Self *)v16[v17 - 1]);
      result = (hkTypeManager::Type::Self *)hkTypeManager::addClass((hkTypeManager::Type::Self **)v13, TypeName);
    }
    else
    {
      result = *((hkTypeManager::Type::Self **)v13 + v4 + 3);
    }
    if ( result != nullptr )
    {
      v5 = v17 - 2;
      if ( v17 - 2 >= 0 )
      {
        v6 = v5;
        do
        {
          v9 = result;
          --v5;
          v7 = (hkTypeManager::Type::Self *)v16[v6--];
          result = hkTypeManager::replaceParent(v13, v7, v9);
        }
        while ( v5 != -1 );
      }
    }
    else
    {
      result = nullptr;
    }
    v17 = 0;
    if ( v18 >= 0 )
    {
      v14 = (hkTypeManager::Self *)(result);
      (*(void (**)(uint32_t *, uint32_t *, int, int, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v16,
        4 * v18,
        v10,
        v11,
        v12);
      return (hkTypeManager::Type::Self *)(v14);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::appendTypeExpression  (binary VA: 0x18908f0)
// Original: hkTypeManager::appendTypeExpression
// ----------------------------------------------------------------------------
int hkTypeManager::appendTypeExpression(hkTypeManager::Self *self, const hkTypeManager::Type::Self *a2)
{
  hkTypeManager::Self *i;
  int result;
  int v4;
  int v5;
  int v6;
  int v7;
  hkString::Self *TypeName;
  char *TupleSize;

  for ( i = self; i != nullptr; i = *((hkTypeManager::Self **)i + 1) )
  {
    switch ( *(uint32_t *)i )
    {
      case 0:
        result = hkOstream::opShl((int)(uintptr_t)(a2), (hkString::Self *)"!");
        break;
      case 1:
        result = hkOstream::opShl((int)(uintptr_t)(a2), (hkString::Self *)"v");
        break;
      case 2:
        result = hkOstream::opShl((int)(uintptr_t)(a2), (hkString::Self *)"b");
        break;
      case 3:
        result = hkOstream::opShl((int)(uintptr_t)(a2), (hkString::Self *)"r");
        break;
      case 4:
        result = hkOstream::opShl((int)(uintptr_t)(a2), (hkString::Self *)"i");
        break;
      case 5:
        result = hkOstream::opShl((int)(uintptr_t)(a2), (hkString::Self *)"s");
        break;
      case 6:
        TypeName = (hkString::Self *)hkTypeManager::Type::getTypeName((hkTypeManager::Type::Self *)(i));
        v4 = hkOstream::opShl((int)(uintptr_t)(a2), (hkString::Self *)"C");
        v5 = hkOstream::opShl(v4, TypeName);
        result = hkOstream::opShl(v5, (hkString::Self *)";");
        break;
      case 7:
        result = hkOstream::opShl((int)(uintptr_t)(a2), (hkString::Self *)"*");
        break;
      case 8:
        result = hkOstream::opShl((int)(uintptr_t)(a2), (hkString::Self *)"[]");
        break;
      case 9:
        TupleSize = (char *)hkTypeManager::Type::getTupleSize((hkTypeManager::Type::Self *)(i));
        v6 = hkOstream::opShl((int)(uintptr_t)(a2), (hkString::Self *)"{");
        v7 = hkOstream::opShl(v6, TupleSize);
        result = hkOstream::opShl(v7, (hkString::Self *)"}");
        break;
      default:
        continue;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::parseTypeExpression  (binary VA: 0x1890a90)
// Original: hkTypeManager::parseTypeExpression
// ----------------------------------------------------------------------------
uint32_t * hkTypeManager::parseTypeExpression(hkTypeManager::Self *self, const char *a2)
{
  char *v2;
  const char *v3;
  char v4;
  int v5;
  uint32_t *result;
  unsigned int v7;
  hkTypeManager::Type::Self *v8;
  hkTypeManager::Type::Self *v9;
  char *v10;
  const char *i;
  char v12;
  char *v13;
  unsigned int v14;
  hkTypeManager::Type::Self *v15;
  uint8_t v16[156];

  switch ( *a2 )
  {
    case '!':
      result = *((uint32_t **)self + 3);
      break;
    case '*':
      v9 = (hkTypeManager::Type::Self *)hkTypeManager::parseTypeExpression(self, a2 + 1);
      result = hkTypeManager::makePointer(self, v9);
      break;
    case 'C':
      v10 = (char *)(a2 + 1);
      for ( i = a2 + 1; ; ++i )
      {
        v12 = *i;
        if ( (uint8_t)((*i & 0xDF) - 65) > 0x19u && (uint8_t)(v12 - 48) > 0xAu && v12 != 95 )
          break;
      }
      v13 = (char *)(i - v10);
      v14 = i - v10 - 1;
      result = nullptr;
      if ( v14 <= 0x7E && v12 == 59 )
      {
        hkString::strNcpy((hkString::Self *)v16, v10, v13);
        v16[(uint32_t)(uintptr_t)(v13)] = 0;
        result = (uint32_t *)hkTypeManager::addClass((hkTypeManager::Type::Self **)self, (hkString::Self *)v16);
      }
      break;
    case '[':
      v15 = (hkTypeManager::Type::Self *)hkTypeManager::parseTypeExpression(self, a2 + 2);
      result = hkTypeManager::makeArray(self, v15);
      break;
    case 'b':
      result = *((uint32_t **)self + 5);
      break;
    case 'i':
      result = *((uint32_t **)self + 7);
      break;
    case 'r':
      result = *((uint32_t **)self + 6);
      break;
    case 's':
      result = *((uint32_t **)self + 8);
      break;
    case 'v':
      result = *((uint32_t **)self + 4);
      break;
    case '{':
      v2 = (char *)(a2 + 1);
      if ( (uint8_t)(a2[1] - 48) > 9u )
        goto LABEL_25;
      v3 = a2 + 1;
      do
        v4 = *++v3;
      while ( (uint8_t)(v4 - 48) <= 9u );
      v5 = v3 - v2;
      result = nullptr;
      if ( (unsigned int)(v3 - v2 - 1) <= 8 && v4 == 125 )
      {
        hkString::strNcpy((hkString::Self *)v16, v2, (char *)(v3 - v2));
        v16[v5] = 0;
        v7 = hkString::atoi((hkString::Self *)v16, nullptr);
        v8 = (hkTypeManager::Type::Self *)hkTypeManager::parseTypeExpression(self, v3 + 1);
        result = hkTypeManager::makeTuple(self, v8, v7);
      }
      break;
    default:
LABEL_25:
      result = nullptr;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::getType  (binary VA: 0x1890cd0)
// Original: hkTypeManager::getType
// ----------------------------------------------------------------------------
hkTypeManager::Type::Self * hkTypeManager::getType(hkTypeManager::Self *a1, char a2, hkString::Self *a3, int a4)
{
  hkTypeManager::Type::Self *result;
  hkTypeManager::Type::Self *v5;

  switch ( a2 & 0xF )
  {
    case 0:
      result = *((hkTypeManager::Type::Self **)a1 + 4);
      goto LABEL_4;
    case 1:
      result = *((hkTypeManager::Type::Self **)a1 + 5);
      goto LABEL_4;
    case 2:
      result = *((hkTypeManager::Type::Self **)a1 + 7);
      goto LABEL_4;
    case 3:
      result = *((hkTypeManager::Type::Self **)a1 + 6);
      goto LABEL_4;
    case 4:
      result = (hkTypeManager::Type::Self *)hkTypeManager::makeTuple(a1, *((hkTypeManager::Type::Self **)a1 + 6), 4);
      goto LABEL_4;
    case 5:
      result = (hkTypeManager::Type::Self *)hkTypeManager::makeTuple(a1, *((hkTypeManager::Type::Self **)a1 + 6), 8);
      goto LABEL_4;
    case 6:
      result = (hkTypeManager::Type::Self *)hkTypeManager::makeTuple(a1, *((hkTypeManager::Type::Self **)a1 + 6), 12);
      goto LABEL_4;
    case 7:
      result = (hkTypeManager::Type::Self *)hkTypeManager::makeTuple(a1, *((hkTypeManager::Type::Self **)a1 + 6), 16);
      goto LABEL_4;
    case 8:
      if ( a3 != nullptr )
      {
        v5 = (hkTypeManager::Type::Self *)hkTypeManager::addClass((hkTypeManager::Type::Self **)a1, a3);
        result = (hkTypeManager::Type::Self *)hkTypeManager::makePointer(a1, v5);
      }
      else
      {
        result = (hkTypeManager::Type::Self *)hkTypeManager::makePointer(a1, *((hkTypeManager::Type::Self **)a1 + 2));
      }
      goto LABEL_4;
    case 9:
      if ( a3 != nullptr )
        result = (hkTypeManager::Type::Self *)hkTypeManager::addClass((hkTypeManager::Type::Self **)a1, a3);
      else
        result = *((hkTypeManager::Type::Self **)a1 + 2);
      goto LABEL_4;
    case 0xA:
      result = *((hkTypeManager::Type::Self **)a1 + 8);
LABEL_4:
      if ( result == nullptr )
        goto LABEL_23;
      if ( (a2 & 0x10) != 0 )
      {
        result = (hkTypeManager::Type::Self *)hkTypeManager::makeArray(a1, result);
      }
      else if ( (a2 & 0x20) != 0 )
      {
        result = (hkTypeManager::Type::Self *)hkTypeManager::makeTuple(a1, result, a4);
      }
      break;
    default:
LABEL_23:
      result = nullptr;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::getTerminalLegacyType  (binary VA: 0x1890e80)
// Original: hkTypeManager::getTerminalLegacyType
// ----------------------------------------------------------------------------
char hkTypeManager::getTerminalLegacyType(hkTypeManager::Type::Self **self, hkTypeManager::Type::Self *a2)
{
  char result;
  int TupleSize;
  int v4;
  hkTypeManager::Type::Self *v5;

  *(uint32_t *)a2 = 0;
  switch ( (unsigned int)(uintptr_t)(*self) )
  {
    case 2u:
      result = 1;
      break;
    case 3u:
      result = 3;
      break;
    case 4u:
      result = 2;
      break;
    case 5u:
      result = 10;
      break;
    case 6u:
      *(uint32_t *)a2 = hkTypeManager::Type::getTypeName((hkTypeManager::Type::Self *)self);
      result = 9;
      break;
    case 7u:
      v5 = *(self + 1);
      result = 0;
      if ( *(uint32_t *)v5 == 6 )
      {
        *(uint32_t *)a2 = hkTypeManager::Type::getTypeName(v5);
        result = 8;
      }
      break;
    case 9u:
      result = 0;
      if ( *(uint32_t *)*(self + 1) == 3 )
      {
        TupleSize = hkTypeManager::Type::getTupleSize((hkTypeManager::Type::Self *)self);
        v4 = TupleSize;
        if ( TupleSize == 8 )
        {
          result = 5;
        }
        else if ( TupleSize <= 8 )
        {
          result = 4;
          if ( v4 != 4 )
            goto LABEL_7;
        }
        else
        {
          result = 6;
          if ( v4 != 12 )
          {
            result = 7;
            if ( v4 != 16 )
              goto LABEL_7;
          }
        }
      }
      break;
    default:
LABEL_7:
      result = 0;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::getLegacyType  (binary VA: 0x1890fa0)
// Original: hkTypeManager::getLegacyType
// ----------------------------------------------------------------------------
char hkTypeManager::getLegacyType(hkTypeManager::Type::Self ***self, hkTypeManager::Type::Self *a2, const char **a3)
{
  int v4;

  *(uint32_t *)a2 = 0;
  *a3 = nullptr;
  if ( *self == (hkTypeManager::Type::Self **)byte_8 )
    return hkTypeManager::getTerminalLegacyType(*(self + 1), a2) | 0x10;
  if ( *self != (hkTypeManager::Type::Self **)byte_9 )
    return hkTypeManager::getTerminalLegacyType((hkTypeManager::Type::Self **)self, a2);
  if ( **(self + 1) == (hkTypeManager::Type::Self *)((char *)&dword_0 + 3) )
  {
    v4 = (int)(uintptr_t)(*(self + 2));
    if ( (v4 & 0xFFFFFFF7) == 4 || v4 == 8 || v4 == 16 )
      return hkTypeManager::getTerminalLegacyType((hkTypeManager::Type::Self **)self, a2);
  }
  *a3 = (const char *)hkTypeManager::Type::getTupleSize((hkTypeManager::Type::Self *)self);
  return hkTypeManager::getTerminalLegacyType(*(self + 1), a2) | 0x20;
}

// ----------------------------------------------------------------------------
// Function: hkTypeManager::Type::asString  (binary VA: 0x1891060)
// Original: hkTypeManager::Type::asString
// ----------------------------------------------------------------------------
hkTypeManager::Type::Self * hkTypeManager::Type::asString(hkTypeManager::Type::Self *self, hkTypeManager::Type::Self *a2)
{
  int v2;
  typedef int _g4_t_v4;
  typedef hkString::Self *_g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef uint8_t _g4_t_v8[24];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v6)) > _g4_s2 ? (16u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v7)) > _g4_s3 ? (20u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v8)) > _g4_s4 ? (32u + sizeof(_g4_t_v8)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);

  v5 = nullptr;
  v6 = 0;
  v7 = 0x80000000;
  hkOstream::Construct(v8, &v5);
  hkTypeManager::Type::asText(a2, (hkOstream::Self *)v8);
  v2 = v6;
  if ( v6 == (v7 & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)&v5, 1, v4);
    v2 = v6;
  }
  *((uint8_t *)v5 + v2) = 0;
  ++v6;
  hkStringPtr::Construct(self, v5);
  hkOstream::Destroy((hkOstream::Self *)v8);
  v6 = 0;
  if ( v7 >= 0 )
    (*(void (**)(uint32_t *, hkString::Self *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v5,
      v7 & 0x3FFFFFFF);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkPackfileHeader::readHeader  (binary VA: 0x1891150)
// Original: hkPackfileHeader::readHeader
// ----------------------------------------------------------------------------
hkPackfileHeader::Self * hkPackfileHeader::readHeader(hkPackfileHeader::Self *self, hkStreamReader::Self *a2, hkPackfileHeader::Self *a3)
{
  bool v4;
  typedef uint32_t _g4_t_v5[10];
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v6)) > _g4_s1 ? (40u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (56u + sizeof(_g4_t_v7)) > _g4_s2 ? (56u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 40u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 56u);

  if ( G4_VCALL<int>(a2, 24, a3, 64) > 63
    && (hkString::memSet((hkString::Self *)v5, (void *)0xFFFFFFFF, 0x40u),
        v4 = *(uint32_t *)a3 == 1474355287,
        v5[0] = 1474355287,
        v5[1] = 281067536,
        v6 = 0,
        v7 = 0,
        v4)
    && *((uint32_t *)a3 + 1) == 281067536 )
  {
    if ( hkString::strNcmp((hkPackfileHeader::Self *)((char *)a3 + 40), "hk_2013.2", 9u) == 0
      && *((uint32_t *)a3 + 3) == 11
      && *((uint32_t *)a3 + 15) == -1 )
    {
      *((uint16_t *)a3 + 31) = 0;
      *((uint16_t *)a3 + 30) = 0;
    }
    *(uint32_t *)self = 0;
  }
  else
  {
    *(uint32_t *)self = 1;
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkPackfileHeader::getSectionHeader  (binary VA: 0x1891230)
// Original: hkPackfileHeader::getSectionHeader
// ----------------------------------------------------------------------------
char * hkPackfileHeader::getSectionHeader(hkPackfileHeader::Self *self, uint32_t *a2, int a3)
{
  int v3;
  int v4;
  int v5;

  if ( a2[5] != 0 )
  {
    v3 = a2[3];
    if ( v3 <= 9 )
    {
      v4 = 0;
      v5 = 48 * a3;
    }
    else
    {
      if ( v3 > 11 )
      {
        v4 = 0;
LABEL_5:
        v5 = 0;
        if ( v3 == 11 )
          v5 = a3 << 6;
        return (char *)a2 + v4 + v5 + 64;
      }
      v4 = *((uint16_t *)a2 + 31);
      if ( v3 != 10 )
        goto LABEL_5;
      v5 = 48 * a3;
    }
    return (char *)a2 + v4 + v5 + 64;
  }
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: hkPackfileHeader::getSectionHeader_ea18912a0  (binary VA: 0x18912a0)
// Original: hkPackfileHeader::getSectionHeader
// ----------------------------------------------------------------------------
char * hkPackfileHeader::getSectionHeader_ea18912a0(hkPackfileHeader::Self *self, uint32_t *a2, int a3)
{
  return hkPackfileHeader::getSectionHeader(self, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkPackfileHeader::readPredicates  (binary VA: 0x18912e0)
// Original: hkPackfileHeader::readPredicates
// ----------------------------------------------------------------------------
hkPackfileHeader::Self * hkPackfileHeader::readPredicates(hkPackfileHeader::Self *self, hkStreamReader::Self *a2, hkArray<unsigned short, hkContainerHeapAllocator::Self> *a3, int *a4)
{
  hkPackfileHeader::Self *v4;
  unsigned int v5;
  int v7;
  unsigned int v8;
  int v9;
  hkStreamReader::Self *v10;
  uint16_t *v11;
  int v12;
  int v13;
  int v14;
  typedef hkStreamReader::Self *_g4_t_v15;
  typedef uint16_t *_g4_t_v16;
  typedef uint16_t *_g4_t_v17;
  typedef hkArray<unsigned short, hkContainerHeapAllocator::Self> *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int *_g4_t_v20;
  typedef uint32_t _g4_t_v21[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v16)) > _g4_s1 ? (0u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v17)) > _g4_s2 ? (0u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v18)) > _g4_s3 ? (4u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v19)) > _g4_s4 ? (4u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v20)) > _g4_s5 ? (8u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v21)) > _g4_s6 ? (12u + sizeof(_g4_t_v21)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);

  v21[3] = (uint32_t)(uintptr_t)(&self);
  v4 = self;
  v18 = a3;
  v20 = a4;
  if ( *((int *)a2 + 3) > 9 )
  {
    v5 = *((uint16_t *)a2 + 31);
    if ( (uint16_t)v5 == 0 )
    {
LABEL_3:
      *(uint32_t *)v4 = 0;
      return v4;
    }
    v7 = v5 >> 1;
    v8 = a4[2] & 0x3FFFFFFF;
    if ( v5 >> 1 <= v8 )
    {
      v17 = (uint16_t *)*a4;
      G4_VCALL<void>(a3, 24, *a4, v5);
      v11 = v17;
      if ( v7 == 0 )
        goto LABEL_19;
    }
    else
    {
      v9 = 2 * v8;
      v15 = a2;
      if ( v9 < v7 )
        v9 = v5 >> 1;
      hkArrayUtil::reserve((hkArrayUtil::Self *)v21, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, a4, v9, 2);
      v10 = v15;
      v16 = (uint16_t *)*v20;
      G4_VCALL<void>(v18, 24, *v20, *((uint16_t *)v10 + 31));
      v11 = v16;
    }
    if ( *v11 != 0 )
    {
      v12 = 0;
      do
        ++v12;
      while ( v7 != v12 && v11[v12] != 0 );
      v13 = v20[2] & 0x3FFFFFFF;
      if ( v13 < v12 )
      {
        v14 = 2 * v13;
        if ( v12 >= v14 )
          v14 = v12;
        v19 = v12;
        hkArrayUtil::reserve((hkArrayUtil::Self *)v21, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v20, v14, 2);
        v12 = v19;
      }
      goto LABEL_17;
    }
LABEL_19:
    v12 = 0;
LABEL_17:
    v20[1] = v12;
    goto LABEL_3;
  }
  *(uint32_t *)self = 1;
  return v4;
}

// ----------------------------------------------------------------------------
// Function: hkStructureLayout::Construct  (binary VA: 0x1891580)
// Original: hkStructureLayout::hkStructureLayout
// ----------------------------------------------------------------------------
void hkStructureLayout::Construct(hkStructureLayout::Self *self)
{
  *(uint32_t *)self = hkStructureLayout::HostLayoutRules;
}

// ----------------------------------------------------------------------------
// Function: hkStructureLayout::Construct  (binary VA: 0x18915a0)
// Original: hkStructureLayout::hkStructureLayout
// ----------------------------------------------------------------------------
uint32_t * hkStructureLayout::Construct(uint32_t *a1, uint32_t *a2)
{
  *a1 = *a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkStructureLayout::computeMemberOffsetsInplace  (binary VA: 0x1891ac0)
// Original: hkStructureLayout::computeMemberOffsetsInplace
// ----------------------------------------------------------------------------
int hkStructureLayout::computeMemberOffsetsInplace(uint8_t *a1, unsigned int a2, hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *a3, int a4)
{
  int result;

  result = hkMapBase_unsigned_long_unsigned_l_393416::findKey(a3, a2);
  if ( result > *((uint32_t *)a3 + 2) )
    return sub_1891740(a2, a1, a3, a4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkXmlTagfileReader::Destroy  (binary VA: 0x1891b30)
// Original: hkXmlTagfileReader::~hkXmlTagfileReader
// ----------------------------------------------------------------------------
void hkXmlTagfileReader::Destroy(hkXmlTagfileReader::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkXmlTagfileReader::Destroy_ea1891b50  (binary VA: 0x1891b50)
// Original: hkXmlTagfileReader::~hkXmlTagfileReader
// ----------------------------------------------------------------------------
void hkXmlTagfileReader::Destroy_ea1891b50(hkXmlTagfileReader::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 8;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkXmlStreamParser::getIntListAttribute_unsigned_short_782e20  (binary VA: 0x1894970)
// Original: hkXmlStreamParser::getIntListAttribute<unsigned short>
// ----------------------------------------------------------------------------
uint32_t * hkXmlStreamParser::getIntListAttribute_unsigned_short_782e20(uint32_t *a1, const char *a2, hkSubString::Self *a3, hkMemoryAllocator::Self *a4)
{
  hkMemoryAllocator::Self *v4;
  uint8_t *v6;
  unsigned int v7;
  uint8_t *i;
  int v9;
  int16_t v10;
  typedef uint8_t **_g4_t_v11;
  typedef int16_t _g4_t_v12;
  typedef uint32_t *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint8_t *_g4_t_v15;
  typedef unsigned int _g4_t_v16;
  typedef uint32_t _g4_t_v17[4];
  typedef int64_t _g4_t_v18[3];
  typedef uint32_t *_g4_t_v19;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v13)) > _g4_s2 ? (32u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v14)) > _g4_s3 ? (36u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v15)) > _g4_s4 ? (40u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v16)) > _g4_s5 ? (44u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v17)) > _g4_s6 ? (56u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v18)) > _g4_s7 ? (72u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (96u + sizeof(_g4_t_v19)) > _g4_s8 ? (96u + sizeof(_g4_t_v19)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 56u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 72u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 96u);

  v19 = (uint32_t *)(&a1);
  v4 = a4;
  v13 = a1;
  v11 = &v15;
  v15 = nullptr;
  v16 = 0;
  hkXmlStreamParser::getValue((hkXmlStreamParser::Self *)&v14, a2, a3);
  if ( v14 != 0 || *v15 != 34 || *(uint8_t *)(v16 - 1) != 34 )
  {
LABEL_3:
    *v13 = 1;
    return v13;
  }
  v6 = v15 + 1;
  v7 = v16 - 1;
  v15 = v6;
  v16 = v7;
  if ( (unsigned int)(uintptr_t)(v6) < v7 )
  {
    do
    {
      for ( i = v6; i != (uint8_t *)v7 && *i != 44; ++i )
        ;
      v17[0] = (uint32_t)(uintptr_t)(v6);
      v17[1] = (uint32_t)(uintptr_t)(i);
      hkXmlStreamParser::parseInt((hkXmlStreamParser::Self *)&v14, (const hkSubString::Self *)v17, v18);
      if ( v14 == 1 )
        goto LABEL_3;
      v9 = *((uint32_t *)v4 + 1);
      v10 = v18[0];
      if ( v9 == (*((uint32_t *)v4 + 2) & 0x3FFFFFFF) )
      {
        v12 = v18[0];
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v4, 2, (int)(uintptr_t)(v11));
        v9 = *((uint32_t *)v4 + 1);
        v10 = v12;
      }
      *(uint16_t *)(*(uint32_t *)v4 + 2 * v9) = v10;
      v6 = i + 1;
      v7 = v16;
      ++*((uint32_t *)v4 + 1);
    }
    while ( v7 > (unsigned int)(uintptr_t)(i + 1) );
  }
  *v13 = 0;
  return v13;
}

// ----------------------------------------------------------------------------
// Function: hkXmlLexAnalyzer::Destroy  (binary VA: 0x1894ad0)
// Original: hkXmlLexAnalyzer::~hkXmlLexAnalyzer
// ----------------------------------------------------------------------------
void hkXmlLexAnalyzer::Destroy(hkXmlLexAnalyzer::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6818);
  hkParserBuffer::Destroy((hkXmlLexAnalyzer::Self *)((char *)self + 8));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkXmlLexAnalyzer::Destroy_ea1894b10  (binary VA: 0x1894b10)
// Original: hkXmlLexAnalyzer::~hkXmlLexAnalyzer
// ----------------------------------------------------------------------------
void hkXmlLexAnalyzer::Destroy_ea1894b10(hkXmlLexAnalyzer::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6818);
  hkParserBuffer::Destroy((hkXmlLexAnalyzer::Self *)((char *)self + 8));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 56;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkXmlStreamParser::Destroy  (binary VA: 0x1894b90)
// Original: hkXmlStreamParser::~hkXmlStreamParser
// ----------------------------------------------------------------------------
void hkXmlStreamParser::Destroy(hkXmlStreamParser::Self *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6838);
  v1 = *((uint32_t *)self + 28);
  *((uint32_t *)self + 27) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 26),
      8 * v1);
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 28) = 0x80000000;
  *((uint32_t *)self + 12) = ((uint32_t)(uintptr_t)&off_20A6818);
  hkParserBuffer::Destroy((hkXmlStreamParser::Self *)((char *)self + 56));
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 12) = ((uint32_t)(uintptr_t)&off_2054CB8);
  v2 = *((uint32_t *)self + 11);
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 9),
      v2 & 0x3FFFFFFF);
  v3 = *((uint32_t *)self + 8);
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 11) = 0x80000000;
  *((uint32_t *)self + 7) = 0;
  if ( v3 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 6),
      4 * v3);
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 8) = 0x80000000;
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Destroy((hkXmlStreamParser::Self *)((char *)self + 8));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkXmlStreamParser::Destroy_ea1894ca0  (binary VA: 0x1894ca0)
// Original: hkXmlStreamParser::~hkXmlStreamParser
// ----------------------------------------------------------------------------
void hkXmlStreamParser::Destroy_ea1894ca0(hkXmlStreamParser::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6838);
  v1 = *((uint32_t *)self + 28);
  *((uint32_t *)self + 27) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 26),
      8 * v1);
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 28) = 0x80000000;
  *((uint32_t *)self + 12) = ((uint32_t)(uintptr_t)&off_20A6818);
  hkParserBuffer::Destroy((hkXmlStreamParser::Self *)((char *)self + 56));
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 12) = ((uint32_t)(uintptr_t)&off_2054CB8);
  v2 = *((uint32_t *)self + 11);
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 9),
      v2 & 0x3FFFFFFF);
  v3 = *((uint32_t *)self + 8);
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 11) = 0x80000000;
  *((uint32_t *)self + 7) = 0;
  if ( v3 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 6),
      4 * v3);
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 8) = 0x80000000;
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Destroy((hkXmlStreamParser::Self *)((char *)self + 8));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v4 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v5 = 120;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v5 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v4, 12, self, v5);
}

// ----------------------------------------------------------------------------
// Function: hkXmlTagfileReader::load  (binary VA: 0x1895220)
// Original: hkXmlTagfileReader::load
// ----------------------------------------------------------------------------
hkXmlTagfileReader::Self * hkXmlTagfileReader::load(hkXmlTagfileReader::Self *self, hkStreamReader::Self *a2, hkDataWorld::Self *a3, int a4)
{
  int i;
  int j;
  int k;
  hkString::Self *v8;
  int n;
  hkString::Self *v10;
  int v11;
  int16_t v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  bool v18;
  size_t v19;
  int v20;
  char *v21;
  hkString::Self *v22;
  int m;
  int v24;
  int v25;
  hkTypeManager::Type::Self *Pointer;
  int v27;
  int *v28;
  char v29;
  int v30;
  int v31;
  hkTypeManager::Type::Self *v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  uint16_t v39;
  int v40;
  int v41;
  int16_t v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  uint32_t *Value;
  uint32_t *v49;
  uint32_t *v50;
  int v51;
  int16_t v52;
  int v53;
  int v54;
  int ii;
  uint32_t *v56;
  int v57;
  int16_t v58;
  typedef char *_g4_t_v59;
  typedef hkMemoryAllocator::Self *_g4_t_Key;
  typedef const char *_g4_t_v61;
  typedef const char *_g4_t_v62;
  typedef const char *_g4_t_v63;
  typedef const char *_g4_t_v64;
  typedef int _g4_t_v65;
  typedef int *_g4_t_v66;
  typedef int _g4_t_v67;
  typedef hkXmlTagfileReader::Self *_g4_t_v68;
  typedef hkTypeManager::Self *_g4_t_v69;
  typedef int _g4_t_v70;
  typedef hkString::Self *_g4_t_v71;
  typedef bool _g4_t_v72;
  typedef hkString::Self *_g4_t_v73;
  typedef hkString::Self *_g4_t_v74;
  typedef hkString::Self *_g4_t_v75;
  typedef hkString::Self *_g4_t_v76;
  typedef hkString::Self *_g4_t_v77;
  typedef hkXmlStreamParser::Self *_g4_t_v78;
  typedef hkXmlStreamParser::Self *_g4_t_Iterator;
  typedef hkXmlStreamParser::Self *_g4_t_v80;
  typedef hkXmlStreamParser::Self *_g4_t_v81;
  typedef int _g4_t_v82;
  typedef char _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef char _g4_t_v88[116];
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef uint8_t _g4_t_v91[16];
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef uint8_t _g4_t_v94[44];
  typedef hkString::Self *_g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef hkXmlTagfileReader::Self **_g4_t_v101;
  enum : size_t {
    _g4_s0 = 976u,
    _g4_s1 = (4u + sizeof(_g4_t_v59)) > _g4_s0 ? (4u + sizeof(_g4_t_v59)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_Key)) > _g4_s1 ? (8u + sizeof(_g4_t_Key)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v61)) > _g4_s2 ? (8u + sizeof(_g4_t_v61)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v62)) > _g4_s3 ? (8u + sizeof(_g4_t_v62)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v63)) > _g4_s4 ? (8u + sizeof(_g4_t_v63)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v64)) > _g4_s5 ? (8u + sizeof(_g4_t_v64)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v65)) > _g4_s6 ? (8u + sizeof(_g4_t_v65)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v66)) > _g4_s7 ? (12u + sizeof(_g4_t_v66)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v67)) > _g4_s8 ? (16u + sizeof(_g4_t_v67)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v68)) > _g4_s9 ? (44u + sizeof(_g4_t_v68)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v69)) > _g4_s10 ? (56u + sizeof(_g4_t_v69)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v70)) > _g4_s11 ? (68u + sizeof(_g4_t_v70)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v71)) > _g4_s12 ? (72u + sizeof(_g4_t_v71)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v72)) > _g4_s13 ? (72u + sizeof(_g4_t_v72)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v73)) > _g4_s14 ? (72u + sizeof(_g4_t_v73)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v74)) > _g4_s15 ? (72u + sizeof(_g4_t_v74)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v75)) > _g4_s16 ? (76u + sizeof(_g4_t_v75)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v76)) > _g4_s17 ? (76u + sizeof(_g4_t_v76)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v77)) > _g4_s18 ? (76u + sizeof(_g4_t_v77)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v78)) > _g4_s19 ? (80u + sizeof(_g4_t_v78)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_Iterator)) > _g4_s20 ? (80u + sizeof(_g4_t_Iterator)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v80)) > _g4_s21 ? (84u + sizeof(_g4_t_v80)) : _g4_s21,
    _g4_s23 = (84u + sizeof(_g4_t_v81)) > _g4_s22 ? (84u + sizeof(_g4_t_v81)) : _g4_s22,
    _g4_s24 = (88u + sizeof(_g4_t_v82)) > _g4_s23 ? (88u + sizeof(_g4_t_v82)) : _g4_s23,
    _g4_s25 = (95u + sizeof(_g4_t_v83)) > _g4_s24 ? (95u + sizeof(_g4_t_v83)) : _g4_s24,
    _g4_s26 = (96u + sizeof(_g4_t_v84)) > _g4_s25 ? (96u + sizeof(_g4_t_v84)) : _g4_s25,
    _g4_s27 = (112u + sizeof(_g4_t_v85)) > _g4_s26 ? (112u + sizeof(_g4_t_v85)) : _g4_s26,
    _g4_s28 = (128u + sizeof(_g4_t_v86)) > _g4_s27 ? (128u + sizeof(_g4_t_v86)) : _g4_s27,
    _g4_s29 = (132u + sizeof(_g4_t_v87)) > _g4_s28 ? (132u + sizeof(_g4_t_v87)) : _g4_s28,
    _g4_s30 = (144u + sizeof(_g4_t_v88)) > _g4_s29 ? (144u + sizeof(_g4_t_v88)) : _g4_s29,
    _g4_s31 = (260u + sizeof(_g4_t_v89)) > _g4_s30 ? (260u + sizeof(_g4_t_v89)) : _g4_s30,
    _g4_s32 = (264u + sizeof(_g4_t_v90)) > _g4_s31 ? (264u + sizeof(_g4_t_v90)) : _g4_s31,
    _g4_s33 = (296u + sizeof(_g4_t_v91)) > _g4_s32 ? (296u + sizeof(_g4_t_v91)) : _g4_s32,
    _g4_s34 = (312u + sizeof(_g4_t_v92)) > _g4_s33 ? (312u + sizeof(_g4_t_v92)) : _g4_s33,
    _g4_s35 = (316u + sizeof(_g4_t_v93)) > _g4_s34 ? (316u + sizeof(_g4_t_v93)) : _g4_s34,
    _g4_s36 = (324u + sizeof(_g4_t_v94)) > _g4_s35 ? (324u + sizeof(_g4_t_v94)) : _g4_s35,
    _g4_s37 = (368u + sizeof(_g4_t_v95)) > _g4_s36 ? (368u + sizeof(_g4_t_v95)) : _g4_s36,
    _g4_s38 = (372u + sizeof(_g4_t_v96)) > _g4_s37 ? (372u + sizeof(_g4_t_v96)) : _g4_s37,
    _g4_s39 = (376u + sizeof(_g4_t_v97)) > _g4_s38 ? (376u + sizeof(_g4_t_v97)) : _g4_s38,
    _g4_s40 = (380u + sizeof(_g4_t_v98)) > _g4_s39 ? (380u + sizeof(_g4_t_v98)) : _g4_s39,
    _g4_s41 = (384u + sizeof(_g4_t_v99)) > _g4_s40 ? (384u + sizeof(_g4_t_v99)) : _g4_s40,
    _g4_s42 = (388u + sizeof(_g4_t_v100)) > _g4_s41 ? (388u + sizeof(_g4_t_v100)) : _g4_s41,
    _g4_s43 = (888u + sizeof(_g4_t_v101)) > _g4_s42 ? (888u + sizeof(_g4_t_v101)) : _g4_s42
  };
  alignas(16) uint8_t _g4_sf[_g4_s43];
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 4u);
  _g4_t_Key &Key = *reinterpret_cast<_g4_t_Key *>(_g4_sf + 8u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 8u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 8u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 8u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 8u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 8u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 12u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 16u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 44u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 56u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 68u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 72u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 72u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 72u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 72u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 76u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 76u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 76u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 80u);
  _g4_t_Iterator &Iterator = *reinterpret_cast<_g4_t_Iterator *>(_g4_sf + 80u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 84u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 84u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 88u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 95u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 96u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 112u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 128u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 132u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 144u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 260u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 264u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 296u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 312u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 316u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 324u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 368u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 372u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 376u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 380u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 384u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 388u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 888u);

  v101 = &self;
  v68 = self;
  sub_1891D90((hkXmlStreamParser::Self *)v88, a3, a4);
  hkXmlStreamParser::advance((hkXmlStreamParser::Self *)v88);
  for ( i = v89; i == 5; i = hkXmlStreamParser::advance((hkXmlStreamParser::Self *)v88) )
    ;
  if ( i == 0 )
    hkXmlStreamParser::advance((hkXmlStreamParser::Self *)v88);
  for ( j = v89; j == 5; j = hkXmlStreamParser::advance((hkXmlStreamParser::Self *)v88) )
    ;
  if ( j != 1 )
  {
    hkErrStream::Construct((hkErrStream::Self *)&v86, (hkString::Self *)&v95, 512);
    hkOstream::opShl((int)(uintptr_t)(&v86), (hkString::Self *)"Didn't find the root 'hktagfile' block");
    hkError::messageWarning(
      (hkError::Self *)0xFEED00AA,
      (int)(uintptr_t)(&v95),
      "Tagfile/Xml/hkXmlTagfileReader.cpp",
      (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_4A4)->st_shndx + 1,
      v67);
    hkErrStream::Destroy((hkErrStream::Self *)&v86);
LABEL_9:
    *(uint32_t *)v68 = 0;
    goto LABEL_10;
  }
  hkXmlStreamParser::getBlockName((hkXmlStreamParser::Self *)&v95);
  hkSubString::opEq((hkSubString::Self *)&v83, (const char *)&v95);
  if ( v83 == 0 )
  {
    hkErrStream::Construct((hkErrStream::Self *)&v86, (hkString::Self *)&v95, 512);
    hkOstream::opShl((int)(uintptr_t)(&v86), (hkString::Self *)"Expecting 'hktagfile' block");
    hkError::messageWarning(
      (hkError::Self *)0xFEED00AA,
      (int)(uintptr_t)(&v95),
      "Tagfile/Xml/hkXmlTagfileReader.cpp",
      (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_4B4)->st_value + 1,
      v67);
    hkErrStream::Destroy((hkErrStream::Self *)&v86);
    goto LABEL_9;
  }
  v84 = 0;
  hkXmlStreamParser::getIntAttribute((hkXmlStreamParser::Self *)&v82, v88, (int *)"version");
  sub_1891FB0();
  hkXmlStreamParser::advance((hkXmlStreamParser::Self *)v88);
  while ( 1 )
  {
    for ( k = v89; k == 5; k = hkXmlStreamParser::advance((hkXmlStreamParser::Self *)v88) )
      ;
    if ( k != 1 )
      break;
    hkXmlStreamParser::getBlockName((hkXmlStreamParser::Self *)&v95);
    hkSubString::opEq((hkSubString::Self *)&v83, (const char *)&v95);
    if ( v83 == 0 )
      break;
    sub_1891FB0();
    v66 = &v86;
    v86 = 0;
    v87 = 0;
    hkXmlStreamParser::getValue((hkXmlStreamParser::Self *)&v82, v88, (hkSubString::Self *)"name");
    if ( v82 == 0 && v87 - v86 > 1 && *(uint8_t *)v86 == 34 && *(uint8_t *)(v87 - 1) == 34 )
    {
      v19 = v87 - 1 - (v86 + 1);
      v95 = (hkString::Self *)&v98;
      v20 = --v87 - v86++;
      v96 = 0;
      v97 = -2147483520;
      if ( v20 > 128 )
      {
        v33 = 256;
        v77 = (hkString::Self *)v20;
        if ( v20 > 255 )
          v33 = v20;
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)&v82,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          &v95,
          v33,
          1);
        v21 = (char *)v86;
        v22 = v95;
        v20 = (int)(uintptr_t)(v77);
      }
      else
      {
        v21 = (char *)v86;
        v22 = (hkString::Self *)&v98;
      }
      v96 = v20;
      hkString::strNcpy(v22, v21, v19, (int)(uintptr_t)(v66));
      *((uint8_t *)v95 + v19) = 0;
      v71 = v95;
      Key = (hkMemoryAllocator::Self *)hkCachedHashMap_hkStringMapOperations_hk_b9db0c::findKey(
                                   (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)v91,
                                   v95);
      hkCachedHashMap_hkStringMapOperations_hk_b9db0c::isValid(&v83);
      if ( v83 != 0 )
      {
        v75 = (hkString::Self *)hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getKey(v91, Key);
        hkCachedHashMap_hkStringMapOperations_hk_b9db0c::setValue(v91, Key, 1);
      }
      else
      {
        v75 = (hkString::Self *)hkString::strDup(v71, (hkMemoryRouter::Self *)&hkContainerHeapAllocator::s_alloc, Key);
        hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
          (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)v91,
          v75,
          1u);
      }
      v96 = 0;
      if ( v97 >= 0 )
        (*(void (**)(uint32_t *, hkString::Self *, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v95,
          v97 & 0x3FFFFFFF);
      if ( v75 != nullptr )
      {
        v85 = 0;
        hkXmlStreamParser::getIntAttribute((hkXmlStreamParser::Self *)&v82, v88, (int *)"version");
        v97 = sub_1892200();
        v98 = 0;
        v99 = 0;
        v100 = 0x80000000;
        v95 = v75;
        v96 = v85;
        v69 = (hkTypeManager::Self *)G4_VCALL<int>(v90, 52);
        while ( 2 )
        {
          hkXmlStreamParser::advance((hkXmlStreamParser::Self *)v88);
          for ( m = v89; m == 5; m = hkXmlStreamParser::advance((hkXmlStreamParser::Self *)v88) )
            ;
          if ( m == 2
            && (hkXmlStreamParser::getBlockName((hkXmlStreamParser::Self *)&v86),
                v61 = "member",
                hkSubString::opEq((hkSubString::Self *)&v83, (const char *)&v86),
                v83 != 0) )
          {
            v86 = 0;
            v87 = 0;
            hkXmlStreamParser::getValue((hkXmlStreamParser::Self *)&v82, v88, (hkSubString::Self *)"name");
            if ( v82 != 0 )
            {
              v72 = true;
              v70 = 0;
            }
            else
            {
              v72 = true;
              v70 = 0;
              if ( v87 - v86 > 1 && *(uint8_t *)v86 == 34 && *(uint8_t *)(v87 - 1) == 34 )
              {
                ++v86;
                --v87;
                v70 = sub_1891BB0();
                v72 = v70 == 0;
              }
            }
            v25 = sub_1892200();
            v86 = 0;
            v87 = 0;
            hkXmlStreamParser::getValue((hkXmlStreamParser::Self *)&v82, v88, (hkSubString::Self *)"class");
            if ( v82 != 0 )
            {
              v76 = nullptr;
            }
            else
            {
              v76 = nullptr;
              if ( v87 - v86 > 1 && *(uint8_t *)v86 == 34 && *(uint8_t *)(v87 - 1) == 34 )
              {
                ++v86;
                --v87;
                v76 = (hkString::Self *)sub_1891BB0();
              }
            }
            if ( v25 != 0 && !v72 )
            {
              v73 = (hkString::Self *)G4_VCALL<int>(v90, 52);
              switch ( *(uint8_t *)v25 )
              {
                case 'b':
                  if ( hkString::strCmp((hkString::Self *)v25, "byte", v62) == 0 )
                  {
                    Pointer = *((hkTypeManager::Type::Self **)v73 + 5);
                    goto LABEL_65;
                  }
                  break;
                case 'i':
                  if ( hkString::strCmp((hkString::Self *)v25, "int", v62) == 0 )
                  {
                    Pointer = *((hkTypeManager::Type::Self **)v73 + 7);
                    goto LABEL_65;
                  }
                  break;
                case 'r':
                  if ( hkString::strCmp((hkString::Self *)v25, "real", v62) == 0 )
                  {
                    Pointer = *((hkTypeManager::Type::Self **)v73 + 6);
                    goto LABEL_65;
                  }
                  if ( hkString::strCmp((hkString::Self *)v25, "ref", v64) == 0 )
                  {
                    v32 = (hkTypeManager::Type::Self *)hkTypeManager::addClass(v73, v76);
                    Pointer = (hkTypeManager::Type::Self *)hkTypeManager::makePointer((hkTypeManager::Self *)(v73), v32);
                    goto LABEL_65;
                  }
                  break;
                case 's':
                  if ( hkString::strCmp((hkString::Self *)v25, "string", v62) == 0 )
                  {
                    Pointer = *((hkTypeManager::Type::Self **)v73 + 8);
                    goto LABEL_65;
                  }
                  if ( hkString::strCmp((hkString::Self *)v25, "struct", v63) == 0 )
                  {
                    Pointer = (hkTypeManager::Type::Self *)hkTypeManager::addClass(v73, v76);
                    goto LABEL_65;
                  }
                  break;
                case 'v':
                  if ( hkString::strCmp((hkString::Self *)v25, "void", v62) != 0 )
                  {
                    if ( hkString::strNcmp((hkString::Self *)v25, "vec", 3u, (int)(uintptr_t)(&v86)) != 0 )
                      break;
                    v29 = *(uint8_t *)(v25 + 3);
                    if ( (uint8_t)(v29 - 48) <= 9u )
                    {
                      v30 = v25 + 3;
                      do
                        v29 = *(uint8_t *)++v30;
                      while ( (uint8_t)(v29 - 48) <= 9u );
                    }
                    if ( v29 != 0 )
                      break;
                    v31 = hkString::atoi((hkString::Self *)(v25 + 3), nullptr, v65);
                    Pointer = (hkTypeManager::Type::Self *)hkTypeManager::makeTuple(
                                                       (hkTypeManager::Self *)(v73),
                                                       *((hkTypeManager::Type::Self **)v73 + 6),
                                                       v31);
                  }
                  else
                  {
                    Pointer = *((hkTypeManager::Type::Self **)v73 + 4);
                  }
LABEL_65:
                  if ( Pointer != nullptr )
                  {
                    v86 = 0;
                    v87 = 0;
                    hkXmlStreamParser::getValue((hkXmlStreamParser::Self *)&v82, v88, (hkSubString::Self *)"array");
                    if ( v82 == 0 )
                    {
                      hkSubString::opEq((hkSubString::Self *)&v83, (const char *)&v86);
                      if ( v83 != 0 )
                        Pointer = (hkTypeManager::Type::Self *)hkTypeManager::makeArray(v69, Pointer);
                      else
                        hkSubString::opEq((hkSubString::Self *)&v83, (const char *)&v86);
                    }
                    v86 = 0;
                    hkXmlStreamParser::getIntAttribute((hkXmlStreamParser::Self *)&v82, v88, (int *)"count");
                    if ( v86 > 0 )
                      Pointer = (hkTypeManager::Type::Self *)hkTypeManager::makeTuple(v69, Pointer, v86);
                    v27 = v99;
                    if ( v99 == (v100 & 0x3FFFFFFF) )
                    {
                      hkArrayUtil::reserveMore(
                        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                        (hkMemoryAllocator::Self *)&v98,
                        &byte_9[3],
                        &v86);
                      v27 = v99;
                    }
                    v99 = v27 + 1;
                    v28 = (int *)(v98 + 12 * v27);
                    v28[1] = (int)(uintptr_t)(Pointer);
                    *v28 = v70;
                    v28[2] = 0;
                    if ( v76 != nullptr )
                      G4_VCALL<void>(v90, 44, v76);
                    continue;
                  }
                  break;
                default:
                  goto LABEL_51;
              }
            }
          }
          else
          {
            if ( v89 == 5 )
            {
              while ( hkXmlStreamParser::advance((hkXmlStreamParser::Self *)v88) == 5 )
                ;
            }
            hkXmlStreamParser::getBlockName((hkXmlStreamParser::Self *)&v86);
            v24 = sub_1891BB0();
            if ( v93 > 0 && v24 == *(uint32_t *)(v92 + 4 * v93 - 4) )
            {
              hkXmlStreamParser::advance((hkXmlStreamParser::Self *)v88);
              --v93;
              hkXmlStreamParser::advance((hkXmlStreamParser::Self *)v88);
              G4_VCALL<void>(v90, 20, &v95, v61);
            }
          }
          break;
        }
LABEL_51:
        v99 = 0;
        if ( v100 >= 0 )
          (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v98,
            12 * v100);
      }
    }
  }
  v8 = nullptr;
  while ( 1 )
  {
    for ( n = v89; n == 5; n = hkXmlStreamParser::advance((hkXmlStreamParser::Self *)v88) )
      ;
    if ( (unsigned int)(n - 1) > 1 )
      break;
    v95 = nullptr;
    sub_18946B0(0, &v95);
    v10 = v95;
    if ( v82 == 1 )
    {
      if ( v95 != nullptr )
      {
        v44 = *((uint32_t *)v95 + 1);
        LOWORD(v44) = 0;
        v45 = v44 | (uint16_t)(*((uint32_t *)v95 + 1) - 1);
        v46 = *((uint32_t *)v95 + 2);
        *((uint32_t *)v95 + 1) = v45;
        *((uint32_t *)v10 + 2) = v46 - 1;
        if ( v46 == 1 )
          G4_VCALL<void>(v10, 4);
      }
LABEL_109:
      v35 = 1;
      v80 = nullptr;
      goto LABEL_110;
    }
    if ( v95 != nullptr )
    {
      v11 = *((uint32_t *)v95 + 1);
      ++*((uint32_t *)v95 + 2);
      v12 = v11;
      LOWORD(v11) = 0;
      *((uint32_t *)v10 + 1) = v11 | (uint16_t)(v12 + 1);
    }
    if ( v8 != nullptr
      && (v13 = *((uint32_t *)v8 + 1),
          LOWORD(v13) = 0,
          v14 = v13 | (uint16_t)(*((uint32_t *)v8 + 1) - 1),
          v15 = *((uint32_t *)v8 + 2),
          *((uint32_t *)v8 + 1) = v14,
          *((uint32_t *)v8 + 2) = v15 - 1,
          v15 == 1) )
    {
      G4_VCALL<void>(v8, 4);
      v8 = v95;
    }
    else
    {
      v8 = v10;
    }
    if ( v8 != nullptr )
    {
      v16 = *((uint32_t *)v8 + 1);
      LOWORD(v16) = 0;
      v17 = v16 | (uint16_t)(*((uint32_t *)v8 + 1) - 1);
      v18 = (*((uint32_t *)v8 + 2))-- == 1;
      *((uint32_t *)v8 + 1) = v17;
      if ( v18 )
        G4_VCALL<void>(v8, 4);
    }
  }
  if ( v89 == 5 )
  {
    while ( hkXmlStreamParser::advance((hkXmlStreamParser::Self *)v88) == 5 )
      ;
  }
  v59 = v88;
  hkXmlStreamParser::getBlockName((hkXmlStreamParser::Self *)&v95);
  v34 = sub_1891BB0();
  if ( v93 <= 0 || v34 != *(uint32_t *)(v92 + 4 * v93 - 4) )
    goto LABEL_109;
  hkXmlStreamParser::advance((hkXmlStreamParser::Self *)v88);
  v47 = v89;
  --v93;
  if ( v89 == 5 )
  {
    do
      v47 = hkXmlStreamParser::advance((hkXmlStreamParser::Self *)v88);
    while ( v47 == 5 );
  }
  if ( v47 != 7 )
    goto LABEL_109;
  Iterator = (hkXmlStreamParser::Self *)hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getIterator((hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)v94);
  v74 = v8;
  while ( 1 )
  {
    v59 = (char *)(v94);
    hkCachedHashMap_hkStringMapOperations_hk_b9db0c::isValid(&v83);
    if ( v83 == 0 )
      break;
    Value = (uint32_t *)hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getValue(v94, Iterator);
    v49 = (uint32_t *)*Value;
    v50 = Value;
    if ( *Value == 0 )
    {
      v8 = v74;
      goto LABEL_109;
    }
    v81 = nullptr;
    if ( (int)Value[2] > 0 )
    {
      while ( 1 )
      {
        if ( v49 != nullptr )
        {
          v51 = v49[1];
          ++v49[2];
          v52 = v51;
          LOWORD(v51) = 0;
          v49[1] = v51 | (uint16_t)(v52 + 1);
          (*(void (**)(uint32_t, uint32_t, uint32_t *))(**(uint32_t **)(v50[1] + 8 * (uint32_t)(uintptr_t)(v81)) + 92))(
            *(uint32_t *)(v50[1] + 8 * (uint32_t)(uintptr_t)(v81)),
            *(uint32_t *)(v50[1] + 8 * (uint32_t)(uintptr_t)(v81) + 4),
            v49);
          v53 = v49[1];
          LOWORD(v53) = 0;
          v54 = v53 | (uint16_t)(v49[1] - 1);
          v18 = v49[2]-- == 1;
          v49[1] = v54;
          if ( v18 )
            G4_VCALL<void>(v49, 4);
        }
        else
        {
          (*(void (**)(uint32_t, uint32_t, uint32_t))(**(uint32_t **)(v50[1] + 8 * (uint32_t)(uintptr_t)(v81)) + 92))(
            *(uint32_t *)(v50[1] + 8 * (uint32_t)(uintptr_t)(v81)),
            *(uint32_t *)(v50[1] + 8 * (uint32_t)(uintptr_t)(v81) + 4),
            0);
        }
        v81 = (hkXmlStreamParser::Self *)((char *)v81 + 1);
        if ( (int)(uintptr_t)(v81) >= v50[2] )
          break;
        v49 = (uint32_t *)*v50;
      }
    }
    for ( ii = 0; ii < v50[5]; ++ii )
    {
      v56 = (uint32_t *)(v50[4] + 8 * ii);
      G4_VCALL<void>(*v56, 72, v56[1], *v50);
    }
    Iterator = (hkXmlStreamParser::Self *)hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getNext(
                                      v94,
                                      Iterator);
  }
  v8 = v74;
  if ( v74 != nullptr )
  {
    v57 = *((uint32_t *)v74 + 1);
    ++*((uint32_t *)v74 + 2);
    v58 = v57;
    LOWORD(v57) = 0;
    *((uint32_t *)v74 + 1) = v57 | (uint16_t)(v58 + 1);
  }
  v80 = (hkXmlStreamParser::Self *)(v74);
  v35 = 0;
LABEL_110:
  if ( v8 != nullptr )
  {
    v36 = *((uint32_t *)v8 + 1);
    LOWORD(v36) = 0;
    v37 = v36 | (uint16_t)(*((uint32_t *)v8 + 1) - 1);
    v18 = (*((uint32_t *)v8 + 2))-- == 1;
    *((uint32_t *)v8 + 1) = v37;
    if ( v18 )
    {
      v78 = (hkXmlStreamParser::Self *)v35;
      G4_VCALL<void>(v8, 4, v59);
      v35 = (int)(uintptr_t)(v78);
    }
  }
  if ( v35 != 0 )
  {
    *(uint32_t *)v68 = 0;
    if ( v80 != nullptr )
    {
      v41 = *((uint32_t *)v80 + 1);
      v40 = *((uint32_t *)v80 + 2);
      goto LABEL_116;
    }
  }
  else
  {
    *(uint32_t *)v68 = (uint32_t)(uintptr_t)(v80);
    if ( v80 != nullptr )
    {
      v38 = *((uint32_t *)v80 + 1);
      v39 = v38 + 1;
      LOWORD(v38) = 0;
      v40 = *((uint32_t *)v80 + 2) + 1;
      *((uint32_t *)v80 + 2) = v40;
      v41 = v38 | v39;
LABEL_116:
      v42 = v41;
      LOWORD(v41) = 0;
      v43 = v40 - 1;
      *((uint32_t *)v80 + 1) = v41 | (uint16_t)(v42 - 1);
      *((uint32_t *)v80 + 2) = v43;
      if ( v43 == 0 )
        G4_VCALL<void>(v80, 4);
    }
  }
LABEL_10:
  sub_1894DE0(v88);
  return v68;
}

// ----------------------------------------------------------------------------
// Function: hkXmlTagfileReader::readHeader  (binary VA: 0x18962d0)
// Original: hkXmlTagfileReader::readHeader
// ----------------------------------------------------------------------------
uint32_t * hkXmlTagfileReader::readHeader(uint32_t *a1, int a2, hkStreamReader::Self *a3, char **a4)
{
  uint32_t *v4;
  int i;
  int j;
  int v8;
  typedef int _g4_t_v9;
  typedef char *_g4_t_v10;
  typedef char **_g4_t_v11;
  typedef int _g4_t_v12;
  typedef uint8_t _g4_t_v13[5];
  typedef char _g4_t_v14[12];
  typedef char _g4_t_v15[116];
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  enum : size_t {
    _g4_s0 = 880u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v10)) > _g4_s1 ? (20u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v11)) > _g4_s2 ? (28u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v12)) > _g4_s3 ? (32u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (39u + sizeof(_g4_t_v13)) > _g4_s4 ? (39u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v14)) > _g4_s5 ? (44u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v15)) > _g4_s6 ? (56u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (172u + sizeof(_g4_t_v16)) > _g4_s7 ? (172u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (280u + sizeof(_g4_t_v17)) > _g4_s8 ? (280u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (284u + sizeof(_g4_t_v18)) > _g4_s9 ? (284u + sizeof(_g4_t_v18)) : _g4_s9,
    _g4_s11 = (800u + sizeof(_g4_t_v19)) > _g4_s10 ? (800u + sizeof(_g4_t_v19)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 39u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 56u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 172u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 280u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 284u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 800u);

  v19 = (uint32_t *)(&a1);
  v4 = a1;
  v11 = a4;
  sub_1891D90((hkXmlStreamParser::Self *)v15, a3, 0);
  hkXmlStreamParser::advance((hkXmlStreamParser::Self *)v15);
  for ( i = v16; i == 5; i = hkXmlStreamParser::advance((hkXmlStreamParser::Self *)v15) )
    ;
  if ( i == 0 )
    hkXmlStreamParser::advance((hkXmlStreamParser::Self *)v15);
  for ( j = v16; j == 5; j = hkXmlStreamParser::advance((hkXmlStreamParser::Self *)v15) )
    ;
  if ( j == 1 )
  {
    hkXmlStreamParser::getBlockName((hkXmlStreamParser::Self *)&v17);
    hkSubString::opEq((hkSubString::Self *)v13, (const char *)&v17);
    if ( v13[0] != 0 )
    {
      hkXmlStreamParser::getIntAttribute((hkXmlStreamParser::Self *)&v12, v15, (int *)"version");
      if ( v12 != 1 )
      {
        if ( (unsigned int)(uintptr_t)(*v11 - 1) > 1 )
        {
          hkErrStream::Construct((hkErrStream::Self *)v14, (hkString::Self *)&v17, 512);
          v10 = *v11;
          v8 = hkOstream::opShl((int)(uintptr_t)(v14), (hkString::Self *)"Unrecognised tagfile version ");
          hkOstream::opShl(v8, v10);
          hkError::messageWarning(
            (hkError::Self *)0x23C6037F,
            (int)(uintptr_t)(&v17),
            "Tagfile/Xml/hkXmlTagfileReader.cpp",
            (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_494)->st_value + 2,
            v9);
          hkErrStream::Destroy((hkErrStream::Self *)v14);
        }
        else
        {
          v17 = 0;
          v18 = 0;
          hkXmlStreamParser::getValue((hkXmlStreamParser::Self *)&v12, v15, (hkSubString::Self *)"sdkversion");
          if ( v12 == 0 )
            hkStringPtr::set((hkStringPtr::Self *)(v11 + 1), (hkString::Self *)(v17 + 1), v18 - v17 - 2);
          if ( (int)(uintptr_t)(*v11) <= 1
            || (hkXmlStreamParser::getIntAttribute((hkXmlStreamParser::Self *)&v12, v15, (int *)"maxpredicate"), v12 == 0)
            && (hkXmlStreamParser::getIntListAttribute_unsigned_short_782e20(&v12), v12 != 1) )
          {
            *v4 = 0;
            goto LABEL_9;
          }
        }
      }
    }
  }
  *v4 = 1;
LABEL_9:
  sub_1894DE0(v15);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: hkRootLevelContainer::NamedVariant::staticClass  (binary VA: 0x18967f0)
// Original: hkRootLevelContainer::NamedVariant::staticClass
// ----------------------------------------------------------------------------
void * hkRootLevelContainer::NamedVariant::staticClass()
{
  return &hkRootLevelContainerNamedVariantClass;
}

// ----------------------------------------------------------------------------
// Function: hkRootLevelContainer::staticClass  (binary VA: 0x1896810)
// Original: hkRootLevelContainer::staticClass
// ----------------------------------------------------------------------------
void * hkRootLevelContainer::staticClass()
{
  return &hkRootLevelContainerClass;
}

// ----------------------------------------------------------------------------
// Function: hkMemoryResourceContainer::staticClass  (binary VA: 0x1896ad0)
// Original: hkMemoryResourceContainer::staticClass
// ----------------------------------------------------------------------------
void * hkMemoryResourceContainer::staticClass()
{
  return &hkMemoryResourceContainerClass;
}

// ----------------------------------------------------------------------------
// Function: hkMemoryResourceHandle::ExternalLink::staticClass  (binary VA: 0x1896af0)
// Original: hkMemoryResourceHandle::ExternalLink::staticClass
// ----------------------------------------------------------------------------
void * hkMemoryResourceHandle::ExternalLink::staticClass()
{
  return &hkMemoryResourceHandleExternalLinkClass;
}

// ----------------------------------------------------------------------------
// Function: hkMemoryResourceHandle::staticClass  (binary VA: 0x1896b10)
// Original: hkMemoryResourceHandle::staticClass
// ----------------------------------------------------------------------------
void * hkMemoryResourceHandle::staticClass()
{
  return &hkMemoryResourceHandleClass;
}

// ----------------------------------------------------------------------------
// Function: hkResourceBase::staticClass  (binary VA: 0x1896b30)
// Original: hkResourceBase::staticClass
// ----------------------------------------------------------------------------
void * hkResourceBase::staticClass()
{
  return &hkResourceBaseClass;
}

// ----------------------------------------------------------------------------
// Function: hkResourceContainer::staticClass  (binary VA: 0x1896b50)
// Original: hkResourceContainer::staticClass
// ----------------------------------------------------------------------------
void * hkResourceContainer::staticClass()
{
  return &hkResourceContainerClass;
}

// ----------------------------------------------------------------------------
// Function: hkResourceHandle::staticClass  (binary VA: 0x1896b70)
// Original: hkResourceHandle::staticClass
// ----------------------------------------------------------------------------
void * hkResourceHandle::staticClass()
{
  return &hkResourceHandleClass;
}

// ----------------------------------------------------------------------------
// Function: hkXmlTagfileWriter::Destroy  (binary VA: 0x1896f40)
// Original: hkXmlTagfileWriter::~hkXmlTagfileWriter
// ----------------------------------------------------------------------------
void hkXmlTagfileWriter::Destroy(hkXmlTagfileWriter::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkXmlTagfileWriter::Destroy_ea1897110  (binary VA: 0x1897110)
// Original: hkXmlTagfileWriter::~hkXmlTagfileWriter
// ----------------------------------------------------------------------------
void hkXmlTagfileWriter::Destroy_ea1897110(hkXmlTagfileWriter::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 8;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkPackfileSectionHeader::getExports  (binary VA: 0x189f230)
// Original: hkPackfileSectionHeader::getExports
// ----------------------------------------------------------------------------
int hkPackfileSectionHeader::getExports(int a1, int a2, hkMemoryAllocator::Self *a3)
{
  int v3;
  int result;
  int v5;
  int v6;
  uint8_t *v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;
  int v13;
  int v14;

  v3 = *(uint32_t *)(a1 + 36);
  v13 = v3 + a2;
  result = *(uint32_t *)(a1 + 40) - v3;
  if ( result > 0 )
  {
    v5 = *(uint32_t *)(v3 + a2);
    if ( v5 != -1 )
    {
      result = 4;
      v6 = 4;
      while ( 1 )
      {
        v7 = (uint8_t *)(v13 + v6);
        v8 = 0;
        if ( *v7 == 0 )
          break;
        while ( v7[v8 + 1] != 0 )
          ++v8;
        v8 += 2;
        if ( (v8 & 3) != 0 )
          goto LABEL_9;
LABEL_10:
        v9 = result + v8;
        v10 = *((uint32_t *)a3 + 1);
        if ( v10 == (*((uint32_t *)a3 + 2) & 0x3FFFFFFF) )
        {
          v14 = v5;
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a3, 8, v12);
          v10 = *((uint32_t *)a3 + 1);
          v5 = v14;
        }
        *((uint32_t *)a3 + 1) = v10 + 1;
        v11 = (uint32_t *)(*(uint32_t *)a3 + 8 * v10);
        v11[1] = a2 + v5;
        *v11 = (uint32_t)(uintptr_t)(v7);
        result = *(uint32_t *)(a1 + 40) - *(uint32_t *)(a1 + 36);
        if ( v9 < result )
        {
          v6 = v9 + 4;
          result = v9 + 4;
          v5 = *(uint32_t *)(v13 + v9);
          if ( v5 != -1 )
            continue;
        }
        return result;
      }
      LOWORD(v8) = 1;
      do
LABEL_9:
        ++v8;
      while ( (v8 & 3) != 0 );
      goto LABEL_10;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkPackfileSectionHeader::getImports  (binary VA: 0x18a04d0)
// Original: hkPackfileSectionHeader::getImports
// ----------------------------------------------------------------------------
int hkPackfileSectionHeader::getImports(int a1, int a2, hkMemoryAllocator::Self *a3)
{
  int v3;
  int result;
  int v5;
  int v6;
  uint8_t *v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;
  int v13;
  int v14;

  v3 = *(uint32_t *)(a1 + 40);
  v13 = v3 + a2;
  result = *(uint32_t *)(a1 + 44) - v3;
  if ( result > 0 )
  {
    v5 = *(uint32_t *)(v3 + a2);
    if ( v5 != -1 )
    {
      result = 4;
      v6 = 4;
      while ( 1 )
      {
        v7 = (uint8_t *)(v13 + v6);
        v8 = 0;
        if ( *v7 == 0 )
          break;
        while ( v7[v8 + 1] != 0 )
          ++v8;
        v8 += 2;
        if ( (v8 & 3) != 0 )
          goto LABEL_9;
LABEL_10:
        v9 = result + v8;
        v10 = *((uint32_t *)a3 + 1);
        if ( v10 == (*((uint32_t *)a3 + 2) & 0x3FFFFFFF) )
        {
          v14 = v5;
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a3, 8, v12);
          v10 = *((uint32_t *)a3 + 1);
          v5 = v14;
        }
        *((uint32_t *)a3 + 1) = v10 + 1;
        v11 = (uint32_t *)(*(uint32_t *)a3 + 8 * v10);
        v11[1] = a2 + v5;
        *v11 = (uint32_t)(uintptr_t)(v7);
        result = *(uint32_t *)(a1 + 44) - *(uint32_t *)(a1 + 40);
        if ( v9 < result )
        {
          v6 = v9 + 4;
          result = v9 + 4;
          v5 = *(uint32_t *)(v13 + v9);
          if ( v5 != -1 )
            continue;
        }
        return result;
      }
      LOWORD(v8) = 1;
      do
LABEL_9:
        ++v8;
      while ( (v8 & 3) != 0 );
      goto LABEL_10;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkStaticClassNameRegistry::getName  (binary VA: 0x18a05f0)
// Original: hkStaticClassNameRegistry::getName
// ----------------------------------------------------------------------------
int hkStaticClassNameRegistry::getName(hkStaticClassNameRegistry::Self *self)
{
  return *((uint32_t *)self + 2);
}

// ----------------------------------------------------------------------------
// Function: hkStaticClassNameRegistry::Construct  (binary VA: 0x18a0600)
// Original: hkStaticClassNameRegistry::hkStaticClassNameRegistry
// ----------------------------------------------------------------------------
void hkStaticClassNameRegistry::Construct(hkStaticClassNameRegistry::Self *self, hkClass::Self *const *a2, int a3, const char *a4)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6A28);
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 4) = a3;
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(a4);
}

// ----------------------------------------------------------------------------
// Function: hkStaticClassNameRegistry::Construct  (binary VA: 0x18a0640)
// Original: hkStaticClassNameRegistry::hkStaticClassNameRegistry
// ----------------------------------------------------------------------------
void hkStaticClassNameRegistry::Construct(hkStaticClassNameRegistry::Self *self, const hkClass::Self *const *a2, int a3, const char *a4)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6A28);
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 4) = a3;
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 5) = 1;
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(a4);
}

// ----------------------------------------------------------------------------
// Function: hkStaticClassNameRegistry::checkIfReady  (binary VA: 0x18a0680)
// Original: hkStaticClassNameRegistry::checkIfReady
// ----------------------------------------------------------------------------
int hkStaticClassNameRegistry::checkIfReady(hkStaticClassNameRegistry::Self *self)
{
  int result;
  int v2;

  result = *((uint32_t *)self + 5);
  if ( result == 0 )
  {
    hkVersionUtil::recomputeClassMemberOffsets(
               *((hkVersionUtil::Self **)self + 3),
               *((hkClass::Self *const **)self + 4),
               v2);
    *((uint32_t *)self + 5) = 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkStaticClassNameRegistry::getClassByName  (binary VA: 0x18a06c0)
// Original: hkStaticClassNameRegistry::getClassByName
// ----------------------------------------------------------------------------
int hkStaticClassNameRegistry::getClassByName(hkClass::Self ***self, hkString::Self *a2)
{
  int v2;
  int v3;
  hkClass::Self *v4;
  char *Name;
  bool v6;
  int v7;

  v2 = 0;
  v3 = 4;
  hkStaticClassNameRegistry::checkIfReady((hkStaticClassNameRegistry::Self *)self);
  v4 = **(self + 3);
  if ( v4 == nullptr )
    return 0;
  while ( 1 )
  {
    Name = (char *)hkClass::getName(v4);
    v6 = hkString::strCmp(a2, Name) == 0;
    v7 = (int)(uintptr_t)(*(self + 3));
    if ( v6 )
      break;
    v4 = *(hkClass::Self **)(v7 + v3);
    if ( v4 == nullptr )
      return 0;
    v2 = v3;
    v3 += 4;
  }
  return *(uint32_t *)(v7 + v2);
}

// ----------------------------------------------------------------------------
// Function: hkStaticClassNameRegistry::getClasses  (binary VA: 0x18a0750)
// Original: hkStaticClassNameRegistry::getClasses
// ----------------------------------------------------------------------------
int hkStaticClassNameRegistry::getClasses(hkStaticClassNameRegistry::Self *a1, int *a2)
{
  int v2;
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int result;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef uint8_t _g4_t_v13[28];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v12)) > _g4_s1 ? (0u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v13)) > _g4_s2 ? (4u + sizeof(_g4_t_v13)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);

  v2 = 0;
  hkStaticClassNameRegistry::checkIfReady(a1);
  v3 = *((uint32_t **)a1 + 3);
  if ( *v3 != 0 )
  {
    do
      ++v2;
    while ( v3[v2] != 0 );
  }
  v4 = a2[1];
  v5 = a2[2] & 0x3FFFFFFF;
  v6 = v4 + v2;
  if ( v4 + v2 > v5 )
  {
    v7 = 2 * v5;
    v11 = a2[1];
    if ( v6 >= v7 )
      v7 = v4 + v2;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v13, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, a2, v7, 4);
    v4 = v11;
    v6 = v2 + a2[1];
  }
  a2[1] = v6;
  v12 = *a2 + 4 * v4;
  v8 = 0;
  v9 = **((uint32_t **)a1 + 3);
  result = 4;
  if ( v9 != 0 )
  {
    while ( 1 )
    {
      *(uint32_t *)(v12 + v8) = v9;
      v9 = *(uint32_t *)(*((uint32_t *)a1 + 3) + result);
      if ( v9 == 0 )
        break;
      v8 = result;
      result += 4;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkSubStreamWriter::isOk  (binary VA: 0x18a0830)
// Original: hkSubStreamWriter::isOk
// ----------------------------------------------------------------------------
hkSubStreamWriter::Self * hkSubStreamWriter::isOk(hkSubStreamWriter::Self *self, int a2)
{
  (*(void (**)(hkSubStreamWriter::Self *))(**(uint32_t **)(a2 + 8) + 20))(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkSubStreamWriter::write  (binary VA: 0x18a0860)
// Original: hkSubStreamWriter::write
// ----------------------------------------------------------------------------
int hkSubStreamWriter::write(hkSubStreamWriter::Self *self, const void *a2, int a3)
{
  return (*(int (**)(uint32_t, const void *, int))(**((uint32_t **)self + 2) + 24))(*((uint32_t *)self + 2), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkSubStreamWriter::flush  (binary VA: 0x18a0890)
// Original: hkSubStreamWriter::flush
// ----------------------------------------------------------------------------
int hkSubStreamWriter::flush(hkSubStreamWriter::Self *self)
{
  return (*(int (**)(uint32_t))(**((uint32_t **)self + 2) + 28))(*((uint32_t *)self + 2));
}

// ----------------------------------------------------------------------------
// Function: hkSubStreamWriter::seekTellSupported  (binary VA: 0x18a08b0)
// Original: hkSubStreamWriter::seekTellSupported
// ----------------------------------------------------------------------------
hkSubStreamWriter::Self * hkSubStreamWriter::seekTellSupported(hkSubStreamWriter::Self *self, int a2)
{
  (*(void (**)(hkSubStreamWriter::Self *))(**(uint32_t **)(a2 + 8) + 32))(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkSubStreamWriter::seek  (binary VA: 0x18a08e0)
// Original: hkSubStreamWriter::seek
// ----------------------------------------------------------------------------
int hkSubStreamWriter::seek(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 8) + 36))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkSubStreamWriter::tell  (binary VA: 0x18a0930)
// Original: hkSubStreamWriter::tell
// ----------------------------------------------------------------------------
int hkSubStreamWriter::tell(hkSubStreamWriter::Self *self)
{
  return (*(int (**)(uint32_t))(**((uint32_t **)self + 2) + 40))(*((uint32_t *)self + 2)) - *((uint32_t *)self + 3);
}

// ----------------------------------------------------------------------------
// Function: hkSubStreamWriter::Destroy  (binary VA: 0x18a0950)
// Original: hkSubStreamWriter::~hkSubStreamWriter
// ----------------------------------------------------------------------------
void hkSubStreamWriter::Destroy(hkSubStreamWriter::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkBinaryPackfileWriter::Destroy  (binary VA: 0x18a0970)
// Original: hkBinaryPackfileWriter::~hkBinaryPackfileWriter
// ----------------------------------------------------------------------------
void hkBinaryPackfileWriter::Destroy(hkBinaryPackfileWriter::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6AA8);
  hkPackfileWriter::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkSubStreamWriter::Destroy_ea18a09a0  (binary VA: 0x18a09a0)
// Original: hkSubStreamWriter::~hkSubStreamWriter
// ----------------------------------------------------------------------------
void hkSubStreamWriter::Destroy_ea18a09a0(hkSubStreamWriter::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 16;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkBinaryPackfileWriter::Destroy_ea18a0a00  (binary VA: 0x18a0a00)
// Original: hkBinaryPackfileWriter::~hkBinaryPackfileWriter
// ----------------------------------------------------------------------------
void hkBinaryPackfileWriter::Destroy_ea18a0a00(hkBinaryPackfileWriter::Self *self)
{
  int v1;
  int v2;

  hkBinaryPackfileWriter::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 228;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkBinaryPackfileWriter::Construct  (binary VA: 0x18a0bb0)
// Original: hkBinaryPackfileWriter::hkBinaryPackfileWriter
// ----------------------------------------------------------------------------
int hkBinaryPackfileWriter::Construct(hkPackfileWriter::Self *a1, int a2)
{
  hkPackfileWriter::Construct(a1, a2);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A6AA8);
  hkPackfileWriter::addSection(a1, hkBinaryPackfileWriter::SECTION_TAG_CLASSNAMES);
  G4_VCALL<void>(a1, 48, &hkClassClass, hkPackfileWriter::SECTION_TAG_TYPES);
  G4_VCALL<void>(a1, 48, &hkClassMemberClass, hkPackfileWriter::SECTION_TAG_TYPES);
  G4_VCALL<void>(a1, 48, &hkClassEnumClass, hkPackfileWriter::SECTION_TAG_TYPES);
  return G4_VCALL<int>(a1, 48, &hkClassEnumItemClass, hkPackfileWriter::SECTION_TAG_TYPES);
}

// ----------------------------------------------------------------------------
// Function: hkBinaryPackfileWriter::fillSectionTags  (binary VA: 0x18a0c70)
// Original: hkBinaryPackfileWriter::fillSectionTags
// ----------------------------------------------------------------------------
char * hkBinaryPackfileWriter::fillSectionTags(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  hkString::Self *v8;
  hkString::Self *v9;
  int i;
  char *result;
  int v12;
  typedef hkString::Self *_g4_t_v13;
  typedef char *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef hkString::Self *_g4_t_v18;
  typedef uint32_t _g4_t_v19[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v15)) > _g4_s2 ? (32u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v16)) > _g4_s3 ? (36u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v17)) > _g4_s4 ? (40u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v18)) > _g4_s5 ? (44u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v19)) > _g4_s6 ? (48u + sizeof(_g4_t_v19)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);

  v19[3] = (uint32_t)(uintptr_t)(&a1);
  v2 = a1;
  v17 = a2;
  v3 = *(uint32_t *)(a1 + 88);
  v4 = *(uint32_t *)(a2 + 12) & 0x3FFFFFFF;
  v15 = v3;
  if ( v3 > v4 )
  {
    v5 = 2 * v4;
    if ( v5 < v3 )
      v5 = *(uint32_t *)(a1 + 88);
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v19,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)(a2 + 4),
      v5,
      64);
  }
  v6 = v17;
  v7 = *(uint32_t *)(v17 + 8);
  v16 = v15 - v7;
  v8 = *(hkString::Self **)(v17 + 4);
  v9 = (hkString::Self *)((char *)v8 + 64 * v7);
  if ( v16 > 0 )
  {
    for ( i = 0; i != v16; ++i )
    {
      v18 = v9;
      hkString::memSet(v9, nullptr, 4u);
      v9 = (hkString::Self *)((char *)v18 + 64);
    }
    v6 = v17;
    v8 = *(hkString::Self **)(v17 + 4);
  }
  *(uint32_t *)(v6 + 8) = v15;
  hkString::memSet(v8, (void *)0xFFFFFFFF, v15 << 6);
  result = *(char **)(v2 + 88);
  v12 = 0;
  if ( (int)(uintptr_t)(result) > 0 )
  {
    do
    {
      v14 = *(char **)(*(uint32_t *)(v2 + 84) + 4 * v12);
      v13 = (hkString::Self *)(*(uint32_t *)(v17 + 4) + (v12++ << 6));
      result = hkString::strNcpy(v13, v14, (uint8_t *)&word_12 + 1);
    }
    while ( *(uint32_t *)(v2 + 88) > v12 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkBinaryPackfileWriter::writeClassName  (binary VA: 0x18a0da0)
// Original: hkBinaryPackfileWriter::writeClassName
// ----------------------------------------------------------------------------
int hkBinaryPackfileWriter::writeClassName(int a1, int a2, hkClass::Self *a3, int a4)
{
  unsigned int Signature;
  unsigned int v5;
  int v6;
  int v7;
  int v8;
  hkString::Self *Name;
  int v10;
  int (*v11)(uint32_t, hkString::Self *, size_t);
  size_t v12;
  typedef unsigned int _g4_t_v14;
  typedef char _g4_t_v15;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v14)) > _g4_s0 ? (8u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v15)) > _g4_s1 ? (12u + sizeof(_g4_t_v15)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);

  Signature = hkClass::getSignature(a3, 0);
  if ( *(uint8_t *)(a2 + 76) != 0 )
  {
    v5 = Signature;
    LOBYTE(v5) = HIBYTE(Signature);
    v6 = (Signature << 24) | v5 & 0xFFFFFF;
    v7 = BYTE1(v6) << 16;
    BYTE1(v6) = (unsigned int)(v6 << 8) >> 24;
    Signature = v7 | v6 & 0xFF00FFFF;
  }
  v14 = Signature;
  v8 = *(uint32_t *)(a2 + 28);
  v15 = 9;
  G4_VCALL<void>(v8, 24, &v14, 5);
  Name = (hkString::Self *)hkClass::getName(a3);
  v10 = (*(int (**)(uint32_t))(**(uint32_t **)(a2 + 28) + 40))(*(uint32_t *)(a2 + 28));
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
    (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(a2 + 48),
    Name,
    v10 - a4);
  v11 = *(int (**)(uint32_t, hkString::Self *, size_t))(**(uint32_t **)(a2 + 28) + 24);
  v12 = hkString::strLen(Name);
  return v11(*(uint32_t *)(a2 + 28), Name, v12 + 1);
}

// ----------------------------------------------------------------------------
// Function: hkDataRefCounted::Destroy  (binary VA: 0x18a0e80)
// Original: hkDataRefCounted::~hkDataRefCounted
// ----------------------------------------------------------------------------
void hkDataRefCounted::Destroy(hkDataRefCounted::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayImpl::getUnderlyingIntegerSize  (binary VA: 0x18a25b0)
// Original: hkDataArrayImpl::getUnderlyingIntegerSize
// ----------------------------------------------------------------------------
int hkDataArrayImpl::getUnderlyingIntegerSize()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayImpl::swizzleObjectMember  (binary VA: 0x18a25c0)
// Original: hkDataArrayImpl::swizzleObjectMember
// ----------------------------------------------------------------------------
int hkDataArrayImpl::swizzleObjectMember()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayImpl::asVec  (binary VA: 0x18a25d0)
// Original: hkDataArrayImpl::asVec
// ----------------------------------------------------------------------------
int hkDataArrayImpl::asVec()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayImpl::setVec  (binary VA: 0x18a25e0)
// Original: hkDataArrayImpl::setVec
// ----------------------------------------------------------------------------
void hkDataArrayImpl::setVec()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayImpl::asString  (binary VA: 0x18a25f0)
// Original: hkDataArrayImpl::asString
// ----------------------------------------------------------------------------
int hkDataArrayImpl::asString()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayImpl::setString  (binary VA: 0x18a2600)
// Original: hkDataArrayImpl::setString
// ----------------------------------------------------------------------------
void hkDataArrayImpl::setString()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayImpl::asReal  (binary VA: 0x18a2610)
// Original: hkDataArrayImpl::asReal
// ----------------------------------------------------------------------------
long double hkDataArrayImpl::asReal()
{
  return 0.0;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayImpl::setReal  (binary VA: 0x18a2620)
// Original: hkDataArrayImpl::setReal
// ----------------------------------------------------------------------------
void hkDataArrayImpl::setReal()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayImpl::asInt  (binary VA: 0x18a2630)
// Original: hkDataArrayImpl::asInt
// ----------------------------------------------------------------------------
int hkDataArrayImpl::asInt()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayImpl::setInt  (binary VA: 0x18a2640)
// Original: hkDataArrayImpl::setInt
// ----------------------------------------------------------------------------
void hkDataArrayImpl::setInt()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayImpl::asInt64  (binary VA: 0x18a2650)
// Original: hkDataArrayImpl::asInt64
// ----------------------------------------------------------------------------
int64_t hkDataArrayImpl::asInt64()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayImpl::setInt64  (binary VA: 0x18a2660)
// Original: hkDataArrayImpl::setInt64
// ----------------------------------------------------------------------------
void hkDataArrayImpl::setInt64()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayImpl::asObject  (binary VA: 0x18a2670)
// Original: hkDataArrayImpl::asObject
// ----------------------------------------------------------------------------
int hkDataArrayImpl::asObject()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayImpl::setObject  (binary VA: 0x18a2680)
// Original: hkDataArrayImpl::setObject
// ----------------------------------------------------------------------------
void hkDataArrayImpl::setObject()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayImpl::asArray  (binary VA: 0x18a2690)
// Original: hkDataArrayImpl::asArray
// ----------------------------------------------------------------------------
int hkDataArrayImpl::asArray()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayImpl::setArray  (binary VA: 0x18a26a0)
// Original: hkDataArrayImpl::setArray
// ----------------------------------------------------------------------------
void hkDataArrayImpl::setArray()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayImpl::asHalf  (binary VA: 0x18a26b0)
// Original: hkDataArrayImpl::asHalf
// ----------------------------------------------------------------------------
hkDataArrayImpl::Self * hkDataArrayImpl::asHalf(hkDataArrayImpl::Self *self, int a2)
{
  *(uint16_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayImpl::setHalf  (binary VA: 0x18a26c0)
// Original: hkDataArrayImpl::setHalf
// ----------------------------------------------------------------------------
void hkDataArrayImpl::setHalf()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayImpl::setAll  (binary VA: 0x18a26d0)
// Original: hkDataArrayImpl::setAll
// ----------------------------------------------------------------------------
void hkDataArrayImpl::setAll()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayImpl::setAll_ea18a26e0  (binary VA: 0x18a26e0)
// Original: hkDataArrayImpl::setAll
// ----------------------------------------------------------------------------
void hkDataArrayImpl::setAll_ea18a26e0()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayImpl::setAll_ea18a26f0  (binary VA: 0x18a26f0)
// Original: hkDataArrayImpl::setAll
// ----------------------------------------------------------------------------
void hkDataArrayImpl::setAll_ea18a26f0()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayImpl::setAll_ea18a2700  (binary VA: 0x18a2700)
// Original: hkDataArrayImpl::setAll
// ----------------------------------------------------------------------------
void hkDataArrayImpl::setAll_ea18a2700()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayImpl::setAll_ea18a2710  (binary VA: 0x18a2710)
// Original: hkDataArrayImpl::setAll
// ----------------------------------------------------------------------------
void hkDataArrayImpl::setAll_ea18a2710()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayImpl::setAll_ea18a2720  (binary VA: 0x18a2720)
// Original: hkDataArrayImpl::setAll
// ----------------------------------------------------------------------------
void hkDataArrayImpl::setAll_ea18a2720()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayImpl::setAll_ea18a2730  (binary VA: 0x18a2730)
// Original: hkDataArrayImpl::setAll
// ----------------------------------------------------------------------------
void hkDataArrayImpl::setAll_ea18a2730()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayImpl::setAll_ea18a2740  (binary VA: 0x18a2740)
// Original: hkDataArrayImpl::setAll
// ----------------------------------------------------------------------------
void hkDataArrayImpl::setAll_ea18a2740()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayImpl::setAll_ea18a2750  (binary VA: 0x18a2750)
// Original: hkDataArrayImpl::setAll
// ----------------------------------------------------------------------------
void hkDataArrayImpl::setAll_ea18a2750()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayImpl::setAll_ea18a2760  (binary VA: 0x18a2760)
// Original: hkDataArrayImpl::setAll
// ----------------------------------------------------------------------------
void hkDataArrayImpl::setAll_ea18a2760()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayImpl::setAll_ea18a2770  (binary VA: 0x18a2770)
// Original: hkDataArrayImpl::setAll
// ----------------------------------------------------------------------------
void hkDataArrayImpl::setAll_ea18a2770()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayImpl::setAll_ea18a2780  (binary VA: 0x18a2780)
// Original: hkDataArrayImpl::setAll
// ----------------------------------------------------------------------------
void hkDataArrayImpl::setAll_ea18a2780()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldNative::getTypeManager  (binary VA: 0x18a2790)
// Original: hkDataWorldNative::getTypeManager
// ----------------------------------------------------------------------------
char * hkDataWorldNative::getTypeManager(hkDataWorldNative::Self *self)
{
  return (char *)self + 48;
}

// ----------------------------------------------------------------------------
// Function: hkDataClassImpl::Destroy  (binary VA: 0x18a27a0)
// Original: hkDataClassImpl::~hkDataClassImpl
// ----------------------------------------------------------------------------
void hkDataClassImpl::Destroy(hkDataClassImpl::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
}

// ----------------------------------------------------------------------------
// Function: hkDataClassNative::getWorld  (binary VA: 0x18a27c0)
// Original: hkDataClassNative::getWorld
// ----------------------------------------------------------------------------
int hkDataClassNative::getWorld(hkDataClassNative::Self *self)
{
  return *((uint32_t *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayImpl::Destroy  (binary VA: 0x18a27d0)
// Original: hkDataArrayImpl::~hkDataArrayImpl
// ----------------------------------------------------------------------------
void hkDataArrayImpl::Destroy(hkDataArrayImpl::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::getType  (binary VA: 0x18a27f0)
// Original: hkDataArrayNative::getType
// ----------------------------------------------------------------------------
int hkDataArrayNative::getType(hkDataArrayNative::Self *self)
{
  return *((uint32_t *)self + 10);
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::getWorld  (binary VA: 0x18a2800)
// Original: hkDataArrayNative::getWorld
// ----------------------------------------------------------------------------
int hkDataArrayNative::getWorld(hkDataArrayNative::Self *self)
{
  return *((uint32_t *)self + 3);
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::getUnderlyingIntegerSize  (binary VA: 0x18a2810)
// Original: hkDataArrayNative::getUnderlyingIntegerSize
// ----------------------------------------------------------------------------
int hkDataArrayNative::getUnderlyingIntegerSize(hkDataArrayNative::Self *self)
{
  return (unsigned int)(*((uint32_t *)self + 7) - 9) < 2 ? 8 : 4;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::asStridedBasicArray  (binary VA: 0x18a2830)
// Original: hkDataArrayNative::asStridedBasicArray
// ----------------------------------------------------------------------------
uint32_t * hkDataArrayNative::asStridedBasicArray(uint32_t *a1, uint32_t *a2, uint32_t *a3)
{
  a3[1] = 1;
  *a3 = a2[7];
  switch ( a2[7] )
  {
    case 0xC:
    case 0xD:
      *a3 = 11;
      a3[1] = 4;
      break;
    case 0xE:
    case 0xF:
    case 0x10:
      *a3 = 11;
      a3[1] = 12;
      break;
    case 0x11:
    case 0x12:
      *a3 = 11;
      a3[1] = 16;
      break;
    case 0x18:
    case 0x1F:
      *a3 = a2[8];
      break;
    default:
      break;
  }
  a3[3] = G4_VCALL<int>(a2, 24);
  a3[4] = a2[6];
  a3[2] = a2[4];
  *a1 = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::setArray  (binary VA: 0x18a28e0)
// Original: hkDataArrayNative::setArray
// ----------------------------------------------------------------------------
void hkDataArrayNative::setArray()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectImpl::Destroy  (binary VA: 0x18a28f0)
// Original: hkDataObjectImpl::~hkDataObjectImpl
// ----------------------------------------------------------------------------
void hkDataObjectImpl::Destroy(hkDataObjectImpl::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectNative::getMemberIterator  (binary VA: 0x18a2910)
// Original: hkDataObjectNative::getMemberIterator
// ----------------------------------------------------------------------------
int hkDataObjectNative::getMemberIterator()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectNative::getNextMember  (binary VA: 0x18a2920)
// Original: hkDataObjectNative::getNextMember
// ----------------------------------------------------------------------------
int hkDataObjectNative::getNextMember(hkDataObjectNative::Self *self, int a2)
{
  return a2 + 1;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectNative::destroy  (binary VA: 0x18a2930)
// Original: hkDataObjectNative::destroy
// ----------------------------------------------------------------------------
void hkDataObjectNative::destroy()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectNative::assign  (binary VA: 0x18a2940)
// Original: hkDataObjectNative::assign
// ----------------------------------------------------------------------------
void hkDataObjectNative::assign()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectNative::createdDuringPatching  (binary VA: 0x18a2950)
// Original: hkDataObjectNative::createdDuringPatching
// ----------------------------------------------------------------------------
int hkDataObjectNative::createdDuringPatching()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectNative::destroyMember  (binary VA: 0x18a2960)
// Original: hkDataObjectNative::destroyMember
// ----------------------------------------------------------------------------
void hkDataObjectNative::destroyMember()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldNative::getType  (binary VA: 0x18a2970)
// Original: hkDataWorldNative::getType
// ----------------------------------------------------------------------------
hkDataWorldNative::Self * hkDataWorldNative::getType(hkDataWorldNative::Self *self)
{
  *(uint32_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldNative::newClass  (binary VA: 0x18a2980)
// Original: hkDataWorldNative::newClass
// ----------------------------------------------------------------------------
int hkDataWorldNative::newClass()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldNative::newArray  (binary VA: 0x18a2990)
// Original: hkDataWorldNative::newArray
// ----------------------------------------------------------------------------
int hkDataWorldNative::newArray()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::Destroy  (binary VA: 0x18a29a0)
// Original: hkDataArrayNative::~hkDataArrayNative
// ----------------------------------------------------------------------------
void hkDataArrayNative::Destroy(hkDataArrayNative::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
}

// ----------------------------------------------------------------------------
// Function: hkDataClassNative::Destroy  (binary VA: 0x18a29c0)
// Original: hkDataClassNative::~hkDataClassNative
// ----------------------------------------------------------------------------
void hkDataClassNative::Destroy(hkDataClassNative::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
}

// ----------------------------------------------------------------------------
// Function: hkDataClassNative::getName  (binary VA: 0x18a29e0)
// Original: hkDataClassNative::getName
// ----------------------------------------------------------------------------
int hkDataClassNative::getName(hkClass::Self **self)
{
  return hkClass::getName(*(self + 3));
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::getClass  (binary VA: 0x18a2a10)
// Original: hkDataArrayNative::getClass
// ----------------------------------------------------------------------------
int hkDataArrayNative::getClass(hkDataArrayNative::Self *self)
{
  int (*v1)(uint32_t, int);
  int Name;

  if ( *((uint32_t *)self + 9) == 0 )
    return 0;
  v1 = *(int (**)(uint32_t, int))(**((uint32_t **)self + 3) + 44);
  Name = hkClass::getName(*((hkClass::Self **)self + 9));
  return v1(*((uint32_t *)self + 3), Name);
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectNative::getClass  (binary VA: 0x18a2a60)
// Original: hkDataObjectNative::getClass
// ----------------------------------------------------------------------------
int hkDataObjectNative::getClass(hkDataObjectNative::Self *self)
{
  int (*v1)(uint32_t, int);
  int Name;

  if ( *((uint32_t *)self + 4) == 0 )
    return 0;
  v1 = *(int (**)(uint32_t, int))(**((uint32_t **)self + 5) + 44);
  Name = hkClass::getName(*((hkClass::Self **)self + 4));
  return v1(*((uint32_t *)self + 5), Name);
}

// ----------------------------------------------------------------------------
// Function: hkDataClassNative::getVersion  (binary VA: 0x18a2ab0)
// Original: hkDataClassNative::getVersion
// ----------------------------------------------------------------------------
int hkDataClassNative::getVersion(hkClass::Self **self)
{
  return hkClass::getDescribedVersion(*(self + 3));
}

// ----------------------------------------------------------------------------
// Function: hkDataClassNative::getParent  (binary VA: 0x18a2ae0)
// Original: hkDataClassNative::getParent
// ----------------------------------------------------------------------------
int hkDataClassNative::getParent(hkClass::Self **self)
{
  hkClass::Self *Parent;
  int (*v2)(uint32_t, int);
  int Name;

  Parent = (hkClass::Self *)hkClass::getParent(*(self + 3));
  if ( Parent == nullptr )
    return 0;
  v2 = *(int (**)(uint32_t, int))(*(uint32_t *)*(self + 4) + 44);
  Name = hkClass::getName(Parent);
  return v2((uint32_t)(uintptr_t)(*(self + 4)), Name);
}

// ----------------------------------------------------------------------------
// Function: hkDataClassNative::isSuperClass  (binary VA: 0x18a2b40)
// Original: hkDataClassNative::isSuperClass
// ----------------------------------------------------------------------------
hkDataClassNative::Self * hkDataClassNative::isSuperClass(hkDataClassNative::Self *self, const hkDataClassImpl::Self *a2, int a3)
{
  int v3;
  char *v4;
  hkString::Self *v5;

  v3 = a3;
  if ( a3 != 0 )
  {
    while ( 1 )
    {
      v4 = (char *)G4_VCALL<int>(a2, 12);
      v5 = (hkString::Self *)G4_VCALL<int>(v3, 12);
      if ( hkString::strCmp(v5, v4) == 0 )
        break;
      v3 = G4_VCALL<int>(v3, 20);
      if ( v3 == 0 )
        goto LABEL_6;
    }
    *(uint8_t *)self = 1;
    return self;
  }
  else
  {
LABEL_6:
    *(uint8_t *)self = 0;
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: hkDataClassNative::getNumDeclaredMembers  (binary VA: 0x18a2bd0)
// Original: hkDataClassNative::getNumDeclaredMembers
// ----------------------------------------------------------------------------
int hkDataClassNative::getNumDeclaredMembers(hkClass::Self **self)
{
  return hkClass::getNumDeclaredMembers(*(self + 3));
}

// ----------------------------------------------------------------------------
// Function: hkDataClassNative::getDeclaredMemberIndexByName  (binary VA: 0x18a2c00)
// Original: hkDataClassNative::getDeclaredMemberIndexByName
// ----------------------------------------------------------------------------
int hkDataClassNative::getDeclaredMemberIndexByName(hkClass::Self **self, char *a2)
{
  return hkClass::getDeclaredMemberIndexByName(*(self + 3), a2);
}

// ----------------------------------------------------------------------------
// Function: hkDataClassNative::getNumMembers  (binary VA: 0x18a2c30)
// Original: hkDataClassNative::getNumMembers
// ----------------------------------------------------------------------------
int hkDataClassNative::getNumMembers(hkClass::Self **self)
{
  return hkClass::getNumMembers(*(self + 3));
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectNative::isValid  (binary VA: 0x18a2c60)
// Original: hkDataObjectNative::isValid
// ----------------------------------------------------------------------------
bool hkDataObjectNative::isValid(hkClass::Self **self, int a2)
{
  return hkClass::getNumMembers(*(self + 4)) > a2;
}

// ----------------------------------------------------------------------------
// Function: hkDataClassNative::getMemberIndexByName  (binary VA: 0x18a2c90)
// Original: hkDataClassNative::getMemberIndexByName
// ----------------------------------------------------------------------------
int hkDataClassNative::getMemberIndexByName(hkClass::Self **self, char *a2)
{
  return hkClass::getMemberIndexByName(*(self + 3), a2);
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectNative::getMemberName  (binary VA: 0x18a2cc0)
// Original: hkDataObjectNative::getMemberName
// ----------------------------------------------------------------------------
int hkDataObjectNative::getMemberName(hkClass::Self **self, int a2)
{
  return *(uint32_t *)hkClass::getMember(*(self + 4), a2);
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectNative::getMemberValue  (binary VA: 0x18a2cf0)
// Original: hkDataObjectNative::getMemberValue
// ----------------------------------------------------------------------------
hkDataObjectNative::Self * hkDataObjectNative::getMemberValue(hkDataObjectNative::Self *self, int a2, int a3)
{
  *((uint32_t *)self + 1) = hkClass::getMember(*(hkClass::Self **)(a2 + 16), a3);
  *(uint32_t *)self = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::clear  (binary VA: 0x18a2d30)
// Original: hkDataArrayNative::clear
// ----------------------------------------------------------------------------
void hkDataArrayNative::clear(hkDataArrayNative::Self *self)
{
  hkVariantDataUtil::clearArray(
    *(hkVariantDataUtil::Self **)(*((uint32_t *)self + 3) + 16),
    *((hkStringPtr::Self ***)self + 12),
    *((uint32_t *)self + 7),
    *((hkClass::Self **)self + 9));
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::reserve  (binary VA: 0x18a2d70)
// Original: hkDataArrayNative::reserve
// ----------------------------------------------------------------------------
int hkDataArrayNative::reserve(hkDataArrayNative::Self *self, int a2)
{
  int result;

  result = hkVariantDataUtil::reserveArray(*((int **)self + 12), *((uint32_t *)self + 7), *((hkClass::Self **)self + 9), a2);
  *((uint32_t *)self + 4) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::getSize  (binary VA: 0x18a2db0)
// Original: hkDataArrayNative::getSize
// ----------------------------------------------------------------------------
int hkDataArrayNative::getSize(hkVariantDataUtil::Self **self)
{
  if ( *(self + 12) != nullptr )
    return hkVariantDataUtil::getArraySize(*(self + 12));
  else
    return (int)(uintptr_t)(*(self + 5));
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::asVec  (binary VA: 0x18a2df0)
// Original: hkDataArrayNative::asVec
// ----------------------------------------------------------------------------
unsigned int hkDataArrayNative::asVec(hkDataArrayNative::Self *self, int a2)
{
  return hkVariantDataUtil::getReals(
           *((uint32_t *)self + 7),
           *((uint32_t *)self + 11),
           *((uint32_t *)self + 4) + *((uint32_t *)self + 6) * a2,
           (int *)(*((uint32_t *)self + 3) + 184));
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::asString  (binary VA: 0x18a2e40)
// Original: hkDataArrayNative::asString
// ----------------------------------------------------------------------------
unsigned int hkDataArrayNative::asString(hkDataArrayNative::Self *self, int a2)
{
  return hkVariantDataUtil::getString(*((uint32_t *)self + 7), *((uint32_t *)self + 4) + *((uint32_t *)self + 6) * a2);
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::asReal  (binary VA: 0x18a2e80)
// Original: hkDataArrayNative::asReal
// ----------------------------------------------------------------------------
void hkDataArrayNative::asReal(hkDataArrayNative::Self *self, int a2)
{
  hkVariantDataUtil::getReal(*((uint32_t *)self + 7), (int16_t *)(*((uint32_t *)self + 4) + *((uint32_t *)self + 6) * a2));
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::asInt  (binary VA: 0x18a2ec0)
// Original: hkDataArrayNative::asInt
// ----------------------------------------------------------------------------
int64_t hkDataArrayNative::asInt(hkDataArrayNative::Self *self, int a2)
{
  return hkVariantDataUtil::getInt(
           *((uint32_t *)self + 7),
           *((uint32_t *)self + 8),
           (uint8_t *)(*((uint32_t *)self + 4) + *((uint32_t *)self + 6) * a2));
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::asInt64  (binary VA: 0x18a2f00)
// Original: hkDataArrayNative::asInt64
// ----------------------------------------------------------------------------
int64_t hkDataArrayNative::asInt64(hkDataArrayNative::Self *self, int a2)
{
  return hkVariantDataUtil::getInt(
           *((uint32_t *)self + 7),
           *((uint32_t *)self + 8),
           (uint8_t *)(*((uint32_t *)self + 4) + *((uint32_t *)self + 6) * a2));
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::setAll  (binary VA: 0x18a2f40)
// Original: hkDataArrayNative::setAll
// ----------------------------------------------------------------------------
char * hkDataArrayNative::setAll(hkDataArrayNative::Self *self, uint8_t *a2, int a3)
{
  char *result;
  int v4;
  char *ClassMemberTypeProperties;

  result = *((char **)self + 7);
  if ( result == (char *)(uintptr_t)((uint8_t *)&dword_0 + 1) )
  {
    v4 = 1;
LABEL_6:
    G4_VCALL<void>(self, 20, a3);
    ClassMemberTypeProperties = hkClassMember::getClassMemberTypeProperties(v4);
    return (char *)hkString::memCpy(*((hkString::Self **)self + 4), a2, a3 * *((int16_t *)ClassMemberTypeProperties + 4));
  }
  if ( result == (char *)(uintptr_t)((uint8_t *)&dword_0 + 2) )
  {
    v4 = 2;
    goto LABEL_6;
  }
  if ( result == (char *)&loc_4 )
  {
    v4 = 4;
    goto LABEL_6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::setVec  (binary VA: 0x18a2fd0)
// Original: hkDataArrayNative::setVec
// ----------------------------------------------------------------------------
int hkDataArrayNative::setVec(hkDataArrayNative::Self *self, int a2, const float *a3)
{
  return hkVariantDataUtil::setReals(
           *((uint32_t *)self + 7),
           *((uint32_t *)self + 11),
           (unsigned int)(uintptr_t)(a3),
           *((uint32_t *)self + 4) + *((uint32_t *)self + 6) * a2,
           -1);
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::setString  (binary VA: 0x18a3020)
// Original: hkDataArrayNative::setString
// ----------------------------------------------------------------------------
hkStringPtr::Self * hkDataArrayNative::setString(hkStringPtr::Self **self, int a2, hkString::Self *a3)
{
  return hkVariantDataUtil::setString(*(self + 7), (hkStringPtr::Self *)((char *)*(self + 4) + (uint32_t)(uintptr_t)(*(self + 6)) * a2), a3);
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::setReal  (binary VA: 0x18a3060)
// Original: hkDataArrayNative::setReal
// ----------------------------------------------------------------------------
int hkDataArrayNative::setReal(hkDataArrayNative::Self *self, int a2, int a3)
{
  return hkVariantDataUtil::setReal(
           *((uint32_t *)self + 7),
           (int *)(*((uint32_t *)self + 4) + *((uint32_t *)self + 6) * a2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::setHalf  (binary VA: 0x18a30a0)
// Original: hkDataArrayNative::setHalf
// ----------------------------------------------------------------------------
int * hkDataArrayNative::setHalf(int a1, int a2, int16_t a3)
{
  return hkVariantDataUtil::setHalf(*(int **)(a1 + 28), (int *)(*(uint32_t *)(a1 + 16) + *(uint32_t *)(a1 + 24) * a2), a3);
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::setInt  (binary VA: 0x18a30e0)
// Original: hkDataArrayNative::setInt
// ----------------------------------------------------------------------------
char * hkDataArrayNative::setInt(char **self, int a2, int a3)
{
  return hkVariantDataUtil::setInt(*(self + 7), (bool *)&(*(self + 4))[(uint32_t)(uintptr_t)(*(self + 6)) * a2], a3);
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::setInt64  (binary VA: 0x18a3130)
// Original: hkDataArrayNative::setInt64
// ----------------------------------------------------------------------------
char * hkDataArrayNative::setInt64(char **self, int a2, int64_t a3)
{
  return hkVariantDataUtil::setInt(*(self + 7), (bool *)&(*(self + 4))[(uint32_t)(uintptr_t)(*(self + 6)) * a2], a3);
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectNative::getHandle  (binary VA: 0x18a3180)
// Original: hkDataObjectNative::getHandle
// ----------------------------------------------------------------------------
hkDataObjectNative::Self * hkDataObjectNative::getHandle(hkDataObjectNative::Self *self, int a2)
{
  hkDataObjectNative::Self *v2;
  hkClass::Self *v3;
  hkClass::Self *v4;
  typedef uint8_t _g4_t_v6[9];
  typedef hkDataObjectNative::Self **_g4_t_v7;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (9u + sizeof(_g4_t_v7)) > _g4_s1 ? (9u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 9u);

  v7 = &self;
  v2 = self;
  v3 = *(hkClass::Self **)(a2 + 16);
  *(uint32_t *)self = *(uint32_t *)(a2 + 12);
  hkClass::hasVtable((hkClass::Self *)v6, v3);
  v4 = nullptr;
  if ( v6[0] == 0 )
    v4 = v3;
  *((uint32_t *)v2 + 1) = (uint32_t)(uintptr_t)(v4);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectNative::hasMember  (binary VA: 0x18a31e0)
// Original: hkDataObjectNative::hasMember
// ----------------------------------------------------------------------------
bool hkDataObjectNative::hasMember(hkDataObjectNative::Self *self, char *a2)
{
  typedef uint8_t _g4_t_v3[9];
  typedef uint8_t _g4_t_v4[16];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (9u + sizeof(_g4_t_v4)) > _g4_s1 ? (9u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 9u);

  hkClassMemberAccessor::Construct((hkClassMemberAccessor::Self *)v4, (int)(uintptr_t)(self) + 12, a2);
  hkClassMemberAccessor::isOk((hkClassMemberAccessor::Self *)v3);
  return v3[0] != 0;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectNative::accessByName  (binary VA: 0x18a3240)
// Original: hkDataObjectNative::accessByName
// ----------------------------------------------------------------------------
hkDataObjectNative::Self * hkDataObjectNative::accessByName(hkDataObjectNative::Self *self, const char *a2, char *a3)
{
  hkDataObjectNative::Self *v3;
  typedef const char *_g4_t_v5;
  typedef char _g4_t_v6;
  typedef uint32_t _g4_t_v7[10];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (7u + sizeof(_g4_t_v6)) > _g4_s1 ? (7u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v7)) > _g4_s2 ? (8u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 7u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);

  v7[6] = (uint32_t)(uintptr_t)(&self);
  v5 = a2;
  v3 = self;
  hkClassMemberAccessor::Construct((hkClassMemberAccessor::Self *)v7, (int)(uintptr_t)(a2 + 12), a3);
  hkClassMemberAccessor::isOk((hkClassMemberAccessor::Self *)&v6);
  if ( v6 != 0 )
  {
    *((uint32_t *)v3 + 1) = hkClassMemberAccessor::getClassMember((hkClassMemberAccessor::Self *)v7);
    *(uint32_t *)v3 = (uint32_t)(uintptr_t)(v5);
  }
  else
  {
    *(uint32_t *)v3 = 0;
    *((uint32_t *)v3 + 1) = 0;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectNative::isSet  (binary VA: 0x18a32e0)
// Original: hkDataObjectNative::isSet
// ----------------------------------------------------------------------------
bool hkDataObjectNative::isSet(int a1, hkClassMember::Self *a2)
{
  typedef uint8_t _g4_t_v3[9];
  typedef uint8_t _g4_t_v4[16];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (9u + sizeof(_g4_t_v4)) > _g4_s1 ? (9u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 9u);

  hkClassMemberAccessor::Construct((hkClassMemberAccessor::Self *)v4, *(void **)(a1 + 12), a2);
  hkClassMemberAccessor::isOk((hkClassMemberAccessor::Self *)v3);
  return v3[0] != 0;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectNative::asString  (binary VA: 0x18a3340)
// Original: hkDataObjectNative::asString
// ----------------------------------------------------------------------------
unsigned int hkDataObjectNative::asString(int a1, hkClassMember::Self *a2)
{
  int Address;
  uint8_t v4[20];

  hkClassMemberAccessor::Construct((hkClassMemberAccessor::Self *)v4, *(void **)(a1 + 12), a2);
  Address = hkClassMemberAccessor::getAddress((hkClassMemberAccessor::Self *)v4);
  return hkVariantDataUtil::getString(*((uint8_t *)a2 + 12), Address);
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectNative::asInt  (binary VA: 0x18a33a0)
// Original: hkDataObjectNative::asInt
// ----------------------------------------------------------------------------
int64_t hkDataObjectNative::asInt(int a1, hkClassMember::Self *a2)
{
  uint8_t *Address;
  uint8_t v4[20];

  hkClassMemberAccessor::Construct((hkClassMemberAccessor::Self *)v4, *(void **)(a1 + 12), a2);
  Address = (uint8_t *)hkClassMemberAccessor::getAddress((hkClassMemberAccessor::Self *)v4);
  return hkVariantDataUtil::getInt(*((uint8_t *)a2 + 12), *((uint8_t *)a2 + 13), Address);
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectNative::asVec  (binary VA: 0x18a3400)
// Original: hkDataObjectNative::asVec
// ----------------------------------------------------------------------------
unsigned int hkDataObjectNative::asVec(int a1, hkClassMember::Self *a2)
{
  int v2;
  unsigned int Address;
  int CstyleArraySize;
  uint8_t v6[36];

  hkClassMemberAccessor::Construct((hkClassMemberAccessor::Self *)v6, *(void **)(a1 + 12), a2);
  v2 = *(uint32_t *)(a1 + 20);
  Address = hkClassMemberAccessor::getAddress((hkClassMemberAccessor::Self *)v6);
  CstyleArraySize = hkClassMember::getCstyleArraySize(a2);
  return hkVariantDataUtil::getReals(*((uint8_t *)a2 + 12), CstyleArraySize, Address, (int *)(v2 + 184));
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectNative::asReal  (binary VA: 0x18a3470)
// Original: hkDataObjectNative::asReal
// ----------------------------------------------------------------------------
void hkDataObjectNative::asReal(int a1, hkClassMember::Self *a2)
{
  int16_t *Address;
  uint8_t v3[20];

  hkClassMemberAccessor::Construct((hkClassMemberAccessor::Self *)v3, *(void **)(a1 + 12), a2);
  Address = (int16_t *)hkClassMemberAccessor::getAddress((hkClassMemberAccessor::Self *)v3);
  hkVariantDataUtil::getReal(*((uint8_t *)a2 + 12), Address);
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectNative::assign  (binary VA: 0x18a34d0)
// Original: hkDataObjectNative::assign
// ----------------------------------------------------------------------------
hkStringPtr::Self * hkDataObjectNative::assign(int a1, hkClassMember::Self *a2, hkString::Self *a3)
{
  hkStringPtr::Self *Address;
  uint8_t v5[20];

  hkClassMemberAccessor::Construct((hkClassMemberAccessor::Self *)v5, *(void **)(a1 + 12), a2);
  Address = (hkStringPtr::Self *)hkClassMemberAccessor::getAddress((hkClassMemberAccessor::Self *)v5);
  return hkVariantDataUtil::setString((hkStringPtr::Self *)*((uint8_t *)a2 + 12), Address, a3);
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectNative::assign  (binary VA: 0x18a3530)
// Original: hkDataObjectNative::assign
// ----------------------------------------------------------------------------
int hkDataObjectNative::assign(int a1, hkClassMember::Self *a2, int a3)
{
  int *Address;
  uint8_t v5[20];

  hkClassMemberAccessor::Construct((hkClassMemberAccessor::Self *)v5, *(void **)(a1 + 12), a2);
  Address = (int *)hkClassMemberAccessor::getAddress((hkClassMemberAccessor::Self *)v5);
  return hkVariantDataUtil::setReal(*((uint8_t *)a2 + 12), Address, a3);
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectNative::assign  (binary VA: 0x18a3590)
// Original: hkDataObjectNative::assign
// ----------------------------------------------------------------------------
int hkDataObjectNative::assign(int a1, hkClassMember::Self *a2, int16_t a3)
{
  int *Address;
  typedef int _g4_t_v5;
  typedef uint8_t _g4_t_v6[20];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v6)) > _g4_s1 ? (24u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);

  LOWORD(v5) = a3;
  hkClassMemberAccessor::Construct((hkClassMemberAccessor::Self *)v6, *(void **)(a1 + 12), a2);
  Address = (int *)hkClassMemberAccessor::getAddress((hkClassMemberAccessor::Self *)v6);
  return hkVariantDataUtil::setReal(*((uint8_t *)a2 + 12), Address, v5 << 16);
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectNative::assign  (binary VA: 0x18a3610)
// Original: hkDataObjectNative::assign
// ----------------------------------------------------------------------------
int hkDataObjectNative::assign(int a1, hkClassMember::Self *a2, unsigned int a3, int a4)
{
  unsigned int Address;
  int CstyleArraySize;
  uint8_t v7[20];

  hkClassMemberAccessor::Construct((hkClassMemberAccessor::Self *)v7, *(void **)(a1 + 12), a2);
  Address = hkClassMemberAccessor::getAddress((hkClassMemberAccessor::Self *)v7);
  CstyleArraySize = hkClassMember::getCstyleArraySize(a2);
  return hkVariantDataUtil::setReals(*((uint8_t *)a2 + 12), CstyleArraySize, a3, Address, a4);
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectNative::assign  (binary VA: 0x18a3680)
// Original: hkDataObjectNative::assign
// ----------------------------------------------------------------------------
int hkDataObjectNative::assign(int a1, int a2, hkDataObject_Value::Self *a3)
{
  return (int)(uintptr_t)(hkDataObjectImpl::assignValueImpl(a1, a2, a3));
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectNative::assign_ea18a36c0  (binary VA: 0x18a36c0)
// Original: hkDataObjectNative::assign
// ----------------------------------------------------------------------------
int * hkDataObjectNative::assign_ea18a36c0(int a1, hkClassMember::Self *a2, int a3)
{
  int *Address;
  int *result;
  int *v5;
  hkClass::Self *Class;
  typedef char _g4_t_v7;
  typedef uint8_t _g4_t_v8[28];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (15u + sizeof(_g4_t_v7)) > _g4_s0 ? (15u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 15u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);

  v7 = (*((uint8_t *)a2 + 17) & 2) == 0;
  hkClassMemberAccessor::Construct((hkClassMemberAccessor::Self *)v8, *(void **)(a1 + 12), a2);
  if ( a3 != 0 )
  {
    Address = (int *)hkClassMemberAccessor::getAddress((hkClassMemberAccessor::Self *)v8);
    return hkVariantDataUtil::setPointer(*(hkClass::Self **)(a3 + 16), *(uint32_t *)(a3 + 12), Address, v7);
  }
  else
  {
    result = (int *)hkClassMember::getClass(a2);
    if ( result != nullptr )
    {
      v5 = (int *)hkClassMemberAccessor::getAddress((hkClassMemberAccessor::Self *)v8);
      Class = (hkClass::Self *)hkClassMember::getClass(a2);
      return hkVariantDataUtil::setPointer(Class, 0, v5, v7);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::setObject  (binary VA: 0x18a3790)
// Original: hkDataArrayNative::setObject
// ----------------------------------------------------------------------------
int * hkDataArrayNative::setObject(hkDataArrayNative::Self *self, int a2, hkDataObjectImpl::Self *a3)
{
  int *result;

  result = (int *)self;
  if ( *((uint32_t *)self + 7) != 25 )
    return hkVariantDataUtil::setPointer(
             *((hkClass::Self **)a3 + 4),
             *((uint32_t *)a3 + 3),
             (int *)(a2 * *((uint32_t *)self + 6) + *((uint32_t *)self + 4)),
             1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectNative::assign  (binary VA: 0x18a37f0)
// Original: hkDataObjectNative::assign
// ----------------------------------------------------------------------------
char * hkDataObjectNative::assign(int a1, hkClassMember::Self *a2, int64_t a3)
{
  bool *Address;
  uint8_t v5[36];

  hkClassMemberAccessor::Construct((hkClassMemberAccessor::Self *)v5, *(void **)(a1 + 12), a2);
  Address = (bool *)hkClassMemberAccessor::getAddress((hkClassMemberAccessor::Self *)v5);
  return hkVariantDataUtil::setInt(
           (char *)*((uint8_t *)a2 + 12),
           (char *)*((uint8_t *)a2 + 13),
           Address,
           a3);
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectNative::assign_ea18a3870  (binary VA: 0x18a3870)
// Original: hkDataObjectNative::assign
// ----------------------------------------------------------------------------
char * hkDataObjectNative::assign_ea18a3870(int a1, hkClassMember::Self *a2, int a3)
{
  bool *Address;
  uint8_t v5[20];

  hkClassMemberAccessor::Construct((hkClassMemberAccessor::Self *)v5, *(void **)(a1 + 12), a2);
  Address = (bool *)hkClassMemberAccessor::getAddress((hkClassMemberAccessor::Self *)v5);
  return hkVariantDataUtil::setInt(
           (char *)*((uint8_t *)a2 + 12),
           (char *)*((uint8_t *)a2 + 13),
           Address,
           a3);
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldNative::getTypeFromMemberType  (binary VA: 0x18a38e0)
// Original: hkDataWorldNative::getTypeFromMemberType
// ----------------------------------------------------------------------------
int hkDataWorldNative::getTypeFromMemberType(int a1, int a2, int a3, hkClass::Self *a4, int a5)
{
  return (int)(uintptr_t)(hkDataObjectUtil::getTypeFromMemberType((hkTypeManager::Self *)(a1 + 48), a2, a3, a4, a5));
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldNative::findAllClasses  (binary VA: 0x18a3930)
// Original: hkDataWorldNative::findAllClasses
// ----------------------------------------------------------------------------
int hkDataWorldNative::findAllClasses(uint32_t *a1, hkMemoryAllocator::Self *a2)
{
  int result;
  int v3;
  int Name;
  int v5;
  int v6;
  typedef int (*_g4_t_v7)(uint32_t *, int);
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v9)) > _g4_s2 ? (16u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v10)) > _g4_s3 ? (20u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v11)) > _g4_s4 ? (24u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);

  result = a1[2];
  if ( result != 0 )
  {
    v9 = 0;
    v10 = 0;
    v11 = 0x80000000;
    v3 = 0;
    G4_VCALL<void>(result, 28, &v9);
    if ( v10 > 0 )
    {
      do
      {
        if ( (*hkClass::getFlags(*(hkClass::Self **)(v9 + 4 * v3)) & 1) == 0 )
        {
          v7 = *(int (**)(uint32_t *, int))(*a1 + 44);
          Name = hkClass::getName(*(hkClass::Self **)(v9 + 4 * v3));
          v5 = v7(a1, Name);
          v6 = *((uint32_t *)a2 + 1);
          if ( v6 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
          {
            hkArrayUtil::reserveMore((hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc, a2, 4, v5);
            v6 = *((uint32_t *)a2 + 1);
            v5 = v8;
          }
          *(uint32_t *)(*(uint32_t *)a2 + 4 * v6) = v5;
          ++*((uint32_t *)a2 + 1);
        }
        ++v3;
      }
      while ( v10 > v3 );
    }
    result = v11;
    v10 = 0;
    if ( v11 >= 0 )
      return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               v9,
               4 * v11);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataClassNative::getAllMemberInfo  (binary VA: 0x18a3a50)
// Original: hkDataClassNative::getAllMemberInfo
// ----------------------------------------------------------------------------
hkClass::Self * hkDataClassNative::getAllMemberInfo(int a1, uint32_t *a2)
{
  hkClass::Self *result;
  uint32_t *v3;
  int v4;
  int Class;
  int Attribute;
  uint32_t *v7;
  int CstyleArraySize;
  uint8_t *DeclaredMember;
  int v10;
  int v11;
  hkString::Self *Name;
  int v13;
  typedef int _g4_t_v14;
  typedef hkClass::Self *_g4_t_i;
  typedef int _g4_t_NumDeclaredMembers;
  typedef hkClass::Self *_g4_t_v17;
  typedef hkClass::Self *_g4_t_v18;
  typedef hkClass::Self *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint8_t _g4_t_v23[36];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_i)) > _g4_s1 ? (4u + sizeof(_g4_t_i)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_NumDeclaredMembers)) > _g4_s2 ? (8u + sizeof(_g4_t_NumDeclaredMembers)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v17)) > _g4_s3 ? (12u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v18)) > _g4_s4 ? (12u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v19)) > _g4_s5 ? (12u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v20)) > _g4_s6 ? (16u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v21)) > _g4_s7 ? (16u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v22)) > _g4_s8 ? (28u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v23)) > _g4_s9 ? (40u + sizeof(_g4_t_v23)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 4u);
  _g4_t_NumDeclaredMembers &NumDeclaredMembers = *reinterpret_cast<_g4_t_NumDeclaredMembers *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);

  v22 = *a2 + 16 * a2[1];
  result = *(hkClass::Self **)(a1 + 12);
  for ( i = result; result != nullptr; i = result )
  {
    NumDeclaredMembers = hkClass::getNumDeclaredMembers(result);
    v22 -= 16 * NumDeclaredMembers;
    v14 = 0;
    v3 = (uint32_t *)v22;
    v4 = 0;
    if ( NumDeclaredMembers > 0 )
    {
      do
      {
        DeclaredMember = (uint8_t *)hkClass::getDeclaredMember(i, v4);
        v10 = *(uint32_t *)(a1 + 16);
        v11 = G4_VCALL<int>(v10, 52);
        *v3 = *(uint32_t *)DeclaredMember;
        v3[1] = a1;
        if ( (DeclaredMember[17] & 4) == 0 || *(uint8_t *)(v10 + 44) != 0 )
        {
          Class = hkClassMember::getClass((hkClassMember::Self *)DeclaredMember);
          if ( Class != 0 )
          {
            v17 = (hkClass::Self *)Class;
            Attribute = hkClassMember::getAttribute((hkClassMember::Self *)DeclaredMember, "hk.DataObjectType");
            if ( Attribute != 0 )
            {
              hkClassMemberAccessor::Construct((hkClassMemberAccessor::Self *)v23, Attribute, "typeName");
              v20 = *(uint32_t *)(v10 + 8);
              v18 = *(hkClass::Self **)(*(uint32_t *)v20 + 24);
              v7 = (uint32_t *)hkClassMemberAccessor::asCstring((hkClassMemberAccessor::Self *)v23, 0);
              Class = ((int (*)(int, uint32_t))v18)(v20, *v7);
            }
            else
            {
              Name = (hkString::Self *)hkClass::getName(v17);
              v13 = hkString::strCmp(Name, "hkpMaxSizeMotion");
              Class = (int)(uintptr_t)(v17);
              if ( v13 == 0 )
                Class = (*(int (**)(uint32_t, const char *))(**(uint32_t **)(v10 + 8) + 24))(
                          *(uint32_t *)(v10 + 8),
                          "hkpMotion");
            }
          }
          v21 = Class;
          v19 = *(hkClass::Self **)(*(uint32_t *)v10 + 104);
          CstyleArraySize = hkClassMember::getCstyleArraySize((hkClassMember::Self *)DeclaredMember);
          v3[2] = ((int (*)(int, uint32_t, uint32_t, int, int))v19)(
                    v10,
                    DeclaredMember[12],
                    DeclaredMember[13],
                    v21,
                    CstyleArraySize);
        }
        else
        {
          v3[2] = *(uint32_t *)(v11 + 16);
        }
        v3 += 4;
        *(v3 - 1) = (uint32_t)(uintptr_t)(hkClass::getDeclaredDefault(i, v14++));
        v4 = v14;
      }
      while ( v14 != NumDeclaredMembers );
    }
    result = (hkClass::Self *)hkClass::getParent(i);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectNative::getAllMemberHandles  (binary VA: 0x18a3c80)
// Original: hkDataObjectNative::getAllMemberHandles
// ----------------------------------------------------------------------------
int hkDataObjectNative::getAllMemberHandles(int a1, int *a2)
{
  hkClass::Self *v2;
  int result;
  int v4;
  int v5;
  int NumDeclaredMembers;

  v2 = *(hkClass::Self **)(G4_VCALL<int>(a1, 12) + 12);
  result = *a2;
  v4 = *a2 + 4 * a2[1];
  if ( v2 != nullptr )
  {
    do
    {
      v5 = 0;
      NumDeclaredMembers = hkClass::getNumDeclaredMembers(v2);
      v4 -= 4 * NumDeclaredMembers;
      if ( NumDeclaredMembers > 0 )
      {
        do
        {
          *(uint32_t *)(v4 + 4 * v5) = hkClass::getMember(v2, v5);
          ++v5;
        }
        while ( v5 != NumDeclaredMembers );
      }
      result = hkClass::getParent(v2);
      v2 = (hkClass::Self *)result;
    }
    while ( result != 0 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::setSize  (binary VA: 0x18a3d10)
// Original: hkDataArrayNative::setSize
// ----------------------------------------------------------------------------
int hkDataArrayNative::setSize(hkDataArrayNative::Self *self, int a2)
{
  int result;

  result = G4_VCALL<int>(self, 24);
  if ( result != a2 )
  {
    result = hkVariantDataUtil::setArraySize(
               *(hkVariantDataUtil::Self **)(*((uint32_t *)self + 3) + 16),
               *((int **)self + 12),
               *((uint32_t *)self + 7),
               *((hkClass::Self **)self + 9),
               a2);
    *((uint32_t *)self + 4) = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldNative::findClass  (binary VA: 0x18a3d70)
// Original: hkDataWorldNative::findClass
// ----------------------------------------------------------------------------
int hkDataWorldNative::findClass(hkDataWorldNative::Self *self, hkString::Self *a2)
{
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v2;
  int result;
  int v4;
  int address;
  uint32_t *v6;
  uint32_t *v7;

  if ( a2 == nullptr )
  {
    v4 = 0;
    v2 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)((hkDataWorldNative::Self *)((char *)self + 20));
LABEL_5:
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v6 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                     *(uint32_t *)(*(uint32_t *)address + 44),
                     20);
    v6[1] = -65536;
    v6[2] = 0;
    v7 = v6;
    *v6 = ((uint32_t)(uintptr_t)&off_20A6D08);
    v6[3] = v4;
    v6[4] = (uint32_t)(uintptr_t)(self);
    hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v2, a2, (unsigned int)(uintptr_t)(v6));
    return (int)(uintptr_t)(v7);
  }
  v2 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)((hkDataWorldNative::Self *)((char *)self + 20));
  result = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
             (hkDataWorldNative::Self *)((char *)self + 20),
             a2,
             0);
  if ( result == 0 )
  {
    v4 = (*(int (**)(uint32_t, hkString::Self *))(**((uint32_t **)self + 2) + 24))(*((uint32_t *)self + 2), a2);
    goto LABEL_5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataClassNative::Destroy_ea18a3e50  (binary VA: 0x18a3e50)
// Original: hkDataClassNative::~hkDataClassNative
// ----------------------------------------------------------------------------
void hkDataClassNative::Destroy_ea18a3e50(hkDataClassNative::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 20;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::Destroy_ea18a3eb0  (binary VA: 0x18a3eb0)
// Original: hkDataArrayNative::~hkDataArrayNative
// ----------------------------------------------------------------------------
void hkDataArrayNative::Destroy_ea18a3eb0(hkDataArrayNative::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 52;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldNative::getContents  (binary VA: 0x18a3f10)
// Original: hkDataWorldNative::getContents
// ----------------------------------------------------------------------------
hkDataWorldNative::Self * hkDataWorldNative::getContents(hkDataWorldNative::Self *self, int a2)
{
  int address;
  int v3;
  int v4;
  uint16_t v5;
  int v6;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v3 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
         *(uint32_t *)(*(uint32_t *)address + 44),
         28);
  *(uint32_t *)(v3 + 4) = -65536;
  *(uint32_t *)(v3 + 8) = 0;
  *(uint32_t *)v3 = ((uint32_t)(uintptr_t)&off_20A6D48);
  hkClassAccessor::Construct(v3 + 12, a2 + 36);
  *(uint32_t *)(v3 + 20) = a2;
  *(uint8_t *)(v3 + 24) = 0;
  *(uint32_t *)self = v3;
  v4 = *(uint32_t *)(v3 + 4);
  LOWORD(v4) = 0;
  v5 = *(uint32_t *)(v3 + 4) + 1;
  ++*(uint32_t *)(v3 + 8);
  v6 = v4 | v5;
  *(uint32_t *)(v3 + 4) = v6;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectNative::asArray  (binary VA: 0x18a3fb0)
// Original: hkDataObjectNative::asArray
// ----------------------------------------------------------------------------
uint32_t * hkDataObjectNative::asArray(int a1, hkClassMember::Self *a2, int a3, int a4, int a5, int a6, int a7)
{
  uint16_t *v7;
  int v8;
  int v9;
  int ObjectSize;
  int v11;
  uint32_t *v12;
  int v13;
  int v15;
  hkClass::Self *v16;
  int v17;
  int v18;
  uint32_t *v19;
  int v20;
  hkClassMember::Self *ClassMember;
  int CstyleArraySize;
  hkClass::Self *Class;
  void *retaddr;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef char **_g4_t_v29;
  typedef char *_g4_t_Address;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef hkClass::Self *_g4_t_v34;
  typedef uint32_t _g4_t_v35[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v24)) > _g4_s0 ? (8u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v25)) > _g4_s1 ? (12u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v26)) > _g4_s2 ? (16u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v27)) > _g4_s3 ? (20u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v28)) > _g4_s4 ? (24u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v29)) > _g4_s5 ? (28u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_Address)) > _g4_s6 ? (32u + sizeof(_g4_t_Address)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v31)) > _g4_s7 ? (36u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v32)) > _g4_s8 ? (40u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v33)) > _g4_s9 ? (40u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v34)) > _g4_s10 ? (44u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v35)) > _g4_s11 ? (48u + sizeof(_g4_t_v35)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_Address &Address = *reinterpret_cast<_g4_t_Address *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 40u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 40u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 44u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 48u);

  hkClassMemberAccessor::Construct((hkClassMemberAccessor::Self *)v35, *(void **)(a1 + 12), a2);
  switch ( *((uint8_t *)a2 + 12) )
  {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x14:
    case 0x19:
    case 0x1E:
    case 0x20:
      Address = (char *)hkClassMemberAccessor::getAddress((hkClassMemberAccessor::Self *)v35);
      ClassMember = (hkClassMember::Self *)hkClassMemberAccessor::getClassMember((hkClassMemberAccessor::Self *)v35);
      CstyleArraySize = hkClassMember::getCstyleArraySize(ClassMember);
      v9 = *((uint8_t *)a2 + 12);
      v31 = CstyleArraySize;
      Class = (hkClass::Self *)hkClassMember::getClass(a2);
      v34 = Class;
      if ( v9 == 25 )
        ObjectSize = hkClass::getObjectSize(Class);
      else
        ObjectSize = *((int16_t *)hkClassMember::getClassMemberTypeProperties(v9) + 4);
      v29 = nullptr;
      goto LABEL_6;
    case 0x16:
    case 0x1A:
      v29 = (char **)hkClassMemberAccessor::getAddress((hkClassMemberAccessor::Self *)v35);
      Address = *v29;
      v31 = (int)(uintptr_t)(v29[1]);
      v17 = hkClassMember::getClass(a2);
      v9 = *((uint8_t *)a2 + 13);
      v34 = (hkClass::Self *)v17;
      ObjectSize = *((int16_t *)hkClassMember::getClassMemberTypeProperties(v9) + 4);
      if ( v9 == 0 )
        goto LABEL_10;
      goto LABEL_4;
    case 0x1B:
      v15 = hkClassMemberAccessor::getAddress((hkClassMemberAccessor::Self *)v35);
      Address = *(char **)(v15 + 4);
      v29 = (char **)(v15 + 4);
      v31 = *(uint32_t *)(v15 + 8);
      v16 = *(hkClass::Self **)hkClassMemberAccessor::getAddress((hkClassMemberAccessor::Self *)v35);
      v34 = v16;
      if ( v16 != nullptr )
      {
        v9 = 25;
        ObjectSize = hkClass::getObjectSize(v16);
      }
      else
      {
        ObjectSize = 0;
        v9 = 0;
      }
      goto LABEL_6;
    case 0x22:
      v7 = (uint16_t *)hkClassMemberAccessor::getAddress((hkClassMemberAccessor::Self *)v35);
      Address = (char *)v7 + v7[1];
      v31 = *v7;
      v8 = hkClassMember::getClass(a2);
      v9 = *((uint8_t *)a2 + 13);
      v34 = (hkClass::Self *)v8;
      ObjectSize = *((int16_t *)hkClassMember::getClassMemberTypeProperties(v9) + 4);
      if ( v9 != 0 )
      {
        v29 = nullptr;
LABEL_4:
        if ( ObjectSize == -1 )
          ObjectSize = hkClass::getObjectSize(v34);
LABEL_6:
        v33 = ObjectSize;
        v11 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        v12 = (uint32_t *)(*(int (**)(uint32_t, int, int, int, int, int, int, char **, char *, int, int, hkClass::Self *, uint32_t, uint32_t, uint32_t, uint32_t))(**(uint32_t **)(*(uint32_t *)v11 + 44) + 8))(
                          *(uint32_t *)(*(uint32_t *)v11 + 44),
                          52,
                          v24,
                          v25,
                          v26,
                          v27,
                          v28,
                          v29,
                          Address,
                          v31,
                          v33,
                          v34,
                          v35[0],
                          v35[1],
                          v35[2],
                          v35[3]);
        v13 = *(uint32_t *)(a1 + 20);
        *v12 = ((uint32_t)(uintptr_t)&off_20A6DE8);
        v12[6] = a6;
        v12[4] = a4;
        v12[5] = a5;
        v12[1] = -65536;
        v12[2] = 0;
        v12[3] = v13;
        v12[7] = v9;
        v12[8] = 0;
        v12[9] = a7;
        v12[11] = 0;
        v12[12] = a3;
        retaddr = nullptr;
        v12[10] = G4_VCALL<int>(v13, 104, v9, 0, a7);
        return v12;
      }
      else
      {
LABEL_10:
        v18 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        v19 = (uint32_t *)(*(int (**)(uint32_t, int, int, int, int, int, int, char **, char *, int, int, hkClass::Self *, uint32_t, uint32_t, uint32_t, uint32_t))(**(uint32_t **)(*(uint32_t *)v18 + 44) + 8))(
                          *(uint32_t *)(*(uint32_t *)v18 + 44),
                          52,
                          v24,
                          v25,
                          v26,
                          v27,
                          v28,
                          v29,
                          Address,
                          v31,
                          v32,
                          v34,
                          v35[0],
                          v35[1],
                          v35[2],
                          v35[3]);
        v20 = *(uint32_t *)(a1 + 20);
        v19[1] = -65536;
        v19[2] = 0;
        *v19 = ((uint32_t)(uintptr_t)&off_20A6DE8);
        v19[3] = v20;
        v19[4] = 0;
        v19[5] = 0;
        v19[6] = 0;
        v19[7] = 0;
        v19[8] = 0;
        v19[9] = 0;
        v19[11] = 0;
        v19[12] = 0;
        retaddr = nullptr;
        v19[10] = G4_VCALL<int>(v20, 104, 0, 0, 0);
        return v19;
      }
    default:
      v29 = nullptr;
      ObjectSize = 0;
      Address = nullptr;
      v31 = 0;
      v9 = 0;
      v34 = nullptr;
      goto LABEL_6;
  }
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectImpl::Destroy_ea18a4300  (binary VA: 0x18a4300)
// Original: hkDataObjectImpl::~hkDataObjectImpl
// ----------------------------------------------------------------------------
void hkDataObjectImpl::Destroy_ea18a4300(hkDataObjectImpl::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 12;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::swizzleObjectMember  (binary VA: 0x18a4360)
// Original: hkDataArrayNative::swizzleObjectMember
// ----------------------------------------------------------------------------
uint32_t * hkDataArrayNative::swizzleObjectMember(hkClass::Self **self, char *a2)
{
  hkString::Self **MemberByName;
  int v3;
  int address;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int CstyleArraySize;
  int Class;
  int v12;
  int v13;

  MemberByName = hkClass::getMemberByName(*(self + 9), a2);
  v3 = (int)(uintptr_t)(*(self + 4)) + *((uint16_t *)MemberByName + 9);
  v12 = *((uint8_t *)MemberByName + 12);
  v13 = *((uint8_t *)MemberByName + 13);
  Class = hkClassMember::getClass((hkClassMember::Self *)MemberByName);
  CstyleArraySize = hkClassMember::getCstyleArraySize((hkClassMember::Self *)MemberByName);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v5 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   52);
  v6 = (int)(uintptr_t)(*(self + 3));
  v7 = (int)(uintptr_t)(*(self + 6));
  v8 = (int)(uintptr_t)(*(self + 5));
  *v5 = ((uint32_t)(uintptr_t)&off_20A6DE8);
  v5[4] = v3;
  v5[5] = v8;
  v5[6] = v7;
  v5[3] = v6;
  v5[8] = v13;
  v5[9] = Class;
  v5[1] = -65536;
  v5[2] = 0;
  v5[7] = v12;
  v5[11] = CstyleArraySize;
  v5[12] = 0;
  v5[10] = G4_VCALL<int>(v6, 104, v12, v13, Class, CstyleArraySize);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::asArray  (binary VA: 0x18a4470)
// Original: hkDataArrayNative::asArray
// ----------------------------------------------------------------------------
uint32_t * hkDataArrayNative::asArray(hkDataArrayNative::Self *self, int a2)
{
  uint32_t *v2;
  int address;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  uint32_t *result;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  int ObjectSize;
  int v15;
  int v16;
  int v17;
  int v18;

  v2 = (uint32_t *)(*((uint32_t *)self + 4) + *((uint32_t *)self + 6) * a2);
  if ( *((uint32_t *)self + 11) != 0 )
  {
    if ( *((uint32_t *)self + 7) == 25 )
      ObjectSize = hkClass::getObjectSize(*((hkClass::Self **)self + 9));
    else
      ObjectSize = *((int16_t *)hkClassMember::getClassMemberTypeProperties(*((uint32_t *)self + 7)) + 4);
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v4 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                     *(uint32_t *)(*(uint32_t *)address + 44),
                     52);
    v16 = *((uint32_t *)self + 7);
    v5 = *((uint32_t *)self + 9);
    v6 = *((uint32_t *)self + 8);
    v18 = *((uint32_t *)self + 11);
    v7 = *((uint32_t *)self + 3);
    v4[4] = (uint32_t)(uintptr_t)(v2);
    *v4 = ((uint32_t)(uintptr_t)&off_20A6DE8);
    v4[5] = v18;
    v4[1] = -65536;
    v4[2] = 0;
    v4[3] = v7;
    v4[6] = ObjectSize;
    v4[7] = v16;
    v4[8] = v6;
    v4[9] = v5;
    v4[11] = 0;
    v4[12] = 0;
    v4[10] = G4_VCALL<int>(v7, 104, v16, v6, v5, 0);
    return v4;
  }
  else
  {
    result = nullptr;
    if ( *((uint32_t *)self + 7) == 22 )
    {
      v15 = hkVariantDataUtil::calcElementSize(*((uint32_t *)self + 8), 0, *((hkClass::Self **)self + 9), 0);
      v9 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      v10 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v9 + 44) + 8))(
                        *(uint32_t *)(*(uint32_t *)v9 + 44),
                        52);
      v11 = *((uint32_t *)self + 9);
      v12 = *((uint32_t *)self + 8);
      v17 = v2[1];
      v13 = *((uint32_t *)self + 3);
      v10[4] = *v2;
      *v10 = ((uint32_t)(uintptr_t)&off_20A6DE8);
      v10[5] = v17;
      v10[1] = -65536;
      v10[2] = 0;
      v10[3] = v13;
      v10[6] = v15;
      v10[7] = v12;
      v10[8] = 0;
      v10[9] = v11;
      v10[11] = 0;
      v10[12] = 0;
      v10[10] = G4_VCALL<int>(v13, 104, v12, 0, v11, 0);
      return v10;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayImpl::Destroy_ea18a4660  (binary VA: 0x18a4660)
// Original: hkDataArrayImpl::~hkDataArrayImpl
// ----------------------------------------------------------------------------
void hkDataArrayImpl::Destroy_ea18a4660(hkDataArrayImpl::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 12;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkDataClassImpl::Destroy_ea18a46c0  (binary VA: 0x18a46c0)
// Original: hkDataClassImpl::~hkDataClassImpl
// ----------------------------------------------------------------------------
void hkDataClassImpl::Destroy_ea18a46c0(hkDataClassImpl::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 12;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkDataRefCounted::Destroy_ea18a4720  (binary VA: 0x18a4720)
// Original: hkDataRefCounted::~hkDataRefCounted
// ----------------------------------------------------------------------------
void hkDataRefCounted::Destroy_ea18a4720(hkDataRefCounted::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 12;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldNative::findObject  (binary VA: 0x18a4780)
// Original: hkDataWorldNative::findObject
// ----------------------------------------------------------------------------
int * hkDataWorldNative::findObject(int *a1, int a2, void **a3)
{
  int address;
  int v4;
  const hkClass::Self *v5;
  int v6;
  int16_t v7;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v4 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
         *(uint32_t *)(*(uint32_t *)address + 44),
         28);
  *(uint32_t *)(v4 + 4) = -65536;
  *(uint32_t *)(v4 + 8) = 0;
  *(uint32_t *)v4 = ((uint32_t)(uintptr_t)&off_20A6D48);
  v5 = (const hkClass::Self *)a3[1];
  if ( v5 == nullptr )
    v5 = (const hkClass::Self *)(*(int (**)(uint32_t, void *))(**(uint32_t **)(a2 + 12) + 28))(*(uint32_t *)(a2 + 12), *a3);
  hkClassAccessor::Construct((hkClassAccessor::Self *)(v4 + 12), *a3, v5);
  *(uint8_t *)(v4 + 24) = 0;
  *(uint32_t *)(v4 + 20) = a2;
  *a1 = v4;
  v6 = *(uint32_t *)(v4 + 4);
  ++*(uint32_t *)(v4 + 8);
  v7 = v6;
  LOWORD(v6) = 0;
  *(uint32_t *)(v4 + 4) = v6 | (uint16_t)(v7 + 1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::setAll  (binary VA: 0x18a4840)
// Original: hkDataArrayNative::setAll
// ----------------------------------------------------------------------------
void hkDataArrayNative::setAll(hkString::Self **self, void *a2, int a3)
{
  char *ClassMemberTypeProperties;

  if ( *(self + 7) == (hkString::Self *)((char *)&loc_6 + 1) )
  {
    (*((void (**)(hkString::Self **, int))*self + 5))(self, a3);
    ClassMemberTypeProperties = hkClassMember::getClassMemberTypeProperties(7);
    hkString::memCpy(*(self + 4), a2, a3 * *((int16_t *)ClassMemberTypeProperties + 4));
  }
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::setAll  (binary VA: 0x18a48b0)
// Original: hkDataArrayNative::setAll
// ----------------------------------------------------------------------------
void hkDataArrayNative::setAll(hkString::Self **self, int64_t *a2, int a3)
{
  char *ClassMemberTypeProperties;

  if ( *(self + 7) == (hkString::Self *)byte_9 )
  {
    (*((void (**)(hkString::Self **, int))*self + 5))(self, a3);
    ClassMemberTypeProperties = hkClassMember::getClassMemberTypeProperties(9);
    hkString::memCpy(*(self + 4), a2, a3 * *((int16_t *)ClassMemberTypeProperties + 4));
  }
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::setAll  (binary VA: 0x18a4920)
// Original: hkDataArrayNative::setAll
// ----------------------------------------------------------------------------
void hkDataArrayNative::setAll(hkString::Self **self, uint64_t *a2, int a3)
{
  char *ClassMemberTypeProperties;

  if ( *(self + 7) == (hkString::Self *)&byte_9[1] )
  {
    (*((void (**)(hkString::Self **, int))*self + 5))(self, a3);
    ClassMemberTypeProperties = hkClassMember::getClassMemberTypeProperties(10);
    hkString::memCpy(*(self + 4), a2, a3 * *((int16_t *)ClassMemberTypeProperties + 4));
  }
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::setAll_ea18a4990  (binary VA: 0x18a4990)
// Original: hkDataArrayNative::setAll
// ----------------------------------------------------------------------------
void hkDataArrayNative::setAll_ea18a4990(hkString::Self **self, void *a2, int a3)
{
  char *ClassMemberTypeProperties;

  if ( *(self + 7) == (hkString::Self *)byte_8 )
  {
    (*((void (**)(hkString::Self **, int))*self + 5))(self, a3);
    ClassMemberTypeProperties = hkClassMember::getClassMemberTypeProperties(8);
    hkString::memCpy(*(self + 4), a2, a3 * *((int16_t *)ClassMemberTypeProperties + 4));
  }
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::setAll  (binary VA: 0x18a4a00)
// Original: hkDataArrayNative::setAll
// ----------------------------------------------------------------------------
void hkDataArrayNative::setAll(hkString::Self **self, char *a2, int a3)
{
  char *ClassMemberTypeProperties;

  if ( *(self + 7) == (hkString::Self *)((char *)&dword_0 + 3) )
  {
    (*((void (**)(hkString::Self **, int))*self + 5))(self, a3);
    ClassMemberTypeProperties = hkClassMember::getClassMemberTypeProperties(3);
    hkString::memCpy(*(self + 4), a2, a3 * *((int16_t *)ClassMemberTypeProperties + 4));
  }
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::setAll  (binary VA: 0x18a4a70)
// Original: hkDataArrayNative::setAll
// ----------------------------------------------------------------------------
void hkDataArrayNative::setAll(hkString::Self **self, int16_t *a2, int a3)
{
  char *ClassMemberTypeProperties;

  if ( *(self + 7) == (hkString::Self *)((char *)&loc_4 + 1) )
  {
    (*((void (**)(hkString::Self **, int))*self + 5))(self, a3);
    ClassMemberTypeProperties = hkClassMember::getClassMemberTypeProperties(5);
    hkString::memCpy(*(self + 4), a2, a3 * *((int16_t *)ClassMemberTypeProperties + 4));
  }
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::setAll  (binary VA: 0x18a4ae0)
// Original: hkDataArrayNative::setAll
// ----------------------------------------------------------------------------
void hkDataArrayNative::setAll(hkString::Self **self, uint16_t *a2, int a3)
{
  char *ClassMemberTypeProperties;

  if ( *(self + 7) == (hkString::Self *)&loc_6 )
  {
    (*((void (**)(hkString::Self **, int))*self + 5))(self, a3);
    ClassMemberTypeProperties = hkClassMember::getClassMemberTypeProperties(6);
    hkString::memCpy(*(self + 4), a2, a3 * *((int16_t *)ClassMemberTypeProperties + 4));
  }
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::setAll  (binary VA: 0x18a4b50)
// Original: hkDataArrayNative::setAll
// ----------------------------------------------------------------------------
void hkDataArrayNative::setAll(int a1, void *a2, int a3)
{
  char *ClassMemberTypeProperties;

  if ( *(uint32_t *)(a1 + 28) == 1 )
  {
    G4_VCALL<void>(a1, 20, a3);
    ClassMemberTypeProperties = hkClassMember::getClassMemberTypeProperties(1);
    hkString::memCpy(*(hkString::Self **)(a1 + 16), a2, a3 * *((int16_t *)ClassMemberTypeProperties + 4));
  }
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::setAll_ea18a4bc0  (binary VA: 0x18a4bc0)
// Original: hkDataArrayNative::setAll
// ----------------------------------------------------------------------------
void hkDataArrayNative::setAll_ea18a4bc0(hkString::Self **self, char *a2, int a3)
{
  char *ClassMemberTypeProperties;

  if ( *(self + 7) == (hkString::Self *)((char *)&dword_0 + 2) )
  {
    (*((void (**)(hkString::Self **, int))*self + 5))(self, a3);
    ClassMemberTypeProperties = hkClassMember::getClassMemberTypeProperties(2);
    hkString::memCpy(*(self + 4), a2, a3 * *((int16_t *)ClassMemberTypeProperties + 4));
  }
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::setAll  (binary VA: 0x18a4c30)
// Original: hkDataArrayNative::setAll
// ----------------------------------------------------------------------------
void hkDataArrayNative::setAll(hkString::Self **self, float *a2, int a3)
{
  char *ClassMemberTypeProperties;

  if ( *(self + 7) == (hkString::Self *)&byte_9[2] )
  {
    (*((void (**)(hkString::Self **, int))*self + 5))(self, a3);
    ClassMemberTypeProperties = hkClassMember::getClassMemberTypeProperties(11);
    hkString::memCpy(*(self + 4), a2, a3 * *((int16_t *)ClassMemberTypeProperties + 4));
  }
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::setAll_ea18a4ca0  (binary VA: 0x18a4ca0)
// Original: hkDataArrayNative::setAll
// ----------------------------------------------------------------------------
void hkDataArrayNative::setAll_ea18a4ca0(int a1, void *a2, int a3)
{
  char *ClassMemberTypeProperties;

  if ( *(uint32_t *)(a1 + 28) == 32 )
  {
    G4_VCALL<void>(a1, 20, a3);
    ClassMemberTypeProperties = hkClassMember::getClassMemberTypeProperties(32);
    hkString::memCpy(*(hkString::Self **)(a1 + 16), a2, a3 * *((int16_t *)ClassMemberTypeProperties + 4));
  }
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectNative::Destroy  (binary VA: 0x18a4d10)
// Original: hkDataObjectNative::~hkDataObjectNative
// ----------------------------------------------------------------------------
void hkDataObjectNative::Destroy(hkDataObjectNative::Self *self)
{
  bool v1;
  int v2;
  int v3;
  int32_t v4; // kr00_4
  int32_t v5;
  int32_t v6; // ett

  v1 = *((uint8_t *)self + 24) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6D48);
  if ( !v1 )
  {
    v2 = *((uint32_t *)self + 3);
    if ( *(uint16_t *)(v2 + 6) != 0 )
    {
      do
      {
        v4 = *(uint32_t *)(v2 + 4);
        HIWORD(v3) = HIWORD(v4);
        LOWORD(v3) = 0;
        v5 = v3 | (uint16_t)(v4 - 1);
        v6 = v4;
      }
      while ( v6 != __sync_val_compare_and_swap((volatile int32_t *)(v2 + 4), v6, v5) );
      if ( (uint16_t)v5 == 0 )
        G4_VCALL<void>(v2, 16);
    }
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectNative::getMemberInfo  (binary VA: 0x18a4d90)
// Original: hkDataObjectNative::getMemberInfo
// ----------------------------------------------------------------------------
int hkDataObjectNative::getMemberInfo(int a1, hkClassMember::Self *a2, uint32_t *a3)
{
  int v3;
  int v4;
  int v5;
  int Class;
  int Attribute;
  uint32_t *v8;
  int CstyleArraySize;
  int result;
  hkString::Self *Name;
  int v12;
  typedef hkClass::Self *_g4_t_v13;
  typedef hkClass::Self *_g4_t_v14;
  typedef hkClass::Self *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint8_t _g4_t_v18[36];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v14)) > _g4_s1 ? (4u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v15)) > _g4_s2 ? (4u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v16)) > _g4_s3 ? (8u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v17)) > _g4_s4 ? (8u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v18)) > _g4_s5 ? (24u + sizeof(_g4_t_v18)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);

  v3 = *(uint32_t *)(a1 + 20);
  v4 = G4_VCALL<int>(v3, 52);
  v5 = *(uint32_t *)a2;
  a3[1] = 0;
  *a3 = v5;
  if ( (*((uint8_t *)a2 + 17) & 4) == 0 || *(uint8_t *)(v3 + 44) != 0 )
  {
    Class = hkClassMember::getClass(a2);
    if ( Class != 0 )
    {
      v13 = (hkClass::Self *)Class;
      Attribute = hkClassMember::getAttribute(a2, "hk.DataObjectType");
      if ( Attribute != 0 )
      {
        hkClassMemberAccessor::Construct((hkClassMemberAccessor::Self *)v18, Attribute, "typeName");
        v16 = *(uint32_t *)(v3 + 8);
        v14 = *(hkClass::Self **)(*(uint32_t *)v16 + 24);
        v8 = (uint32_t *)hkClassMemberAccessor::asCstring((hkClassMemberAccessor::Self *)v18, 0);
        Class = ((int (*)(int, uint32_t))v14)(v16, *v8);
      }
      else
      {
        Name = (hkString::Self *)hkClass::getName(v13);
        v12 = hkString::strCmp(Name, "hkpMaxSizeMotion");
        Class = (int)(uintptr_t)(v13);
        if ( v12 == 0 )
          Class = (*(int (**)(uint32_t, const char *))(**(uint32_t **)(v3 + 8) + 24))(
                    *(uint32_t *)(v3 + 8),
                    "hkpMotion");
      }
    }
    v17 = Class;
    v15 = *(hkClass::Self **)(*(uint32_t *)v3 + 104);
    CstyleArraySize = hkClassMember::getCstyleArraySize(a2);
    result = ((int (*)(int, uint32_t, uint32_t, int, int))v15)(
               v3,
               *((uint8_t *)a2 + 12),
               *((uint8_t *)a2 + 13),
               v17,
               CstyleArraySize);
    a3[2] = result;
  }
  else
  {
    result = *(uint32_t *)(v4 + 16);
    a3[2] = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataClassNative::getDeclaredMemberInfo  (binary VA: 0x18a4f10)
// Original: hkDataClassNative::getDeclaredMemberInfo
// ----------------------------------------------------------------------------
char * hkDataClassNative::getDeclaredMemberInfo(int a1, int a2, uint32_t *a3)
{
  int DeclaredMember;
  int v4;
  uint8_t *v5;
  int v6;
  int Class;
  int Attribute;
  uint32_t *v9;
  int CstyleArraySize;
  char *result;
  hkString::Self *Name;
  int v13;
  typedef hkClass::Self *_g4_t_v14;
  typedef hkClass::Self *_g4_t_v15;
  typedef hkClass::Self *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint8_t _g4_t_v19[36];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v14)) > _g4_s0 ? (4u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v15)) > _g4_s1 ? (4u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v16)) > _g4_s2 ? (4u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v17)) > _g4_s3 ? (8u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v18)) > _g4_s4 ? (8u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v19)) > _g4_s5 ? (24u + sizeof(_g4_t_v19)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);

  DeclaredMember = hkClass::getDeclaredMember(*(hkClass::Self **)(a1 + 12), a2);
  v4 = *(uint32_t *)(a1 + 16);
  v5 = (uint8_t *)DeclaredMember;
  v6 = G4_VCALL<int>(v4, 52);
  *a3 = *(uint32_t *)v5;
  a3[1] = a1;
  if ( (v5[17] & 4) == 0 || *(uint8_t *)(v4 + 44) != 0 )
  {
    Class = hkClassMember::getClass((hkClassMember::Self *)v5);
    if ( Class != 0 )
    {
      v14 = (hkClass::Self *)Class;
      Attribute = hkClassMember::getAttribute((hkClassMember::Self *)v5, "hk.DataObjectType");
      if ( Attribute != 0 )
      {
        hkClassMemberAccessor::Construct((hkClassMemberAccessor::Self *)v19, Attribute, "typeName");
        v17 = *(uint32_t *)(v4 + 8);
        v15 = *(hkClass::Self **)(*(uint32_t *)v17 + 24);
        v9 = (uint32_t *)hkClassMemberAccessor::asCstring((hkClassMemberAccessor::Self *)v19, 0);
        Class = ((int (*)(int, uint32_t))v15)(v17, *v9);
      }
      else
      {
        Name = (hkString::Self *)hkClass::getName(v14);
        v13 = hkString::strCmp(Name, "hkpMaxSizeMotion");
        Class = (int)(uintptr_t)(v14);
        if ( v13 == 0 )
          Class = (*(int (**)(uint32_t, const char *))(**(uint32_t **)(v4 + 8) + 24))(
                    *(uint32_t *)(v4 + 8),
                    "hkpMotion");
      }
    }
    v18 = Class;
    v16 = *(hkClass::Self **)(*(uint32_t *)v4 + 104);
    CstyleArraySize = hkClassMember::getCstyleArraySize((hkClassMember::Self *)v5);
    a3[2] = ((int (*)(int, uint32_t, uint32_t, int, int))v16)(v4, v5[12], v5[13], v18, CstyleArraySize);
  }
  else
  {
    a3[2] = *(uint32_t *)(v6 + 16);
  }
  result = hkClass::getDeclaredDefault(*(hkClass::Self **)(a1 + 12), a2);
  a3[3] = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataClassNative::getMemberInfo  (binary VA: 0x18a50b0)
// Original: hkDataClassNative::getMemberInfo
// ----------------------------------------------------------------------------
const hkClassMember::Self * hkDataClassNative::getMemberInfo(int a1, const void **a2, uint32_t *a3)
{
  int Member;
  int v4;
  uint8_t *v5;
  int v6;
  int Class;
  int Attribute;
  uint32_t *v9;
  int CstyleArraySize;
  const hkClassMember::Self *result;
  hkString::Self *Name;
  int v13;
  typedef hkClass::Self *_g4_t_v14;
  typedef hkClass::Self *_g4_t_v15;
  typedef hkClass::Self *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint8_t _g4_t_v19[36];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v14)) > _g4_s0 ? (4u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v15)) > _g4_s1 ? (4u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v16)) > _g4_s2 ? (4u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v17)) > _g4_s3 ? (8u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v18)) > _g4_s4 ? (8u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v19)) > _g4_s5 ? (24u + sizeof(_g4_t_v19)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);

  Member = hkClass::getMember(*(hkClass::Self **)(a1 + 12), (int)(uintptr_t)(a2));
  v4 = *(uint32_t *)(a1 + 16);
  v5 = (uint8_t *)Member;
  v6 = G4_VCALL<int>(v4, 52);
  *a3 = *(uint32_t *)v5;
  a3[1] = a1;
  if ( (v5[17] & 4) == 0 || *(uint8_t *)(v4 + 44) != 0 )
  {
    Class = hkClassMember::getClass((hkClassMember::Self *)v5);
    if ( Class != 0 )
    {
      v14 = (hkClass::Self *)Class;
      Attribute = hkClassMember::getAttribute((hkClassMember::Self *)v5, "hk.DataObjectType");
      if ( Attribute != 0 )
      {
        hkClassMemberAccessor::Construct((hkClassMemberAccessor::Self *)v19, Attribute, "typeName");
        v17 = *(uint32_t *)(v4 + 8);
        v15 = *(hkClass::Self **)(*(uint32_t *)v17 + 24);
        v9 = (uint32_t *)hkClassMemberAccessor::asCstring((hkClassMemberAccessor::Self *)v19, 0);
        Class = ((int (*)(int, uint32_t))v15)(v17, *v9);
      }
      else
      {
        Name = (hkString::Self *)hkClass::getName(v14);
        v13 = hkString::strCmp(Name, "hkpMaxSizeMotion");
        Class = (int)(uintptr_t)(v14);
        if ( v13 == 0 )
          Class = (*(int (**)(uint32_t, const char *))(**(uint32_t **)(v4 + 8) + 24))(
                    *(uint32_t *)(v4 + 8),
                    "hkpMotion");
      }
    }
    v18 = Class;
    v16 = *(hkClass::Self **)(*(uint32_t *)v4 + 104);
    CstyleArraySize = hkClassMember::getCstyleArraySize((hkClassMember::Self *)v5);
    a3[2] = ((int (*)(int, uint32_t, uint32_t, int, int))v16)(v4, v5[12], v5[13], v18, CstyleArraySize);
  }
  else
  {
    a3[2] = *(uint32_t *)(v6 + 16);
  }
  result = hkClass::getDefault(*(hkClass::Self **)(a1 + 12), a2);
  a3[3] = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectNative::Destroy_ea18a5250  (binary VA: 0x18a5250)
// Original: hkDataObjectNative::~hkDataObjectNative
// ----------------------------------------------------------------------------
void hkDataObjectNative::Destroy_ea18a5250(hkDataObjectNative::Self *self)
{
  bool v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int32_t v6; // kr00_4
  int32_t v7;
  int32_t v8; // ett

  v1 = *((uint8_t *)self + 24) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6D48);
  if ( !v1 )
  {
    v4 = *((uint32_t *)self + 3);
    if ( *(uint16_t *)(v4 + 6) != 0 )
    {
      do
      {
        v6 = *(uint32_t *)(v4 + 4);
        HIWORD(v5) = HIWORD(v6);
        LOWORD(v5) = 0;
        v7 = v5 | (uint16_t)(v6 - 1);
        v8 = v6;
      }
      while ( v8 != __sync_val_compare_and_swap((volatile int32_t *)(v4 + 4), v8, v7) );
      if ( (uint16_t)v7 == 0 )
        G4_VCALL<void>(v4, 16);
    }
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
  v2 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v3 = 28;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v3 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v2, 12, self, v3);
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldNative::Construct  (binary VA: 0x18a5310)
// Original: hkDataWorldNative::hkDataWorldNative
// ----------------------------------------------------------------------------
int hkDataWorldNative::Construct(int a1, char a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int32_t v7; // kr00_4
  int32_t v8;
  int32_t v9; // ett
  int v10;
  int v11;
  int v12;
  int v13;
  int32_t v14; // kr04_4
  int32_t v15;
  int32_t v16; // ett
  int result;
  int v18;
  int v19;
  int v20;
  int32_t v21; // kr08_4
  int32_t v22;
  int32_t v23; // ett
  int v24;
  int32_t v25; // kr0C_4
  volatile int32_t *v26;
  int v27;
  int32_t v28; // kr10_4
  int v29;
  int32_t v30; // kr14_4

  v2 = a1;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A6EA8);
  *(uint32_t *)(a1 + 4) = -65535;
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)(a1 + 16) = 0;
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Construct((hkString::Self **)(a1 + 20));
  *(uint8_t *)(a1 + 44) = a2;
  hkTypeManager::Construct((hkTypeManager::Self *)(a1 + 48));
  *(uint32_t *)(a1 + 184) = 0;
  *(uint32_t *)(a1 + 188) = 0;
  *(uint32_t *)(a1 + 192) = 0x80000000;
  *(uint32_t *)(a1 + 40) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  v3 = (*(int (**)(uint32_t *, uint8_t))(*hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance + 28))(
         hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance,
         0);
  v4 = v3;
  if ( v3 != 0 && *(uint16_t *)(v3 + 6) != 0 )
  {
    do
    {
      v25 = *(uint32_t *)(v3 + 4);
      HIWORD(v24) = HIWORD(v25);
      LOWORD(v24) = 0;
    }
    while ( v25 != __sync_val_compare_and_swap(
                     (volatile int32_t *)(v3 + 4),
                     v25,
                     v24 | (uint16_t)(v25 + 1)) );
  }
  v5 = *(uint32_t *)(a1 + 12);
  if ( v5 != 0 && *(uint16_t *)(v5 + 6) != 0 )
  {
    do
    {
      v7 = *(uint32_t *)(v5 + 4);
      HIWORD(v6) = HIWORD(v7);
      LOWORD(v6) = 0;
      v8 = v6 | (uint16_t)(v7 - 1);
      v9 = v7;
    }
    while ( v9 != __sync_val_compare_and_swap((volatile int32_t *)(v5 + 4), v9, v8) );
    if ( (uint16_t)v8 == 0 )
      G4_VCALL<void>(v5, 16);
  }
  *(uint32_t *)(a1 + 12) = v4;
  v10 = (*(int (**)(uint32_t *))(*hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance + 24))(hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance);
  v11 = v10;
  if ( v10 != 0 && *(uint16_t *)(v10 + 6) != 0 )
  {
    do
    {
      v30 = *(uint32_t *)(v10 + 4);
      HIWORD(v29) = HIWORD(v30);
      LOWORD(v29) = 0;
    }
    while ( v30 != __sync_val_compare_and_swap(
                     (volatile int32_t *)(v10 + 4),
                     v30,
                     v29 | (uint16_t)(v30 + 1)) );
  }
  v12 = *(uint32_t *)(a1 + 8);
  if ( v12 != 0 && *(uint16_t *)(v12 + 6) != 0 )
  {
    do
    {
      v14 = *(uint32_t *)(v12 + 4);
      HIWORD(v13) = HIWORD(v14);
      LOWORD(v13) = 0;
      v15 = v13 | (uint16_t)(v14 - 1);
      v16 = v14;
    }
    while ( v16 != __sync_val_compare_and_swap((volatile int32_t *)(v12 + 4), v16, v15) );
    if ( (uint16_t)v15 == 0 )
      G4_VCALL<void>(v12, 16);
  }
  *(uint32_t *)(a1 + 8) = v11;
  result = (*(int (**)(uint32_t *))(*hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance + 20))(hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance);
  v18 = result;
  if ( result != 0 && *(uint16_t *)(result + 6) != 0 )
  {
    v26 = (volatile int32_t *)(result + 4);
    do
    {
      v28 = *(uint32_t *)(v18 + 4);
      HIWORD(v27) = HIWORD(v28);
      LOWORD(v27) = 0;
      result = __sync_val_compare_and_swap(v26, v28, v27 | (uint16_t)(v28 + 1));
    }
    while ( v28 != result );
  }
  v19 = *(uint32_t *)(a1 + 16);
  if ( v19 == 0 || *(uint16_t *)(v19 + 6) == 0 )
    goto LABEL_21;
  do
  {
    v21 = *(uint32_t *)(v19 + 4);
    HIWORD(v20) = HIWORD(v21);
    LOWORD(v20) = 0;
    v22 = v20 | (uint16_t)(v21 - 1);
    v23 = v21;
    result = __sync_val_compare_and_swap((volatile int32_t *)(v19 + 4), v23, v22);
  }
  while ( v23 != result );
  v2 = a1;
  if ( (uint16_t)v22 == 0 )
  {
    result = G4_VCALL<int>(v19, 16);
    *(uint32_t *)(a1 + 16) = v18;
  }
  else
  {
LABEL_21:
    *(uint32_t *)(v2 + 16) = v18;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldNative::setClassRegistry  (binary VA: 0x18a5570)
// Original: hkDataWorldNative::setClassRegistry
// ----------------------------------------------------------------------------
int hkDataWorldNative::setClassRegistry(hkDataWorldNative::Self *self, const hkClassNameRegistry::Self *a2)
{
  const hkClassNameRegistry::Self *v2;
  int v3;
  int v4;
  int32_t v5; // kr00_4
  int32_t v6;
  int result;
  int32_t v8; // ett
  int v9;
  int32_t v10; // kr04_4

  v2 = a2;
  if ( a2 != nullptr && *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v10 = *((uint32_t *)a2 + 1);
      HIWORD(v9) = HIWORD(v10);
      LOWORD(v9) = 0;
      result = __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v10, v9 | (uint16_t)(v10 + 1));
    }
    while ( v10 != result );
  }
  v3 = *((uint32_t *)self + 2);
  if ( v3 == 0 || *(uint16_t *)(v3 + 6) == 0 )
    goto LABEL_7;
  do
  {
    v5 = *(uint32_t *)(v3 + 4);
    HIWORD(v4) = HIWORD(v5);
    LOWORD(v4) = 0;
    v6 = v4 | (uint16_t)(v5 - 1);
    v8 = v5;
    result = __sync_val_compare_and_swap((volatile int32_t *)(v3 + 4), v8, v6);
  }
  while ( v8 != result );
  v2 = a2;
  if ( (uint16_t)v6 == 0 )
  {
    result = G4_VCALL<int>(v3, 16);
    *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(a2);
  }
  else
  {
LABEL_7:
    *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldNative::setVtableRegistry  (binary VA: 0x18a5610)
// Original: hkDataWorldNative::setVtableRegistry
// ----------------------------------------------------------------------------
int hkDataWorldNative::setVtableRegistry(hkDataWorldNative::Self *self, const hkVtableClassRegistry::Self *a2)
{
  const hkVtableClassRegistry::Self *v2;
  int v3;
  int v4;
  int32_t v5; // kr00_4
  int32_t v6;
  int result;
  int32_t v8; // ett
  int v9;
  int32_t v10; // kr04_4

  v2 = a2;
  if ( a2 != nullptr && *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v10 = *((uint32_t *)a2 + 1);
      HIWORD(v9) = HIWORD(v10);
      LOWORD(v9) = 0;
      result = __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v10, v9 | (uint16_t)(v10 + 1));
    }
    while ( v10 != result );
  }
  v3 = *((uint32_t *)self + 3);
  if ( v3 == 0 || *(uint16_t *)(v3 + 6) == 0 )
    goto LABEL_7;
  do
  {
    v5 = *(uint32_t *)(v3 + 4);
    HIWORD(v4) = HIWORD(v5);
    LOWORD(v4) = 0;
    v6 = v4 | (uint16_t)(v5 - 1);
    v8 = v5;
    result = __sync_val_compare_and_swap((volatile int32_t *)(v3 + 4), v8, v6);
  }
  while ( v8 != result );
  v2 = a2;
  if ( (uint16_t)v6 == 0 )
  {
    result = G4_VCALL<int>(v3, 16);
    *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(a2);
  }
  else
  {
LABEL_7:
    *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldNative::setContents  (binary VA: 0x18a56b0)
// Original: hkDataWorldNative::setContents
// ----------------------------------------------------------------------------
hkClass::Self * hkDataWorldNative::setContents(hkDataWorldNative::Self *self, hkVariantDataUtil::Self *a2, const hkClass::Self *a3)
{
  int v3;
  int (*v4)(int, int, int, int, int, int, int, uint32_t, uint32_t, uint32_t, uint32_t);
  int Name;
  int v6;
  hkClass::Self *result;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef uint32_t _g4_t_v13[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v9)) > _g4_s1 ? (4u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v10)) > _g4_s2 ? (8u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v11)) > _g4_s3 ? (12u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v12)) > _g4_s4 ? (16u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v13)) > _g4_s5 ? (20u + sizeof(_g4_t_v13)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);

  v3 = *((uint32_t *)self + 2);
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(a2);
  v12 = v3;
  v4 = *(int (**)(int, int, int, int, int, int, int, uint32_t, uint32_t, uint32_t, uint32_t))(*(uint32_t *)v3 + 24);
  Name = hkClass::getName(a3);
  v6 = v4(v12, Name, v8, v9, v10, v11, v12, v13[0], v13[1], v13[2], v13[3]);
  hkClass::hasVtable((hkClass::Self *)((char *)v13 + 3), a3);
  if ( HIBYTE(v13[0]) == 0 )
  {
    result = (hkClass::Self *)v6;
    *((uint32_t *)self + 10) = v6;
    if ( v6 != 0 )
      return result;
LABEL_5:
    *((uint32_t *)self + 9) = 0;
    return result;
  }
  result = hkVariantDataUtil::findMostDerivedClass(
             a2,
             *((const void **)self + 3),
             *((const hkVtableClassRegistry::Self **)self + 2));
  *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)(result);
  if ( result == nullptr )
    goto LABEL_5;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldNative::newObject  (binary VA: 0x18a58d0)
// Original: hkDataWorldNative::newObject
// ----------------------------------------------------------------------------
int hkDataWorldNative::newObject(hkDataWorldNative::Self *self, const hkDataClass::Self *a2)
{
  int v2;
  int (*v3)(int, int);
  int v4;
  hkClass::Self *v5;
  int ObjectSize;
  int address;
  size_t v8;
  int v9;
  int v10;
  hkTypeInfo *v11;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int (*savedregs)(int, int);
  hkString::Self *retaddr;
  hkDataWorldNative::Self *thisa;

  v2 = *((uint32_t *)self + 2);
  v3 = *(int (**)(int, int))(*(uint32_t *)v2 + 24);
  v4 = (*(int (**)(uint32_t, int, int, int, int, int, int, int))(**(uint32_t **)a2 + 12))(
         *(uint32_t *)a2,
         v13,
         v14,
         v15,
         v16,
         v17,
         v18,
         v19);
  v5 = (hkClass::Self *)v3(v2, v4);
  ObjectSize = hkClass::getObjectSize(v5);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  retaddr = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                          *(uint32_t *)(*(uint32_t *)address + 44),
                          ObjectSize);
  thisa = (hkDataWorldNative::Self *)(v5);
  if ( retaddr != nullptr )
  {
    v8 = hkClass::getObjectSize(v5);
    hkString::memSet(retaddr, nullptr, v8);
    v9 = (*(int (**)(uint32_t *))(*hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance + 20))(hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance);
    savedregs = *(int (**)(int, int))(*(uint32_t *)v9 + 36);
    v10 = (*(int (**)(uint32_t))(**(uint32_t **)a2 + 12))(*(uint32_t *)a2);
    v11 = (hkTypeInfo *)savedregs(v9, v10);
    if ( v11 != nullptr )
      hkTypeInfo::finishLoadedObject(v11, retaddr, 0);
  }
  return sub_18A5750((int)(uintptr_t)(&retaddr), (int)(uintptr_t)(thisa));
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldNative::wrapObject  (binary VA: 0x18a59d0)
// Original: hkDataWorldNative::wrapObject
// ----------------------------------------------------------------------------
int hkDataWorldNative::wrapObject(hkDataWorldNative::Self *self, void *a2, const hkClass::Self *a3)
{
  uint32_t v4[4];

  v4[0] = (uint32_t)(uintptr_t)(a2);
  v4[1] = (uint32_t)(uintptr_t)(a3);
  return sub_18A5750((int)(uintptr_t)(v4), (int)(uintptr_t)(self));
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectNative::asObject  (binary VA: 0x18a5a00)
// Original: hkDataObjectNative::asObject
// ----------------------------------------------------------------------------
int hkDataObjectNative::asObject(int a1, const hkClassMember::Self *a2)
{
  int v2;
  uint8_t *v3;
  int v4;
  hkClass::Self *Class;
  typedef hkVariantDataUtil::Self *_g4_t_v7;
  typedef hkVtableClassRegistry::Self *_g4_t_v8;
  typedef hkClassNameRegistry::Self *_g4_t_v9;
  typedef uint8_t _g4_t_v10[16];
  typedef uint32_t _g4_t_v11[10];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v9)) > _g4_s2 ? (8u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v10)) > _g4_s3 ? (12u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v11)) > _g4_s4 ? (28u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  v11[6] = (uint32_t)(uintptr_t)(&a1);
  v2 = a1;
  v3 = (uint8_t *)a2;
  hkClassMemberAccessor::Construct((hkClassMemberAccessor::Self *)v10, *(void **)(a1 + 12), a2);
  v7 = (hkVariantDataUtil::Self *)hkClassMemberAccessor::asRaw((hkClassMemberAccessor::Self *)v10);
  v4 = *(uint32_t *)(v2 + 20);
  v9 = *(hkClassNameRegistry::Self **)(v4 + 8);
  v8 = *(hkVtableClassRegistry::Self **)(v4 + 12);
  Class = (hkClass::Self *)hkClassMember::getClass((hkClassMember::Self *)v3);
  hkVariantDataUtil::getObject((hkVariantDataUtil::Self *)v11, v3[12], Class, v8, v9, v7);
  if ( v11[0] != 0 && v11[1] != 0 )
    return sub_18A5750((int)(uintptr_t)(v11), *(uint32_t *)(v2 + 20));
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayNative::asObject  (binary VA: 0x18a5ad0)
// Original: hkDataArrayNative::asObject
// ----------------------------------------------------------------------------
int hkDataArrayNative::asObject(hkDataArrayNative::Self *self, int a2)
{
  hkDataArrayNative::Self *v2;
  uint32_t v4[10];

  v4[6] = (uint32_t)(uintptr_t)(&self);
  v2 = self;
  hkVariantDataUtil::getObject(
    (hkVariantDataUtil::Self *)v4,
    *((uint32_t *)self + 7),
    *((hkClass::Self **)self + 9),
    *(hkVtableClassRegistry::Self **)(*((uint32_t *)self + 3) + 12),
    *(hkClassNameRegistry::Self **)(*((uint32_t *)self + 3) + 8),
    (hkVariantDataUtil::Self *)(*((uint32_t *)self + 4) + *((uint32_t *)self + 6) * a2));
  if ( v4[0] != 0 && v4[1] != 0 )
    return sub_18A5750((int)(uintptr_t)(v4), *((uint32_t *)v2 + 3));
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldNative::Destroy  (binary VA: 0x18a5b60)
// Original: hkDataWorldNative::~hkDataWorldNative
// ----------------------------------------------------------------------------
void hkDataWorldNative::Destroy(hkDataWorldNative::Self *self)
{
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v1;
  int i;
  int Value;
  int v4;
  int v5;
  int v6;
  int32_t v7; // kr00_4
  int32_t v8;
  int32_t v9; // ett
  int v10;
  int v11;
  int32_t v12; // kr04_4
  int32_t v13;
  int32_t v14; // ett
  int v15;
  int v16;
  int32_t v17; // kr08_4
  int32_t v18;
  int32_t v19; // ett
  typedef bool _g4_t_v20;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_v20)) > _g4_s0 ? (4u + sizeof(_g4_t_v20)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);

  v1 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)((hkDataWorldNative::Self *)((char *)self + 20));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6EA8);
  for ( i = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getIterator((hkDataWorldNative::Self *)((char *)self + 20));
        ;
        i = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getNext(v1, i) )
  {
    hkCachedHashMap_hkStringMapOperations_hk_b9db0c::isValid(&v20, (int)(uintptr_t)(v1), i);
    if ( !v20 )
      break;
    Value = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getValue(v1, i);
    if ( Value != 0 )
      G4_VCALL<void>(Value, 4);
  }
  *((uint32_t *)self + 47) = 0;
  v4 = *((uint32_t *)self + 48);
  if ( v4 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 46),
      v4 & 0x3FFFFFFF);
  *((uint32_t *)self + 46) = 0;
  *((uint32_t *)self + 48) = 0x80000000;
  hkTypeManager::Destroy((hkTypeManager::Self *)((hkDataWorldNative::Self *)((char *)self + 48)));
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Destroy(v1);
  v5 = *((uint32_t *)self + 4);
  if ( v5 != 0 && *(uint16_t *)(v5 + 6) != 0 )
  {
    do
    {
      v7 = *(uint32_t *)(v5 + 4);
      HIWORD(v6) = HIWORD(v7);
      LOWORD(v6) = 0;
      v8 = v6 | (uint16_t)(v7 - 1);
      v9 = v7;
    }
    while ( v9 != __sync_val_compare_and_swap((volatile int32_t *)(v5 + 4), v9, v8) );
    if ( (uint16_t)v8 == 0 )
      G4_VCALL<void>(v5, 16);
  }
  v10 = *((uint32_t *)self + 3);
  *((uint32_t *)self + 4) = 0;
  if ( v10 != 0 && *(uint16_t *)(v10 + 6) != 0 )
  {
    do
    {
      v12 = *(uint32_t *)(v10 + 4);
      HIWORD(v11) = HIWORD(v12);
      LOWORD(v11) = 0;
      v13 = v11 | (uint16_t)(v12 - 1);
      v14 = v12;
    }
    while ( v14 != __sync_val_compare_and_swap((volatile int32_t *)(v10 + 4), v14, v13) );
    if ( (uint16_t)v13 == 0 )
      G4_VCALL<void>(v10, 16);
  }
  v15 = *((uint32_t *)self + 2);
  *((uint32_t *)self + 3) = 0;
  if ( v15 != 0 && *(uint16_t *)(v15 + 6) != 0 )
  {
    do
    {
      v17 = *(uint32_t *)(v15 + 4);
      HIWORD(v16) = HIWORD(v17);
      LOWORD(v16) = 0;
      v18 = v16 | (uint16_t)(v17 - 1);
      v19 = v17;
    }
    while ( v19 != __sync_val_compare_and_swap((volatile int32_t *)(v15 + 4), v19, v18) );
    if ( (uint16_t)v18 == 0 )
      G4_VCALL<void>(v15, 16);
  }
  *((uint32_t *)self + 2) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldNative::Destroy_ea18a5d40  (binary VA: 0x18a5d40)
// Original: hkDataWorldNative::~hkDataWorldNative
// ----------------------------------------------------------------------------
void hkDataWorldNative::Destroy_ea18a5d40(hkDataWorldNative::Self *self)
{
  int v1;
  int v2;

  hkDataWorldNative::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 196;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldDict::getTypeManager  (binary VA: 0x18a5da0)
// Original: hkDataWorldDict::getTypeManager
// ----------------------------------------------------------------------------
char * hkDataWorldDict::getTypeManager(hkDataWorldDict::Self *self)
{
  return (char *)self + 16;
}

// ----------------------------------------------------------------------------
// Function: hkDataClassDict::getWorld  (binary VA: 0x18a5db0)
// Original: hkDataClassDict::getWorld
// ----------------------------------------------------------------------------
int hkDataClassDict::getWorld(hkDataClassDict::Self *self)
{
  return *((uint32_t *)self + 3);
}

// ----------------------------------------------------------------------------
// Function: hkDataClassDict::getName  (binary VA: 0x18a5dc0)
// Original: hkDataClassDict::getName
// ----------------------------------------------------------------------------
int hkDataClassDict::getName(hkDataClassDict::Self *self)
{
  return *(uint32_t *)(*((uint32_t *)self + 4) + 8);
}

// ----------------------------------------------------------------------------
// Function: hkDataClassDict::getVersion  (binary VA: 0x18a5dd0)
// Original: hkDataClassDict::getVersion
// ----------------------------------------------------------------------------
int hkDataClassDict::getVersion(hkDataClassDict::Self *self)
{
  return *((uint32_t *)self + 5);
}

// ----------------------------------------------------------------------------
// Function: hkDataClassDict::getParent  (binary VA: 0x18a5de0)
// Original: hkDataClassDict::getParent
// ----------------------------------------------------------------------------
int hkDataClassDict::getParent(hkDataClassDict::Self *self)
{
  return *((uint32_t *)self + 6);
}

// ----------------------------------------------------------------------------
// Function: hkDataClassDict::getNumDeclaredMembers  (binary VA: 0x18a5df0)
// Original: hkDataClassDict::getNumDeclaredMembers
// ----------------------------------------------------------------------------
int hkDataClassDict::getNumDeclaredMembers(hkDataClassDict::Self *self)
{
  return *((uint32_t *)self + 11);
}

// ----------------------------------------------------------------------------
// Function: hkDataClassDict::getDeclaredMemberInfo  (binary VA: 0x18a5e00)
// Original: hkDataClassDict::getDeclaredMemberInfo
// ----------------------------------------------------------------------------
uint32_t * hkDataClassDict::getDeclaredMemberInfo(int a1, int a2, uint32_t *a3)
{
  int *v4;
  int v5;

  v4 = (int *)(*(uint32_t *)(a1 + 40) + 20 * a2);
  v5 = *v4;
  a3[1] = a1;
  *a3 = v5;
  a3[2] = v4[3];
  a3[3] = v4[4];
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkDataClassDict::getNumMembers  (binary VA: 0x18a5e30)
// Original: hkDataClassDict::getNumMembers
// ----------------------------------------------------------------------------
int hkDataClassDict::getNumMembers(hkDataClassDict::Self *self)
{
  int v1;
  int result;

  v1 = *((uint32_t *)self + 6);
  for ( result = *((uint32_t *)self + 11); v1 != 0; v1 = *(uint32_t *)(v1 + 24) )
    result += *(uint32_t *)(v1 + 44);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataClassDict::getMemberInfo  (binary VA: 0x18a5e50)
// Original: hkDataClassDict::getMemberInfo
// ----------------------------------------------------------------------------
uint32_t * hkDataClassDict::getMemberInfo(uint32_t *a1, int a2, uint32_t *a3)
{
  int v3;
  uint32_t *result;
  int *v5;
  int v6;

  v3 = a2 - G4_VCALL<int>(a1, 40);
  result = a1;
  while ( 1 )
  {
    v3 += result[11];
    if ( v3 >= 0 )
      break;
    result = (uint32_t *)result[6];
    if ( result == nullptr )
      return result;
  }
  v5 = (int *)(result[10] + 20 * v3);
  v6 = *v5;
  a3[1] = (uint32_t)(uintptr_t)(result);
  *a3 = v6;
  a3[2] = v5[3];
  result = (uint32_t *)v5[4];
  a3[3] = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataClassDict::getAllMemberInfo  (binary VA: 0x18a5eb0)
// Original: hkDataClassDict::getAllMemberInfo
// ----------------------------------------------------------------------------
int * hkDataClassDict::getAllMemberInfo(uint32_t *a1, int *a2)
{
  int *result;
  uint32_t *v3;
  int i;
  int v5;
  uint32_t *v6;
  int *v7;
  int v8;
  uint32_t *v9;

  result = a2;
  v3 = a1;
  for ( i = *a2 + 16 * a2[1]; v3 != nullptr; v3 = (uint32_t *)v3[6] )
  {
    v5 = v3[11];
    result = (int *)v3[10];
    i -= 16 * v5;
    if ( v5 > 0 )
    {
      v6 = (uint32_t *)i;
      v7 = &result[5 * v5];
      v9 = v3;
      do
      {
        v8 = *result;
        v6[1] = (uint32_t)(uintptr_t)(a1);
        *v6 = v8;
        v6[2] = result[3];
        result += 5;
        v6[3] = *(result - 1);
        v6 += 4;
      }
      while ( result != v7 );
      v3 = v9;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectDict::createdDuringPatching  (binary VA: 0x18a5f20)
// Original: hkDataObjectDict::createdDuringPatching
// ----------------------------------------------------------------------------
int hkDataObjectDict::createdDuringPatching(hkDataObjectDict::Self *self)
{
  return *((uint32_t *)self + 7);
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectDict::getHandle  (binary VA: 0x18a5f30)
// Original: hkDataObjectDict::getHandle
// ----------------------------------------------------------------------------
hkDataObjectDict::Self * hkDataObjectDict::getHandle(hkDataObjectDict::Self *self, int a2)
{
  *(uint32_t *)self = a2;
  *((uint32_t *)self + 1) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectDict::getClass  (binary VA: 0x18a5f50)
// Original: hkDataObjectDict::getClass
// ----------------------------------------------------------------------------
int hkDataObjectDict::getClass(hkDataObjectDict::Self *self)
{
  return *((uint32_t *)self + 3);
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectDict::getMemberIterator  (binary VA: 0x18a5f60)
// Original: hkDataObjectDict::getMemberIterator
// ----------------------------------------------------------------------------
int hkDataObjectDict::getMemberIterator()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectDict::isValid  (binary VA: 0x18a5f70)
// Original: hkDataObjectDict::isValid
// ----------------------------------------------------------------------------
bool hkDataObjectDict::isValid(hkDataObjectDict::Self *self, int a2)
{
  return *((uint32_t *)self + 5) > a2;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectDict::getNextMember  (binary VA: 0x18a5f90)
// Original: hkDataObjectDict::getNextMember
// ----------------------------------------------------------------------------
int hkDataObjectDict::getNextMember(hkDataObjectDict::Self *self, int a2)
{
  return a2 + 1;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectDict::getMemberName  (binary VA: 0x18a5fa0)
// Original: hkDataObjectDict::getMemberName
// ----------------------------------------------------------------------------
int hkDataObjectDict::getMemberName(hkDataObjectDict::Self *self, int a2)
{
  return *(uint32_t *)(*((uint32_t *)self + 4) + 12 * a2);
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectDict::getMemberValue  (binary VA: 0x18a5fc0)
// Original: hkDataObjectDict::getMemberValue
// ----------------------------------------------------------------------------
hkDataObjectDict::Self * hkDataObjectDict::getMemberValue(hkDataObjectDict::Self *self, int a2, int a3)
{
  *(uint32_t *)self = a2;
  *((uint32_t *)self + 1) = *(uint32_t *)(*(uint32_t *)(a2 + 16) + 12 * a3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectDict::getMemberInfo  (binary VA: 0x18a5fe0)
// Original: hkDataObjectDict::getMemberInfo
// ----------------------------------------------------------------------------
uint32_t * hkDataObjectDict::getMemberInfo(int a1, int *a2, uint32_t *a3)
{
  int v4;

  v4 = *a2;
  a3[1] = 0;
  *a3 = v4;
  a3[2] = a2[3];
  a3[3] = a2[4];
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldDict::getContents  (binary VA: 0x18a7480)
// Original: hkDataWorldDict::getContents
// ----------------------------------------------------------------------------
hkDataWorldDict::Self * hkDataWorldDict::getContents(hkDataWorldDict::Self *self, int a2)
{
  hkDataWorldDict::Self *result;
  int v3;
  int v4;
  int16_t v5;

  result = self;
  v3 = *(uint32_t *)(*(uint32_t *)(a2 + 8) + 48);
  *(uint32_t *)self = v3;
  if ( v3 != 0 )
  {
    v4 = *(uint32_t *)(v3 + 4);
    ++*(uint32_t *)(v3 + 8);
    v5 = v4;
    LOWORD(v4) = 0;
    *(uint32_t *)(v3 + 4) = v4 | (uint16_t)(v5 + 1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldDict::getType  (binary VA: 0x18a74b0)
// Original: hkDataWorldDict::getType
// ----------------------------------------------------------------------------
hkDataWorldDict::Self * hkDataWorldDict::getType(hkDataWorldDict::Self *self)
{
  *(uint32_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldDict::findObject  (binary VA: 0x18a74c0)
// Original: hkDataWorldDict::findObject
// ----------------------------------------------------------------------------
int * hkDataWorldDict::findObject(int *a1, int a2, int *a3)
{
  int *result;
  int v4;
  bool v5;
  int v6;
  int16_t v7;

  result = a1;
  v4 = *a3;
  v5 = *a3 == 0;
  *a1 = *a3;
  if ( !v5 )
  {
    v6 = *(uint32_t *)(v4 + 4);
    ++*(uint32_t *)(v4 + 8);
    v7 = v6;
    LOWORD(v6) = 0;
    *(uint32_t *)(v4 + 4) = v6 | (uint16_t)(v7 + 1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldDict::setClassVersion  (binary VA: 0x18a74f0)
// Original: hkDataWorldDict::setClassVersion
// ----------------------------------------------------------------------------
int hkDataWorldDict::setClassVersion(hkDataWorldDict::Self *self, hkDataClass::Self *a2, int a3)
{
  int result;

  result = *(uint32_t *)a2;
  *(uint32_t *)(*(uint32_t *)a2 + 20) = a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldDict::findClass  (binary VA: 0x18a7940)
// Original: hkDataWorldDict::findClass
// ----------------------------------------------------------------------------
int hkDataWorldDict::findClass(hkDataWorldDict::Self *self, hkString::Self *a2)
{
  if ( a2 != nullptr )
    return hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
             (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(*((uint32_t *)self + 2) + 4),
             a2,
             0);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldDict::castObject  (binary VA: 0x18a7fd0)
// Original: hkDataWorldDict::castObject
// ----------------------------------------------------------------------------
unsigned int hkDataWorldDict::castObject(hkDataWorldDict::Self *self, hkDataObject::Self *a2, const hkDataClass::Self *a3)
{
  int v3;
  unsigned int result;
  unsigned int v5;
  uint32_t *v6;
  uint32_t *v7;
  unsigned int v8;
  int v9;
  int v10;
  unsigned int v11;
  uint32_t *v12;
  unsigned int v13;
  int v14;
  uint32_t *v15;
  unsigned int Key;
  int v17;
  unsigned int v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *v22;
  unsigned int v23;
  uint32_t *v24;
  uint32_t *v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  int v29;

  v3 = *(uint32_t *)a2;
  v23 = *(uint32_t *)a3;
  v24 = *((uint32_t **)self + 2);
  v22 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(v24 + 16);
  v28 = (*(int (**)(uint32_t))(**(uint32_t **)a2 + 12))(*(uint32_t *)a2);
  result = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
             (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(v24 + 16),
             v28,
             0xFFFFFFFF);
  v5 = result;
  if ( result != -1 && v28 != 0 )
  {
    v6 = v24;
    result = v24[13];
    while ( 1 )
    {
      v7 = (uint32_t *)(result + 8 * v5);
      if ( v3 == *v7 )
        break;
      v5 = v7[1];
      if ( v5 == -1 )
        return result;
    }
    v8 = v7[1];
    v26 = v8;
    if ( v8 == -1 )
    {
      Key = hkMapBase_unsigned_long_unsigned_l_393416::findKey(v22, v28);
      v6 = v24;
      v17 = v24[16] + 8 * Key;
      v18 = *(uint32_t *)(v17 + 4);
      v26 = v18;
      if ( v5 == v18 )
      {
        *(uint32_t *)(v17 + 4) = -1;
        v10 = 8 * v5;
      }
      else
      {
        v19 = 8 * v18;
        v29 = v24[13] + v19;
        if ( v5 == *(uint32_t *)(v29 + 4) )
        {
          v26 = v5;
          v10 = 8 * v5;
          *(uint32_t *)(v29 + 4) = -1;
        }
        else
        {
          *(uint32_t *)(v17 + 4) = *(uint32_t *)(v29 + 4);
          *(uint32_t *)(v24[13] + 8 * v5) = *(uint32_t *)(v24[13] + 8 * v26);
          v10 = v19;
        }
      }
    }
    else
    {
      v9 = *(uint32_t *)(result + 8 * v8);
      v7[1] = *(uint32_t *)(result + 8 * v8 + 4);
      *v7 = v9;
      v10 = 8 * v8;
    }
    v25 = v6;
    *(uint32_t *)(v6[13] + v10 + 4) = v6[19];
    v6[19] = v26;
    v11 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(v22, v23, 0xFFFFFFFF);
    v12 = v25;
    v13 = v25[19];
    if ( v13 == -1 )
    {
      v20 = v25[14];
      if ( v20 == (v25[15] & 0x3FFFFFFF) )
      {
        v27 = v11;
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkMemoryAllocator::Self *)(v25 + 13),
          8,
          v21);
        v12 = v25;
        v11 = v27;
      }
      v12[14] = v25[14] + 1;
      v13 = v20;
      v15 = (uint32_t *)(v12[13] + 8 * v20);
    }
    else
    {
      v14 = v25[13] + 8 * v13;
      v25[19] = *(uint32_t *)(v14 + 4);
      v15 = (uint32_t *)v14;
    }
    v15[1] = v11;
    *v15 = v3;
    return hkMapBase_unsigned_long_unsigned_l_393416::insert(
             v22,
             (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
             v23,
             v13);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldDict::findAllClasses  (binary VA: 0x18a8210)
// Original: hkDataWorldDict::findAllClasses
// ----------------------------------------------------------------------------
bool * hkDataWorldDict::findAllClasses(int a1, int *a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int Iterator;
  bool *result;
  typedef uint32_t *_g4_t_v9;
  typedef bool _g4_t_v10;
  typedef uint32_t _g4_t_v11[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (11u + sizeof(_g4_t_v10)) > _g4_s1 ? (11u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v11)) > _g4_s2 ? (12u + sizeof(_g4_t_v11)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 11u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);

  v11[3] = (uint32_t)(uintptr_t)(&a1);
  v2 = a2;
  v3 = *(uint32_t *)(a1 + 8);
  v4 = a2[2] & 0x3FFFFFFF;
  v5 = *(uint32_t *)(v3 + 8);
  if ( v5 > v4 )
  {
    v6 = 2 * v4;
    if ( v6 < v5 )
      v6 = *(uint32_t *)(v3 + 8);
    hkArrayUtil::reserve((hkArrayUtil::Self *)v11, (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc, a2, v6, 4);
  }
  v9 = (uint32_t *)(v3 + 4);
  Iterator = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getIterator((hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(v3 + 4));
  result = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::isValid(&v10, (int)(uintptr_t)(v9), Iterator);
  while ( v10 )
  {
    *(uint32_t *)(*v2 + 4 * v2[1]++) = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getValue(
                                       v9,
                                       Iterator);
    Iterator = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getNext(v9, Iterator);
    result = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::isValid(&v10, (int)(uintptr_t)(v9), Iterator);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectDict::isSet  (binary VA: 0x18a82f0)
// Original: hkDataObjectDict::isSet
// ----------------------------------------------------------------------------
int hkDataObjectDict::isSet(int a1, uint32_t *a2)
{
  int result;
  int v3;
  uint32_t *v4;

  result = 1;
  if ( a2[4] == 0 )
  {
    v3 = *(uint32_t *)(a1 + 20);
    if ( v3 > 0 )
    {
      v4 = *(uint32_t **)(a1 + 16);
      if ( *v4 == *a2 )
        return result;
      LOBYTE(result) = 0;
      while ( ++result != v3 )
      {
        v4 += 3;
        if ( *v4 == *a2 )
          return 1;
      }
    }
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldDict::copyClassFromWorld  (binary VA: 0x18a8a00)
// Original: hkDataWorldDict::copyClassFromWorld
// ----------------------------------------------------------------------------
int hkDataWorldDict::copyClassFromWorld(hkDataWorldDict::Self *self, const char *a2, const hkDataWorld::Self *a3)
{
  hkDataWorldDict::Self *v3;
  const char *v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  hkTypeManager::Type::Self *v17;
  hkTypeManager::Type::Self *Terminal;
  int TypeName;
  int v20;
  int savedregs;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef hkTypeManager::Type::Self *_g4_t_v28;
  typedef hkTypeManager::Type::Self *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int (*_g4_t_v31)(int, int);
  typedef void (*_g4_t_v32)(hkDataWorldDict::Self *, int, int);
  typedef int _g4_t_v33;
  typedef hkTypeManager::Self *_g4_t_v34;
  typedef hkTypeManager::Self *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef hkDataWorldDict::Self *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef void (*_g4_t_v39)(hkDataWorldDict::Self *, int, int);
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef uint32_t _g4_t_v44[3];
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
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef hkArrayUtil::Self *_g4_t_v60;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (12u + sizeof(_g4_t_v21)) > _g4_s0 ? (12u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v22)) > _g4_s1 ? (16u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v23)) > _g4_s2 ? (20u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v24)) > _g4_s3 ? (24u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v25)) > _g4_s4 ? (28u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v26)) > _g4_s5 ? (32u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v27)) > _g4_s6 ? (32u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v28)) > _g4_s7 ? (36u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v29)) > _g4_s8 ? (36u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v30)) > _g4_s9 ? (40u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v31)) > _g4_s10 ? (40u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v32)) > _g4_s11 ? (40u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v33)) > _g4_s12 ? (44u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v34)) > _g4_s13 ? (48u + sizeof(_g4_t_v34)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v35)) > _g4_s14 ? (48u + sizeof(_g4_t_v35)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v36)) > _g4_s15 ? (52u + sizeof(_g4_t_v36)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v37)) > _g4_s16 ? (52u + sizeof(_g4_t_v37)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v38)) > _g4_s17 ? (56u + sizeof(_g4_t_v38)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v39)) > _g4_s18 ? (56u + sizeof(_g4_t_v39)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v40)) > _g4_s19 ? (56u + sizeof(_g4_t_v40)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v41)) > _g4_s20 ? (60u + sizeof(_g4_t_v41)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v42)) > _g4_s21 ? (60u + sizeof(_g4_t_v42)) : _g4_s21,
    _g4_s23 = (64u + sizeof(_g4_t_v43)) > _g4_s22 ? (64u + sizeof(_g4_t_v43)) : _g4_s22,
    _g4_s24 = (68u + sizeof(_g4_t_v44)) > _g4_s23 ? (68u + sizeof(_g4_t_v44)) : _g4_s23,
    _g4_s25 = (80u + sizeof(_g4_t_v45)) > _g4_s24 ? (80u + sizeof(_g4_t_v45)) : _g4_s24,
    _g4_s26 = (84u + sizeof(_g4_t_v46)) > _g4_s25 ? (84u + sizeof(_g4_t_v46)) : _g4_s25,
    _g4_s27 = (88u + sizeof(_g4_t_v47)) > _g4_s26 ? (88u + sizeof(_g4_t_v47)) : _g4_s26,
    _g4_s28 = (92u + sizeof(_g4_t_v48)) > _g4_s27 ? (92u + sizeof(_g4_t_v48)) : _g4_s27,
    _g4_s29 = (96u + sizeof(_g4_t_v49)) > _g4_s28 ? (96u + sizeof(_g4_t_v49)) : _g4_s28,
    _g4_s30 = (100u + sizeof(_g4_t_v50)) > _g4_s29 ? (100u + sizeof(_g4_t_v50)) : _g4_s29,
    _g4_s31 = (104u + sizeof(_g4_t_v51)) > _g4_s30 ? (104u + sizeof(_g4_t_v51)) : _g4_s30,
    _g4_s32 = (108u + sizeof(_g4_t_v52)) > _g4_s31 ? (108u + sizeof(_g4_t_v52)) : _g4_s31,
    _g4_s33 = (112u + sizeof(_g4_t_v53)) > _g4_s32 ? (112u + sizeof(_g4_t_v53)) : _g4_s32,
    _g4_s34 = (116u + sizeof(_g4_t_v54)) > _g4_s33 ? (116u + sizeof(_g4_t_v54)) : _g4_s33,
    _g4_s35 = (120u + sizeof(_g4_t_v55)) > _g4_s34 ? (120u + sizeof(_g4_t_v55)) : _g4_s34,
    _g4_s36 = (124u + sizeof(_g4_t_v56)) > _g4_s35 ? (124u + sizeof(_g4_t_v56)) : _g4_s35,
    _g4_s37 = (128u + sizeof(_g4_t_v57)) > _g4_s36 ? (128u + sizeof(_g4_t_v57)) : _g4_s36,
    _g4_s38 = (132u + sizeof(_g4_t_v58)) > _g4_s37 ? (132u + sizeof(_g4_t_v58)) : _g4_s37,
    _g4_s39 = (136u + sizeof(_g4_t_v59)) > _g4_s38 ? (136u + sizeof(_g4_t_v59)) : _g4_s38,
    _g4_s40 = (140u + sizeof(_g4_t_v60)) > _g4_s39 ? (140u + sizeof(_g4_t_v60)) : _g4_s39
  };
  alignas(16) uint8_t _g4_sf[_g4_s40];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 40u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 48u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 48u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 52u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 52u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 56u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 56u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 56u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 60u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 60u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 64u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 68u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 80u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 84u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 88u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 92u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 96u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 100u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 104u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 108u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 112u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 116u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 120u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 124u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 128u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 132u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 136u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 140u);

  v60 = (hkArrayUtil::Self *)&self;
  v3 = self;
  v4 = a2;
  result = G4_VCALL<int>(self, 44, a2, v21, v22, v23, v24, v25, v26, v28, v30, v33, v34, v36, v38, a3, v43, v44[0], v44[1], v44[2], v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59);
  if ( result == 0 )
  {
    v45 = G4_VCALL<int>(v41, 44, v4);
    v53 = 0;
    v54 = 0;
    v55 = 0x80000000;
    v50 = G4_VCALL<int>(v45, 12);
    v51 = G4_VCALL<int>(v45, 16);
    v6 = G4_VCALL<int>(v45, 20);
    v7 = v6;
    if ( v6 != 0 )
    {
      v52 = G4_VCALL<int>(v6, 12);
      v39 = *(void (**)(hkDataWorldDict::Self *, int, int))(*(uint32_t *)v3 + 100);
      v8 = G4_VCALL<int>(v7, 12);
      v39(v3, v8, v41);
      result = G4_VCALL<int>(v3, 44, v50);
      if ( result != 0 )
      {
LABEL_5:
        v54 = 0;
        if ( v55 >= 0 )
        {
          v42 = result;
          (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v53,
            12 * v55);
          return v42;
        }
        return result;
      }
    }
    else
    {
      v52 = 0;
    }
    v27 = G4_VCALL<int>(v3, 20, &v50);
    v9 = G4_VCALL<int>(v45, 28);
    v10 = 0;
    v11 = v9;
    v46 = 0;
    v47 = 0;
    v48 = 0x80000000;
    if ( v9 == 0
      || (v44[0] = 16 * v9,
          v10 = (*(int (**)(uint32_t *, uint32_t *))(hkContainerTempAllocator::s_alloc[0] + 16))(
                  (uint32_t *)(hkContainerTempAllocator::s_alloc),
                  v44),
          v12 = v44[0] / 16,
          v44[0] / 16 == 0) )
    {
      v12 = 0x80000000;
    }
    v48 = v12;
    v13 = 0;
    v46 = v10;
    v47 = v11;
    if ( v11 > 0 )
    {
      do
      {
        *(__m128i *)(v10 + v13) = g4_m128_from<__m128i>(0LL);
        v13 += 16;
      }
      while ( v13 != 16 * v11 );
    }
    hkDataClass::getAllDeclaredMemberInfo(&v45, &v46);
    v14 = v47;
    if ( v47 > (v55 & 0x3FFFFFFF) )
    {
      v15 = 2 * (v55 & 0x3FFFFFFF);
      savedregs = 12;
      v60 = (hkArrayUtil::Self *)&v43;
      if ( v15 < v47 )
        v15 = v47;
      hkArrayUtil::reserve(v60, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v53, v15, savedregs);
      v14 = v47;
    }
    v44[0] = v27;
    v40 = 0;
    v35 = (hkTypeManager::Self *)((hkDataWorldDict::Self *)((char *)v3 + 16));
    if ( v14 > 0 )
    {
      v37 = v3;
      do
      {
        v16 = v46 + 16 * v40;
        v17 = hkTypeManager::copyType(v35, *(hkTypeManager::Type::Self **)(v16 + 8));
        Terminal = hkTypeManager::Type::findTerminal(v17);
        if ( *(uint32_t *)Terminal == 6 )
        {
          v29 = Terminal;
          v31 = *(int (**)(int, int))(*(uint32_t *)v41 + 44);
          TypeName = hkTypeManager::Type::getTypeName(v17);
          if ( v31(v41, TypeName) != 0 )
          {
            v32 = *(void (**)(hkDataWorldDict::Self *, int, int))(*(uint32_t *)v37 + 100);
            v20 = hkTypeManager::Type::getTypeName(v29);
            v32(v37, v20, v41);
          }
        }
        G4_VCALL<void>(v37, 72, v44, *(uint32_t *)v16, v17, 0);
        ++v40;
      }
      while ( v40 < v47 );
    }
    v47 = 0;
    if ( v48 >= 0 )
      (*(void (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
        (uint32_t *)(hkContainerTempAllocator::s_alloc),
        v46,
        16 * v48);
    v46 = 0;
    v48 = 0x80000000;
    result = v27;
    goto LABEL_5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldDict::findObjectsByExactClass  (binary VA: 0x18aa6e0)
// Original: hkDataWorldDict::findObjectsByExactClass
// ----------------------------------------------------------------------------
uint32_t * hkDataWorldDict::findObjectsByExactClass(int a1, hkString::Self *a2, hkMemoryAllocator::Self *a3)
{
  uint32_t *v3;

  v3 = *(uint32_t **)(a1 + 8);
  *((uint32_t *)a3 + 1) = 0;
  return sub_18AA510(v3, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectDict::getAllMemberHandles  (binary VA: 0x18aa700)
// Original: hkDataObjectDict::getAllMemberHandles
// ----------------------------------------------------------------------------
int hkDataObjectDict::getAllMemberHandles(int a1, int *a2)
{
  int result;
  int v3;
  int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  __m128i *v8;
  __m128i v9;
  unsigned int v10;
  __m128i v11;
  unsigned int v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  int v17;

  v16 = *(uint32_t *)(a1 + 12);
  result = *a2;
  v3 = *a2 + 4 * a2[1];
  if ( v16 != 0 )
  {
    result = *(uint32_t *)(a1 + 12);
    do
    {
      v4 = *(uint32_t *)(result + 44);
      v5 = *(uint32_t *)(result + 40);
      v3 -= 4 * v4;
      if ( v4 > 0 )
      {
        v6 = v4;
        v7 = -((uint8_t)(v3 & 0xF) >> 2) & 3;
        if ( v4 <= v7 )
          v7 = v4;
        if ( (unsigned int)v4 > 7 )
        {
          if ( v7 == 0 )
          {
            v6 = 0;
            v17 = 0;
LABEL_15:
            v14 = v4 - v6;
            v15 = (v4 - v6) >> 2;
            v13 = 4 * v15;
            if ( 4 * v15 == 0 )
              goto LABEL_20;
g4_m128_lane<int64_t>(v9, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v5), _mm_cvtsi32_si128(v5 + 20)), 0);
            v8 = (__m128i *)(v3 + 4 * v6);
g4_m128_lane<int64_t>(v9, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v5 + 40), _mm_cvtsi32_si128(v5 + 60)), 0);
            v10 = 0;
            while ( 1 )
            {
              *v8 = v9;
              ++v10;
              ++v8;
              v11 = _mm_add_epi32(v9, G4_BITCAST<__m128i>(xmmword_1C7CE80));
              if ( v15 <= v10 )
                break;
              v9 = v11;
            }
            v17 += v13;
            v5 += 80 * v15;
            if ( v14 != v13 )
            {
LABEL_20:
              *(uint32_t *)(v3 + 4 * v17) = v5;
              if ( v4 > v17 + 1 )
              {
                *(uint32_t *)(v3 + 4 * (v17 + 1)) = v5 + 20;
                v12 = v5 + 40;
                if ( v4 > v17 + 2 )
                  *(uint32_t *)(v3 + 4 * (v17 + 2)) = v12;
              }
            }
            goto LABEL_23;
          }
          v6 = v7;
        }
        *(uint32_t *)v3 = v5;
        if ( v6 == 1 )
        {
          v5 += 20;
          v17 = 1;
        }
        else
        {
          *(uint32_t *)(v3 + 4) = v5 + 20;
          if ( v6 == 2 )
          {
            v5 += 40;
            v17 = 2;
          }
          else
          {
            *(uint32_t *)(v3 + 8) = v5 + 40;
            if ( v6 == 3 )
            {
              v5 += 60;
              v17 = 3;
            }
            else
            {
              *(uint32_t *)(v3 + 12) = v5 + 60;
              if ( v6 == 4 )
              {
                v5 += 80;
                v17 = 4;
              }
              else
              {
                *(uint32_t *)(v3 + 16) = v5 + 80;
                if ( v6 == 5 )
                {
                  v5 += 100;
                  v17 = 5;
                }
                else
                {
                  *(uint32_t *)(v3 + 20) = v5 + 100;
                  if ( v6 == 7 )
                  {
                    *(uint32_t *)(v3 + 24) = v5 + 120;
                    v5 += 140;
                    v17 = 7;
                  }
                  else
                  {
                    v5 += 120;
                    v17 = 6;
                  }
                }
              }
            }
          }
        }
        if ( v4 != v6 )
          goto LABEL_15;
      }
LABEL_23:
      v16 = *(uint32_t *)(v16 + 24);
      result = v16;
    }
    while ( v16 != 0 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataClassDict::isSuperClass  (binary VA: 0x18aaad0)
// Original: hkDataClassDict::isSuperClass
// ----------------------------------------------------------------------------
hkDataClassDict::Self * hkDataClassDict::isSuperClass(hkDataClassDict::Self *self, const hkDataClassImpl::Self *a2, int a3)
{
  int i;
  hkString::Self *v4;
  int v5;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v6;
  hkString::Self *v8;
  hkString::Self *v9;

  for ( i = a3; i != 0; i = G4_VCALL<int>(i, 20) )
  {
    v4 = (hkString::Self *)G4_VCALL<int>(i, 12);
    v5 = 0;
    if ( v4 == nullptr
      || (v6 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(*(uint32_t *)(*((uint32_t *)a2 + 3) + 8)
                                                                                  + 80),
          v8 = v4,
          (v5 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(v6, v4, 0)) != 0) )
    {
      if ( v5 == *(uint32_t *)(*((uint32_t *)a2 + 4) + 8) )
        goto LABEL_8;
    }
    else
    {
      v9 = hkString::strDup(v8);
      hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v6, v9, (unsigned int)(uintptr_t)(v9));
      if ( v9 == *(hkString::Self **)(*((uint32_t *)a2 + 4) + 8) )
      {
LABEL_8:
        *(uint8_t *)self = 1;
        return self;
      }
    }
  }
  *(uint8_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldDict::setClassMemberDefault  (binary VA: 0x18aae90)
// Original: hkDataWorldDict::setClassMemberDefault
// ----------------------------------------------------------------------------
const void * hkDataWorldDict::setClassMemberDefault(hkDataWorldDict::Self *self, hkDataClass::Self *a2, hkString::Self *a3, const void *a4)
{
  int v4;
  int v5;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;
  hkString::Self *v12;

  v4 = *(uint32_t *)a2;
  v5 = 0;
  if ( a3 != nullptr )
  {
    v6 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(*((uint32_t *)self + 2) + 80);
    v5 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(v6, a3, 0);
    if ( v5 == 0 )
    {
      v12 = hkString::strDup(a3);
      hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v6, v12, (unsigned int)(uintptr_t)(v12));
      v5 = (int)(uintptr_t)(v12);
    }
  }
  v7 = *(uint32_t *)(v4 + 44) - 1;
  if ( v7 < 0 )
  {
    v9 = (uint32_t *)(*(uint32_t *)(v4 + 40) - 20);
  }
  else
  {
    v8 = *(uint32_t *)(v4 + 40);
    v9 = (uint32_t *)(v8 + 20 * v7);
    if ( v5 != *v9 )
    {
      v10 = v8 + 20 * v7 - 20;
      while ( --v7 != -1 )
      {
        v9 = (uint32_t *)v10;
        v10 -= 20;
        if ( v5 == *(uint32_t *)(v10 + 20) )
          goto LABEL_10;
      }
      v9 = (uint32_t *)(v8 - 20);
    }
  }
LABEL_10:
  v9[4] = (uint32_t)(uintptr_t)(a4);
  return a4;
}

// ----------------------------------------------------------------------------
// Function: hkDataClassDict::getDeclaredMemberIndexByName  (binary VA: 0x18aaf50)
// Original: hkDataClassDict::getDeclaredMemberIndexByName
// ----------------------------------------------------------------------------
int hkDataClassDict::getDeclaredMemberIndexByName(hkDataClassDict::Self *self, hkString::Self *a2)
{
  int v2;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v3;
  int v4;
  uint32_t *v5;
  int v6;
  hkString::Self *v8;

  v2 = 0;
  if ( a2 != nullptr )
  {
    v3 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(*(uint32_t *)(*((uint32_t *)self + 3) + 8) + 80);
    v2 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(v3, a2, 0);
    if ( v2 == 0 )
    {
      v8 = hkString::strDup(a2);
      hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v3, v8, (unsigned int)(uintptr_t)(v8));
      v2 = (int)(uintptr_t)(v8);
    }
  }
  v4 = *((uint32_t *)self + 11);
  if ( v4 <= 0 )
    return -1;
  v5 = *((uint32_t **)self + 10);
  if ( v2 != *v5 )
  {
    v6 = 0;
    while ( ++v6 != v4 )
    {
      v5 += 5;
      if ( v2 == *v5 )
        return v6;
    }
    return -1;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldDict::renameClass  (binary VA: 0x18ab000)
// Original: hkDataWorldDict::renameClass
// ----------------------------------------------------------------------------
int hkDataWorldDict::renameClass(hkDataWorldDict::Self *self, hkDataClass::Self *a2, hkString::Self *a3)
{
  hkString::Self *v3;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v4;
  hkString::Self *v5;
  int v6;
  int v7;
  hkString::Self *v8;
  hkString::Self *v9;
  bool v10;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v11;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef unsigned int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef hkString::Self *_g4_t_v19;
  typedef unsigned int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *_g4_t_v22;
  typedef hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *_g4_t_v23;
  typedef hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *_g4_t_v24;
  typedef hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *_g4_t_v25;
  typedef unsigned int _g4_t_v26;
  typedef hkString::Self *_g4_t_v27;
  typedef hkString::Self *_g4_t_v28;
  typedef hkString::Self *_g4_t_v29;
  typedef hkString::Self *_g4_t_v30;
  typedef uint32_t _g4_t_v31[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v14)) > _g4_s1 ? (4u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v15)) > _g4_s2 ? (8u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v16)) > _g4_s3 ? (12u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v17)) > _g4_s4 ? (16u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v18)) > _g4_s5 ? (16u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v19)) > _g4_s6 ? (16u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v20)) > _g4_s7 ? (20u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v21)) > _g4_s8 ? (20u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v22)) > _g4_s9 ? (24u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v23)) > _g4_s10 ? (24u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v24)) > _g4_s11 ? (28u + sizeof(_g4_t_v24)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v25)) > _g4_s12 ? (28u + sizeof(_g4_t_v25)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v26)) > _g4_s13 ? (32u + sizeof(_g4_t_v26)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v27)) > _g4_s14 ? (32u + sizeof(_g4_t_v27)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v28)) > _g4_s15 ? (36u + sizeof(_g4_t_v28)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v29)) > _g4_s16 ? (36u + sizeof(_g4_t_v29)) : _g4_s16,
    _g4_s18 = (36u + sizeof(_g4_t_v30)) > _g4_s17 ? (36u + sizeof(_g4_t_v30)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_v31)) > _g4_s18 ? (40u + sizeof(_g4_t_v31)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);

  v3 = (hkString::Self *)(*(int (**)(uint32_t, int, int, int, int, unsigned int, unsigned int, hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *, hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *, unsigned int, hkString::Self *, uint32_t, uint32_t, uint32_t, uint32_t))(**(uint32_t **)a2 + 12))(
                     *(uint32_t *)a2,
                     v13,
                     v14,
                     v15,
                     v16,
                     v17,
                     v20,
                     v22,
                     v24,
                     v26,
                     v28,
                     v31[0],
                     v31[1],
                     v31[2],
                     v31[3]);
  if ( v3 != nullptr )
  {
    v4 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(*((uint32_t *)self + 2) + 80);
    v25 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(v3);
    v5 = (hkString::Self *)hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(v4, v3, 0);
    v27 = v5;
    v29 = v5;
    if ( v5 == nullptr )
    {
      v29 = hkString::strDup(v25);
      hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v4, v29, (unsigned int)(uintptr_t)(v29));
      v5 = v29;
      v27 = v29;
    }
  }
  else
  {
    v29 = nullptr;
    v27 = nullptr;
    v5 = nullptr;
  }
  if ( hkTypeManager::getClass((hkTypeManager::Self *)((hkDataWorldDict::Self *)((char *)self + 16)), v5) != 0 )
    hkTypeManager::renameClass((hkTypeManager::Self *)((hkDataWorldDict::Self *)((char *)self + 16)), v29, a3);
  v6 = *((uint32_t *)self + 2);
  v23 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(v6 + 4);
  if ( v29 == nullptr )
  {
    v21 = 0;
    if ( a3 != nullptr )
      goto LABEL_8;
LABEL_15:
    v8 = nullptr;
    v9 = nullptr;
    goto LABEL_11;
  }
  v21 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
          (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(*((uint32_t *)self + 2) + 4),
          v27,
          0);
  if ( a3 == nullptr )
    goto LABEL_15;
LABEL_8:
  v7 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
         (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(v6 + 80),
         a3,
         0);
  v8 = (hkString::Self *)v7;
  if ( v7 == 0 )
  {
    v19 = hkString::strDup(a3);
    hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
      (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(v6 + 80),
      v19,
      (unsigned int)(uintptr_t)(v19));
    v7 = (int)(uintptr_t)(v19);
    v8 = v19;
  }
  v9 = (hkString::Self *)v7;
LABEL_11:
  v10 = v29 == v9;
  v30 = v9;
  if ( !v10 )
  {
    v11 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(v6 + 96);
    v18 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(v11, v27, 0);
    hkCachedHashMap_hkStringMapOperations_hk_b9db0c::remove(
      (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)v31,
      v11,
      v27);
    *(uint32_t *)(v18 + 8) = (uint32_t)(uintptr_t)(v30);
    hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v11, v8, v18);
  }
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::remove(
    (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)v31,
    v23,
    v27);
  return hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v23, v8, v21);
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectDict::accessByName  (binary VA: 0x18ab310)
// Original: hkDataObjectDict::accessByName
// ----------------------------------------------------------------------------
hkDataObjectDict::Self * hkDataObjectDict::accessByName(hkDataObjectDict::Self *self, const char *a2, hkString::Self *a3)
{
  uint32_t *v3;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v4;
  int v5;
  int v6;
  uint32_t *v7;
  uint32_t *v8;
  int v9;
  uint32_t *v10;
  hkString::Self *v12;

  v3 = *((uint32_t **)a2 + 3);
  if ( a3 == nullptr )
  {
    v5 = 0;
    goto LABEL_5;
  }
  v4 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(*(uint32_t *)(v3[3] + 8) + 80);
  v5 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(v4, a3, 0);
  if ( v5 == 0 )
  {
    v12 = hkString::strDup(a3);
    hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v4, v12, (unsigned int)(uintptr_t)(v12));
    v5 = (int)(uintptr_t)(v12);
  }
  v3 = *((uint32_t **)a2 + 3);
  if ( v3 == nullptr )
  {
LABEL_11:
    *(uint32_t *)self = 0;
    *((uint32_t *)self + 1) = 0;
    return self;
  }
LABEL_5:
  while ( 1 )
  {
    v6 = v3[11];
    if ( v6 > 0 )
      break;
LABEL_10:
    v3 = (uint32_t *)v3[6];
    if ( v3 == nullptr )
      goto LABEL_11;
  }
  v7 = (uint32_t *)v3[10];
  if ( v5 != *v7 )
  {
    v8 = v7 + 5;
    v9 = 0;
    while ( ++v9 != v6 )
    {
      v10 = v8;
      v8 += 5;
      if ( v5 == *(v8 - 5) )
        goto LABEL_13;
    }
    goto LABEL_10;
  }
  v10 = (uint32_t *)v3[10];
LABEL_13:
  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(v10);
  return self;
}



// ============================================================================
// Address:   0x18ab5a0 (size: 414 bytes)
// Symbol:    _ZNK15hkDataWorldDict9newObjectERK11hkDataClassb
// Demangled: hkDataWorldDict::newObject(hkDataClass const&,bool)const
// ============================================================================
void (***hkDataWorldDict::newObject(
        hkDataWorldDict::Self *self,
        const hkDataClass::Self *a2,
        bool a3))(hkDataObjectDict::Self * self)
{
  int v3;
  int address;
  void (***v5)(hkDataObjectDict::Self *);
  void (**v6)(hkDataObjectDict::Self *);
  int v7;
  uint32_t *v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  void (****v12)(hkDataObjectDict::Self *);
  int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;

  v3 = *(uint32_t *)a2;
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v5 = (void (***)(hkDataObjectDict::Self *))(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44)
                                                                                       + 8))(
                                                         *(uint32_t *)(*(uint32_t *)address + 44),
                                                         32);
  v5[1] = (void (**)(hkDataObjectDict::Self *))-65536;
  v5[2] = nullptr;
  v6 = (void (**)(hkDataObjectDict::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A7088));
  *v5 = (void (**)(hkDataObjectDict::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A7088));
  if ( v3 != 0 )
  {
    ++*(uint32_t *)(v3 + 8);
    v6 = *v5;
    v7 = (int)(uintptr_t)(v5[2]) + 1;
  }
  else
  {
    v7 = 1;
  }
  v5[2] = (void (**)(hkDataObjectDict::Self *))v7;
  v5[3] = (void (**)(hkDataObjectDict::Self *))v3;
  v5[4] = nullptr;
  v5[7] = (void (**)(hkDataObjectDict::Self *))a3;
  v5[5] = nullptr;
  v5[6] = (void (**)(hkDataObjectDict::Self *))0x80000000;
  v8 = *((uint32_t **)self + 2);
  v9 = ((int (*)(uint32_t *))v6[3])((uint32_t *)(v5));
  v10 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
          (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(v8 + 16),
          v9,
          0xFFFFFFFF);
  v11 = v8[19];
  v16 = v10;
  if ( v11 == -1 )
  {
    v11 = v8[14];
    if ( v11 == (v8[15] & 0x3FFFFFFF) )
    {
      v17 = v8[14];
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkMemoryAllocator::Self *)(v8 + 13),
        8,
        v15);
      v14 = v8[14];
      v11 = v17;
    }
    else
    {
      v14 = v8[14];
    }
    v8[14] = v14 + 1;
    v12 = (void (****)(hkDataObjectDict::Self *))(v8[13] + 8 * v11);
  }
  else
  {
    v12 = (void (****)(hkDataObjectDict::Self *))(v8[13] + 8 * v11);
    v8[19] = (uint32_t)(uintptr_t)(v12[1]);
  }
  *v12 = v5;
  v12[1] = (void (***)(hkDataObjectDict::Self *))v16;
  hkMapBase_unsigned_long_unsigned_l_393416::insert(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(v8 + 16),
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
    v9,
    v11);
  if ( v8[12] == 0 )
    v8[12] = (uint32_t)(uintptr_t)(v5);
  return v5;
}
// ----------------------------------------------------------------------------
// Function: hkDataClassDict::getMemberIndexByName  (binary VA: 0x18ab740)
// Original: hkDataClassDict::getMemberIndexByName
// ----------------------------------------------------------------------------
int hkDataClassDict::getMemberIndexByName(hkDataClassDict::Self *self, hkString::Self *a2)
{
  hkDataClassDict::Self *v2;
  int v3;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v4;
  int v5;
  uint32_t *v6;
  int v7;
  int v9;
  hkString::Self *v10;

  v2 = self;
  v3 = 0;
  if ( a2 != nullptr )
  {
    v4 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(*(uint32_t *)(*((uint32_t *)self + 3) + 8) + 80);
    v3 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(v4, a2, 0);
    if ( v3 == 0 )
    {
      v10 = hkString::strDup(a2);
      hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v4, v10, (unsigned int)(uintptr_t)(v10));
      v3 = (int)(uintptr_t)(v10);
    }
  }
  while ( 1 )
  {
    v5 = *((uint32_t *)v2 + 11);
    if ( v5 > 0 )
      break;
LABEL_9:
    v2 = *((hkDataClassDict::Self **)v2 + 6);
    if ( v2 == nullptr )
      return -1;
  }
  v6 = *((uint32_t **)v2 + 10);
  v7 = 0;
  if ( v3 != *v6 )
  {
    while ( ++v7 != v5 )
    {
      v6 += 5;
      if ( v3 == *v6 )
        goto LABEL_11;
    }
    goto LABEL_9;
  }
LABEL_11:
  v9 = G4_VCALL<int>(v2, 40);
  return v7 + v9 - G4_VCALL<int>(v2, 28);
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectDict::hasMember  (binary VA: 0x18ab800)
// Original: hkDataObjectDict::hasMember
// ----------------------------------------------------------------------------
bool hkDataObjectDict::hasMember(hkDataObjectDict::Self *self, hkString::Self *a2)
{
  int v2;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v3;
  int v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  int v8;
  uint32_t *v9;
  uint32_t *v10;
  int v11;
  uint32_t *v12;
  hkString::Self *v14;

  v2 = 0;
  if ( a2 != nullptr )
  {
    v3 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 3) + 12)
                                                                                        + 8)
                                                                            + 80);
    v2 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(v3, a2, 0);
    if ( v2 == 0 )
    {
      v14 = hkString::strDup(a2);
      hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v3, v14, (unsigned int)(uintptr_t)(v14));
      v2 = (int)(uintptr_t)(v14);
    }
  }
  v4 = *((uint32_t *)self + 5);
  if ( v4 > 0 )
  {
    v5 = *((uint32_t **)self + 4);
    if ( v2 == *v5 )
      return true;
    v6 = 0;
    while ( ++v6 != v4 )
    {
      v5 += 3;
      if ( *v5 == v2 )
        return true;
    }
  }
  v7 = *((uint32_t **)self + 3);
  if ( v7 == nullptr )
    return false;
  while ( 1 )
  {
    v8 = v7[11];
    if ( v8 > 0 )
      break;
LABEL_15:
    v7 = (uint32_t *)v7[6];
    if ( v7 == nullptr )
      return false;
  }
  v9 = (uint32_t *)v7[10];
  if ( *v9 != v2 )
  {
    v10 = v9 + 5;
    v11 = 0;
    while ( ++v11 != v8 )
    {
      v12 = v10;
      v10 += 5;
      if ( *(v10 - 5) == v2 )
        return v12[4] != 0;
    }
    goto LABEL_15;
  }
  v12 = (uint32_t *)v7[10];
  return v12[4] != 0;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectDict::destroyMember  (binary VA: 0x18ab900)
// Original: hkDataObjectDict::destroyMember
// ----------------------------------------------------------------------------
int hkDataObjectDict::destroyMember(hkDataObjectDict::Self *self, hkString::Self *a2)
{
  int result;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v3;
  int v4;
  char *v5;
  int v6;
  char *v7;
  int v8;
  uint32_t *v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  int v13;
  uint32_t *v14;
  char *v15;
  uint32_t *v16;
  int v17;
  int v18;
  hkString::Self *v19;
  int v20;
  int v21;

  result = 0;
  if ( a2 != nullptr )
  {
    v3 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 3) + 12)
                                                                                        + 8)
                                                                            + 80);
    result = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(v3, a2, 0);
    if ( result == 0 )
    {
      v19 = hkString::strDup(a2);
      hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v3, v19, (unsigned int)(uintptr_t)(v19));
      result = (int)(uintptr_t)(v19);
    }
  }
  v4 = *((uint32_t *)self + 5);
  if ( v4 <= 0 )
    return result;
  v5 = *((char **)self + 4);
  v6 = *(uint32_t *)v5;
  if ( result == *(uint32_t *)v5 )
  {
    v18 = *((uint32_t *)self + 4);
    v20 = 0;
    v8 = 0;
  }
  else
  {
    v7 = v5 + 12;
    v8 = 0;
    v17 = result;
    do
    {
      if ( ++v8 == v4 )
        return result;
      v20 = v7 - v5;
      result = (int)(uintptr_t)(v7);
      v7 += 12;
      v6 = *((uint32_t *)v7 - 3);
    }
    while ( v6 != v17 );
    v18 = result;
  }
  if ( *((uint32_t *)self + 3) == 0 )
    goto LABEL_20;
  v21 = v8;
  v9 = *((uint32_t **)self + 3);
  while ( 1 )
  {
    v10 = v9[11];
    if ( v10 > 0 )
      break;
LABEL_18:
    v9 = (uint32_t *)v9[6];
    if ( v9 == nullptr )
    {
      v8 = v21;
      v4 = *((uint32_t *)self + 5);
      v5 = *((char **)self + 4);
      goto LABEL_20;
    }
  }
  v11 = (uint32_t *)v9[10];
  if ( v6 != *v11 )
  {
    v12 = v11 + 5;
    v13 = 0;
    while ( ++v13 != v10 )
    {
      v14 = v12;
      v12 += 5;
      if ( v6 == *(v12 - 5) )
      {
        v8 = v21;
        v16 = v14;
        goto LABEL_23;
      }
    }
    goto LABEL_18;
  }
  v8 = v21;
  v16 = (uint32_t *)v9[10];
LABEL_23:
  sub_18AACF0((hkMemoryAllocator::Self **)v16[3], (hkString::Self **)(v18 + 4), (hkMemoryAllocator::Self *)((char *)&dword_0 + 1));
  v5 = *((char **)self + 4);
  v4 = *((uint32_t *)self + 5);
LABEL_20:
  result = v4 - 1;
  *((uint32_t *)self + 5) = v4 - 1;
  if ( v8 != v4 - 1 )
  {
    v15 = &v5[12 * result];
    result = (int)(uintptr_t)(&v5[v20]);
    *(uint32_t *)result = *(uint32_t *)v15;
    *(uint32_t *)(result + 4) = *((uint32_t *)v15 + 1);
    *(uint32_t *)(result + 8) = *((uint32_t *)v15 + 2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldDict::addClassMember  (binary VA: 0x18abaa0)
// Original: hkDataWorldDict::addClassMember
// ----------------------------------------------------------------------------
hkString::Self * hkDataWorldDict::addClassMember(hkDataWorldDict::Self *self, hkDataClass::Self *a2, hkString::Self *a3, hkTypeManager::Type::Self *a4, hkString::Self *a5)
{
  hkString::Self *v5;
  hkString::Self *v6;
  uint32_t *v7;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  char *v15;
  int v16;
  int i;
  uint32_t *j;
  hkString::Self **v19;
  int v20;
  int v21;
  hkString::Self **v22;
  int v24;
  hkString::Self *v25;
  char *v26;

  v5 = nullptr;
  v6 = a3;
  v7 = *(uint32_t **)a2;
  if ( a3 != nullptr )
  {
    v8 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(*((uint32_t *)self + 2) + 80);
    v5 = (hkString::Self *)hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(v8, a3, 0);
    v6 = a3;
    if ( v5 == nullptr )
    {
      v5 = hkString::strDup(a3);
      hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v8, v5, (unsigned int)(uintptr_t)(v5));
      v6 = a3;
    }
  }
  if ( G4_VCALL<int>(v7, 36, v6) == -1 )
    goto LABEL_23;
  v9 = v7[10];
  v10 = v7[11] - 1;
  if ( v10 < 0 )
  {
    v25 = (hkString::Self *)v7[10];
    v26 = (char *)(v9 - 20);
    v14 = 0;
    v12 = -1;
  }
  else
  {
    v25 = (hkString::Self *)v7[10];
    if ( v5 == *(hkString::Self **)(v9 + 20 * v10) )
    {
      v7[11] = v10;
      goto LABEL_15;
    }
    v11 = v9 + 20 * v10 - 20;
    v12 = v7[11] - 1;
    do
    {
      if ( --v12 == -1 )
      {
        v14 = 0;
        v26 = (char *)v25 - 20;
        v12 = -1;
        goto LABEL_11;
      }
      v13 = v11;
      v11 -= 20;
    }
    while ( v5 != *(hkString::Self **)(v11 + 20) );
    v26 = (char *)v13;
    v14 = 4 * (5 * v12 + 5);
  }
LABEL_11:
  v15 = (char *)v25 + v14;
  v7[11] = v10;
  v16 = 20 * (v10 - v12);
  if ( v16 > 0 )
  {
    for ( i = 0; i < v16; i += 4 )
      *(uint32_t *)&v26[i] = *(uint32_t *)&v15[i];
    v10 = v7[11];
  }
LABEL_15:
  for ( j = v7; ; v10 = j[11] )
  {
    if ( v10 > 0 )
    {
      v19 = (hkString::Self **)j[10];
      if ( v5 == *v19 )
        break;
      v20 = 0;
      while ( ++v20 != v10 )
      {
        v19 += 5;
        if ( v5 == *v19 )
          goto LABEL_23;
      }
    }
    j = (uint32_t *)j[6];
    if ( j == nullptr )
      break;
  }
LABEL_23:
  v21 = v7[11];
  if ( v21 == (v7[12] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(*(hkArrayUtil::Self **)(v7[3] + 12), (hkMemoryAllocator::Self *)(v7 + 10), 20, v24);
    v21 = v7[11];
  }
  v22 = (hkString::Self **)(v7[10] + 20 * v21);
  v22[1] = nullptr;
  v22[3] = (hkString::Self *)(a4);
  *v22 = v5;
  v22[2] = nullptr;
  v22[4] = a5;
  ++v7[11];
  return a5;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectDict::assign  (binary VA: 0x18abcb0)
// Original: hkDataObjectDict::assign
// ----------------------------------------------------------------------------
int hkDataObjectDict::assign(uint32_t *a1, int *a2, int a3)
{
  uint32_t *v3;
  int v4;
  char *v5;
  int v6;
  char *v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;
  char *v14;
  int v15;
  uint32_t *v16;
  bool v17;
  uint32_t *v18;
  int v19;

  v3 = a1;
  v4 = a1[5];
  if ( v4 <= 0 )
  {
LABEL_7:
    v8 = a1[5];
    if ( (a1[6] & 0x3FFFFFFF) == v4 )
    {
      hkArrayUtil::reserveMore(*(hkArrayUtil::Self **)(*(uint32_t *)(v3[3] + 12) + 12), (hkMemoryAllocator::Self *)(a1 + 4), 12, v19);
      v8 = a1[5];
    }
    *(uint32_t *)(a1[4] + 12 * v8) = 0;
    v9 = a1[5];
    v10 = a1[4];
    a1[5] = v9 + 1;
    v11 = (uint32_t *)(v10 + 12 * v9);
    v12 = *a2;
    v11[1] = 0;
    *v11 = v12;
    v11[2] = 0;
    v5 = (char *)a1[4];
    v19 = 12 * v4;
    goto LABEL_10;
  }
  v5 = (char *)a1[4];
  v6 = 0;
  v7 = v5 + 12;
  if ( *(uint32_t *)v5 != *a2 )
  {
    while ( ++v6 != v4 )
    {
      v19 = v7 - v5;
      v14 = v7;
      v7 += 12;
      if ( *((uint32_t *)v7 - 3) == *a2 )
        goto LABEL_11;
    }
    v3 = a1;
    goto LABEL_7;
  }
  v14 = (char *)a1[4];
  v19 = 0;
LABEL_11:
  v15 = *(uint32_t *)a2[3];
  if ( (unsigned int)(v15 - 8) <= 1 )
  {
    v16 = *((uint32_t **)v14 + 1);
    if ( v16 != nullptr )
    {
      v17 = v16[2]-- == 1;
      if ( v17 )
        G4_VCALL<void>(v16, 4);
    }
    goto LABEL_16;
  }
  if ( v15 == 6 || v15 == 7 )
  {
    v18 = *((uint32_t **)v14 + 1);
    *((uint32_t *)v14 + 1) = 0;
    if ( v18 != nullptr )
    {
      v17 = v18[2]-- == 1;
      if ( v17 )
      {
        G4_VCALL<void>(v18, 4);
        v5 = (char *)a1[4];
        goto LABEL_10;
      }
    }
    goto LABEL_17;
  }
  if ( v15 == 5 )
  {
    hkString::strFree(*((hkString::Self **)v14 + 1));
LABEL_16:
    *((uint32_t *)v14 + 1) = 0;
LABEL_17:
    v5 = (char *)a1[4];
  }
LABEL_10:
  *(uint32_t *)&v5[v19 + 4] = a3;
  return v19;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectDict::assign  (binary VA: 0x18abe60)
// Original: hkDataObjectDict::assign
// ----------------------------------------------------------------------------
int hkDataObjectDict::assign(uint32_t *a1, int *a2, int16_t a3)
{
  uint32_t *v3;
  int v4;
  char *v5;
  int v6;
  char *v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;
  char *v14;
  int v15;
  uint32_t *v16;
  bool v17;
  uint32_t *v18;
  int v19;
  int v20;

  LOWORD(v20) = a3;
  v3 = a1;
  v4 = a1[5];
  if ( v4 <= 0 )
  {
LABEL_7:
    v8 = a1[5];
    if ( (a1[6] & 0x3FFFFFFF) == v4 )
    {
      hkArrayUtil::reserveMore(*(hkArrayUtil::Self **)(*(uint32_t *)(v3[3] + 12) + 12), (hkMemoryAllocator::Self *)(a1 + 4), 12, v19);
      v8 = a1[5];
    }
    *(uint32_t *)(a1[4] + 12 * v8) = 0;
    v9 = a1[5];
    v10 = a1[4];
    a1[5] = v9 + 1;
    v11 = (uint32_t *)(v10 + 12 * v9);
    v12 = *a2;
    v11[1] = 0;
    *v11 = v12;
    v11[2] = 0;
    v5 = (char *)a1[4];
    v19 = 12 * v4;
    goto LABEL_10;
  }
  v5 = (char *)a1[4];
  v6 = 0;
  v7 = v5 + 12;
  if ( *(uint32_t *)v5 != *a2 )
  {
    while ( ++v6 != v4 )
    {
      v19 = v7 - v5;
      v14 = v7;
      v7 += 12;
      if ( *((uint32_t *)v7 - 3) == *a2 )
        goto LABEL_11;
    }
    v3 = a1;
    goto LABEL_7;
  }
  v14 = (char *)a1[4];
  v19 = 0;
LABEL_11:
  v15 = *(uint32_t *)a2[3];
  if ( (unsigned int)(v15 - 8) <= 1 )
  {
    v16 = *((uint32_t **)v14 + 1);
    if ( v16 != nullptr )
    {
      v17 = v16[2]-- == 1;
      if ( v17 )
        G4_VCALL<void>(v16, 4);
    }
    goto LABEL_16;
  }
  if ( v15 == 6 || v15 == 7 )
  {
    v18 = *((uint32_t **)v14 + 1);
    *((uint32_t *)v14 + 1) = 0;
    if ( v18 != nullptr )
    {
      v17 = v18[2]-- == 1;
      if ( v17 )
      {
        G4_VCALL<void>(v18, 4);
        v5 = (char *)a1[4];
        goto LABEL_10;
      }
    }
    goto LABEL_17;
  }
  if ( v15 == 5 )
  {
    hkString::strFree(*((hkString::Self **)v14 + 1));
LABEL_16:
    *((uint32_t *)v14 + 1) = 0;
LABEL_17:
    v5 = (char *)a1[4];
  }
LABEL_10:
  *(uint32_t *)&v5[v19 + 4] = v20 << 16;
  return v20 << 16;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectDict::assign_ea18ac020  (binary VA: 0x18ac020)
// Original: hkDataObjectDict::assign
// ----------------------------------------------------------------------------
int hkDataObjectDict::assign_ea18ac020(uint32_t *a1, int *a2, int a3)
{
  uint32_t *v3;
  int v4;
  char *v5;
  int v6;
  char *v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;
  char *v14;
  int v15;
  uint32_t *v16;
  bool v17;
  uint32_t *v18;
  int v19;

  if ( a3 != 0 )
    ++*(uint32_t *)(a3 + 8);
  v3 = a1;
  v4 = a1[5];
  if ( v4 <= 0 )
  {
LABEL_9:
    v8 = a1[5];
    if ( (a1[6] & 0x3FFFFFFF) == v4 )
    {
      hkArrayUtil::reserveMore(*(hkArrayUtil::Self **)(*(uint32_t *)(v3[3] + 12) + 12), (hkMemoryAllocator::Self *)(a1 + 4), 12, v19);
      v8 = a1[5];
    }
    *(uint32_t *)(a1[4] + 12 * v8) = 0;
    v9 = a1[5];
    v10 = a1[4];
    a1[5] = v9 + 1;
    v11 = (uint32_t *)(v10 + 12 * v9);
    v12 = *a2;
    v11[1] = 0;
    *v11 = v12;
    v11[2] = 0;
    v5 = (char *)a1[4];
    v19 = 12 * v4;
    goto LABEL_12;
  }
  v5 = (char *)a1[4];
  v6 = 0;
  v7 = v5 + 12;
  if ( *(uint32_t *)v5 != *a2 )
  {
    while ( ++v6 != v4 )
    {
      v19 = v7 - v5;
      v14 = v7;
      v7 += 12;
      if ( *((uint32_t *)v7 - 3) == *a2 )
        goto LABEL_13;
    }
    v3 = a1;
    goto LABEL_9;
  }
  v14 = (char *)a1[4];
  v19 = 0;
LABEL_13:
  v15 = *(uint32_t *)a2[3];
  if ( (unsigned int)(v15 - 8) <= 1 )
  {
    v16 = *((uint32_t **)v14 + 1);
    if ( v16 != nullptr )
    {
      v17 = v16[2]-- == 1;
      if ( v17 )
        G4_VCALL<void>(v16, 4);
    }
    goto LABEL_18;
  }
  if ( v15 == 6 || v15 == 7 )
  {
    v18 = *((uint32_t **)v14 + 1);
    *((uint32_t *)v14 + 1) = 0;
    if ( v18 != nullptr )
    {
      v17 = v18[2]-- == 1;
      if ( v17 )
      {
        G4_VCALL<void>(v18, 4);
        v5 = (char *)a1[4];
        goto LABEL_12;
      }
    }
    goto LABEL_19;
  }
  if ( v15 == 5 )
  {
    hkString::strFree(*((hkString::Self **)v14 + 1));
LABEL_18:
    *((uint32_t *)v14 + 1) = 0;
LABEL_19:
    v5 = (char *)a1[4];
  }
LABEL_12:
  *(uint32_t *)&v5[v19 + 4] = a3;
  return v19;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectDict::assign  (binary VA: 0x18ac1e0)
// Original: hkDataObjectDict::assign
// ----------------------------------------------------------------------------
int hkDataObjectDict::assign(uint32_t *a1, int *a2, int64_t a3)
{
  uint32_t *v3;
  int v4;
  char *v5;
  int v6;
  char *v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;
  int result;
  char *v14;
  char *v15;
  uint32_t *v16;
  bool v17;
  uint32_t *v18;
  int v19;
  float v20;

  v3 = a1;
  v4 = a1[5];
  if ( v4 <= 0 )
  {
LABEL_7:
    v8 = a1[5];
    if ( (a1[6] & 0x3FFFFFFF) == v4 )
    {
      hkArrayUtil::reserveMore(*(hkArrayUtil::Self **)(*(uint32_t *)(v3[3] + 12) + 12), (hkMemoryAllocator::Self *)(a1 + 4), 12, v19);
      v8 = a1[5];
    }
    *(uint32_t *)(a1[4] + 12 * v8) = 0;
    v9 = a1[5];
    v10 = a1[4];
    a1[5] = v9 + 1;
    v11 = (uint32_t *)(v10 + 12 * v9);
    v12 = *a2;
    v11[1] = 0;
    *v11 = v12;
    v11[2] = 0;
    v19 = 12 * v4;
    v5 = (char *)a1[4];
    result = *(uint32_t *)a2[3];
    goto LABEL_10;
  }
  v5 = (char *)a1[4];
  v6 = 0;
  v7 = v5 + 12;
  if ( *(uint32_t *)v5 != *a2 )
  {
    while ( ++v6 != v4 )
    {
      v19 = v7 - v5;
      v15 = v7;
      v7 += 12;
      if ( *((uint32_t *)v7 - 3) == *a2 )
        goto LABEL_14;
    }
    v3 = a1;
    goto LABEL_7;
  }
  v15 = (char *)a1[4];
  v19 = 0;
LABEL_14:
  result = *(uint32_t *)a2[3];
  if ( (unsigned int)(result - 8) <= 1 )
  {
    v16 = *((uint32_t **)v15 + 1);
    if ( v16 != nullptr )
    {
      v17 = v16[2]-- == 1;
      if ( v17 )
        G4_VCALL<void>(v16, 4);
    }
    goto LABEL_19;
  }
  if ( result == 6 || result == 7 )
  {
    v18 = *((uint32_t **)v15 + 1);
    *((uint32_t *)v15 + 1) = 0;
    if ( v18 != nullptr )
    {
      v17 = v18[2]-- == 1;
      if ( v17 )
        G4_VCALL<void>(v18, 4);
    }
LABEL_20:
    v14 = (char *)(v19 + a1[4]);
    result = *(uint32_t *)a2[3];
    if ( result == 3 )
      goto LABEL_21;
    goto LABEL_11;
  }
  if ( result == 5 )
  {
    hkString::strFree(*((hkString::Self **)v15 + 1));
LABEL_19:
    *((uint32_t *)v15 + 1) = 0;
    goto LABEL_20;
  }
LABEL_10:
  v14 = &v5[v19];
  if ( result == 3 )
  {
LABEL_21:
    v20 = (float)a3;
    *((float *)v14 + 1) = v20;
    return result;
  }
LABEL_11:
  if ( result == 4 || result == 2 )
  {
    *(uint64_t *)(v14 + 4) = a3;
    return a3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectDict::assign_ea18ac410  (binary VA: 0x18ac410)
// Original: hkDataObjectDict::assign
// ----------------------------------------------------------------------------
int hkDataObjectDict::assign_ea18ac410(uint32_t *a1, int *a2, int a3)
{
  uint32_t *v3;
  int v4;
  char *v5;
  int v6;
  char *v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;
  int result;
  char *v14;
  char *v15;
  uint32_t *v16;
  bool v17;
  uint32_t *v18;
  int v19;

  v3 = a1;
  v4 = a1[5];
  if ( v4 <= 0 )
  {
LABEL_7:
    v8 = a1[5];
    if ( (a1[6] & 0x3FFFFFFF) == v4 )
    {
      hkArrayUtil::reserveMore(*(hkArrayUtil::Self **)(*(uint32_t *)(v3[3] + 12) + 12), (hkMemoryAllocator::Self *)(a1 + 4), 12, v19);
      v8 = a1[5];
    }
    *(uint32_t *)(a1[4] + 12 * v8) = 0;
    v10 = a1[4];
    v9 = a1[5];
    a1[5] = v9 + 1;
    v11 = (uint32_t *)(v10 + 12 * v9);
    v12 = *a2;
    v11[1] = 0;
    *v11 = v12;
    v11[2] = 0;
    v5 = (char *)a1[4];
    v19 = 12 * v4;
    result = *(uint32_t *)a2[3];
    goto LABEL_10;
  }
  v5 = (char *)a1[4];
  v6 = 0;
  v7 = v5 + 12;
  if ( *(uint32_t *)v5 != *a2 )
  {
    while ( ++v6 != v4 )
    {
      v19 = v7 - v5;
      v15 = v7;
      v7 += 12;
      if ( *((uint32_t *)v7 - 3) == *a2 )
        goto LABEL_14;
    }
    v3 = a1;
    goto LABEL_7;
  }
  v15 = (char *)a1[4];
  v19 = 0;
LABEL_14:
  result = *(uint32_t *)a2[3];
  if ( (unsigned int)(result - 8) <= 1 )
  {
    v16 = *((uint32_t **)v15 + 1);
    if ( v16 != nullptr )
    {
      v17 = v16[2]-- == 1;
      if ( v17 )
        G4_VCALL<void>(v16, 4);
    }
    goto LABEL_19;
  }
  switch ( result )
  {
    case 5:
      hkString::strFree(*((hkString::Self **)v15 + 1));
LABEL_19:
      *((uint32_t *)v15 + 1) = 0;
      goto LABEL_20;
    case 6:
      v18 = *((uint32_t **)v15 + 1);
      *((uint32_t *)v15 + 1) = 0;
      if ( v18 != nullptr )
      {
        v17 = v18[2]-- == 1;
        if ( v17 )
          goto LABEL_30;
      }
      goto LABEL_20;
    case 7:
      v18 = *((uint32_t **)v15 + 1);
      *((uint32_t *)v15 + 1) = 0;
      if ( v18 != nullptr )
      {
        v17 = v18[2]-- == 1;
        if ( v17 )
LABEL_30:
          G4_VCALL<void>(v18, 4);
      }
LABEL_20:
      v14 = (char *)(v19 + a1[4]);
      result = *(uint32_t *)a2[3];
      if ( result == 3 )
        goto LABEL_21;
      goto LABEL_11;
    default:
LABEL_10:
      v14 = &v5[v19];
      if ( result == 3 )
      {
LABEL_21:
        *((float *)v14 + 1) = (float)a3;
        return result;
      }
LABEL_11:
      if ( result == 4 || result == 2 )
      {
        *(uint64_t *)(v14 + 4) = a3;
        return a3;
      }
      return result;
  }
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectDict::assign  (binary VA: 0x18ac640)
// Original: hkDataObjectDict::assign
// ----------------------------------------------------------------------------
hkString::Self * hkDataObjectDict::assign(uint32_t *a1, int *a2, hkString::Self *a3)
{
  int v3;
  int v4;
  char *v5;
  int v6;
  char *v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;
  char *v13;
  hkString::Self *result;
  char *v15;
  int v16;
  uint32_t *v17;
  bool v18;
  uint32_t *v19;
  int v20;

  v3 = (int)(uintptr_t)(a1);
  v4 = a1[5];
  if ( v4 <= 0 )
  {
LABEL_7:
    v8 = a1[5];
    if ( (a1[6] & 0x3FFFFFFF) == v4 )
    {
      hkArrayUtil::reserveMore(
        *(hkArrayUtil::Self **)(*(uint32_t *)(*(uint32_t *)(v3 + 12) + 12) + 12),
        (hkMemoryAllocator::Self *)(a1 + 4),
        12,
        v20);
      v8 = a1[5];
    }
    *(uint32_t *)(a1[4] + 12 * v8) = 0;
    v9 = a1[5];
    v10 = a1[4];
    a1[5] = v9 + 1;
    v11 = (uint32_t *)(v10 + 12 * v9);
    v12 = *a2;
    v11[1] = 0;
    *v11 = v12;
    v11[2] = 0;
    v5 = (char *)a1[4];
    v20 = 12 * v4;
    goto LABEL_10;
  }
  v5 = (char *)a1[4];
  v6 = 0;
  v7 = v5 + 12;
  if ( *(uint32_t *)v5 != *a2 )
  {
    while ( ++v6 != v4 )
    {
      v20 = v7 - v5;
      v15 = v7;
      v7 += 12;
      if ( *((uint32_t *)v7 - 3) == *a2 )
        goto LABEL_13;
    }
    v3 = (int)(uintptr_t)(a1);
    goto LABEL_7;
  }
  v15 = (char *)a1[4];
  v20 = 0;
LABEL_13:
  v16 = *(uint32_t *)a2[3];
  if ( (unsigned int)(v16 - 8) <= 1 )
  {
    v17 = *((uint32_t **)v15 + 1);
    if ( v17 != nullptr )
    {
      v18 = v17[2]-- == 1;
      if ( v18 )
        G4_VCALL<void>(v17, 4);
    }
LABEL_18:
    *((uint32_t *)v15 + 1) = 0;
LABEL_19:
    v5 = (char *)a1[4];
    goto LABEL_10;
  }
  if ( v16 != 6 && v16 != 7 )
  {
    if ( v16 != 5 )
      goto LABEL_10;
    hkString::strFree(*((hkString::Self **)v15 + 1));
    goto LABEL_18;
  }
  v19 = *((uint32_t **)v15 + 1);
  *((uint32_t *)v15 + 1) = 0;
  if ( v19 == nullptr )
    goto LABEL_19;
  v18 = v19[2]-- == 1;
  if ( !v18 )
    goto LABEL_19;
  G4_VCALL<void>(v19, 4);
  v5 = (char *)a1[4];
LABEL_10:
  v13 = &v5[v20];
  result = nullptr;
  if ( a3 != nullptr )
    result = hkString::strDup(a3);
  *((uint32_t *)v13 + 1) = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectDict::assign  (binary VA: 0x18ac800)
// Original: hkDataObjectDict::assign
// ----------------------------------------------------------------------------
int hkDataObjectDict::assign(uint32_t *a1, int *a2, uint32_t *a3)
{
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  hkString::Self **v6;
  int v7;
  hkString::Self **v8;
  int v9;
  int v10;
  int v11;
  hkString::Self **v12;
  hkString::Self *v13;
  hkTypeManager::Type::Self *v14;
  int result;
  int v16;
  hkString::Self *v17;
  bool v18;
  hkString::Self *v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef hkTypeManager::Type::Self *_g4_t_v25;
  typedef hkTypeManager::Type::Self *_g4_t_v26;
  typedef uint32_t _g4_t_v27[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v20)) > _g4_s0 ? (12u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v21)) > _g4_s1 ? (16u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v22)) > _g4_s2 ? (20u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v23)) > _g4_s3 ? (24u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v24)) > _g4_s4 ? (28u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v25)) > _g4_s5 ? (32u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v26)) > _g4_s6 ? (32u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v27)) > _g4_s7 ? (36u + sizeof(_g4_t_v27)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);

  ++a3[2];
  v3 = a1;
  v4 = a1[5];
  if ( v4 <= 0 )
  {
LABEL_7:
    v9 = a1[5];
    if ( (a1[6] & 0x3FFFFFFF) == v4 )
    {
      hkArrayUtil::reserveMore(*(hkArrayUtil::Self **)(*(uint32_t *)(v3[3] + 12) + 12), (hkMemoryAllocator::Self *)(a1 + 4), 12, v22);
      v9 = a1[5];
    }
    *(uint32_t *)(a1[4] + 12 * v9) = 0;
    v10 = a1[4];
    v11 = a1[5];
    a1[5] = v11 + 1;
    v12 = (hkString::Self **)(v10 + 12 * v11);
    v13 = (hkString::Self *)*a2;
    v12[1] = nullptr;
    *v12 = v13;
    v12[2] = nullptr;
    goto LABEL_10;
  }
  v5 = (uint32_t *)a1[4];
  if ( *v5 != *a2 )
  {
    v6 = (hkString::Self **)(v5 + 3);
    v7 = 0;
    while ( ++v7 != v4 )
    {
      v8 = v6;
      v6 += 3;
      if ( (hkString::Self *)*a2 == *(v6 - 3) )
        goto LABEL_14;
    }
    v3 = a1;
    goto LABEL_7;
  }
  v8 = (hkString::Self **)a1[4];
  v7 = 0;
LABEL_14:
  v16 = *(uint32_t *)a2[3];
  if ( (unsigned int)(v16 - 8) <= 1 )
  {
    v17 = v8[1];
    if ( v17 != nullptr )
    {
      v18 = (*((uint32_t *)v17 + 2))-- == 1;
      if ( v18 )
      {
        v25 = (hkTypeManager::Type::Self *)v8;
        G4_VCALL<void>(v17, 4);
        v8 = (hkString::Self **)v25;
      }
    }
    v8[1] = nullptr;
    v4 = v7;
  }
  else
  {
    if ( v16 == 6 || v16 == 7 )
    {
      v19 = v8[1];
      v8[1] = nullptr;
      if ( v19 != nullptr )
      {
        v18 = (*((uint32_t *)v19 + 2))-- == 1;
        if ( v18 )
        {
          v4 = v7;
          G4_VCALL<void>(v19, 4);
          goto LABEL_10;
        }
      }
    }
    else if ( v16 == 5 )
    {
      v25 = (hkTypeManager::Type::Self *)v8;
      v4 = v7;
      hkString::strFree(v8[1]);
      *((uint32_t *)v25 + 1) = 0;
      goto LABEL_10;
    }
    v4 = v7;
  }
LABEL_10:
  v14 = (hkTypeManager::Type::Self *)G4_VCALL<int>(a3, 8, v20, v21, v22, v23, v24, v25, v27[0], v27[1], v27[2], v27[3]);
  v26 = *(hkTypeManager::Type::Self **)(a2[3] + 4);
  hkTypeManager::Type::isEqual((hkTypeManager::Type::Self *)((char *)v27 + 3), v26, v14);
  result = (int)(uintptr_t)(v26);
  if ( HIBYTE(v27[0]) != 0
    || *(uint32_t *)v26 == 6 && (result = hkTypeManager::Type::getTypeName(v26)) == 0 && *(uint32_t *)v14 == 6 )
  {
    result = a1[4] + 12 * v4;
    *(uint32_t *)(result + 4) = (uint32_t)(uintptr_t)(a3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectDict::destroy  (binary VA: 0x18aca30)
// Original: hkDataObjectDict::destroy
// ----------------------------------------------------------------------------
hkDataObjectDict::Self * hkDataObjectDict::destroy(hkDataObjectDict::Self *self)
{
  uint32_t *i;
  int v2;
  int v3;
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  uint32_t *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint32_t *v14;
  bool v15;
  uint32_t *v16;
  uint32_t *v17;
  int v18;
  int v19;
  uint32_t *v20;
  int v21;

  if ( *((int *)self + 5) <= 0 )
  {
    v8 = *((uint32_t **)self + 3);
    goto LABEL_19;
  }
  v21 = *((uint32_t *)self + 5);
  v18 = 0;
  v20 = *((uint32_t **)self + 3);
  for ( i = v20; ; i = v8 )
  {
    v19 = *((uint32_t *)self + 4) + 12 * v18;
    v2 = *(uint32_t *)v19;
    if ( i == nullptr )
    {
      v8 = nullptr;
      v9 = v21;
LABEL_11:
      if ( ++v18 >= v9 )
        break;
      goto LABEL_12;
    }
    while ( 1 )
    {
      v3 = i[11];
      if ( v3 > 0 )
        break;
LABEL_9:
      i = (uint32_t *)i[6];
      if ( i == nullptr )
        goto LABEL_10;
    }
    v4 = (uint32_t *)i[10];
    if ( v2 != *v4 )
    {
      v5 = v4 + 5;
      v6 = 0;
      while ( ++v6 != v3 )
      {
        v7 = v5;
        v5 += 5;
        if ( v2 == *(v5 - 5) )
          goto LABEL_14;
      }
      goto LABEL_9;
    }
    v7 = (uint32_t *)i[10];
LABEL_14:
    v10 = *(uint32_t *)v7[3];
    if ( (unsigned int)(v10 - 8) <= 1 )
    {
      v14 = *(uint32_t **)(v19 + 4);
      if ( v14 != nullptr )
      {
        v15 = v14[2]-- == 1;
        if ( v15 )
          G4_VCALL<void>(v14, 4);
      }
      *(uint32_t *)(v19 + 4) = 0;
      v9 = *((uint32_t *)self + 5);
      v21 = v9;
      v8 = *((uint32_t **)self + 3);
      goto LABEL_11;
    }
    switch ( v10 )
    {
      case 5:
        hkString::strFree(*(hkString::Self **)(v19 + 4));
        *(uint32_t *)(v19 + 4) = 0;
        ++v18;
        v8 = *((uint32_t **)self + 3);
        v21 = *((uint32_t *)self + 5);
        if ( v18 >= v21 )
          goto LABEL_19;
LABEL_12:
        v20 = v8;
        break;
      case 6:
        v17 = *(uint32_t **)(v19 + 4);
        *(uint32_t *)(v19 + 4) = 0;
        if ( v17 != nullptr )
        {
          G4_VCALL<void>(v17, 116);
          v15 = v17[2]-- == 1;
          if ( v15 )
            G4_VCALL<void>(v17, 4);
        }
        goto LABEL_29;
      case 7:
        v16 = *(uint32_t **)(v19 + 4);
        *(uint32_t *)(v19 + 4) = 0;
        if ( v16 != nullptr )
        {
          v15 = v16[2]-- == 1;
          if ( v15 )
            G4_VCALL<void>(v16, 4);
        }
LABEL_29:
        v8 = *((uint32_t **)self + 3);
        v21 = *((uint32_t *)self + 5);
        v9 = v21;
        goto LABEL_11;
      default:
LABEL_10:
        v8 = v20;
        v9 = v21;
        goto LABEL_11;
    }
  }
LABEL_19:
  v11 = *(uint32_t *)(v8[3] + 12);
  *((uint32_t *)self + 5) = 0;
  v12 = *((uint32_t *)self + 6);
  if ( v12 >= 0 )
    G4_VCALL<void>(v11, 20, *((uint32_t *)self + 4), 12 * v12);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldDict::newClass  (binary VA: 0x18acc70)
// Original: hkDataWorldDict::newClass
// ----------------------------------------------------------------------------
hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> * hkDataWorldDict::newClass(int a1, hkString::Self **a2)
{
  int address;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v3;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v4;
  bool v5;
  int v6;
  int v7;
  int32_t v8; // kr00_4
  int v9;
  int v10;
  int32_t v11; // kr04_4
  int32_t v12;
  int32_t v13; // ett
  int v14;
  int v15;
  int32_t v16; // kr08_4
  int v17;
  int v18;
  int32_t v19; // kr0C_4
  int32_t v20;
  int32_t v21; // ett
  hkString::Self *v22;
  int v23;
  uint32_t *v24;
  uint32_t *v25;
  hkString::Self *v26;
  int Key;
  hkString::Self **v28;
  int v29;
  int v30;
  int *v31;
  int v32;
  hkString::Self *v33;
  int v34;
  int v35;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v36;
  int v37;
  hkString::Self *v39;
  unsigned int v40;
  unsigned int v41;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> **v42;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v43;
  int v44;
  int savedregs;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *_g4_t_v49;
  typedef hkMemoryAllocator::Self *_g4_t_v50;
  typedef unsigned int _g4_t_v51;
  typedef hkString::Self *_g4_t_v52;
  typedef hkString::Self *_g4_t_v53;
  typedef hkString::Self *_g4_t_v54;
  typedef hkString::Self *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef unsigned int _g4_t_v60;
  typedef unsigned int _g4_t_v61;
  typedef unsigned int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef signed int _g4_t_v64;
  typedef hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *_g4_t_v65;
  typedef hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *_g4_t_v66;
  typedef hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *_g4_t_v67;
  typedef hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *_g4_t_v68;
  typedef hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *_g4_t_v69;
  typedef hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *_g4_t_v70;
  typedef hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *_g4_t_v71;
  typedef int _g4_t_v72;
  typedef uint32_t _g4_t_v73[5];
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef hkString::Self *_g4_t_v81;
  typedef int _g4_t_v82;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v45)) > _g4_s0 ? (4u + sizeof(_g4_t_v45)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v46)) > _g4_s1 ? (8u + sizeof(_g4_t_v46)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v47)) > _g4_s2 ? (12u + sizeof(_g4_t_v47)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v48)) > _g4_s3 ? (16u + sizeof(_g4_t_v48)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v49)) > _g4_s4 ? (16u + sizeof(_g4_t_v49)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v50)) > _g4_s5 ? (16u + sizeof(_g4_t_v50)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v51)) > _g4_s6 ? (16u + sizeof(_g4_t_v51)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v52)) > _g4_s7 ? (20u + sizeof(_g4_t_v52)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v53)) > _g4_s8 ? (20u + sizeof(_g4_t_v53)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v54)) > _g4_s9 ? (20u + sizeof(_g4_t_v54)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v55)) > _g4_s10 ? (20u + sizeof(_g4_t_v55)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v56)) > _g4_s11 ? (24u + sizeof(_g4_t_v56)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v57)) > _g4_s12 ? (24u + sizeof(_g4_t_v57)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v58)) > _g4_s13 ? (24u + sizeof(_g4_t_v58)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_v59)) > _g4_s14 ? (24u + sizeof(_g4_t_v59)) : _g4_s14,
    _g4_s16 = (24u + sizeof(_g4_t_v60)) > _g4_s15 ? (24u + sizeof(_g4_t_v60)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_v61)) > _g4_s16 ? (28u + sizeof(_g4_t_v61)) : _g4_s16,
    _g4_s18 = (28u + sizeof(_g4_t_v62)) > _g4_s17 ? (28u + sizeof(_g4_t_v62)) : _g4_s17,
    _g4_s19 = (28u + sizeof(_g4_t_v63)) > _g4_s18 ? (28u + sizeof(_g4_t_v63)) : _g4_s18,
    _g4_s20 = (28u + sizeof(_g4_t_v64)) > _g4_s19 ? (28u + sizeof(_g4_t_v64)) : _g4_s19,
    _g4_s21 = (32u + sizeof(_g4_t_v65)) > _g4_s20 ? (32u + sizeof(_g4_t_v65)) : _g4_s20,
    _g4_s22 = (32u + sizeof(_g4_t_v66)) > _g4_s21 ? (32u + sizeof(_g4_t_v66)) : _g4_s21,
    _g4_s23 = (32u + sizeof(_g4_t_v67)) > _g4_s22 ? (32u + sizeof(_g4_t_v67)) : _g4_s22,
    _g4_s24 = (32u + sizeof(_g4_t_v68)) > _g4_s23 ? (32u + sizeof(_g4_t_v68)) : _g4_s23,
    _g4_s25 = (32u + sizeof(_g4_t_v69)) > _g4_s24 ? (32u + sizeof(_g4_t_v69)) : _g4_s24,
    _g4_s26 = (32u + sizeof(_g4_t_v70)) > _g4_s25 ? (32u + sizeof(_g4_t_v70)) : _g4_s25,
    _g4_s27 = (32u + sizeof(_g4_t_v71)) > _g4_s26 ? (32u + sizeof(_g4_t_v71)) : _g4_s26,
    _g4_s28 = (36u + sizeof(_g4_t_v72)) > _g4_s27 ? (36u + sizeof(_g4_t_v72)) : _g4_s27,
    _g4_s29 = (40u + sizeof(_g4_t_v73)) > _g4_s28 ? (40u + sizeof(_g4_t_v73)) : _g4_s28,
    _g4_s30 = (60u + sizeof(_g4_t_v74)) > _g4_s29 ? (60u + sizeof(_g4_t_v74)) : _g4_s29,
    _g4_s31 = (64u + sizeof(_g4_t_v75)) > _g4_s30 ? (64u + sizeof(_g4_t_v75)) : _g4_s30,
    _g4_s32 = (68u + sizeof(_g4_t_v76)) > _g4_s31 ? (68u + sizeof(_g4_t_v76)) : _g4_s31,
    _g4_s33 = (72u + sizeof(_g4_t_v77)) > _g4_s32 ? (72u + sizeof(_g4_t_v77)) : _g4_s32,
    _g4_s34 = (76u + sizeof(_g4_t_v78)) > _g4_s33 ? (76u + sizeof(_g4_t_v78)) : _g4_s33,
    _g4_s35 = (80u + sizeof(_g4_t_v79)) > _g4_s34 ? (80u + sizeof(_g4_t_v79)) : _g4_s34,
    _g4_s36 = (84u + sizeof(_g4_t_v80)) > _g4_s35 ? (84u + sizeof(_g4_t_v80)) : _g4_s35,
    _g4_s37 = (92u + sizeof(_g4_t_v81)) > _g4_s36 ? (92u + sizeof(_g4_t_v81)) : _g4_s36,
    _g4_s38 = (96u + sizeof(_g4_t_v82)) > _g4_s37 ? (96u + sizeof(_g4_t_v82)) : _g4_s37
  };
  alignas(16) uint8_t _g4_sf[_g4_s38];
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 4u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 8u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 12u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 16u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 16u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 16u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 20u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 20u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 20u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 20u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 24u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 24u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 24u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 24u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 24u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 28u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 28u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 28u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 28u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 32u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 32u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 32u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 32u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 32u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 32u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 32u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 36u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 40u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 60u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 64u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 68u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 72u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 76u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 80u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 84u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 92u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 96u);

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v3 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(*(int (**)(uint32_t, int, int, int, int, int, hkString::Self *, int, unsigned int, hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *, int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, int, int, int, int, int, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                                                             *(uint32_t *)(*(uint32_t *)address + 44),
                                                                             64,
                                                                             v45,
                                                                             v46,
                                                                             v47,
                                                                             v48,
                                                                             v52,
                                                                             v56,
                                                                             v61,
                                                                             v65,
                                                                             v72,
                                                                             v73[0],
                                                                             v73[1],
                                                                             v73[2],
                                                                             v73[3],
                                                                             v73[4],
                                                                             v74,
                                                                             v75,
                                                                             v76,
                                                                             v77,
                                                                             v78,
                                                                             v79,
                                                                             v80);
  v62 = (unsigned int)(uintptr_t)(a2[1]);
  v4 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(*a2);
  *((uint32_t *)v3 + 1) = -65536;
  v66 = v4;
  *((uint32_t *)v3 + 2) = 0;
  *(uint32_t *)v3 = ((uint32_t)(uintptr_t)&off_20A7048);
  *((uint32_t *)v3 + 3) = a1;
  v5 = word_2139D76 == 0;
  v6 = *(uint32_t *)(a1 + 8);
  *((uint32_t *)v3 + 4) = 0;
  v57 = v6;
  if ( !v5 )
  {
    do
    {
      v8 = *(uint32_t *)(&reinterpret_cast<G4Elf32Sym *>(stru_7FD74)->st_info + (uint32_t)(uintptr_t)(dword_20B9FF4));
      HIWORD(v7) = HIWORD(v8);
      LOWORD(v7) = 0;
    }
    while ( v8 != __sync_val_compare_and_swap(
                    (volatile int32_t *)&unk_2139D74,
                    v8,
                    v7 | (uint16_t)(v8 + 1)) );
    v9 = *((uint32_t *)v3 + 4);
    if ( v9 != 0 && *(uint16_t *)(v9 + 6) != 0 )
    {
      v49 = v3;
      do
      {
        v11 = *(uint32_t *)(v9 + 4);
        HIWORD(v10) = HIWORD(v11);
        LOWORD(v10) = 0;
        v12 = v10 | (uint16_t)(v11 - 1);
        v13 = v11;
      }
      while ( v13 != __sync_val_compare_and_swap((volatile int32_t *)(v9 + 4), v13, v12) );
      v3 = v49;
      if ( (uint16_t)v12 == 0 )
        G4_VCALL<void>(v9, 16);
    }
  }
  *((uint32_t *)v3 + 4) = (uint32_t)(uintptr_t)(&dword_2139D70);
  if ( v66 != nullptr )
  {
    v14 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
            (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(v57 + 96),
            v66,
            0);
    if ( v14 == 0 )
    {
      sub_18A83D0(v73, v57, v66);
      v70 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)v73[0];
      v43 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                                                                  *(uint32_t *)(*(uint32_t *)address + 44),
                                                                                  12);
      *((uint32_t *)v43 + 1) = -65535;
      *(uint32_t *)v43 = ((uint32_t)(uintptr_t)&off_20A6F30);
      *((uint32_t *)v43 + 2) = (uint32_t)(uintptr_t)(v70);
      v81 = (hkString::Self *)(v70);
      v71 = v43;
      hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
        (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(v57 + 96),
        v81,
        (unsigned int)(uintptr_t)(v43));
      v14 = (int)(uintptr_t)(v71);
    }
    if ( *(uint16_t *)(v14 + 6) != 0 )
    {
      v67 = v3;
      do
      {
        v16 = *(uint32_t *)(v14 + 4);
        HIWORD(v15) = HIWORD(v16);
        LOWORD(v15) = 0;
      }
      while ( v16 != __sync_val_compare_and_swap(
                       (volatile int32_t *)(v14 + 4),
                       v16,
                       v15 | (uint16_t)(v16 + 1)) );
      v3 = v67;
    }
    v17 = *((uint32_t *)v3 + 4);
    if ( v17 != 0 && *(uint16_t *)(v17 + 6) != 0 )
    {
      v58 = v14;
      do
      {
        v19 = *(uint32_t *)(v17 + 4);
        HIWORD(v18) = HIWORD(v19);
        LOWORD(v18) = 0;
        v20 = v18 | (uint16_t)(v19 - 1);
        v21 = v19;
      }
      while ( v21 != __sync_val_compare_and_swap((volatile int32_t *)(v17 + 4), v21, v20) );
      v14 = v58;
      if ( (uint16_t)v20 == 0 )
      {
        G4_VCALL<void>(v17, 16);
        v14 = v58;
      }
    }
    *((uint32_t *)v3 + 4) = v14;
  }
  *((uint32_t *)v3 + 6) = 0;
  *((uint32_t *)v3 + 5) = v62;
  *((uint32_t *)v3 + 7) = 0;
  *((uint32_t *)v3 + 8) = 0;
  *((uint32_t *)v3 + 9) = 0x80000000;
  *((uint32_t *)v3 + 10) = 0;
  *((uint32_t *)v3 + 11) = 0;
  *((uint32_t *)v3 + 12) = 0x80000000;
  *((uint32_t *)v3 + 13) = 0;
  *((uint32_t *)v3 + 14) = 0;
  *((uint32_t *)v3 + 15) = 0x80000000;
  v22 = a2[2];
  if ( v22 != nullptr )
  {
    v81 = a2[2];
    v82 = 0;
    v23 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
            (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(*(uint32_t *)(a1 + 8) + 4),
            v22,
            0);
    if ( v23 != 0 )
      ++*(uint32_t *)(v23 + 8);
    v24 = *((uint32_t **)v3 + 6);
    if ( v24 != nullptr )
    {
      v5 = v24[2]-- == 1;
      if ( v5 )
      {
        v68 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)v23;
        G4_VCALL<void>(v24, 4);
        v23 = (int)(uintptr_t)(v68);
      }
    }
    *((uint32_t *)v3 + 6) = v23;
  }
  ++*((uint32_t *)v3 + 2);
  v25 = *(uint32_t **)(a1 + 8);
  v63 = G4_VCALL<int>(v3, 20);
  v26 = (hkString::Self *)G4_VCALL<int>(v3, 12);
  Key = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::findKey(
          (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(v25 + 1),
          v26);
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::isValid((bool *)&v72 + 3, (int)(uintptr_t)(v25 + 1), Key);
  if ( HIBYTE(v72) == 0 )
  {
    v39 = (hkString::Self *)G4_VCALL<int>(v3, 12);
    hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
      (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(v25 + 1),
      v39,
      (unsigned int)(uintptr_t)(v3));
    if ( v63 != 0 )
    {
      v40 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
              (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(v25 + 8),
              v63,
              0xFFFFFFFF);
      v41 = v25[11];
      v60 = v40;
      if ( v41 == -1 )
      {
        v41 = v25[6];
        if ( v41 == (v25[7] & 0x3FFFFFFF) )
        {
          v51 = v25[6];
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)(v25 + 5),
            8,
            savedregs);
          v44 = v25[6];
          v41 = v51;
        }
        else
        {
          v44 = v25[6];
        }
        v25[6] = v44 + 1;
        v42 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> **)(v25[5] + 8 * v41);
      }
      else
      {
        v42 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> **)(v25[5] + 8 * v41);
        v25[11] = (uint32_t)(uintptr_t)(v42[1]);
      }
      *v42 = v3;
      v42[1] = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)v60;
      hkMapBase_unsigned_long_unsigned_l_393416::insert(
        (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(v25 + 8),
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        v63,
        v41);
    }
  }
  v50 = (hkMemoryAllocator::Self *)((hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)((char *)v3 + 40));
  v28 = a2;
  if ( (int)(uintptr_t)(a2[4]) > 0 )
  {
    v64 = 0;
    v69 = v3;
    do
    {
      v32 = (int)(uintptr_t)(a2[3]) + 12 * v64;
      v33 = *(hkString::Self **)v32;
      v59 = *(uint32_t *)(v32 + 4);
      v34 = *(uint32_t *)(a1 + 8);
      v35 = 0;
      if ( v33 != nullptr )
      {
        v53 = v33;
        v36 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(v34 + 80);
        v35 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
                (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(v34 + 80),
                v33,
                0);
        if ( v35 == 0 )
        {
          v55 = hkString::strDup(v53);
          hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v36, v55, (unsigned int)(uintptr_t)(v55));
          v35 = (int)(uintptr_t)(v55);
        }
      }
      v74 = 0;
      v75 = 0;
      v37 = *((uint32_t *)v69 + 11);
      if ( v37 == (*((uint32_t *)v69 + 12) & 0x3FFFFFFF) )
      {
        v54 = (hkString::Self *)v35;
        hkArrayUtil::reserveMore(*(hkArrayUtil::Self **)(*((uint32_t *)v69 + 3) + 12), v50, 20, savedregs);
        v37 = *((uint32_t *)v69 + 11);
        v35 = (int)(uintptr_t)(v54);
      }
      v29 = v74;
      ++v64;
      v30 = v75;
      v31 = (int *)(*((uint32_t *)v69 + 10) + 20 * v37);
      *v31 = v35;
      v31[3] = v59;
      v31[2] = v30;
      v31[1] = v29;
      v31[4] = 0;
      ++*((uint32_t *)v69 + 11);
    }
    while ( (int)(uintptr_t)(a2[4]) > v64 );
    v3 = v69;
    v28 = a2;
  }
  hkTypeManager::addClass((hkTypeManager::Type::Self **)(a1 + 16), *v28);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: hkDataClassDict::Destroy  (binary VA: 0x18ad1c0)
// Original: hkDataClassDict::~hkDataClassDict
// ----------------------------------------------------------------------------
void hkDataClassDict::Destroy(hkDataClassDict::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  bool v9;
  int v10;
  int32_t v11; // kr00_4
  int v12;
  int v13;
  int32_t v14; // kr04_4
  int32_t v15;
  int32_t v16; // ett
  uint32_t *v17;
  int *v18;
  int v19;
  int32_t v20; // kr08_4
  int32_t v21;
  int32_t v22; // ett
  int address;
  int v24;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A7048);
  v1 = *(uint32_t *)(*((uint32_t *)self + 3) + 12);
  *((uint32_t *)self + 11) = 0;
  v2 = v1;
  v24 = v1;
  v3 = *((uint32_t *)self + 12);
  if ( v3 >= 0 )
    G4_VCALL<void>(v2, 20, *((uint32_t *)self + 10), 20 * v3);
  v4 = *((uint32_t *)self + 8);
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 12) = 0x80000000;
  if ( v4 > 0 )
  {
    v5 = 0;
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    do
    {
      v6 = *(uint32_t **)(*((uint32_t *)self + 7) + 4 * v5);
      v7 = v6[3];
      v6[2] = 0;
      if ( v7 >= 0 )
        G4_VCALL<void>(v24, 20, v6[1], 8 * v7);
      v6[1] = 0;
      v6[3] = 0x80000000;
      ++v5;
      (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
        *(uint32_t *)(*(uint32_t *)address + 44),
        v6,
        16);
    }
    while ( v5 < *((uint32_t *)self + 8) );
  }
  v8 = *((uint32_t *)self + 9);
  *((uint32_t *)self + 8) = 0;
  if ( v8 >= 0 )
    G4_VCALL<void>(v24, 20, *((uint32_t *)self + 7), 4 * v8);
  v9 = word_2139D76 == 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 9) = 0x80000000;
  if ( !v9 )
  {
    do
    {
      v11 = *(uint32_t *)(&reinterpret_cast<G4Elf32Sym *>(stru_7FD74)->st_info + (uint32_t)(uintptr_t)(dword_20B9FF4));
      HIWORD(v10) = HIWORD(v11);
      LOWORD(v10) = 0;
    }
    while ( v11 != __sync_val_compare_and_swap(
                     (volatile int32_t *)&unk_2139D74,
                     v11,
                     v10 | (uint16_t)(v11 + 1)) );
  }
  v12 = *((uint32_t *)self + 4);
  if ( v12 != 0 && *(uint16_t *)(v12 + 6) != 0 )
  {
    do
    {
      v14 = *(uint32_t *)(v12 + 4);
      HIWORD(v13) = HIWORD(v14);
      LOWORD(v13) = 0;
      v15 = v13 | (uint16_t)(v14 - 1);
      v16 = v14;
    }
    while ( v16 != __sync_val_compare_and_swap((volatile int32_t *)(v12 + 4), v16, v15) );
    if ( (uint16_t)v15 == 0 )
      G4_VCALL<void>(v12, 16);
  }
  v17 = *((uint32_t **)self + 6);
  v18 = (int *)(&dword_2139D70);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&dword_2139D70);
  if ( v17 == nullptr )
  {
    *((uint32_t *)self + 6) = 0;
    if ( word_2139D76 == 0 )
      goto LABEL_25;
    goto LABEL_22;
  }
  v9 = v17[2]-- == 1;
  if ( v9 )
    G4_VCALL<void>(v17, 4);
  v18 = *((int **)self + 4);
  *((uint32_t *)self + 6) = 0;
  if ( v18 != nullptr && *((uint16_t *)v18 + 3) != 0 )
  {
    do
    {
LABEL_22:
      v20 = v18[1];
      HIWORD(v19) = HIWORD(v20);
      LOWORD(v19) = 0;
      v21 = v19 | (uint16_t)(v20 - 1);
      v22 = v20;
    }
    while ( v22 != __sync_val_compare_and_swap(v18 + 1, v22, v21) );
    if ( (uint16_t)v21 == 0 )
      G4_VCALL<void>(v18, 16);
  }
LABEL_25:
  *((uint32_t *)self + 4) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
}

// ----------------------------------------------------------------------------
// Function: hkDataClassDict::Destroy_ea18ad3e0  (binary VA: 0x18ad3e0)
// Original: hkDataClassDict::~hkDataClassDict
// ----------------------------------------------------------------------------
void hkDataClassDict::Destroy_ea18ad3e0(hkDataClassDict::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  bool v10;
  int v11;
  int32_t v12; // kr00_4
  int v13;
  int v14;
  int32_t v15; // kr04_4
  int32_t v16;
  int32_t v17; // ett
  uint32_t *v18;
  int *v19;
  int v20;
  int32_t v21; // kr08_4
  int32_t v22;
  int32_t v23; // ett
  int v24;
  int v25;
  int address;
  int v27;
  int v28;
  int v29;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A7048);
  v1 = *(uint32_t *)(*((uint32_t *)self + 3) + 12);
  *((uint32_t *)self + 11) = 0;
  v2 = v1;
  v29 = v1;
  v3 = *((uint32_t *)self + 12);
  if ( v3 >= 0 )
    G4_VCALL<void>(v2, 20, *((uint32_t *)self + 10), 20 * v3);
  v4 = *((uint32_t *)self + 8);
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 12) = 0x80000000;
  if ( v4 > 0 )
  {
    v5 = 0;
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    do
    {
      v6 = *(uint32_t **)(*((uint32_t *)self + 7) + 4 * v5);
      v7 = v6[3];
      v6[2] = 0;
      if ( v7 >= 0 )
        G4_VCALL<void>(v29, 20, v6[1], 8 * v7);
      v6[1] = 0;
      v6[3] = 0x80000000;
      ++v5;
      (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
        *(uint32_t *)(*(uint32_t *)address + 44),
        v6,
        16);
    }
    while ( v5 < *((uint32_t *)self + 8) );
  }
  v8 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v9 = *((uint32_t *)self + 9);
  *((uint32_t *)self + 8) = 0;
  if ( v9 >= 0 )
    G4_VCALL<void>(v29, 20, *((uint32_t *)self + 7), 4 * v9);
  v10 = word_2139D76 == 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 9) = 0x80000000;
  if ( !v10 )
  {
    do
    {
      v12 = *(uint32_t *)(&reinterpret_cast<G4Elf32Sym *>(stru_7FD74)->st_info + (uint32_t)(uintptr_t)(dword_20B9FF4));
      HIWORD(v11) = HIWORD(v12);
      LOWORD(v11) = 0;
    }
    while ( v12 != __sync_val_compare_and_swap(
                     (volatile int32_t *)&unk_2139D74,
                     v12,
                     v11 | (uint16_t)(v12 + 1)) );
  }
  v13 = *((uint32_t *)self + 4);
  if ( v13 != 0 && *(uint16_t *)(v13 + 6) != 0 )
  {
    v27 = v8;
    do
    {
      v15 = *(uint32_t *)(v13 + 4);
      HIWORD(v14) = HIWORD(v15);
      LOWORD(v14) = 0;
      v16 = v14 | (uint16_t)(v15 - 1);
      v17 = v15;
    }
    while ( v17 != __sync_val_compare_and_swap((volatile int32_t *)(v13 + 4), v17, v16) );
    v8 = v27;
    if ( (uint16_t)v16 == 0 )
      G4_VCALL<void>(v13, 16);
  }
  v18 = *((uint32_t **)self + 6);
  v19 = (int *)(&dword_2139D70);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&dword_2139D70);
  if ( v18 == nullptr )
  {
    *((uint32_t *)self + 6) = 0;
    if ( word_2139D76 == 0 )
      goto LABEL_27;
    goto LABEL_23;
  }
  v10 = v18[2]-- == 1;
  if ( v10 )
    G4_VCALL<void>(v18, 4);
  v19 = *((int **)self + 4);
  *((uint32_t *)self + 6) = 0;
  if ( v19 != nullptr && *((uint16_t *)v19 + 3) != 0 )
  {
LABEL_23:
    v28 = v8;
    do
    {
      v21 = v19[1];
      HIWORD(v20) = HIWORD(v21);
      LOWORD(v20) = 0;
      v22 = v20 | (uint16_t)(v21 - 1);
      v23 = v21;
    }
    while ( v23 != __sync_val_compare_and_swap(v19 + 1, v23, v22) );
    v8 = v28;
    if ( (uint16_t)v22 == 0 )
      G4_VCALL<void>(v19, 16);
  }
LABEL_27:
  *((uint32_t *)self + 4) = 0;
  v24 = *((uint16_t *)self + 3);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
  v25 = 64;
  if ( v24 != 0xFFFF )
    v25 = v24;
  (*(void (**)(uint32_t, hkDataClassDict::Self *, int))(**(uint32_t **)(*(uint32_t *)v8 + 44) + 12))(
    *(uint32_t *)(*(uint32_t *)v8 + 44),
    self,
    v25);
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldDict::setClassParent  (binary VA: 0x18ad670)
// Original: hkDataWorldDict::setClassParent
// ----------------------------------------------------------------------------
unsigned int hkDataWorldDict::setClassParent(hkDataWorldDict::Self *self, hkDataClass::Self *a2, hkDataClass::Self *a3)
{
  int v3;
  int v4;
  uint32_t *v5;
  int v7;
  uint32_t *v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  uint32_t *v12;
  unsigned int result;
  unsigned int v14;
  unsigned int v15;
  hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *v16;
  unsigned int v17;
  int v18;
  uint32_t *v19;
  unsigned int v20;
  int v21;
  int v22;
  unsigned int v23;
  unsigned int Key;
  int v25;
  unsigned int v26;
  int v27;
  unsigned int v28;
  hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *v29;
  hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *v30;
  hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *v31;
  uint32_t *v32;
  int v33;
  unsigned int v34;
  hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *v35;
  unsigned int v36;
  uint32_t *v37;
  hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *v38;
  hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *v39;

  v29 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(*(int (**)(uint32_t))(**(uint32_t **)a2 + 20))(*(uint32_t *)a2);
  v3 = *(uint32_t *)a2;
  v4 = *(uint32_t *)a3;
  if ( *(uint32_t *)a3 != 0 )
    ++*(uint32_t *)(v4 + 8);
  v5 = *(uint32_t **)(v3 + 24);
  if ( v5 != nullptr && v5[2]-- == 1 )
    G4_VCALL<void>(v5, 4);
  *(uint32_t *)(v3 + 24) = v4;
  v7 = *(uint32_t *)a2;
  v8 = *((uint32_t **)self + 2);
  if ( v29 != nullptr )
  {
    v32 = *((uint32_t **)self + 2);
    v38 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(v8 + 8);
    v9 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
           (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(v8 + 8),
           (unsigned int)(uintptr_t)(v29),
           0xFFFFFFFF);
    v10 = v9;
    v8 = v32;
    if ( v9 != -1 )
    {
      v11 = v32[5];
      v33 = 8 * v9;
      v12 = (uint32_t *)(v11 + 8 * v9);
      if ( v7 == *v12 )
      {
LABEL_18:
        v20 = v12[1];
        v36 = v20;
        if ( v20 == -1 )
        {
          v37 = v8;
          Key = hkMapBase_unsigned_long_unsigned_l_393416::findKey(v38, (unsigned int)(uintptr_t)(v29));
          v8 = v37;
          v25 = v37[8] + 8 * Key;
          v26 = *(uint32_t *)(v25 + 4);
          v36 = v26;
          if ( v10 == v26 )
          {
            *(uint32_t *)(v25 + 4) = -1;
            v22 = 8 * v26;
          }
          else
          {
            v27 = 8 * v26;
            v39 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(v8[5] + v27);
            if ( v10 == *((uint32_t *)v39 + 1) )
            {
              v36 = v10;
              *((uint32_t *)v39 + 1) = -1;
              v22 = 8 * v10;
            }
            else
            {
              *(uint32_t *)(v25 + 4) = *((uint32_t *)v39 + 1);
              *(uint32_t *)(v8[5] + v33) = *(uint32_t *)(v8[5] + 8 * v36);
              v22 = v27;
            }
          }
        }
        else
        {
          v21 = *(uint32_t *)(v11 + 8 * v20);
          v12[1] = *(uint32_t *)(v11 + 8 * v20 + 4);
          *v12 = v21;
          v22 = 8 * v20;
        }
        *(uint32_t *)(v8[5] + v22 + 4) = v8[11];
        v8[11] = v36;
      }
      else
      {
        while ( 1 )
        {
          v10 = v12[1];
          if ( v10 == -1 )
            break;
          v12 = (uint32_t *)(v11 + 8 * v10);
          if ( v7 == *v12 )
          {
            v33 = 8 * v10;
            goto LABEL_18;
          }
        }
      }
    }
  }
  v30 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v8;
  result = G4_VCALL<int>(v7, 20);
  v14 = result;
  if ( result != 0 )
  {
    v35 = v30;
    v31 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)((char *)v30 + 32);
    v15 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(v31, result, 0xFFFFFFFF);
    v16 = v35;
    v34 = v15;
    v17 = *((uint32_t *)v35 + 11);
    if ( v17 == -1 )
    {
      v23 = *((uint32_t *)v35 + 6);
      if ( v23 == (*((uint32_t *)v35 + 7) & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)((char *)v35 + 20),
          8,
          v28);
        v16 = v35;
      }
      *((uint32_t *)v16 + 6) = *((uint32_t *)v35 + 6) + 1;
      v17 = v23;
      v19 = (uint32_t *)(*((uint32_t *)v16 + 5) + 8 * v23);
    }
    else
    {
      v18 = *((uint32_t *)v35 + 5) + 8 * v17;
      *((uint32_t *)v35 + 11) = *(uint32_t *)(v18 + 4);
      v19 = (uint32_t *)v18;
    }
    *v19 = v7;
    v19[1] = v34;
    return hkMapBase_unsigned_long_unsigned_l_393416::insert(
             v31,
             (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
             v14,
             v17);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataObject::Destroy  (binary VA: 0x18ad920)
// Original: hkDataObject::~hkDataObject
// ----------------------------------------------------------------------------
void hkDataObject::Destroy(hkDataObject::Self *self)
{
  uint32_t *v1;
  int v2;
  int v3;
  int v4;

  v1 = *(uint32_t **)self;
  if ( *(uint32_t *)self != 0 )
  {
    v2 = v1[1];
    LOWORD(v2) = 0;
    v3 = v2 | (uint16_t)(v1[1] - 1);
    v4 = v1[2];
    v1[1] = v3;
    v1[2] = v4 - 1;
    if ( v4 == 1 )
      G4_VCALL<void>(v1, 4);
  }
}

// ----------------------------------------------------------------------------
// Function: hkDataClassDict::selfDestruct  (binary VA: 0x18ad960)
// Original: hkDataClassDict::selfDestruct
// ----------------------------------------------------------------------------
int * hkDataClassDict::selfDestruct(hkDataClassDict::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  bool v9;
  int v10;
  int32_t v11; // kr00_4
  int v12;
  int v13;
  int32_t v14; // kr04_4
  int32_t v15;
  int32_t v16; // ett
  int address;
  int v19;

  v1 = *(uint32_t *)(*((uint32_t *)self + 3) + 12);
  *((uint32_t *)self + 11) = 0;
  v2 = v1;
  v19 = v1;
  v3 = *((uint32_t *)self + 12);
  if ( v3 >= 0 )
    G4_VCALL<void>(v2, 20, *((uint32_t *)self + 10), 20 * v3);
  v4 = *((uint32_t *)self + 8);
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 12) = 0x80000000;
  if ( v4 > 0 )
  {
    v5 = 0;
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    do
    {
      v6 = *(uint32_t **)(*((uint32_t *)self + 7) + 4 * v5);
      v7 = v6[3];
      v6[2] = 0;
      if ( v7 >= 0 )
        G4_VCALL<void>(v19, 20, v6[1], 8 * v7);
      v6[1] = 0;
      v6[3] = 0x80000000;
      ++v5;
      (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
        *(uint32_t *)(*(uint32_t *)address + 44),
        v6,
        16);
    }
    while ( *((uint32_t *)self + 8) > v5 );
  }
  v8 = *((uint32_t *)self + 9);
  *((uint32_t *)self + 8) = 0;
  if ( v8 >= 0 )
    G4_VCALL<void>(v19, 20, *((uint32_t *)self + 7), 4 * v8);
  v9 = word_2139D76 == 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 9) = 0x80000000;
  if ( !v9 )
  {
    do
    {
      v11 = *(uint32_t *)(&reinterpret_cast<G4Elf32Sym *>(stru_7FD74)->st_info + (uint32_t)(uintptr_t)(dword_20B9FF4));
      HIWORD(v10) = HIWORD(v11);
      LOWORD(v10) = 0;
    }
    while ( v11 != __sync_val_compare_and_swap(
                     (volatile int32_t *)&unk_2139D74,
                     v11,
                     v10 | (uint16_t)(v11 + 1)) );
  }
  v12 = *((uint32_t *)self + 4);
  if ( v12 != 0 && *(uint16_t *)(v12 + 6) != 0 )
  {
    do
    {
      v14 = *(uint32_t *)(v12 + 4);
      HIWORD(v13) = HIWORD(v14);
      LOWORD(v13) = 0;
      v15 = v13 | (uint16_t)(v14 - 1);
      v16 = v14;
    }
    while ( v16 != __sync_val_compare_and_swap((volatile int32_t *)(v12 + 4), v16, v15) );
    if ( (uint16_t)v15 == 0 )
      G4_VCALL<void>(v12, 16);
  }
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&dword_2139D70);
  return (int *)(&dword_2139D70);
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectDict::selfDestruct  (binary VA: 0x18adb00)
// Original: hkDataObjectDict::selfDestruct
// ----------------------------------------------------------------------------
hkDataObjectDict::Self * hkDataObjectDict::selfDestruct(hkDataObjectDict::Self *self)
{
  uint32_t *i;
  int v2;
  int v3;
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  uint32_t *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint32_t *v14;
  bool v15;
  uint32_t *v16;
  int v17;
  int v18;
  uint32_t *v19;
  int v20;

  if ( *((int *)self + 5) <= 0 )
  {
    v8 = *((uint32_t **)self + 3);
    goto LABEL_20;
  }
  v20 = *((uint32_t *)self + 5);
  v17 = 0;
  v19 = *((uint32_t **)self + 3);
  for ( i = v19; ; i = v8 )
  {
    v18 = *((uint32_t *)self + 4) + 12 * v17;
    v2 = *(uint32_t *)v18;
    if ( i == nullptr )
    {
      v8 = nullptr;
      v9 = v20;
LABEL_11:
      if ( ++v17 >= v9 )
        break;
      goto LABEL_12;
    }
    while ( 1 )
    {
      v3 = i[11];
      if ( v3 > 0 )
        break;
LABEL_9:
      i = (uint32_t *)i[6];
      if ( i == nullptr )
        goto LABEL_10;
    }
    v4 = (uint32_t *)i[10];
    if ( v2 != *v4 )
    {
      v5 = v4 + 5;
      v6 = 0;
      while ( ++v6 != v3 )
      {
        v7 = v5;
        v5 += 5;
        if ( v2 == *(v5 - 5) )
          goto LABEL_14;
      }
      goto LABEL_9;
    }
    v7 = (uint32_t *)i[10];
LABEL_14:
    v10 = *(uint32_t *)v7[3];
    if ( (unsigned int)(v10 - 8) <= 1 )
    {
      v14 = *(uint32_t **)(v18 + 4);
      if ( v14 != nullptr )
      {
        v15 = v14[2]-- == 1;
        if ( v15 )
          G4_VCALL<void>(v14, 4);
      }
      *(uint32_t *)(v18 + 4) = 0;
      v9 = *((uint32_t *)self + 5);
      v20 = v9;
      v8 = *((uint32_t **)self + 3);
      goto LABEL_11;
    }
    switch ( v10 )
    {
      case 5:
        hkString::strFree(*(hkString::Self **)(v18 + 4));
        *(uint32_t *)(v18 + 4) = 0;
LABEL_19:
        ++v17;
        v8 = *((uint32_t **)self + 3);
        v20 = *((uint32_t *)self + 5);
        if ( v17 >= v20 )
          goto LABEL_20;
LABEL_12:
        v19 = v8;
        break;
      case 6:
        v16 = *(uint32_t **)(v18 + 4);
        *(uint32_t *)(v18 + 4) = 0;
        if ( v16 == nullptr )
          goto LABEL_19;
        v15 = v16[2]-- == 1;
        if ( !v15 )
          goto LABEL_19;
LABEL_29:
        G4_VCALL<void>(v16, 4);
        goto LABEL_19;
      case 7:
        v16 = *(uint32_t **)(v18 + 4);
        *(uint32_t *)(v18 + 4) = 0;
        if ( v16 == nullptr )
          goto LABEL_19;
        v15 = v16[2]-- == 1;
        if ( !v15 )
          goto LABEL_19;
        goto LABEL_29;
      default:
LABEL_10:
        v8 = v19;
        v9 = v20;
        goto LABEL_11;
    }
  }
LABEL_20:
  v11 = *(uint32_t *)(v8[3] + 12);
  *((uint32_t *)self + 5) = 0;
  v12 = *((uint32_t *)self + 6);
  if ( v12 >= 0 )
    G4_VCALL<void>(v11, 20, *((uint32_t *)self + 4), 12 * v12);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectDict::Destroy  (binary VA: 0x18add40)
// Original: hkDataObjectDict::~hkDataObjectDict
// ----------------------------------------------------------------------------
void hkDataObjectDict::Destroy(hkDataObjectDict::Self *self)
{
  uint32_t *v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A7088);
  hkDataObjectDict::selfDestruct(self);
  v1 = *((uint32_t **)self + 3);
  if ( v1 != nullptr && v1[2]-- == 1 )
    G4_VCALL<void>(v1, 4);
  *((uint32_t *)self + 3) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectDict::Destroy_ea18adda0  (binary VA: 0x18adda0)
// Original: hkDataObjectDict::~hkDataObjectDict
// ----------------------------------------------------------------------------
void hkDataObjectDict::Destroy_ea18adda0(hkDataObjectDict::Self *self)
{
  uint32_t *v1;
  int v3;
  int v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A7088);
  hkDataObjectDict::selfDestruct(self);
  v1 = *((uint32_t **)self + 3);
  if ( v1 != nullptr && v1[2]-- == 1 )
    G4_VCALL<void>(v1, 4);
  *((uint32_t *)self + 3) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
  v3 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v4 = 32;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v4 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v3, 12, self, v4);
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectDict::readAccess  (binary VA: 0x18aedb0)
// Original: hkDataObjectDict::_readAccess
// ----------------------------------------------------------------------------
uint32_t * hkDataObjectDict::readAccess(uint32_t *a1, uint32_t *a2, int a3)
{
  int v3;
  uint32_t *v4;
  int v5;
  int i;
  bool v7;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  hkTypeManager::Type::Self *v13;
  int v14;
  int *v15;
  int TypeName;
  int v17;
  int v18;
  int16_t v19;
  int v20;
  void (*v21)(uint32_t, int);
  int TupleSize;
  int v23;
  int v24;
  hkTypeManager::Type::Self *v25;
  int v26;
  int v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int (*_g4_t_v31)(int, int);
  typedef uint32_t *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef uint32_t *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef hkTypeManager::Type::Self *_g4_t_v36;
  typedef uint32_t *_g4_t_v37;
  typedef uint32_t *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v28)) > _g4_s0 ? (4u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v29)) > _g4_s1 ? (8u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v30)) > _g4_s2 ? (12u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v31)) > _g4_s3 ? (20u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v32)) > _g4_s4 ? (20u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v33)) > _g4_s5 ? (20u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v34)) > _g4_s6 ? (20u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v35)) > _g4_s7 ? (24u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v36)) > _g4_s8 ? (24u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v37)) > _g4_s9 ? (28u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v38)) > _g4_s10 ? (28u + sizeof(_g4_t_v38)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v39)) > _g4_s11 ? (40u + sizeof(_g4_t_v39)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v40)) > _g4_s12 ? (44u + sizeof(_g4_t_v40)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 4u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 20u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 20u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 24u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 24u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 28u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 40u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 44u);

  v3 = a2[5];
  if ( v3 <= 0 )
    goto LABEL_8;
  v4 = (uint32_t *)a2[4];
  v5 = -1;
  for ( i = 0; i != v3; ++i )
  {
    v7 = *v4 == *(uint32_t *)a3;
    v4 += 3;
    if ( v7 )
      v5 = i;
  }
  if ( v5 == -1 )
  {
LABEL_8:
    v9 = a2[5];
    if ( v3 == (a2[6] & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore(*(hkArrayUtil::Self **)(*(uint32_t *)(a2[3] + 12) + 12), (hkMemoryAllocator::Self *)(a2 + 4), 12, v30);
      v9 = a2[5];
    }
    *(uint32_t *)(a2[4] + 12 * v9) = 0;
    v10 = a2[5];
    v11 = a2[4];
    a2[5] = v10 + 1;
    v12 = (uint32_t *)(v11 + 12 * v10);
    *v12 = *(uint32_t *)a3;
    v13 = *(hkTypeManager::Type::Self **)(a3 + 12);
    v14 = *(uint32_t *)v13;
    if ( *(uint32_t *)v13 == 8 )
    {
      v25 = *((hkTypeManager::Type::Self **)v13 + 1);
      v34 = v12;
      v5 = v3;
      v26 = sub_18ADFE0(*(hkDataWorldDict::Self **)(a2[3] + 12), v25);
      v34[1] = v26;
      ++*(uint32_t *)(v26 + 8);
    }
    else
    {
      switch ( v14 )
      {
        case 9:
          v32 = v12;
          v36 = *((hkTypeManager::Type::Self **)v13 + 1);
          v20 = sub_18ADFE0(*(hkDataWorldDict::Self **)(a2[3] + 12), v36);
          v32[1] = v20;
          v21 = *(void (**)(uint32_t, int))(*(uint32_t *)v20 + 20);
          TupleSize = hkTypeManager::Type::getTupleSize(v13);
          v21(v32[1], TupleSize);
          ++*(uint32_t *)(v32[1] + 8);
          if ( *(uint32_t *)(a3 + 16) != 0
            && *(uint32_t *)v36 == 3
            && (v38 = v32, (v33 = hkTypeManager::Type::getTupleSize(v13)) > 0) )
          {
            v24 = 0;
            v23 = *(uint32_t *)(a3 + 16);
            do
            {
              v28 = v24;
              v29 = *(uint32_t *)(v23 + 4 * v24++);
              G4_VCALL<void>(v38[1], 68, v28, v29);
            }
            while ( v24 != v33 );
            v5 = v3;
          }
          else
          {
            v5 = v3;
          }
          break;
        case 7:
          v12[1] = 0;
          v5 = v3;
          break;
        case 6:
          v37 = v12;
          v35 = *(uint32_t *)(a2[3] + 12);
          v31 = *(int (**)(int, int))(*(uint32_t *)v35 + 44);
          TypeName = hkTypeManager::Type::getTypeName(v13);
          v39 = v31(v35, TypeName);
          v17 = (*(int (**)(uint32_t, int *, int))(**(uint32_t **)(a2[3] + 12) + 24))(
                  *(uint32_t *)(a2[3] + 12),
                  &v39,
                  1);
          v40[0] = v17;
          if ( v17 != 0 )
          {
            v18 = *(uint32_t *)(v17 + 4);
            ++*(uint32_t *)(v17 + 8);
            v19 = v18;
            LOWORD(v18) = 0;
            *(uint32_t *)(v17 + 4) = v18 | (uint16_t)(v19 + 1);
          }
          v37[1] = v17;
          ++*(uint32_t *)(v17 + 8);
          hkDataObject::Destroy((hkDataObject::Self *)v40);
          v5 = v3;
          break;
        default:
          v15 = *(int **)(a3 + 16);
          if ( v15 != nullptr )
          {
            if ( v14 == 4 || v14 == 2 )
            {
              v27 = *v15;
              v12[2] = v15[1];
              v12[1] = v27;
              v5 = v3;
            }
            else if ( v14 == 3 )
            {
              v5 = v3;
              v12[1] = *v15;
            }
            else
            {
              v5 = v3;
              if ( v14 == 5 )
                v12[1] = (uint32_t)(uintptr_t)(hkString::strDup(*(hkString::Self **)(a3 + 16)));
            }
          }
          else
          {
            v12[1] = 0;
            v12[2] = 0;
            v5 = v3;
          }
          break;
      }
    }
  }
  *a1 = a3;
  a1[1] = v5;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectDict::asArray  (binary VA: 0x18af0b0)
// Original: hkDataObjectDict::asArray
// ----------------------------------------------------------------------------
int hkDataObjectDict::asArray(uint32_t *a1, int a2)
{
  uint32_t v3[4];

  hkDataObjectDict::readAccess(v3, a1, a2);
  return *(uint32_t *)(a1[4] + 12 * v3[1] + 4);
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectDict::asString  (binary VA: 0x18af100)
// Original: hkDataObjectDict::asString
// ----------------------------------------------------------------------------
int hkDataObjectDict::asString(uint32_t *a1, int a2)
{
  uint32_t v3[4];

  hkDataObjectDict::readAccess(v3, a1, a2);
  return *(uint32_t *)(a1[4] + 12 * v3[1] + 4);
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectDict::asInt  (binary VA: 0x18af150)
// Original: hkDataObjectDict::asInt
// ----------------------------------------------------------------------------
int64_t hkDataObjectDict::asInt(uint32_t *a1, int a2)
{
  uint32_t *v2;
  int v3;
  uint32_t v5[8];

  v5[5] = (uint32_t)(uintptr_t)(&a1);
  v2 = a1;
  hkDataObjectDict::readAccess(v5, a1, a2);
  v3 = **(uint32_t **)(v5[0] + 12);
  if ( v3 == 2 || v3 == 4 )
    return *(uint64_t *)(v2[4] + 12 * v5[1] + 4);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectDict::asObject  (binary VA: 0x18af1e0)
// Original: hkDataObjectDict::asObject
// ----------------------------------------------------------------------------
int hkDataObjectDict::asObject(uint32_t *a1, int a2)
{
  uint32_t v3[4];

  hkDataObjectDict::readAccess(v3, a1, a2);
  return *(uint32_t *)(a1[4] + 12 * v3[1] + 4);
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectDict::asVec  (binary VA: 0x18af230)
// Original: hkDataObjectDict::asVec
// ----------------------------------------------------------------------------
int hkDataObjectDict::asVec(uint32_t *a1, int a2, int a3)
{
  uint32_t *v3;
  int v4;
  int v5;
  uint32_t v7[8];

  v7[4] = (uint32_t)(uintptr_t)(&a1);
  v3 = a1;
  v4 = a3;
  hkDataObjectDict::readAccess(v7, a1, a2);
  v5 = *(uint32_t *)(v3[4] + 12 * v7[1] + 4);
  if ( v4 > *(uint32_t *)(v5 + 16) )
    return 0;
  else
    return *(uint32_t *)(v5 + 12);
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectDict::asReal  (binary VA: 0x18af2b0)
// Original: hkDataObjectDict::asReal
// ----------------------------------------------------------------------------
long double hkDataObjectDict::asReal(uint32_t *a1, int a2)
{
  uint32_t v3[4];

  hkDataObjectDict::readAccess(v3, a1, a2);
  return *(float *)(a1[4] + 12 * v3[1] + 4);
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectDict::assign  (binary VA: 0x18af310)
// Original: hkDataObjectDict::assign
// ----------------------------------------------------------------------------
int hkDataObjectDict::assign(uint32_t *a1, int *a2, int *a3)
{
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  uint32_t *v6;
  int v7;
  uint32_t *v8;
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  uint32_t *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int result;
  uint32_t *v21;
  int v22;
  uint32_t *v23;
  bool v24;
  uint32_t *v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint32_t *_g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  typedef int *_g4_t_v30;
  typedef int *_g4_t_v31;
  typedef int *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef uint32_t _g4_t_v34[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v26)) > _g4_s0 ? (0u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v27)) > _g4_s1 ? (4u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v28)) > _g4_s2 ? (8u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v29)) > _g4_s3 ? (12u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v30)) > _g4_s4 ? (16u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v31)) > _g4_s5 ? (16u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v32)) > _g4_s6 ? (20u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v33)) > _g4_s7 ? (24u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v34)) > _g4_s8 ? (28u + sizeof(_g4_t_v34)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);

  v34[4] = (uint32_t)(uintptr_t)(&a1);
  v3 = a1;
  v29 = a1;
  v30 = a2;
  v28 = (uint32_t *)*a3;
  hkDataObjectDict::readAccess(v34, (uint32_t *)*a3, a3[1]);
  v4 = v3[5];
  v26 = v34[0];
  v27 = v34[1];
  if ( v4 <= 0 )
  {
LABEL_6:
    v9 = v29;
    v10 = v4;
    if ( v4 == (v29[6] & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore(*(hkArrayUtil::Self **)(*(uint32_t *)(v29[3] + 12) + 12), (hkMemoryAllocator::Self *)(v29 + 4), 12, 1);
      v10 = v29[5];
      v9 = v29;
    }
    *(uint32_t *)(v9[4] + 12 * v10) = 0;
    v11 = v9[5];
    v12 = v9[4];
    v9[5] = v11 + 1;
    v13 = (uint32_t *)(v12 + 12 * v11);
    v14 = *v30;
    v13[1] = 0;
    *v13 = v14;
    v13[2] = 0;
    v32 = (int *)v30[3];
    v33 = 12 * v4;
    goto LABEL_9;
  }
  v5 = (uint32_t *)v3[4];
  if ( *v5 != *v30 )
  {
    v6 = v5 + 3;
    v7 = 0;
    while ( ++v7 != v4 )
    {
      v33 = (int)(uintptr_t)(v6) - v3[4];
      v8 = v6;
      v6 += 3;
      if ( *v30 == *(v6 - 3) )
      {
        v21 = v8;
        goto LABEL_21;
      }
    }
    goto LABEL_6;
  }
  v21 = (uint32_t *)v3[4];
  v33 = 0;
LABEL_21:
  v22 = *(uint32_t *)v30[3];
  if ( (unsigned int)(v22 - 8) <= 1 )
  {
    v23 = (uint32_t *)v21[1];
    if ( v23 != nullptr )
    {
      v24 = v23[2]-- == 1;
      if ( v24 )
        G4_VCALL<void>(v23, 4);
    }
    v21[1] = 0;
    v32 = (int *)v30[3];
  }
  else if ( v22 == 6 || v22 == 7 )
  {
    v25 = (uint32_t *)v21[1];
    v21[1] = 0;
    if ( v25 != nullptr )
    {
      v24 = v25[2]-- == 1;
      if ( v24 )
        G4_VCALL<void>(v25, 4);
    }
    v32 = (int *)v30[3];
  }
  else
  {
    if ( v22 == 5 )
    {
      hkString::strFree((hkString::Self *)v21[1]);
      v21[1] = 0;
    }
    v32 = (int *)v30[3];
  }
LABEL_9:
  v15 = *(uint32_t *)(v28[4] + 12 * v27 + 4);
  v31 = *(int **)(v26 + 12);
  v16 = *v31;
  if ( (unsigned int)(*v31 - 8) <= 1 )
  {
    if ( (unsigned int)(*v32 - 8) > 1 )
      goto LABEL_12;
    goto LABEL_15;
  }
  if ( v16 == 7 )
  {
    if ( *v32 != 7 )
    {
LABEL_12:
      v17 = v28[4] + 12 * v27;
      goto LABEL_13;
    }
LABEL_15:
    if ( v15 != 0 )
    {
      ++*(uint32_t *)(v15 + 8);
      v17 = v28[4] + 12 * v27;
      goto LABEL_13;
    }
    goto LABEL_12;
  }
  v17 = v28[4] + 12 * v27;
  if ( v16 == 6 && v31 == v32 )
    goto LABEL_15;
LABEL_13:
  v18 = *(uint32_t *)(v17 + 8);
  v19 = v29[4];
  result = *(uint32_t *)(v17 + 4);
  *(uint32_t *)(v19 + v33 + 4) = result;
  *(uint32_t *)(v19 + v33 + 8) = v18;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectDict::assign  (binary VA: 0x18af5a0)
// Original: hkDataObjectDict::assign
// ----------------------------------------------------------------------------
char * hkDataObjectDict::assign(uint32_t *a1, int *a2, void *a3, int a4)
{
  uint32_t *v4;
  int v5;
  uint32_t *v6;
  uint32_t *v7;
  int v8;
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  uint32_t *v13;
  int v14;
  hkTypeManager::Type::Self *v15;
  char *result;
  hkTypeManager::Type::Self *v17;
  int v18;
  int v19;
  hkString::Self *v20;
  uint32_t *v21;
  bool v22;
  uint32_t *v23;
  int v24;
  void (*v25)(uint32_t, int);
  int TupleSize;
  uint32_t *v27;

  v4 = a1;
  v5 = a1[5];
  if ( v5 <= 0 )
  {
LABEL_6:
    v10 = a1[5];
    if ( v5 == (a1[6] & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore(
        *(hkArrayUtil::Self **)(*(uint32_t *)(a1[3] + 12) + 12),
        (hkMemoryAllocator::Self *)(a1 + 4),
        12,
        (int)(uintptr_t)(a1));
      v4 = v27;
      v10 = v27[5];
    }
    *(uint32_t *)(v4[4] + 12 * v10) = 0;
    v11 = v4[5];
    v12 = v4[4];
    v4[5] = v11 + 1;
    v13 = (uint32_t *)(v12 + 12 * v11);
    v14 = *a2;
    v13[1] = 0;
    *v13 = v14;
    v13[2] = 0;
    v15 = (hkTypeManager::Type::Self *)a2[3];
    result = *(char **)v15;
    goto LABEL_9;
  }
  v6 = (uint32_t *)a1[4];
  if ( *v6 != *a2 )
  {
    v7 = v6 + 3;
    v8 = 0;
    while ( ++v8 != v5 )
    {
      v9 = v7;
      v7 += 3;
      if ( *(v7 - 3) == *a2 )
        goto LABEL_18;
    }
    goto LABEL_6;
  }
  v9 = (uint32_t *)a1[4];
  v8 = 0;
LABEL_18:
  result = *(char **)a2[3];
  if ( (unsigned int)(uintptr_t)(result - 8) <= 1 )
  {
    v21 = (uint32_t *)v9[1];
    if ( v21 != nullptr )
    {
      v22 = v21[2]-- == 1;
      if ( v22 )
      {
        G4_VCALL<void>(v21, 4);
        v4 = a1;
      }
    }
    v9[1] = 0;
    v5 = v8;
    v15 = (hkTypeManager::Type::Self *)a2[3];
    result = *(char **)v15;
  }
  else if ( result == (char *)&loc_6 || result == (char *)(uintptr_t)((uint8_t *)&loc_6 + 1) )
  {
    v23 = (uint32_t *)v9[1];
    v9[1] = 0;
    if ( v23 != nullptr && (v22 = v23[2] == 1, --v23[2], v22) )
    {
      v5 = v8;
      G4_VCALL<void>(v23, 4);
      v4 = a1;
      v15 = (hkTypeManager::Type::Self *)a2[3];
      result = *(char **)v15;
    }
    else
    {
      v5 = v8;
      v15 = (hkTypeManager::Type::Self *)a2[3];
      result = *(char **)v15;
    }
  }
  else if ( result == (char *)(uintptr_t)((uint8_t *)&loc_4 + 1) )
  {
    v5 = v8;
    hkString::strFree((hkString::Self *)v9[1]);
    v9[1] = 0;
    v4 = a1;
    v15 = (hkTypeManager::Type::Self *)a2[3];
    result = *(char **)v15;
  }
  else
  {
    v15 = (hkTypeManager::Type::Self *)a2[3];
    v5 = v8;
  }
LABEL_9:
  if ( result == (char *)(uintptr_t)(byte_9) )
  {
    v17 = *((hkTypeManager::Type::Self **)v15 + 1);
    if ( *(uint32_t *)v17 == 3 )
    {
      v18 = v4[4] + 12 * v5;
      v19 = *(uint32_t *)(v18 + 4);
      if ( v19 == 0 )
      {
        v24 = sub_18ADFE0(*(hkDataWorldDict::Self **)(v4[3] + 12), v17);
        *(uint32_t *)(v18 + 4) = v24;
        v25 = *(void (**)(uint32_t, int))(*(uint32_t *)v24 + 20);
        TupleSize = hkTypeManager::Type::getTupleSize(v15);
        v25(*(uint32_t *)(v18 + 4), TupleSize);
        ++*(uint32_t *)(*(uint32_t *)(v18 + 4) + 8);
        v19 = *(uint32_t *)(v18 + 4);
      }
      v20 = nullptr;
      if ( a4 <= *(uint32_t *)(v19 + 16) )
        v20 = *(hkString::Self **)(v19 + 12);
      return (char *)hkString::memCpy(v20, a3, 4 * a4);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldDict::newArray  (binary VA: 0x18af840)
// Original: hkDataWorldDict::newArray
// ----------------------------------------------------------------------------
int hkDataWorldDict::newArray(hkDataWorldDict::Self *a1, int *a2, int a3, int a4)
{
  uint32_t *v4;
  int TupleSize;
  hkTypeManager::Type::Self *v6;
  int v7;
  int v8;
  int v9;
  int16_t v10;
  int v11;
  int v12;
  bool v13;
  hkTypeManager::Type::Self *v15;
  int v16;
  int v17;
  int v18;
  hkTypeManager::Type::Self **v19;
  int v20;
  int v21;
  int v22;
  int v23;
  uint32_t *v24;
  int v25;
  void *v26;
  int v27;
  int v28;
  int v29;
  hkTypeManager::Type::Self *v30;
  int v31;
  int v32;
  int (*v33)(hkDataWorldDict::Self *, int);
  int v34;
  int v35;
  int v36;
  int (*v37)(hkDataWorldDict::Self *, int);
  int TypeName;
  const hkDataClassDict::Self *v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int address;
  int v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef hkTypeManager::Type::Self **_g4_t_v52;
  typedef hkMemoryAllocator::Self *_g4_t_v53;
  typedef hkTypeManager::Type::Self *_g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int *_g4_t_v57;
  typedef hkDataWorldDict::Self *_g4_t_v58;
  typedef uint32_t _g4_t_v59[7];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v46)) > _g4_s0 ? (4u + sizeof(_g4_t_v46)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v47)) > _g4_s1 ? (12u + sizeof(_g4_t_v47)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v48)) > _g4_s2 ? (16u + sizeof(_g4_t_v48)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v49)) > _g4_s3 ? (20u + sizeof(_g4_t_v49)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v50)) > _g4_s4 ? (24u + sizeof(_g4_t_v50)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v51)) > _g4_s5 ? (28u + sizeof(_g4_t_v51)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v52)) > _g4_s6 ? (32u + sizeof(_g4_t_v52)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v53)) > _g4_s7 ? (36u + sizeof(_g4_t_v53)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v54)) > _g4_s8 ? (40u + sizeof(_g4_t_v54)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v55)) > _g4_s9 ? (44u + sizeof(_g4_t_v55)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v56)) > _g4_s10 ? (48u + sizeof(_g4_t_v56)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v57)) > _g4_s11 ? (52u + sizeof(_g4_t_v57)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v58)) > _g4_s12 ? (56u + sizeof(_g4_t_v58)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v59)) > _g4_s13 ? (60u + sizeof(_g4_t_v59)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 4u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 12u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 20u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 24u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 28u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 32u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 36u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 40u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 44u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 48u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 52u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 56u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 60u);

  v59[3] = (uint32_t)(uintptr_t)(&a1);
  v58 = a1;
  v57 = a2;
  v56 = a3;
  v4 = *(uint32_t **)(a4 + 8);
  if ( *v4 == 9 )
  {
    TupleSize = hkTypeManager::Type::getTupleSize(*(hkTypeManager::Type::Self **)(a4 + 8));
    v6 = (hkTypeManager::Type::Self *)v4[1];
    v55 = TupleSize;
    switch ( *(uint32_t *)v6 )
    {
      case 2:
        v55 = v4[1];
        address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        v7 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
               *(uint32_t *)(*(uint32_t *)address + 44),
               32);
        *(uint32_t *)(v7 + 4) = -65536;
        *(uint32_t *)(v7 + 8) = 0;
        *(uint32_t *)(v7 + 12) = 0;
        *(uint32_t *)(v7 + 16) = 0;
        *(uint32_t *)(v7 + 20) = 0x80000000;
        *(uint32_t *)(v7 + 24) = (uint32_t)(uintptr_t)(v58);
        *(uint32_t *)(v7 + 28) = v55;
        *(uint32_t *)v7 = ((uint32_t)(uintptr_t)&off_20A72A8);
        break;
      case 3:
        v55 = v4[1];
        v43 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        v7 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v43 + 44) + 8))(
               *(uint32_t *)(*(uint32_t *)v43 + 44),
               32);
        *(uint32_t *)(v7 + 4) = -65536;
        *(uint32_t *)(v7 + 8) = 0;
        *(uint32_t *)(v7 + 12) = 0;
        *(uint32_t *)(v7 + 16) = 0;
        *(uint32_t *)(v7 + 20) = 0x80000000;
        *(uint32_t *)(v7 + 24) = (uint32_t)(uintptr_t)(v58);
        *(uint32_t *)(v7 + 28) = v55;
        *(uint32_t *)v7 = ((uint32_t)(uintptr_t)&off_20A75A8);
        break;
      case 4:
        v42 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        v7 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v42 + 44) + 8))(
               *(uint32_t *)(*(uint32_t *)v42 + 44),
               48);
        *(uint32_t *)(v7 + 4) = -65536;
        *(uint32_t *)(v7 + 8) = 0;
        *(uint32_t *)v7 = ((uint32_t)(uintptr_t)&off_20A7128);
        *(uint32_t *)(v7 + 12) = (uint32_t)(uintptr_t)(v58);
        *(uint32_t *)(v7 + 16) = 0;
        *(uint32_t *)(v7 + 20) = 0;
        *(uint32_t *)(v7 + 24) = 0;
        *(uint32_t *)(v7 + 28) = 0x80000000;
        *(uint32_t *)(v7 + 32) = 0;
        *(uint32_t *)(v7 + 36) = 0;
        *(uint32_t *)(v7 + 40) = 0x80000000;
        *(uint8_t *)(v7 + 44) = 0;
        break;
      case 5:
        v55 = v4[1];
        v41 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        v7 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v41 + 44) + 8))(
               *(uint32_t *)(*(uint32_t *)v41 + 44),
               32);
        *(uint32_t *)(v7 + 4) = -65536;
        *(uint32_t *)(v7 + 8) = 0;
        *(uint32_t *)(v7 + 12) = 0;
        *(uint32_t *)(v7 + 16) = 0;
        *(uint32_t *)(v7 + 20) = 0x80000000;
        *(uint32_t *)(v7 + 24) = (uint32_t)(uintptr_t)(v58);
        *(uint32_t *)(v7 + 28) = v55;
        *(uint32_t *)v7 = ((uint32_t)(uintptr_t)&off_20A7A28);
        break;
      case 6:
        v54 = (hkTypeManager::Type::Self *)v4[1];
        v37 = *(int (**)(hkDataWorldDict::Self *, int))(*(uint32_t *)v58 + 44);
        TypeName = hkTypeManager::Type::getTypeName(v6);
        v39 = (const hkDataClassDict::Self *)v37(v58, TypeName);
        if ( v39 == nullptr )
          goto LABEL_34;
        v40 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        v7 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v40 + 44) + 8))(
               *(uint32_t *)(*(uint32_t *)v40 + 44),
               40);
        StructArrayImplementation::Construct((StructArrayImplementation::Self *)v7, v58, v54, v39, v55);
        break;
      case 7:
        v30 = *((hkTypeManager::Type::Self **)v6 + 1);
        v55 = (int)(uintptr_t)(v6);
        v31 = hkTypeManager::Type::getTypeName(v30);
        v32 = v55;
        if ( v31 != 0 )
        {
          v33 = *(int (**)(hkDataWorldDict::Self *, int))(*(uint32_t *)v58 + 44);
          v34 = hkTypeManager::Type::getTypeName(v30);
          v35 = v33(v58, v34);
          v32 = v55;
          if ( v35 == 0 )
            goto LABEL_34;
        }
        v55 = v32;
        v36 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        v7 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v36 + 44) + 8))(
               *(uint32_t *)(*(uint32_t *)v36 + 44),
               32);
        *(uint32_t *)(v7 + 4) = -65536;
        *(uint32_t *)(v7 + 8) = 0;
        *(uint32_t *)(v7 + 12) = 0;
        *(uint32_t *)(v7 + 16) = 0;
        *(uint32_t *)(v7 + 20) = 0x80000000;
        *(uint32_t *)(v7 + 24) = (uint32_t)(uintptr_t)(v58);
        *(uint32_t *)(v7 + 28) = v55;
        *(uint32_t *)v7 = ((uint32_t)(uintptr_t)&off_20A78A8);
        break;
      case 8:
        v54 = (hkTypeManager::Type::Self *)v4[1];
        v18 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        v7 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v18 + 44) + 8))(
               *(uint32_t *)(*(uint32_t *)v18 + 44),
               32);
        *(uint32_t *)(v7 + 4) = -65536;
        *(uint32_t *)(v7 + 8) = 0;
        *(uint32_t *)(v7 + 12) = 0;
        *(uint32_t *)(v7 + 16) = 0;
        *(uint32_t *)(v7 + 20) = 0x80000000;
        v19 = (hkTypeManager::Type::Self **)v54;
        *(uint32_t *)(v7 + 24) = (uint32_t)(uintptr_t)(v58);
        *(uint32_t *)(v7 + 28) = (uint32_t)(uintptr_t)(v54);
        *(uint32_t *)v7 = ((uint32_t)(uintptr_t)&off_20A7BA8);
        if ( v55 >= 0 )
        {
          v53 = *((hkMemoryAllocator::Self **)v58 + 3);
          if ( v55 != 0 )
          {
            hkArrayUtil::reserve((hkArrayUtil::Self *)v59, v53, (int *)(v7 + 12), v55, 4);
            v20 = *(uint32_t *)(v7 + 16);
            v19 = (hkTypeManager::Type::Self **)v54;
            v26 = (void *)(*(uint32_t *)(v7 + 12) + 4 * v20);
          }
          else
          {
            v26 = nullptr;
            v20 = 0;
          }
        }
        else
        {
          v54 = (hkTypeManager::Type::Self *)v7;
          v52 = v19;
          v20 = 0;
          v21 = 4 * v55;
          v53 = nullptr;
          v22 = v55;
          v23 = 0;
          do
          {
            v24 = *(uint32_t **)(v23 + v21);
            if ( v24 != nullptr )
            {
              v13 = v24[2]-- == 1;
              if ( v13 )
                G4_VCALL<void>(v24, 4);
              v23 = *((uint32_t *)v54 + 3);
              v20 = *((uint32_t *)v54 + 4);
            }
            ++v22;
            v21 += 4;
          }
          while ( v22 < v20 );
          v25 = v23;
          v7 = (int)(uintptr_t)(v54);
          v19 = v52;
          v26 = (void *)(v25 + 4 * v20);
        }
        v27 = v55 - v20;
        if ( v27 > 0 )
        {
          v54 = (hkTypeManager::Type::Self *)v19;
          memset(v26, 0, 4 * v27);
          v19 = (hkTypeManager::Type::Self **)v54;
        }
        v28 = 0;
        *(uint32_t *)(v7 + 16) = v55;
        if ( v55 > 0 )
        {
          do
          {
            v54 = (hkTypeManager::Type::Self *)v19;
            v29 = sub_18ADFE0(v58, v19[1]);
            v46 = v28++;
            G4_VCALL<void>(v7, 100, v46, v29);
            v19 = (hkTypeManager::Type::Self **)v54;
          }
          while ( v28 != v55 );
        }
        break;
      case 9:
        v15 = *((hkTypeManager::Type::Self **)v6 + 1);
        v55 = v4[1];
        if ( *(uint32_t *)v15 == 3 )
        {
          v45 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
          v7 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v45 + 44) + 8))(
                 *(uint32_t *)(*(uint32_t *)v45 + 44),
                 32);
          *(uint32_t *)(v7 + 4) = -65536;
          *(uint32_t *)(v7 + 8) = 0;
          *(uint32_t *)v7 = ((uint32_t)(uintptr_t)&off_20A7728);
          *(uint32_t *)(v7 + 12) = 0;
          *(uint32_t *)(v7 + 16) = 0;
          *(uint32_t *)(v7 + 20) = 0x80000000;
          *(uint32_t *)(v7 + 24) = (uint32_t)(uintptr_t)(v58);
          *(uint32_t *)(v7 + 28) = v55;
        }
        else
        {
          v16 = sub_18ADFE0(v58, v15);
          v55 = hkTypeManager::Type::getTupleSize((hkTypeManager::Type::Self *)v55);
          v17 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
          v7 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v17 + 44) + 8))(
                 *(uint32_t *)(*(uint32_t *)v17 + 44),
                 28);
          *(uint32_t *)(v7 + 4) = -65536;
          *(uint32_t *)(v7 + 8) = 0;
          *(uint32_t *)v7 = ((uint32_t)(uintptr_t)&off_20A7428);
          *(uint32_t *)(v7 + 12) = (uint32_t)(uintptr_t)(v58);
          *(uint32_t *)(v7 + 16) = v16;
          *(uint32_t *)(v7 + 20) = v55;
          *(uint32_t *)(v7 + 24) = 0;
          if ( v16 != 0 )
            ++*(uint32_t *)(v16 + 8);
        }
        break;
      default:
LABEL_34:
        v7 = 0;
        break;
    }
  }
  else
  {
    v7 = sub_18ADFE0(a1, (hkTypeManager::Type::Self *)v4[1]);
  }
  v8 = *v57;
  if ( v7 != 0 )
  {
    v9 = *(uint32_t *)(v7 + 4);
    ++*(uint32_t *)(v7 + 8);
    v10 = v9;
    LOWORD(v9) = 0;
    *(uint32_t *)(v7 + 4) = v9 | (uint16_t)(v10 + 1);
    G4_VCALL<void>(v8, 76, v56, v7, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59[0], v59[1], v59[2]);
    v11 = *(uint32_t *)(v7 + 4);
    LOWORD(v11) = 0;
    v12 = v11 | (uint16_t)(*(uint32_t *)(v7 + 4) - 1);
    v13 = (*(uint32_t *)(v7 + 8))-- == 1;
    *(uint32_t *)(v7 + 4) = v12;
    if ( v13 )
      G4_VCALL<void>(v7, 4);
    return v7;
  }
  else
  {
    G4_VCALL<void>(v8, 76, v56, 0, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59[0], v59[1]);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldDict::ObjectTracker::Construct  (binary VA: 0x18afea0)
// Original: hkDataWorldDict::ObjectTracker::ObjectTracker
// ----------------------------------------------------------------------------
hkDataWorldDict::ObjectTracker::Self * hkDataWorldDict::ObjectTracker::Construct(hkString::Self **self, hkMemoryAllocator::Self *a2)
{
  hkDataWorldDict::ObjectTracker::Self *result;

  *self = (hkString::Self *)(a2);
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Construct(self + 1);
  *(self + 5) = nullptr;
  *(self + 6) = nullptr;
  *(self + 7) = (hkString::Self *)0x80000000;
  *(self + 8) = nullptr;
  *(self + 9) = nullptr;
  *(self + 10) = (hkString::Self *)-1;
  *(self + 11) = (hkString::Self *)-1;
  *(self + 12) = nullptr;
  *(self + 13) = nullptr;
  *(self + 14) = nullptr;
  *(self + 15) = (hkString::Self *)0x80000000;
  *(self + 16) = nullptr;
  *(self + 17) = nullptr;
  *(self + 18) = (hkString::Self *)-1;
  *(self + 19) = (hkString::Self *)-1;
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Construct(self + 20);
  result = (hkDataWorldDict::ObjectTracker::Self *)hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Construct(self + 24);
  *(self + 28) = nullptr;
  *(self + 29) = nullptr;
  *(self + 30) = (hkString::Self *)-1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldDict::ObjectTracker::getTrackedStructArrays  (binary VA: 0x18aff70)
// Original: hkDataWorldDict::ObjectTracker::getTrackedStructArrays
// ----------------------------------------------------------------------------
unsigned int hkDataWorldDict::ObjectTracker::getTrackedStructArrays(uint32_t *a1, unsigned int a2, int a3, int *a4)
{
  unsigned int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int i;
  typedef unsigned int _g4_t_v18;
  typedef uint8_t _g4_t_v19[28];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v19)) > _g4_s1 ? (4u + sizeof(_g4_t_v19)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);

  result = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
             (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(a1 + 28),
             a2,
             0);
  if ( result != 0 )
  {
    v5 = *(uint32_t *)(result + 4) & 0x7FFFFFFF;
    if ( v5 != 0 )
    {
      v6 = a4[1];
      v7 = v6 + v5;
      v8 = a4[2] & 0x3FFFFFFF;
      if ( v6 + v5 > v8 )
      {
        v16 = 2 * v8;
        v18 = result;
        if ( v7 >= v16 )
          v16 = v6 + v5;
        hkArrayUtil::reserve((hkArrayUtil::Self *)v19, (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc, a4, v16, 4);
        result = v18;
        v7 = a4[1] + v5;
      }
      a4[1] = v7;
      v9 = *(uint32_t *)(result + 8);
      v10 = *a4 + 4 * v6;
      v11 = *(uint32_t **)result;
      if ( v9 >= 0 )
      {
        v12 = 0;
        if ( *v11 == -1 )
        {
          while ( v9 >= ++v12 )
          {
            if ( v11[2 * v12] != -1 )
              goto LABEL_15;
          }
        }
        else
        {
          for ( i = 0; ; i = v12 )
          {
            v10 += 4;
            *(uint32_t *)(v10 - 4) = v11[2 * i];
            ++v12;
            v15 = *(uint32_t *)(result + 8);
            v11 = *(uint32_t **)result;
            if ( v15 < v12 )
              break;
            while ( v11[2 * v12] == -1 )
            {
              if ( v15 < ++v12 )
              {
                if ( a3 == 0 )
                  return result;
                goto LABEL_11;
              }
            }
LABEL_15:
            ;
          }
        }
      }
    }
  }
  if ( a3 != 0 )
  {
LABEL_11:
    result = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
               (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(a1 + 8),
               a2,
               0xFFFFFFFF);
    if ( result != -1 )
    {
      v13 = a1[5];
      do
      {
        v14 = 8 * result;
        hkDataWorldDict::ObjectTracker::getTrackedStructArrays(a1, *(uint32_t *)(v13 + 8 * result), a3, a4);
        v13 = a1[5];
        result = *(uint32_t *)(v13 + v14 + 4);
      }
      while ( result != -1 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldDict::ObjectTracker::trackClass  (binary VA: 0x18b0120)
// Original: hkDataWorldDict::ObjectTracker::trackClass
// ----------------------------------------------------------------------------
bool * hkDataWorldDict::ObjectTracker::trackClass(hkDataWorldDict::ObjectTracker::Self *self, hkDataClassDict::Self *a2)
{
  hkString::Self *v2;
  int Key;
  bool *result;
  hkString::Self *v5;
  unsigned int v6;
  uint32_t *v7;
  int savedregs;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef unsigned int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef unsigned int _g4_t_v19;
  typedef unsigned int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint32_t _g4_t_v22[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v10)) > _g4_s2 ? (16u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v11)) > _g4_s3 ? (20u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v12)) > _g4_s4 ? (24u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v13)) > _g4_s5 ? (28u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v14)) > _g4_s6 ? (32u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v15)) > _g4_s7 ? (36u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v16)) > _g4_s8 ? (36u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v17)) > _g4_s9 ? (36u + sizeof(_g4_t_v17)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v18)) > _g4_s10 ? (40u + sizeof(_g4_t_v18)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v19)) > _g4_s11 ? (40u + sizeof(_g4_t_v19)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v20)) > _g4_s12 ? (44u + sizeof(_g4_t_v20)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v21)) > _g4_s13 ? (44u + sizeof(_g4_t_v21)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v22)) > _g4_s14 ? (48u + sizeof(_g4_t_v22)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);

  v21 = G4_VCALL<int>(a2, 20, v8, v9, v10, v11, v12, v13, v14, v15, v18, v20, v22[0], v22[1], v22[2], v22[3]);
  v2 = (hkString::Self *)G4_VCALL<int>(a2, 12);
  Key = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::findKey(
          (hkDataWorldDict::ObjectTracker::Self *)((char *)self + 4),
          v2);
  result = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::isValid((bool *)v22 + 3, (int)(uintptr_t)(self) + 4, Key);
  if ( HIBYTE(v22[0]) == 0 )
  {
    v5 = (hkString::Self *)G4_VCALL<int>(a2, 12);
    hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
      (hkDataWorldDict::ObjectTracker::Self *)((char *)self + 4),
      v5,
      (unsigned int)(uintptr_t)(a2));
    result = (bool *)v21;
    if ( v21 != 0 )
    {
      v19 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
              (hkDataWorldDict::ObjectTracker::Self *)((char *)self + 32),
              v21,
              0xFFFFFFFF);
      v6 = *((uint32_t *)self + 11);
      if ( v6 == -1 )
      {
        v17 = *((uint32_t *)self + 6);
        if ( v17 == (*((uint32_t *)self + 7) & 0x3FFFFFFF) )
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkDataWorldDict::ObjectTracker::Self *)((char *)self + 20),
            8,
            savedregs);
        ++*((uint32_t *)self + 6);
        v6 = v17;
        v7 = (uint32_t *)(*((uint32_t *)self + 5) + 8 * v17);
      }
      else
      {
        v16 = *((uint32_t *)self + 5) + 8 * v6;
        *((uint32_t *)self + 11) = *(uint32_t *)(v16 + 4);
        v7 = (uint32_t *)v16;
      }
      *v7 = (uint32_t)(uintptr_t)(a2);
      v7[1] = v19;
      return (bool *)hkMapBase_unsigned_long_unsigned_l_393416::insert(
                       (hkDataWorldDict::ObjectTracker::Self *)((char *)self + 32),
                       (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
                       v21,
                       v6);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldDict::ObjectTracker::findTrackedObjectsByBase  (binary VA: 0x18b0280)
// Original: hkDataWorldDict::ObjectTracker::findTrackedObjectsByBase
// ----------------------------------------------------------------------------
unsigned int hkDataWorldDict::ObjectTracker::findTrackedObjectsByBase(uint32_t *a1, hkString::Self *a2, int a3, int a4, hkMemoryAllocator::Self *a5)
{
  unsigned int result;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int i;
  int v18;
  int v19;
  signed int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  unsigned int *v25;
  unsigned int v26;

  result = (unsigned int)(uintptr_t)(a2);
  if ( a2 != nullptr )
  {
    result = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
               (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(a1 + 1),
               a2,
               0);
    v26 = result;
    if ( result != 0 )
    {
      result = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
                 (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(a1 + 16),
                 result,
                 0xFFFFFFFF);
      if ( result != -1 )
      {
        v6 = *((uint32_t *)a5 + 1);
        v7 = a1[13];
        do
        {
          v8 = *(uint32_t *)(v7 + 8 * result);
          v9 = 8 * result;
          if ( (*((uint32_t *)a5 + 2) & 0x3FFFFFFF) == v6 )
          {
            v22 = v8;
            hkArrayUtil::reserveMore((hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc, a5, 4, v21);
            v6 = *((uint32_t *)a5 + 1);
            v8 = v22;
          }
          *(uint32_t *)(*(uint32_t *)a5 + 4 * v6) = v8;
          v6 = *((uint32_t *)a5 + 1) + 1;
          *((uint32_t *)a5 + 1) = v6;
          v7 = a1[13];
          result = *(uint32_t *)(v7 + v9 + 4);
        }
        while ( result != -1 );
      }
      if ( a4 != 0 )
      {
        result = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
                   (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(a1 + 28),
                   v26,
                   0);
        v25 = (unsigned int *)result;
        if ( result != 0 && (*(uint32_t *)(result + 4) & 0x7FFFFFFF) != 0 )
        {
          v13 = *(uint32_t *)(result + 8);
          result = *(uint32_t *)result;
          if ( v13 >= 0 )
          {
            v14 = 0;
            if ( *(uint32_t *)result != -1 )
            {
              v15 = 0;
              goto LABEL_22;
            }
            while ( v13 >= ++v14 )
            {
              if ( *(uint32_t *)(result + 8 * v14) != -1 )
              {
                while ( 1 )
                {
                  v15 = v14;
LABEL_22:
                  v16 = *(uint32_t *)(result + 8 * v15);
                  v24 = v14;
                  for ( i = 0; i < G4_VCALL<int>(v16, 24); ++i )
                  {
                    v18 = G4_VCALL<int>(v16, 88, i);
                    v19 = *((uint32_t *)a5 + 1);
                    if ( v19 == (*((uint32_t *)a5 + 2) & 0x3FFFFFFF) )
                    {
                      v23 = v18;
                      hkArrayUtil::reserveMore((hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc, a5, 4, v21);
                      v19 = *((uint32_t *)a5 + 1);
                      v18 = v23;
                    }
                    *(uint32_t *)(*(uint32_t *)a5 + 4 * v19) = v18;
                    ++*((uint32_t *)a5 + 1);
                  }
                  v20 = v25[2];
                  v14 = v24 + 1;
                  result = *v25;
                  if ( v20 < v24 + 1 )
                    goto LABEL_9;
                  while ( *(uint32_t *)(result + 8 * v14) == -1 )
                  {
                    if ( v20 < ++v14 )
                      goto LABEL_9;
                  }
                }
              }
            }
          }
        }
      }
LABEL_9:
      if ( a3 != 0 )
      {
        result = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
                   (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(a1 + 8),
                   v26,
                   0xFFFFFFFF);
        if ( result != -1 )
        {
          v10 = a1[5];
          do
          {
            v11 = 8 * result;
            v12 = (*(int (**)(uint32_t))(**(uint32_t **)(v10 + 8 * result) + 12))(*(uint32_t *)(v10 + 8 * result));
            hkDataWorldDict::ObjectTracker::findTrackedObjectsByBase(a1, (hkString::Self *)(uintptr_t)(v12), a3, a4, a5);
            v10 = a1[5];
            result = *(uint32_t *)(v10 + v11 + 4);
          }
          while ( result != -1 );
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldDict::findObjectsByBaseClass  (binary VA: 0x18b0510)
// Original: hkDataWorldDict::findObjectsByBaseClass
// ----------------------------------------------------------------------------
unsigned int hkDataWorldDict::findObjectsByBaseClass(int a1, hkString::Self *a2, hkMemoryAllocator::Self *a3)
{
  uint32_t *v3;

  v3 = *(uint32_t **)(a1 + 8);
  *((uint32_t *)a3 + 1) = 0;
  return hkDataWorldDict::ObjectTracker::findTrackedObjectsByBase(v3, a2, 1, 1, a3);
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldDict::renameClassMember  (binary VA: 0x18b07d0)
// Original: hkDataWorldDict::renameClassMember
// ----------------------------------------------------------------------------
int hkDataWorldDict::renameClassMember(hkDataWorldDict::Self *self, hkDataClass::Self *a2, hkString::Self *a3, hkString::Self *a4, hkDataClass::Self *a5, int a6, int a7, int a8, hkDataClass::Self *a9, int a10)
{
  hkString::Self *v10;
  int v11;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v12;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v13;
  hkString::Self *v14;
  int v15;
  int v16;
  uint32_t *v17;
  uint32_t *v18;
  int v19;
  uint32_t *v20;
  int v21;
  int v22;
  uint32_t *v23;
  uint32_t *v24;
  int v25;
  uint32_t *v26;
  int v27;
  int v28;
  hkString::Self **v29;
  int v30;
  int result;
  int v32;
  int v33;
  int v34;
  int v35;
  hkString::Self *v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  uint32_t *retaddr;
  hkDataClass::Self *i;
  hkDataClass::Self *j;
  hkString::Self *v47;
  hkString::Self *v48;

  v10 = nullptr;
  v35 = *(uint32_t *)a2;
  v11 = *((uint32_t *)self + 2);
  if ( a3 != nullptr )
  {
    v12 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(v11 + 80);
    v10 = (hkString::Self *)hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(v12, a3, 0);
    if ( v10 == nullptr )
    {
      v10 = hkString::strDup(a3);
      hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v12, v10, (unsigned int)(uintptr_t)(v10));
    }
    v11 = *((uint32_t *)self + 2);
  }
  v36 = nullptr;
  if ( a4 != nullptr )
  {
    v13 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(v11 + 80);
    v36 = (hkString::Self *)hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(v13, a4, 0);
    if ( v36 == nullptr )
    {
      v36 = hkString::strDup(a4);
      hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v13, v36, (unsigned int)(uintptr_t)(v36));
    }
  }
  v14 = (hkString::Self *)(*(int (**)(uint32_t, int, int, int, int, hkString::Self *, int, int, uint32_t, uint32_t, unsigned int, int, int, int, int, int))(**(uint32_t **)a2 + 12))(
                      *(uint32_t *)a2,
                      v32,
                      v33,
                      v34,
                      v35,
                      v36,
                      v37,
                      v38,
                      0,
                      0,
                      0x80000000,
                      v39,
                      v40,
                      v41,
                      v42,
                      v43);
  a5 = nullptr;
  sub_18B0560(*((uint32_t *)self + 2), v14, (hkMemoryAllocator::Self *)&a4);
  v47 = nullptr;
  for ( i = a5; (int)(uintptr_t)(v47) < (int)(uintptr_t)(a5); i = a5 )
  {
    while ( 1 )
    {
      v15 = *((uint32_t *)a4 + (uint32_t)(uintptr_t)(v47));
      v16 = *(uint32_t *)(v15 + 20);
      if ( v16 > 0 )
        break;
LABEL_14:
      v47 = (hkString::Self *)((char *)v47 + 1);
      if ( (int)(uintptr_t)(v47) >= (int)(uintptr_t)(i) )
        goto LABEL_15;
    }
    v17 = *(uint32_t **)(v15 + 16);
    if ( v10 != (hkString::Self *)*v17 )
    {
      v18 = v17 + 3;
      v19 = 0;
      while ( ++v19 != v16 )
      {
        v20 = v18;
        v18 += 3;
        if ( v10 == (hkString::Self *)*(v18 - 3) )
          goto LABEL_34;
      }
      goto LABEL_14;
    }
    v20 = v17;
LABEL_34:
    v47 = (hkString::Self *)((char *)v47 + 1);
    *v20 = (uint32_t)(uintptr_t)(self);
  }
LABEL_15:
  a8 = 0;
  a9 = nullptr;
  a10 = 0x80000000;
  hkDataWorldDict::ObjectTracker::getTrackedStructArrays(*((uint32_t **)self + 2), (unsigned int)(uintptr_t)(retaddr), 1, &a8);
  v48 = nullptr;
  for ( j = a9; (int)(uintptr_t)(v48) < (int)(uintptr_t)(a9); j = a9 )
  {
    while ( 1 )
    {
      v21 = *(uint32_t *)(a8 + 4 * (uint32_t)(uintptr_t)(v48));
      v22 = *(uint32_t *)(v21 + 16);
      if ( v22 > 0 )
        break;
LABEL_21:
      v48 = (hkString::Self *)((char *)v48 + 1);
      if ( (int)(uintptr_t)(v48) >= (int)(uintptr_t)(j) )
        goto LABEL_22;
    }
    v23 = *(uint32_t **)(v21 + 12);
    if ( v10 != (hkString::Self *)*v23 )
    {
      v24 = v23 + 2;
      v25 = 0;
      while ( ++v25 != v22 )
      {
        v26 = v24;
        v24 += 2;
        if ( v10 == (hkString::Self *)*(v24 - 2) )
          goto LABEL_37;
      }
      goto LABEL_21;
    }
    v26 = v23;
LABEL_37:
    v48 = (hkString::Self *)((char *)v48 + 1);
    *v26 = (uint32_t)(uintptr_t)(self);
  }
LABEL_22:
  v27 = retaddr[11] - 1;
  if ( v27 < 0 )
  {
    v29 = (hkString::Self **)(retaddr[10] - 20);
  }
  else
  {
    v28 = retaddr[10];
    v29 = (hkString::Self **)(v28 + 20 * v27);
    if ( v10 != *v29 )
    {
      v30 = v28 + 20 * v27 - 20;
      while ( --v27 != -1 )
      {
        v29 = (hkString::Self **)v30;
        v30 -= 20;
        if ( v10 == *(hkString::Self **)(v30 + 20) )
          goto LABEL_28;
      }
      v29 = (hkString::Self **)(v28 - 20);
    }
  }
LABEL_28:
  *v29 = (hkString::Self *)(self);
  a9 = nullptr;
  if ( a10 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
      (uint32_t *)(hkContainerTempAllocator::s_alloc),
      a8,
      4 * a10);
  result = a6;
  a8 = 0;
  a10 = 0x80000000;
  a5 = nullptr;
  if ( a6 >= 0 )
    return (*(int (**)(uint32_t *, hkString::Self *, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
             (uint32_t *)(hkContainerTempAllocator::s_alloc),
             a4,
             4 * a6);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldDict::removeClassMember  (binary VA: 0x18b0b20)
// Original: hkDataWorldDict::removeClassMember
// ----------------------------------------------------------------------------
int hkDataWorldDict::removeClassMember(hkDataWorldDict::Self *self, hkDataClass::Self *a2, hkString::Self *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18)
{
  int v18;
  hkString::Self *v19;
  int v20;
  hkDataWorldDict::Self *v21;
  hkString::Self *v22;
  hkDataWorldDict::Self *v23;
  int v24;
  hkDataWorldDict::Self *v25;
  int v26;
  int v27;
  uint32_t *v28;
  uint32_t *v29;
  int v30;
  uint32_t *v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  hkDataClass::Self *v38;
  int v39;
  int v40;
  int j;
  hkDataClass::Self *v42;
  uint32_t *v43;
  int v44;
  int v45;
  int v46;
  uint32_t *v47;
  uint32_t *v48;
  int v49;
  uint32_t *v50;
  int v51;
  int v52;
  uint32_t *v53;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  hkString::Self *v60;
  uint32_t *v61;
  uint32_t *v62;
  int result;
  hkString::Self *v79;
  hkDataWorldDict::Self *v80;
  int v81;
  int v82;
  int v83;
  uint32_t *v84;
  int v85;
  int v86;
  int i;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef uint32_t _g4_t_v78[12];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v64)) > _g4_s0 ? (4u + sizeof(_g4_t_v64)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v65)) > _g4_s1 ? (8u + sizeof(_g4_t_v65)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v66)) > _g4_s2 ? (12u + sizeof(_g4_t_v66)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v67)) > _g4_s3 ? (16u + sizeof(_g4_t_v67)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v68)) > _g4_s4 ? (20u + sizeof(_g4_t_v68)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v69)) > _g4_s5 ? (24u + sizeof(_g4_t_v69)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v70)) > _g4_s6 ? (28u + sizeof(_g4_t_v70)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v71)) > _g4_s7 ? (32u + sizeof(_g4_t_v71)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v72)) > _g4_s8 ? (36u + sizeof(_g4_t_v72)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v73)) > _g4_s9 ? (40u + sizeof(_g4_t_v73)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v74)) > _g4_s10 ? (44u + sizeof(_g4_t_v74)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v75)) > _g4_s11 ? (48u + sizeof(_g4_t_v75)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v76)) > _g4_s12 ? (52u + sizeof(_g4_t_v76)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v77)) > _g4_s13 ? (56u + sizeof(_g4_t_v77)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v78)) > _g4_s14 ? (60u + sizeof(_g4_t_v78)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 4u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 8u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 12u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 16u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 20u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 24u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 28u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 32u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 36u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 40u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 44u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 48u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 52u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 56u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 60u);

  v69 = *(uint32_t *)a2;
  if ( a3 != nullptr )
  {
    sub_18A83D0(v78, *((uint32_t *)self + 2), a3);
    v76 = v78[0];
    v18 = *(uint32_t *)a2;
  }
  else
  {
    v18 = *(uint32_t *)a2;
    v76 = 0;
  }
  v19 = (hkString::Self *)G4_VCALL<int>(v18, 12, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, v77, v78[0], 0, 0, 0x80000000, v78[4], v78[5], v78[6], v78[7], v78[8]);
  a13 = 0;
  sub_18B0560(*((uint32_t *)self + 2), v19, (hkMemoryAllocator::Self *)&a12);
  v86 = 0;
  if ( a13 > 0 )
  {
    v81 = a13;
    do
    {
      while ( 1 )
      {
        v20 = *(uint32_t *)(a12 + 4 * v86);
        v84 = (uint32_t *)v20;
        v90 = *(uint32_t *)(v20 + 20);
        if ( v90 > 0 )
          break;
LABEL_10:
        if ( ++v86 >= v81 )
          goto LABEL_11;
      }
      v21 = *(hkDataWorldDict::Self **)(v20 + 16);
      v22 = nullptr;
      v23 = (hkDataWorldDict::Self *)((char *)v21 + 12);
      v24 = *(uint32_t *)v21;
      if ( a9 != *(uint32_t *)v21 )
      {
        while ( 1 )
        {
          v22 = (hkString::Self *)((char *)v22 + 1);
          if ( v22 == (hkString::Self *)v90 )
            goto LABEL_10;
          v89 = v23 - v21;
          v25 = v23;
          v23 = (hkDataWorldDict::Self *)((char *)v23 + 12);
          v24 = *((uint32_t *)v23 - 3);
          if ( a9 == v24 )
          {
            v80 = v25;
            goto LABEL_36;
          }
        }
      }
      v80 = v21;
      v89 = 0;
      v22 = nullptr;
LABEL_36:
      v82 = v84[3];
      if ( v82 != 0 )
      {
        v79 = v22;
        self = v21;
        while ( 1 )
        {
          v45 = v82;
          v46 = *(uint32_t *)(v82 + 44);
          if ( v46 > 0 )
            break;
LABEL_44:
          v82 = *(uint32_t *)(v45 + 24);
          if ( v82 == 0 )
          {
            v22 = v79;
            v21 = self;
            goto LABEL_46;
          }
        }
        v47 = *(uint32_t **)(v82 + 40);
        if ( v24 == *v47 )
        {
          v22 = v79;
          v50 = *(uint32_t **)(v82 + 40);
        }
        else
        {
          v48 = v47 + 5;
          v49 = 0;
          do
          {
            if ( ++v49 == v46 )
            {
              v45 = v82;
              goto LABEL_44;
            }
            v50 = v48;
            v48 += 5;
          }
          while ( v24 != *(v48 - 5) );
          v22 = v79;
        }
        sub_18AACF0((hkMemoryAllocator::Self **)v50[3], (hkString::Self **)v80 + 1, nullptr);
        v21 = (hkDataWorldDict::Self *)v84[4];
        v51 = v84[5];
      }
      else
      {
LABEL_46:
        v51 = v90;
      }
      v60 = (hkString::Self *)(v51 - 1);
      v84[5] = (uint32_t)(uintptr_t)(v60);
      if ( v22 != v60 )
      {
        v61 = (uint32_t *)((char *)v21 + v89);
        v62 = (uint32_t *)((char *)v21 + 12 * (uint32_t)(uintptr_t)(v60));
        *v61 = *v62;
        v61[1] = v62[1];
        v61[2] = v62[2];
      }
      ++v86;
      v81 = a13;
    }
    while ( v86 < a13 );
  }
LABEL_11:
  a16 = 0;
  a17 = 0;
  a18 = 0x80000000;
  hkDataWorldDict::ObjectTracker::getTrackedStructArrays(*((uint32_t **)self + 2), (unsigned int)(uintptr_t)(a2), 1, &a16);
  v88 = 0;
  for ( i = a17; v88 < a17; i = a17 )
  {
    while ( 1 )
    {
      v26 = *(uint32_t *)(a16 + 4 * v88);
      v85 = v26;
      v27 = *(uint32_t *)(v26 + 16);
      if ( v27 > 0 )
        break;
LABEL_17:
      if ( ++v88 >= i )
        goto LABEL_18;
    }
    v28 = *(uint32_t **)(v26 + 12);
    if ( a9 != *v28 )
    {
      v29 = v28 + 2;
      v30 = 0;
      while ( ++v30 != v27 )
      {
        v31 = v29;
        v29 += 2;
        if ( a9 == *(v29 - 2) )
        {
          v83 = 8 * v30;
          v52 = 8 * v30 + 8;
          goto LABEL_48;
        }
      }
      goto LABEL_17;
    }
    v31 = v28;
    v52 = 8;
    v83 = 0;
    v30 = 0;
LABEL_48:
    v53 = (uint32_t *)v31[1];
    if ( v53[2]-- == 1 )
    {
      v94 = v52;
      G4_VCALL<void>(v53, 4);
      v52 = v94;
    }
    v95 = *(uint32_t *)(v85 + 12);
    v55 = *(uint32_t *)(v85 + 16) - 1;
    *(uint32_t *)(v85 + 16) = v55;
    v56 = v55 - v30;
    v57 = 0;
    v58 = 8 * v56;
    v59 = v95 + v52;
    if ( v58 > 0 )
    {
      do
      {
        *(uint32_t *)(v83 + v95 + v57) = *(uint32_t *)(v59 + v57);
        v57 += 4;
      }
      while ( v58 > v57 );
    }
    ++v88;
  }
LABEL_18:
  v91 = *((uint32_t *)a2 + 11);
  v32 = v91 - 1;
  if ( v91 - 1 < 0 )
  {
    v38 = a2;
    v93 = 0;
    v35 = -1;
    v34 = *((uint32_t *)a2 + 10);
    v37 = v34 - 20;
  }
  else
  {
    v33 = a9;
    v34 = *((uint32_t *)a2 + 10);
    if ( a9 == *(uint32_t *)(v34 + 20 * v32) )
    {
      v42 = a2;
      *((uint32_t *)a2 + 11) = v32;
      goto LABEL_28;
    }
    v35 = v91 - 1;
    v92 = v91 - 1;
    v36 = v34 + 20 * v32 - 20;
    do
    {
      if ( --v35 == -1 )
      {
        v32 = v92;
        v37 = v34 - 20;
        v93 = 0;
        v38 = a2;
        goto LABEL_24;
      }
      v37 = v36;
      v36 -= 20;
    }
    while ( a9 != *(uint32_t *)(v36 + 20) );
    v32 = v92;
    v93 = 4 * (5 * v35 + 5);
    v38 = a2;
  }
LABEL_24:
  *((uint32_t *)v38 + 11) = v32;
  v39 = v93 + v34;
  v40 = 20 * (v32 - v35);
  if ( v40 <= 0 )
  {
    v33 = a9;
    v42 = a2;
  }
  else
  {
    for ( j = 0; j < v40; j += 4 )
      *(uint32_t *)(v37 + j) = *(uint32_t *)(v39 + j);
    v33 = a9;
    v42 = a2;
    v32 = *((uint32_t *)a2 + 11);
  }
  while ( 1 )
  {
LABEL_28:
    if ( v32 > 0 )
    {
      v43 = *((uint32_t **)v42 + 10);
      if ( v33 == *v43 )
        break;
      v44 = 0;
      while ( ++v44 != v32 )
      {
        v43 += 5;
        if ( v33 == *v43 )
          goto LABEL_60;
      }
    }
    v42 = *((hkDataClass::Self **)v42 + 6);
    if ( v42 == nullptr )
      break;
    v32 = *((uint32_t *)v42 + 11);
  }
LABEL_60:
  a17 = 0;
  if ( a18 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
      (uint32_t *)(hkContainerTempAllocator::s_alloc),
      a16,
      4 * a18);
  result = a14;
  a16 = 0;
  a18 = 0x80000000;
  a13 = 0;
  if ( a14 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
             (uint32_t *)(hkContainerTempAllocator::s_alloc),
             a12,
             4 * a14);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldDict::Construct  (binary VA: 0x18b1050)
// Original: hkDataWorldDict::hkDataWorldDict
// ----------------------------------------------------------------------------
void hkDataWorldDict::Construct(hkDataWorldDict::Self *self)
{
  int v1;
  hkString::Self **v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A7DC8);
  *((uint32_t *)self + 1) = -65535;
  hkTypeManager::Construct((hkTypeManager::Self *)((hkDataWorldDict::Self *)((char *)self + 16)));
  v1 = *(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  *((uint32_t *)self + 3) = *(uint32_t *)(v1 + 44);
  v2 = (hkString::Self **)(*(int (**)(uint32_t, int))(**(uint32_t **)(v1 + 44) + 8))(*(uint32_t *)(v1 + 44), 124);
  hkDataWorldDict::ObjectTracker::Construct(v2, *((hkMemoryAllocator::Self **)self + 3));
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v2);
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldDict::Construct  (binary VA: 0x18b10d0)
// Original: hkDataWorldDict::hkDataWorldDict
// ----------------------------------------------------------------------------
void hkDataWorldDict::Construct(hkDataWorldDict::Self *self, hkMemoryAllocator::Self *a2)
{
  int address;
  hkString::Self **v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A7DC8);
  *((uint32_t *)self + 1) = -65535;
  hkTypeManager::Construct((hkTypeManager::Self *)((hkDataWorldDict::Self *)((char *)self + 16)));
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(a2);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v3 = (hkString::Self **)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                      *(uint32_t *)(*(uint32_t *)address + 44),
                      124);
  hkDataWorldDict::ObjectTracker::Construct(v3, *((hkMemoryAllocator::Self **)self + 3));
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v3);
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldDict::wrapClass  (binary VA: 0x18b1150)
// Original: hkDataWorldDict::wrapClass
// ----------------------------------------------------------------------------
hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> * hkDataWorldDict::wrapClass(hkDataWorldDict::Self *self, const hkClass::Self *a2)
{
  int address;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v3;
  bool v4;
  hkString::Self *v5;
  int v6;
  int32_t v7; // kr00_4
  int v8;
  int v9;
  int32_t v10; // kr04_4
  int32_t v11;
  int32_t v12; // ett
  unsigned int v13;
  int v14;
  int32_t v15; // kr08_4
  int v16;
  int v17;
  int32_t v18; // kr0C_4
  int32_t v19;
  int32_t v20; // ett
  hkClass::Self *Parent;
  hkString::Self *v22;
  int v23;
  uint32_t *v24;
  int *v25;
  int v26;
  uint8_t *DeclaredMember;
  hkString::Self *v28;
  hkClass::Self *Class;
  int Attribute;
  int CstyleArraySize;
  hkString::Self *v32;
  int v33;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v34;
  int v35;
  const hkClass::Self *v37;
  typedef hkString::Self *_g4_t_v38;
  typedef hkString::Self *_g4_t_Name;
  typedef hkString::Self *_g4_t_v40;
  typedef hkString::Self *_g4_t_v41;
  typedef hkString::Self *_g4_t_v42;
  typedef hkString::Self *_g4_t_v43;
  typedef hkClass::Self *_g4_t_DescribedVersion;
  typedef hkClass::Self *_g4_t_TypeFromMemberTypeClassName;
  typedef hkClass::Self *_g4_t_v46;
  typedef hkString::Self *_g4_t_v47;
  typedef hkString::Self *_g4_t_v48;
  typedef hkString::Self *_g4_t_v49;
  typedef hkString::Self *_g4_t_v50;
  typedef hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *_g4_t_v51;
  typedef hkString::Self *_g4_t_v52;
  typedef char _g4_t_v53[4];
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v38)) > _g4_s0 ? (12u + sizeof(_g4_t_v38)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_Name)) > _g4_s1 ? (28u + sizeof(_g4_t_Name)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v40)) > _g4_s2 ? (28u + sizeof(_g4_t_v40)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v41)) > _g4_s3 ? (28u + sizeof(_g4_t_v41)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v42)) > _g4_s4 ? (28u + sizeof(_g4_t_v42)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v43)) > _g4_s5 ? (28u + sizeof(_g4_t_v43)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_DescribedVersion)) > _g4_s6 ? (32u + sizeof(_g4_t_DescribedVersion)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_TypeFromMemberTypeClassName)) > _g4_s7 ? (32u + sizeof(_g4_t_TypeFromMemberTypeClassName)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v46)) > _g4_s8 ? (32u + sizeof(_g4_t_v46)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v47)) > _g4_s9 ? (36u + sizeof(_g4_t_v47)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v48)) > _g4_s10 ? (36u + sizeof(_g4_t_v48)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v49)) > _g4_s11 ? (36u + sizeof(_g4_t_v49)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v50)) > _g4_s12 ? (36u + sizeof(_g4_t_v50)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v51)) > _g4_s13 ? (40u + sizeof(_g4_t_v51)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v52)) > _g4_s14 ? (44u + sizeof(_g4_t_v52)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v53)) > _g4_s15 ? (60u + sizeof(_g4_t_v53)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v54)) > _g4_s16 ? (64u + sizeof(_g4_t_v54)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v55)) > _g4_s17 ? (68u + sizeof(_g4_t_v55)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 12u);
  _g4_t_Name &Name = *reinterpret_cast<_g4_t_Name *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 28u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 28u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 28u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 28u);
  _g4_t_DescribedVersion &DescribedVersion = *reinterpret_cast<_g4_t_DescribedVersion *>(_g4_sf + 32u);
  _g4_t_TypeFromMemberTypeClassName &TypeFromMemberTypeClassName = *reinterpret_cast<_g4_t_TypeFromMemberTypeClassName *>(_g4_sf + 32u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 32u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 36u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 36u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 36u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 36u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 40u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 44u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 60u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 64u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 68u);

  Name = (hkString::Self *)hkClass::getName(a2);
  DescribedVersion = (hkClass::Self *)hkClass::getDescribedVersion(a2);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v3 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                                                             *(uint32_t *)(*(uint32_t *)address + 44),
                                                                             64);
  *((uint32_t *)v3 + 2) = 0;
  *((uint32_t *)v3 + 1) = -65536;
  *(uint32_t *)v3 = ((uint32_t)(uintptr_t)&off_20A7048);
  *((uint32_t *)v3 + 3) = (uint32_t)(uintptr_t)(self);
  v4 = word_2139D76 == 0;
  v5 = *((hkString::Self **)self + 2);
  *((uint32_t *)v3 + 4) = 0;
  v47 = v5;
  if ( !v4 )
  {
    do
    {
      v7 = *(uint32_t *)(&reinterpret_cast<G4Elf32Sym *>(stru_7FD74)->st_info + (uint32_t)(uintptr_t)(dword_20B9FF4));
      HIWORD(v6) = HIWORD(v7);
      LOWORD(v6) = 0;
    }
    while ( v7 != __sync_val_compare_and_swap(
                    (volatile int32_t *)&unk_2139D74,
                    v7,
                    v6 | (uint16_t)(v7 + 1)) );
    v8 = *((uint32_t *)v3 + 4);
    if ( v8 != 0 && *(uint16_t *)(v8 + 6) != 0 )
    {
      v51 = v3;
      do
      {
        v10 = *(uint32_t *)(v8 + 4);
        HIWORD(v9) = HIWORD(v10);
        LOWORD(v9) = 0;
        v11 = v9 | (uint16_t)(v10 - 1);
        v12 = v10;
      }
      while ( v12 != __sync_val_compare_and_swap((volatile int32_t *)(v8 + 4), v12, v11) );
      v3 = v51;
      if ( (uint16_t)v11 == 0 )
        G4_VCALL<void>(v8, 16);
    }
  }
  *((uint32_t *)v3 + 4) = (uint32_t)(uintptr_t)(&dword_2139D70);
  if ( Name != nullptr )
  {
    v13 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
            (hkString::Self *)((char *)v47 + 96),
            Name,
            0);
    if ( v13 == 0 )
    {
      sub_18A83D0(&v52, (int)(uintptr_t)(v47), Name);
      v43 = v52;
      v13 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
              *(uint32_t *)(*(uint32_t *)address + 44),
              12);
      *(uint32_t *)(v13 + 4) = -65535;
      *(uint32_t *)v13 = ((uint32_t)(uintptr_t)&off_20A6F30);
      *(uint32_t *)(v13 + 8) = (uint32_t)(uintptr_t)(v43);
      hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert((hkString::Self *)((char *)v47 + 96), v43, v13);
    }
    if ( *(uint16_t *)(v13 + 6) != 0 )
    {
      do
      {
        v15 = *(uint32_t *)(v13 + 4);
        HIWORD(v14) = HIWORD(v15);
        LOWORD(v14) = 0;
      }
      while ( v15 != __sync_val_compare_and_swap(
                       (volatile int32_t *)(v13 + 4),
                       v15,
                       v14 | (uint16_t)(v15 + 1)) );
    }
    v16 = *((uint32_t *)v3 + 4);
    if ( v16 != 0 && *(uint16_t *)(v16 + 6) != 0 )
    {
      v40 = (hkString::Self *)(v3);
      do
      {
        v18 = *(uint32_t *)(v16 + 4);
        HIWORD(v17) = HIWORD(v18);
        LOWORD(v17) = 0;
        v19 = v17 | (uint16_t)(v18 - 1);
        v20 = v18;
      }
      while ( v20 != __sync_val_compare_and_swap((volatile int32_t *)(v16 + 4), v20, v19) );
      v3 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(v40);
      if ( (uint16_t)v19 == 0 )
        G4_VCALL<void>(v16, 16);
    }
    *((uint32_t *)v3 + 4) = v13;
  }
  *((uint32_t *)v3 + 6) = 0;
  *((uint32_t *)v3 + 5) = (uint32_t)(uintptr_t)(DescribedVersion);
  *((uint32_t *)v3 + 7) = 0;
  *((uint32_t *)v3 + 8) = 0;
  *((uint32_t *)v3 + 9) = 0x80000000;
  *((uint32_t *)v3 + 10) = 0;
  *((uint32_t *)v3 + 11) = 0;
  *((uint32_t *)v3 + 12) = 0x80000000;
  *((uint32_t *)v3 + 13) = 0;
  *((uint32_t *)v3 + 14) = 0;
  *((uint32_t *)v3 + 15) = 0x80000000;
  if ( hkClass::getParent(a2) != 0 )
  {
    Parent = (hkClass::Self *)hkClass::getParent(a2);
    v22 = (hkString::Self *)hkClass::getName(Parent);
    if ( v22 != nullptr
      && (v23 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
                  (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(*((uint32_t *)self + 2) + 4),
                  v22,
                  0)) != 0
      || (v37 = (const hkClass::Self *)hkClass::getParent(a2), (v23 = (int)(uintptr_t)(hkDataWorldDict::wrapClass(self, v37))) != 0) )
    {
      ++*(uint32_t *)(v23 + 8);
    }
    v24 = *((uint32_t **)v3 + 6);
    if ( v24 != nullptr )
    {
      v4 = v24[2]-- == 1;
      if ( v4 )
      {
        v41 = (hkString::Self *)v23;
        G4_VCALL<void>(v24, 4);
        v23 = (int)(uintptr_t)(v41);
      }
    }
    *((uint32_t *)v3 + 6) = v23;
  }
  ++*((uint32_t *)v3 + 2);
  hkDataWorldDict::ObjectTracker::trackClass(*((hkDataWorldDict::ObjectTracker::Self **)self + 2), (hkDataClassDict::Self *)(v3));
  v42 = nullptr;
  while ( (int)(uintptr_t)(v42) < hkClass::getNumDeclaredMembers(a2) )
  {
    DeclaredMember = (uint8_t *)hkClass::getDeclaredMember(a2, (int)(uintptr_t)(v42));
    TypeFromMemberTypeClassName = *((hkClass::Self **)self + 8);
    if ( (DeclaredMember[17] & 4) == 0 )
    {
      v28 = nullptr;
      Class = (hkClass::Self *)hkClassMember::getClass((hkClassMember::Self *)DeclaredMember);
      if ( Class != nullptr )
      {
        v46 = Class;
        v28 = (hkString::Self *)hkClass::getName(Class);
        Attribute = hkClassMember::getAttribute((hkClassMember::Self *)DeclaredMember, "hk.DataObjectType");
        if ( Attribute != 0 || (Attribute = hkClass::getAttribute(v46, "hk.DataObjectType")) != 0 )
        {
          hkClassMemberAccessor::Construct((hkClassMemberAccessor::Self *)v53, Attribute, "typeName");
          v28 = *(hkString::Self **)hkClassMemberAccessor::asCstring((hkClassMemberAccessor::Self *)v53, 0);
        }
      }
      CstyleArraySize = hkClassMember::getCstyleArraySize((hkClassMember::Self *)DeclaredMember);
      TypeFromMemberTypeClassName = (hkClass::Self *)hkDataObjectUtil::getTypeFromMemberTypeClassName(
                                                 (hkDataWorldDict::Self *)((char *)self + 16),
                                                 DeclaredMember[12],
                                                 DeclaredMember[13],
                                                 v28,
                                                 CstyleArraySize);
    }
    v32 = *(hkString::Self **)DeclaredMember;
    v33 = 0;
    if ( *(uint32_t *)DeclaredMember != 0 )
    {
      v34 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(*((uint32_t *)self + 2) + 80);
      v48 = v32;
      v33 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(v34, v32, 0);
      if ( v33 == 0 )
      {
        v50 = hkString::strDup(v48);
        hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v34, v50, (unsigned int)(uintptr_t)(v50));
        v33 = (int)(uintptr_t)(v50);
      }
    }
    v54 = 0;
    v55 = 0;
    v35 = *((uint32_t *)v3 + 11);
    if ( v35 == (*((uint32_t *)v3 + 12) & 0x3FFFFFFF) )
    {
      v49 = (hkString::Self *)v33;
      hkArrayUtil::reserveMore(
        *(hkArrayUtil::Self **)(*((uint32_t *)v3 + 3) + 12),
        (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)((char *)v3 + 40),
        20,
        (int)(uintptr_t)(v38));
      v35 = *((uint32_t *)v3 + 11);
      v33 = (int)(uintptr_t)(v49);
    }
    v42 = (hkString::Self *)((char *)v42 + 1);
    v25 = (int *)(*((uint32_t *)v3 + 10) + 20 * v35);
    *v25 = v33;
    v26 = v54;
    v25[2] = v55;
    v25[1] = v26;
    v25[3] = (int)(uintptr_t)(TypeFromMemberTypeClassName);
    v25[4] = 0;
    ++*((uint32_t *)v3 + 11);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldDict::ObjectTracker::Destroy  (binary VA: 0x18b18c0)
// Original: hkDataWorldDict::ObjectTracker::~ObjectTracker
// ----------------------------------------------------------------------------
void hkDataWorldDict::ObjectTracker::Destroy(hkDataWorldDict::ObjectTracker::Self *self)
{
  int v1;
  char *v2;
  int v3;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *Iterator;
  int v5;
  int v6;
  int v7;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v8;
  int v9;
  int Key;
  int v11;
  int j;
  int v13;
  int k;
  uint16_t *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  uint32_t *v23;
  bool v24;
  int m;
  uint32_t *v26;
  char *v27;
  int n;
  int v29;
  int v30;
  int32_t v31; // kr00_4
  int32_t v32;
  int32_t v33; // ett
  char *v34;
  int ii;
  hkString::Self *v36;
  int v37;
  uint32_t *v38;
  int v39;
  hkLifoAllocator::Self *v40;
  int v41;
  signed int v42;
  hkLifoAllocator::Self *v43;
  int v44;
  int v45;
  hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *v46;
  hkLifoAllocator::Self **address;
  hkLifoAllocator::Self *v48;
  signed int v49;
  hkLifoAllocator::Self *v50;
  uint32_t *v51;
  int v52;
  typedef char *_g4_t_v53;
  typedef char *_g4_t_v54;
  typedef hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *_g4_t_v57;
  typedef int _g4_t_v58;
  typedef signed int _g4_t_v59;
  typedef hkLifoAllocator::Self **_g4_t_v60;
  typedef uint32_t *_g4_t_v61;
  typedef hkDataWorldDict::ObjectTracker::Self *_g4_t_v62;
  typedef hkString::Self *_g4_t_Value;
  typedef hkString::Self *_g4_t_v64;
  typedef hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *_g4_t_v65;
  typedef char *_g4_t_v66;
  typedef hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *_g4_t_v67;
  typedef int _g4_t_i;
  typedef char *_g4_t_v69;
  typedef hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *_g4_t_v70;
  typedef hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *_g4_t_v71;
  typedef uint8_t _g4_t_v72[5];
  typedef uint8_t _g4_t_v73[12];
  typedef uint32_t *_g4_t_v74;
  typedef int _g4_t_v75;
  typedef signed int _g4_t_v76;
  typedef void *_g4_t_v77;
  typedef int _g4_t_v78;
  typedef uint32_t _g4_t_v79[134];
  enum : size_t {
    _g4_s0 = 736u,
    _g4_s1 = (4u + sizeof(_g4_t_v53)) > _g4_s0 ? (4u + sizeof(_g4_t_v53)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v54)) > _g4_s1 ? (4u + sizeof(_g4_t_v54)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v55)) > _g4_s2 ? (8u + sizeof(_g4_t_v55)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v56)) > _g4_s3 ? (12u + sizeof(_g4_t_v56)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v57)) > _g4_s4 ? (16u + sizeof(_g4_t_v57)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v58)) > _g4_s5 ? (20u + sizeof(_g4_t_v58)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v59)) > _g4_s6 ? (24u + sizeof(_g4_t_v59)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v60)) > _g4_s7 ? (32u + sizeof(_g4_t_v60)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v61)) > _g4_s8 ? (40u + sizeof(_g4_t_v61)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v62)) > _g4_s9 ? (44u + sizeof(_g4_t_v62)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_Value)) > _g4_s10 ? (48u + sizeof(_g4_t_Value)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v64)) > _g4_s11 ? (48u + sizeof(_g4_t_v64)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v65)) > _g4_s12 ? (52u + sizeof(_g4_t_v65)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v66)) > _g4_s13 ? (52u + sizeof(_g4_t_v66)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v67)) > _g4_s14 ? (56u + sizeof(_g4_t_v67)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_i)) > _g4_s15 ? (60u + sizeof(_g4_t_i)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v69)) > _g4_s16 ? (60u + sizeof(_g4_t_v69)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v70)) > _g4_s17 ? (64u + sizeof(_g4_t_v70)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v71)) > _g4_s18 ? (72u + sizeof(_g4_t_v71)) : _g4_s18,
    _g4_s20 = (79u + sizeof(_g4_t_v72)) > _g4_s19 ? (79u + sizeof(_g4_t_v72)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v73)) > _g4_s20 ? (84u + sizeof(_g4_t_v73)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v74)) > _g4_s21 ? (96u + sizeof(_g4_t_v74)) : _g4_s21,
    _g4_s23 = (100u + sizeof(_g4_t_v75)) > _g4_s22 ? (100u + sizeof(_g4_t_v75)) : _g4_s22,
    _g4_s24 = (104u + sizeof(_g4_t_v76)) > _g4_s23 ? (104u + sizeof(_g4_t_v76)) : _g4_s23,
    _g4_s25 = (108u + sizeof(_g4_t_v77)) > _g4_s24 ? (108u + sizeof(_g4_t_v77)) : _g4_s24,
    _g4_s26 = (112u + sizeof(_g4_t_v78)) > _g4_s25 ? (112u + sizeof(_g4_t_v78)) : _g4_s25,
    _g4_s27 = (128u + sizeof(_g4_t_v79)) > _g4_s26 ? (128u + sizeof(_g4_t_v79)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 4u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 4u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 8u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 12u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 16u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 20u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 24u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 32u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 40u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 44u);
  _g4_t_Value &Value = *reinterpret_cast<_g4_t_Value *>(_g4_sf + 48u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 48u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 52u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 52u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 56u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 60u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 60u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 64u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 72u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 79u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 84u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 96u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 100u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 104u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 108u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 112u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 128u);

  v79[130] = (uint32_t)(uintptr_t)(&self);
  v62 = self;
  v74 = nullptr;
  v75 = 0;
  v76 = 0x80000000;
  v78 = *((uint32_t *)self + 14);
  v1 = v78;
  if ( v78 != 0 )
  {
    address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v48 = *address;
    v49 = (4 * v78 + 127) & 0xFFFFFF80;
    v60 = address;
    v2 = *((char **)*address + 3);
    if ( v49 <= *((uint32_t *)v48 + 2) && (unsigned int)(uintptr_t)(&v2[v49]) <= *((uint32_t *)v48 + 4) )
      *((uint32_t *)v48 + 3) = (uint32_t)(uintptr_t)(&v2[v49]);
    else
      v2 = (char *)hkLifoAllocator::allocateFromNewSlab(v48, (4 * v78 + 127) & 0xFFFFFF80);
  }
  else
  {
    v60 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v2 = nullptr;
  }
  v74 = (uint32_t *)(v2);
  v77 = v2;
  v76 = v1 | 0x80000000;
  v3 = *((uint32_t *)v62 + 2);
  if ( v3 != 0 )
  {
    v59 = (4 * v3 + 127) & 0xFFFFFF80;
    v50 = *v60;
    v51 = *((uint32_t **)*v60 + 3);
    if ( v59 <= *((uint32_t *)*v60 + 2) && (unsigned int)(uintptr_t)(v51) + v59 <= *((uint32_t *)v50 + 4) )
    {
      *((uint32_t *)v50 + 3) = (uint32_t)(uintptr_t)((char *)v51 + v59);
      v61 = v51;
    }
    else
    {
      v61 = (uint32_t *)hkLifoAllocator::allocateFromNewSlab(v50, v59);
    }
    v58 = v59;
  }
  else
  {
    v58 = 0;
    v59 = 0;
    v61 = nullptr;
  }
  v57 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)((hkDataWorldDict::ObjectTracker::Self *)((char *)v62 + 32));
  *((uint32_t *)v62 + 6) = 0;
  hkMapBase_unsigned_long_unsigned_l_393416::clear((hkDataWorldDict::ObjectTracker::Self *)((char *)v62 + 32));
  *((uint32_t *)v62 + 11) = -1;
  *((uint32_t *)v62 + 12) = 0;
  v70 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)((hkDataWorldDict::ObjectTracker::Self *)((char *)v62 + 4));
  Iterator = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getIterator((hkDataWorldDict::ObjectTracker::Self *)((char *)v62 + 4));
  v71 = Iterator;
  v67 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)((hkDataWorldDict::ObjectTracker::Self *)((char *)v62 + 64));
  for ( i = 0; ; ++i )
  {
    v55 = Iterator;
    v53 = (char *)v62 + 4;
    hkCachedHashMap_hkStringMapOperations_hk_b9db0c::isValid(v72);
    if ( v72[0] == 0 )
      break;
    Value = (hkString::Self *)hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getValue(v70, v71);
    v61[i] = (uint32_t)(uintptr_t)(Value);
    v5 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
           v67,
           (unsigned int)(uintptr_t)(Value),
           0xFFFFFFFF);
    if ( v5 != -1 )
    {
      v6 = *((uint32_t *)v62 + 13);
      v7 = v75;
      do
      {
        v8 = *(hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> **)(v6 + 8 * v5);
        v9 = 8 * v5;
        if ( (v76 & 0x3FFFFFFF) == v7 )
        {
          v65 = v8;
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)&v74,
            &loc_4,
            v56);
          v7 = v75;
          v8 = v65;
        }
        v74[v7] = (uint32_t)(uintptr_t)(v8);
        v6 = *((uint32_t *)v62 + 13);
        v7 = ++v75;
        v5 = *(uint32_t *)(v6 + v9 + 4);
      }
      while ( v5 != -1 );
      Key = hkMapBase_unsigned_long_unsigned_l_393416::findKey(v67, (unsigned int)(uintptr_t)(Value));
      v11 = *(uint32_t *)(*((uint32_t *)v62 + 16) + 8 * Key + 4);
      hkMapBase_unsigned_long_unsigned_l_393416::remove(v67, Key);
      if ( v11 != -1 )
      {
        for ( j = v11; j != -1; j = *(uint32_t *)(v13 + 4) )
          v13 = *((uint32_t *)v62 + 13) + 8 * j;
        *(uint32_t *)(v13 + 4) = *((uint32_t *)v62 + 19);
        *((uint32_t *)v62 + 19) = v11;
      }
    }
    Iterator = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getNext(
                                                                                     v70,
                                                                                     v71);
    v71 = Iterator;
  }
  if ( v75 > 0 )
  {
    for ( k = 0; k < v75; ++k )
    {
      v15 = (uint16_t *)v74[k];
      if ( v15[2] != 0 )
      {
        hkErrStream::Construct((hkErrStream::Self *)v73, (hkString::Self *)v79, 512);
        v66 = (char *)v15[2];
        v16 = G4_VCALL<int>(v15, 12);
        v64 = (hkString::Self *)G4_VCALL<int>(v16, 12);
        v17 = hkOstream::opShl((int)(uintptr_t)(v73), (hkString::Self *)"The object of class ");
        v18 = hkOstream::opShl(v17, v64);
        v19 = hkOstream::opShl(
                v18,
                (hkString::Self *)" is about to be removed and all references to it will be invalid.\n"
                            "However, the object is referenced (");
        v20 = hkOstream::opShl(v19, v66);
        hkOstream::opShl(
          v20,
          (hkString::Self *)") from outside the world and it will lead to unexpected behavior or crash.");
        hkError::messageWarning(
          (hkError::Self *)0x760D3795,
          (int)(uintptr_t)(v79),
          "Data/Dict/hkDataObjectDict.cpp",
          (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_AF4)->st_size + 1,
          (int)(uintptr_t)(v57));
        hkErrStream::Destroy((hkErrStream::Self *)v73);
      }
      hkDataObjectDict::selfDestruct((hkDataObjectDict::Self *)v15);
      v21 = v75;
    }
    if ( v75 > 0 )
    {
      v22 = 0;
      do
      {
        v23 = (uint32_t *)v74[v22];
        v24 = v23[2]-- == 1;
        if ( v24 )
        {
          G4_VCALL<void>(v23, 4, v53, v55);
          v21 = v75;
        }
        ++v22;
      }
      while ( v22 < v21 );
    }
  }
  if ( i != 0 )
  {
    for ( m = 0; m != i; ++m )
    {
      v26 = (uint32_t *)v61[m];
      v24 = v26[2]-- == 1;
      if ( v24 )
        G4_VCALL<void>(v26, 4);
    }
  }
  v27 = (char *)v62 + 96;
  for ( n = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getIterator((hkDataWorldDict::ObjectTracker::Self *)((char *)v62 + 96));
        ;
        n = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getNext(v27, n) )
  {
    hkCachedHashMap_hkStringMapOperations_hk_b9db0c::isValid(v72);
    if ( v72[0] == 0 )
      break;
    v29 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getValue(v27, n);
    if ( *(uint16_t *)(v29 + 6) != 0 )
    {
      v69 = v27;
      do
      {
        v31 = *(uint32_t *)(v29 + 4);
        HIWORD(v30) = HIWORD(v31);
        LOWORD(v30) = 0;
        v32 = v30 | (uint16_t)(v31 - 1);
        v33 = v31;
      }
      while ( v33 != __sync_val_compare_and_swap((volatile int32_t *)(v29 + 4), v33, v32) );
      v27 = v69;
      if ( (uint16_t)v32 == 0 )
        G4_VCALL<void>(v29, 16);
    }
  }
  v34 = (char *)v62 + 80;
  for ( ii = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getIterator((hkDataWorldDict::ObjectTracker::Self *)((char *)v62 + 80));
        ;
        ii = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getNext(v34, ii) )
  {
    hkCachedHashMap_hkStringMapOperations_hk_b9db0c::isValid(v72);
    if ( v72[0] == 0 )
      break;
    v36 = (hkString::Self *)hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getValue(v34, ii);
    hkString::strFree(v36, v54);
  }
  v37 = *((uint32_t *)v62 + 30);
  v38 = *((uint32_t **)v62 + 28);
  if ( v37 >= 0 )
  {
    v39 = 0;
    if ( *v38 == -1 )
    {
      while ( v37 >= ++v39 )
      {
        if ( v38[2 * v39] != -1 )
        {
LABEL_63:
          v52 = v39;
          goto LABEL_64;
        }
      }
    }
    else
    {
      v52 = 0;
LABEL_64:
      v46 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v38[2 * v52 + 1];
      if ( v46 != nullptr )
      {
        hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
          v46,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
        hkMapBase_unsigned_long_unsigned_l_393416::Destroy(v46);
        (*(void (**)(uint32_t, hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *, int))(**((uint32_t **)*v60 + 11) + 12))(
          *((uint32_t *)*v60 + 11),
          v46,
          12);
        v38 = *((uint32_t **)v62 + 28);
        v37 = *((uint32_t *)v62 + 30);
      }
      while ( ++v39 <= v37 )
      {
        if ( v38[2 * v39] != -1 )
          goto LABEL_63;
      }
    }
  }
  v40 = *v60;
  if ( *((uint32_t *)*v60 + 2) < v59
    || *((uint32_t **)v40 + 3) != (uint32_t *)((char *)v61 + v58)
    || v61 == *((uint32_t **)v40 + 5) )
  {
    hkLifoAllocator::slowBlockFree(*v60, v61, v58);
  }
  else
  {
    *((uint32_t *)v40 + 3) = (uint32_t)(uintptr_t)(v61);
  }
  v41 = 0;
  if ( v74 != v77 )
    v41 = v75;
  v75 = v41;
  v42 = (4 * v78 + 127) & 0xFFFFFF80;
  v43 = *v60;
  if ( v42 > *((uint32_t *)*v60 + 2) || *((void **)v43 + 3) != (char *)v77 + v42 || v77 == *((void **)v43 + 5) )
    hkLifoAllocator::slowBlockFree(v43, v77, (4 * v78 + 127) & 0xFFFFFF80);
  else
    *((uint32_t *)v43 + 3) = (uint32_t)(uintptr_t)(v77);
  v75 = 0;
  if ( v76 >= 0 )
    (*(void (**)(uint32_t *, uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v74,
      4 * v76);
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkDataWorldDict::ObjectTracker::Self *)((char *)v62 + 112),
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy((hkDataWorldDict::ObjectTracker::Self *)((char *)v62 + 112));
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Destroy((hkDataWorldDict::ObjectTracker::Self *)((char *)v62 + 96));
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Destroy((hkDataWorldDict::ObjectTracker::Self *)((char *)v62 + 80));
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    v67,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy(v67);
  v44 = *((uint32_t *)v62 + 15);
  *((uint32_t *)v62 + 14) = 0;
  if ( v44 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v62 + 13),
      8 * v44);
  *((uint32_t *)v62 + 13) = 0;
  *((uint32_t *)v62 + 15) = 0x80000000;
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    v57,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy(v57);
  v45 = *((uint32_t *)v62 + 7);
  *((uint32_t *)v62 + 6) = 0;
  if ( v45 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v62 + 5),
      8 * v45);
  *((uint32_t *)v62 + 5) = 0;
  *((uint32_t *)v62 + 7) = 0x80000000;
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Destroy(v70);
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldDict::ObjectTracker::removeClassContent  (binary VA: 0x18b21b0)
// Original: hkDataWorldDict::ObjectTracker::removeClassContent
// ----------------------------------------------------------------------------
unsigned int hkDataWorldDict::ObjectTracker::removeClassContent(hkDataWorldDict::ObjectTracker::Self *self, hkDataClassDict::Self *a2, int a3, int a4, int a5, int a6, int a7, int a8, char a9, int a10, int a11, char *a12, int a13, int a14, char *a15, int a16, int a17, int a18, int a19, char a20)
{
  hkString::Self *v21;
  unsigned int v22;
  int v23;
  unsigned int v24;
  unsigned int result;
  unsigned int v26;
  hkLifoAllocator::Self **address;
  hkLifoAllocator::Self *v28;
  bool v29; // cc
  char *v30;
  int v31;
  int v32;
  int i;
  int v34;
  int v35;
  hkDataWorldDict::ObjectTracker::Self *v36;
  int v37;
  uint32_t *v38;
  int v40;
  unsigned int Key;
  int v42;
  int j;
  int v44;
  int v45;
  hkLifoAllocator::Self *v46;
  signed int v47;
  int v48;
  uint16_t *v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  hkDataObjectDict::Self *v55;
  hkDataObjectDict::Self **v56;
  int savedregs;
  hkLifoAllocator::Self **retaddr;
  hkDataClassDict::Self *v59;
  hkString::Self *v60;
  char *v61;

  v21 = (hkString::Self *)G4_VCALL<int>(a2, 12);
  v59 = nullptr;
  if ( v21 != nullptr )
    v59 = (hkDataClassDict::Self *)hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
                               (hkDataWorldDict::ObjectTracker::Self *)((char *)self + 4),
                               v21,
                               0);
  v22 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
          (hkDataWorldDict::ObjectTracker::Self *)((char *)self + 32),
          (unsigned int)(uintptr_t)(a2),
          0xFFFFFFFF);
  if ( v22 != -1 )
  {
    v23 = *((uint32_t *)self + 5);
    do
    {
      v24 = v22;
      hkDataWorldDict::ObjectTracker::removeClassContent(self, *(hkDataClassDict::Self **)(v23 + 8 * v22), 0, 0, 0, 0, 0, 0, 0, 0, 0, nullptr, 0, 0, nullptr, 0, 0, 0, 0, 0);
      v23 = *((uint32_t *)self + 5);
      v22 = *(uint32_t *)(v23 + 8 * v24 + 4);
    }
    while ( v22 != -1 );
  }
  result = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
             (hkDataWorldDict::ObjectTracker::Self *)((char *)self + 64),
             (unsigned int)(uintptr_t)(v59),
             0xFFFFFFFF);
  v26 = result;
  if ( result != -1 )
  {
    a12 = nullptr;
    a13 = 0;
    a14 = 0x80000000;
    a16 = 512;
    address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v28 = *address;
    retaddr = address;
    v29 = *((uint32_t *)*address + 2) <= 2047;
    v30 = *((char **)*address + 3);
    if ( v29 || (unsigned int)(uintptr_t)(v30 + 2048) > *((uint32_t *)v28 + 4) )
    {
      v30 = (char *)hkLifoAllocator::allocateFromNewSlab(v28, 2048);
      v31 = a13;
    }
    else
    {
      *((uint32_t *)v28 + 3) = (uint32_t)(uintptr_t)(v30 + 2048);
      v31 = 0;
    }
    a12 = v30;
    a15 = v30;
    a14 = -2147483136;
    v32 = *((uint32_t *)self + 13);
    for ( i = -2147483136; ; i = a14 )
    {
      v34 = 8 * v26;
      v35 = *(uint32_t *)(v32 + 8 * v26);
      if ( (i & 0x3FFFFFFF) == v31 )
      {
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkMemoryAllocator::Self *)&a12,
          4,
          savedregs);
        v31 = a13;
      }
      *(uint32_t *)&a12[4 * v31] = v35;
      v31 = ++a13;
      v32 = *((uint32_t *)self + 13);
      v26 = *(uint32_t *)(v32 + v34 + 4);
      if ( v26 == -1 )
        break;
    }
    v36 = self;
    if ( v31 > 0 )
    {
      v48 = 0;
      do
      {
        v56 = (hkDataObjectDict::Self **)&a12[4 * v48];
        v55 = *v56;
        if ( *((hkDataObjectDict::Self **)self + 12) == *v56 )
        {
          *((uint32_t *)self + 12) = 0;
          v55 = *v56;
        }
        if ( *((uint16_t *)v55 + 2) != 0 )
        {
          hkErrStream::Construct((hkErrStream::Self *)&a9, (hkString::Self *)&a20, 512);
          v49 = *(uint16_t **)&a12[4 * v48];
          v61 = (char *)v49[2];
          v50 = G4_VCALL<int>(v49, 12);
          v60 = (hkString::Self *)G4_VCALL<int>(v50, 12);
          v51 = hkOstream::opShl((int)(uintptr_t)(&a9), (hkString::Self *)"The object of class ");
          v52 = hkOstream::opShl(v51, v60);
          v53 = hkOstream::opShl(
                  v52,
                  (hkString::Self *)" is about to be removed and all references to it will be invalid.\n"
                              "However, the object is referenced (");
          v54 = hkOstream::opShl(v53, v61);
          hkOstream::opShl(
            v54,
            (hkString::Self *)") from outside the world and it will lead to unexpected behavior or crash.");
          hkError::messageWarning((hkError::Self *)0x760D3794, (int)(uintptr_t)(&a20), "Data/Dict/hkDataObjectDict.cpp", stru_BD4);
          hkErrStream::Destroy((hkErrStream::Self *)&a9);
          v55 = *(hkDataObjectDict::Self **)&a12[4 * v48];
        }
        ++v48;
        hkDataObjectDict::selfDestruct(v55);
        v40 = a13;
      }
      while ( a13 > v48 );
      v36 = self;
      if ( a13 > 0 )
      {
        v37 = 0;
        do
        {
          v38 = *(uint32_t **)&a12[4 * v37];
          if ( v38[2]-- == 1 )
          {
            G4_VCALL<void>(v38, 4);
            v40 = a13;
          }
          ++v37;
        }
        while ( v37 < v40 );
      }
    }
    Key = hkMapBase_unsigned_long_unsigned_l_393416::findKey(self, (unsigned int)(uintptr_t)(v59));
    v42 = *(uint32_t *)(*((uint32_t *)v36 + 16) + 8 * Key + 4);
    hkMapBase_unsigned_long_unsigned_l_393416::remove(__SPAIR64__(Key, (unsigned int)(uintptr_t)(self)));
    if ( v42 != -1 )
    {
      for ( j = v42; j != -1; j = *(uint32_t *)(v44 + 4) )
        v44 = *((uint32_t *)v36 + 13) + 8 * j;
      *(uint32_t *)(v44 + 4) = *((uint32_t *)v36 + 19);
      *((uint32_t *)v36 + 19) = v42;
    }
    v45 = 0;
    if ( a12 != a15 )
      v45 = a13;
    v46 = *retaddr;
    a13 = v45;
    v47 = (4 * a16 + 127) & 0xFFFFFF80;
    if ( v47 > *((uint32_t *)v46 + 2) || *((char **)v46 + 3) != &a15[v47] || a15 == *((char **)v46 + 5) )
      hkLifoAllocator::slowBlockFree(v46, a15, (4 * a16 + 127) & 0xFFFFFF80);
    else
      *((uint32_t *)v46 + 3) = (uint32_t)(uintptr_t)(a15);
    result = a14;
    a13 = 0;
    if ( a14 >= 0 )
      return (*(int (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               a12,
               4 * a14);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldDict::removeClass  (binary VA: 0x18b25d0)
// Original: hkDataWorldDict::removeClass
// ----------------------------------------------------------------------------
int hkDataWorldDict::removeClass(hkDataWorldDict::ObjectTracker::Self **self, hkDataClassDict::Self **a2)
{
  hkString::Self *v2;
  hkTypeManager::Type::Self *Class;
  hkDataClassDict::Self *v4;
  int result;

  v2 = (hkString::Self *)G4_VCALL<int>(*a2, 12);
  Class = (hkTypeManager::Type::Self *)hkTypeManager::getClass((hkTypeManager::Self *)(self + 4), v2);
  if ( Class != nullptr )
    hkTypeManager::removeClass((hkTypeManager::Self *)(self + 4), Class);
  v4 = *a2;
  *a2 = nullptr;
  result = hkDataWorldDict::ObjectTracker::untrackClass(*(self + 2), v4);
  if ( (*((uint32_t *)v4 + 2))-- == 1 )
    return G4_VCALL<int>(v4, 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldDict::Destroy  (binary VA: 0x18b2b10)
// Original: hkDataWorldDict::~hkDataWorldDict
// ----------------------------------------------------------------------------
void hkDataWorldDict::Destroy(hkDataWorldDict::Self *self)
{
  hkDataWorldDict::ObjectTracker::Self *v1;
  int address;

  v1 = *((hkDataWorldDict::ObjectTracker::Self **)self + 2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A7DC8);
  if ( v1 != nullptr )
  {
    hkDataWorldDict::ObjectTracker::Destroy(v1);
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, hkDataWorldDict::ObjectTracker::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      v1,
      124);
  }
  hkTypeManager::Destroy((hkTypeManager::Self *)((hkDataWorldDict::Self *)((char *)self + 16)));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldDict::Destroy_ea18b2b90  (binary VA: 0x18b2b90)
// Original: hkDataWorldDict::~hkDataWorldDict
// ----------------------------------------------------------------------------
void hkDataWorldDict::Destroy_ea18b2b90(hkDataWorldDict::Self *self)
{
  int v1;
  int v2;

  hkDataWorldDict::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 152;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkTagfileReader::detectFormat  (binary VA: 0x18b2bf0)
// Original: hkTagfileReader::detectFormat
// ----------------------------------------------------------------------------
hkTagfileReader::Self * hkTagfileReader::detectFormat(hkTagfileReader::Self *self, hkStreamReader::Self *a2)
{
  uint16_t v3;
  uint16_t v4;
  uint32_t v5[6];

  if ( G4_VCALL<int>(a2, 32, v5, 16) == 16 )
  {
    if ( v5[1] == -804128050 && v5[0] == -894431970
      || (LOBYTE(v3) = HIBYTE(v5[0]),
          HIBYTE(v3) = BYTE2(v5[0]),
          ((v5[0] << 24) | (BYTE1(v5[0]) << 16) | v3) == 0xCAB00D1E)
      && (LOBYTE(v4) = HIBYTE(v5[1]),
          HIBYTE(v4) = BYTE2(v5[1]),
          ((v5[1] << 24) | (BYTE1(v5[1]) << 16) | v4) == 0xD011FACE) )
    {
      *(uint32_t *)self = 2;
      return self;
    }
    else
    {
      *(uint32_t *)self = 1;
      return self;
    }
  }
  else
  {
    *(uint32_t *)self = 0;
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectUtil::getBasicType  (binary VA: 0x18b2d00)
// Original: hkDataObjectUtil::getBasicType
// ----------------------------------------------------------------------------
uint32_t * hkDataObjectUtil::getBasicType(hkTypeManager::Self *a1, int a2, hkString::Self *a3)
{
  char *v3;
  uint32_t *result;
  hkTypeManager::Type::Self *v5;

  v3 = (char *)&unk_1D1D580 + 4 * a2;
  switch ( *v3 )
  {
    case 1:
      result = *((uint32_t **)a1 + (uint8_t)v3[1] + 3);
      break;
    case 4:
      result = hkTypeManager::makeTuple(
                 a1,
                 *((hkTypeManager::Type::Self **)a1 + (uint8_t)v3[1] + 3),
                 (uint8_t)v3[2]);
      break;
    case 5:
      if ( a3 == nullptr )
        goto LABEL_2;
      v5 = (hkTypeManager::Type::Self *)hkTypeManager::addClass((hkTypeManager::Type::Self **)a1, a3);
      result = hkTypeManager::makePointer(a1, v5);
      break;
    case 6:
      result = (uint32_t *)hkTypeManager::addClass((hkTypeManager::Type::Self **)a1, a3);
      break;
    case 7:
LABEL_2:
      result = hkTypeManager::makePointer(a1, *((hkTypeManager::Type::Self **)a1 + 2));
      break;
    default:
      result = nullptr;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectUtil::getTypeFromMemberTypeClassName  (binary VA: 0x18b2de0)
// Original: hkDataObjectUtil::getTypeFromMemberTypeClassName
// ----------------------------------------------------------------------------
hkTypeManager::Type::Self * hkDataObjectUtil::getTypeFromMemberTypeClassName(hkTypeManager::Self *a1, int a2, int a3, hkString::Self *a4, int a5)
{
  char *v5;
  hkTypeManager::Type::Self *result;
  hkTypeManager::Type::Self *v7;
  hkTypeManager::Type::Self *BasicType;

  v5 = (char *)&unk_1D1D580 + 4 * a2;
  switch ( *v5 )
  {
    case 1:
      result = *((hkTypeManager::Type::Self **)a1 + (uint8_t)v5[1] + 3);
      goto LABEL_3;
    case 2:
      if ( a3 == 25 )
        BasicType = (hkTypeManager::Type::Self *)hkTypeManager::addClass((hkTypeManager::Type::Self **)a1, a4);
      else
        BasicType = (hkTypeManager::Type::Self *)hkDataObjectUtil::getBasicType(a1, a3, a4);
      if ( a5 != 0 )
        BasicType = (hkTypeManager::Type::Self *)hkTypeManager::makeTuple(a1, BasicType, a5);
      return (hkTypeManager::Type::Self *)hkTypeManager::makeArray(a1, BasicType);
    case 3:
      result = (hkTypeManager::Type::Self *)hkDataObjectUtil::getBasicType(a1, a3, nullptr);
      goto LABEL_3;
    case 4:
      result = (hkTypeManager::Type::Self *)hkTypeManager::makeTuple(
                                        a1,
                                        *((hkTypeManager::Type::Self **)a1 + (uint8_t)v5[1] + 3),
                                        (uint8_t)v5[2]);
      goto LABEL_3;
    case 5:
      v7 = (hkTypeManager::Type::Self *)hkDataObjectUtil::getBasicType(a1, a3, a4);
      result = (hkTypeManager::Type::Self *)hkTypeManager::makePointer(a1, v7);
      goto LABEL_3;
    case 6:
    case 7:
      result = (hkTypeManager::Type::Self *)hkDataObjectUtil::getBasicType(a1, a2, a4);
      goto LABEL_3;
    default:
      result = nullptr;
LABEL_3:
      if ( a5 != 0 )
        return (hkTypeManager::Type::Self *)hkTypeManager::makeTuple(a1, result, a5);
      return result;
  }
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectUtil::getTypeFromMemberType  (binary VA: 0x18b2f50)
// Original: hkDataObjectUtil::getTypeFromMemberType
// ----------------------------------------------------------------------------
hkTypeManager::Type::Self * hkDataObjectUtil::getTypeFromMemberType(hkTypeManager::Self *a1, int a2, int a3, hkClass::Self *a4, int a5)
{
  hkString::Self *Name;

  if ( a4 == nullptr )
    return hkDataObjectUtil::getTypeFromMemberTypeClassName(a1, a2, a3, nullptr, a5);
  Name = (hkString::Self *)hkClass::getName(a4);
  return hkDataObjectUtil::getTypeFromMemberTypeClassName(a1, a2, a3, Name, a5);
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectUtil::getExtraStorageSize  (binary VA: 0x18b2fc0)
// Original: hkDataObjectUtil::getExtraStorageSize
// ----------------------------------------------------------------------------
int hkDataObjectUtil::getExtraStorageSize(hkDataObjectUtil::Self *self, const hkClass::Self *a2)
{
  int v2;
  hkClass::Self *v3;
  int Member;
  int v5;
  hkClassMember::Self *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  bool v11;
  typedef const hkClass::Self *_g4_t_v13;
  typedef hkClassMember::Self *_g4_t_v14;
  typedef hkClassMember::Self *_g4_t_v15;
  typedef hkClassMember::Self *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef hkClassMember::Self *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint32_t _g4_t_v21[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v15)) > _g4_s2 ? (12u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v16)) > _g4_s3 ? (12u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v17)) > _g4_s4 ? (16u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v18)) > _g4_s5 ? (20u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v19)) > _g4_s6 ? (20u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v20)) > _g4_s7 ? (20u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v21)) > _g4_s8 ? (24u + sizeof(_g4_t_v21)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);

  v2 = 0;
  v21[4] = (uint32_t)(uintptr_t)(&self);
  v13 = a2;
  v3 = (hkClass::Self *)(self);
  v17 = 0;
  while ( v2 < hkClass::getNumMembers(v3) )
  {
    Member = hkClass::getMember(v3, v2);
    if ( *(uint8_t *)(Member + 12) == 34 )
    {
      v15 = (hkClassMember::Self *)Member;
      (*(void (**)(uint32_t *, uint32_t, uint32_t))(**(uint32_t **)v13 + 16))(v21, *(uint32_t *)v13, *(uint32_t *)Member);
      v5 = G4_VCALL<int>(v21[0], 44);
      v6 = (hkClassMember::Self *)v5;
      if ( v5 != 0 )
      {
        v7 = *(uint32_t *)(v5 + 4);
        ++*((uint32_t *)v6 + 2);
        v18 = (uint16_t)(v7 + 1);
        v8 = *((uint32_t *)v6 + 1);
        LOWORD(v8) = 0;
        *((uint32_t *)v6 + 1) = v8 | v18;
      }
      v19 = v6;
      G4_VCALL<void>(v6, 24);
      v14 = v15;
      hkClassMember::getArrayMemberSize(v15);
      v16 = v19;
      v20 = G4_VCALL<int>(v19, 24);
      v17 += (v20 * hkClassMember::getArrayMemberSize(v14) + 15) & 0xFFFFFFF0;
      v9 = *((uint32_t *)v16 + 1);
      LOWORD(v9) = 0;
      v10 = v9 | (uint16_t)(*((uint32_t *)v16 + 1) - 1);
      v11 = (*((uint32_t *)v16 + 2))-- == 1;
      *((uint32_t *)v16 + 1) = v10;
      if ( v11 )
        G4_VCALL<void>(v16, 4);
    }
    ++v2;
  }
  return v17;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::opNew  (binary VA: 0x18b3110)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::operator new
// ----------------------------------------------------------------------------
int hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::opNew()
{
  int address;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
           *(uint32_t *)(*(uint32_t *)address + 44),
           12);
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::opDelete  (binary VA: 0x18b3150)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::operator delete
// ----------------------------------------------------------------------------
void hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::opDelete(void *a1)
{
  int address;

  if ( a1 != nullptr )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, void *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      a1,
      12);
  }
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::opNew  (binary VA: 0x18b31a0)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::operator new
// ----------------------------------------------------------------------------
unsigned int hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::opNew(hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *self, unsigned int a2)
{
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::opNewArray  (binary VA: 0x18b31b0)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::operator new[]
// ----------------------------------------------------------------------------
unsigned int hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::opNewArray(hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *self, unsigned int a2)
{
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::opDelete  (binary VA: 0x18b31c0)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::operator delete
// ----------------------------------------------------------------------------
void hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::opDelete()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::opDeleteArray  (binary VA: 0x18b31d0)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::operator delete[]
// ----------------------------------------------------------------------------
void hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::opDeleteArray()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::Construct  (binary VA: 0x18b31e0)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::hkMapBase
// ----------------------------------------------------------------------------
void hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::Construct(hkMapBase_Raw *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = -1;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::Construct  (binary VA: 0x18b3200)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::hkMapBase
// ----------------------------------------------------------------------------
void hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::Construct()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::Destroy  (binary VA: 0x18b3210)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::~hkMapBase
// ----------------------------------------------------------------------------
void hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::Destroy()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::getIterator  (binary VA: 0x18b3220)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::getIterator
// ----------------------------------------------------------------------------
int hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::getIterator(hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *self)
{
  int v1;
  int v2;
  int result;

  v1 = *((uint32_t *)self + 2);
  if ( v1 < 0 || **(uint32_t **)self != -1 )
    return 0;
  v2 = *(uint32_t *)self + 16;
  result = 0;
  do
  {
    if ( ++result > v1 )
      break;
    v2 += 16;
  }
  while ( *(uint32_t *)(v2 - 16) == -1 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::getKey  (binary VA: 0x18b3270)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::getKey
// ----------------------------------------------------------------------------
uint32_t * hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::getKey(uint32_t *a1, uint32_t *a2, int a3)
{
  uint32_t *v4;
  int v5;

  v4 = (uint32_t *)(*a2 + 16 * a3);
  v5 = v4[1];
  *a1 = *v4;
  a1[1] = v5;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::getValue  (binary VA: 0x18b3290)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::getValue
// ----------------------------------------------------------------------------
uint32_t * hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::getValue(uint32_t *a1, uint32_t *a2, int a3)
{
  int v4;
  int v5;

  v4 = *a2 + 16 * a3;
  v5 = *(uint32_t *)(v4 + 12);
  *a1 = *(uint32_t *)(v4 + 8);
  a1[1] = v5;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::setValue  (binary VA: 0x18b32b0)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::setValue
// ----------------------------------------------------------------------------
int hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::setValue(uint32_t *a1, int a2, int a3, int a4)
{
  int v4;

  v4 = *a1 + 16 * a2;
  *(uint32_t *)(v4 + 8) = a3;
  *(uint32_t *)(v4 + 12) = a4;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::getNext  (binary VA: 0x18b32d0)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::getNext
// ----------------------------------------------------------------------------
int hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::getNext(uint32_t *a1, int a2)
{
  int result;
  int v3;
  int v4;

  result = a2 + 1;
  v3 = a1[2];
  if ( a2 + 1 <= v3 && *(uint32_t *)(*a1 + 16 * result) == -1 )
  {
    v4 = 16 * a2 + *a1;
    do
    {
      if ( ++result > v3 )
        break;
      v4 += 16;
    }
    while ( *(uint32_t *)(v4 + 16) == -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::isValid  (binary VA: 0x18b3320)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::isValid
// ----------------------------------------------------------------------------
bool * hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::isValid(bool *a1, int a2, int a3)
{
  *a1 = a3 <= *(uint32_t *)(a2 + 8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::findKey  (binary VA: 0x18b3340)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::findKey
// ----------------------------------------------------------------------------
int hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::findKey(uint32_t *a1, unsigned int a2, int a3)
{
  int v3;
  int result;
  uint32_t *v5;

  v3 = a1[2];
  if ( v3 > 0 )
  {
    for ( result = v3 & (-1640531535 * (a2 >> 4)); ; result = v3 & (result + 1) )
    {
      v5 = (uint32_t *)(16 * result + *a1);
      if ( *v5 == -1 )
        break;
      if ( *v5 == a2 && v5[1] == a3 )
        return result;
    }
  }
  return v3 + 1;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::hasKey  (binary VA: 0x18b33b0)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::hasKey
// ----------------------------------------------------------------------------
uint8_t * hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::hasKey(uint8_t *a1, uint32_t *a2, unsigned int a3, int a4)
{
  int Key;
  bool v5;
  bool v6;
  bool v7;

  Key = hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::findKey(a2, a3, a4);
  v7 = __OFSUB__(Key, a2[2]);
  v5 = Key == a2[2];
  v6 = Key - a2[2] < 0;
  *a1 = v6 ^ v7 | v5;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::getWithDefault  (binary VA: 0x18b3400)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::getWithDefault
// ----------------------------------------------------------------------------
uint32_t * hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::getWithDefault(uint32_t *a1, uint32_t *a2, unsigned int a3, int a4, int a5, int a6)
{
  int v6;
  int i;
  uint32_t *v8;
  int v9;

  v6 = a2[2];
  if ( v6 > 0 )
  {
    for ( i = v6 & (-1640531535 * (a3 >> 4)); ; i = v6 & (i + 1) )
    {
      v8 = (uint32_t *)(16 * i + *a2);
      if ( *v8 == -1 )
        break;
      if ( *v8 == a3 && v8[1] == a4 )
      {
        v9 = v8[3];
        *a1 = v8[2];
        a1[1] = v9;
        return a1;
      }
    }
  }
  *a1 = a5;
  a1[1] = a6;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::get  (binary VA: 0x18b3490)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::get
// ----------------------------------------------------------------------------
int * hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::get(int *a1, uint32_t *a2, unsigned int a3, int a4, uint32_t *a5)
{
  int Key;
  int v6;
  int v7;
  int v8;

  Key = hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::findKey(a2, a3, a4);
  v6 = 1;
  if ( Key <= a2[2] )
  {
    v7 = *a2 + 16 * Key;
    v8 = *(uint32_t *)(v7 + 8);
    a5[1] = *(uint32_t *)(v7 + 12);
    *a5 = v8;
    v6 = 0;
  }
  *a1 = v6;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::remove  (binary VA: 0x18b34f0)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::remove
// ----------------------------------------------------------------------------
unsigned int hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::remove(int *a1, unsigned int a2)
{
  unsigned int result;
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  unsigned int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  unsigned int v17;

  result = a2;
  v16 = a2;
  v3 = (uint32_t *)(*a1 + 16 * a2);
  --a1[1];
  *v3 = -1;
  v4 = a1[2];
  v5 = *a1;
  v6 = v4 & (v4 + a2);
  if ( *(uint32_t *)(*a1 + 16 * v6) != -1 )
  {
    do
      v6 = v4 & (v4 + v6);
    while ( *(uint32_t *)(v5 + 16 * v6) != -1 );
  }
  v17 = v4 & (v6 + 1);
  while ( 1 )
  {
    result = v4 & (result + 1);
    v7 = 16 * result;
    v8 = (int *)(v5 + 16 * result);
    if ( *v8 == -1 )
      break;
    v9 = v4 & (-1640531535 * ((unsigned int)*v8 >> 4));
    if ( (v16 >= v9 || result < v17) && (v16 <= result || result < v9 && v16 >= v9) && (v17 <= v9 || v16 >= v9) )
    {
      v10 = v8[1];
      v11 = *v8;
      v12 = 16 * v16;
      *(uint32_t *)(v5 + v12) = v11;
      *(uint32_t *)(v5 + v12 + 4) = v10;
      v13 = 16 * v16;
      v16 = result;
      v14 = *a1;
      v15 = *(uint32_t *)(*a1 + v7 + 12);
      *(uint32_t *)(v14 + v13 + 8) = *(uint32_t *)(*a1 + v7 + 8);
      *(uint32_t *)(v14 + v13 + 12) = v15;
      *(uint32_t *)(*a1 + 16 * result) = -1;
      v4 = a1[2];
      v5 = *a1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::remove  (binary VA: 0x18b3600)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::remove
// ----------------------------------------------------------------------------
uint32_t * hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::remove(uint32_t *a1, int *a2, unsigned int a3, int a4)
{
  signed int Key;

  Key = hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::findKey((uint32_t *)(a2), a3, a4);
  if ( Key <= a2[2] )
  {
    hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::remove(a2, Key);
    *a1 = 0;
  }
  else
  {
    *a1 = 1;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::getSize  (binary VA: 0x18b3670)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::getSize
// ----------------------------------------------------------------------------
int hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::getSize(hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *self)
{
  return *((uint32_t *)self + 1) & 0x7FFFFFFF;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::getCapacity  (binary VA: 0x18b3680)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::getCapacity
// ----------------------------------------------------------------------------
int hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::getCapacity(hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *self)
{
  return (*((uint32_t *)self + 2) + 1) & 0x7FFFFFFF;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::getMemSize  (binary VA: 0x18b3690)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::getMemSize
// ----------------------------------------------------------------------------
int hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::getMemSize(hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *self)
{
  return 16 * (*((uint32_t *)self + 2) + 1);
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::getMemStart  (binary VA: 0x18b36a0)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::getMemStart
// ----------------------------------------------------------------------------
int hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::getMemStart(hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *self)
{
  return *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::isOk  (binary VA: 0x18b36b0)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::isOk
// ----------------------------------------------------------------------------
hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> * hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::isOk(hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *self, int a2)
{
  int v2;
  unsigned int *v3;
  unsigned int v4;
  int i;
  uint32_t *v6;

  v2 = *(uint32_t *)(a2 + 8);
  if ( v2 >= 0 )
  {
    v3 = *(unsigned int **)a2;
    do
    {
      v4 = *v3;
      if ( *v3 != -1 )
      {
        for ( i = v2 & (-1640531535 * (v4 >> 4)); ; i = v2 & (i + 1) )
        {
          v6 = (uint32_t *)(16 * i + *(uint32_t *)a2);
          if ( v4 == *v6 && v6[1] == v3[1] )
            break;
        }
      }
      v3 += 4;
    }
    while ( v3 != (unsigned int *)(*(uint32_t *)a2 + 16 * v2 + 16) );
  }
  *(uint8_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::clear  (binary VA: 0x18b3740)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::clear
// ----------------------------------------------------------------------------
int hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::clear(hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *self)
{
  int result;
  int v2;
  int v3;

  result = 0;
  v2 = *((uint32_t *)self + 2) + 1;
  if ( *((int *)self + 2) >= 0 )
  {
    do
    {
      v3 = result++;
      *(uint32_t *)(*(uint32_t *)self + 16 * v3) = -1;
    }
    while ( result != v2 );
  }
  *((uint32_t *)self + 1) &= 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::clearAndDeallocate  (binary VA: 0x18b3780)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::clearAndDeallocate
// ----------------------------------------------------------------------------
int hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::clearAndDeallocate(hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *self, hkMemoryAllocator::Self *a2)
{
  int result;

  result = hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::clear(self);
  if ( *((int *)self + 1) >= 0 )
    result = G4_VCALL<int>(a2, 12, *(uint32_t *)self, 16 * (*((uint32_t *)self + 2) + 1));
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = -1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMap_hkDataObject_Handle_hkDa_4d7046::Destroy  (binary VA: 0x18b37e0)
// Original: hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::~hkMap
// ----------------------------------------------------------------------------
void hkMap_hkDataObject_Handle_hkDa_4d7046::Destroy(hkMap<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>, hkContainerHeapAllocator::Self> *self)
{
  hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::clearAndDeallocate(
    (hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *)(self),
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::Destroy();
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectUtil::deepCopyWorld  (binary VA: 0x18b3820)
// Original: hkDataObjectUtil::deepCopyWorld
// ----------------------------------------------------------------------------
hkDataObjectUtil::Self * hkDataObjectUtil::deepCopyWorld(hkDataObjectUtil::Self *self, hkDataWorld::Self *a2, const hkDataWorld::Self *a3)
{
  typedef uint8_t _g4_t_v4[8];
  typedef uint8_t _g4_t_v5[36];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);

  hkDataWorldCloner::Construct((hkDataWorldCloner::Self *)v4, a2, a3);
  hkDataWorldCloner::clone(self);
  hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::clearAndDeallocate(
    (hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *)v5,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::Destroy();
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::wasReallocated  (binary VA: 0x18b3890)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::wasReallocated
// ----------------------------------------------------------------------------
int64_t hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::wasReallocated(hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *self, int a2)
{
  int64_t result; // rax

  LODWORD(result) = (uint32_t)(uintptr_t)(self);
  HIDWORD(result) = *(uint32_t *)(a2 + 4) >= 0;
  *(uint8_t *)self = BYTE4(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::setOwnedData  (binary VA: 0x18b38b0)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::setOwnedData
// ----------------------------------------------------------------------------
hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> * hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::setOwnedData(hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *self, void *a2, int a3, int a4)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 1) = a3 | 0x80000000;
  *((uint32_t *)self + 2) = a4 - 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::getSizeInBytesFor  (binary VA: 0x18b38e0)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::getSizeInBytesFor
// ----------------------------------------------------------------------------
int hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::getSizeInBytesFor(hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *self)
{
  int v1;

  if ( 2 * (int)(uintptr_t)(self) <= 8 )
    return 128;
  v1 = 8;
  do
    v1 *= 2;
  while ( 2 * (int)(uintptr_t)(self) > v1 );
  return 16 * v1;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::init  (binary VA: 0x18b3910)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::init
// ----------------------------------------------------------------------------
int hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::init(hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *self, uint32_t *a2, unsigned int a3)
{
  uint32_t *v3;
  int result;
  int v5;

  v3 = a2;
  *((uint32_t *)self + 2) = (a3 >> 4) - 1;
  result = 0;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 1) = 0x80000000;
  if ( a3 >> 4 != 0 )
  {
    while ( 1 )
    {
      v5 = result++;
      v3[4 * v5] = -1;
      if ( a3 >> 4 == result )
        break;
      v3 = *(uint32_t **)self;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::Construct  (binary VA: 0x18b3960)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::hkMapBase
// ----------------------------------------------------------------------------
void hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::Construct(hkMapBase_Raw *self, uint32_t *a2, unsigned int a3)
{
  hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::init((hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *)(self), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::resizeTable  (binary VA: 0x18b39a0)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::resizeTable
// ----------------------------------------------------------------------------
hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> * hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::resizeTable(hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *self, hkMemoryAllocator::Self *a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  int i;
  int v11;
  unsigned int v12;
  int *v13;

  v4 = 8;
  if ( a4 >= 8 )
    v4 = a4;
  v12 = *((uint32_t *)a2 + 1) & 0x80000000;
  v11 = *((uint32_t *)a2 + 2) + 1;
  v13 = *(int **)a2;
  v5 = G4_VCALL<int>(a3, 8, 16 * v4);
  if ( v5 != 0 )
  {
    *(uint32_t *)a2 = v5;
    v6 = 0;
    while ( 1 )
    {
      v7 = v6++;
      *(uint32_t *)(v5 + 16 * v7) = -1;
      if ( v4 <= v6 )
        break;
      v5 = *(uint32_t *)a2;
    }
    *((uint32_t *)a2 + 2) = v4 - 1;
    *((uint32_t *)a2 + 1) = 0;
    v8 = v13;
    if ( v11 > 0 )
    {
      for ( i = 0; i != v11; ++i )
      {
        if ( *v8 != -1 )
          hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::insert(
            a2,
            a3,
            *v8,
            v8[1],
            v8[2],
            v8[3]);
        v8 += 4;
      }
    }
    if ( v12 == 0 )
      G4_VCALL<void>(a3, 12, v13, 16 * v11);
    *(uint32_t *)self = 0;
    return self;
  }
  else
  {
    *(uint32_t *)self = 1;
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::insert  (binary VA: 0x18b3af0)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::insert
// ----------------------------------------------------------------------------
int hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::insert(hkMemoryAllocator::Self *a1, int a2, unsigned int a3, int a4, int a5, int a6)
{
  int v6;
  unsigned int i;
  int v8;
  unsigned int *v9;
  int result;
  int v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint8_t _g4_t_v14[28];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v14)) > _g4_s2 ? (16u + sizeof(_g4_t_v14)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);

  v6 = *((uint32_t *)a1 + 2);
  v12 = *((uint32_t *)a1 + 1);
  v13 = v6;
  if ( 2 * v12 > v6 )
  {
    hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::resizeTable(
      (hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *)v14,
      a1,
      a2,
      2 * v6 + 2);
    v13 = *((uint32_t *)a1 + 2);
    v12 = *((uint32_t *)a1 + 1);
  }
  for ( i = v13 & (-1640531535 * (a3 >> 4)); ; i = v13 & (i + 1) )
  {
    v8 = 16 * i;
    v9 = (unsigned int *)(*(uint32_t *)a1 + 16 * i);
    if ( *v9 == -1 )
      break;
    if ( *v9 == a3 && v9[1] == a4 )
    {
      result = 0;
      goto LABEL_10;
    }
  }
  result = 1;
LABEL_10:
  *((uint32_t *)a1 + 1) = result + v12;
  *v9 = a3;
  v9[1] = a4;
  v11 = *(uint32_t *)a1;
  *(uint32_t *)(v11 + v8 + 8) = a5;
  *(uint32_t *)(v11 + v8 + 12) = a6;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::tryInsert  (binary VA: 0x18b3be0)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::tryInsert
// ----------------------------------------------------------------------------
int hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::tryInsert(hkMemoryAllocator::Self *a1, int a2, unsigned int a3, int a4, int a5, int a6, uint32_t *a7)
{
  int v7;
  int result;
  int v9;
  uint32_t v10[7];

  v7 = *((uint32_t *)a1 + 2);
  if ( 2 * *((uint32_t *)a1 + 1) <= v7 )
  {
    *a7 = 0;
    return hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::insert(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6);
  }
  hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::resizeTable(
    (hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *)v10,
    a1,
    a2,
    2 * v7 + 2);
  v9 = v10[0];
  *a7 = v10[0];
  result = 0;
  if ( v9 == 0 )
    return hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::insert(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::findOrInsertKey  (binary VA: 0x18b3c80)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::findOrInsertKey
// ----------------------------------------------------------------------------
int hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::findOrInsertKey(hkMemoryAllocator::Self *a1, int a2, unsigned int a3, int a4, int a5, int a6)
{
  int v6;
  int v7;
  int result;
  int v9;
  unsigned int *v10;
  int v11;
  typedef int _g4_t_v12;
  typedef uint8_t _g4_t_v13[28];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);

  v6 = *((uint32_t *)a1 + 2);
  v12 = v6;
  if ( 2 * *((uint32_t *)a1 + 1) > v6 )
  {
    hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::resizeTable(
      (hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *)v13,
      a1,
      a2,
      2 * v6 + 2);
    v12 = *((uint32_t *)a1 + 2);
  }
  v7 = *(uint32_t *)a1;
  for ( result = v12 & (-1640531535 * (a3 >> 4)); ; result = v12 & (result + 1) )
  {
    v9 = 16 * result;
    v10 = (unsigned int *)(v7 + 16 * result);
    if ( *v10 == a3 && v10[1] == a4 )
      break;
    if ( *v10 == -1 )
    {
      *v10 = a3;
      v10[1] = a4;
      v11 = *(uint32_t *)a1;
      *(uint32_t *)(v11 + v9 + 8) = a5;
      *(uint32_t *)(v11 + v9 + 12) = a6;
      ++*((uint32_t *)a1 + 1);
      return result;
    }
    v7 = *(uint32_t *)a1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::reserve  (binary VA: 0x18b3d70)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::reserve
// ----------------------------------------------------------------------------
hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> * hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::reserve(hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *self, hkMemoryAllocator::Self *a2, int a3)
{
  int i;
  uint8_t v5[8];

  for ( i = 8; 2 * a3 > i; i *= 2 )
    ;
  return hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::resizeTable(
           (hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *)v5,
           (hkMemoryAllocator::Self *)(self),
           (int)(uintptr_t)(a2),
           i);
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::isPower2  (binary VA: 0x18b3dd0)
// Original: hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::isPower2
// ----------------------------------------------------------------------------
bool hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::isPower2(hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *self)
{
  return ((unsigned int)(uintptr_t)(self) & ((unsigned int)(uintptr_t)(self) - 1)) == 0;
}

// ----------------------------------------------------------------------------
// Function: hkMap_hkDataObject_Handle_hkDa_4d7046::opNew  (binary VA: 0x18b3df0)
// Original: hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::operator new
// ----------------------------------------------------------------------------
int hkMap_hkDataObject_Handle_hkDa_4d7046::opNew()
{
  int address;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
           *(uint32_t *)(*(uint32_t *)address + 44),
           12);
}

// ----------------------------------------------------------------------------
// Function: hkMap_hkDataObject_Handle_hkDa_4d7046::opDelete  (binary VA: 0x18b3e30)
// Original: hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::operator delete
// ----------------------------------------------------------------------------
void hkMap_hkDataObject_Handle_hkDa_4d7046::opDelete(void *a1)
{
  int address;

  if ( a1 != nullptr )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, void *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      a1,
      12);
  }
}

// ----------------------------------------------------------------------------
// Function: hkMap_hkDataObject_Handle_hkDa_4d7046::opNew  (binary VA: 0x18b3e80)
// Original: hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::operator new
// ----------------------------------------------------------------------------
unsigned int hkMap_hkDataObject_Handle_hkDa_4d7046::opNew(hkMap<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>, hkContainerHeapAllocator::Self> *self, unsigned int a2)
{
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkMap_hkDataObject_Handle_hkDa_4d7046::opNewArray  (binary VA: 0x18b3e90)
// Original: hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::operator new[]
// ----------------------------------------------------------------------------
unsigned int hkMap_hkDataObject_Handle_hkDa_4d7046::opNewArray(hkMap<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>, hkContainerHeapAllocator::Self> *self, unsigned int a2)
{
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkMap_hkDataObject_Handle_hkDa_4d7046::opDelete  (binary VA: 0x18b3ea0)
// Original: hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::operator delete
// ----------------------------------------------------------------------------
void hkMap_hkDataObject_Handle_hkDa_4d7046::opDelete()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMap_hkDataObject_Handle_hkDa_4d7046::opDeleteArray  (binary VA: 0x18b3eb0)
// Original: hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::operator delete[]
// ----------------------------------------------------------------------------
void hkMap_hkDataObject_Handle_hkDa_4d7046::opDeleteArray()
{
  ;
}


