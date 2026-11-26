#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_old_user_gifts.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_old_user_gifts_struct
void giv_old_user_gifts_struct::Init()
{
	base_struct::Init();

	// Field : ShortenedName
	ShortenedName = 0;
	ShortenedName_hash = 0;

	// Field : UnknownName
	UnknownName = 0;
	UnknownName_hash = 0;

	// Field : UnknownAvatarIcon
	UnknownAvatarIcon = 0;
	UnknownAvatarIcon_hash = 0;

	// Field : MaximumNameLength
	MaximumNameLength = 0;
	MaximumNameLength_hash = 0;

	// Field : UID
	UID = 0;

	// Field : Image
	Image = 0;

	// Field : MaxEntries
	MaxEntries = 0;

	// Field : EntryExpirationTime
	EntryExpirationTime_f = 0.0f;

	// Field : LeaderboardSuffixName
	LeaderboardSuffixName = 0;
	LeaderboardSuffixName_hash = 0;

	// Field : PublicAvatar
	PublicAvatar = 0;

	// Field : PublicName
	PublicName = 0;
	PublicName_hash = 0;

	// Field : PublicSaveName
	PublicSaveName = 0;
	PublicSaveName_hash = 0;

	// Field : StockItemOid
	StockItemOid = 0;

	// Field : FromScore
	FromScore = 0;

	// Field : ToScore
	ToScore = 0;

	// Field : Level
	Level = 0;

}

void giv_old_user_gifts_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : ShortenedName
	stream->ReadString(ShortenedName);
	ShortenedName_hash = static_cast<uint32>(glitch::core::hashString(ShortenedName));

	// Field : UnknownName
	stream->ReadString(UnknownName);
	UnknownName_hash = static_cast<uint32>(glitch::core::hashString(UnknownName));

	// Field : UnknownAvatarIcon
	stream->ReadString(UnknownAvatarIcon);
	UnknownAvatarIcon_hash = static_cast<uint32>(glitch::core::hashString(UnknownAvatarIcon));

	// Field : MaximumNameLength
	stream->ReadString(MaximumNameLength);
	MaximumNameLength_hash = static_cast<uint32>(glitch::core::hashString(MaximumNameLength));

	// Field : UID
	stream->ReadAs(UID);

	// Field : Image
	stream->ReadAs(Image);

	// Field : MaxEntries
	stream->ReadAs(MaxEntries);

	// Field : EntryExpirationTime
	stream->ReadAs(EntryExpirationTime_f);

	// Field : LeaderboardSuffixName
	stream->ReadString(LeaderboardSuffixName);
	LeaderboardSuffixName_hash = static_cast<uint32>(glitch::core::hashString(LeaderboardSuffixName));

	// Field : PublicAvatar
	stream->ReadAs(PublicAvatar);

	// Field : PublicName
	stream->ReadString(PublicName);
	PublicName_hash = static_cast<uint32>(glitch::core::hashString(PublicName));

	// Field : PublicSaveName
	stream->ReadString(PublicSaveName);
	PublicSaveName_hash = static_cast<uint32>(glitch::core::hashString(PublicSaveName));

	// Field : StockItemOid
	stream->ReadAs(StockItemOid);

	// Field : FromScore
	stream->ReadAs(FromScore);

	// Field : ToScore
	stream->ReadAs(ToScore);

	// Field : Level
	stream->ReadAs(Level);

}

void giv_old_user_gifts_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : ShortenedName
	if (ShortenedName && ShortenedName[0] != '\0') gll_delete[] ShortenedName;
	ShortenedName = 0;

	// Field : UnknownName
	if (UnknownName && UnknownName[0] != '\0') gll_delete[] UnknownName;
	UnknownName = 0;

	// Field : UnknownAvatarIcon
	if (UnknownAvatarIcon && UnknownAvatarIcon[0] != '\0') gll_delete[] UnknownAvatarIcon;
	UnknownAvatarIcon = 0;

	// Field : MaximumNameLength
	if (MaximumNameLength && MaximumNameLength[0] != '\0') gll_delete[] MaximumNameLength;
	MaximumNameLength = 0;

	// Field : LeaderboardSuffixName
	if (LeaderboardSuffixName && LeaderboardSuffixName[0] != '\0') gll_delete[] LeaderboardSuffixName;
	LeaderboardSuffixName = 0;

	// Field : PublicName
	if (PublicName && PublicName[0] != '\0') gll_delete[] PublicName;
	PublicName = 0;

	// Field : PublicSaveName
	if (PublicSaveName && PublicSaveName[0] != '\0') gll_delete[] PublicSaveName;
	PublicSaveName = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_old_user_gifts
size_t giv_old_user_gifts::size = 0;
giv_old_user_gifts::struct_type* giv_old_user_gifts::entries = 0;

void giv_old_user_gifts::Load(StreamBase* stream)
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

void giv_old_user_gifts::Unload()
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

