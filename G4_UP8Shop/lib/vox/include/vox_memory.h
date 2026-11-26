// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bbee0c):
//   ../../../../../lib/vox/include/vox_memory.h
// Referenced by 119 function(s) in libGangstar4.so

#pragma once

// ============================================================================
// Referencing Function: 0xb68390 .. 0xb68536 (422 bytes)
// Symbol:               sub_B68390
// Demangled:            sub_B68390
// ============================================================================
/*
size_t sub_B68390(int *a1, uint32_t *a2)
{
  char *src;
  int v4;
  size_t result;
  int v6;
  unsigned int v7;
  uint32_t *v8;
  char *v9;
  char *v10;
  uint32_t *v11;
  char *v12;
  char *v13;
  uint32_t *v14;
  int v15;
  unsigned int v17;
  int v18;
  size_t v19;

  src = (char *)a1[1];
  if ( src == (char *)a1[2] )
  {
    v7 = (int)&src[-*a1] >> 2;
    v19 = 4;
    if ( v7 != 0 )
    {
      v19 = 0xFFFFFFFC;
      if ( v7 <= 2 * v7 )
      {
        v15 = 8 * v7;
        if ( 2 * v7 > 0x3FFFFFFF )
          v15 = -4;
        v19 = v15;
      }
    }
    v18 = VoxAllocInternal(v19, 0, (int)"../../../../../lib/vox/include/vox_memory.h", (int)"internal_new", 181);
    v17 = v18 + 4;
    v8 = (uint32_t *)(v18 + 4 * v7);
    if ( v8 != nullptr )
      *v8 = *a2;
    v9 = (char *)*a1;
    if ( src != (char *)*a1 )
    {
      v10 = (char *)*a1;
      v11 = (uint32_t *)v18;
      do
      {
        if ( v11 != nullptr )
          *v11 = *(uint32_t *)v10;
        v10 += 4;
        ++v11;
      }
      while ( src != v10 );
      v17 = v18 + 4 * ((unsigned int)(src - (v9 + 4)) >> 2) + 8;
    }
    v12 = (char *)a1[1];
    if ( src != v12 )
    {
      v13 = src;
      v14 = (uint32_t *)v17;
      do
      {
        if ( v14 != nullptr )
          *v14 = *(uint32_t *)v13;
        v13 += 4;
        ++v14;
      }
      while ( v12 != v13 );
      v17 += 4 * ((unsigned int)(v12 - (src + 4)) >> 2) + 4;
    }
    if ( *a1 != 0 )
      VoxFreeInternal((void *)*a1);
    *a1 = v18;
    a1[1] = v17;
    a1[2] = v19 + v18;
    return v19 + v18;
  }
  else
  {
    v4 = 0;
    if ( src != nullptr )
    {
      *(uint32_t *)src = *((uint32_t *)src - 1);
      v4 = a1[1];
    }
    a1[1] = v4 + 4;
    result = (v4 - 4 - (int)src) >> 2;
    v6 = *a2;
    if ( result != 0 )
      result = (size_t)memmove((void *)(v4 - 4 * result), src, 4 * result);
    *(uint32_t *)src = v6;
  }
  return result;
}

*/

