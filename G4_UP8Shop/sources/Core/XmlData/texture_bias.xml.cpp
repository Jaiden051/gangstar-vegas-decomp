#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/texture_bias.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : texture_bias_struct
void texture_bias_struct::Init()
{
	base_struct::Init();

	// Field : bias
	bias = 0;

}

void texture_bias_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : bias
	stream->ReadAs(bias);

}

void texture_bias_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : texture_bias
size_t texture_bias::size = 0;
texture_bias::struct_type* texture_bias::entries = 0;

void texture_bias::Load(StreamBase* stream)
{
	if(entries != 0)
		Unload();

	uint32 sz;
	stream->ReadAs(sz);

	if(sz > 0)
	{
		entries = gll_new struct_type[sz];
		size = sz;

		for(size_t i = 0; i < size; ++i)
		{
			entries[i].Init();
			entries[i].Load(stream);
		}
	}
}

void texture_bias::Unload()
{
	if(entries)
	{
		for(size_t i = 0; i < size; ++i)
		{
			entries[i].Unload();
		}

		gll_delete[] entries;
		entries = 0;
		size = 0;
	}
}

}; // namespace arrays
}; // namespace xmldata

// ============================================================================
// Schema Descriptor Registration Helper (0xaa9100) in libGangstar4.so
// ============================================================================
int sub_AA9100(int a1, char *s)
{
  glf::IOStream::Self *v2; // esi
  size_t v4; // eax
  int v5; // ebp
  int v6; // [esp+1Ch] [ebp-30h]
  int v7; // [esp+2Bh] [ebp-21h]
  uint32_t v8[4]; // [esp+2Ch] [ebp-20h]

  if ( (*(uint32_t *)unk_1CA3DC4) == 0 )
  {
    sub_193A910((int)(uintptr_t)(v8), "gamedata/XmlData/bins/", (int)(uintptr_t)(&v7));
    GLFUtils::ToLowerCase(v8, 0, -1);
    v4 = strlen(s);
    sub_1939E60((int)(uintptr_t)(v8), s, v4);
    v5 = v8[0];
    v2 = (glf::IOStream::Self *)sub_4EBBF0(0x34u, 1);
    glf::FileStreamImpl::Construct(v2, v5, 1);
    *(uint32_t *)v2 = ((uint32_t)(uintptr_t)&off_2048D28);
    sub_1938B70(v8);
    if ( (*(uint8_t (**)(glf::IOStream::Self *))(*(uint32_t *)v2 + 48))(v2) == 0 )
      goto LABEL_3;
LABEL_6:
    v6 = sub_4EBBF0(0xCu, 1);
    sub_A46990(v6, v2, 1, 0);
    return v6;
  }
  v2 = (glf::IOStream::Self *)sub_4EBBF0(0x34u, 1);
  glf::FileStreamImpl::Construct(v2, (int)(uintptr_t)(s), 129);
  *(uint32_t *)v2 = ((uint32_t)(uintptr_t)&off_2048D28);
  if ( (uint8_t)glf::Stream::IsOpened(v2) != 0 )
    goto LABEL_6;
LABEL_3:
  (*(void (**)(glf::IOStream::Self *))(*(uint32_t *)v2 + 4))(v2);
  return 0;
}
