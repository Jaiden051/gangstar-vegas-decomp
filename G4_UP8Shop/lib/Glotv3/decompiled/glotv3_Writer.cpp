#include "Core/Utils/DecompTypes.h"
#include "glotv3_Writer.h"
uint32_t *g4_sub_192C6D0(uint32_t *a1, int a2, int a3, int a4);

// ----------------------------------------------------------------------------
// Function: glotv3::Writer::CheckSanity  (binary VA: 0x1365120)
// Original: glotv3::Writer::CheckSanity
// ----------------------------------------------------------------------------
int glotv3::Writer::CheckSanity(glotv3::Writer::Self *self)
{
  char v1;
  int v2;
  int result;

  v1 = sub_1907FD0((char *)self + 44);
  v2 = *((uint32_t *)self + 33);
  if ( v1 == 0 || (result = 1, v2 != 0) )
  {
    if ( (v2 & 1) != 0 )
    {
      glotv3::Glotv3Logger::WriteLog(&glotv3::errors::WRITER_BADBIT_ON_STREAM);
    }
    else if ( (v2 & 4) != 0 )
    {
      glotv3::Glotv3Logger::WriteLog(&glotv3::errors::WRITER_FAILBIT_ON_STREAM);
    }
    glotv3::Glotv3Logger::WriteLog(&glotv3::errors::WRITER_INVALID_STREAM_STATE);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Writer::size  (binary VA: 0x13651c0)
// Original: glotv3::Writer::size
// ----------------------------------------------------------------------------
int glotv3::Writer::size(glotv3::Writer::Self *self)
{
  int v1;
  typedef int _g4_t_v3;
  typedef int _g4_t_v4;
  typedef uint32_t _g4_t_v5[3];
  typedef int _g4_t_v6;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v5)) > _g4_s2 ? (24u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v6)) > _g4_s3 ? (36u + sizeof(_g4_t_v6)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 24u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 36u);

  sub_192C480(v5, (int *)((char *)self + 4));
  v4 = v5[1];
  v3 = v5[0];
  g4_sub_192C6D0((uint32_t *)((char *)self + 4), 0, 0, 2);
  sub_192C480((uint32_t *)&v6, (int *)((char *)self + 4));
  v1 = v6;
  g4_sub_192C6D0((uint32_t *)((char *)self + 4), v3, v4, 0);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Writer::WriteNext  (binary VA: 0x1365280)
// Original: glotv3::Writer::WriteNext
// ----------------------------------------------------------------------------
int glotv3::Writer::WriteNext(pthread_mutex_t *mutex, const glotv3::EventList::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  pthread_mutex_t *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int64_t v12; // rax
  char *v13;
  size_t v14;
  void *v15;
  int v16;
  uint32_t *v17;
  uint32_t *v18;
  unsigned int v19;
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
  unsigned int v34;
  unsigned int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  unsigned int v41;
  char *v42;
  unsigned int v43;
  int v44;
  uint32_t *v45;
  uint32_t *v46;
  uint32_t *v47;
  uint32_t *v48;
  unsigned int *p_count;
  uint32_t *v50;
  uint32_t *v51;
  uint32_t *v52;
  typedef const void *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef unsigned int *_g4_t_v56;
  typedef uint8_t _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_i;
  typedef uint16_t _g4_t_v60[3];
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef char *_g4_t_v64;
  typedef char *_g4_t_v65;
  typedef char *_g4_t_v66;
  typedef int _g4_t_v67;
  typedef size_t _g4_t_v68;
  typedef int _g4_t_v69;
  typedef uint32_t _g4_t_v70[5];
  typedef uint32_t _g4_t_v71[8];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v53)) > _g4_s0 ? (8u + sizeof(_g4_t_v53)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v54)) > _g4_s1 ? (8u + sizeof(_g4_t_v54)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v55)) > _g4_s2 ? (8u + sizeof(_g4_t_v55)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v56)) > _g4_s3 ? (12u + sizeof(_g4_t_v56)) : _g4_s3,
    _g4_s5 = (19u + sizeof(_g4_t_v57)) > _g4_s4 ? (19u + sizeof(_g4_t_v57)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v58)) > _g4_s5 ? (24u + sizeof(_g4_t_v58)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_i)) > _g4_s6 ? (28u + sizeof(_g4_t_i)) : _g4_s6,
    _g4_s8 = (46u + sizeof(_g4_t_v60)) > _g4_s7 ? (46u + sizeof(_g4_t_v60)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v61)) > _g4_s8 ? (52u + sizeof(_g4_t_v61)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v62)) > _g4_s9 ? (56u + sizeof(_g4_t_v62)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v63)) > _g4_s10 ? (60u + sizeof(_g4_t_v63)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v64)) > _g4_s11 ? (64u + sizeof(_g4_t_v64)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v65)) > _g4_s12 ? (68u + sizeof(_g4_t_v65)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v66)) > _g4_s13 ? (72u + sizeof(_g4_t_v66)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v67)) > _g4_s14 ? (80u + sizeof(_g4_t_v67)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v68)) > _g4_s15 ? (84u + sizeof(_g4_t_v68)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v69)) > _g4_s16 ? (88u + sizeof(_g4_t_v69)) : _g4_s16,
    _g4_s18 = (104u + sizeof(_g4_t_v70)) > _g4_s17 ? (104u + sizeof(_g4_t_v70)) : _g4_s17,
    _g4_s19 = (124u + sizeof(_g4_t_v71)) > _g4_s18 ? (124u + sizeof(_g4_t_v71)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 8u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 8u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 8u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 12u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 19u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 24u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 28u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 46u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 52u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 56u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 60u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 64u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 68u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 72u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 80u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 84u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 88u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 104u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 124u);

  do
    v2 = pthread_mutex_lock(mutex);
  while ( v2 == 4 );
  v5 = v2;
  if ( v2 != 0 )
  {
    v55 = (int)(uintptr_t)(sub_18F81E0(v4, v3));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v62), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(v60));
    sub_19042E0(v70, &v62);
    g4_std::string::Destroy(&v62);
    v70[2] = v5;
    v70[3] = v55;
    v70[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v70[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  v57 = glotv3::Writer::CheckSanity((glotv3::Writer::Self *)mutex);
  if ( v57 == 0 )
    goto LABEL_4;
  LODWORD(v12) = glotv3::Writer::size((glotv3::Writer::Self *)mutex);
  if ( G4_MUTEX_KIND(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (5)))) != 0 )
  {
    glotv3::Glotv3Logger::WriteLog(&glotv3::errors::WRITER_FAILED_ON_POSITION);
LABEL_4:
    glotv3::Glotv3Logger::WriteLog(&glotv3::errors::WRITER_FAILED_ON_BEFORE_WRITE);
    v57 = 0;
    v6 = mutex;
    goto LABEL_5;
  }
  if ( v12 != 0 )
    goto LABEL_10;
  p_count = (unsigned int *)(&((int32_t *)(mutex))[1]);
  *(uint32_t *)&v60[1] = 2164360;
  v61 = 1;
  v50 = (uint32_t *)sub_192C9E0(&((int32_t *)(mutex))[0] + 1, &v60[1], 4);
  if ( *(uint32_t *)((char *)v50 + *(uint32_t *)(*v50 - 12) + 20) != 0 )
  {
    glotv3::Glotv3Logger::WriteLog(&glotv3::errors::WRITER_FAILED_ON_MAGIC_NUMBER);
    goto LABEL_4;
  }
  v51 = (uint32_t *)sub_192C9E0(p_count, &v61, 4);
  if ( *(uint32_t *)((char *)v51 + *(uint32_t *)(*v51 - 12) + 20) != 0 )
  {
    glotv3::Glotv3Logger::WriteLog(&glotv3::errors::WRITER_FAILED_ON_VERSION);
    goto LABEL_4;
  }
  v52 = (uint32_t *)g4_std_compat::ostream_flush(p_count);
  if ( *(uint32_t *)((char *)v52 + *(uint32_t *)(*v52 - 12) + 20) != 0 )
    goto LABEL_4;