// ============================================================================
// Referencing Function: 0xb685e0 .. 0xb688cf (751 bytes)
// Symbol:               sub_B685E0
// Demangled:            sub_B685E0
// ============================================================================
/*
int sub_B685E0(int a1, int a2, int *a3)
{
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  int *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  int v22;
  int v23;
  unsigned int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;

  v4 = *(uint32_t **)(a1 + 4);
  if ( v4 != *(uint32_t **)(a1 + 8) )
  {
    v5 = 0;
    if ( v4 != nullptr )
    {
      *v4 = *(v4 - 6);
      v4[1] = *(v4 - 5);
      v4[2] = *(v4 - 4);
      v4[3] = *(v4 - 3);
      v4[4] = *(v4 - 2);
      v4[5] = *(v4 - 1);
      v5 = *(uint32_t *)(a1 + 4);
    }
    v6 = v5 + 24;
    v7 = v5 - 24;
    *(uint32_t *)(a1 + 4) = v6;
    v26 = *a3;
    v8 = -1431655765 * ((v7 - a2) >> 3);
    v27 = a3[1];
    v28 = a3[2];
    v29 = a3[3];
    v30 = a3[4];
    v31 = a3[5];
    v9 = v7;
    if ( v8 > 0 )
    {
      while ( 1 )
      {
        v9 -= 24;
        --v8;
        *(uint32_t *)v7 = *(uint32_t *)v9;
        *(uint32_t *)(v7 + 4) = *(uint32_t *)(v9 + 4);
        *(uint32_t *)(v7 + 8) = *(uint32_t *)(v9 + 8);
        *(uint32_t *)(v7 + 12) = *(uint32_t *)(v9 + 12);
        *(uint32_t *)(v7 + 16) = *(uint32_t *)(v9 + 16);
        *(uint8_t *)(v7 + 20) = *(uint8_t *)(v9 + 20);
        if ( v8 == 0 )
          break;
        v7 -= 24;
      }
    }
    *(uint32_t *)a2 = v26;
    *(uint32_t *)(a2 + 4) = v27;
    *(uint32_t *)(a2 + 8) = v28;
    *(uint32_t *)(a2 + 12) = v29;
    *(uint32_t *)(a2 + 16) = v30;
    *(uint8_t *)(a2 + 20) = v31;
    return (uint8_t)v31;
  }
  v11 = *(uint32_t **)a1;
  v12 = -1431655765 * (((int)v4 - *(uint32_t *)a1) >> 3);
  if ( v12 != 0 )
  {
    v13 = 2 * v12;
    if ( v12 > 2 * v12 || v13 > 0xAAAAAAA )
    {
      v25 = -16;
      v14 = -1431655765 * ((a2 - (int)v11) >> 3);
    }
    else
    {
      v25 = 48 * v12;
      v14 = -1431655765 * ((a2 - (int)v11) >> 3);
      if ( v13 == 0 )
      {
        v24 = 24;
        v23 = 0;
        goto LABEL_13;
      }
    }
  }
  else
  {
    v25 = 24;
    v14 = -1431655765 * ((a2 - (int)v11) >> 3);
  }
  v22 = a2;
  v23 = VoxAllocInternal(v25, 0, (int)"../../../../../lib/vox/include/vox_memory.h", (int)"internal_new", 181);
  v24 = v23 + 24;
  a2 = v22;
LABEL_13:
  v15 = (int *)(v23 + 24 * v14);
  if ( v15 != nullptr )
  {
    *v15 = *a3;
    v15[1] = a3[1];
    v15[2] = a3[2];
    v15[3] = a3[3];
    v15[4] = a3[4];
    v15[5] = a3[5];
  }
  v16 = *(uint32_t **)a1;
  if ( a2 != *(uint32_t *)a1 )
  {
    v17 = *(uint32_t **)a1;
    v18 = (uint32_t *)v23;
    do
    {
      if ( v18 != nullptr )
      {
        *v18 = *v17;
        v18[1] = v17[1];
        v18[2] = v17[2];
        v18[3] = v17[3];
        v18[4] = v17[4];
        v18[5] = v17[5];
      }
      v17 += 6;
      v18 += 6;
    }
    while ( (uint32_t *)a2 != v17 );
    v24 = v23 + 8 * ((unsigned int)(a2 - (uint32_t)(v16 + 6)) >> 3) + 48;
  }
  v19 = *(uint32_t **)(a1 + 4);
  if ( (uint32_t *)a2 != v19 )
  {
    v20 = (uint32_t *)a2;
    v21 = (uint32_t *)v24;
    do
    {
      if ( v21 != nullptr )
      {
        *v21 = *v20;
        v21[1] = v20[1];
        v21[2] = v20[2];
        v21[3] = v20[3];
        v21[4] = v20[4];
        v21[5] = v20[5];
      }
      v20 += 6;
      v21 += 6;
    }
    while ( v19 != v20 );
    v24 += 8 * (((unsigned int)v19 - a2 - 24) >> 3) + 24;
  }
  if ( *(uint32_t *)a1 != 0 )
    VoxFreeInternal(*(void **)a1);
  *(uint32_t *)a1 = v23;
  *(uint32_t *)(a1 + 4) = v24;
  *(uint32_t *)(a1 + 8) = v25 + v23;
  return v25 + v23;
}

*/

// ============================================================================
// Referencing Function: 0xb873d0 .. 0xb87448 (120 bytes)
// Symbol:               sub_B873D0
// Demangled:            sub_B873D0
// ============================================================================

// ============================================================================
// Referencing Function: 0xb87570 .. 0xb87829 (697 bytes)
// Symbol:               sub_B87570
// Demangled:            sub_B87570
// ============================================================================

// ============================================================================
// Referencing Function: 0xb87da0 .. 0xb87e18 (120 bytes)
// Symbol:               sub_B87DA0
// Demangled:            sub_B87DA0
// ============================================================================

// ============================================================================
// Referencing Function: 0xb88e00 .. 0xb8955f (1887 bytes)
// Symbol:               sub_B88E00
// Demangled:            sub_B88E00
// ============================================================================

// ============================================================================
// Referencing Function: 0xb8e9f0 .. 0xb8ec0f (543 bytes)
// Symbol:               sub_B8E9F0
// Demangled:            sub_B8E9F0
// ============================================================================

// ============================================================================
// Referencing Function: 0xb8ec50 .. 0xb8edf1 (417 bytes)
// Symbol:               sub_B8EC50
// Demangled:            sub_B8EC50
// ============================================================================

// ============================================================================
// Referencing Function: 0xb8ee40 .. 0xb8f043 (515 bytes)
// Symbol:               sub_B8EE40
// Demangled:            sub_B8EE40
// ============================================================================

// ============================================================================
// Referencing Function: 0xb8f050 .. 0xb8f58e (1342 bytes)
// Symbol:               sub_B8F050
// Demangled:            sub_B8F050
// ============================================================================

// ============================================================================
// Referencing Function: 0xb8f5d0 .. 0xb8f726 (342 bytes)
// Symbol:               sub_B8F5D0
// Demangled:            sub_B8F5D0
// ============================================================================

// ============================================================================
// Referencing Function: 0xb8f730 .. 0xb8fd30 (1536 bytes)
// Symbol:               sub_B8F730
// Demangled:            sub_B8F730
// ============================================================================

// ============================================================================
// Referencing Function: 0xb8fd30 .. 0xb8fe8e (350 bytes)
// Symbol:               sub_B8FD30
// Demangled:            sub_B8FD30
// ============================================================================

// ============================================================================
// Referencing Function: 0xb8fe90 .. 0xb90072 (482 bytes)
// Symbol:               sub_B8FE90
// Demangled:            sub_B8FE90
// ============================================================================

// ============================================================================
// Referencing Function: 0xb900f0 .. 0xb9018a (154 bytes)
// Symbol:               sub_B900F0
// Demangled:            sub_B900F0
// ============================================================================

// ============================================================================
// Referencing Function: 0xb90190 .. 0xb9022a (154 bytes)
// Symbol:               sub_B90190
// Demangled:            sub_B90190
// ============================================================================

