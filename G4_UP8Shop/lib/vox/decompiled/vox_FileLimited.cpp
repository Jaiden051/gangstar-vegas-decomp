#include "Core/Utils/DecompTypes.h"
#include "vox_FileLimited.h"

// ----------------------------------------------------------------------------
// Function: vox::FileLimited::Tell  (binary VA: 0x1008720)
// Original: vox::FileLimited::Tell
// ----------------------------------------------------------------------------
int vox::FileLimited::Tell(vox::FileLimited::Self *self)
{
  return *((uint32_t *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: vox::FileLimited::Seek  (binary VA: 0x1008b30)
// Original: vox::FileLimited::Seek
// ----------------------------------------------------------------------------
int vox::FileLimited::Seek(uint32_t *a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v9;
  int v10;
  vox::VoxThread::Self *v11;
  int v12;
  int v13;
  int v14;

  vox::VoxThread::GetCurThreadId(v11);
  sub_BA06A0();
  v3 = a1[1];
  v4 = 0;
  if ( v3 == 0 )
    goto LABEL_10;
  if ( a3 != 1 )
  {
    if ( a3 == 2 )
    {
      v9 = a1[3];
      if ( -a2 <= v9 )
      {
        if ( a2 > 0 )
        {
          a1[4] = v9;
          v4 = -1;
          goto LABEL_10;
        }
        v10 = v9 + a1[2];
        v6 = a2 + v9;
        v7 = a2 + v10;
        goto LABEL_8;
      }
      goto LABEL_20;
    }
    if ( a3 != 0 )
    {
      v4 = -1;
      goto LABEL_10;
    }
    v5 = a1[3];
    if ( v5 >= a2 )
    {
      if ( a2 >= 0 )
      {
        v6 = a2;
        v7 = a2 + a1[2];
        goto LABEL_8;
      }
LABEL_20:
      a1[4] = -1;
      v4 = -1;
      goto LABEL_10;
    }
LABEL_19:
    a1[4] = v5;
    v4 = -1;
    goto LABEL_10;
  }
  v12 = a1[4];
  v6 = a2 + v12;
  v5 = a1[3];
  if ( a2 + v12 > v5 )
    goto LABEL_19;
  if ( v6 < 0 )
    goto LABEL_20;
  v7 = a2 + a1[2] + v12;
LABEL_8:
  v13 = v6;
  v4 = G4_MEM_CALL((uintptr_t)((*(uintptr_t *)unk_20E2068)), *(uint32_t *)(v3 + 4), v7, 0);
  if ( v4 == 0 )
    a1[4] = v13;
LABEL_10:
  v14 = v4;
  sub_BA06B0();
  return v14;
}

// ----------------------------------------------------------------------------
// Function: vox::FileLimited::Read  (binary VA: 0x1008ca0)
// Original: vox::FileLimited::Read
// ----------------------------------------------------------------------------
int vox::FileLimited::Read(vox::FileLimited::Self *self, void *a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  vox::VoxThread::Self *v9;
  int v10;

  vox::VoxThread::GetCurThreadId(v9);
  sub_BA06A0();
  v4 = *((uint32_t *)self + 1);
  v10 = 0;
  if ( v4 != 0 )
  {
    v5 = *((uint32_t *)self + 4);
    v6 = *((uint32_t *)self + 3);
    if ( v5 + a3 * a4 <= v6 )
    {
      v10 = G4_MEM_CALL((uintptr_t)(vox::FileSystemInterface::m_IOFunc), a2, a3, a4, *(uint32_t *)(v4 + 4));
      *((uint32_t *)self + 4) += v10 * a3;
    }
    else
    {
      v7 = (v6 - v5) / a3;
      if ( v7 > 0 )
      {
        v10 = G4_MEM_CALL((uintptr_t)(vox::FileSystemInterface::m_IOFunc), a2, a3, v7, *(uint32_t *)(v4 + 4));
        *((uint32_t *)self + 4) += v10 * a3;
      }
    }
  }
  sub_BA06B0();
  return v10;
}

// ----------------------------------------------------------------------------
// Function: vox::FileLimited::Construct  (binary VA: 0x100b820)
// Original: vox::FileLimited::FileLimited
// ----------------------------------------------------------------------------
vox::FileLimited::Self * vox::FileLimited::Construct(vox::FileLimited::Self *self)
{
  vox::FileLimited::Self *result;

  vox::FileInterface::Construct(self);
  *((uint32_t *)self + 2) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D6E8);
  result = *((vox::FileLimited::Self **)self + 1);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  if ( result != nullptr )
    *((uint32_t *)result + 2) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::FileLimited::Construct  (binary VA: 0x100b880)
// Original: vox::FileLimited::FileLimited
// ----------------------------------------------------------------------------
vox::FileLimited::Self * vox::FileLimited::Construct(vox::FileLimited::Self *self, void *a2, char *a3, int a4, int a5)
{
  vox::FileLimited::Self *result;

  vox::FileInterface::Construct(self, a2, a3);
  *((uint32_t *)self + 4) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D6E8);
  *((uint32_t *)self + 2) = a4;
  *((uint32_t *)self + 3) = a5;
  result = *((vox::FileLimited::Self **)self + 1);
  if ( result != nullptr )
  {
    *((uint32_t *)result + 2) = 1;
    return (vox::FileLimited::Self *)vox::FileLimited::Seek((uint32_t *)(self), 0, 0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::FileLimited::Write  (binary VA: 0x100d510)
// Original: vox::FileLimited::Write
// ----------------------------------------------------------------------------
int vox::FileLimited::Write()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::FileLimited::Destroy  (binary VA: 0x100d580)
// Original: vox::FileLimited::~FileLimited
// ----------------------------------------------------------------------------
void vox::FileLimited::Destroy(vox::FileLimited::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D6E8);
  vox::FileInterface::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: vox::FileLimited::Destroy_ea100d5b0  (binary VA: 0x100d5b0)
// Original: vox::FileLimited::~FileLimited
// ----------------------------------------------------------------------------
void vox::FileLimited::Destroy_ea100d5b0(vox::FileLimited::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D6E8);
  vox::FileInterface::Destroy(self);
  opDelete(self);
}


