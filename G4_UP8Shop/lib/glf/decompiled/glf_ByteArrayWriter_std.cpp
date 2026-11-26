#include "Core/Utils/DecompTypes.h"
#include "glf_ByteArrayWriter_std.h"

// ----------------------------------------------------------------------------
// Function: glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::GetData  (binary VA: 0xc7b180)
// Original: glf::ByteArrayWriter<std::vector<unsigned char>>::GetData
// ----------------------------------------------------------------------------
int glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::GetData(glf::ByteArrayWriter<std::vector<unsigned char>> *self)
{
  int result;

  result = 0;
  if ( *((uint32_t *)self + 5) != 0 )
    return *((uint32_t *)self + 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::GetData_eac7b1a0  (binary VA: 0xc7b1a0)
// Original: glf::ByteArrayWriter<std::vector<unsigned char>>::GetData
// ----------------------------------------------------------------------------
int glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::GetData_eac7b1a0(glf::ByteArrayWriter<std::vector<unsigned char>> *self)
{
  int result;

  result = 0;
  if ( *((uint32_t *)self + 5) != 0 )
    return *((uint32_t *)self + 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Size  (binary VA: 0xc7b1c0)
// Original: glf::ByteArrayWriter<std::vector<unsigned char>>::Size
// ----------------------------------------------------------------------------
int glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Size(glf::ByteArrayWriter<std::vector<unsigned char>> *self)
{
  return *((uint32_t *)self + 5);
}

// ----------------------------------------------------------------------------
// Function: glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Destroy  (binary VA: 0xc7b320)
// Original: glf::ByteArrayWriter<std::vector<unsigned char>>::~ByteArrayWriter
// ----------------------------------------------------------------------------
void glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Destroy(void **self)
{
  *self = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_206D898));
  if ( *(self + 1) != nullptr )
    opDelete(*(self + 1));
  *self = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_206D878));
}

// ----------------------------------------------------------------------------
// Function: glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Destroy_eac7b4c0  (binary VA: 0xc7b4c0)
// Original: glf::ByteArrayWriter<std::vector<unsigned char>>::~ByteArrayWriter
// ----------------------------------------------------------------------------
void glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Destroy_eac7b4c0(void **self)
{
  *self = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_206D898));
  if ( *(self + 1) != nullptr )
    opDelete(*(self + 1));
  *self = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_206D878));
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write  (binary VA: 0xc7cd60)
// Original: glf::ByteArrayWriter<std::vector<unsigned char>>::Write
// ----------------------------------------------------------------------------
glf::ByteArrayWriter<std::vector<unsigned char>> * glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(glf::ByteArrayWriter<std::vector<unsigned char>> *self, char a2)
{
  int v2;
  char *src;
  int v4;
  unsigned int v5;
  unsigned int v6;
  int v8[3];

  v2 = *((uint32_t *)self + 4);
  src = *((char **)self + 2);
  v4 = *((uint32_t *)self + 1);
  if ( v2 + 1 > (unsigned int)(uintptr_t)(&src[-v4]) )
  {
    LOBYTE(v8[0]) = 0;
    g4_std_compat::vector_fill_insert((int)(uintptr_t)(self) + 4, src, v2 + 1 - (uint32_t)(uintptr_t)(&src[-v4]), (uint8_t *)v8);
    v4 = *((uint32_t *)self + 1);
    v2 = *((uint32_t *)self + 4);
  }
  *(uint8_t *)(v4 + v2) = a2;
  v5 = *((uint32_t *)self + 5);
  v6 = *((uint32_t *)self + 4) + 1;
  *((uint32_t *)self + 4) = v6;
  if ( v6 < v5 )
    v6 = v5;
  *((uint32_t *)self + 5) = v6;
  return self;
}