// ============================================================================
// Referencing Function: 0xb90460 .. 0xb905f6 (406 bytes)
// Symbol:               sub_B90460
// Demangled:            sub_B90460
// ============================================================================

// ============================================================================
// Referencing Function: 0xb91010 .. 0xb9113b (299 bytes)
// Symbol:               sub_B91010
// Demangled:            sub_B91010
// ============================================================================

// ============================================================================
// Referencing Function: 0xb91140 .. 0xb911df (159 bytes)
// Symbol:               sub_B91140
// Demangled:            sub_B91140
// ============================================================================

// ============================================================================
// Referencing Function: 0xb91bc0 .. 0xb9249b (2267 bytes)
// Symbol:               sub_B91BC0
// Demangled:            sub_B91BC0
// ============================================================================

// ============================================================================
// Referencing Function: 0xbaf350 .. 0xbb1600 (8880 bytes)
// Symbol:               sub_BAF350
// Demangled:            sub_BAF350
// ============================================================================

// ============================================================================
// Referencing Function: 0xbdc000 .. 0xbdc252 (594 bytes)
// Symbol:               _ZNSt6vectorIN3vox2vs15VSEnvelopePointENS0_10SAllocatorIS2_LNS0_10VoxMemHintE0EEEE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S6_EERKS2_
// Demangled:            std::vector<vox::vs::VSEnvelopePoint,vox::SAllocator<vox::vs::VSEnvelopePoint,(vox::VoxMemHint)0>>::_M_insert_aux(__gnu_cxx::__normal_iterator<vox::vs::VSEnvelopePoint*,std::vector<vox::vs::VSEnvelopePoint,vox::SAllocator<vox::vs::VSEnvelopePoint,(vox::VoxMemHint)0>>>,vox::vs::VSEnvelopePoint const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0xbdc260 .. 0xbdc57b (795 bytes)
// Symbol:               _ZNSt6vectorIN3vox2vs14VSAudioSegmentENS0_10SAllocatorIS2_LNS0_10VoxMemHintE0EEEE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S6_EERKS2_
// Demangled:            std::vector<vox::vs::VSAudioSegment,vox::SAllocator<vox::vs::VSAudioSegment,(vox::VoxMemHint)0>>::_M_insert_aux(__gnu_cxx::__normal_iterator<vox::vs::VSAudioSegment*,std::vector<vox::vs::VSAudioSegment,vox::SAllocator<vox::vs::VSAudioSegment,(vox::VoxMemHint)0>>>,vox::vs::VSAudioSegment const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0xfcd980 .. 0xfcdf19 (1433 bytes)
// Symbol:               _ZN3vox2vs12VSBufferPool12CreateBufferEi
// Demangled:            vox::vs::VSBufferPool::CreateBuffer(int)
// ============================================================================

// ============================================================================
// Referencing Function: 0xfcf9a0 .. 0xfd036a (2506 bytes)
// Symbol:               sub_FCF9A0
// Demangled:            sub_FCF9A0
// ============================================================================

// ============================================================================
// Referencing Function: 0xfd0920 .. 0xfd0c02 (738 bytes)
// Symbol:               _ZN3vox16AmbienceInternal14GetRandomLabelEv
// Demangled:            vox::AmbienceInternal::GetRandomLabel(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0xfd0c10 .. 0xfd0dfa (490 bytes)
// Symbol:               _ZN3vox16AmbienceInternal11ResetOnStopEv
// Demangled:            vox::AmbienceInternal::ResetOnStop(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0xfd16f0 .. 0xfd1ac7 (983 bytes)
// Symbol:               _ZN3vox16AmbienceInternalC2EPNS_14AmbienceParamsE
// Demangled:            vox::AmbienceInternal::AmbienceInternal(vox::AmbienceParams *)
// ============================================================================

// ============================================================================
// Referencing Function: 0xfd3540 .. 0xfd3d1c (2012 bytes)
// Symbol:               _ZNSt8_Rb_treeIPcSt4pairIKS0_PN3vox18AmbienceFileParamsEESt10_Select1stIS6_ENS3_15c8stringcompareENS3_10SAllocatorIS6_LNS3_10VoxMemHintE0EEEE17_M_insert_unique_ESt23_Rb_tree_const_iteratorIS6_ERKS6_
// Demangled:            std::_Rb_tree<char *,std::pair<char * const,vox::AmbienceFileParams *>,std::_Select1st<std::pair<char * const,vox::AmbienceFileParams *>>,vox::c8stringcompare,vox::SAllocator<std::pair<char * const,vox::AmbienceFileParams *>,(vox::VoxMemHint)0>>::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<char * const,vox::AmbienceFileParams *>>,std::pair<char * const,vox::AmbienceFileParams *> const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0xfdbf60 .. 0xfdc383 (1059 bytes)
// Symbol:               _ZN3vox14MiniBusManagerC2Ev
// Demangled:            vox::MiniBusManager::MiniBusManager(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0xfdc490 .. 0xfdc5a9 (281 bytes)
// Symbol:               _ZN3vox14MiniBusManager24AttachDataGeneratorToBusENS_7minibus2IdEPNS_29MinibusDataGeneratorInterfaceE
// Demangled:            vox::MiniBusManager::AttachDataGeneratorToBus(vox::minibus::Id,vox::MinibusDataGeneratorInterface *)
// ============================================================================

// ============================================================================
// Referencing Function: 0xfdc920 .. 0xfdca86 (358 bytes)
// Symbol:               _ZN3vox14MiniBusManager24UpdateDataGeneratorsListEv
// Demangled:            vox::MiniBusManager::UpdateDataGeneratorsList(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0xfea720 .. 0xfeb1f8 (2776 bytes)
// Symbol:               _ZN3vox13DecoderNative28CreateSegmentsInfoContainersEii
// Demangled:            vox::DecoderNative::CreateSegmentsInfoContainers(int,int)
// ============================================================================

