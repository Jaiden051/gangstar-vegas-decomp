#include "Core/Utils/DecompTypes.h"
#include "glotv3_Reader.h"
uint32_t *g4_sub_1914A20(uint32_t *a1, int a2, int a3, int a4);

// ----------------------------------------------------------------------------
// Function: glotv3::Reader::CheckSanity  (binary VA: 0x137b2c0)
// Original: glotv3::Reader::CheckSanity
// ----------------------------------------------------------------------------
int glotv3::Reader::CheckSanity(glotv3::Reader::Self *self)
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
      glotv3::Glotv3Logger::WriteLog(&glotv3::errors::READER_BADBIT_ON_STREAM);
    }
    else if ( (v2 & 4) != 0 )
    {
      glotv3::Glotv3Logger::WriteLog(&glotv3::errors::READER_FAILBIT_ON_STREAM);
    }
    glotv3::Glotv3Logger::WriteLog(&glotv3::errors::READER_INVALID_STREAM_STATE);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Reader::ReadNext  (binary VA: 0x137b360)
// Original: glotv3::Reader::ReadNext
// ----------------------------------------------------------------------------
int glotv3::Reader::ReadNext(glotv3::Reader::Self *a1, glotv3::Event::Self **a2)
{
  glotv3::Reader::Self *v2;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  size_t v7;
  int v8;
  char *v9;
  uint32_t *v10;
  int v11;
  unsigned int v12;
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
  unsigned int v27;
  unsigned int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  unsigned int v34;
  uint8_t *v35;
  size_t v36;
  unsigned int v37;
  int v38;
  int v39;
  char *v40;
  glotv3::Event::Self *v41;
  uint32_t *v42;
  typedef char *_g4_t_v43;
  typedef size_t _g4_t_v44;
  typedef int _g4_t_v45;
  typedef glotv3::Event::Self **_g4_t_v46;
  typedef int _g4_t_i;
  typedef uint8_t _g4_t_v48;
  typedef size_t _g4_t_v49[4];
  typedef uint32_t _g4_t_v50[4];
  typedef void *_g4_t_v51;
  typedef char *_g4_t_v52;
  typedef char *_g4_t_v53;
  typedef void *_g4_t_v54;
  typedef void *_g4_t_v55;
  typedef char *_g4_t_v56;
  typedef int64_t _g4_t_v57;
  typedef uint32_t _g4_t_v58[9];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v43)) > _g4_s0 ? (0u + sizeof(_g4_t_v43)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v44)) > _g4_s1 ? (0u + sizeof(_g4_t_v44)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v45)) > _g4_s2 ? (8u + sizeof(_g4_t_v45)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v46)) > _g4_s3 ? (12u + sizeof(_g4_t_v46)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_i)) > _g4_s4 ? (16u + sizeof(_g4_t_i)) : _g4_s4,
    _g4_s6 = (23u + sizeof(_g4_t_v48)) > _g4_s5 ? (23u + sizeof(_g4_t_v48)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v49)) > _g4_s6 ? (24u + sizeof(_g4_t_v49)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v50)) > _g4_s7 ? (40u + sizeof(_g4_t_v50)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v51)) > _g4_s8 ? (56u + sizeof(_g4_t_v51)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v52)) > _g4_s9 ? (60u + sizeof(_g4_t_v52)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v53)) > _g4_s10 ? (64u + sizeof(_g4_t_v53)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v54)) > _g4_s11 ? (72u + sizeof(_g4_t_v54)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v55)) > _g4_s12 ? (76u + sizeof(_g4_t_v55)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v56)) > _g4_s13 ? (80u + sizeof(_g4_t_v56)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v57)) > _g4_s14 ? (96u + sizeof(_g4_t_v57)) : _g4_s14,
    _g4_s16 = (108u + sizeof(_g4_t_v58)) > _g4_s15 ? (108u + sizeof(_g4_t_v58)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 0u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 0u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 8u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 12u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 16u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 23u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 24u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 40u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 56u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 60u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 64u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 72u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 76u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 80u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 96u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 108u);

  v58[5] = (uint32_t)(uintptr_t)(&a1);
  v2 = a1;
  v46 = a2;
  v48 = glotv3::Reader::CheckSanity(a1);
  if ( v48 == 0 )
    goto LABEL_2;
  sub_19135E0((uint32_t *)&v57, (uint32_t *)v2);
  if ( *((uint32_t *)v2 + 33) != 0 )
  {
    glotv3::Glotv3Logger::WriteLog(&glotv3::errors::READER_FAILED_ON_POSITION);
    goto LABEL_2;
  }
  if ( v57 != 0 )
    goto LABEL_8;
  v49[0] = 0;
  v50[0] = 0;
  v5 = (uint32_t *)sub_1913BC0(v2, v49, 4);
  if ( *(uint32_t *)((char *)v5 + *(uint32_t *)(*v5 - 12) + 20) != 0 )
  {
    glotv3::Glotv3Logger::WriteLog(&glotv3::errors::READER_FAILED_ON_MAGIC_NUMBER);
    goto LABEL_2;
  }
  if ( v49[0] != 2164360 )
  {
    glotv3::Glotv3Logger::WriteLog(&glotv3::errors::READER_FAILED_ON_UNMATCHED_MAGIC_NUMBER);
LABEL_2:
    if ( (*((uint8_t *)v2 + 132) & 2) == 0 )
      glotv3::Glotv3Logger::WriteLog(&glotv3::errors::READER_FAILED_ON_BEFORE_READ);
    return 0;
  }
  v42 = (uint32_t *)sub_1913BC0(v2, v50, 4);
  if ( *(uint32_t *)((char *)v42 + *(uint32_t *)(*v42 - 12) + 20) != 0 )
  {
    glotv3::Glotv3Logger::WriteLog(&glotv3::errors::READER_FAILED_ON_VERSION);
    goto LABEL_2;
  }
  if ( v50[0] != 1 )
  {
    glotv3::Glotv3Logger::WriteLog(&glotv3::errors::READER_FAILED_ON_UNMATCHED_BINARY_VERSION);
    goto LABEL_2;
  }
