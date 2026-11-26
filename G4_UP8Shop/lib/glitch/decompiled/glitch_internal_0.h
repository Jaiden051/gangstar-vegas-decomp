#pragma once
// ============================================================================
// G4_UP8Shop/lib/glitch/decompiled/glitch_internal_0.h
// Library: glitch | Module: glitch_internal_0
// Binary Address Span: 0xcdfa90 .. 0xd45f80 (101 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xcdfa90] (293 bytes) sub_CDFA90
// int sub_CDFA90(glitch::core::STraversalState<unsigned int> *a1);
// [0xcdfbc0] (293 bytes) sub_CDFBC0
// int sub_CDFBC0(glitch::core::STraversalState<unsigned int> *a1);
// [0xcdfcf0] (293 bytes) sub_CDFCF0
// int sub_CDFCF0(glitch::core::STraversalState<unsigned int> *a1);
// [0xcdfe20] (293 bytes) sub_CDFE20
// int sub_CDFE20(glitch::core::STraversalState<unsigned int> *a1);
// [0xce3a30] (590 bytes) sub_CE3A30
// uint32_t *sub_CE3A30(uint32_t *a1);
// [0xce3c80] (153 bytes) sub_CE3C80
// uint32_t *sub_CE3C80();
// [0xce4500] (210 bytes) sub_CE4500
// int *sub_CE4500(int a1, int a2, unsigned int a3, int a4);
// [0xce5320] (210 bytes) sub_CE5320
// int *sub_CE5320(int a1, int a2, unsigned int a3, int a4);
// [0xce5400] (1310 bytes) sub_CE5400
// uint32_t *sub_CE5400(uint32_t *a1);
// [0xce75c0] (210 bytes) sub_CE75C0
// int *sub_CE75C0(int a1, int a2, unsigned int a3, int a4);
// [0xce8600] (1264 bytes) sub_CE8600
// uint32_t *sub_CE8600(uint32_t *a1, int *a2, unsigned int a3);
// [0xce8af0] (2043 bytes) sub_CE8AF0
// int sub_CE8AF0(int a1, unsigned int a2, int a3);
// [0xcea650] (387 bytes) sub_CEA650
// int sub_CEA650( int a1, boost::unordered::detail::table<boost::unordered::detail::map<std::allocator<std::pair<unsigned int const, std::pair<boost::intrusive_ptr<glitch::scene::ISceneNode>, unsigned int>>>, unsigned int, std::pair<boost::intrusive_ptr<glitch::scene::ISceneNode>, unsigned int>, boost::hash<unsigned int>, std::equal_to<unsigned int>>> *a2, unsigned int *a3, uint32_t **a4);
// [0xceab10] (371 bytes) sub_CEAB10
// int sub_CEAB10( int a1, boost::unordered::detail::table<boost::unordered::detail::map<std::allocator<std::pair<unsigned int const, glitch::streaming::lod_cache::SLodObject *>>, unsigned int, glitch::streaming::lod_cache::SLodObject *, boost::hash<unsigned int>, std::equal_to<unsigned int>>> *a2, unsigned int **a3);
// [0xceb3c0] (659 bytes) sub_CEB3C0
// int sub_CEB3C0( int a1, boost::unordered::detail::table<boost::unordered::detail::map<std::allocator<std::pair<glitch::streaming::SStreamingItemFragment const, unsigned int>>, glitch::streaming::SStreamingItemFragment, unsigned int, glitch::streaming::SStreamingItemFragmentHash, std::equal_to<glitch::streaming::SStreamingItemFragment>>> *a2, uint32_t *a3, int *a4);
// [0xcedf20] (2441 bytes) sub_CEDF20
// int sub_CEDF20(int a1, signed int a2, int a3);
// [0xcf21d0] (444 bytes) std::vector<unsigned int,std::allocator<unsigned int>>::operator=(std::vector<unsigned int,std::allocator<unsigned int>> const&)
// std::vector<unsigned int> *std::vector<unsigned int>::operator=( std::vector<unsigned int> *this, const std::vector<unsigned int> *a2);
// [0xcf2990] (1651 bytes) void std::__introsort_loop<__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>,int,glitch::streaming::base_streaming_manager::SCommandComp>(__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>,int,glitch::streaming::base_streaming_manager::SCommandComp)
// int std::__introsort_loop<__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>,int,glitch::streaming::base_streaming_manager::SCommandComp>(;
// [0xcf38f0] (220 bytes) __gnu_cxx::__normal_iterator<glitch::util::STriangleAdapter*,std::vector<glitch::util::STriangleAdapter,std::allocator<glitch::util::STriangleAdapter>>> std::copy<__gnu_cxx::__normal_iterator<glitch::util::STriangleAdapter const*,std::vector<glitch::util::STriangleAdapter,std::allocator<glitch::util::STriangleAdapter>>>,__gnu_cxx::__normal_iterator<glitch::util::STriangleAdapter*,std::vector<glitch::util::STriangleAdapter,std::allocator<glitch::util::STriangleAdapter>>>>(__gnu_cxx::__normal_iterator<glitch::util::STriangleAdapter const*,std::vector<glitch::util::STriangleAdapter,std::allocator<glitch::util::STriangleAdapter>>>,__gnu_cxx::__normal_iterator<glitch::util::STriangleAdapter const*,std::vector<glitch::util::STriangleAdapter,std::allocator<glitch::util::STriangleAdapter>>>,__gnu_cxx::__normal_iterator<glitch::util::STriangleAdapter*,std::vector<glitch::util::STriangleAdapter,std::allocator<glitch::util::STriangleAdapter>>>)
// uint32_t *std::copy<__gnu_cxx::__normal_iterator<glitch::util::STriangleAdapter const*,std::vector<glitch::util::STriangleAdapter>>,__gnu_cxx::__normal_iterator<glitch::util::STriangleAdapter*,std::vector<glitch::util::STriangleAdapter>>>( uint32_t *a1, uint32_t *a2, int a3, uint32_t *a4);
// [0xcf5920] (523 bytes) void std::__insertion_sort<__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::streaming::base_streaming_manager::SCommandComp>(__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::streaming::base_streaming_manager::SCommandComp)
// volatile int32_t *std::__insertion_sort<__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::streaming::base_streaming_manager::SCommandComp>(;
// [0xcf7fb0] (316 bytes) void std::__insertion_sort<__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>,bool (*)(glitch::streaming::SCommandAndRegisterer const&,glitch::streaming::SCommandAndRegisterer const&)>(__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>,bool (*)(glitch::streaming::SCommandAndRegisterer const&,glitch::streaming::SCommandAndRegisterer const&))
// glitch::streaming::SCommandAndRegisterer *std::__insertion_sort<__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>,bool (*)(glitch::streaming::SCommandAndRegisterer const&,glitch::streaming::SCommandAndRegisterer const&)>(;
// [0xcf80f0] (153 bytes) void std::__insertion_sort<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int,std::allocator<unsigned int>>>>(__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int,std::allocator<unsigned int>>>,__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int,std::allocator<unsigned int>>>)
// char *std::__insertion_sort<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>( char *src, char *a2);
// [0xcf8190] (116 bytes) void std::iter_swap<__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>>(__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>)
// volatile int32_t *std::iter_swap<__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>>(;
// [0xcf8210] (429 bytes) __gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>> std::__unguarded_partition_pivot<__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>,bool (*)(glitch::streaming::SCommandAndRegisterer const&,glitch::streaming::SCommandAndRegisterer const&)>(__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>,bool (*)(glitch::streaming::SCommandAndRegisterer const&,glitch::streaming::SCommandAndRegisterer const&))
// const glitch::streaming::SCommandAndRegisterer **std::__unguarded_partition_pivot<__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>,bool (*)(glitch::streaming::SCommandAndRegisterer const&,glitch::streaming::SCommandAndRegisterer const&)>(;
// [0xcf83c0] (466 bytes) void std::__introsort_loop<__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>,int,bool (*)(glitch::streaming::SCommandAndRegisterer const&,glitch::streaming::SCommandAndRegisterer const&)>(__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>,int,bool (*)(glitch::streaming::SCommandAndRegisterer const&,glitch::streaming::SCommandAndRegisterer const&))
// int std::__introsort_loop<__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>,int,bool (*)(glitch::streaming::SCommandAndRegisterer const&,glitch::streaming::SCommandAndRegisterer const&)>(;
// [0xcf85a0] (115 bytes) void std::iter_swap<__gnu_cxx::__normal_iterator<std::pair<glitch::streaming::SCommand,bool> *,std::vector<std::pair<glitch::streaming::SCommand,bool>,std::allocator<std::pair<glitch::streaming::SCommand,bool>>>>,__gnu_cxx::__normal_iterator<std::pair<glitch::streaming::SCommand,bool> *,std::vector<std::pair<glitch::streaming::SCommand,bool>,std::allocator<std::pair<glitch::streaming::SCommand,bool>>>>>(__gnu_cxx::__normal_iterator<std::pair<glitch::streaming::SCommand,bool> *,std::vector<std::pair<glitch::streaming::SCommand,bool>,std::allocator<std::pair<glitch::streaming::SCommand,bool>>>>,__gnu_cxx::__normal_iterator<std::pair<glitch::streaming::SCommand,bool> *,std::vector<std::pair<glitch::streaming::SCommand,bool>,std::allocator<std::pair<glitch::streaming::SCommand,bool>>>>)
// int std::iter_swap<__gnu_cxx::__normal_iterator<std::pair<glitch::streaming::SCommand,bool> *,std::vector<std::pair<glitch::streaming::SCommand,bool>>>,__gnu_cxx::__normal_iterator<std::pair<glitch::streaming::SCommand,bool> *,std::vector<std::pair<glitch::streaming::SCommand,bool>>>>( uint32_t *a1, int a2);
// [0xcfab40] (214 bytes) void std::__adjust_heap<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int,std::allocator<unsigned int>>>,int,unsigned int>(__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int,std::allocator<unsigned int>>>,int,int,unsigned int)
// unsigned int std::__adjust_heap<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,int,unsigned int>( int a1, int a2, int a3, unsigned int a4);
// [0xcfac20] (920 bytes) void std::__introsort_loop<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int,std::allocator<unsigned int>>>,int>(__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int,std::allocator<unsigned int>>>,__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int,std::allocator<unsigned int>>>,int)
// int std::__introsort_loop<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,int>( char *a1, char *a2, int a3);
// [0xcfafc0] (949 bytes) sub_CFAFC0
// char *sub_CFAFC0();
// [0xcfc890] (24 bytes) sub_CFC890
// int sub_CFC890(int a1);
// [0xcfc8b0] (24 bytes) sub_CFC8B0
// int sub_CFC8B0(int a1);
// [0xcfc8d0] (24 bytes) sub_CFC8D0
// int sub_CFC8D0(int a1);
// [0xcfc8f0] (24 bytes) sub_CFC8F0
// int sub_CFC8F0(int a1);
// [0xcfc910] (12 bytes) sub_CFC910
// int sub_CFC910();
// [0xcfc920] (12 bytes) sub_CFC920
// int sub_CFC920();
// [0xcfc930] (12 bytes) sub_CFC930
// int sub_CFC930();
// [0xcfc950] (42 bytes) sub_CFC950
// void sub_CFC950(glitch::collada::CColladaFactoryWrapperBase *a1);
// [0xcfdad0] (34 bytes) sub_CFDAD0
// int sub_CFDAD0(glitch::core *a1);
// [0xcfdf90] (298 bytes) sub_CFDF90
// int sub_CFDF90(unsigned int a1, float a2, __m128d a3);
// [0xcfe0c0] (371 bytes) sub_CFE0C0
// void sub_CFE0C0(int a1, uint32_t *a2);
// [0xcfe240] (774 bytes) sub_CFE240
// int *sub_CFE240(int *result, uint8_t *a2);
// [0xcfe550] (103 bytes) sub_CFE550
// int *sub_CFE550(int *result);
// [0xcfe5c0] (563 bytes) sub_CFE5C0
// float *sub_CFE5C0(float *result, float *a2);
// [0xcfe800] (186 bytes) sub_CFE800
// int sub_CFE800(int a1, uint32_t *a2, float a3, int *a4);
// [0xcfe8c0] (164 bytes) sub_CFE8C0
// int sub_CFE8C0(int a1, uint32_t *a2, float a3, int *a4);
// [0xcfe970] (186 bytes) sub_CFE970
// int sub_CFE970(int a1, uint32_t *a2, float a3, int *a4);
// [0xcfea30] (291 bytes) sub_CFEA30
// int sub_CFEA30(uint32_t *a1, int *a2, float a3);
// [0xcfeb60] (64 bytes) sub_CFEB60
// void sub_CFEB60(glitch::collada::CColladaFactoryWrapperBase *a1);
// [0xcfecc0] (401 bytes) sub_CFECC0
// int *sub_CFECC0(int *a1, int *a2);
// [0xcfee60] (462 bytes) sub_CFEE60
// int sub_CFEE60(int *a1, int a2, int a3);
// [0xcff030] (356 bytes) sub_CFF030
// void sub_CFF030(int a1, uint32_t *a2);
// [0xcff380] (303 bytes) sub_CFF380
// int sub_CFF380(int *a1);
// [0xcff4b0] (341 bytes) sub_CFF4B0
// int *sub_CFF4B0(uint32_t *a1, unsigned int a2);
// [0xcff610] (266 bytes) sub_CFF610
// int sub_CFF610(int a1);
// [0xcff720] (332 bytes) sub_CFF720
// int sub_CFF720(int a1, unsigned int a2, uint32_t *a3);
// [0xcffc10] (143 bytes) sub_CFFC10
// uint32_t *sub_CFFC10(uint32_t *result);
// [0xd01c90] (155 bytes) sub_D01C90
// char *sub_D01C90(char *a1, char *a2, char *a3);
// [0xd01de0] (215 bytes) sub_D01DE0
// int *sub_D01DE0(int *a1, int a2, int a3, int a4, uint32_t *a5);
// [0xd01fd0] (326 bytes) sub_D01FD0
// int sub_D01FD0(int a1, uint32_t *a2, unsigned int *a3);
// [0xd039d0] (777 bytes) sub_D039D0
// int sub_D039D0( volatile int32_t ***a1, volatile int32_t **a2, volatile int32_t **a3);
// [0xd03d90] (86 bytes) sub_D03D90
// int sub_D03D90();
// [0xd043c0] (170 bytes) sub_D043C0
// int sub_D043C0(int a1);
// [0xd04c00] (2581 bytes) sub_D04C00
// int sub_D04C00(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, char a8);
// [0xd20290] (4951 bytes) sub_D20290
// int sub_D20290( int a1, glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> **a2, uint16_t a3, uint32_t *a4, int a5);
// [0xd21cf0] (4887 bytes) sub_D21CF0
// int sub_D21CF0( int a1, glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> **a2, uint16_t a3, uint32_t *a4, int a5);
// [0xd33fe0] (791 bytes) sub_D33FE0
// int sub_D33FE0(int a1, int *a2, int *a3);
// [0xd34cc0] (352 bytes) sub_D34CC0
// void sub_D34CC0();
// [0xd39ca0] (1071 bytes) void std::__introsort_loop<__gnu_cxx::__normal_iterator<glitch::collada::ps::IForce **,std::vector<glitch::collada::ps::IForce *,glitch::core::SAllocator<glitch::collada::ps::IForce *,(glitch::memory::E_MEMORY_HINT)0>>>,int,glitch::collada::ps::SSortPriorityForce>(__gnu_cxx::__normal_iterator<glitch::collada::ps::IForce **,std::vector<glitch::collada::ps::IForce *,glitch::core::SAllocator<glitch::collada::ps::IForce *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::IForce **,std::vector<glitch::collada::ps::IForce *,glitch::core::SAllocator<glitch::collada::ps::IForce *,(glitch::memory::E_MEMORY_HINT)0>>>,int,glitch::collada::ps::SSortPriorityForce)
// int std::__introsort_loop<__gnu_cxx::__normal_iterator<glitch::collada::ps::IForce **,std::vector<glitch::collada::ps::IForce *,glitch::core::SAllocator<glitch::collada::ps::IForce *,(glitch::memory::E_MEMORY_HINT)0>>>,int,glitch::collada::ps::SSortPriorityForce>(;
// [0xd3a0d0] (1144 bytes) void std::__introsort_loop<__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,int,glitch::collada::ps::SAlphaSort>(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,int,glitch::collada::ps::SAlphaSort)
// int std::__introsort_loop<__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,int,glitch::collada::ps::SAlphaSort>(;
// [0xd3a550] (1058 bytes) void std::__introsort_loop<__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,int,glitch::collada::ps::SAgeSort>(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,int,glitch::collada::ps::SAgeSort)
// int std::__introsort_loop<__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,int,glitch::collada::ps::SAgeSort>(;
// [0xd3b720] (169 bytes) void std::__insertion_sort<__gnu_cxx::__normal_iterator<glitch::collada::ps::IForce **,std::vector<glitch::collada::ps::IForce *,glitch::core::SAllocator<glitch::collada::ps::IForce *,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::collada::ps::SSortPriorityForce>(__gnu_cxx::__normal_iterator<glitch::collada::ps::IForce **,std::vector<glitch::collada::ps::IForce *,glitch::core::SAllocator<glitch::collada::ps::IForce *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::IForce **,std::vector<glitch::collada::ps::IForce *,glitch::core::SAllocator<glitch::collada::ps::IForce *,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::collada::ps::SSortPriorityForce)
// void std::__insertion_sort<__gnu_cxx::__normal_iterator<glitch::collada::ps::IForce **,std::vector<glitch::collada::ps::IForce *,glitch::core::SAllocator<glitch::collada::ps::IForce *,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::collada::ps::SSortPriorityForce>(;
// [0xd3b7d0] (189 bytes) void std::__insertion_sort<__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::collada::ps::SAlphaSort>(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::collada::ps::SAlphaSort)
// void std::__insertion_sort<__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::collada::ps::SAlphaSort>(;
// [0xd3b890] (173 bytes) void std::__insertion_sort<__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::collada::ps::SAgeSort>(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::collada::ps::SAgeSort)
// void std::__insertion_sort<__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::collada::ps::SAgeSort>(;
// [0xd3df30] (2389 bytes) sub_D3DF30
// int sub_D3DF30();
// [0xd3fd80] (67 bytes) sub_D3FD80
// int sub_D3FD80(int a1);
// [0xd40a10] (358 bytes) sub_D40A10
// void sub_D40A10(uint32_t *a1, int a2, int a3, char *a4);
// [0xd40c80] (29 bytes) sub_D40C80
// int sub_D40C80(int result, int a2, int a3, int a4, int16_t a5);
// [0xd40ca0] (29 bytes) sub_D40CA0
// int sub_D40CA0(int result, int a2, int a3, int a4, int16_t a5);
// [0xd40cc0] (28 bytes) sub_D40CC0
// uint32_t *sub_D40CC0(uint32_t *result, int a2, int a3, int a4, int a5);
// [0xd40ce0] (28 bytes) sub_D40CE0
// uint32_t *sub_D40CE0(uint32_t *result, int a2, int a3, int a4, int a5);
// [0xd40d00] (384 bytes) sub_D40D00
// void *sub_D40D00(char **a1, int *a2);
// [0xd40e80] (30 bytes) sub_D40E80
// int sub_D40E80(int result, int a2);
// [0xd40ea0] (1115 bytes) sub_D40EA0
// int *sub_D40EA0(int *result, int a2, unsigned int a3, uint8_t *a4);
// [0xd41300] (501 bytes) sub_D41300
// bool sub_D41300(int a1, uint32_t *a2, float a3, int *a4, float *a5, int a6);
// [0xd41500] (566 bytes) sub_D41500
// bool sub_D41500(int a1, uint32_t *a2, float a3, int *a4, float *a5, int a6);
// [0xd41740] (539 bytes) sub_D41740
// bool sub_D41740(int a1, uint32_t *a2, float a3, int *a4, float *a5, int a6);
// [0xd41960] (391 bytes) sub_D41960
// char sub_D41960(uint32_t *a1, int *a2, float a3, float *a4, int a5);
// [0xd41af0] (886 bytes) sub_D41AF0
// int *sub_D41AF0(int *result, char *a2, unsigned int a3, size_t *a4);
// [0xd41e70] (103 bytes) sub_D41E70
// int *sub_D41E70(int *result);
// [0xd42080] (380 bytes) sub_D42080
// void sub_D42080(int a1, uint32_t *a2);
// [0xd42200] (341 bytes) sub_D42200
// int *sub_D42200(uint32_t *a1, unsigned int a2);
// [0xd42360] (266 bytes) sub_D42360
// int sub_D42360(int a1);
// [0xd42470] (714 bytes) sub_D42470
// char *sub_D42470(char *result, int a2);
// [0xd43410] (143 bytes) sub_D43410
// uint32_t *sub_D43410(uint32_t *result);
// [0xd434a0] (357 bytes) sub_D434A0
// int sub_D434A0(int a1, uint32_t *a2, char a3);
// [0xd44f20] (2073 bytes) sub_D44F20
// uint32_t *sub_D44F20(uint32_t *a1, float *a2, float a3, char a4);
// [0xd45970] (58 bytes) sub_D45970
// uint32_t *sub_D45970(uint32_t *a1, uint32_t *a2, uint32_t *a3);
// [0xd45ad0] (215 bytes) sub_D45AD0
// int *sub_D45AD0(int *a1, int a2, int a3, int a4, uint32_t *a5);
// [0xd45e50] (114 bytes) sub_D45E50
// uint32_t *sub_D45E50(uint32_t *a1, uint32_t *a2, uint32_t *a3);
// [0xd45f20] (82 bytes) sub_D45F20
// uint32_t *sub_D45F20(uint32_t **a1, uint32_t **a2, uint32_t *a3);
// [0xd45f80] (326 bytes) sub_D45F80
// int sub_D45F80(int a1, uint32_t *a2, unsigned int *a3);