// ============================================================================
// Referencing Function: 0xfeb300 .. 0xfebfde (3294 bytes)
// Symbol:               _ZN3vox13DecoderNative26CreateTransitionsContainerEi
// Demangled:            vox::DecoderNative::CreateTransitionsContainer(int)
// ============================================================================

// ============================================================================
// Referencing Function: 0xfece10 .. 0xfed115 (773 bytes)
// Symbol:               _ZN3vox19DecoderNativeCursor18IsStateChangeValidEPKc
// Demangled:            vox::DecoderNativeCursor::IsStateChangeValid(char const*)
// ============================================================================

// ============================================================================
// Referencing Function: 0xfed120 .. 0xfed6b6 (1430 bytes)
// Symbol:               _ZN3vox19DecoderNativeCursor22SetImplicitSegmentCuesEv
// Demangled:            vox::DecoderNativeCursor::SetImplicitSegmentCues(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0xfed6c0 .. 0xfed9ec (812 bytes)
// Symbol:               _ZN3vox19DecoderNativeCursor24SetInteractiveMusicStateEPKc
// Demangled:            vox::DecoderNativeCursor::SetInteractiveMusicState(char const*)
// ============================================================================

// ============================================================================
// Referencing Function: 0xfedb60 .. 0xfef254 (5876 bytes)
// Symbol:               _ZN3vox19DecoderNativeCursor9ParseFileEv
// Demangled:            vox::DecoderNativeCursor::ParseFile(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0xfefd30 .. 0xff0262 (1330 bytes)
// Symbol:               _ZNSt8_Rb_treeISbIcSt11char_traitsIcEN3vox10SAllocatorIcLNS2_10VoxMemHintE0EEEESt4pairIKS6_iESt10_Select1stIS9_ENS2_13StringCompareENS3_IS9_LS4_0EEEE16_M_insert_uniqueERKS9_
// Demangled:            std::_Rb_tree<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>>,std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>>,vox::StringCompare,vox::SAllocator<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>,(vox::VoxMemHint)0>>::_M_insert_unique(std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int> const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0xff0270 .. 0xff1180 (3856 bytes)
// Symbol:               _ZNSt8_Rb_treeISbIcSt11char_traitsIcEN3vox10SAllocatorIcLNS2_10VoxMemHintE0EEEESt4pairIKS6_iESt10_Select1stIS9_ENS2_13StringCompareENS3_IS9_LS4_0EEEE17_M_insert_unique_ESt23_Rb_tree_const_iteratorIS9_ERKS9_
// Demangled:            std::_Rb_tree<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>>,std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>>,vox::StringCompare,vox::SAllocator<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>,(vox::VoxMemHint)0>>::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>>,std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int> const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0xff1690 .. 0xff19ae (798 bytes)
// Symbol:               _ZN3vox11RandomGroup8SetStateERS0_
// Demangled:            vox::RandomGroup::SetState(vox::RandomGroup&)
// ============================================================================

// ============================================================================
// Referencing Function: 0xff19b0 .. 0xff1ca0 (752 bytes)
// Symbol:               _ZN3vox11RandomGroup8SetStateEPNS_16RandomGroupStateE
// Demangled:            vox::RandomGroup::SetState(vox::RandomGroupState *)
// ============================================================================

// ============================================================================
// Referencing Function: 0xff1ca0 .. 0xff1f30 (656 bytes)
// Symbol:               _ZN3vox11RandomGroup18SetToPreviousStateEv
// Demangled:            vox::RandomGroup::SetToPreviousState(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0xff2110 .. 0xff245d (845 bytes)
// Symbol:               _ZN3vox11RandomGroup10AddElementEPNS_18RandomGroupElementE
// Demangled:            vox::RandomGroup::AddElement(vox::RandomGroupElement *)
// ============================================================================

// ============================================================================
// Referencing Function: 0xff2500 .. 0xff2780 (640 bytes)
// Symbol:               _ZN3vox11RandomGroup5ResetEi
// Demangled:            vox::RandomGroup::Reset(int)
// ============================================================================

// ============================================================================
// Referencing Function: 0xff2780 .. 0xff2c12 (1170 bytes)
// Symbol:               _ZN3vox11RandomGroupC2ERS0_
// Demangled:            vox::RandomGroup::RandomGroup(vox::RandomGroup&)
// ============================================================================

// ============================================================================
// Referencing Function: 0xff2c20 .. 0xff2f37 (791 bytes)
// Symbol:               _ZN3vox11RandomGroup23GetGroupElementPositionEv
// Demangled:            vox::RandomGroup::GetGroupElementPosition(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0xff2fb0 .. 0xff31de (558 bytes)
// Symbol:               _ZN3vox15SequentialGroupC2ERS0_
// Demangled:            vox::SequentialGroup::SequentialGroup(vox::SequentialGroup&)
// ============================================================================

// ============================================================================
// Referencing Function: 0xff31e0 .. 0xff3359 (377 bytes)
// Symbol:               _ZN3vox15SequentialGroup10AddElementEi
// Demangled:            vox::SequentialGroup::AddElement(int)
// ============================================================================

// ============================================================================
// Referencing Function: 0xff33d0 .. 0xff38ed (1309 bytes)
// Symbol:               _ZN3vox14NativePlaylistC2ERS0_
// Demangled:            vox::NativePlaylist::NativePlaylist(vox::NativePlaylist&)
// ============================================================================