LABEL_10:
  v64 = nullptr;
  v65 = nullptr;
  v66 = nullptr;
  v67 = 0;
  v68 = 0;
  v69 = 0;
  v13 = (char *)opNew(0x200u);
  if ( v64 != nullptr )
    opDelete(v64);
  v64 = v13;
  v65 = v13;
  v66 = v13 + 512;
  if ( (unsigned int)(v69 - v67) <= 0x3FF )
  {
    v53 = (const void *)v67;
    v14 = v68 - v67;
    v15 = (void *)opNew(0x400u);
    v16 = (int)(uintptr_t)(v15);
    if ( v14 != 0 )
      memmove(v15, v53, v14);
    if ( v67 != 0 )
      opDelete((void *)v67);
    v67 = v16;
    v68 = v16 + v14;
    v69 = v16 + 1024;
  }
  glotv3::EventList::serializeToJson(a2, (int)(uintptr_t)(&v67));
  if ( (uint8_t)glotv3::Utils::ZipIt(
                          (glotv3::Utils::Self *)&v67,
                          (const std::vector<char> *)&v64,
                          (std::vector<char> *)byte_9) == 0 )
  {
    glotv3::Glotv3Logger::WriteLog(&glotv3::errors::WRITER_FAILED_ON_ZIP_BUFFER);
    v57 = 0;
    goto LABEL_86;
  }
  *(uint32_t *)&v60[1] = v65 - v64;
  if ( v65 == v64 )
  {
    glotv3::Glotv3Logger::WriteLog(&glotv3::errors::WRITER_FAILED_ON_ZIP_BUFFER_EMPTY);
    v57 = 0;
    goto LABEL_86;
  }
  v56 = (unsigned int *)(&((int32_t *)(mutex))[1]);
  v17 = (uint32_t *)sub_192C9E0(&((int32_t *)(mutex))[0] + 1, &v60[1], 4);
  if ( *(uint32_t *)((char *)v17 + *(uint32_t *)(*v17 - 12) + 20) != 0 )
  {
    if ( sub_190AC60(&((int32_t *)(mutex))[0] + 2) == 0 )
      sub_1911530(
        (char *)v56 + *(uint32_t *)(((int32_t *)(mutex))[1] - 12),
        *(unsigned int *)((char *)v56 + *(uint32_t *)(((int32_t *)(mutex))[1] - 12) + 20) | 4);
    goto LABEL_98;
  }
  v18 = (uint32_t *)g4_std_compat::ostream_flush(v56);
  if ( *(uint32_t *)((char *)v18 + *(uint32_t *)(*v18 - 12) + 20) != 0 )
  {
LABEL_98:
    glotv3::Glotv3Logger::WriteLog(&glotv3::errors::WRITER_FAILED_ON_HALFWAY_THROUGH_WRITE);
    v57 = 0;
    goto LABEL_86;
  }
  if ( g4_fnstatic_588581bf4f == 0 )
  {
    for ( i = 0; i != 256; ++i )
    {
      v19 = (i & 0x80u) != 0 ? 0x80000000 : 0;
      v20 = (2 * v19) ^ 0x4C11DB7;
      if ( (i & 0x80u) == 0 )
        v20 = 2 * v19;
      v21 = v20 + 0x80000000;
      if ( (i & 0x40) == 0 )
        v21 = v20;
      v22 = (2 * v21) ^ 0x4C11DB7;
      if ( v21 >= 0 )
        v22 = 2 * v21;
      v23 = v22 + 0x80000000;
      if ( (i & 0x20) == 0 )
        v23 = v22;
      v24 = (2 * v23) ^ 0x4C11DB7;
      if ( v23 >= 0 )
        v24 = 2 * v23;
      v25 = v24 + 0x80000000;
      if ( (i & 0x10) == 0 )
        v25 = v24;
      v26 = (2 * v25) ^ 0x4C11DB7;
      if ( v25 >= 0 )
        v26 = 2 * v25;
      v27 = v26 + 0x80000000;
      if ( (i & 8) == 0 )
        v27 = v26;
      v28 = (2 * v27) ^ 0x4C11DB7;
      if ( v27 >= 0 )
        v28 = 2 * v27;
      v29 = v28 + 0x80000000;
      if ( (i & 4) == 0 )
        v29 = v28;
      v30 = (2 * v29) ^ 0x4C11DB7;
      if ( v29 >= 0 )
        v30 = 2 * v29;
      v31 = v30 + 0x80000000;
      if ( (i & 2) == 0 )
        v31 = v30;
      v32 = (2 * v31) ^ 0x4C11DB7;
      if ( v31 >= 0 )
        v32 = 2 * v31;
      v33 = v32 + 0x80000000;
      if ( (i & 1) == 0 )
        v33 = v32;
      v34 = (2 * v33) ^ 0x4C11DB7;
      if ( v33 >= 0 )
        v34 = 2 * v33;
      v35 = -(i & 1) & 0xFFFFFF80;
      v36 = (uint8_t)i >> 1;
      if ( (i & 2) != 0 )
        v35 = (i & 1) == 0 ? -192 : -64;
      if ( (v36 & 2) != 0 )
        LOBYTE(v35) = v35 | 0x20;
      if ( (v36 & 4) != 0 )
        LOBYTE(v35) = v35 | 0x10;
      if ( (v36 & 8) != 0 )
        LOBYTE(v35) = v35 | 8;
      if ( (v36 & 0x10) != 0 )
        LOBYTE(v35) = v35 | 4;
      if ( (v36 & 0x20) != 0 )
        LOBYTE(v35) = v35 | 2;
      if ( (uint8_t)i >> 7 != 0 )
        LOBYTE(v35) = v35 | 1;
      v37 = 31;
      v58 = (uint8_t)v35;
      v38 = 0;
      do
      {
        if ( (v34 & 1) != 0 )
          v38 |= 1 << v37;
        --v37;
        v34 >>= 1;
      }
      while ( v37 != -1 );
      boost::detail::crc_table_t<32u,79764919u,true>::table_[v58] = v38;
    }
    g4_fnstatic_588581bf4f = 1;
  }
  v39 = 31;
  v40 = 0;
  v41 = 0xFFFFFFFF;
  do
  {
    if ( (v41 & 1) != 0 )
      v40 |= 1 << v39;
    --v39;
    v41 >>= 1;
  }
  while ( v39 != -1 );
  v42 = v64;
  if ( v64 < v65 )
  {
    do
    {
      v43 = v40;
      v44 = (uint8_t)(*v42++ ^ v40);
      v40 = (v43 >> 8) ^ boost::detail::crc_table_t<32u,79764919u,true>::table_[v44];
    }
    while ( v42 != v65 );
  }
  v61 = ~v40;
  v45 = (uint32_t *)sub_192C9E0(v56, &v61, 4);
  if ( *(uint32_t *)((char *)v45 + *(uint32_t *)(*v45 - 12) + 20) != 0 )
  {
    if ( sub_190AC60(&((int32_t *)(mutex))[0] + 2) == 0 )
      sub_1911530(
        (char *)v56 + *(uint32_t *)(((int32_t *)(mutex))[1] - 12),
        *(unsigned int *)((char *)v56 + *(uint32_t *)(((int32_t *)(mutex))[1] - 12) + 20) | 4);
    goto LABEL_102;
  }
  v46 = (uint32_t *)g4_std_compat::ostream_flush(v56);
  if ( *(uint32_t *)((char *)v46 + *(uint32_t *)(*v46 - 12) + 20) != 0 )
  {
LABEL_102:
    glotv3::Glotv3Logger::WriteLog(&glotv3::errors::WRITER_FAILED_ON_CHECKSUM);
    v57 = 0;
    goto LABEL_86;
  }
  v47 = (uint32_t *)sub_192C9E0(v56, v64, *(uint32_t *)&v60[1]);
  if ( *(uint32_t *)((char *)v47 + *(uint32_t *)(*v47 - 12) + 20) != 0 )
  {
    if ( sub_190AC60(&((int32_t *)(mutex))[0] + 2) == 0 )
      sub_1911530(
        (char *)v56 + *(uint32_t *)(((int32_t *)(mutex))[1] - 12),
        *(unsigned int *)((char *)v56 + *(uint32_t *)(((int32_t *)(mutex))[1] - 12) + 20) | 4);
    goto LABEL_106;
  }
  v48 = (uint32_t *)g4_std_compat::ostream_flush(v56);
  if ( *(uint32_t *)((char *)v48 + *(uint32_t *)(*v48 - 12) + 20) != 0 )
  {
LABEL_106:
    glotv3::Glotv3Logger::WriteLog(&glotv3::errors::WRITER_FAILED_ON_THROUGH_WRITE);
    v57 = 0;
    goto LABEL_86;
  }
  (*(void (**)(int *))(((int32_t *)(mutex))[2] + 24))(&((int32_t *)(mutex))[2]);
