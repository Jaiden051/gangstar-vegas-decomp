#include "Core/Utils/DecompTypes.h"
#include "gaia_Eve.h"

// ----------------------------------------------------------------------------
// Function: gaia::Eve::ListDataCenters  (binary VA: 0x14b7980)
// Original: gaia::Eve::ListDataCenters
// ----------------------------------------------------------------------------
int gaia::Eve::ListDataCenters(int a1, int a2, char **a3, char **a4, gaia::GaiaRequest::Self *a5)
{
  gaia::ServiceRequest::Self *v5;
  int v6;
  typedef uint16_t _g4_t_v8[3];
  typedef int _g4_t_v9;
  typedef uint32_t *_g4_t_v10;
  typedef int _g4_t_v11[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (14u + sizeof(_g4_t_v8)) > _g4_s0 ? (14u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v9)) > _g4_s1 ? (20u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v10)) > _g4_s2 ? (24u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v11)) > _g4_s3 ? (28u + sizeof(_g4_t_v11)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 14u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  v5 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v5, a5);
  *((uint32_t *)v5 + 8) = 9001;
  *((uint32_t *)v5 + 4) = 0;
  g4_std_compat::string_assign((int)(uintptr_t)(v5) + 40, "http://", 7u);
  *(uint32_t *)&v8[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "/config/", (int)(uintptr_t)(v8));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v8[1]), &v9, a3);
  g4_std::string::Destroy(&v9);
  g4_std::string::append((int)(uintptr_t)(&v8[1]), "/datacenters", 0xCu);
  v10 = &dword_213B814;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v11), "country=", (int)(uintptr_t)(v8) + 1);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v10), v11, a4);
  g4_std::string::Destroy(v11);
  g4_std::string::assign_str((char *)v5 + 44, &v8[1]);
  g4_std::string::assign_str((char *)v5 + 48, &v10);
  v6 = gaia::BaseServiceManager::SendCompleteRequest(a1, v5, a2);
  g4_std::string::Destroy(&v10);
  g4_std::string::Destroy(&v8[1]);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gaia::Eve::Construct  (binary VA: 0x14c0f10)
// Original: gaia::Eve::Eve
// ----------------------------------------------------------------------------
int gaia::Eve::Construct(gaia::BaseServiceManager::Self *a1, int a2, int a3)
{
  int MaxParalelRequests;
  int v5[4];

  MaxParalelRequests = gaia::utils::GetMaxParalelRequests(17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v5) + 1, "eve", (int)(uintptr_t)(v5));
  gaia::BaseServiceManager::Construct(a1, (int)(uintptr_t)(v5) + 1, a3, MaxParalelRequests);
  g4_std::string::Destroy((char *)v5 + 1);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2095DE8);
  return (int)(uintptr_t)(g4_std_compat::string_assign((int)(uintptr_t)(a1) + 52, "eve.gameloft.com:20001", 0x16u));
}

// ----------------------------------------------------------------------------
// Function: gaia::Eve::NeedsLinkRefreshing  (binary VA: 0x14c7150)
// Original: gaia::Eve::NeedsLinkRefreshing
// ----------------------------------------------------------------------------
int gaia::Eve::NeedsLinkRefreshing()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gaia::Eve::Destroy  (binary VA: 0x14c7170)
// Original: gaia::Eve::~Eve
// ----------------------------------------------------------------------------
void gaia::Eve::Destroy(gaia::Eve::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095DE8);
  gaia::BaseServiceManager::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::Eve::Destroy_ea14c71a0  (binary VA: 0x14c71a0)
// Original: gaia::Eve::~Eve
// ----------------------------------------------------------------------------
void gaia::Eve::Destroy_ea14c71a0(gaia::Eve::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095DE8);
  gaia::BaseServiceManager::Destroy(self);
  opDelete(self);
}