// ============================================================================
// Referencing Function: 0xff39f0 .. 0xff3c3d (589 bytes)
// Symbol:               _ZN3vox14NativePlaylist8AddGroupEPNS_10GroupInfosE
// Demangled:            vox::NativePlaylist::AddGroup(vox::GroupInfos *)
// ============================================================================

// ============================================================================
// Referencing Function: 0xff3c40 .. 0xff3ee5 (677 bytes)
// Symbol:               _ZN3vox14NativePlaylist18AddPlaylistElementEPNS_20PlaylistElementInfosE
// Demangled:            vox::NativePlaylist::AddPlaylistElement(vox::PlaylistElementInfos *)
// ============================================================================

// ============================================================================
// Referencing Function: 0xff6ca0 .. 0xff715b (1211 bytes)
// Symbol:               _ZN3vox19VoxNativeSubDecoder25UpdateCurrentSegmentStateEPNS_14TransitionRuleEb
// Demangled:            vox::VoxNativeSubDecoder::UpdateCurrentSegmentState(vox::TransitionRule *,bool)
// ============================================================================

// ============================================================================
// Referencing Function: 0xff7160 .. 0xff73a5 (581 bytes)
// Symbol:               _ZN3vox19VoxNativeSubDecoder23UpdateDyingSegmentStateEPNS_14TransitionRuleE
// Demangled:            vox::VoxNativeSubDecoder::UpdateDyingSegmentState(vox::TransitionRule *)
// ============================================================================

// ============================================================================
// Referencing Function: 0xff73b0 .. 0xff7845 (1173 bytes)
// Symbol:               _ZN3vox19VoxNativeSubDecoder21UpdateOldSegmentStateEPNS_14TransitionRuleE
// Demangled:            vox::VoxNativeSubDecoder::UpdateOldSegmentState(vox::TransitionRule *)
// ============================================================================

// ============================================================================
// Referencing Function: 0xffa8c0 .. 0xffafb0 (1776 bytes)
// Symbol:               _ZN3vox22VoxNativeSubDecoderMPC20CreateSegmentDecoderEPNS_12SegmentStateE
// Demangled:            vox::VoxNativeSubDecoderMPC::CreateSegmentDecoder(vox::SegmentState *)
// ============================================================================

// ============================================================================
// Referencing Function: 0xffe9c0 .. 0xffecae (750 bytes)
// Symbol:               sub_FFE9C0
// Demangled:            sub_FFE9C0
// ============================================================================

// ============================================================================
// Referencing Function: 0x10095a0 .. 0x1009a8c (1260 bytes)
// Symbol:               _ZN3vox19FileSystemInterface11_AddArchiveEPKcbbbNS_11FileArchive9FileRangeES2_
// Demangled:            vox::FileSystemInterface::_AddArchive(char const*,bool,bool,bool,vox::FileArchive::FileRange,char const*)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1009a90 .. 0x100a1ff (1903 bytes)
// Symbol:               _ZN3vox19FileSystemInterface13PushDirectoryEPKc
// Demangled:            vox::FileSystemInterface::PushDirectory(char const*)
// ============================================================================

// ============================================================================
// Referencing Function: 0x100a200 .. 0x100ab33 (2355 bytes)
// Symbol:               _ZN3vox19FileSystemInterface17_AddFolderArchiveEPKciPS2_bbS2_
// Demangled:            vox::FileSystemInterface::_AddFolderArchive(char const*,int,char const**,bool,bool,char const*)
// ============================================================================

// ============================================================================
// Referencing Function: 0x100ab40 .. 0x100b199 (1625 bytes)
// Symbol:               _ZN3vox19FileSystemInterface11IsDirectoryEPKcRb
// Demangled:            vox::FileSystemInterface::IsDirectory(char const*,bool &)
// ============================================================================

// ============================================================================
// Referencing Function: 0x100b540 .. 0x100b814 (724 bytes)
// Symbol:               _ZN3vox13FileInterfaceC2EPvPKc
// Demangled:            vox::FileInterface::FileInterface(void *,char const*)
// ============================================================================

// ============================================================================
// Referencing Function: 0x100b900 .. 0x100bf7f (1663 bytes)
// Symbol:               _ZN3vox19FileSystemInterface16_OpenArchiveFileEPKcRNS_11FileArchive9FileRangeENS_17VoxFileAccessModeE
// Demangled:            vox::FileSystemInterface::_OpenArchiveFile(char const*,vox::FileArchive::FileRange &,vox::VoxFileAccessMode)
// ============================================================================

// ============================================================================
// Referencing Function: 0x100c960 .. 0x100d41e (2750 bytes)
// Symbol:               _ZN3vox19FileSystemInterface9_OpenFileEPKcNS_17VoxFileAccessModeE
// Demangled:            vox::FileSystemInterface::_OpenFile(char const*,vox::VoxFileAccessMode)
// ============================================================================

// ============================================================================
// Referencing Function: 0x100db10 .. 0x100f0d9 (5577 bytes)
// Symbol:               _ZN3vox16VoxFolderArchiveC1EPKciPS2_bS2_
// Demangled:            vox::VoxFolderArchive::VoxFolderArchive(char const*,int,char const**,bool,char const*)
// ============================================================================

// ============================================================================
// Referencing Function: 0x100f0e0 .. 0x100f3a7 (711 bytes)
// Symbol:               _ZNSt6vectorIcN3vox10SAllocatorIcLNS0_10VoxMemHintE0EEEE6insertIN9__gnu_cxx17__normal_iteratorIPcSbIcSt11char_traitsIcES3_EEEEEvNS7_IS8_S4_EET_SE_
// Demangled:            void std::vector<char,vox::SAllocator<char,(vox::VoxMemHint)0>>::insert<__gnu_cxx::__normal_iterator<char *,std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>>>>(__gnu_cxx::__normal_iterator<char *,std::vector<char,vox::SAllocator<char,(vox::VoxMemHint)0>>>,__gnu_cxx::__normal_iterator<char *,std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>>>,__gnu_cxx::__normal_iterator<char *,std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>>>)
// ============================================================================