LABEL_86:
  if ( v67 != 0 )
    opDelete((void *)v67);
  v6 = mutex;
  if ( v64 != nullptr )
  {
    opDelete(v64);
    v6 = mutex;
  }
  do
LABEL_5:
    v7 = pthread_mutex_unlock(v6);
  while ( v7 == 4 );
  v10 = v7;
  if ( v7 != 0 )
  {
    v54 = (int)(uintptr_t)(sub_18F81E0(v9, v8));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v63), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(v60) + 1);
    sub_19042E0(v71, &v63);
    g4_std::string::Destroy(&v63);
    v71[2] = v10;
    v71[3] = v54;
    v71[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v71[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  return v57;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Writer::WriteNext  (binary VA: 0x1365a90)
// Original: glotv3::Writer::WriteNext
// ----------------------------------------------------------------------------
int glotv3::Writer::WriteNext(pthread_mutex_t *mutex, glotv3::Event::Self **a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  pthread_mutex_t *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int64_t v12; // rax
  char *v13;
  size_t v14;
  void *v15;
  int v16;
  glotv3::Event::Self *v17;
  uint32_t *v18;
  uint32_t *v19;
  unsigned int v20;
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
  unsigned int v35;
  unsigned int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  unsigned int v42;
  char *v43;
  unsigned int v44;
  int v45;
  uint32_t *v46;
  uint32_t *v47;
  uint32_t *v48;
  uint32_t *v49;
  unsigned int *p_count;
  uint32_t *v51;
  uint32_t *v52;
  uint32_t *v53;
  typedef const void *_g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef unsigned int *_g4_t_v57;
  typedef uint8_t _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_i;
  typedef uint16_t _g4_t_v61[3];
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef char *_g4_t_v65;
  typedef char *_g4_t_v66;
  typedef char *_g4_t_v67;
  typedef int _g4_t_v68;
  typedef size_t _g4_t_v69;
  typedef int _g4_t_v70;
  typedef uint32_t _g4_t_v71[5];
  typedef uint32_t _g4_t_v72[8];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v54)) > _g4_s0 ? (8u + sizeof(_g4_t_v54)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v55)) > _g4_s1 ? (8u + sizeof(_g4_t_v55)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v56)) > _g4_s2 ? (8u + sizeof(_g4_t_v56)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v57)) > _g4_s3 ? (12u + sizeof(_g4_t_v57)) : _g4_s3,
    _g4_s5 = (19u + sizeof(_g4_t_v58)) > _g4_s4 ? (19u + sizeof(_g4_t_v58)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v59)) > _g4_s5 ? (24u + sizeof(_g4_t_v59)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_i)) > _g4_s6 ? (28u + sizeof(_g4_t_i)) : _g4_s6,
    _g4_s8 = (46u + sizeof(_g4_t_v61)) > _g4_s7 ? (46u + sizeof(_g4_t_v61)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v62)) > _g4_s8 ? (52u + sizeof(_g4_t_v62)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v63)) > _g4_s9 ? (56u + sizeof(_g4_t_v63)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v64)) > _g4_s10 ? (60u + sizeof(_g4_t_v64)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v65)) > _g4_s11 ? (64u + sizeof(_g4_t_v65)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v66)) > _g4_s12 ? (68u + sizeof(_g4_t_v66)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v67)) > _g4_s13 ? (72u + sizeof(_g4_t_v67)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v68)) > _g4_s14 ? (80u + sizeof(_g4_t_v68)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v69)) > _g4_s15 ? (84u + sizeof(_g4_t_v69)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v70)) > _g4_s16 ? (88u + sizeof(_g4_t_v70)) : _g4_s16,
    _g4_s18 = (104u + sizeof(_g4_t_v71)) > _g4_s17 ? (104u + sizeof(_g4_t_v71)) : _g4_s17,
    _g4_s19 = (124u + sizeof(_g4_t_v72)) > _g4_s18 ? (124u + sizeof(_g4_t_v72)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 8u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 8u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 8u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 12u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 19u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 24u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 28u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 46u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 52u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 56u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 60u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 64u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 68u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 72u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 80u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 84u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 88u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 104u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 124u);

  do
    v2 = pthread_mutex_lock(mutex);
  while ( v2 == 4 );
  v5 = v2;
  if ( v2 != 0 )
  {
    v56 = (int)(uintptr_t)(sub_18F81E0(v4, v3));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v63), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(v61));
    sub_19042E0(v71, &v63);
    g4_std::string::Destroy(&v63);
    v71[2] = v5;
    v71[3] = v56;
    v71[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v71[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  v58 = glotv3::Writer::CheckSanity((glotv3::Writer::Self *)mutex);
  if ( v58 == 0 )
    goto LABEL_4;
  LODWORD(v12) = glotv3::Writer::size((glotv3::Writer::Self *)mutex);
  if ( G4_MUTEX_KIND(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (5)))) != 0 )
  {
    glotv3::Glotv3Logger::WriteLog(&glotv3::errors::WRITER_FAILED_ON_POSITION);
LABEL_4:
    glotv3::Glotv3Logger::WriteLog(&glotv3::errors::WRITER_FAILED_ON_BEFORE_WRITE);
    v58 = 0;
    v6 = mutex;
    goto LABEL_5;
  }
  if ( v12 != 0 )
    goto LABEL_10;
  p_count = (unsigned int *)(&((int32_t *)(mutex))[1]);
  *(uint32_t *)&v61[1] = 2164360;
  v62 = 1;
  v51 = (uint32_t *)sub_192C9E0(&((int32_t *)(mutex))[0] + 1, &v61[1], 4);
  if ( *(uint32_t *)((char *)v51 + *(uint32_t *)(*v51 - 12) + 20) != 0 )
  {
    glotv3::Glotv3Logger::WriteLog(&glotv3::errors::WRITER_FAILED_ON_MAGIC_NUMBER);
    goto LABEL_4;
  }
  v52 = (uint32_t *)sub_192C9E0(p_count, &v62, 4);
  if ( *(uint32_t *)((char *)v52 + *(uint32_t *)(*v52 - 12) + 20) != 0 )
  {
    glotv3::Glotv3Logger::WriteLog(&glotv3::errors::WRITER_FAILED_ON_VERSION);
    goto LABEL_4;
  }
  v53 = (uint32_t *)g4_std_compat::ostream_flush(p_count);
  if ( *(uint32_t *)((char *)v53 + *(uint32_t *)(*v53 - 12) + 20) != 0 )
    goto LABEL_4;