LABEL_8:
  v49[0] = 0;
  v4 = (uint32_t *)sub_1913BC0(v2, v49, 4);
  if ( *(uint32_t *)((char *)v4 + *(uint32_t *)(*v4 - 12) + 20) != 0 )
  {
    v48 = 0;
    if ( (*((uint8_t *)v2 + 132) & 2) == 0 )
      glotv3::Glotv3Logger::WriteLog(&glotv3::errors::READER_FAILED_ON_READ_SIZE);
  }
  else
  {
    v6 = (uint32_t *)sub_1913BC0(v2, v50, 4);
    if ( *(uint32_t *)((char *)v6 + *(uint32_t *)(*v6 - 12) + 20) != 0 )
    {
      v48 = 0;
      if ( (*((uint8_t *)v2 + 132) & 2) == 0 )
        glotv3::Glotv3Logger::WriteLog(&glotv3::errors::READER_FAILED_ON_READ_CHECKSUM);
    }
    else
    {
      v7 = v49[0];
      v8 = 0;
      v9 = nullptr;
      v51 = nullptr;
      v52 = nullptr;
      v53 = nullptr;
      if ( v49[0] != 0 )
      {
        v44 = v49[0];
        v8 = opNew(v49[0]);
        v9 = (char *)v8;
        v7 = v44;
      }
      v51 = v9;
      v53 = &v9[v7];
      v43 = &v9[v7];
      memset(v9, 0, (size_t)&v9[v7 - v8]);
      v52 = v43;
      v10 = (uint32_t *)sub_1913BC0(v2, v9, v49[0]);
      if ( *(uint32_t *)((char *)v10 + *(uint32_t *)(*v10 - 12) + 20) != 0 )
      {
        v48 = 0;
        if ( (*((uint8_t *)v2 + 132) & 2) == 0 )
          glotv3::Glotv3Logger::WriteLog(&glotv3::errors::READER_FAILED_ON_DATA_READ);
      }
      else
      {
        sub_19135E0(v58, (uint32_t *)v2);
        *((uint32_t *)v2 + 62) = v58[0];
        v11 = *((uint32_t *)v2 + 33);
        *((uint32_t *)v2 + 63) = v58[1];
        if ( v11 != 0 )
        {
          v48 = 0;
          if ( (v11 & 2) == 0 )
            glotv3::Glotv3Logger::WriteLog(&glotv3::errors::READER_FAILED_ON_POSITION);
        }
        else
        {
          if ( g4_fnstatic_588581bf4f == 0 )
          {
            for ( i = 0; i != 256; ++i )
            {
              v12 = (i & 0x80u) != 0 ? 0x80000000 : 0;
              v13 = (2 * v12) ^ 0x4C11DB7;
              if ( (i & 0x80u) == 0 )
                v13 = 2 * v12;
              v14 = v13 + 0x80000000;
              if ( (i & 0x40) == 0 )
                v14 = v13;
              v15 = (2 * v14) ^ 0x4C11DB7;
              if ( v14 >= 0 )
                v15 = 2 * v14;
              v16 = v15 + 0x80000000;
              if ( (i & 0x20) == 0 )
                v16 = v15;
              v17 = (2 * v16) ^ 0x4C11DB7;
              if ( v16 >= 0 )
                v17 = 2 * v16;
              v18 = v17 + 0x80000000;
              if ( (i & 0x10) == 0 )
                v18 = v17;
              v19 = (2 * v18) ^ 0x4C11DB7;
              if ( v18 >= 0 )
                v19 = 2 * v18;
              v20 = v19 + 0x80000000;
              if ( (i & 8) == 0 )
                v20 = v19;
              v21 = (2 * v20) ^ 0x4C11DB7;
              if ( v20 >= 0 )
                v21 = 2 * v20;
              v22 = v21 + 0x80000000;
              if ( (i & 4) == 0 )
                v22 = v21;
              v23 = (2 * v22) ^ 0x4C11DB7;
              if ( v22 >= 0 )
                v23 = 2 * v22;
              v24 = v23 + 0x80000000;
              if ( (i & 2) == 0 )
                v24 = v23;
              v25 = (2 * v24) ^ 0x4C11DB7;
              if ( v24 >= 0 )
                v25 = 2 * v24;
              v26 = v25 + 0x80000000;
              if ( (i & 1) == 0 )
                v26 = v25;
              v27 = (2 * v26) ^ 0x4C11DB7;
              if ( v26 >= 0 )
                v27 = 2 * v26;
              v28 = -(i & 1) & 0xFFFFFF80;
              v29 = (uint8_t)i >> 1;
              if ( (i & 2) != 0 )
                v28 = (i & 1) == 0 ? -192 : -64;
              if ( (v29 & 2) != 0 )
                LOBYTE(v28) = v28 | 0x20;
              if ( (v29 & 4) != 0 )
                LOBYTE(v28) = v28 | 0x10;
              if ( (v29 & 8) != 0 )
                LOBYTE(v28) = v28 | 8;
              if ( (v29 & 0x10) != 0 )
                LOBYTE(v28) = v28 | 4;
              if ( (v29 & 0x20) != 0 )
                LOBYTE(v28) = v28 | 2;
              if ( (uint8_t)i >> 7 != 0 )
                LOBYTE(v28) = v28 | 1;
              v30 = 31;
              v45 = (uint8_t)v28;
              v31 = 0;
              do
              {
                if ( (v27 & 1) != 0 )
                  v31 |= 1 << v30;
                --v30;
                v27 >>= 1;
              }
              while ( v30 != -1 );
              boost::detail::crc_table_t<32u,79764919u,true>::table_[v45] = v31;
            }
            g4_fnstatic_588581bf4f = 1;
          }
          v32 = 31;
          v33 = 0;
          v34 = 0xFFFFFFFF;
          do
          {
            if ( (v34 & 1) != 0 )
              v33 |= 1 << v32;
            --v32;
            v34 >>= 1;
          }
          while ( v32 != -1 );
          v35 = (uint8_t *)(v51);
          v36 = v49[0];
          if ( v51 < (char *)v51 + v49[0] )
          {
            do
            {
              v37 = v33;
              v38 = (uint8_t)(*v35++ ^ v33);
              v33 = (v37 >> 8) ^ boost::detail::crc_table_t<32u,79764919u,true>::table_[v38];
            }
            while ( v35 != (uint8_t *)(uintptr_t)((char *)v51 + v49[0]) );
            v36 = v49[0];
          }
          if ( v50[0] == ~v33 )
          {
            v39 = 5 * v36;
            v54 = nullptr;
            v55 = nullptr;
            v56 = nullptr;
            if ( 5 * v36 != 0 )
            {
              v40 = (char *)opNew(5 * v36);
              if ( v54 != nullptr )
                opDelete(v54);
              v54 = v40;
              v55 = v40;
              v56 = &v40[v39];
            }
            if ( (uint8_t)glotv3::Utils::UnZipIt((glotv3::Utils::Self *)&v51, (const std::vector<char> *)&v54) != 0 )
            {
              if ( v55 == v54 )
              {
                glotv3::Glotv3Logger::WriteLog(&glotv3::errors::READER_FAILED_ON_DATA_VECTOR_EMPTY);
              }
              else
              {
                v41 = *v46;
                if ( *v46 == nullptr )
                {
                  __assert2(
                    "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
                    646,
                    "typename boost::detail::sp_dereference<T>::type boost::shared_ptr<T>::operator*() const [with T = gl"
                    "otv3::Event, typename boost::detail::sp_dereference<T>::type = glotv3::Event::Self&]",
                    "px != 0");
                  v41 = *v46;
                }
                glotv3::Event::deserializeToImplementation(v41, (std::vector<char> *)&v54);
              }
            }
            else
            {
              glotv3::Glotv3Logger::WriteLog(&glotv3::errors::READER_FAILED_ON_ZIP_BUFFER);
            }
            if ( v54 != nullptr )
              opDelete(v54);
          }
          else
          {
            glotv3::Glotv3Logger::WriteLog(&glotv3::errors::READER_FAILED_ON_CRC_ALTERED_DATA);
            v48 = 0;
          }
        }
      }
      if ( v51 != nullptr )
        opDelete(v51);
    }
  }
  return v48;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Reader::size  (binary VA: 0x137ba30)
