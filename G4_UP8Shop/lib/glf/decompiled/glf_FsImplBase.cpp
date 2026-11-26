#include "Core/Utils/DecompTypes.h"
#include "glf_FsImplBase.h"

// ----------------------------------------------------------------------------
// Function: glf::FsImplBase::Destroy  (binary VA: 0xcbe720)
// Original: glf::FsImplBase::~FsImplBase
// ----------------------------------------------------------------------------
void glf::FsImplBase::Destroy(glf::FsImplBase::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E2E8);
}

// ----------------------------------------------------------------------------
// Function: glf::FsImplBase::init  (binary VA: 0xcbe740)
// Original: glf::FsImplBase::init
// ----------------------------------------------------------------------------
void glf::FsImplBase::init()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::FsImplBase::MkDir  (binary VA: 0xcbe750)
// Original: glf::FsImplBase::MkDir
// ----------------------------------------------------------------------------
int glf::FsImplBase::MkDir()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::FsImplBase::RmDir  (binary VA: 0xcbe760)
// Original: glf::FsImplBase::RmDir
// ----------------------------------------------------------------------------
int glf::FsImplBase::RmDir()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::FsImplBase::EmptyDir  (binary VA: 0xcbe770)
// Original: glf::FsImplBase::EmptyDir
// ----------------------------------------------------------------------------
int glf::FsImplBase::EmptyDir()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::FsImplBase::DoesFileExist  (binary VA: 0xcbe780)
// Original: glf::FsImplBase::DoesFileExist
// ----------------------------------------------------------------------------
int glf::FsImplBase::DoesFileExist()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::FsImplBase::GetCwd  (binary VA: 0xcbe790)
// Original: glf::FsImplBase::GetCwd
// ----------------------------------------------------------------------------
void glf::FsImplBase::GetCwd()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::FsImplBase::SetCwd  (binary VA: 0xcbe7a0)
// Original: glf::FsImplBase::SetCwd
// ----------------------------------------------------------------------------
void glf::FsImplBase::SetCwd()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::FsImplBase::Destroy_eacbe800  (binary VA: 0xcbe800)
// Original: glf::FsImplBase::~FsImplBase
// ----------------------------------------------------------------------------
void glf::FsImplBase::Destroy_eacbe800(glf::FsImplBase::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E2E8);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::FsImplBase::CopyFile  (binary VA: 0xcbe900)
// Original: glf::FsImplBase::CopyFile
// ----------------------------------------------------------------------------
int glf::FsImplBase::CopyFile(int a1, char *a2, int a3, char *a4, int a5)
{
  char v5;
  unsigned int v7;
  typedef uint8_t _g4_t_v8;
  typedef uint32_t _g4_t_v9[13];
  typedef uint32_t _g4_t_v10[13];
  typedef uint8_t _g4_t_v11[1052];
  enum : size_t {
    _g4_s0 = 1248u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v9)) > _g4_s1 ? (24u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (76u + sizeof(_g4_t_v10)) > _g4_s2 ? (76u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (128u + sizeof(_g4_t_v11)) > _g4_s3 ? (128u + sizeof(_g4_t_v11)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 76u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 128u);

  glf::FileStreamImpl::Construct((glf::IOStream::Self *)v9, a2, (char *)(a3 | 1));
  v9[0] = ((uint32_t)(uintptr_t)&off_2048D28);
  glf::FileStreamImpl::Construct((glf::IOStream::Self *)v10, a4, (char *)(a5 | 0x1A));
  v10[0] = ((uint32_t)(uintptr_t)&off_2048D28);
  if ( (uint8_t)glf::Stream::IsOpened((glf::Stream::Self *)v9) != 0
    && (uint8_t)glf::Stream::IsOpened((glf::Stream::Self *)v10) != 0 )
  {
    while ( 1 )
    {
      v7 = (*(int (**)(uint32_t *, uint8_t *, int))(v9[0] + 12))(v9, v11, 1024);
      if ( v7 == 0 )
        break;
      glf::FileStreamImpl::Write((glf::FileStreamImpl::Self *)v10, v11, v7);
    }
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  v8 = v5;
  v10[0] = ((uint32_t)(uintptr_t)&off_2048D28);
  glf::FileStreamImpl::Destroy((glf::FileStreamImpl::Self *)v10);
  v9[0] = ((uint32_t)(uintptr_t)&off_2048D28);
  glf::FileStreamImpl::Destroy((glf::FileStreamImpl::Self *)v9);
  return v8;
}