LABEL_10:
  v65 = nullptr;
  v66 = nullptr;
  v67 = nullptr;
  v68 = 0;
  v69 = 0;
  v70 = 0;
  v13 = (char *)opNew(0x200u);
  if ( v65 != nullptr )
    opDelete(v65);
  v65 = v13;
  v66 = v13;
  v67 = v13 + 512;
  if ( (unsigned int)(v70 - v68) <= 0x3FF )
  {
    v54 = (const void *)v68;
    v14 = v69 - v68;
    v15 = (void *)opNew(0x400u);
    v16 = (int)(uintptr_t)(v15);
    if ( v14 != 0 )
      memmove(v15, v54, v14);
    if ( v68 != 0 )
      opDelete((void *)v68);
    v68 = v16;
    v69 = v16 + v14;
    v70 = v16 + 1024;
  }
  v17 = *a2;
  if ( *a2 == nullptr )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      646,
      "typename boost::detail::sp_dereference<T>::type boost::shared_ptr<T>::operator*() const [with T = const glotv3::Ev"
      "ent, typename boost::detail::sp_dereference<T>::type = const glotv3::Event::Self&]",
      "px != 0");
    v17 = *a2;
  }
  glotv3::Event::serializeToImplementation(v17, (char **)&v68);
  if ( (uint8_t)glotv3::Utils::ZipIt(
                          (glotv3::Utils::Self *)&v68,
                          (const std::vector<char> *)&v65,
                          (std::vector<char> *)byte_9) == 0 )
  {
    glotv3::Glotv3Logger::WriteLog(&glotv3::errors::WRITER_FAILED_ON_ZIP_BUFFER);
    v58 = 0;
    goto LABEL_88;
  }
  *(uint32_t *)&v61[1] = v66 - v65;
  if ( v66 == v65 )
  {
    glotv3::Glotv3Logger::WriteLog(&glotv3::errors::WRITER_FAILED_ON_ZIP_BUFFER_EMPTY);
    v58 = 0;
    goto LABEL_88;
  }
  v57 = (unsigned int *)(&((int32_t *)(mutex))[1]);
  v18 = (uint32_t *)sub_192C9E0(&((int32_t *)(mutex))[0] + 1, &v61[1], 4);
  if ( *(uint32_t *)((char *)v18 + *(uint32_t *)(*v18 - 12) + 20) != 0 )
  {
    if ( sub_190AC60(&((int32_t *)(mutex))[0] + 2) == 0 )
      sub_1911530(
        (char *)v57 + *(uint32_t *)(((int32_t *)(mutex))[1] - 12),
        *(unsigned int *)((char *)v57 + *(uint32_t *)(((int32_t *)(mutex))[1] - 12) + 20) | 4);
    goto LABEL_99;
  }
  v19 = (uint32_t *)g4_std_compat::ostream_flush(v57);
  if ( *(uint32_t *)((char *)v19 + *(uint32_t *)(*v19 - 12) + 20) != 0 )
  {
LABEL_99:
    glotv3::Glotv3Logger::WriteLog(&glotv3::errors::WRITER_FAILED_ON_HALFWAY_THROUGH_WRITE);
    v58 = 0;
    goto LABEL_88;
  }
  if ( g4_fnstatic_588581bf4f == 0 )
  {
    for ( i = 0; i != 256; ++i )
    {
      v20 = (i & 0x80u) != 0 ? 0x80000000 : 0;
      v21 = (2 * v20) ^ 0x4C11DB7;
      if ( (i & 0x80u) == 0 )
        v21 = 2 * v20;
      v22 = v21 + 0x80000000;
      if ( (i & 0x40) == 0 )
        v22 = v21;
      v23 = (2 * v22) ^ 0x4C11DB7;
      if ( v22 >= 0 )
        v23 = 2 * v22;
      v24 = v23 + 0x80000000;
      if ( (i & 0x20) == 0 )
        v24 = v23;
      v25 = (2 * v24) ^ 0x4C11DB7;
      if ( v24 >= 0 )
        v25 = 2 * v24;
      v26 = v25 + 0x80000000;
      if ( (i & 0x10) == 0 )
        v26 = v25;
      v27 = (2 * v26) ^ 0x4C11DB7;
      if ( v26 >= 0 )
        v27 = 2 * v26;
      v28 = v27 + 0x80000000;
      if ( (i & 8) == 0 )
        v28 = v27;
      v29 = (2 * v28) ^ 0x4C11DB7;
      if ( v28 >= 0 )
        v29 = 2 * v28;
      v30 = v29 + 0x80000000;
      if ( (i & 4) == 0 )
        v30 = v29;
      v31 = (2 * v30) ^ 0x4C11DB7;
      if ( v30 >= 0 )
        v31 = 2 * v30;
      v32 = v31 + 0x80000000;
      if ( (i & 2) == 0 )
        v32 = v31;
      v33 = (2 * v32) ^ 0x4C11DB7;
      if ( v32 >= 0 )
        v33 = 2 * v32;
      v34 = v33 + 0x80000000;
      if ( (i & 1) == 0 )
        v34 = v33;
      v35 = (2 * v34) ^ 0x4C11DB7;
      if ( v34 >= 0 )
        v35 = 2 * v34;
      v36 = -(i & 1) & 0xFFFFFF80;
      v37 = (uint8_t)i >> 1;
      if ( (i & 2) != 0 )
        v36 = (i & 1) == 0 ? -192 : -64;
      if ( (v37 & 2) != 0 )
        LOBYTE(v36) = v36 | 0x20;
      if ( (v37 & 4) != 0 )
        LOBYTE(v36) = v36 | 0x10;
      if ( (v37 & 8) != 0 )
        LOBYTE(v36) = v36 | 8;
      if ( (v37 & 0x10) != 0 )
        LOBYTE(v36) = v36 | 4;
      if ( (v37 & 0x20) != 0 )
        LOBYTE(v36) = v36 | 2;
      if ( (uint8_t)i >> 7 != 0 )
        LOBYTE(v36) = v36 | 1;
      v38 = 31;
      v59 = (uint8_t)v36;
      v39 = 0;
      do
      {
        if ( (v35 & 1) != 0 )
          v39 |= 1 << v38;
        --v38;
        v35 >>= 1;
      }
      while ( v38 != -1 );
      boost::detail::crc_table_t<32u,79764919u,true>::table_[v59] = v39;
    }
    g4_fnstatic_588581bf4f = 1;
  }
  v40 = 31;
  v41 = 0;
  v42 = 0xFFFFFFFF;
  do
  {
    if ( (v42 & 1) != 0 )
      v41 |= 1 << v40;
    --v40;
    v42 >>= 1;
  }
  while ( v40 != -1 );
  v43 = v65;
  if ( v65 < v66 )
  {
    do
    {
      v44 = v41;
      v45 = (uint8_t)(*v43++ ^ v41);
      v41 = (v44 >> 8) ^ boost::detail::crc_table_t<32u,79764919u,true>::table_[v45];
    }
    while ( v43 != v66 );
  }
  v62 = ~v41;
  v46 = (uint32_t *)sub_192C9E0(v57, &v62, 4);
  if ( *(uint32_t *)((char *)v46 + *(uint32_t *)(*v46 - 12) + 20) != 0 )
  {
    if ( sub_190AC60(&((int32_t *)(mutex))[0] + 2) == 0 )
      sub_1911530(
        (char *)v57 + *(uint32_t *)(((int32_t *)(mutex))[1] - 12),
        *(unsigned int *)((char *)v57 + *(uint32_t *)(((int32_t *)(mutex))[1] - 12) + 20) | 4);
    goto LABEL_104;
  }
  v47 = (uint32_t *)g4_std_compat::ostream_flush(v57);
  if ( *(uint32_t *)((char *)v47 + *(uint32_t *)(*v47 - 12) + 20) != 0 )
  {
LABEL_104:
    glotv3::Glotv3Logger::WriteLog(&glotv3::errors::WRITER_FAILED_ON_CHECKSUM);
    v58 = 0;
    goto LABEL_88;
  }
  v48 = (uint32_t *)sub_192C9E0(v57, v65, *(uint32_t *)&v61[1]);
  if ( *(uint32_t *)((char *)v48 + *(uint32_t *)(*v48 - 12) + 20) != 0 )
  {
    if ( sub_190AC60(&((int32_t *)(mutex))[0] + 2) == 0 )
      sub_1911530(
        (char *)v57 + *(uint32_t *)(((int32_t *)(mutex))[1] - 12),
        *(unsigned int *)((char *)v57 + *(uint32_t *)(((int32_t *)(mutex))[1] - 12) + 20) | 4);
    goto LABEL_108;
  }
  v49 = (uint32_t *)g4_std_compat::ostream_flush(v57);
  if ( *(uint32_t *)((char *)v49 + *(uint32_t *)(*v49 - 12) + 20) != 0 )
  {
LABEL_108:
    glotv3::Glotv3Logger::WriteLog(&glotv3::errors::WRITER_FAILED_ON_THROUGH_WRITE);
    v58 = 0;
    goto LABEL_88;
  }
  (*(void (**)(int *))(((int32_t *)(mutex))[2] + 24))(&((int32_t *)(mutex))[2]);