// Original: glotv3::Reader::size
// ----------------------------------------------------------------------------
int glotv3::Reader::size(glotv3::Reader::Self *self)
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

  sub_19135E0(v5, (uint32_t *)self);
  v4 = v5[1];
  v3 = v5[0];
  g4_sub_1914A20((uint32_t *)self, 0, 0, 2);
  sub_19135E0((uint32_t *)&v6, (uint32_t *)self);
  v1 = v6;
  g4_sub_1914A20((uint32_t *)self, v3, v4, 0);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Reader::IsAtEnd  (binary VA: 0x137baf0)
// Original: glotv3::Reader::IsAtEnd
// ----------------------------------------------------------------------------
bool glotv3::Reader::IsAtEnd(glotv3::Reader::Self *self)
{
  int v1;
  int64_t v3; // rax
  int64_t v4; // 0:ebp.4,4:edi.4

  v1 = 1;
  if ( (*((uint8_t *)self + 132) & 2) == 0 )
  {
    v4 = *((uint64_t *)self + 31);
    LODWORD(v3) = glotv3::Reader::size(self);
    return v4 >= v3;
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Reader::ResetReader  (binary VA: 0x137bb60)
// Original: glotv3::Reader::ResetReader
// ----------------------------------------------------------------------------
int glotv3::Reader::ResetReader(glotv3::Reader::Self *self)
{
  return (int)(uintptr_t)(g4_sub_1914A20((uint32_t *)self, 0, 0, 0));
}

// ----------------------------------------------------------------------------
// Function: glotv3::Reader::Construct  (binary VA: 0x137bba0)
// Original: glotv3::Reader::Reader
// ----------------------------------------------------------------------------
int glotv3::Reader::Construct(glotv3::Reader::Self *a1, char **a2)
{
  char v2;
  int v3;
  int result;

  sub_1900810((char *)a1 + 112);
  *((uint32_t *)a1 + 56) = 0;
  *((uint8_t *)a1 + 228) = 0;
  *((uint32_t *)a1 + 28) = (uint32_t)(uintptr_t)(&off_20AA2C0);
  *((uint8_t *)a1 + 229) = 0;
  *((uint32_t *)a1 + 58) = 0;
  *((uint32_t *)a1 + 59) = 0;
  *((uint32_t *)a1 + 60) = 0;
  *((uint32_t *)a1 + 61) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9DEC);
  *(uint32_t *)((char *)*(&off_20A9DEC - 3) + (uint32_t)(uintptr_t)(a1)) = (uint32_t)(uintptr_t)(&off_20A9E00);
  *((uint32_t *)a1 + 1) = 0;
  sub_19119D0((char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 12), 0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9E2C);
  *((uint32_t *)a1 + 28) = (uint32_t)(uintptr_t)(&off_20A9E40);
  sub_190A6D0((char *)a1 + 8);
  sub_19119D0((char *)a1 + 112, (char *)a1 + 8);
  *((uint32_t *)a1 + 62) = 0;
  *((uint32_t *)a1 + 63) = 0;
  *((uint32_t *)a1 + 64) = 12;
  v2 = sub_1907FD0((char *)a1 + 44);
  v3 = 12;
  if ( v2 != 0 )
  {
    if ( sub_190AC60((char *)a1 + 8) == 0 )
      sub_1911530(
        (char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 12),
        *(uint32_t *)((char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 12) + 20) | 4);
    v3 = *((uint32_t *)a1 + 64) | 8;
  }
  if ( sub_190AE40((int)(uintptr_t)(a1) + 8, *a2, v3) != 0 )
    sub_1911530((char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 12), 0);
  else
    sub_1911530(
      (char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 12),
      *(uint32_t *)((char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 12) + 20) | 4);
  if ( (uint8_t)sub_1907FD0((char *)a1 + 44) == 0 )
  {
    if ( sub_190AE40((int)(uintptr_t)(a1) + 8, *a2, *((uint32_t *)a1 + 64) | 8) != 0 )
      sub_1911530((char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 12), 0);
    else
      sub_1911530(
        (char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 12),
        *(uint32_t *)((char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 12) + 20) | 4);
  }
  result = glotv3::Reader::CheckSanity(a1);
  if ( (uint8_t)result != 0 )
  {
    (*(void (**)(char *, char *, int))(*((uint32_t *)a1 + 2) + 12))((char *)a1 + 8, (char *)a1 + 260, 4096);
    return glotv3::Reader::ResetReader(a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Reader::Destroy  (binary VA: 0x137bde0)
// Original: glotv3::Reader::~Reader
// ----------------------------------------------------------------------------
void glotv3::Reader::Destroy(glotv3::Reader::Self *self)
{
  if ( (uint8_t)sub_1907FD0((char *)self + 44) != 0 && sub_190AC60((char *)self + 8) == 0 )
    sub_1911530(
      (char *)self + *(uint32_t *)(*(uint32_t *)self - 12),
      *(uint32_t *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12) + 20) | 4);
  *((uint32_t *)self + 28) = (uint32_t)(uintptr_t)(&off_20A9E40);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20A9E2C);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&off_20A9DA8);
  sub_190AC60((char *)self + 8);
  sub_1908070((char *)self + 44);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((char *)self + 36);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20A9DEC);
  *(uint32_t *)((char *)*(&off_20A9DEC - 3) + (uint32_t)(uintptr_t)(self)) = (uint32_t)(uintptr_t)(&off_20A9E00);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 28) = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90((char *)self + 112);
}