// ============================================================================
// Referencing Function: 0x100f3b0 .. 0x100f67f (719 bytes)
// Symbol:               _ZNSt6vectorIcN3vox10SAllocatorIcLNS0_10VoxMemHintE0EEEE15_M_range_insertIPKcEEvN9__gnu_cxx17__normal_iteratorIPcS4_EET_SC_St20forward_iterator_tag
// Demangled:            void std::vector<char,vox::SAllocator<char,(vox::VoxMemHint)0>>::_M_range_insert<char const*>(__gnu_cxx::__normal_iterator<char *,std::vector<char,vox::SAllocator<char,(vox::VoxMemHint)0>>>,char const*,char const*,std::forward_iterator_tag)
// ============================================================================

// ============================================================================
// Referencing Function: 0x10117f0 .. 0x1011f8d (1949 bytes)
// Symbol:               sub_10117F0
// Demangled:            sub_10117F0
// ============================================================================

// ============================================================================
// Referencing Function: 0x1011f90 .. 0x1012c2c (3228 bytes)
// Symbol:               sub_1011F90
// Demangled:            sub_1011F90
// ============================================================================

// ============================================================================
// Referencing Function: 0x1012c30 .. 0x10137db (2987 bytes)
// Symbol:               _ZN3vox10CZipReader15extractFilenameEPNS_13SZipFileEntryE
// Demangled:            vox::CZipReader::extractFilename(vox::SZipFileEntry *)
// ============================================================================

// ============================================================================
// Referencing Function: 0x10137e0 .. 0x10144b2 (3282 bytes)
// Symbol:               _ZN3vox10CZipReader15scanLocalHeaderEv
// Demangled:            vox::CZipReader::scanLocalHeader(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x10144c0 .. 0x101476f (687 bytes)
// Symbol:               _ZN3vox10CZipReader22deletePathFromFilenameERSbIcSt11char_traitsIcENS_10SAllocatorIcLNS_10VoxMemHintE0EEEE
// Demangled:            vox::CZipReader::deletePathFromFilename(std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> &)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1014770 .. 0x1014e95 (1829 bytes)
// Symbol:               _ZN3vox10CZipReader11getFileInfoEPKcRiS3_
// Demangled:            vox::CZipReader::getFileInfo(char const*,int &,int &)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1014ea0 .. 0x101592e (2702 bytes)
// Symbol:               _ZN3vox10CZipReader12ImportHeaderERNS_18ZipTableSerializerE
// Demangled:            vox::CZipReader::ImportHeader(vox::ZipTableSerializer &)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1015930 .. 0x1015c4a (794 bytes)
// Symbol:               _ZN3vox10CZipReaderC1EPNS_13FileInterfaceERNS_11FileArchive9FileRangeEbbPKc
// Demangled:            vox::CZipReader::CZipReader(vox::FileInterface *,vox::FileArchive::FileRange &,bool,bool,char const*)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1015d50 .. 0x1015f84 (564 bytes)
// Symbol:               _ZNSbIcSt11char_traitsIcEN3vox10SAllocatorIcLNS1_10VoxMemHintE0EEEEaSEPKc
// Demangled:            std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>>::operator=(char const*)
// ============================================================================

// ============================================================================
// Referencing Function: 0x101a620 .. 0x101aaed (1229 bytes)
// Symbol:               _ZN3vox15VoxSoundPackXML16GetEventSoundUidEiRi
// Demangled:            vox::VoxSoundPackXML::GetEventSoundUid(int,int &)
// ============================================================================

// ============================================================================
// Referencing Function: 0x101abf0 .. 0x101aea1 (689 bytes)
// Symbol:               _ZN3vox15VoxSoundPackXML10ResetEventEi
// Demangled:            vox::VoxSoundPackXML::ResetEvent(int)
// ============================================================================

// ============================================================================
// Referencing Function: 0x101b350 .. 0x1020644 (21236 bytes)
// Symbol:               _ZN3vox12LoadXML_TinyEPcPNS_27VoxSoundPackXMLInternalDataE
// Demangled:            vox::LoadXML_Tiny(char *,vox::VoxSoundPackXMLInternalData *)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1020ab0 .. 0x1020dc1 (785 bytes)
// Symbol:               _ZNSt6vectorIN3vox11SoundXMLDefENS0_10SAllocatorIS1_LNS0_10VoxMemHintE0EEEEaSERKS5_
// Demangled:            std::vector<vox::SoundXMLDef,vox::SAllocator<vox::SoundXMLDef,(vox::VoxMemHint)0>>::operator=(std::vector<vox::SoundXMLDef,vox::SAllocator<vox::SoundXMLDef,(vox::VoxMemHint)0>> const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1020dd0 .. 0x1021125 (853 bytes)
// Symbol:               _ZN3vox11EventXMLDefaSERKS0_
// Demangled:            vox::EventXMLDef::operator=(vox::EventXMLDef const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x10211d0 .. 0x102136f (415 bytes)
// Symbol:               sub_10211D0
// Demangled:            sub_10211D0
// ============================================================================

// ============================================================================
// Referencing Function: 0x1021370 .. 0x1021424 (180 bytes)
// Symbol:               sub_1021370
// Demangled:            sub_1021370
// ============================================================================

// ============================================================================
// Referencing Function: 0x1021430 .. 0x10215d9 (425 bytes)
// Symbol:               sub_1021430
// Demangled:            sub_1021430
// ============================================================================