LABEL_88:
  if ( v68 != 0 )
    opDelete((void *)v68);
  v6 = mutex;
  if ( v65 != nullptr )
  {
    opDelete(v65);
    v6 = mutex;
  }
  do
LABEL_5:
    v7 = pthread_mutex_unlock(v6);
  while ( v7 == 4 );
  v10 = v7;
  if ( v7 != 0 )
  {
    v55 = (int)(uintptr_t)(sub_18F81E0(v9, v8));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v64), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(v61) + 1);
    sub_19042E0(v72, &v64);
    g4_std::string::Destroy(&v64);
    v72[2] = v10;
    v72[3] = v55;
    v72[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v72[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  return v58;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Writer::Open  (binary VA: 0x13662e0)
// Original: glotv3::Writer::Open
// ----------------------------------------------------------------------------
int glotv3::Writer::Open(pthread_mutex_t *mutex, char **a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v11;
  int v12;
  typedef uint8_t _g4_t_v13;
  typedef unsigned int *_g4_t_p_count;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint32_t _g4_t_v18[5];
  typedef uint32_t _g4_t_v19[12];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (11u + sizeof(_g4_t_v13)) > _g4_s0 ? (11u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_p_count)) > _g4_s1 ? (12u + sizeof(_g4_t_p_count)) : _g4_s1,
    _g4_s3 = (30u + sizeof(_g4_t_v15)) > _g4_s2 ? (30u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v16)) > _g4_s3 ? (32u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v17)) > _g4_s4 ? (36u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v18)) > _g4_s5 ? (40u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v19)) > _g4_s6 ? (60u + sizeof(_g4_t_v19)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 11u);
  _g4_t_p_count &p_count = *reinterpret_cast<_g4_t_p_count *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 30u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 60u);

  do
    v2 = pthread_mutex_lock(mutex);
  while ( v2 == 4 );
  v5 = v2;
  if ( v2 != 0 )
  {
    v12 = (int)(uintptr_t)(sub_18F81E0(v4, v3));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v15));
    sub_19042E0(v18, &v16);
    g4_std::string::Destroy(&v16);
    v18[2] = v5;
    v18[3] = v12;
    v18[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v18[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  p_count = (unsigned int *)(&((int32_t *)(mutex))[1]);
  if ( (uint8_t)sub_1907FD0(&G4_MUTEX_ALIGN(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (1)))) + 5) != 0 && sub_190AC60(&((int32_t *)(mutex))[0] + 2) == 0 )
    sub_1911530(
      (char *)p_count + *(uint32_t *)(((int32_t *)(mutex))[1] - 12),
      *(unsigned int *)((char *)p_count + *(uint32_t *)(((int32_t *)(mutex))[1] - 12) + 20) | 4);
  if ( sub_190AE40((int)(uintptr_t)(&((int32_t *)(mutex))[2]), *a2, G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (10)))) | 0x11) != 0 )
    sub_1911530((char *)p_count + *(uint32_t *)(((int32_t *)(mutex))[1] - 12), 0);
  else
    sub_1911530(
      (char *)p_count + *(uint32_t *)(((int32_t *)(mutex))[1] - 12),
      *(unsigned int *)((char *)p_count + *(uint32_t *)(((int32_t *)(mutex))[1] - 12) + 20) | 4);
  if ( (uint8_t)sub_1907FD0(&G4_MUTEX_ALIGN(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (1)))) + 5) == 0 )
  {
    if ( sub_190AE40((int)(uintptr_t)(&((int32_t *)(mutex))[2]), *a2, G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (10)))) | 0x30) != 0 )
      sub_1911530((char *)p_count + *(uint32_t *)(((int32_t *)(mutex))[1] - 12), 0);
    else
      sub_1911530(
        (char *)p_count + *(uint32_t *)(((int32_t *)(mutex))[1] - 12),
        *(unsigned int *)((char *)p_count + *(uint32_t *)(((int32_t *)(mutex))[1] - 12) + 20) | 4);
  }
  v13 = 0;
  if ( (uint8_t)glotv3::Writer::CheckSanity((glotv3::Writer::Self *)mutex) != 0 )
  {
    (*(void (**)(int *, int *, int))(((int32_t *)(mutex))[2] + 12))(&((int32_t *)(mutex))[2], &G4_MUTEX_KIND(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (10)))), 4096);
    v13 = 1;
  }
  do
    v6 = pthread_mutex_unlock(mutex);
  while ( v6 == 4 );
  v9 = v6;
  if ( v6 != 0 )
  {
    v11 = (int)(uintptr_t)(sub_18F81E0(v8, v7));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v15) + 1);
    sub_19042E0(v19, &v17);
    g4_std::string::Destroy(&v17);
    v19[2] = v9;
    v19[3] = v11;
    v19[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v19[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  return v13;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Writer::Construct  (binary VA: 0x1366570)
// Original: glotv3::Writer::Writer
// ----------------------------------------------------------------------------
int glotv3::Writer::Construct(pthread_mutex_t *mutex, char **a2)
{
  int v2;
  int v3;
  int v4;
  int v6;
  typedef int _g4_t_v7;
  typedef uint32_t _g4_t_v8[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (7u + sizeof(_g4_t_v7)) > _g4_s0 ? (7u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 7u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  v4 = pthread_mutex_init(mutex, nullptr);
  if ( v4 != 0 )
  {
    v6 = (int)(uintptr_t)(sub_18F81E0(v3, v2));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7) + 1, "boost:: mutex constructor failed in pthread_mutex_init", (int)(uintptr_t)(&v7));
    sub_19042E0(v8, (char *)&v7 + 1);
    g4_std::string::Destroy((char *)&v7 + 1);
    v8[2] = v4;
    v8[3] = v6;
    v8[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v8[0] = ((uint32_t)(uintptr_t)&off_2049568);
    std::terminate();
  }
  sub_1900810(&G4_MUTEX_ALIGN(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (4)))) + 4);
  G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (9)))) = 0;
  G4_MUTEX_NUSERS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (4)))) = (unsigned int)(uintptr_t)(&off_20AA2C0);
  *((uint16_t *)&G4_MUTEX_ALIGN(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (9)))) + 6) = 0;
  G4_MUTEX_NUSERS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (9)))) = 0;
  G4_MUTEX_SPINS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (9)))) = 0;
  ((int32_t *)(mutex))[1] = (unsigned int)(uintptr_t)(&off_20A9E6C);
  G4_MUTEX_LOCK(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (10)))) = 0;
  G4_MUTEX_COUNT(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (10)))) = 0;
  *(uint32_t *)((char *)*(&off_20A9E6C - 3) + (uint32_t)(uintptr_t)(mutex) + 4) = (uint32_t)(uintptr_t)(&off_20A9E80);
  sub_19119D0(&((uint8_t *)(mutex))[*(uint32_t *)(((int32_t *)(mutex))[1] - 12) + 4], 0);
  ((int32_t *)(mutex))[1] = (unsigned int)(uintptr_t)(&off_20A9EAC);
  G4_MUTEX_NUSERS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (4)))) = (unsigned int)(uintptr_t)(&off_20A9EC0);
  sub_190A6D0(&((int32_t *)(mutex))[0] + 2);
  sub_19119D0(&G4_MUTEX_ALIGN(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (4)))) + 4, &((int32_t *)(mutex))[0] + 2);
  G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (10)))) = 22;
  return glotv3::Writer::Open(mutex, a2);
}

