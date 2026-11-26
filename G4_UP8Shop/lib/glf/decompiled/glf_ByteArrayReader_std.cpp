#include "Core/Utils/DecompTypes.h"
#include "glf_ByteArrayReader_std.h"

// ----------------------------------------------------------------------------
// Function: glf::ByteArrayReader_allocator_char_625934::Destroy  (binary VA: 0xcc2960)
// Original: glf::ByteArrayReader<std::allocator<char>>::~ByteArrayReader
// ----------------------------------------------------------------------------
void glf::ByteArrayReader_allocator_char_625934::Destroy(glf::ByteArrayReader<std::allocator<char>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D878);
}

// ----------------------------------------------------------------------------
// Function: glf::ByteArrayReader_allocator_char_625934::GetData  (binary VA: 0xcc2980)
// Original: glf::ByteArrayReader<std::allocator<char>>::GetData
// ----------------------------------------------------------------------------
int glf::ByteArrayReader_allocator_char_625934::GetData(glf::ByteArrayReader<std::allocator<char>> *self)
{
  return *((uint32_t *)self + 2);
}

// ----------------------------------------------------------------------------
// Function: glf::ByteArrayReader_allocator_char_625934::GetData_eacc2990  (binary VA: 0xcc2990)
// Original: glf::ByteArrayReader<std::allocator<char>>::GetData
// ----------------------------------------------------------------------------
int glf::ByteArrayReader_allocator_char_625934::GetData_eacc2990(glf::ByteArrayReader<std::allocator<char>> *self)
{
  return *((uint32_t *)self + 2);
}

// ----------------------------------------------------------------------------
// Function: glf::ByteArrayReader_allocator_char_625934::Size  (binary VA: 0xcc29a0)
// Original: glf::ByteArrayReader<std::allocator<char>>::Size
// ----------------------------------------------------------------------------
int glf::ByteArrayReader_allocator_char_625934::Size(glf::ByteArrayReader<std::allocator<char>> *self)
{
  return *((uint32_t *)self + 3) - *((uint32_t *)self + 1);
}

// ----------------------------------------------------------------------------
// Function: glf::ByteArrayReader_allocator_char_625934::Destroy_eacc29b0  (binary VA: 0xcc29b0)
// Original: glf::ByteArrayReader<std::allocator<char>>::~ByteArrayReader
// ----------------------------------------------------------------------------
void glf::ByteArrayReader_allocator_char_625934::Destroy_eacc29b0(glf::ByteArrayReader<std::allocator<char>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D878);
  opDelete(self);
}