// ============================================================================
// Referencing Function: 0x1021e20 .. 0x1021f56 (310 bytes)
// Symbol:               _ZN3vox17VoxEngineInternal22DebugStreamSendCommandEiPKc
// Demangled:            vox::VoxEngineInternal::DebugStreamSendCommand(int,char const*)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1022980 .. 0x1022a2d (173 bytes)
// Symbol:               _ZN3vox17VoxEngineInternal21SetDataSourceToUpdateEPNS_7DataObjE
// Demangled:            vox::VoxEngineInternal::SetDataSourceToUpdate(vox::DataObj *)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1023670 .. 0x1023b7f (1295 bytes)
// Symbol:               _ZN3vox17VoxEngineInternalC2Ev
// Demangled:            vox::VoxEngineInternal::VoxEngineInternal(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x10242d0 .. 0x1024485 (437 bytes)
// Symbol:               _ZN3vox17VoxEngineInternal16SetRoutingVolumeEPKcS2_NS_22VoxDSPGeneralParameter14BusRoutingTypeEfff
// Demangled:            vox::VoxEngineInternal::SetRoutingVolume(char const*,char const*,vox::VoxDSPGeneralParameter::BusRoutingType,float,float,float)
// ============================================================================

// ============================================================================
// Referencing Function: 0x10246d0 .. 0x1024775 (165 bytes)
// Symbol:               _ZN3vox7DataObj15RegisterEmitterEx
// Demangled:            vox::DataObj::RegisterEmitter(long long)
// ============================================================================

// ============================================================================
// Referencing Function: 0x10251d0 .. 0x10257e9 (1561 bytes)
// Symbol:               _ZN3vox18HandlableContainer3AddEPNS_9HandlableE
// Demangled:            vox::HandlableContainer::Add(vox::Handlable *)
// ============================================================================

// ============================================================================
// Referencing Function: 0x10288e0 .. 0x1029184 (2212 bytes)
// Symbol:               _ZN3vox10EmitterObj17ProcessNativeDataEf
// Demangled:            vox::EmitterObj::ProcessNativeData(float)
// ============================================================================

// ============================================================================
// Referencing Function: 0x102d740 .. 0x102d8d2 (402 bytes)
// Symbol:               _ZN3vox10EmitterObj27_ResetInteractiveMusicStateEv
// Demangled:            vox::EmitterObj::_ResetInteractiveMusicState(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x102e920 .. 0x102f52a (3082 bytes)
// Symbol:               _ZN3vox10EmitterObjC2ExiiRNS_17DriverSourceParamEPNS_21DriverSourceInterfaceEPNS_22DecoderCursorInterfaceEPNS_7DataObjE
// Demangled:            vox::EmitterObj::EmitterObj(long long,int,int,vox::DriverSourceParam &,vox::DriverSourceInterface *,vox::DecoderCursorInterface *,vox::DataObj *)
// ============================================================================

// ============================================================================
// Referencing Function: 0x102fd70 .. 0x1030240 (1232 bytes)
// Symbol:               _ZN3vox10EmitterObj11ParametrizeERKNS_7emitter16CreationSettingsE
// Demangled:            vox::EmitterObj::Parametrize(vox::emitter::CreationSettings const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1030a10 .. 0x1031744 (3380 bytes)
// Symbol:               _ZN3vox10EmitterObjC2ExRKNS_7emitter16CreationSettingsEPNS_21DriverSourceInterfaceEPNS_22DecoderCursorInterfaceEPNS_7DataObjE
// Demangled:            vox::EmitterObj::EmitterObj(long long,vox::emitter::CreationSettings const&,vox::DriverSourceInterface *,vox::DecoderCursorInterface *,vox::DataObj *)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1033740 .. 0x1034bd0 (5264 bytes)
// Symbol:               _ZN3vox17VoxEngineInternal17UpdateDebugStreamEv
// Demangled:            vox::VoxEngineInternal::UpdateDebugStream(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1035600 .. 0x1035674 (116 bytes)
// Symbol:               _ZN3vox18VoxCallbackManager3AddEPNS_11VoxCallbackE
// Demangled:            vox::VoxCallbackManager::Add(vox::VoxCallback *)
// ============================================================================

// ============================================================================
// Referencing Function: 0x10356f0 .. 0x1035d6a (1658 bytes)
// Symbol:               _ZN3vox10EmitterObj9LoadAsyncEv
// Demangled:            vox::EmitterObj::LoadAsync(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1036440 .. 0x103690b (1227 bytes)
// Symbol:               _ZN3vox10EmitterObj24SetInteractiveMusicStateEPKcbb
// Demangled:            vox::EmitterObj::SetInteractiveMusicState(char const*,bool,bool)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1036fb0 .. 0x103763b (1675 bytes)
// Symbol:               _ZN3vox17VoxEngineInternal14UpdateEmittersEf
// Demangled:            vox::VoxEngineInternal::UpdateEmitters(float)
// ============================================================================

// ============================================================================
// Referencing Function: 0x10381f0 .. 0x10382f0 (256 bytes)
// Symbol:               _ZNSt6vectorIPhN3vox10SAllocatorIS0_LNS1_10VoxMemHintE0EEEE7reserveEj
// Demangled:            std::vector<unsigned char *,vox::SAllocator<unsigned char *,(vox::VoxMemHint)0>>::reserve(unsigned int)
// ============================================================================

// ============================================================================
// Referencing Function: 0x10384a0 .. 0x10386fd (605 bytes)
// Symbol:               sub_10384A0
// Demangled:            sub_10384A0
// ============================================================================

