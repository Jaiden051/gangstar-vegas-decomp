#include "Core/Utils/DecompTypes.h"
#include "havok_internal_4.h"

// ----------------------------------------------------------------------------
// Function: sub_1747FE0  (binary VA: 0x1747fe0)
// Original: sub_1747FE0
// ----------------------------------------------------------------------------
void sub_1747FE0()
{
  hkClass::Construct(
    (hkClass::Self *)&hkpConstraintChainDataClass,
    "hkpConstraintChainData",
    (const hkClass::Self *)&hkpConstraintDataClass,
    12,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    nullptr,
    0,
    0);
}

// ----------------------------------------------------------------------------
// Function: sub_17488D0  (binary VA: 0x17488d0)
// Original: sub_17488D0
// ----------------------------------------------------------------------------
int sub_17488D0(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_17488F0  (binary VA: 0x17488f0)
// Original: sub_17488F0
// ----------------------------------------------------------------------------
void sub_17488F0(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_209FFA8);
  hkStringPtr::Construct();
}

// ----------------------------------------------------------------------------
// Function: sub_1748950  (binary VA: 0x1748950)
// Original: sub_1748950
// ----------------------------------------------------------------------------
uint32_t * sub_1748950()
{
  hkClass::Construct(
    (hkClass::Self *)&hkpPhysicsSystemClass,
    "hkpPhysicsSystem",
    (const hkClass::Self *)&hkReferencedObjectClass,
    68,
    nullptr,
    0,
    (const hkClassEnum::Self *)&off_203B980,
    1,
    (const hkClassMember::Self *)&hkpPhysicsSystem::Members,
    7,
    &unk_1D17BC0,
    nullptr,
    0,
    0);
  hkStringPtr::Construct();
  hkpPhysicsSystemTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpPhysicsSystem");
  hkpPhysicsSystemTypeInfo[2] = (uint32_t)(uintptr_t)(sub_17488F0);
  hkpPhysicsSystemTypeInfo[3] = (uint32_t)(uintptr_t)(sub_17488D0);
  hkpPhysicsSystemTypeInfo[0] = (uint32_t)(uintptr_t)("hkpPhysicsSystem");
  hkpPhysicsSystemTypeInfo[4] = ((uint32_t)(uintptr_t)&off_209FFA8);
  hkpPhysicsSystemTypeInfo[5] = 68;
  return hkpPhysicsSystemTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: hkAlgorithm::quickSortRecursive_hkpCollidable_hkpAabbPha_cd7ee6  (binary VA: 0x1749d40)
// Original: hkAlgorithm::quickSortRecursive<hkpCollidable *,hkpAabbPhantom::OrderByUid>
// ----------------------------------------------------------------------------
int hkAlgorithm::quickSortRecursive_hkpCollidable_hkpAabbPha_cd7ee6(int a1, int a2, int a3)
{
  unsigned int v3;
  int v4;
  int *v5;
  int v6;
  int *v7;
  int result;
  int v9;
  unsigned int v10;
  int *v11;
  int v12;
  int *v13;
  int v14;
  unsigned int v15;
  int *v16;
  int v17;
  int *v18;
  bool v19;
  int v20;
  unsigned int v21;
  int *v22;
  int v23;
  int *v24;
  bool v25;
  int v26;
  unsigned int v27;
  int v28;
  int *v29;
  int v30;
  int *v31;
  bool v32;
  int v33;
  unsigned int v34;
  int v35;
  int *v36;
  int v37;
  int *v38;
  bool v39;
  int v40;
  unsigned int v41;
  int v42;
  int *v43;
  int v44;
  int *v45;
  bool v46;
  int v47;
  unsigned int v48;
  int v49;
  int *v50;
  int v51;
  int *v52;
  int v53;
  int v54;
  unsigned int v55;
  int *v56;
  int v57;
  int *v58;
  int v59;
  int v60;
  int v61;
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
  int v76;
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

  while ( 2 )
  {
    v91 = *(uint32_t *)(a1 + 4 * ((a3 + a2) >> 1));
    v3 = *(uint32_t *)(v91 + 20);
    v80 = a2 + 1;
    v4 = a2 + 1;
    v69 = a3;
    while ( 1 )
    {
      v66 = v4 - 1;
      v82 = *(uint32_t *)(a1 + 4 * v4 - 4);
      if ( *(uint32_t *)(v82 + 20) < v3 )
        goto LABEL_11;
      v5 = (int *)(a1 + 4 * v69);
      v6 = *v5;
      if ( *(uint32_t *)(*v5 + 20) > v3 )
      {
        v7 = (int *)(a1 + 4 * v69 - 4);
        do
        {
          v6 = *v7;
          --v69;
          v5 = v7--;
        }
        while ( *(uint32_t *)(v6 + 20) > v3 );
      }
      if ( v69 < v66 )
        break;
      if ( v69 != v66 )
      {
        *v5 = v82;
        *(uint32_t *)(a1 + 4 * v4 - 4) = v6;
      }
      --v69;
      v66 = v4;
      if ( v69 < v4 )
        break;
      v3 = *(uint32_t *)(v91 + 20);
LABEL_11:
      ++v4;
    }
    if ( a2 >= v69 )
      goto LABEL_13;
    while ( 2 )
    {
      v68 = v69;
      v9 = v80;
      v92 = *(uint32_t *)(a1 + 4 * ((v69 + a2) >> 1));
      v10 = *(uint32_t *)(v92 + 20);
      while ( 2 )
      {
        v65 = v9 - 1;
        v83 = *(uint32_t *)(a1 + 4 * v9 - 4);
        if ( *(uint32_t *)(v83 + 20) < v10 )
        {
LABEL_28:
          ++v9;
          continue;
        }
        break;
      }
      v11 = (int *)(a1 + 4 * v68);
      v12 = *v11;
      if ( *(uint32_t *)(*v11 + 20) > v10 )
      {
        v13 = (int *)(a1 + 4 * v68 - 4);
        do
        {
          v12 = *v13;
          --v68;
          v11 = v13--;
        }
        while ( *(uint32_t *)(v12 + 20) > v10 );
      }
      if ( v68 >= v65 )
      {
        if ( v68 != v65 )
        {
          *v11 = v83;
          *(uint32_t *)(a1 + 4 * v9 - 4) = v12;
        }
        --v68;
        v65 = v9;
        if ( v68 >= v9 )
        {
          v10 = *(uint32_t *)(v92 + 20);
          goto LABEL_28;
        }
      }
      if ( a2 >= v68 )
        goto LABEL_16;
      while ( 2 )
      {
        v67 = v68;
        v14 = v80;
        v93 = *(uint32_t *)(a1 + 4 * ((v68 + a2) >> 1));
        v15 = *(uint32_t *)(v93 + 20);
        while ( 2 )
        {
          v64 = v14 - 1;
          v84 = *(uint32_t *)(a1 + 4 * v14 - 4);
          if ( *(uint32_t *)(v84 + 20) < v15 )
          {
LABEL_43:
            ++v14;
            continue;
          }
          break;
        }
        v16 = (int *)(a1 + 4 * v67);
        v17 = *v16;
        if ( *(uint32_t *)(*v16 + 20) > v15 )
        {
          v18 = (int *)(a1 + 4 * v67 - 4);
          do
          {
            v17 = *v18;
            --v67;
            v16 = v18--;
          }
          while ( *(uint32_t *)(v17 + 20) > v15 );
        }
        if ( v67 >= v64 )
        {
          if ( v67 != v64 )
          {
            *v16 = v84;
            *(uint32_t *)(a1 + 4 * v14 - 4) = v17;
          }
          --v67;
          v64 = v14;
          if ( v67 >= v14 )
          {
            v15 = *(uint32_t *)(v93 + 20);
            goto LABEL_43;
          }
        }
        if ( a2 >= v67 )
          goto LABEL_31;
        while ( 2 )
        {
          v70 = v67;
          v20 = v80;
          v94 = *(uint32_t *)(a1 + 4 * ((v67 + a2) >> 1));
          v21 = *(uint32_t *)(v94 + 20);
          while ( 2 )
          {
            v62 = v20 - 1;
            v85 = *(uint32_t *)(a1 + 4 * v20 - 4);
            if ( *(uint32_t *)(v85 + 20) < v21 )
            {
LABEL_58:
              ++v20;
              continue;
            }
            break;
          }
          v22 = (int *)(a1 + 4 * v70);
          v23 = *v22;
          if ( *(uint32_t *)(*v22 + 20) <= v21 )
          {
            v19 = v70 == v62;
            if ( v70 < v62 )
              goto LABEL_45;
          }
          else
          {
            v24 = (int *)(a1 + 4 * v70 - 4);
            do
            {
              v23 = *v24;
              --v70;
              v22 = v24--;
            }
            while ( *(uint32_t *)(v23 + 20) > v21 );
            v19 = v70 == v62;
            if ( v70 < v62 )
              goto LABEL_45;
          }
          if ( !v19 )
          {
            *v22 = v85;
            *(uint32_t *)(a1 + 4 * v20 - 4) = v23;
          }
          --v70;
          v62 = v20;
          if ( v70 >= v20 )
          {
            v21 = *(uint32_t *)(v94 + 20);
            goto LABEL_58;
          }
LABEL_45:
          if ( a2 >= v70 )
            goto LABEL_46;
          while ( 2 )
          {
            v26 = v70;
            v95 = v80;
            v86 = *(uint32_t *)(a1 + 4 * ((v70 + a2) >> 1));
            v27 = *(uint32_t *)(v86 + 20);
            v28 = v80;
            while ( 2 )
            {
              v63 = v28 - 1;
              v76 = *(uint32_t *)(a1 + 4 * v28 - 4);
              if ( *(uint32_t *)(v76 + 20) < v27 )
              {
LABEL_73:
                v28 = ++v95;
                continue;
              }
              break;
            }
            v29 = (int *)(4 * v26 + a1);
            v30 = *v29;
            if ( *(uint32_t *)(*v29 + 20) <= v27 )
            {
              v25 = v26 == v63;
              if ( v26 < v63 )
                goto LABEL_60;
            }
            else
            {
              v31 = (int *)(a1 + 4 * v26 - 4);
              do
              {
                v30 = *v31;
                --v26;
                v29 = v31--;
              }
              while ( *(uint32_t *)(v30 + 20) > v27 );
              v25 = v26 == v63;
              if ( v26 < v63 )
                goto LABEL_60;
            }
            if ( !v25 )
            {
              *v29 = v76;
              *(uint32_t *)(a1 + 4 * v95 - 4) = v30;
            }
            --v26;
            v63 = v95;
            if ( v26 >= v95 )
            {
              v27 = *(uint32_t *)(v86 + 20);
              goto LABEL_73;
            }
LABEL_60:
            v60 = v26;
            if ( v26 <= a2 )
              goto LABEL_61;
            while ( 2 )
            {
              v33 = v60;
              v96 = v80;
              v77 = *(uint32_t *)(a1 + 4 * ((v60 + a2) >> 1));
              v34 = *(uint32_t *)(v77 + 20);
              v35 = v80;
              while ( 2 )
              {
                v71 = v35 - 1;
                v87 = *(uint32_t *)(a1 + 4 * v35 - 4);
                if ( *(uint32_t *)(v87 + 20) < v34 )
                {
LABEL_88:
                  v35 = ++v96;
                  continue;
                }
                break;
              }
              v36 = (int *)(4 * v33 + a1);
              v37 = *v36;
              if ( *(uint32_t *)(*v36 + 20) <= v34 )
              {
                v32 = v33 == v71;
                if ( v33 < v71 )
                  goto LABEL_75;
              }
              else
              {
                v38 = (int *)(a1 + 4 * v33 - 4);
                do
                {
                  v37 = *v38;
                  --v33;
                  v36 = v38--;
                }
                while ( *(uint32_t *)(v37 + 20) > v34 );
                v32 = v33 == v71;
                if ( v33 < v71 )
                  goto LABEL_75;
              }
              if ( !v32 )
              {
                *v36 = v87;
                *(uint32_t *)(a1 + 4 * v96 - 4) = v37;
              }
              --v33;
              v71 = v96;
              if ( v33 >= v96 )
              {
                v34 = *(uint32_t *)(v77 + 20);
                goto LABEL_88;
              }
LABEL_75:
              v59 = v33;
              if ( v33 <= a2 )
                goto LABEL_76;
              while ( 2 )
              {
                v40 = v59;
                v97 = v80;
                v78 = *(uint32_t *)(a1 + 4 * ((v59 + a2) >> 1));
                v41 = *(uint32_t *)(v78 + 20);
                v42 = v80;
                while ( 2 )
                {
                  v73 = v42 - 1;
                  v88 = *(uint32_t *)(a1 + 4 * v42 - 4);
                  if ( *(uint32_t *)(v88 + 20) < v41 )
                  {
LABEL_103:
                    v42 = ++v97;
                    continue;
                  }
                  break;
                }
                v43 = (int *)(a1 + 4 * v40);
                v44 = *v43;
                if ( *(uint32_t *)(*v43 + 20) <= v41 )
                {
                  v39 = v40 == v73;
                  if ( v40 < v73 )
                    goto LABEL_90;
                }
                else
                {
                  v45 = (int *)(a1 + 4 * v40 - 4);
                  do
                  {
                    v44 = *v45;
                    --v40;
                    v43 = v45--;
                  }
                  while ( *(uint32_t *)(v44 + 20) > v41 );
                  v39 = v40 == v73;
                  if ( v40 < v73 )
                    goto LABEL_90;
                }
                if ( !v39 )
                {
                  *v43 = v88;
                  *(uint32_t *)(a1 + 4 * v97 - 4) = v44;
                }
                --v40;
                v73 = v97;
                if ( v40 >= v97 )
                {
                  v41 = *(uint32_t *)(v78 + 20);
                  goto LABEL_103;
                }
LABEL_90:
                v61 = v40;
                if ( v40 <= a2 )
                  goto LABEL_91;
                while ( 2 )
                {
                  v47 = v61;
                  v98 = v80;
                  v74 = *(uint32_t *)(a1 + 4 * ((v61 + a2) >> 1));
                  v48 = *(uint32_t *)(v74 + 20);
                  v49 = v80;
                  while ( 2 )
                  {
                    v79 = v49 - 1;
                    v89 = *(uint32_t *)(a1 + 4 * v49 - 4);
                    if ( *(uint32_t *)(v89 + 20) < v48 )
                    {
LABEL_118:
                      v49 = ++v98;
                      continue;
                    }
                    break;
                  }
                  v50 = (int *)(a1 + 4 * v47);
                  v51 = *v50;
                  if ( *(uint32_t *)(*v50 + 20) <= v48 )
                  {
                    v46 = v47 == v79;
                    if ( v47 < v79 )
                      goto LABEL_105;
                  }
                  else
                  {
                    v52 = (int *)(a1 + 4 * v47 - 4);
                    do
                    {
                      v51 = *v52;
                      --v47;
                      v50 = v52--;
                    }
                    while ( *(uint32_t *)(v51 + 20) > v48 );
                    v46 = v47 == v79;
                    if ( v47 < v79 )
                      goto LABEL_105;
                  }
                  if ( !v46 )
                  {
                    *v50 = v89;
                    *(uint32_t *)(a1 + 4 * v98 - 4) = v51;
                  }
                  --v47;
                  v79 = v98;
                  if ( v47 >= v98 )
                  {
                    v48 = *(uint32_t *)(v74 + 20);
                    goto LABEL_118;
                  }
LABEL_105:
                  v72 = v47;
                  if ( a2 >= v47 )
                    goto LABEL_106;
                  v53 = v80;
                  while ( 2 )
                  {
                    v54 = v72;
                    v99 = v53;
                    v75 = *(uint32_t *)(a1 + 4 * ((v72 + a2) >> 1));
                    v55 = *(uint32_t *)(v75 + 20);
                    while ( 2 )
                    {
                      v90 = v53 - 1;
                      v81 = *(uint32_t *)(a1 + 4 * v53 - 4);
                      if ( *(uint32_t *)(v81 + 20) < v55 )
                      {
LABEL_134:
                        v53 = ++v99;
                        continue;
                      }
                      break;
                    }
                    v56 = (int *)(a1 + 4 * v54);
                    v57 = *v56;
                    if ( *(uint32_t *)(*v56 + 20) > v55 )
                    {
                      v58 = (int *)(a1 + 4 * v54 - 4);
                      do
                      {
                        v57 = *v58;
                        --v54;
                        v56 = v58--;
                      }
                      while ( *(uint32_t *)(v57 + 20) > v55 );
                    }
                    if ( v90 <= v54 )
                    {
                      if ( v90 != v54 )
                      {
                        *v56 = v81;
                        *(uint32_t *)(a1 + 4 * v99 - 4) = v57;
                      }
                      --v54;
                      v90 = v99;
                      if ( v54 >= v99 )
                      {
                        v55 = *(uint32_t *)(v75 + 20);
                        goto LABEL_134;
                      }
                    }
                    if ( a2 < v54 )
                      hkAlgorithm::quickSortRecursive_hkpCollidable_hkpAabbPha_cd7ee6(a1, a2, v54);
                    if ( v72 > v90 )
                    {
                      a2 = v90;
                      v53 = v90 + 1;
                      continue;
                    }
                    break;
                  }
LABEL_106:
                  if ( v61 > v79 )
                  {
                    a2 = v79;
                    v80 = v79 + 1;
                    continue;
                  }
                  break;
                }
LABEL_91:
                if ( v73 < v59 )
                {
                  a2 = v73;
                  v80 = v73 + 1;
                  continue;
                }
                break;
              }
LABEL_76:
              if ( v71 < v60 )
              {
                a2 = v71;
                v80 = v71 + 1;
                continue;
              }
              break;
            }
LABEL_61:
            if ( v63 < v70 )
            {
              a2 = v63;
              v80 = v63 + 1;
              continue;
            }
            break;
          }
LABEL_46:
          if ( v62 < v67 )
          {
            a2 = v62;
            v80 = v62 + 1;
            continue;
          }
          break;
        }
LABEL_31:
        if ( v64 < v68 )
        {
          a2 = v64;
          v80 = v64 + 1;
          continue;
        }
        break;
      }
LABEL_16:
      if ( v65 < v69 )
      {
        a2 = v65;
        v80 = v65 + 1;
        continue;
      }
      break;
    }
LABEL_13:
    result = v66;
    if ( a3 > v66 )
    {
      a2 = v66;
      continue;
    }
    return result;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpBvCompressedMeshShape::thunk_getChildShape  (binary VA: 0x174a710)
// Original: `non-virtual thunk to'hkpBvCompressedMeshShape::getChildShape
// ----------------------------------------------------------------------------
hkpConvexVerticesShape::Self * hkpBvCompressedMeshShape::thunk_getChildShape(int a1, unsigned int a2, int a3)
{
  return hkpBvCompressedMeshShape::getChildShape(a1 - 20, a2, a3);
}