// ----------------------------------------------------------------------------
// Function: glotv3::Writer::Flush  (binary VA: 0x13666f0)
// Original: glotv3::Writer::Flush
// ----------------------------------------------------------------------------
uint32_t * glotv3::Writer::Flush(pthread_mutex_t *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  uint32_t *v5;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v12;
  int v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint32_t _g4_t_v17[5];
  typedef uint32_t _g4_t_v18[12];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (14u + sizeof(_g4_t_v14)) > _g4_s0 ? (14u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v15)) > _g4_s1 ? (16u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v16)) > _g4_s2 ? (20u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v17)) > _g4_s3 ? (24u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v18)) > _g4_s4 ? (44u + sizeof(_g4_t_v18)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 14u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);

  do
  {
    v1 = pthread_mutex_lock(self);
    v4 = v1;
  }
  while ( v1 == 4 );
  if ( v1 != 0 )
  {
    v12 = (int)(uintptr_t)(sub_18F81E0(v3, v2));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v14));
    sub_19042E0(v17, &v15);
    g4_std::string::Destroy(&v15);
    v17[2] = v4;
    v17[3] = v12;
    v17[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v17[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  v5 = nullptr;
  if ( (uint8_t)sub_1907FD0((char *)self + 44) != 0 )
  {
    v6 = (uint32_t *)g4_std_compat::ostream_flush(&((int32_t *)(self))[0] + 1);
    LOBYTE(v6) = *(uint32_t *)((char *)v6 + *(uint32_t *)(*v6 - 12) + 20) == 0;
    v5 = v6;
  }
  do
  {
    v7 = pthread_mutex_unlock(self);
    v10 = v7;
  }
  while ( v7 == 4 );
  if ( v7 != 0 )
  {
    v13 = (int)(uintptr_t)(sub_18F81E0(v9, v8));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v14) + 1);
    sub_19042E0(v18, &v16);
    g4_std::string::Destroy(&v16);
    v18[2] = v10;
    v18[3] = v13;
    v18[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v18[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Writer::Finish  (binary VA: 0x1366830)
// Original: glotv3::Writer::Finish
// ----------------------------------------------------------------------------
int glotv3::Writer::Finish(pthread_mutex_t *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v11;
  int v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint32_t _g4_t_v16[5];
  typedef uint32_t _g4_t_v17[12];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (14u + sizeof(_g4_t_v13)) > _g4_s0 ? (14u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v14)) > _g4_s1 ? (16u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v15)) > _g4_s2 ? (20u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v16)) > _g4_s3 ? (24u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v17)) > _g4_s4 ? (44u + sizeof(_g4_t_v17)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 14u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);

  do
  {
    v1 = pthread_mutex_lock(self);
    v4 = v1;
  }
  while ( v1 == 4 );
  if ( v1 != 0 )
  {
    v11 = (int)(uintptr_t)(sub_18F81E0(v3, v2));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v13));
    sub_19042E0(v16, &v14);
    g4_std::string::Destroy(&v14);
    v16[2] = v4;
    v16[3] = v11;
    v16[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v16[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  v5 = 0;
  if ( (uint8_t)sub_1907FD0((char *)self + 44) != 0 )
  {
    v5 = 1;
    g4_std_compat::ostream_flush(&((int32_t *)(self))[0] + 1);
    if ( sub_190AC60(&((int32_t *)(self))[0] + 2) == 0 )
      sub_1911530(
        &((uint8_t *)(self))[*(uint32_t *)(((int32_t *)(self))[1] - 12) + 4],
        *(uint32_t *)((char *)self + *(uint32_t *)(((int32_t *)(self))[1] - 12) + 24) | 4);
  }
  do
  {
    v6 = pthread_mutex_unlock(self);
    v9 = v6;
  }
  while ( v6 == 4 );
  if ( v6 != 0 )
  {
    v12 = (int)(uintptr_t)(sub_18F81E0(v8, v7));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v13) + 1);
    sub_19042E0(v17, &v15);
    g4_std::string::Destroy(&v15);
    v17[2] = v9;
    v17[3] = v12;
    v17[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v17[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Writer::Destroy  (binary VA: 0x13669b0)
// Original: glotv3::Writer::~Writer
// ----------------------------------------------------------------------------
void glotv3::Writer::Destroy(pthread_mutex_t *self)
{
  int v1;

  glotv3::Writer::Finish(self);
  *((uint32_t *)self + 28) = (uint32_t)(uintptr_t)(&off_20A9EC0);
  ((int32_t *)(self))[1] = (unsigned int)(uintptr_t)(&off_20A9EAC);
  ((int32_t *)(self))[2] = (int)(uintptr_t)(&off_20A9DA8);
  sub_190AC60(&((int32_t *)(self))[0] + 2);
  sub_1908070((char *)self + 44);
  ((int32_t *)(self))[2] = (int)(uintptr_t)(&off_20AB2C8);
  sub_1902180((char *)self + 36);
  ((int32_t *)(self))[1] = (unsigned int)(uintptr_t)(&off_20A9E6C);
  *(uint32_t *)((char *)*(&off_20A9E6C - 3) + (uint32_t)(uintptr_t)(self) + 4) = (uint32_t)(uintptr_t)(&off_20A9E80);
  *((uint32_t *)self + 28) = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90((char *)self + 112);
  do
    v1 = pthread_mutex_destroy(self);
  while ( v1 == 4 );
  if ( v1 != 0 )
    __assert2(
      "../../../../../lib/glitch/include/boost/thread/pthread/mutex.hpp",
      108,
      "boost::mutex::Destroy()",
      "!posix::pthread_mutex_destroy(&m)");
}