// ============================================================================
// Referencing Function: 0x1038750 .. 0x10388ef (415 bytes)
// Symbol:               _ZN3vox12PriorityBankC2ERNS_13priority_bank16CreationSettingsEPS0_
// Demangled:            vox::PriorityBank::PriorityBank(vox::priority_bank::CreationSettings &,vox::PriorityBank*)
// ============================================================================

// ============================================================================
// Referencing Function: 0x103a1f0 .. 0x103a4bf (719 bytes)
// Symbol:               _ZN3vox19PriorityBankManagerC1Ev
// Demangled:            vox::PriorityBankManager::PriorityBankManager(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x103a5a0 .. 0x103a7f1 (593 bytes)
// Symbol:               _ZN3vox19PriorityBankManager15AddPriorityBankERNS_13priority_bank16CreationSettingsE
// Demangled:            vox::PriorityBankManager::AddPriorityBank(vox::priority_bank::CreationSettings &)
// ============================================================================

// ============================================================================
// Referencing Function: 0x103a850 .. 0x103abd1 (897 bytes)
// Symbol:               _ZN3vox19PriorityBankManager15SetPriorityBankEjRNS_13priority_bank16CreationSettingsE
// Demangled:            vox::PriorityBankManager::SetPriorityBank(unsigned int,vox::priority_bank::CreationSettings &)
// ============================================================================

// ============================================================================
// Referencing Function: 0x103bca0 .. 0x103bf3c (668 bytes)
// Symbol:               _ZN3vox11StreamCFileC2EPKc
// Demangled:            vox::StreamCFile::StreamCFile(char const*)
// ============================================================================

// ============================================================================
// Referencing Function: 0x103e600 .. 0x103e891 (657 bytes)
// Symbol:               sub_103E600
// Demangled:            sub_103E600
// ============================================================================

// ============================================================================
// Referencing Function: 0x103e900 .. 0x103ea07 (263 bytes)
// Symbol:               _ZN3vox21VoxDebugStreamManager17CreateDebugStreamEv
// Demangled:            vox::VoxDebugStreamManager::CreateDebugStream(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x103ead0 .. 0x103ed34 (612 bytes)
// Symbol:               _ZN3vox21VoxDebugStreamManager17PrepareStreamListEv
// Demangled:            vox::VoxDebugStreamManager::PrepareStreamList(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x103ed40 .. 0x103f69d (2397 bytes)
// Symbol:               _ZN3vox14VoxDebugStream16UpdateComponentsEPNS_9JsonArrayE
// Demangled:            vox::VoxDebugStream::UpdateComponents(vox::JsonArray *)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1056bf0 .. 0x1057344 (1876 bytes)
// Symbol:               _ZN3vox10VoxArchiveC1EPNS_13FileInterfaceERNS_11FileArchive9FileRangeEbbbPKc
// Demangled:            vox::VoxArchive::VoxArchive(vox::FileInterface *,vox::FileArchive::FileRange &,bool,bool,bool,char const*)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1057380 .. 0x10575ad (557 bytes)
// Symbol:               _ZNSbIcSt11char_traitsIcEN3vox10SAllocatorIcLNS1_10VoxMemHintE0EEEE6assignEPKcj
// Demangled:            std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>>::assign(char const*,unsigned int)
// ============================================================================

// ============================================================================
// Referencing Function: 0x10588c0 .. 0x1058b9b (731 bytes)
// Symbol:               _ZN3vox12GroupManagerC1Ev
// Demangled:            vox::GroupManager::GroupManager(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1059da0 .. 0x105ac84 (3812 bytes)
// Symbol:               _ZNSt6vectorIN3vox5GroupENS0_10SAllocatorIS1_LNS0_10VoxMemHintE0EEEE14_M_fill_insertEN9__gnu_cxx17__normal_iteratorIPS1_S5_EEjRKS1_
// Demangled:            std::vector<vox::Group,vox::SAllocator<vox::Group,(vox::VoxMemHint)0>>::_M_fill_insert(__gnu_cxx::__normal_iterator<vox::Group*,std::vector<vox::Group,vox::SAllocator<vox::Group,(vox::VoxMemHint)0>>>,unsigned int,vox::Group const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x105d460 .. 0x105d610 (432 bytes)
// Symbol:               _ZN3vox25VoxGroupsSnapshotsManager8AddGroupEPKcS2_b
// Demangled:            vox::VoxGroupsSnapshotsManager::AddGroup(char const*,char const*,bool)
// ============================================================================

// ============================================================================
// Referencing Function: 0x105d7b0 .. 0x105d966 (438 bytes)
// Symbol:               _ZN3vox25VoxGroupsSnapshotsManager8AddGroupERNS_5GroupES2_
// Demangled:            vox::VoxGroupsSnapshotsManager::AddGroup(vox::Group &,vox::Group &)
// ============================================================================

// ============================================================================
// Referencing Function: 0x105e1d0 .. 0x105e620 (1104 bytes)
// Symbol:               _ZN3vox17VoxGroupsSnapshot15SetSnapshotDataEPKNS_10JsonObjectEPNS_12GroupManagerE
// Demangled:            vox::VoxGroupsSnapshot::SetSnapshotData(vox::JsonObject const*,vox::GroupManager *)
// ============================================================================

// ============================================================================
// Referencing Function: 0x105e620 .. 0x105e95a (826 bytes)
// Symbol:               _ZN3vox25VoxGroupsSnapshotsManager24LoadPresetsConfigurationEPKNS_9JsonArrayEPNS_12GroupManagerE
// Demangled:            vox::VoxGroupsSnapshotsManager::LoadPresetsConfiguration(vox::JsonArray const*,vox::GroupManager *)
// ============================================================================
