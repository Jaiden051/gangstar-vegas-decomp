#include "Core/Utils/DecompTypes.h"
#include "gameswf_zlib_adapter.h"

// ----------------------------------------------------------------------------
// Function: gameswf::zlib_adapter::inflate_write  (binary VA: 0x1175340)
// Original: gameswf::zlib_adapter::inflate_write
// ----------------------------------------------------------------------------
int gameswf::zlib_adapter::inflate_write()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::zlib_adapter::inflate_tell  (binary VA: 0x1175350)
// Original: gameswf::zlib_adapter::inflate_tell
// ----------------------------------------------------------------------------
int gameswf::zlib_adapter::inflate_tell(gameswf::zlib_adapter::Self *self)
{
  return *((uint32_t *)self + 16);
}

// ----------------------------------------------------------------------------
// Function: gameswf::zlib_adapter::inflate_get_eof  (binary VA: 0x1175360)
// Original: gameswf::zlib_adapter::inflate_get_eof
// ----------------------------------------------------------------------------
int gameswf::zlib_adapter::inflate_get_eof(gameswf::zlib_adapter::Self *self)
{
  return *((uint8_t *)self + 68);
}

// ----------------------------------------------------------------------------
// Function: gameswf::zlib_adapter::inflate_close  (binary VA: 0x1175370)
// Original: gameswf::zlib_adapter::inflate_close
// ----------------------------------------------------------------------------
int gameswf::zlib_adapter::inflate_close(gameswf::zlib_adapter::Self *self)
{
  int v1;
  int v3;

  if ( *((uint32_t *)self + 2) != 0 )
  {
    v3 = (*(int (**)(uint32_t))(*(uint32_t *)self + 24))(**(uint32_t **)self);
    (*(void (**)(int, uint32_t))(*(uint32_t *)self + 16))(v3 - *((uint32_t *)self + 2), **(uint32_t **)self);
  }
  v1 = inflateEnd((char *)self + 4);
  gameswf::free_internal(self);
  return v1 == 0 ? 0 : 5;
}

// ----------------------------------------------------------------------------
// Function: gameswf::zlib_adapter::inflate_read  (binary VA: 0x11753f0)
// Original: gameswf::zlib_adapter::inflate_read
// ----------------------------------------------------------------------------
char * gameswf::zlib_adapter::inflate_read(gameswf::zlib_adapter::Self *self, char *a2, uint32_t *a3)
{
  char *result;
  int v4;
  int v5;
  int v6;

  result = nullptr;
  if ( a3[1042] == 0 )
  {
    a3[5] = (uint32_t)(uintptr_t)(a2);
    a3[4] = (uint32_t)(uintptr_t)(self);
    while ( 1 )
    {
      if ( a3[2] == 0 )
      {
        v6 = (*(int (**)(int, int, uint32_t))(*a3 + 8))((int)(uintptr_t)(a3) + 69, 4096, *(uint32_t *)*a3);
        if ( v6 == 0 )
          goto LABEL_13;
        a3[1] = (uint32_t)(uintptr_t)((char *)a3 + 69);
        a3[2] = v6;
      }
      v4 = inflate(a3 + 1, 2);
      if ( v4 == 1 )
      {
        *((uint8_t *)a3 + 68) = 1;
LABEL_13:
        v5 = a3[5];
        goto LABEL_8;
      }
      if ( v4 != 0 )
        break;
      if ( a3[5] == 0 )
      {
        v5 = 0;
        goto LABEL_8;
      }
    }
    a3[1042] = 1;
    v5 = a3[5];
LABEL_8:
    a3[16] += (uint32_t)(intptr_t)&a2[-v5];
    return &a2[-v5];
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::zlib_adapter::inflate_seek_to_end  (binary VA: 0x11755a0)
// Original: gameswf::zlib_adapter::inflate_seek_to_end
// ----------------------------------------------------------------------------
int gameswf::zlib_adapter::inflate_seek_to_end(gameswf::zlib_adapter::Self *self)
{
  if ( *((uint32_t *)self + 1042) != 0 )
    return *((uint32_t *)self + 16);
  else
    return sub_11754C0(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::zlib_adapter::inflate_seek  (binary VA: 0x1175730)
// Original: gameswf::zlib_adapter::inflate_seek
// ----------------------------------------------------------------------------
int gameswf::zlib_adapter::inflate_seek(gameswf::zlib_adapter::Self *self, int *a2)
{
  if ( a2[1042] != 0 )
    return a2[16];
  else
    return sub_11755C0((int)(uintptr_t)(self), a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::zlib_adapter::make_inflater  (binary VA: 0x1175750)
// Original: gameswf::zlib_adapter::make_inflater
// ----------------------------------------------------------------------------
gameswf::File::Self * gameswf::zlib_adapter::make_inflater(gameswf::zlib_adapter::Self *self)
{
  uint32_t *v1;
  gameswf::File::Self *v2;

  v1 = (uint32_t *)opNew(0x104Cu);
  *v1 = (uint32_t)(uintptr_t)(self);
  v1[15] = (*((int (**)(uint32_t, uint32_t))self + 6))(*(uint32_t *)self, 0);
  v1[16] = 0;
  *((uint8_t *)v1 + 68) = 0;
  v1[1042] = 0;
  v1[9] = 0;
  v1[10] = 0;
  v1[11] = 0;
  v1[1] = 0;
  v1[2] = 0;
  v1[4] = 0;
  v1[5] = 0;
  if ( inflateInit_(v1 + 1, "1.2.3", 56) != 0 )
    v1[1042] = 1;
  v2 = (gameswf::File::Self *)opNew(0x28u);
  gameswf::File::Construct(
    v2,
    v1,
    (int (*)(void *, int, void *))gameswf::zlib_adapter::inflate_read,
    (int (*)(const void *, int, void *))gameswf::zlib_adapter::inflate_write,
    (int (*)(int, void *))gameswf::zlib_adapter::inflate_seek,
    (int (*)(void *))gameswf::zlib_adapter::inflate_seek_to_end,
    (int (*)(const void *))gameswf::zlib_adapter::inflate_tell,
    (bool (*)(void *))gameswf::zlib_adapter::inflate_get_eof,
    (int (*)(void *))gameswf::zlib_adapter::inflate_close);
  return v2;
}


