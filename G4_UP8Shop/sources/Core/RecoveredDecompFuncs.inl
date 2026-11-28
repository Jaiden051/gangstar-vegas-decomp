// Auto-extracted Group B C++14 implementations via scratch/extract_group_b.py
// Keep DecompForwardDecls.h / DecompTypes.h untouched; compiled cleanly inside Gangstar4 target.

// Exact .rodata SIMD constants recovered from libGangstar4.so:
alignas(16) static const uint32_t xmmword_1C7C470[4] = {4u, 1u, 2u, 1u};
alignas(16) static const uint32_t xmmword_1C7C480[4] = {0u, 0u, 0u, 0xFFFFFFFFu};
alignas(16) static const uint32_t xmmword_1C7C490[4] = {0u, 1u, 2u, 3u};
static inline uint64_t g4_m128_u64_lane(__m128 v, int i) { uint64_t a[2]; std::memcpy(a, &v, 16); return a[i]; }

// Forward declarations for Group B recovered functions:
// Forward declaration for Group C callee sub_18883F0 (defined in RecoveredGroupCFuncs.inl)
int sub_18883F0(void *a1, int a2);
int sub_656770(int *a1);
int sub_16CA950(int a1, int a2, int a3, int a4, int *a5);
int *sub_655CB0();
float * sub_654730(float *a1, float *a2, float *a3);
const char * sub_655550(int a1);
hkpConvexVerticesShape::Self * sub_16F57D0(int a1, hkMemoryAllocator::Self *a2, long double a3, char a4);
int sub_1821450(int a1, int a2, hkTransformf::Self *a3, hkMemoryAllocator::Self *a4, __m128 *a5);
int sub_654C40(int a1);
void * sub_655B90();
uint8_t * sub_18546A0(uint8_t *a1, hkGeometryUtility::Self *a2, hkTransformf::Self *a3, int a4);
__m128 * sub_18570F0(int a1, uint32_t *a2, hkTransformf::Self *a3, __m128 **a4);
int sub_183DD40(int a1, char a2, uint8_t *a3);
int sub_16D9EF0(int a1, int a2);
__m128 * sub_1826A80(__m128 *a1, float *a2, float a3, __m128 *a4);
int sub_178DD90(float *a1, float *a2, float a3);
float * sub_1826470(float *a1, int *a2, hkpRigidBody::Self *a3, float *a4);
int sub_18180E0(int *a1, int a2, float *a3, __m128 *a4, int *a5, int a6, int a7, int a8, int a9, float a10, float a11, float a12, int32_t a13, float a14, float a15, float a16, float a17, float a18, float a19, float a20, int a21);
void *sub_656420();
void sub_6567A0(uint32_t *a1, int a2);
hkString::Self * sub_1891D90(hkString::Self **a1, hkStreamReader::Self *a2, hkString::Self *a3);
int sub_1704450(uint8_t *a1, int a2, uint32_t *a3, int a4);
int sub_1880300(int a1, uint32_t *a2, uint32_t *a3, int a4, char a5);
int sub_18E5B50(int result, int a2, int a3);
hkVersionPatchManager::ClassWrapper::Self * sub_18815B0(hkVersionPatchManager::ClassWrapper::Self *a1, hkDataWorld::Self *a2, hkVersionPatchManager::ClassWrapper::Self *a3, uint32_t *a4, hkClassNameRegistry::Self *a5);
int sub_1561780(hkString::Self *a1, int a2);
hkVersionPatchManager::ClassWrapper::Self * sub_1881360(hkVersionPatchManager::ClassWrapper::Self *a1, hkDataWorld::Self *a2, hkVersionPatchManager::ClassWrapper::Self *a3, uint32_t *a4, hkClassNameRegistry::Self *a5);
const hkMatrix3f::Self * sub_1788800(int a1, float *a2, hkTransformf::Self *a3);
float * sub_179BF90(uint8_t a1, int a2, int a3, int a4, float **a5);
int sub_17A61D0(int a1, int a2, int *a3);
float sub_179BEC0(__m128i a1);
float * sub_179D4F0(int a1, int a2, float *a3, float *a4, float **a5);
float ** sub_179C3F0(int a1, int a2, float **a3);
uint8_t * sub_187EB20(uint8_t *a1, int *a2, int a3);
float * sub_179CC20(int a1, int a2, float *a3, float *a4, float **a5);
float * sub_179C0D0(float *result, float *a2, float *a3);
float * sub_179C780(float *a1, int a2, float *a3, float *a4, float *a5, float *a6, float *a7, float *a8);
int sub_18A5750(int a1, int a2);
void sub_18EA810(uint32_t *a1);
float * sub_17A6B00(float *result, float *a2, float *a3);
float sub_17A6A70(__m128i a1);
int sub_18ECD60(void *a1, hkClass::Self *a2, char a3, unsigned int a4, hkOArchive::Self **a5);
int sub_1885180(int *a1, int *a2, unsigned int a3, unsigned int a4, int a5);
int sub_188B790(int a1, int a2, int a3);
int sub_188F400(int *a1, int a2, char a3, int a4, hkMemoryAllocator::Self *a5);
int sub_1556FA0(int a1, int a2, float a3);
int sub_1891740(unsigned int a1, uint8_t *a2, hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *a3, int a4);
int sub_1557E90(uint32_t *a1, int a2, float a3, int a4, int a5);
int sub_1557DB0(uint32_t *a1, uint32_t *a2, char *a3, int16_t a4, char a5);
int sub_15576D0(uint32_t *a1, double *a2, double a3);
int sub_15572B0(uint32_t *a1, double a2, double a3);
hkMonitorStreamAnalyzer::Node::Self * sub_155ACB0(int a1, int a2, float a3, float a4, hkMemoryAllocator::Self *a5, int a6);
int sub_1558070(uint32_t *a1, int a2);
void *sub_655B00();
int sub_1556B80(hkOstream::Self *a1, int a2, float a3, int a4);
int sub_155E270(hkOstream::Self *a1, unsigned int a2, int a3);
int sub_655470(int a1);
int *sub_655F30();
int sub_655A30(volatile int32_t **a1);
int *sub_655DD0();
float * sub_6544F0(float *a1, float *a2);
int sub_CC67E0(uint32_t *a1, char *a2, uint8_t *a3, int a4, unsigned int a5, int a6, int a7, int a8, int a9);
int sub_CC5F00(uint8_t *a1, unsigned int a2, int a3, int a4, int a5, int a6, int a7, int a8, char *src, int a10, unsigned int a11);
int sub_C97480(size_t *a1, char *a2, int a3);
int sub_C97330(int result, uint32_t *a2);
int *sub_655C20();
int sub_C928C0(int a1, int a2, int a3, char *format, va_list __varargs);
int sub_CCB450(int a1, int a2);
int * sub_C83760(int *a1, uint32_t *a2, int a3, int a4);
void sub_C89770(int a1, uint32_t *a2);
char * sub_CA5410(int a1, char *a2, unsigned int a3, int16_t *a4);
void sub_C9DDD0(uint32_t *a1, const glf::fs2::Path::Self *a2, glf::fs2::Path::Self *a3, char *s);
void sub_C97100(int a1, uint32_t *a2);
void sub_C96EE0(glf::fs2::Path::Self *a1, glf::fs2::Path::Self *a2, glf::fs2::Path::Self *a3);
uint32_t * sub_655A90(uint32_t *a1, uint32_t **a2);
glf::Self * sub_CA5130(glf::Self *result, glf::Self *src, unsigned int a3, uint32_t *a4);
unsigned int * sub_CA58C0(int a1, glf::Self *a2, unsigned int a3, unsigned int *a4);
int sub_CC9B60(void **a1, volatile int32_t **a2, volatile int32_t **a3);
bool sub_654BE0(int a1, char a2);
void sub_656A10(uint32_t *a1, int a2);
void sub_656B20(uint32_t *a1, int a2);
int sub_656550(unsigned int *a1);
int *sub_6553E0();
uint32_t ** sub_655AB0(uint32_t **a1, uint32_t **a2);
int *sub_655EA0();
int *sub_656390();
int *sub_655D40();
bool sub_16D9D60(int a1, int a2);
int sub_1885330(hkOArchive::Self *a1, int64_t a2);
int sub_18854C0(hkOArchive::Self *a1);
int sub_18854F0(uint32_t *a1, hkString::Self *a2);
int sub_1891470(int result, int16_t a2);
int sub_1891480(int a1, int a2, int a3);
int sub_18915E0(uint8_t *a1, uint8_t *a2, int a3);
void sub_1938AF0(void *a1);
size_t * sub_193A2E0(size_t **a1, size_t **a2);
static hkMonitorStreamAnalyzer::Node::Self *getNodeAtSample(hkMonitorStreamAnalyzer::Node::Self *a1, hkMonitorStreamAnalyzer::Node::Self *a2, double a3, int a4);
static hkMassProperties::Self *scaleVolumeMassProperties(const hkVector4f::Self *a1, hkMassProperties::Self *a2);
unsigned int sub_15582A0(unsigned int a1, hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *a2, int a3);
static int g4_map_fs2_Path_insert(int a1, uint32_t *a2, glf::fs2::Path::Self *a3);
static void g4_std_vector_char_fill_insert(size_t *a1, char *src, size_t n, char *a4);
int sub_C83430(int a1, uint32_t *a2, int a3);
int sub_1881130(int a1, uint32_t *a2, hkVersionPatchManager::Self *a3, int a4);
int sub_18876F0(int a1, uint32_t *a2, int a3 = 0, int a4 = 0, int a5 = 0, int a6 = 0, int a7 = 0, int a8 = 0, int a9 = 0, int a10 = 0, int a11 = 0, int a12 = 0, int a13 = 0, int a14 = 0, int a15 = 0, int a16 = 0, int a17 = 0, int a18 = 0, int a19 = 0, int a20 = 0, int a21 = 0, int a22 = 0, int a23 = 0, uint32_t *a24 = nullptr, uint32_t *a25 = nullptr, int a26 = 0, int a27 = 0, int a28 = 0, int a29 = 0, int a30 = 0, int a31 = 0, int a32 = 0, int a33 = 0, int a34 = 0, int a35 = 0, int a36 = 0);
int sub_4EBE40(int a1);

// ============================================================================
// PART 1: 104 Recovered Functions (Group B + Direct Helpers)
// ============================================================================

// Binary VA: 0x656770 (source: game_core_batch_1.json)
int sub_656770(int *a1)
{
  int result;

  result = *a1;
  if ( *a1 != 0 )
    result = sub_5459F0((int)(uintptr_t)a1, result + 16);
  *a1 = 0;
  return result;
}

// Binary VA: 0x16ca950 (source: lib_batch_3.json)
int sub_16CA950(int a1, int a2, int a3, int a4, int *a5)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  int v13;
  int v14;
  unsigned int v15;
  int v16;
  int v17;
  unsigned int v18;
  int v19;
  __m128i v20;
  __m128i v21;
  __m128i v22;
  __m128i v23;
  int v24;
  int v25;
  int v26;
  int v27;
  unsigned int v28;
  int v29;
  int v30;
  unsigned int v31;
  int v32;
  int v33;
  unsigned int v34;
  int v35;
  int v36;
  __m128i v37;
  __m128i v38;
  __m128i v39;
  __m128i v40;
  float v41; // xmm6_4
  float v42; // xmm5_4
  float v43; // xmm4_4
  float v44; // xmm2_4
  float v45; // xmm0_4
  float v46; // xmm3_4
  float v47; // xmm7_4
  float v48; // xmm6_4
  float v49; // xmm5_4
  int *v50;
  float *v51;
  float *v52;
  float *v53;
  int v54;
  float v55; // xmm6_4
  float v56; // xmm2_4
  float v57; // xmm1_4
  float v58; // xmm0_4
  float v59; // xmm5_4
  float v60; // xmm4_4
  float v61; // xmm3_4
  float v62; // xmm2_4
  __m128i v63;
  int v64;
  float v65; // xmm3_4
  float v66; // xmm2_4
  float v67; // xmm0_4
  float v68; // xmm2_4
  float v69; // xmm1_4
  float v70; // xmm4_4
  float v71; // xmm3_4
  float v72; // xmm5_4
  float v73; // xmm0_4
  float v74; // xmm2_4
  __m128i v75;
  __m128i v76;
  int v77;
  int *v78;
  int result;
  int *v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  char v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  unsigned int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  char v100;
  int v101;
  int v102;
  int v103;
  int v104;
  float v105;
  float v106;
  float v107; // [esp-8Ch] [ebp-438h]
  int v108;
  int *v110;
  int v111;
  int v112; // [esp-6Ch] [ebp-418h]
  float v113; // [esp-6Ch] [ebp-418h]
  int v114;
  float v115;
  float v116;
  float v117;
  float v118; // [esp-5Ch] [ebp-408h]
  int v119;
  float v120;
  float v121;
  int v122;
  int v123;
  unsigned int v124;
  int v125;
  unsigned int v126;
  float v127;
  int v128; // [esp-4Ch] [ebp-3F8h]
  float v129; // [esp-4Ch] [ebp-3F8h]
  float v130; // [esp-4Ch] [ebp-3F8h]
  int v131;
  int v132;
  float v133;
  int v134;
  int v135;
  float v136;
  unsigned int v137;
  unsigned int v138;
  float v139;
  float v140;
  int v141;
  unsigned int v142; // [esp-3Ch] [ebp-3E8h]
  unsigned int v143; // [esp-3Ch] [ebp-3E8h]
  float v144; // [esp-3Ch] [ebp-3E8h]
  int v145; // [esp-3Ch] [ebp-3E8h]
  unsigned int v146;
  unsigned int v147;
  float v148;
  int v149;
  int v150;
  unsigned int v151;
  unsigned int v152;
  float v153;
  int *v154;
  int v155;
  int v156;
  int v157; // [esp-2Ch] [ebp-3D8h]
  int v158; // [esp-2Ch] [ebp-3D8h]
  int v159;
  int v160;
  float v161[8];
  int v162[9];
  int v163;
  int v164;
  float v165[87];
  int v166; // [esp+1A0h] [ebp-20Ch] BYREF
  int v167; // [esp+3B8h] [ebp+Ch]

  v108 = *(uint32_t *)(*(uint32_t *)(a4 + 96) + 16);
  v6 = *(uint32_t *)(a1 + 12);
  if ( v6 != 0 )
    goto LABEL_2;
  v77 = a1;
  v78 = *(int **)(a1 + 68);
  if ( v78 == nullptr )
  {
    v95 = *(uint32_t *)(a1 + 32);
    if ( v95 <= *(uint32_t *)(a1 + 48) && a2 != 0 )
    {
      if ( v108 != 0 )
      {
        v100 = *(uint8_t *)(a1 + 47);
        v101 = *(uint32_t *)(a1 + 36) - (*(uint8_t *)(a1 + 45) << v100);
        v102 = *(uint32_t *)(a1 + 40) - (*(uint8_t *)(a1 + 46) << v100);
        *a5 = v95 - (*(uint8_t *)(a1 + 44) << v100);
        a5[1] = v101;
        a5[2] = v102;
        v103 = *(uint32_t *)(a1 + 52) + (*(uint8_t *)(a1 + 61) << v100);
        v104 = *(uint32_t *)(a1 + 48) + (*(uint8_t *)(a1 + 60) << v100);
        a5[6] = *(uint32_t *)(a1 + 56) + (*(uint8_t *)(a1 + 62) << v100);
        a5[4] = v104;
        a5[5] = v103;
      }
      else
      {
        v96 = *(uint32_t *)(a1 + 36);
        *a5 = *(uint32_t *)(a1 + 32);
        a5[1] = v96;
        v97 = *(uint32_t *)(a1 + 44);
        a5[2] = *(uint32_t *)(a1 + 40);
        a5[3] = v97;
        v98 = *(uint32_t *)(a1 + 52);
        a5[4] = *(uint32_t *)(a1 + 48);
        a5[5] = v98;
        v99 = *(uint32_t *)(a1 + 56);
        a5[7] = *(uint32_t *)(a1 + 60);
        a5[6] = v99;
      }
      a5[3] = 0;
      return 1;
    }
LABEL_2:
    if ( v108 != 0 )
    {
      v88 = a1;
      while ( v6 != 0 )
      {
        v88 = v6;
        v6 = *(uint32_t *)(v6 + 12);
      }
      hkAabbUtil::initOffsetAabbInput(*(hkTransformf::Self **)(v88 + 8), (int)(uintptr_t)v162);
    }
    v111 = G4_VCALL<int>(a3, 12);
    if ( v111 != -1 )
    {
      v122 = 0;
      v110 = a5;
      v7 = a4;
      while ( 1 )
      {
        v36 = G4_VCALL<int>(a3, 24, v111, &v166);
        G4_VCALL<void>(v36, 24, *(uint32_t *)(a1 + 8), *(uint32_t *)(v7 + 12), v161);
        if ( v108 != 0 )
        {
          v107 = (float)(v161[4] - v161[0]) * 0.5;
          v44 = (float)((float)(v161[0] - v161[4]) * 0.5) + v161[4];
          v106 = (float)(v161[5] - v161[1]) * 0.5;
          v105 = (float)(v161[6] - v161[2]) * 0.5;
          v121 = v161[5] + (float)((float)(v161[1] - v161[5]) * 0.5);
          v45 = (float)((float)(v161[2] - v161[6]) * 0.5) + v161[6];
          v46 = (float)((float)(v161[3] - v161[7]) * 0.5) + v161[7];
          v47 = (float)((float)((float)(v165[71] * v44) + (float)(v165[75] * v121)) + (float)(v165[79] * v45))
              + v165[83];
          v48 = (float)((float)((float)(v165[72] * v44) + (float)(v165[76] * v121)) + (float)(v165[80] * v45))
              + v165[84];
          v49 = (float)((float)((float)(v165[73] * v44) + (float)(v165[77] * v121)) + (float)(v165[81] * v45))
              + v165[85];
          v139 = (float)((float)((float)(v165[59] * v48) + (float)(v165[55] * v47)) + (float)(v165[63] * v49))
               + v165[67];
          v136 = fminf(v44, v139);
          v140 = fmaxf(v44, v139);
          v133 = fminf(
                   v121,
                   (float)((float)((float)(v165[60] * v48) + (float)(v165[56] * v47)) + (float)(v165[64] * v49))
                 + v165[68]);
          v130 = fminf(
                   v45,
                   (float)((float)((float)(v165[61] * v48) + (float)(v165[57] * v47)) + (float)(v165[65] * v49))
                 + v165[69]);
          v148 = fmaxf(
                   v45,
                   (float)((float)((float)(v165[61] * v48) + (float)(v165[57] * v47)) + (float)(v165[65] * v49))
                 + v165[69]);
          v127 = fminf(
                   v46,
                   (float)((float)((float)(v165[62] * v48) + (float)(v165[58] * v47)) + (float)(v165[66] * v49))
                 + v165[70]);
          v144 = fmaxf(
                   v46,
                   (float)((float)((float)(v165[62] * v48) + (float)(v165[58] * v47)) + (float)(v165[66] * v49))
                 + v165[70]);
          v153 = fmaxf(
                   v121,
                   (float)((float)((float)(v165[60] * v48) + (float)(v165[56] * v47)) + (float)(v165[64] * v49))
                 + v165[68]);
          if ( SLODWORD(v165[51]) > 0 )
          {
            v167 = v7;
            v50 = v162;
            v51 = (float *)&v163;
            v52 = (float *)&v164;
            v53 = v165;
            v54 = 0;
            v113 = v48 - *(float *)(v162[0] + 132);
            v115 = v49 - *(float *)(v162[0] + 136);
            do
            {
              v55 = *((float *)v50 + 19);
              ++v54;
              v51 += 16;
              v52 += 16;
              v53 += 16;
              v50 += 16;
              v56 = (float)((float)(v47 - *(float *)(v162[0] + 128)) * v55) + *(float *)(v162[0] + 128);
              v57 = (float)(v113 * v55) + *(float *)(v162[0] + 132);
              v58 = (float)(v115 * v55) + *(float *)(v162[0] + 136);
              v59 = (float)((float)((float)(*((float *)v50 - 12) * v56) + (float)(*(v51 - 17) * v57))
                          + (float)(*(v52 - 18) * v58))
                  + *(v53 - 17);
              v60 = (float)((float)((float)(*((float *)v50 - 11) * v56) + (float)(*(v51 - 16) * v57))
                          + (float)(*(v52 - 17) * v58))
                  + *(v53 - 16);
              v61 = (float)((float)((float)(*((float *)v50 - 10) * v56) + (float)(*(v51 - 15) * v57))
                          + (float)(*(v52 - 16) * v58))
                  + *(v53 - 15);
              v62 = (float)((float)((float)(v56 * *((float *)v50 - 9)) + (float)(v57 * *(v51 - 14)))
                          + (float)(v58 * *(v52 - 15)))
                  + v55;
              v140 = fmaxf(v140, v59);
              v136 = fminf(v136, v59);
              v133 = fminf(v133, v60);
              v130 = fminf(v130, v61);
              v127 = fminf(v127, v62);
              v153 = fmaxf(v153, v60);
              v148 = fmaxf(v148, v61);
              v144 = fmaxf(v144, v62);
            }
            while ( v54 != LODWORD(v165[51]) );
            v7 = v167;
          }
          do { std::memset(&v63, 0, 16); v63.u64[0] = (uint64_t)(uintptr_t)(LODWORD(v107)); } while (0);
          *(float *)v63.i32 = (float)((float)(*(float *)v63.i32 * *(float *)v63.i32)
                                          + (float)(v106 * v106))
                                  + (float)(v105 * v105);
          if ( *(float *)v63.i32 <= 0.0 )
          {
            v68 = 0.0;
            v67 = 0.0;
          }
          else
          {
            v64 = ((_mm_cvtsi128_si32(v63) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v63) >> 1));
            v65 = (float)(*(float *)&v64 * 1.5)
                - (float)((float)((float)(0.5 * *(float *)v63.i32) * *(float *)&v64)
                        * (float)(*(float *)&v64 * *(float *)&v64));
            v66 = (float)(v65 * 1.5)
                - (float)((float)((float)(0.5 * *(float *)v63.i32) * v65) * (float)(v65 * v65));
            v67 = (float)((float)(1.5 * v66)
                        - (float)((float)((float)(0.5 * *(float *)v63.i32) * v66) * (float)(v66 * v66)))
                * *(float *)v63.i32;
            v68 = 0.73205084f * v67;
          }
          do { std::memset(&v38, 0, 16); v38.u64[0] = (uint64_t)(uintptr_t)(LODWORD(v133)); } while (0);
          v69 = fminf(*(float *)(v162[0] + 156), v68) * v67;
          v70 = fminf(v67, v107 + v69);
          v71 = fminf(v67, v106 + v69);
          v72 = fminf(v67, v105 + v69);
          v73 = fminf(v67, v69 + (float)((float)(v161[7] - v161[3]) * 0.5));
          do { std::memset(&v37, 0, 16); v37.u64[0] = (uint64_t)(uintptr_t)(LODWORD(v136)); } while (0);
          *(float *)v38.i32 = v133 - v71;
          *(float *)v37.i32 = v136 - v70;
          v74 = v72;
          v118 = v144 + v73;
          v116 = v148 + v72;
          v117 = v153 + v71;
          v120 = v140 + v70;
          do { std::memset(&v75, 0, 16); v75.u64[0] = (uint64_t)(uintptr_t)(LODWORD(v127)); } while (0);
          do { std::memset(&v76, 0, 16); v76.u64[0] = (uint64_t)(uintptr_t)(LODWORD(v130)); } while (0);
          *(float *)v75.i32 = v127 - v73;
          *(float *)v76.i32 = v130 - v74;
          v40 = v75;
          v39 = v76;
        }
        else
        {
          v120 = v161[4];
          v117 = v161[5];
          do { std::memset(&v37, 0, 16); v37.u64[0] = (uint64_t)(uintptr_t)(LODWORD(v161[0])); } while (0);
          do { std::memset(&v38, 0, 16); v38.u64[0] = (uint64_t)(uintptr_t)(LODWORD(v161[1])); } while (0);
          do { std::memset(&v39, 0, 16); v39.u64[0] = (uint64_t)(uintptr_t)(LODWORD(v161[2])); } while (0);
          do { std::memset(&v40, 0, 16); v40.u64[0] = (uint64_t)(uintptr_t)(LODWORD(v161[3])); } while (0);
          v116 = v161[6];
          v118 = v161[7];
        }
        ++v122;
        v41 = hkAabbUtil::hkAabbUint32MaxVal[0];
        v129 = hkAabbUtil::hkAabbUint32MaxVal[3];
        *(float *)v37.i32 = fminf(
                                    (float)(*(float *)v37.i32 + *(float *)(v7 + 32)) * *(float *)(v7 + 64),
                                    hkAabbUtil::hkAabbUint32MaxVal[0]);
        v42 = hkAabbUtil::hkAabbUint32MaxVal[1];
        *(float *)v40.i32 = fminf(
                                    (float)(*(float *)v40.i32 + *(float *)(v7 + 44)) * *(float *)(v7 + 76),
                                    v129);
        v43 = hkAabbUtil::hkAabbUint32MaxVal[2];
        *(float *)v38.i32 = fminf(
                                    (float)(*(float *)v38.i32 + *(float *)(v7 + 36)) * *(float *)(v7 + 68),
                                    v42);
        *(float *)v39.i32 = fminf(
                                    (float)(*(float *)v39.i32 + *(float *)(v7 + 40)) * *(float *)(v7 + 72),
                                    v43);
        if ( *(float *)v37.i32 > 0.0 )
        {
          v123 = _mm_cvtsi128_si32(v37);
          v151 = (v123 & 0x7F800000u) >> 23;
          v8 = v151 - 127;
          if ( *(float *)v38.i32 > 0.0 )
            goto LABEL_6;
        }
        else
        {
          v8 = -127;
          LOBYTE(v151) = 0;
          v123 = 0;
          if ( *(float *)v38.i32 > 0.0 )
          {
LABEL_6:
            v9 = _mm_cvtsi128_si32(v38);
            v142 = (v9 & 0x7F800000u) >> 23;
            v10 = v142 - 127;
            if ( *(float *)v39.i32 > 0.0 )
              goto LABEL_7;
            goto LABEL_53;
          }
        }
        v9 = 0;
        v10 = -127;
        LOBYTE(v142) = 0;
        if ( *(float *)v39.i32 > 0.0 )
        {
LABEL_7:
          v114 = _mm_cvtsi128_si32(v39);
          v137 = (v114 & 0x7F800000u) >> 23;
          v131 = v137 - 127;
          if ( *(float *)v40.i32 > 0.0 )
            goto LABEL_8;
          goto LABEL_54;
        }
LABEL_53:
        v131 = -127;
        LOBYTE(v137) = 0;
        v114 = 0;
        if ( *(float *)v40.i32 > 0.0 )
        {
LABEL_8:
          v112 = _mm_cvtsi128_si32(v40);
          v146 = (v112 & 0x7F800000u) >> 23;
          v134 = v146 - 127;
          if ( v8 < 0 )
            goto LABEL_55;
          goto LABEL_9;
        }
LABEL_54:
        v134 = -127;
        LOBYTE(v146) = 0;
        v112 = 0;
        if ( v8 < 0 )
        {
LABEL_55:
          v155 = 0;
          if ( v10 < 0 )
            goto LABEL_56;
          goto LABEL_13;
        }
LABEL_9:
        if ( v123 < 0 )
          goto LABEL_55;
        v124 = v123 & 0x7FFFFF | 0x800000;
        if ( v8 > 23 )
        {
          v11 = -1;
          if ( v8 <= 31 )
            v11 = v124 << (v151 + 106);
        }
        else
        {
          v11 = v124 >> (-106 - v151);
        }
        v155 = v11;
        if ( v10 < 0 )
        {
LABEL_56:
          v14 = v131;
          v157 = 0;
          if ( v131 < 0 )
            goto LABEL_57;
          goto LABEL_17;
        }
LABEL_13:
        if ( v9 < 0 )
          goto LABEL_56;
        v12 = v9 & 0x7FFFFF | 0x800000;
        if ( v10 > 23 )
        {
          v13 = -1;
          if ( v10 <= 31 )
            v13 = v12 << (v142 + 106);
        }
        else
        {
          v13 = v12 >> (-106 - v142);
        }
        v14 = v131;
        v157 = v13;
        if ( v131 < 0 )
        {
LABEL_57:
          v17 = v134;
          v159 = 0;
          if ( v134 < 0 )
            goto LABEL_58;
          goto LABEL_21;
        }
LABEL_17:
        if ( v114 < 0 )
          goto LABEL_57;
        v15 = v114 & 0x7FFFFF | 0x800000;
        if ( v14 > 23 )
        {
          v16 = -1;
          if ( v131 <= 31 )
            v16 = v15 << (v137 + 106);
        }
        else
        {
          v16 = v15 >> (-106 - v137);
        }
        v17 = v134;
        v159 = v16;
        if ( v134 < 0 )
        {
LABEL_58:
          v19 = 0;
          goto LABEL_24;
        }
LABEL_21:
        if ( v112 < 0 )
          goto LABEL_58;
        v18 = v112 & 0x7FFFFF | 0x800000;
        if ( v17 > 23 )
        {
          v19 = -1;
          if ( v134 <= 31 )
            v19 = v18 << (v146 + 106);
        }
        else
        {
          v19 = v18 >> (-106 - v146);
        }
LABEL_24:
        do { std::memset(&v20, 0, 16); v20.u64[0] = (uint64_t)(uintptr_t)(LODWORD(v120)); } while (0);
        do { std::memset(&v21, 0, 16); v21.u64[0] = (uint64_t)(uintptr_t)(LODWORD(v116)); } while (0);
        *v110 = v155;
        v110[1] = v157;
        v110[2] = v159;
        v110[3] = v19;
        do { std::memset(&v22, 0, 16); v22.u64[0] = (uint64_t)(uintptr_t)(LODWORD(v117)); } while (0);
        do { std::memset(&v23, 0, 16); v23.u64[0] = (uint64_t)(uintptr_t)(LODWORD(v118)); } while (0);
        *(float *)v20.i32 = fminf((float)(v120 + *(float *)(v7 + 48)) * *(float *)(v7 + 64), v41);
        *(float *)v21.i32 = fminf((float)(v116 + *(float *)(v7 + 56)) * *(float *)(v7 + 72), v43);
        *(float *)v22.i32 = fminf((float)(v117 + *(float *)(v7 + 52)) * *(float *)(v7 + 68), v42);
        *(float *)v23.i32 = fminf((float)(v118 + *(float *)(v7 + 60)) * *(float *)(v7 + 76), v129);
        if ( *(float *)v20.i32 <= 0.0 )
        {
          v24 = -127;
          LOBYTE(v143) = 0;
          v125 = 0;
        }
        else
        {
          v125 = _mm_cvtsi128_si32(v20);
          v143 = (v125 & 0x7F800000u) >> 23;
          v24 = v143 - 127;
        }
        if ( *(float *)v22.i32 <= 0.0 )
        {
          v26 = -127;
          LOBYTE(v138) = 0;
          v25 = 0;
        }
        else
        {
          v25 = _mm_cvtsi128_si32(v22);
          v138 = (v25 & 0x7F800000u) >> 23;
          v26 = v138 - 127;
        }
        if ( *(float *)v21.i32 <= 0.0 )
        {
          v132 = -127;
          LOBYTE(v147) = 0;
          v119 = 0;
        }
        else
        {
          v119 = _mm_cvtsi128_si32(v21);
          v147 = (v119 & 0x7F800000u) >> 23;
          v132 = v147 - 127;
        }
        if ( *(float *)v23.i32 <= 0.0 )
        {
          v135 = -127;
          LOBYTE(v152) = 0;
          v128 = 0;
          if ( v24 < 0 )
          {
LABEL_60:
            v156 = 0;
            if ( v26 < 0 )
              goto LABEL_61;
            goto LABEL_36;
          }
        }
        else
        {
          v128 = _mm_cvtsi128_si32(v23);
          v152 = (v128 & 0x7F800000u) >> 23;
          v135 = v152 - 127;
          if ( v24 < 0 )
            goto LABEL_60;
        }
        if ( v125 < 0 )
          goto LABEL_60;
        v126 = v125 & 0x7FFFFF | 0x800000;
        if ( v24 > 23 )
        {
          v27 = -1;
          if ( v24 <= 31 )
            v27 = v126 << (v143 + 106);
        }
        else
        {
          v27 = v126 >> (-106 - v143);
        }
        v156 = v27;
        if ( v26 < 0 )
        {
LABEL_61:
          v30 = v132;
          v158 = 0;
          if ( v132 < 0 )
            goto LABEL_62;
          goto LABEL_40;
        }
LABEL_36:
        if ( v25 < 0 )
          goto LABEL_61;
        v28 = v25 & 0x7FFFFF | 0x800000;
        if ( v26 > 23 )
        {
          v29 = -1;
          if ( v26 <= 31 )
            v29 = v28 << (v138 + 106);
        }
        else
        {
          v29 = v28 >> (-106 - v138);
        }
        v30 = v132;
        v158 = v29;
        if ( v132 < 0 )
        {
LABEL_62:
          v33 = v135;
          v160 = 0;
          if ( v135 < 0 )
            goto LABEL_63;
          goto LABEL_44;
        }
LABEL_40:
        if ( v119 < 0 )
          goto LABEL_62;
        v31 = v119 & 0x7FFFFF | 0x800000;
        if ( v30 > 23 )
        {
          v32 = -1;
          if ( v132 <= 31 )
            v32 = v31 << (v147 + 106);
        }
        else
        {
          v32 = v31 >> (-106 - v147);
        }
        v33 = v135;
        v160 = v32;
        if ( v135 >= 0 )
        {
LABEL_44:
          if ( v128 >= 0 )
          {
            v34 = v128 & 0x7FFFFF | 0x800000;
            if ( v33 > 23 )
            {
              v35 = -1;
              if ( v135 <= 31 )
                v35 = v34 << (v152 + 106);
            }
            else
            {
              v35 = v34 >> (-106 - v152);
            }
            goto LABEL_47;
          }
        }
LABEL_63:
        v35 = 0;
LABEL_47:
        v110[4] = v156;
        v110[6] = v160;
        v110[5] = v158;
        v110[7] = v35;
        v110[3] = v111;
        v110 += 8;
        v111 = G4_VCALL<int>(a3, 16, v111);
        if ( v111 == -1 )
          goto LABEL_97;
      }
    }
    return 0;
  }
  if ( *(uint32_t *)(v77 + 32) > *(uint32_t *)(v77 + 48) )
    goto LABEL_2;
  result = 0;
  if ( *(uint16_t *)(a1 + 64) != 0 )
  {
    v145 = *(uint32_t *)(a1 + 72);
    v122 = 0;
    v154 = a5;
    if ( v108 != 0 )
    {
      v141 = 0;
      do
      {
        v89 = *((uint8_t *)v78 + 15);
        v90 = *v78;
        v150 = v78[1] - (*((uint8_t *)v78 + 13) << v89);
        v91 = v78[2] - (*((uint8_t *)v78 + 14) << v89);
        v78 += 8;
        *v154 = v90 - (*((uint8_t *)v78 - 20) << v89);
        v154[1] = v150;
        v154[2] = v91;
        v92 = *(v78 - 3) + (*((uint8_t *)v78 - 3) << v89);
        v93 = *(v78 - 2) + (*((uint8_t *)v78 - 2) << v89);
        v154[4] = *(v78 - 4) + (*((uint8_t *)v78 - 4) << v89);
        v154[6] = v93;
        v94 = v122;
        v154[5] = v92;
        ++v122;
        a5[v141 + 3] = *(uint32_t *)(v145 + 4 * v94);
        v141 += 8;
        v154 += 8;
      }
      while ( v122 < *(uint16_t *)(a1 + 64) );
    }
    else
    {
      v149 = 0;
      do
      {
        v80 = v154;
        v81 = *v78;
        v82 = v78[1];
        v154 += 8;
        v78 += 8;
        *v80 = v81;
        v80[1] = v82;
        v83 = v149;
        v84 = *(v78 - 6);
        v149 += 32;
        *(int *)((char *)a5 + v83 + 12) = *(v78 - 5);
        *(int *)((char *)a5 + v83 + 8) = v84;
        v85 = *(v78 - 4);
        *(int *)((char *)a5 + v83 + 20) = *(v78 - 3);
        *(int *)((char *)a5 + v83 + 16) = v85;
        v86 = *(v78 - 2);
        *(int *)((char *)a5 + v83 + 28) = *(v78 - 1);
        *(int *)((char *)a5 + v83 + 24) = v86;
        v87 = v122++;
        *(int *)((char *)a5 + v83 + 12) = *(uint32_t *)(v145 + 4 * v87);
      }
      while ( v122 < *(uint16_t *)(a1 + 64) );
    }
    result = v122;
    if ( v108 != 0 )
    {
LABEL_97:
      if ( v122 <= 1 )
        return v122;
      hkAlgorithm::quickSortRecursive<int, void>(
        (int)(uintptr_t)a5,
        0,
        v122 - 1);
      return v122;
    }
  }
  return result;
}

// Binary VA: 0x655cb0 (source: game_core_batch_1.json)
int *sub_655CB0()
{
  int *result;

  if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
  {
    sub_5B3AF0((int)(uintptr_t)&dword_20D4A60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
    __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
  }
  result = nullptr;
  if ( byte_20D4A64 == 0 )
    return (int *)(&dword_20D4A60);
  return result;
}

// Binary VA: 0x654730 (source: game_core_batch_1.json)
float * sub_654730(float *a1, float *a2, float *a3)
{
  float v4; // xmm6_4
  float v5; // xmm4_4
  float v6; // xmm3_4
  float v7; // xmm2_4
  float v8; // xmm0_4
  float v9; // xmm7_4
  float v10; // xmm1_4
  float v11; // xmm3_4
  float v12;
  float v13;
  float v14;
  float v15; // [esp+Ch] [ebp-4h]

  v12 = a2[1];
  v13 = *a2;
  v14 = a3[1];
  v4 = a2[2];
  v5 = (float)(*a2 * v14) - (float)(v12 * *a3);
  v15 = a3[2];
  v6 = (float)(v4 * *a3) - (float)(*a2 * v15);
  v7 = (float)(v12 * v15) - (float)(v14 * v4);
  v8 = a2[3] + a2[3];
  v9 = v6 * v4;
  v10 = v6;
  v11 = v6 * *a2;
  *a1 = (float)((float)((float)(v12 * v5) - v9) + (float)((float)(v12 * v5) - v9)) + (float)((float)(v7 * v8) + *a3);
  a1[2] = (float)((float)(v8 * v5) + v15) + (float)((float)(v11 - (float)(v7 * v12)) + (float)(v11 - (float)(v7 * v12)));
  a1[1] = (float)((float)((float)(v4 * v7) - (float)(v13 * v5)) + (float)((float)(v4 * v7) - (float)(v13 * v5)))
        + (float)((float)(v10 * v8) + v14);
  return a1;
}

// Binary VA: 0x655550 (source: game_core_batch_1.json)
const char * sub_655550(int a1)
{
  const char *result;

  switch ( a1 )
  {
    case 0:
      result = "c1m01";
      break;
    case 1:
      result = "c1m02";
      break;
    case 2:
      result = "c1m02_skillstutorial";
      break;
    case 3:
      result = "c1m03";
      break;
    case 4:
      result = "c1m03_shoptutorial";
      break;
    case 5:
      result = "c1m07_cellunlock";
      break;
    case 6:
      result = "c1m04";
      break;
    case 7:
      result = "c1m10";
      break;
    case 8:
      result = "c1m05_cellunlock";
      break;
    case 9:
      result = "c1m05";
      break;
    case 10:
      result = "c1m04_pre_propertytutorial";
      break;
    case 11:
      result = "c1m04_propertytutorial";
      break;
    case 12:
      result = "c1m06_cellunlock";
      break;
    case 13:
      result = "c1m06";
      break;
    case 14:
      result = "c1m06_rsmunlock";
      break;
    case 15:
      result = "c1m06_pawnshoptutorial";
      break;
    case 16:
      result = "c1m07";
      break;
    case 17:
      result = "c1m08";
      break;
    case 18:
      result = "c1m08_pre_casinominigamestutorial";
      break;
    case 19:
      result = "c1m08_casinominigamestutorial";
      break;
    case 20:
      result = "c1m09";
      break;
    case 21:
      result = "c1m12";
      break;
    case 22:
      result = "c1m12_cellunlock";
      break;
    case 23:
      result = "c1m13";
      break;
    case 24:
      result = "c1m13_rsmunlock";
      break;
    case 25:
      result = "c1m13_cellunlock";
      break;
    case 26:
      result = "c1m14";
      break;
    case 27:
      result = "c2m01";
      break;
    case 28:
      result = "c2m01_rsmunlock";
      break;
    case 29:
      result = "c2m02_cellunlock";
      break;
    case 30:
      result = "c2m02";
      break;
    case 31:
      result = "c2m02_rsmunlock";
      break;
    case 32:
      result = "c2m03";
      break;
    case 33:
      result = "c2m03_rsmunlock";
      break;
    case 34:
      result = "c2m05";
      break;
    case 35:
      result = "c2m04_cellunlock2";
      break;
    case 36:
      result = "c2m04";
      break;
    case 37:
      result = "c2m04_cellunlock";
      break;
    case 38:
      result = "c2m06";
      break;
    case 39:
      result = "c2m07";
      break;
    case 40:
      result = "c2m07_cellunlock";
      break;
    case 41:
      result = "c2m12";
      break;
    case 42:
      result = "c2m13";
      break;
    case 43:
      result = "c2m14";
      break;
    case 44:
      result = "c2m15";
      break;
    case 45:
      result = "c2m16";
      break;
    case 46:
      result = "c2m17_cellunlock";
      break;
    case 47:
      result = "c2m17";
      break;
    case 48:
      result = "c3m01_cellunlock";
      break;
    case 49:
      result = "c3m01";
      break;
    case 50:
      result = "c3m02";
      break;
    case 51:
      result = "c3m05";
      break;
    case 52:
      result = "c3m07";
      break;
    case 53:
      result = "c3m08";
      break;
    case 54:
      result = "c3m09";
      break;
    case 55:
      result = "c4m01";
      break;
    case 56:
      result = "c4m02";
      break;
    case 57:
      result = "c4m03";
      break;
    case 58:
      result = "c4m04";
      break;
    case 59:
      result = "c5m01";
      break;
    case 60:
      result = "c5m02";
      break;
    case 61:
      result = "c5m04";
      break;
    case 62:
      result = "survi_01";
      break;
    case 63:
      result = "survi_02";
      break;
    case 64:
      result = "survi_03";
      break;
    case 65:
      result = "survi_04";
      break;
    case 66:
      result = "survi_05";
      break;
    case 67:
      result = "survi_06";
      break;
    case 68:
      result = "rbbry_01";
      break;
    case 69:
      result = "rbbry_02";
      break;
    case 70:
      result = "rbbry_03";
      break;
    case 71:
      result = "rbbry_04";
      break;
    case 72:
      result = "ftclb_01";
      break;
    case 73:
      result = "ftclb_02";
      break;
    case 74:
      result = "ftclb_03";
      break;
    case 75:
      result = "ftclb_04";
      break;
    case 76:
      result = "ftclb_05";
      break;
    case 77:
      result = "tmtrl_01";
      break;
    case 78:
      result = "tmtrl_02";
      break;
    case 79:
      result = "tmtrl_03";
      break;
    case 80:
      result = "tmtrl_04";
      break;
    case 81:
      result = "tmtrl_plane_01";
      break;
    case 82:
      result = "tmatk_01";
      break;
    case 83:
      result = "tmatk_02";
      break;
    case 84:
      result = "tmatk_03";
      break;
    case 85:
      result = "tmatk_04";
      break;
    case 86:
      result = "tmatk_arena_01";
      break;
    case 87:
      result = "tmatk_arena_02";
      break;
    case 88:
      result = "tmatk_arena_03";
      break;
    case 89:
      result = "tmatk_boat_01";
      break;
    case 90:
      result = "tmatk_boat_02";
      break;
    case 91:
      result = "ringc_01";
      break;
    case 92:
      result = "ringc_02";
      break;
    case 93:
      result = "ringc_03";
      break;
    case 94:
      result = "ringc_04";
      break;
    case 95:
      result = "ringc_05";
      break;
    case 96:
      result = "ringc_plane_01";
      break;
    case 97:
      result = "ringc_plane_02";
      break;
    case 98:
      result = "carng_car_01";
      break;
    case 99:
      result = "carng_car_02";
      break;
    case 100:
      result = "carng_foot_01";
      break;
    case 101:
      result = "carng_foot_02";
      break;
    case 102:
      result = "carng_foot_03";
      break;
    case 103:
      result = "carng_foot_04";
      break;
    case 104:
      result = "carng_foot_05";
      break;
    case 105:
      result = "frfl_01";
      break;
    case 106:
      result = "frfl_02";
      break;
    case 107:
      result = "frfl_03";
      break;
    case 108:
      result = "frfl_04";
      break;
    case 109:
      result = "dlvr_01";
      break;
    case 110:
      result = "dlvr_02";
      break;
    case 111:
      result = "dlvr_03";
      break;
    case 112:
      result = "dlvr_04";
      break;
    case 113:
      result = "dlvr_05";
      break;
    case 114:
      result = "dlvr_06";
      break;
    case 115:
      result = "tmtrl_05";
      break;
    case 116:
      result = "snpr_01";
      break;
    case 117:
      result = "snpr_02";
      break;
    case 118:
      result = "snpr_03";
      break;
    case 119:
      result = "snpr_04";
      break;
    case 120:
      result = "snpr_05";
      break;
    case 121:
      result = "tmatk_desert_01";
      break;
    case 122:
      result = "ringc_06";
      break;
    case 123:
      result = "ringc_07";
      break;
    case 124:
      result = "ringc_08";
      break;
    case 125:
      result = "aslt_01";
      break;
    case 126:
      result = "aslt_02";
      break;
    case 127:
      result = "aslt_03";
      break;
    case 128:
      result = "aslt_04";
      break;
    case 129:
      result = "aslt_05";
      break;
    case 130:
      result = "u3m01_cellunlock";
      break;
    case 131:
      result = "u3m01";
      break;
    case 132:
      result = "u3m02_cellunlock";
      break;
    case 133:
      result = "u3m02";
      break;
    case 134:
      result = "u3m03_u3m04_cellunlock";
      break;
    case 135:
      result = "u3m03";
      break;
    case 136:
      result = "u3m04";
      break;
    case 137:
      result = "u3m05_cellunlock";
      break;
    case 138:
      result = "u3m05";
      break;
    case 139:
      result = "u3m06_cellunlock";
      break;
    case 140:
      result = "u3m06";
      break;
    case 141:
      result = "u3m07";
      break;
    case 142:
      result = "ufoheist_cellunlock";
      break;
    case 143:
      result = "UFOHeist_01";
      break;
    case 144:
      result = "UFOHeist_02";
      break;
    case 145:
      result = "UFOHeist_03";
      break;
    case 146:
      result = "tmatk_u4m01";
      break;
    case 147:
      result = "tmatk_u4m02";
      break;
    case 148:
      result = "ram_m01";
      break;
    case 149:
      result = "ram_m02";
      break;
    case 150:
      result = "u6m01_cellunlock";
      break;
    case 151:
      result = "u6m01";
      break;
    case 152:
      result = "u6m02_cellunlock";
      break;
    case 153:
      result = "u6m02";
      break;
    case 154:
      result = "u6m04";
      break;
    case 155:
      result = "u6m_ny";
      break;
    case 156:
      result = "gang_aslt_01";
      break;
    case 157:
      result = "gang_aslt_02";
      break;
    case 158:
      result = "gang_aslt_03";
      break;
    case 159:
      result = "gang_aslt_04";
      break;
    case 160:
      result = "gang_snpr_01";
      break;
    case 161:
      result = "gang_snpr_02";
      break;
    case 162:
      result = "gang_snpr_03";
      break;
    case 163:
      result = "gang_survi_01";
      break;
    case 164:
      result = "gang_survi_02";
      break;
    case 165:
      result = "gang_survi_03";
      break;
    case 166:
      result = "u6m03_cellunlock";
      break;
    case 167:
      result = "u6m03";
      break;
    case 168:
      result = "casinogame_blackjack";
      break;
    case 169:
      result = "casinogame_slotmachine";
      break;
    case 170:
      result = "casinogame_videopoker";
      break;
    default:
      result = nullptr;
      break;
  }
  return result;
}

// Binary VA: 0x16f57d0 (source: lib_batch_3.json)
hkpConvexVerticesShape::Self * sub_16F57D0(int a1,
 hkMemoryAllocator::Self *a2,
 long double a3,
 char a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  float v9; // xmm4_4
  __m128i v10;
  int v11;
  float v12; // xmm2_4
  float v13; // xmm1_4
  int v14;
  int v15;
  int v16; // xmm0_4
  int v17; // xmm2_4
  int v18; // xmm1_4
  const hkpShape::Self *v19;
  int v20;
  int v21;
  char v22;
  int v23;
  int v24;
  hkpConvexShape::Self *v25;
  int v26;
  int v27;
  int v28;
  float v29; // xmm2_4
  int v30;
  int v31;
  int v32;
  int v33;
  const hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *PlaneEquations;
  float v35; // xmm0_4
  hkpConvexShape::Self **v36; // xmm4_4
  int v37; // xmm2_4
  float v38; // xmm3_4
  float v39; // xmm1_4
  int v40;
  uint32_t *v41;
  int v42;
  int v43;
  char v44;
  hkpConvexShape::Self **v45;
  int v46;
  int v47;
  float v48; // xmm7_4
  float v49;
  __m128i v50;
  float v51;
  float v52; // xmm3_4
  float v53; // xmm2_4
  __m128i v54;
  float v55; // xmm5_4
  int v56;
  int v57;
  float v58; // xmm1_4
  float v59; // xmm1_4
  float v60; // xmm4_4
  float v61; // xmm3_4
  float v62; // xmm2_4
  float v63; // xmm1_4
  int v64;
  int v65;
  int v66;
  int v67;
  hkpConvexVerticesShape::Self *v68;
  uint32_t *v69;
  hkpConvexShape::Self **v70;
  int v71;
  int address;
  int v73;
  int v74;
  int k;
  int v76;
  int v77;
  int32_t v78; // kr00_4
  int32_t v79;
  int32_t v80; // ett
  float v81; // xmm0_4
  int v82;
  int32_t v83; // kr04_4
  int32_t v84;
  int32_t v85; // ett
  int v86;
  int v87;
  unsigned int v88;
  unsigned int v89;
  float v90; // xmm1_4
  float v91; // xmm2_4
  __m128i v92;
  int j;
  unsigned int v94;
  int v95;
  int v96;
  float *v97;
  int v98;
  int v99;
  float *v100;
  float v101; // xmm5_4
  float v102; // xmm4_4
  float v103; // xmm3_4
  hkpConvexShape::Self **v104;
  __m128i v105;
  float v106; // xmm1_4
  float v107; // xmm0_4
  __m128i v108;
  float v109; // xmm4_4
  int v110;
  int v111;
  float v112; // xmm3_4
  float v113; // xmm3_4
  float v114; // xmm0_4
  int v115;
  int v116;
  signed int v117;
  int v118;
  int v119;
  int v120; // [esp-1Ch] [ebp-2C8h]
  int v121; // [esp-1Ch] [ebp-2C8h]
  int *v122; // [esp-1Ch] [ebp-2C8h]
  hkpConvexShape::Self **v123;
  int v124;
  int v125; // [esp-Ch] [ebp-2B8h]
  float v126;
  int v127;
  bool v128; // [esp+Bh] [ebp-2A1h]
  int i; // [esp+Ch] [ebp-2A0h]
  signed int v130;
  hkpConvexVerticesShape::Self *v132;
  uint32_t *v134; // [esp+2Ch] [ebp-280h]
  int v135;
  float v136;
  int v137;
  float v138;
  signed int v139;
  float v140; // [esp+3Ch] [ebp-270h]
  signed int v141; // [esp+3Ch] [ebp-270h]
  bool v142;
  char v143;
  float v144;
  float v145;
  int v146;
  float v147;
  int v148;
  float v149;
  int v150;
  float v151;
  char v152; // [esp+4Ch] [ebp-260h]
  float v153; // [esp+4Ch] [ebp-260h]
  int v154; // [esp+4Ch] [ebp-260h]
  float v155; // [esp+4Ch] [ebp-260h]
  unsigned int v156; // [esp+4Ch] [ebp-260h]
  char v157[4];
  int v158;
  int v159;
  int v160; // [esp+5Ch] [ebp-250h]
  uint32_t v161[3];
  int v162[4];
  hkpConvexShape::Self **v163;
  int v164;
  float v165; // [esp+8Ch] [ebp-220h]
  float v166;
  int v167;
  int v168;
  int v169; // [esp+9Ch] [ebp-210h]
  char *v170; // [esp+29Ch] [ebp-10h]

  v170 = &a4;
  v152 = a4;
  v4 = *((uint32_t *)a2 + 1);
  if ( v4 <= 0 )
  {
LABEL_6:
    switch ( *(uint8_t *)(a1 + 8) )
    {
      case 1:
        v153 = *(float *)(a1 + 16);
        hkpCylinderShape::getCylinderRadius((hkpCylinderShape::Self *)a1);
        do { std::memset(&v10, 0, 16); v10.u64[0] = (uint64_t)(uintptr_t)(*(unsigned int *)(a1 + 32)); } while (0);
        v147 = a3;
        v9 = 0.0;
        *(float *)v10.i32 = (float)((float)((float)(*(float *)v10.i32 - *(float *)(a1 + 48))
                                                * (float)(*(float *)v10.i32 - *(float *)(a1 + 48)))
                                        + (float)((float)(*(float *)(a1 + 36) - *(float *)(a1 + 52))
                                                * (float)(*(float *)(a1 + 36) - *(float *)(a1 + 52))))
                                + (float)((float)(*(float *)(a1 + 40) - *(float *)(a1 + 56))
                                        * (float)(*(float *)(a1 + 40) - *(float *)(a1 + 56)));
        if ( *(float *)v10.i32 > 0.0 )
        {
          v11 = ((_mm_cvtsi128_si32(v10) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v10) >> 1));
          v12 = (float)(*(float *)&v11 * 1.5)
              - (float)((float)((float)(0.5 * *(float *)v10.i32) * *(float *)&v11)
                      * (float)(*(float *)&v11 * *(float *)&v11));
          v13 = (float)(v12 * 1.5) - (float)((float)((float)(0.5 * *(float *)v10.i32) * v12) * (float)(v12 * v12));
          v9 = (float)((float)(1.5 * v13)
                     - (float)((float)((float)(0.5 * *(float *)v10.i32) * v13) * (float)(v13 * v13)))
             * *(float *)v10.i32;
        }
        if ( v9 <= (float)(v153 + v153) || v147 <= v153 )
        {
          hkErrStream::Construct((hkErrStream::Self *)&v163, (hkString::Self *)&v167, 512);
          hkOstream::opShl(
            (int)(uintptr_t)&v163,
            (hkString::Self *)"Cylinder shape too small compared to 'extra radius' - unable to shrink.");
          hkError::messageWarning(
            (hkError::Self *)0xABBAFA2C,
            (int)(uintptr_t)&v167,
            "Util/ShapeShrinker/hkpShapeShrinker.cpp",
            (const char *)(uintptr_t)0x1b4,
            v125);
          hkErrStream::Destroy((hkErrStream::Self *)&v163);
          return nullptr;
        }
        hkpCylinderShape::setCylinderRadius((hkpCylinderShape::Self *)a1, v147 - v153);
        v48 = *(float *)(a1 + 48);
        v49 = *(float *)(a1 + 52);
        do { std::memset(&v50, 0, 16); v50.u64[0] = (uint64_t)(uintptr_t)(LODWORD(v48)); } while (0);
        *(float *)v50.i32 = v48 - *(float *)(a1 + 32);
        v136 = *(float *)(a1 + 44);
        v51 = *(float *)(a1 + 56);
        v52 = v49 - *(float *)(a1 + 36);
        v144 = *(float *)(a1 + 36);
        v54 = v50;
        v53 = v51 - *(float *)(a1 + 40);
        v140 = *(float *)(a1 + 40);
        v138 = *(float *)(a1 + 60);
        *(float *)v54.i32 = (float)((float)(*(float *)v54.i32 * *(float *)v54.i32) + (float)(v52 * v52))
                                + (float)(v53 * v53);
        if ( *(float *)v54.i32 <= 0.0 )
        {
          v59 = 0.0;
        }
        else
        {
          v55 = 0.5 * *(float *)v54.i32;
          v56 = _mm_cvtsi128_si32(v54) >> 1;
          v57 = (_mm_cvtsi128_si32(v54) + 2139095040) >> 31;
          v58 = (float)(1.5 * COERCE_FLOAT(v57 & (1597463174 - v56)))
              - (float)((float)((float)(0.5 * *(float *)v54.i32) * COERCE_FLOAT(v57 & (1597463174 - v56)))
                      * (float)(COERCE_FLOAT(v57 & (1597463174 - v56)) * COERCE_FLOAT(v57 & (1597463174 - v56))));
          v59 = (float)(1.5 * (float)((float)(1.5 * v58) - (float)((float)(v55 * v58) * (float)(v58 * v58))))
              - (float)((float)(v55 * (float)((float)(1.5 * v58) - (float)((float)(v55 * v58) * (float)(v58 * v58))))
                      * (float)((float)((float)(1.5 * v58) - (float)((float)(v55 * v58) * (float)(v58 * v58)))
                              * (float)((float)(1.5 * v58) - (float)((float)(v55 * v58) * (float)(v58 * v58)))));
        }
        v132 = (hkpConvexVerticesShape::Self *)a1;
        v60 = (float)((float)(v48 - *(float *)(a1 + 32)) * v59) * v153;
        v61 = (float)(v52 * v59) * v153;
        v62 = (float)(v53 * v59) * v153;
        v63 = (float)(v59 * (float)(v138 - v136)) * v153;
        *(float *)(a1 + 32) = *(float *)(a1 + 32) + v60;
        *(float *)(a1 + 48) = v48 - v60;
        *(float *)(a1 + 36) = v144 + v61;
        *(float *)(a1 + 40) = v140 + v62;
        *(float *)(a1 + 44) = v136 + v63;
        *(float *)(a1 + 52) = v49 - v61;
        *(float *)(a1 + 56) = v51 - v62;
        *(float *)(a1 + 60) = v138 - v63;
        goto LABEL_48;
      case 3:
        v35 = *(float *)(a1 + 16);
        v163 = *(hkpConvexShape::Self ***)(a1 + 32);
        v36 = v163;
        v164 = *(int *)(a1 + 36);
        v37 = v164;
        v165 = *(float *)(a1 + 40);
        v38 = v165;
        v166 = *(float *)(a1 + 44);
        v39 = fminf(fminf(*(float *)&v163, *(float *)&v164), v165) * 0.5;
        if ( v35 > v39 )
        {
          hkErrStream::Construct((hkErrStream::Self *)v162, (hkString::Self *)&v167, 512);
          v64 = hkOstream::opShl(
                  (int)(uintptr_t)v162,
                  (hkString::Self *)"Box shape too small compared to 'extra radius' - radius changed from ");
          v65 = hkOstream::opShl(v64, LODWORD(v35));
          v66 = hkOstream::opShl(v65, (hkString::Self *)" to ");
          v67 = hkOstream::opShl(v66, LODWORD(v39));
          hkOstream::opShl(v67, (hkString::Self *)".");
          hkError::messageWarning(
            (hkError::Self *)0xABBAFA2D,
            (int)(uintptr_t)&v167,
            "Util/ShapeShrinker/hkpShapeShrinker.cpp",
            (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_1C4)->st_shndx,
            v125);
          hkErrStream::Destroy((hkErrStream::Self *)v162);
          v36 = v163;
          v35 = v39;
          v37 = v164;
          v38 = v165;
        }
        *(float *)&v163 = *(float *)&v36 - v35;
        *(float *)&v164 = *(float *)&v37 - v35;
        v165 = v38 - v35;
        v166 = v166 - v35;
        hkpBoxShape::setHalfExtents((hkpBoxShape::Self *)a1, (const hkVector4f::Self *)&v163);
        v132 = (hkpConvexVerticesShape::Self *)a1;
        *(float *)(a1 + 16) = v35;
        goto LABEL_48;
      case 5:
        if ( *(float *)(a1 + 16) <= 0.0 )
        {
          *(uint32_t *)(a1 + 16) = 0;
          return nullptr;
        }
        v128 = *(uint32_t *)(a1 + 96) != 0;
        hkpConvexVerticesConnectivityUtil::ensureConnectivity(
          (hkpConvexVerticesConnectivityUtil::Self *)v157,
          (const hkpConvexVerticesShape::Self *)a1);
        v149 = *(float *)(a1 + 16);
        v132 = (hkpConvexVerticesShape::Self *)sub_16F52C0(
                                           (hkpConvexVerticesShape::Self *)a1,
                                           v152,
                                           (const hkVector4f::Self *)LODWORD(v149),
                                           v121);
        if ( v132 != nullptr )
        {
          v158 = 0;
          *(g4_int128_t *)v162 = 0;
          v159 = 0;
          v160 = 0x80000000;
          hkpConvexVerticesShape::getOriginalVertices(
            (hkpConvexVerticesShape::Self *)a1,
            (hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)&v158);
          hkgpConvexHull::Construct((hkgpConvexHull::Self *)&v167);
          hkgpConvexHull::BuildConfig::Construct((hkgpConvexHull::BuildConfig::Self *)&v163);
          v161[0] = v158;
          v161[1] = v159;
          v161[2] = 16;
          hkgpConvexHull::build(&v167, v161, &v163);
          if ( hkgpConvexHull::getDimensions((hkgpConvexHull::Self *)&v167) == 3 )
          {
            hkgpConvexHull::buildMassProperties((hkgpConvexHull::Self *)v157);
            *(g4_int128_t *)v162 = *(g4_int128_t *)hkgpConvexHull::getCenterOfMass((hkgpConvexHull::Self *)&v167);
          }
          hkgpConvexHull::Destroy((hkgpConvexHull::Self *)&v167);
          v159 = 0;
          if ( v160 >= 0 )
            (*(void ( **)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
              (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
              v158,
              16 * v160);
          v122 = v162;
          sub_16F4B90();
          v29 = *(float *)(a1 + 16);
          if ( (float)(v29 + v29) >= 0.0 )
            goto LABEL_37;
          *(float *)(a1 + 16) = (float)((float)((float)(v29 + v29) * 0.9f) / 0.0) * v29;
          v81 = (float)((float)((float)(v29 + v29) * 0.9f) / 0.0) * v29;
          if ( *((uint16_t *)v132 + 3) != 0 )
          {
            do
            {
              v83 = *((uint32_t *)v132 + 1);
              HIWORD(v82) = HIWORD(v83);
              LOWORD(v82) = 0;
              v84 = v82 | (uint16_t)(v83 - 1);
              v85 = v83;
            }
            while ( v85 != __sync_val_compare_and_swap((volatile int32_t *)v132 + 1, v85, v84) );
            if ( (uint16_t)v84 == 0 )
            {
              v122 = (int *)v132;
              (*(void (**)(void))(*(uint32_t *)v132 + 16))();
            }
            v81 = *(float *)(a1 + 16);
          }
          v132 = (hkpConvexVerticesShape::Self *)sub_16F52C0(
                                             (hkpConvexVerticesShape::Self *)a1,
                                             v152,
                                             (const hkVector4f::Self *)LODWORD(v81),
                                             (int)(uintptr_t)v122);
          if ( v132 != nullptr )
          {
LABEL_37:
            if ( fabs(*((float *)v132 + 4) - v149) > 0.001f )
            {
              hkErrStream::Construct((hkErrStream::Self *)&v163, (hkString::Self *)&v167, 512);
              v154 = *((uint32_t *)v132 + 4);
              v30 = hkOstream::opShl(
                      (int)(uintptr_t)&v163,
                      (hkString::Self *)"Convex vertices shape too small compared to 'extra radius' - radius changed from ");
              v31 = hkOstream::opShl(v30, LODWORD(v149));
              v32 = hkOstream::opShl(v31, (hkString::Self *)" to ");
              v33 = (int)(uintptr_t)(hkOstream::opShl(v32, v154));
              hkOstream::opShl(v33, (hkString::Self *)".");
              hkError::messageWarning(
                (hkError::Self *)0xABBAFA2E,
                (int)(uintptr_t)&v167,
                "Util/ShapeShrinker/hkpShapeShrinker.cpp",
                &stru_224[5],
                v125);
              hkErrStream::Destroy((hkErrStream::Self *)&v163);
            }
            PlaneEquations = (const hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)hkpConvexVerticesShape::getPlaneEquations((hkpConvexVerticesShape::Self *)a1);
            if ( *((uint32_t *)PlaneEquations + 1) < *(uint32_t *)(*((uint32_t *)v132 + 24) + 24) )
            {
              *(float *)&v163 = 0.0;
              *(float *)&v164 = 0.0;
              v165 = -0.0;
              hkpConvexVerticesShape::getOriginalVertices(v132, (hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)&v163);
              v167 = 0;
              v168 = 0;
              v169 = 0x80000000;
              v69 = *((uint32_t **)v132 + 24);
              v126 = *((float *)v132 + 4);
              v134 = v69;
              if ( (int)v69[6] > 0 )
              {
                hkArrayUtil::reserve(
                  (hkArrayUtil::Self *)v157,
                  (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
                  &v167,
                  v69[6],
                  16);
                v86 = v69[6];
                if ( v86 > 0 )
                {
                  v127 = 0;
                  for ( i = 0; i < v86; ++i )
                  {
                    v87 = v134[5];
                    v88 = v87 + i;
                    v89 = *(uint8_t *)(v87 + i);
                    v139 = v89;
                    if ( v89 <= 2 )
                    {
                      --v86;
                      v116 = i + v87 + 1;
                      v134[6] = v86;
                      v117 = v86 - i;
                      if ( v86 - i > 0 )
                      {
                        if ( v88 < v88 + 17 || (unsigned int)v117 <= 0xF )
                        {
                          v119 = 0;
                          do
                          {
                            *(uint8_t *)(v88 + v119) = *(uint8_t *)(v116 + v119);
                            ++v119;
                          }
                          while ( v119 != v117 );
                        }
                        else
                        {
                          v118 = 0;
                          v156 = 0;
                          v146 = 16 * ((unsigned int)v117 >> 4);
                          do
                          {
                            ++v156;
                            *(__m128i *)(v88 + v118) = *(__m128i *)(v88 + v118 + 1);
                            v118 += 16;
                          }
                          while ( (unsigned int)v117 >> 4 > v156 );
                          if ( v146 != v117 )
                          {
                            *(uint8_t *)(v88 + v146) = *(uint8_t *)(v116 + v146);
                            if ( v117 > v146 + 1 )
                            {
                              *(uint8_t *)(v88 + v146 + 1) = *(uint8_t *)(v116 + v146 + 1);
                              if ( v117 > v146 + 2 )
                              {
                                *(uint8_t *)(v88 + v146 + 2) = *(uint8_t *)(v116 + v146 + 2);
                                if ( v117 > v146 + 3 )
                                {
                                  *(uint8_t *)(v88 + v146 + 3) = *(uint8_t *)(v116 + v146 + 3);
                                  if ( v117 > v146 + 4 )
                                  {
                                    *(uint8_t *)(v88 + v146 + 4) = *(uint8_t *)(v116 + v146 + 4);
                                    if ( v117 > v146 + 5 )
                                    {
                                      *(uint8_t *)(v88 + v146 + 5) = *(uint8_t *)(v116 + v146 + 5);
                                      if ( v117 > v146 + 6 )
                                      {
                                        *(uint8_t *)(v88 + v146 + 6) = *(uint8_t *)(v116 + v146 + 6);
                                        if ( v117 > v146 + 7 )
                                        {
                                          *(uint8_t *)(v88 + v146 + 7) = *(uint8_t *)(v116 + v146 + 7);
                                          if ( v117 > v146 + 8 )
                                          {
                                            *(uint8_t *)(v88 + v146 + 8) = *(uint8_t *)(v116 + v146 + 8);
                                            if ( v117 > v146 + 9 )
                                            {
                                              *(uint8_t *)(v88 + v146 + 9) = *(uint8_t *)(v116 + v146 + 9);
                                              if ( v117 > v146 + 10 )
                                              {
                                                *(uint8_t *)(v88 + v146 + 10) = *(uint8_t *)(v116 + v146 + 10);
                                                if ( v117 > v146 + 11 )
                                                {
                                                  *(uint8_t *)(v88 + v146 + 11) = *(uint8_t *)(v116 + v146 + 11);
                                                  if ( v117 > v146 + 12 )
                                                  {
                                                    *(uint8_t *)(v88 + v146 + 12) = *(uint8_t *)(v116 + v146 + 12);
                                                    if ( v117 > v146 + 13 )
                                                    {
                                                      *(uint8_t *)(v88 + v146 + 13) = *(uint8_t *)(v116 + v146 + 13);
                                                      if ( v117 > v146 + 14 )
                                                        *(uint8_t *)(v88 + v146 + 14) = *(uint8_t *)(v116 + v146 + 14);
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        v86 = v134[6];
                      }
                      --i;
                      v127 += v139;
                    }
                    else
                    {
                      v135 = 2 * v127;
                      v90 = 0.0;
                      v91 = 0.0;
                      v92.i32[0] = 0;
                      v130 = 0;
                      v151 = 0.0;
                      j = 0;
                      v155 = 0.0;
                      v94 = v89 + 1;
                      v145 = 0.0;
                      while ( v139 > v130 && j == 0 )
                      {
                        ++v130;
                        v137 = v135 + 2;
                        v141 = v130;
                        for ( j = 0; v139 > v141; v137 += 2 )
                        {
                          if ( j != 0 )
                            break;
                          if ( v139 <= ++v141 )
                          {
LABEL_104:
                            j = 0;
                          }
                          else
                          {
                            v95 = v141 + 1;
                            v96 = v134[2];
                            v97 = (float *)&v163[4 * *(uint16_t *)(v96 + v135)];
                            v145 = *v97;
                            v155 = v97[1];
                            v151 = v97[2];
                            v98 = *(uint16_t *)(v96 + v137);
                            v99 = 2 * v127 + v96;
                            v100 = (float *)&v163[4 * v98];
                            v101 = *v100 - v145;
                            v102 = v100[1] - v155;
                            v103 = v100[2] - v151;
                            while ( 1 )
                            {
                              v104 = &v163[4 * *(uint16_t *)(v99 + 2 * v95 - 2)];
                              do { std::memset(&v105, 0, 16); v105.u64[0] = (uint64_t)(uintptr_t)((unsigned int)(uintptr_t)v104[2]); } while (0);
                              v106 = *((float *)v104 + 1) - v155;
                              *(float *)v105.i32 = *(float *)v105.i32 - v151;
                              v107 = *(float *)v104 - v145;
                              v92 = v105;
                              *(float *)v92.i32 = (float)(*(float *)v105.i32 * v102) - (float)(v106 * v103);
                              v91 = (float)(v107 * v103) - (float)(*(float *)v105.i32 * v101);
                              v90 = (float)(v106 * v101) - (float)(v107 * v102);
                              v108 = v92;
                              *(float *)v108.i32 = (float)((float)(*(float *)v92.i32
                                                                       * *(float *)v92.i32)
                                                               + (float)(v91 * v91))
                                                       + (float)(v90 * v90);
                              if ( *(float *)v108.i32 > 0.0 )
                                break;
                              if ( ++v95 == v94 )
                                goto LABEL_104;
                            }
                            v109 = 0.5 * *(float *)v108.i32;
                            v110 = _mm_cvtsi128_si32(v108) >> 1;
                            v111 = (_mm_cvtsi128_si32(v108) + 2139095040) >> 31;
                            v112 = (float)(1.5 * COERCE_FLOAT(v111 & (1597463174 - v110)))
                                 - (float)((float)((float)(0.5 * *(float *)v108.i32)
                                                 * COERCE_FLOAT(v111 & (1597463174 - v110)))
                                         * (float)(COERCE_FLOAT(v111 & (1597463174 - v110))
                                                 * COERCE_FLOAT(v111 & (1597463174 - v110))));
                            v113 = (float)(1.5
                                         * (float)((float)(1.5 * v112)
                                                 - (float)((float)(v109 * v112) * (float)(v112 * v112))))
                                 - (float)((float)(v109
                                                 * (float)((float)(1.5 * v112)
                                                         - (float)((float)(v109 * v112) * (float)(v112 * v112))))
                                         * (float)((float)((float)(1.5 * v112)
                                                         - (float)((float)(v109 * v112) * (float)(v112 * v112)))
                                                 * (float)((float)(1.5 * v112)
                                                         - (float)((float)(v109 * v112) * (float)(v112 * v112)))));
                            *(float *)v92.i32 = *(float *)v92.i32 * v113;
                            j = 1;
                            v91 = v91 * v113;
                            v90 = v90 * v113;
                          }
                        }
                        v135 += 2;
                      }
                      v127 += v139;
                      if ( j != 0 )
                      {
                        v114 = (float)((float)(v145 * *(float *)v92.i32) + (float)(v155 * v91))
                             + (float)(v151 * v90);
                      }
                      else
                      {
                        v92.i32[0] = 0;
                        v90 = 0.0;
                        v114 = 0.0;
                        v91 = 0.0;
                      }
                      v115 = v167 + 16 * v168;
                      *(uint32_t *)v115 = v92.i32[0];
                      *(float *)(v115 + 4) = v91;
                      *(float *)(v115 + 8) = v90;
                      *(float *)(v115 + 12) = -(float)(v114 + v126);
                      ++v168;
                      v86 = v134[6];
                    }
                  }
                }
              }
              hkpConvexVerticesShape::setPlaneEquations(
                v132,
                (const hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)&v167);
              v168 = 0;
              if ( v169 >= 0 )
                (*(void ( **)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
                  (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                  v167,
                  16 * v169);
              v167 = 0;
              v169 = 0x80000000;
              *(float *)&v164 = 0.0;
              if ( !__builtin_signbit(v165) )
                (*(void ( **)(uint32_t *, hkpConvexShape::Self **, int))(hkContainerHeapAllocator::s_alloc + 20))(
                  (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                  v163,
                  16 * LODWORD(v165));
            }
            else
            {
              hkpConvexVerticesShape::setPlaneEquations(v132, PlaneEquations);
            }
            if ( !v128 )
            {
              hkpConvexVerticesShape::setConnectivity((hkpConvexVerticesShape::Self *)a1, nullptr, true);
              hkpConvexVerticesShape::setConnectivity(v132, nullptr, true);
            }
LABEL_47:
            if ( v132 != nullptr )
            {
LABEL_48:
              *((uint32_t *)v132 + 3) = *(uint32_t *)(a1 + 12);
              v40 = *((uint32_t *)a2 + 1);
              if ( v40 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
              {
                hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, &byte_8, v124);
                v40 = *((uint32_t *)a2 + 1);
              }
              v41 = (uint32_t *)(*(uint32_t *)a2 + 8 * v40);
              *v41 = a1;
              v41[1] = (uint32_t)(uintptr_t)(v132);
              ++*((uint32_t *)a2 + 1);
            }
            return v132;
          }
          hkErrStream::Construct((hkErrStream::Self *)&v163, (hkString::Self *)&v167, 512);
          hkOstream::opShl((int)(uintptr_t)&v163, (hkString::Self *)"Suspicious convex vertices shape");
          hkError::messageWarning(
            (hkError::Self *)0xDD12EE34,
            (int)(uintptr_t)&v167,
            "Util/ShapeShrinker/hkpShapeShrinker.cpp",
            (const char *)(uintptr_t)0x215,
            v125);
          hkErrStream::Destroy((hkErrStream::Self *)&v163);
          *(uint32_t *)(a1 + 16) = 0;
          v68 = (hkpConvexVerticesShape::Self *)a1;
          if ( !v128 )
            goto LABEL_67;
        }
        else
        {
          v68 = (hkpConvexVerticesShape::Self *)a1;
          *(uint32_t *)(a1 + 16) = 0;
          if ( !v128 )
          {
LABEL_67:
            hkpConvexVerticesShape::setConnectivity(v68, nullptr, true);
            return nullptr;
          }
        }
        return nullptr;
      case 6:
      case 8:
      case 0x12:
      case 0x1A:
        v21 = G4_VCALL<int>(a1, 64);
        v142 = true;
        v22 = *(uint8_t *)(a1 + 8);
        if ( v22 != 8 )
          v142 = v22 == 26;
        *(float *)&v163 = 0.0;
        *(float *)&v164 = 0.0;
        v165 = -0.0;
        v23 = G4_VCALL<int>(v21, 8);
        if ( v23 > 0 )
          hkArrayUtil::reserve(
            (hkArrayUtil::Self *)v157,
            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
            &v163,
            v23,
            4);
        v143 = 0;
        v24 = G4_VCALL<int>(v21, 12);
        if ( v24 == -1 )
          goto LABEL_58;
        do
        {
          v148 = v24;
          v25 = (hkpConvexShape::Self *)G4_VCALL<int>(v21, 24, v24, &v167);
          LOBYTE(v120) = v152;
          v26 = sub_16F57D0(v120);
          v27 = v148;
          if ( v26 != 0 )
          {
            v25 = (hkpConvexShape::Self *)v26;
            v143 = 1;
          }
          v28 = v164;
          if ( v164 == (LODWORD(v165) & 0x3FFFFFFF) )
          {
            hkArrayUtil::reserveMore(
              (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
              (hkMemoryAllocator::Self *)&v163,
              &loc_4,
              v124);
            v28 = v164;
            v27 = v148;
          }
          v163[v28] = v25;
          ++v164;
          v24 = G4_VCALL<int>(v21, 16, v27);
        }
        while ( v24 != -1 );
        if ( v143 == 0 || !v142 )
          goto LABEL_58;
        v44 = *(uint8_t *)(a1 + 8);
        if ( v44 == 8 )
        {
          v70 = v163;
          v71 = v164;
          address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
          v73 = (*(int ( **)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                  *(uint32_t *)(*(uint32_t *)address + 44),
                  112);
          v123 = v70;
          v132 = (hkpConvexVerticesShape::Self *)v73;
          v74 = v73;
          hkpListShape::Construct(v73, v123, v71, 1);
          if ( v164 > 0 )
          {
            for ( k = 0; k < v164; ++k )
            {
              *(uint32_t *)(*(uint32_t *)(v74 + 24) + 16 * k + 4) = *(uint32_t *)(*(uint32_t *)(a1 + 24) + 16 * k + 4);
              v76 = *(uint32_t *)(*(uint32_t *)(v74 + 24) + 16 * k);
              if ( v76 != *(uint32_t *)(*(uint32_t *)(a1 + 24) + 16 * k) && *(uint16_t *)(v76 + 6) != 0 )
              {
                v150 = v74;
                do
                {
                  v78 = *(uint32_t *)(v76 + 4);
                  HIWORD(v77) = HIWORD(v78);
                  LOWORD(v77) = 0;
                  v79 = v77 | (uint16_t)(v78 - 1);
                  v80 = v78;
                }
                while ( v80 != __sync_val_compare_and_swap((volatile int32_t *)(v76 + 4), v80, v79) );
                v74 = v150;
                if ( (uint16_t)v79 == 0 )
                  G4_VCALL<void>(v76, 16);
              }
            }
          }
        }
        else if ( v44 == 26 )
        {
          v45 = v163;
          v46 = v164;
          v47 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
          v132 = (hkpConvexVerticesShape::Self *)(*(int ( **)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v47 + 44) + 8))(
                                             *(uint32_t *)(*(uint32_t *)v47 + 44),
                                             80);
          hkpConvexListShape::Construct((hkpConvexListShape::Self *)(v132), v45, v46);
        }
        else
        {
LABEL_58:
          v132 = nullptr;
        }
        *(float *)&v164 = 0.0;
        if ( !__builtin_signbit(v165) )
          (*(void ( **)(uint32_t *, hkpConvexShape::Self **, int))(hkContainerHeapAllocator::s_alloc + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v163,
            4 * LODWORD(v165));
        goto LABEL_47;
      case 0xA:
        v14 = sub_16F57D0(a4);
        if ( v14 == 0 )
          return nullptr;
        v15 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        v132 = (hkpConvexVerticesShape::Self *)(*(int ( **)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v15 + 44) + 8))(
                                           *(uint32_t *)(*(uint32_t *)v15 + 44),
                                           48);
        hkpConvexTransformShapeBase::Construct((int32_t)(uintptr_t)(v132), 10, *(uint32_t *)(v14 + 16), v14, 1);
        *(uint32_t *)v132 = off_209A948;
        v16 = *(uint32_t *)(a1 + 32);
        v17 = *(uint32_t *)(a1 + 36);
        v18 = *(uint32_t *)(a1 + 40);
        *((uint32_t *)v132 + 11) = 0;
        *((uint32_t *)v132 + 8) = v16;
        *((uint32_t *)v132 + 7) = 0;
        *((uint32_t *)v132 + 9) = v17;
        *((uint32_t *)v132 + 10) = v18;
        goto LABEL_48;
      case 0xB:
        v42 = sub_16F57D0(a4);
        if ( v42 == 0 )
          return nullptr;
        hkQsTransformf::copyToTransformNoScale((hkQsTransformf::Self *)(a1 + 32), (hkTransformf::Self *)&v167);
        v43 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        v132 = (hkpConvexVerticesShape::Self *)(*(int ( **)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v43 + 44) + 8))(
                                           *(uint32_t *)(*(uint32_t *)v43 + 44),
                                           96);
        hkpConvexTransformShape::Construct((int)(uintptr_t)v132, v42, (hkTransformf::Self *)&v167, 1);
        goto LABEL_47;
      case 0xE:
        v19 = (const hkpShape::Self *)sub_16F57D0(a4);
        if ( v19 == nullptr )
          return nullptr;
        v20 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        v132 = (hkpConvexVerticesShape::Self *)(*(int ( **)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v20 + 44) + 8))(
                                           *(uint32_t *)(*(uint32_t *)v20 + 44),
                                           112);
        hkpTransformShape::Construct((hkpTransformShape::Self *)(v132), v19, (const hkTransformf::Self *)(a1 + 48));
        goto LABEL_47;
      case 0x1E:
        v132 = (hkpConvexVerticesShape::Self *)sub_16F57D0(a4);
        goto LABEL_47;
      default:
        return nullptr;
    }
  }
  if ( **(uint32_t **)a2 != a1 )
  {
    v5 = *(uint32_t *)a2 + 8;
    v6 = 0;
    while ( ++v6 != v4 )
    {
      v7 = v5;
      v5 += 8;
      if ( *(uint32_t *)(v5 - 8) == a1 )
        return *(hkpConvexVerticesShape::Self **)(v7 + 4);
    }
    goto LABEL_6;
  }
  v7 = *(uint32_t *)a2;
  return *(hkpConvexVerticesShape::Self **)(v7 + 4);
}

// Binary VA: 0x1821450 (source: lib_batch_3.json)
int sub_1821450(int a1, int a2, hkTransformf::Self *a3, hkMemoryAllocator::Self *a4, __m128 *a5)
{
  int result;
  float v7; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  int v11;
  int v12;
  hkMemoryAllocator::Self *v13; // [esp-Ch] [ebp-98h]
  int v14;
  int v15;
  int v19[16];
  int v20;
  int v21;
  int v22;
  int v23; // [esp+4Ch] [ebp-40h]
  int v24;
  int v25;
  int v26;
  int v27; // [esp+5Ch] [ebp-30h]
  int v28;
  int v29;
  int v30;
  int v31; // [esp+6Ch] [ebp-20h]
  float v32;
  float v33;
  float v34;
  float v35; // [esp+7Ch] [ebp-10h]

  switch ( *(uint8_t *)(a2 + 8) )
  {
    case 0:
      result = hkpShapeDisplayBuilder::buildShapeDisplay_Sphere(a1, a2, (uint32_t *)(a3), (int)(uintptr_t)a4, a5->f32);
      break;
    case 1:
      result = hkpShapeDisplayBuilder::buildShapeDisplay_Cylinder(
                 a1,
                 (hkpCylinderShape::Self *)a2,
                 (int)(uintptr_t)a3,
                 (int)(uintptr_t)a4,
                 (int)(uintptr_t)a5,
                 (int)(uintptr_t)v13,
                 v14,
                 v15);
      break;
    case 2:
      result = hkpShapeDisplayBuilder::buildShapeDisplay_Triangle(a1, (float *)a2, a3, (uint32_t *)(a4), (int *)a5);
      break;
    case 3:
      result = hkpShapeDisplayBuilder::buildShapeDisplay_Box(a1, (__m128 *)a2, (uint32_t *)(a3), (int)(uintptr_t)a4, a5);
      break;
    case 4:
      result = hkpShapeDisplayBuilder::buildShapeDisplay_Capsule(a1, a2, a3, a4, a5);
      break;
    case 5:
      result = hkpShapeDisplayBuilder::buildShapeDisplay_ConvexVertices(a1, (int *)a2, (int)(uintptr_t)a3, (int)(uintptr_t)a4, (int)(uintptr_t)a5);
      break;
    case 6:
    case 7:
    case 0x12:
    case 0x16:
    case 0x1A:
    case 0x1B:
      v11 = G4_VCALL<int>(a2, 64);
      result = hkpShapeDisplayBuilder::buildShapeDisplay_ShapeContainer(a1, v11, a3, a4);
      break;
    case 8:
      result = hkpShapeDisplayBuilder::buildShapeDisplay_ListShape(a1, (uint32_t *)(uintptr_t)(a2), a3, a4);
      break;
    case 9:
      result = (int)(uintptr_t)(hkpShapeDisplayBuilder::buildShapeDisplay(a1, *(uint32_t *)(a2 + 52), a3, a4, 0));
      break;
    case 0xA:
      v7 = *(float *)(a2 + 32);
      v8 = *(float *)(a2 + 36);
      v9 = *(float *)(a2 + 40);
      v10 = *(float *)(a2 + 44);
      if ( a5 != nullptr )
      {
        v7 = v7 * a5->f32[0];
        v8 = v8 * a5->f32[1];
        v9 = v9 * a5->f32[2];
        v10 = v10 * a5->f32[3];
      }
      v32 = v7;
      v33 = v8;
      v34 = v9;
      v35 = v10;
      v20 = 1065353216;
      v21 = 0;
      v22 = 0;
      v23 = 0;
      v24 = 0;
      v25 = 1065353216;
      v26 = 0;
      v27 = 0;
      v28 = 0;
      v29 = 0;
      v30 = 1065353216;
      v31 = 0;
      hkTransformf::setMul((hkTransformf::Self *)v19, a3, (const hkTransformf::Self *)&v20);
      result = (int)(uintptr_t)(hkpShapeDisplayBuilder::buildShapeDisplay(a1, *(uint32_t *)(a2 + 24), (hkTransformf::Self *)(uintptr_t)(v19), a4, a5));
      break;
    case 0xB:
      hkQsTransformf::copyToTransformNoScale((hkQsTransformf::Self *)(a2 + 32), (hkTransformf::Self *)v19);
      hkTransformf::setMul((hkTransformf::Self *)&v20, a3, (const hkTransformf::Self *)v19);
      result = (int)(uintptr_t)(hkpShapeDisplayBuilder::buildShapeDisplay(a1, *(uint32_t *)(a2 + 24), (hkTransformf::Self *)(&v20), a4, (__m128 *)(uintptr_t)(a2 + 64)));
      break;
    case 0xC:
      result = hkpShapeDisplayBuilder::buildShapeDisplay_SampledHeightField(a1, (float *)a2, a3, (uint32_t *)(a4));
      break;
    case 0xD:
      result = hkpShapeDisplayBuilder::buildShapeDisplay_ExtendedMeshShape(a1, a2, a3, (hkMemoryAllocator::Self *)(uintptr_t)((int)(uintptr_t)a4));
      break;
    case 0xE:
      hkTransformf::setMul((hkTransformf::Self *)&v20, a3, (const hkTransformf::Self *)(a2 + 48));
      result = (int)(uintptr_t)(hkpShapeDisplayBuilder::buildShapeDisplay(a1, *(uint32_t *)(a2 + 20), (hkTransformf::Self *)(&v20), a4, 0));
      break;
    case 0xF:
      result = hkpShapeDisplayBuilder::buildShapeDisplay_CompressedMeshShape(
                 a1,
                 (hkpCompressedMeshShapeBuilder::Self *)a2,
                 a3,
                 (uint32_t *)(a4));
      break;
    case 0x10:
      result = hkpShapeDisplayBuilder::buildShapeDisplay_StaticCompound(a1, a2, a3, (hkMemoryAllocator::Self *)(uintptr_t)((int)(uintptr_t)a4), (float *)(uintptr_t)((int)(uintptr_t)a5));
      break;
    case 0x11:
      result = hkpShapeDisplayBuilder::buildShapeDisplay_BvCompressedMeshShape(
                 a1,
                 (hkpBvCompressedMeshShape::Self *)a2,
                 a3,
                 (uint32_t *)(a4),
                 (uint32_t *)(a5));
      break;
    case 0x18:
      result = hkpShapeDisplayBuilder::buildShapeDisplay_ConvexPiece(a1, (uint32_t *)a2, a3, a4);
      break;
    case 0x19:
      result = hkpShapeDisplayBuilder::buildShapeDisplay_MultiSphere(a1, a2, (int)(uintptr_t)a3, (uint32_t *)(a4));
      break;
    case 0x1E:
      result = (int)(uintptr_t)(hkpShapeDisplayBuilder::buildShapeDisplay(a1, *(uint32_t *)(a2 + 16), a3, a4, 0));
      break;
    case 0x1F:
      result = hkpShapeDisplayBuilder::buildShapeDisplay_Plane(a1, (unsigned int *)a2, a3, (uint32_t *)(a4));
      break;
    case 0x21:
      result = hkpShapeDisplayBuilder::buildShapeDisplay_MultiRay(a1, a2, a3, (uint32_t *)(a4));
      break;
    default:
      result = hkpShapeDisplayBuilder::buildShapeDisplay_ShapeUnregistered(
                 a1,
                 a2,
                 (int)(uintptr_t)a3,
                 (int)(uintptr_t)a4,
                 v12,
                 v13,
                 v14,
                 v15,
                 v19[0],
                 v19[1],
                 v19[2],
                 *(float *)&v19[3],
                 *(float *)&v19[4],
                 *(float *)&v19[5],
                 *(float *)&v19[6],
                 *(float *)&v19[7],
                 *(float *)&v19[8],
                 *(float *)&v19[9],
                 *(float *)&v19[10],
                 *(float *)&v19[11],
                 *(float *)&v19[12],
                 *(float *)&v19[13],
                 v19[14],
                 v19[15],
                 v20,
                 v21,
                 v22,
                 v23,
                 v24,
                 v25,
                 v26,
                 v27,
                 v28,
                 v29,
                 v30);
      break;
  }
  return result;
}

// Binary VA: 0x654c40 (source: game_core_batch_1.json)
int sub_654C40(int a1)
{
  int v1;
  int v2;

  v1 = G4_VCALL<int>(a1, 168);
  v2 = 0;
  if ( v1 != 0 )
    LOBYTE(v2) = (*(uint32_t *)((*(int ( **)(int))(*(uint32_t *)a1 + 168))(a1) + 244) & 0x18) == 24;
  return v2;
}

// Binary VA: 0x655b90 (source: game_core_batch_1.json)
void * sub_655B90()
{
  void *result;

  if ( byte_20D4D70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4D70) != 0 )
  {
    sub_5BEF40((int)(uintptr_t)&unk_20D4D80);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4D70);
    __cxa_atexit((void (*)(void *))sub_5BEE10, &unk_20D4D80, &unk_20D1280);
  }
  result = nullptr;
  if ( byte_20D4D84 == 0 )
    return &unk_20D4D80;
  return result;
}

// Binary VA: 0x18546a0 (source: lib_batch_3.json)
uint8_t * sub_18546A0(uint8_t *a1, hkGeometryUtility::Self *a2, hkTransformf::Self *a3, int a4)
{
  int v4;
  int v5;
  hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *v7;
  int v8;
  hkTransformf::Self *v9;
  int v11; // [esp+Ch] [ebp-50h]
  uint8_t v12[4];
  int v13;
  int v14;
  int v15; // [esp+1Ch] [ebp-40h]
  int v16;
  int v17;
  int v18; // [esp+2Ch] [ebp-30h]
  uint32_t v19[10];

  v19[6] = (uint32_t)(uintptr_t)(&a3);
  v13 = 0;
  v9 = a3;
  v8 = a4;
  v14 = 0;
  v15 = 0x80000000;
  (void)v7, hkGeometryUtility::createVerticesFromPlaneEquations((hkGeometryUtility::Self *)a2, (const hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)&v13);
  v4 = v14;
  if ( v14 <= 0 )
  {
    *a1 = 0;
  }
  else
  {
    v16 = 0;
    v17 = 0;
    v18 = 0x80000000;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v12, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v16, v14, 16);
    v17 = v4;
    v11 = v4;
    v5 = 0;
    do
    {
      hkVector4f::setTransformedPos((hkVector4f::Self *)(v16 + 16 * v5), v9, (const hkVector4f::Self *)(16 * v5 + v13));
      ++v5;
    }
    while ( v5 != v11 );
    v19[2] = 16;
    v19[1] = v17;
    v19[0] = v16;
    hkGeometryUtility::createConvexGeometry(v19, v8);
    v17 = 0;
    *a1 = 1;
    if ( v18 >= 0 )
      (*(void ( **)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v16,
        16 * v18);
    v16 = 0;
    v18 = 0x80000000;
  }
  v14 = 0;
  if ( v15 >= 0 )
    (*(void ( **)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v13,
      16 * v15);
  return a1;
}

// Binary VA: 0x18570f0 (source: lib_batch_3.json)
__m128 * sub_18570F0(int a1, uint32_t *a2, hkTransformf::Self *a3, __m128 **a4)
{
  int v5;
  __m128 *result;
  hkpConvexVerticesShape::Self *v7;
  int v8; // [esp-21Ch] [ebp-228h]
  int v10;

  v5 = 0;
  result = (__m128 *)a2[10];
  if ( (int)(uintptr_t)result > 0 )
  {
    do
    {
      v8 = *(uint32_t *)(a2[9] + 4 * v5++);
      v7 = (hkpConvexVerticesShape::Self *)G4_VCALL<int>(a2[8] + 16, 24, v8, &v10);
      result = hkpConvexRadiusBuilder::buildShapeDisplay(a1, v7, a3, a4, nullptr);
    }
    while ( v5 < a2[10] );
  }
  return result;
}

// Binary VA: 0x183dd40 (source: lib_batch_3.json)
int sub_183DD40(int a1, char a2, uint8_t *a3)
{
  int v4;
  uint32_t *v5;
  uint32_t *v6;
  int v7;
  uint32_t *v8;
  uint32_t *v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  int v13;
  uint32_t *v14;
  int result;
  int v16;
  int *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v24;
  int v25; // [esp+Ch] [ebp-10h]

  v4 = *(uint32_t *)(a1 + 128);
  if ( v4 <= 0 )
  {
    result = 0;
    v24 = 0;
    v25 = 0;
  }
  else
  {
    v5 = *(uint32_t **)(a1 + 124);
    v22 = *v5;
    if ( *v5 == 4405 )
    {
      v8 = v5;
LABEL_37:
      v25 = v8[2];
    }
    else
    {
      v6 = v5 + 4;
      v7 = 0;
      while ( ++v7 != v4 )
      {
        v8 = v6;
        v6 += 4;
        if ( *(v6 - 4) == 4405 )
          goto LABEL_37;
      }
      v25 = 0;
    }
    if ( v22 == 4661 )
    {
      v11 = v5;
LABEL_39:
      v24 = v11[2];
    }
    else
    {
      v9 = v5 + 4;
      v10 = 0;
      while ( ++v10 != v4 )
      {
        v11 = v9;
        v9 += 4;
        if ( *(v9 - 4) == 4661 )
          goto LABEL_39;
      }
      v24 = 0;
    }
    if ( v22 == 4660 )
    {
      v14 = v5;
LABEL_35:
      result = v14[2];
    }
    else
    {
      v12 = v5 + 4;
      v13 = 0;
      while ( ++v13 != v4 )
      {
        v14 = v12;
        v12 += 4;
        if ( *(v12 - 4) == 4660 )
          goto LABEL_35;
      }
      result = 0;
    }
  }
  *a3 = 0;
  v16 = *(uint32_t *)(a1 + 128);
  if ( a2 != 0 )
  {
    if ( v16 <= 0 )
      return 0;
    v17 = *(int **)(a1 + 124);
    v18 = *v17;
    if ( *v17 == 4660 )
    {
LABEL_40:
      if ( result == 0 )
        *a3 = 1;
      return result;
    }
    v19 = 0;
    while ( ++v19 != v16 )
    {
      if ( v17[4 * v19] == 4660 )
        goto LABEL_40;
    }
  }
  else
  {
    if ( v16 <= 0 )
      return 0;
    v17 = *(int **)(a1 + 124);
    v18 = *v17;
  }
  if ( v18 == 4661 )
  {
LABEL_43:
    result = v24;
    if ( v24 != 0 )
      return result;
    goto LABEL_44;
  }
  v20 = 0;
  while ( ++v20 < v16 )
  {
    if ( v17[4 * v20] == 4661 )
      goto LABEL_43;
  }
  if ( v18 == 4405 )
  {
LABEL_46:
    result = v25;
    if ( v25 != 0 )
      return result;
LABEL_44:
    *a3 = 1;
    return 0;
  }
  v21 = 0;
  while ( ++v21 < v16 )
  {
    if ( v17[4 * v21] == 4405 )
      goto LABEL_46;
  }
  return 0;
}

// Binary VA: 0x16d9ef0 (source: lib_batch_3.json)
int sub_16D9EF0(int a1, int a2)
{
  int v2;
  int *v3;
  unsigned int v4;
  int i;
  int *v6;
  int v7;
  int v8;
  int v9;
  int result;
  int v11;
  int v12;
  int v13;
  unsigned int v14;
  int *v15;
  int *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24; // [esp+1Ch] [ebp-40h]
  int v25; // [esp+1Ch] [ebp-40h]
  int v26;
  int v27;
  int v29;
  int v30; // [esp+2Ch] [ebp-30h]
  int v31; // [esp+2Ch] [ebp-30h]
  int v32;
  int v33;

  v32 = 0;
  v2 = 0;
  while ( 2 )
  {
    v22 = a2;
    v3 = (int *)(a1 + 8 * v2);
    v26 = *(uint32_t *)(a1 + 8 * ((a2 + v2) >> 1) + 4);
    v4 = *(uint32_t *)(v26 + 20);
    v30 = v2 + 1;
    v24 = v2 + 1;
    for ( i = v2 + 1; ; i = v24 )
    {
      v29 = i - 1;
      if ( *(uint32_t *)(v3[1] + 20) < v4 )
        goto LABEL_16;
      v6 = (int *)(a1 + 8 * v22);
      v7 = v6[1];
      if ( *(uint32_t *)(v7 + 20) > v4 )
      {
        v8 = a1 + 8 * v22 - 8;
        v9 = v22;
        do
        {
          v7 = *(uint32_t *)(v8 + 4);
          --v9;
          v6 = (int *)v8;
          v8 -= 8;
        }
        while ( *(uint32_t *)(v7 + 20) > v4 );
        v22 = v9;
      }
      if ( v22 < v29 )
        break;
      if ( v22 != v29 )
      {
        v11 = *v6;
        v12 = v3[1];
        *v6 = *v3;
        v6[1] = v12;
        *v3 = v11;
        v3[1] = v7;
      }
      --v22;
      v29 = v24;
      if ( v22 < v24 )
        break;
      v4 = *(uint32_t *)(v26 + 20);
LABEL_16:
      ++v24;
      v3 += 2;
    }
    v33 = v22;
    if ( v32 >= v22 )
      goto LABEL_10;
    v13 = v30;
    while ( 2 )
    {
      v25 = v13;
      v23 = v33;
      v31 = *(uint32_t *)(a1 + 8 * ((v32 + v33) >> 1) + 4);
      v14 = *(uint32_t *)(v31 + 20);
      v15 = (int *)(a1 + 8 * v32);
      while ( 2 )
      {
        v27 = v13 - 1;
        if ( *(uint32_t *)(v15[1] + 20) < v14 )
        {
LABEL_33:
          ++v25;
          v15 += 2;
          v13 = v25;
          continue;
        }
        break;
      }
      v16 = (int *)(a1 + 8 * v23);
      v17 = v16[1];
      if ( *(uint32_t *)(v17 + 20) > v14 )
      {
        v18 = v23;
        v19 = a1 + 8 * v23 - 8;
        do
        {
          v17 = *(uint32_t *)(v19 + 4);
          --v18;
          v16 = (int *)v19;
          v19 -= 8;
        }
        while ( *(uint32_t *)(v17 + 20) > v14 );
        v23 = v18;
      }
      if ( v23 >= v27 )
      {
        if ( v23 != v27 )
        {
          v20 = *v16;
          v21 = v15[1];
          *v16 = *v15;
          v16[1] = v21;
          *v15 = v20;
          v15[1] = v17;
        }
        --v23;
        v27 = v25;
        if ( v23 >= v25 )
        {
          v14 = *(uint32_t *)(v31 + 20);
          goto LABEL_33;
        }
      }
      if ( v32 < v23 )
        hkAlgorithm::quickSortRecursive_32947a(
          a1,
          v32,
          v23,
          (int ( *)(int *, uint32_t *))sub_16D9D60);
      if ( v33 > v27 )
      {
        v32 = v27;
        v13 = v27 + 1;
        continue;
      }
      break;
    }
LABEL_10:
    result = v29;
    if ( a2 > v29 )
    {
      v32 = v29;
      v2 = v29;
      continue;
    }
    return result;
  }
}

// Binary VA: 0x1826a80 (source: lib_batch_3.json)
__m128 * sub_1826A80(__m128 *a1, float *a2, float a3, __m128 *a4)
{
  __m128 *result;
  bool v6; // cc
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10;
  int32_t v11;
  int32_t v12;
  __m128 v13;
  __m128 v14;
  __m128i v_m128_i128;
  float v16; // xmm5_4
  int v17;
  float v18; // xmm2_4
  float v19; // xmm1_4
  __m128 v20;
  __m128 v21;
  __m128 v22;
  __m128 v23;
  float v24; // xmm0_4
  int v25;
  int v26;
  __m128 *v27;
  float v28; // xmm4_4
  float v29; // xmm3_4
  float v30; // xmm7_4
  float v31; // xmm6_4
  float v32; // xmm2_4
  float v33; // xmm5_4
  float v34; // xmm2_4
  float v35; // xmm4_4
  float v36; // xmm3_4
  float v37; // xmm2_4
  float v38; // xmm4_4
  float v39; // xmm5_4
  float v40; // xmm6_4
  float v41; // xmm3_4
  float v42; // xmm4_4
  float v43; // xmm7_4
  float v44; // xmm0_4
  float v45; // xmm2_4
  float v46; // xmm4_4
  float v47; // xmm6_4
  float v48; // xmm3_4
  float v49; // xmm2_4
  float v50; // xmm0_4
  float v51; // xmm5_4
  float v52; // xmm3_4
  float v53; // xmm4_4
  uint8_t v54;
  int v55;
  float v56; // xmm0_4
  float v57;
  int32_t v58;
  float v59; // xmm0_4
  int32_t v60;
  float *m128_f32;
  int v62;
  float v63; // xmm3_4
  float v64; // xmm5_4
  float v65; // xmm4_4
  float v66;
  float v67;
  __m128 *v68; // [esp+1Ch] [ebp-394h]
  int v69;
  unsigned int v70; // [esp+2Ch] [ebp-384h]
  int32_t v71; // [esp+2Ch] [ebp-384h]
  float CylinderRadius; // [esp+2Ch] [ebp-384h]
  float v73; // [esp+2Ch] [ebp-384h]
  __m128 *v74;
  char v75[4];
  float v76[4];
  uint32_t v77[4];
  float v78[4];
  float v79;
  float v80; // [esp+6Ch] [ebp-344h]
  float v81;
  float v82;
  float v83;
  float v84; // [esp+7Ch] [ebp-334h]
  float v85;
  float v86;
  float v87;
  float v88; // [esp+8Ch] [ebp-324h]
  float v89;
  float v90;
  float v91[4];
  float v92; // [esp+A8h] [ebp-308h]
  float v93; // [esp+ACh] [ebp-304h]
  float v94; // [esp+B0h] [ebp-300h]
  float v95; // [esp+B4h] [ebp-2FCh]
  uint32_t v96[16]; // [esp+B8h] [ebp-2F8h] BYREF
  float v97; // [esp+F8h] [ebp-2B8h] BYREF
  float v98; // [esp+FCh] [ebp-2B4h]
  int v99;
  int v100; // [esp+10Ch] [ebp-2A4h]
  int v101;
  int v102;
  int v103;
  int v104; // [esp+11Ch] [ebp-294h]
  int v105;
  int v106;
  int v107;
  int v108; // [esp+12Ch] [ebp-284h]
  int v109;
  int v110;
  int v111;
  int v112; // [esp+13Ch] [ebp-274h]
  int v113;
  int v114;
  __m128 v115;
  int v116;
  int v117; // [esp+15Ch] [ebp-254h]
  int v118;
  int v119;
  int v120;
  int v121; // [esp+16Ch] [ebp-244h]
  int v122;
  int v123;
  int32_t v124;
  int32_t v125; // [esp+17Ch] [ebp-234h]
  int32_t v126;
  int32_t v127;
  int v128;
  int v129; // [esp+18Ch] [ebp-224h]
  int v130;
  int v131;
  __m128 v132;
  float v133; // [esp+1A8h] [ebp-208h] BYREF
  float v134; // [esp+1ACh] [ebp-204h]
  float v135; // [esp+1B0h] [ebp-200h]
  float v136; // [esp+1B4h] [ebp-1FCh]
  float v137; // [esp+1B8h] [ebp-1F8h]
  float v138; // [esp+1BCh] [ebp-1F4h]
  float v139; // [esp+1C0h] [ebp-1F0h]
  float v140; // [esp+1C4h] [ebp-1ECh]
  float v141; // [esp+1C8h] [ebp-1E8h]
  float v142; // [esp+1CCh] [ebp-1E4h]
  float v143; // [esp+1D0h] [ebp-1E0h]
  float v144; // [esp+1D4h] [ebp-1DCh]
  int32_t v145; // [esp+1D8h] [ebp-1D8h]
  int v146; // [esp+1DCh] [ebp-1D4h]
  int v147; // [esp+1E0h] [ebp-1D0h]
  int32_t v148; // [esp+1E4h] [ebp-1CCh]
  int32_t v149; // [esp+1E8h] [ebp-1C8h]
  int32_t v150; // [esp+1ECh] [ebp-1C4h]
  int32_t v151; // [esp+1F0h] [ebp-1C0h]
  int32_t v152; // [esp+1F4h] [ebp-1BCh]
  int v153; // [esp+1F8h] [ebp-1B8h]
  int v154; // [esp+1FCh] [ebp-1B4h]
  int v155;
  int v156;
  int v157;
  int v158; // [esp+20Ch] [ebp-1A4h]
  int v159;
  int v160;
  int v161;
  int v162; // [esp+21Ch] [ebp-194h]
  int v163;
  int v164;
  int v165;
  int v166; // [esp+22Ch] [ebp-184h]
  int v167;
  int v168;
  uint64_t v169;
  int v170;
  int v171; // [esp+24Ch] [ebp-164h]
  int v172;
  int v173;
  int v174;
  int v175; // [esp+25Ch] [ebp-154h]
  int v176;
  int v177;
  int32_t v178;
  int32_t v179; // [esp+26Ch] [ebp-144h]
  int32_t v180;
  int32_t v181;
  int v182;
  int v183; // [esp+27Ch] [ebp-134h]
  int v184;
  int v185;
  uint32_t v186[74];

  v186[70] = (uint32_t)(uintptr_t)(&a4);
  result = a4;
  v6 = reinterpret_cast<int8_t *>(a1->f32)[8] <= 0x1Fu;
  v74 = a4;
  v97 = 0.0;
  v98 = 0.0;
  v99 = 0;
  v100 = 0;
  v101 = 0;
  v102 = 0;
  v103 = 0;
  v104 = 0;
  v105 = 0;
  v106 = 0;
  v107 = 0;
  v108 = 0;
  v109 = 0;
  v110 = 0;
  v111 = 0;
  v112 = 0;
  v113 = 0;
  v114 = 0;
  if ( v6 )
  {
    switch ( reinterpret_cast<int8_t *>(a1->f32)[8] )
    {
      case 0:
        result = (__m128 *)hkInertiaTensorComputer::computeSphereVolumeMassProperties(
                             (hkInertiaTensorComputer::Self *)v75,
                             a1[1].f32[0],
                             1.0,
                             (hkMassProperties::Self *)&v97);
        v8 = v97;
        goto LABEL_5;
      case 1:
        v71 = reinterpret_cast<int32_t *>(a1[1].f32)[0];
        v115 = a1[2];
        v132 = a1[3];
        v13 = G4Simd::cast128<__m128>(reinterpret_cast<uint32_t *>(v132.f32)[0]);
        v13.f32[0] = v132.f32[0] - v115.f32[0];
        v14 = G4Simd::cast128<__m128>(reinterpret_cast<uint32_t *>(v132.f32)[2]);
        v_m128_i128 = G4Simd::cast128<__m128i>(v13);
        v14.f32[0] = v132.f32[2] - v115.f32[2];
        v67 = v132.f32[1] - v115.f32[1];
        *(float *)v_m128_i128.i32 = (float)((float)(v13.f32[0] * v13.f32[0]) + (float)(v67 * v67))
                                      + (float)(v14.f32[0] * v14.f32[0]);
        if ( *(float *)v_m128_i128.i32 <= 0.0 )
        {
          v20 = G4Simd::cast128<__m128>(0);
        }
        else
        {
          v16 = 0.5 * *(float *)v_m128_i128.i32;
          v17 = ((_mm_cvtsi128_si32(v_m128_i128) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v_m128_i128) >> 1));
          v20 = G4Simd::cast128<__m128>(0x3FC00000u);
          v18 = (float)(*(float *)&v17 * 1.5)
              - (float)((float)((float)(0.5 * *(float *)v_m128_i128.i32) * *(float *)&v17)
                      * (float)(*(float *)&v17 * *(float *)&v17));
          v19 = (float)(v18 * 1.5)
              - (float)((float)((float)(0.5 * *(float *)v_m128_i128.i32) * v18) * (float)(v18 * v18));
          v20.f32[0] = (float)(1.5 * v19) - (float)((float)(v16 * v19) * (float)(v19 * v19));
        }
        reinterpret_cast<uint64_t *>(v21.f32)[0] = g4_m128_u64_lane(_mm_unpacklo_ps(G4_BITCAST<__m128>(reinterpret_cast<uint32_t *>(v115.f32)[0]), G4_BITCAST<__m128>(reinterpret_cast<uint32_t *>(v115.f32)[1])), 0);
        reinterpret_cast<uint64_t *>(v21.f32)[1] = g4_m128_u64_lane(_mm_unpacklo_ps(G4_BITCAST<__m128>(reinterpret_cast<uint32_t *>(v115.f32)[2]), G4_BITCAST<__m128>(reinterpret_cast<uint32_t *>(v115.f32)[3])), 0);
        reinterpret_cast<uint64_t *>(v22.f32)[0] = g4_m128_u64_lane(_mm_unpacklo_ps(v13, G4_BITCAST<__m128>(LODWORD(v67))), 0);
        reinterpret_cast<uint64_t *>(v22.f32)[1] = g4_m128_u64_lane(_mm_unpacklo_ps(v14, G4_BITCAST<__m128>(COERCE_UNSIGNED_INT(v132.f32[3] - v115.f32[3]))), 0);
        v23 = _mm_mul_ps(
                _mm_shuffle_ps(G4_BITCAST<__m128>((unsigned int)v71), G4_BITCAST<__m128>((unsigned int)v71), 0),
                _mm_mul_ps(v22, _mm_shuffle_ps(v20, v20, 0)));
        v115 = _mm_sub_ps(v21, v23);
        reinterpret_cast<uint64_t *>(v21.f32)[0] = g4_m128_u64_lane(_mm_unpacklo_ps(G4_BITCAST<__m128>(reinterpret_cast<uint32_t *>(v132.f32)[0]), G4_BITCAST<__m128>(reinterpret_cast<uint32_t *>(v132.f32)[1])), 0);
        reinterpret_cast<uint64_t *>(v21.f32)[1] = g4_m128_u64_lane(_mm_unpacklo_ps(G4_BITCAST<__m128>(reinterpret_cast<uint32_t *>(v132.f32)[2]), G4_BITCAST<__m128>(reinterpret_cast<uint32_t *>(v132.f32)[3])), 0);
        v132 = _mm_add_ps(v21, v23);
        CylinderRadius = hkpCylinderShape::getCylinderRadius((hkpCylinderShape::Self *)a1);
        result = (__m128 *)hkInertiaTensorComputer::computeCylinderVolumeMassProperties(0.0f, 0.0f, 0.0f, 0.0f, 
                             (hkInertiaTensorComputer::Self *)v75,
                             (const hkVector4f::Self *)&v115,
                             (const hkVector4f::Self *)&v132,
                             CylinderRadius + a1[1].f32[0],
                             1.0,
                             (hkMassProperties::Self *)&v97);
        v8 = v97;
        goto LABEL_5;
      case 2:
        result = (__m128 *)hkInertiaTensorComputer::computeTriangleSurfaceMassProperties(
                             (hkInertiaTensorComputer::Self *)v75,
                             (const hkVector4f::Self *)&a1[2],
                             (const hkVector4f::Self *)&a1[3],
                             (const hkVector4f::Self *)&a1[4],
                             1.0,
                             fmaxf(a1[1].f32[0], a3),
                             (hkMassProperties::Self *)&v97);
        v8 = v97;
        goto LABEL_5;
      case 3:
        v24 = a1[1].f32[0];
        v132 = a1[2];
        v132.f32[0] = v132.f32[0] + v24;
        v132.f32[1] = v132.f32[1] + v24;
        v132.f32[2] = v24 + v132.f32[2];
        v132.f32[3] = v132.f32[3] + 0.0;
        result = (__m128 *)hkInertiaTensorComputer::computeBoxVolumeMassProperties(0, 0, 0, 0, 
                             (hkInertiaTensorComputer::Self *)v75,
                             (const hkVector4f::Self *)&v132,
                             1.0,
                             (hkMassProperties::Self *)&v97);
        v8 = v97;
        goto LABEL_5;
      case 4:
        result = (__m128 *)hkInertiaTensorComputer::computeCapsuleVolumeMassProperties(0, 0, 0, 0, 
                             (hkInertiaTensorComputer::Self *)v75,
                             (const hkVector4f::Self *)&a1[2],
                             (const hkVector4f::Self *)&a1[3],
                             a1[1].f32[0],
                             1.0,
                             (hkMassProperties::Self *)&v97);
        goto LABEL_19;
      case 5:
        reinterpret_cast<uint64_t *>(v115.f32)[0] = 0;
        reinterpret_cast<int32_t *>(v115.f32)[2] = 0x80000000;
        hkpConvexVerticesShape::getOriginalVertices(
          (hkpConvexVerticesShape::Self *)a1,
          (hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)&v115);
        reinterpret_cast<uint64_t *>(v132.f32)[0] = reinterpret_cast<uint64_t *>(v115.f32)[0];
        reinterpret_cast<int32_t *>(v132.f32)[2] = 16;
        hkInertiaTensorComputer::computeConvexHullMassProperties((hkInertiaTensorComputer::Self *)v75, (int)(uintptr_t)&v132, a1[1].f32[0], (hkMassProperties::Self *)&v97);
        result = (__m128 *)reinterpret_cast<int32_t *>(v115.f32)[2];
        reinterpret_cast<int32_t *>(v115.f32)[1] = 0;
        if ( reinterpret_cast<int32_t *>(v115.f32)[2] >= 0 )
          result = (__m128 *)(*(int ( **)(uint32_t *, int32_t, int32_t, float *))(hkContainerHeapAllocator::s_alloc
                                                                                     + 20))(
                               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                               reinterpret_cast<int32_t *>(v115.f32)[0],
                               16 * reinterpret_cast<int32_t *>(v115.f32)[2],
                               &v97);
LABEL_19:
        v8 = v97;
        goto LABEL_5;
      case 6:
      case 7:
      case 8:
      case 9:
      case 0xD:
      case 0xF:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x16:
      case 0x1A:
      case 0x1B:
        v25 = (*(int ( **)(__m128 *))(reinterpret_cast<int32_t *>(a1->f32)[0] + 64))(a1);
        v26 = G4_VCALL<int>(v25, 12);
        result = &v132;
        if ( v26 != -1 )
        {
          v27 = (__m128 *)v26;
          do
          {
            if ( G4_VCALL<int>(v25, 24, v27, &v132) != 0 )
              sub_1826A80(v74);
            result = (__m128 *)G4_VCALL<int>(v25, 16, v27);
            v27 = result;
          }
          while ( result != (__m128 *)-1 );
        }
        return result;
      case 0xA:
        v115 = G4Simd::cast128<__m128>(xmmword_1D12FD0);
        v116 = 0;
        v117 = 1065353216;
        v118 = 0;
        v119 = 0;
        v120 = 0;
        v121 = 0;
        v122 = 1065353216;
        v123 = 0;
        v124 = reinterpret_cast<int32_t *>(a1[2].f32)[0];
        v125 = reinterpret_cast<int32_t *>(a1[2].f32)[1];
        v126 = reinterpret_cast<int32_t *>(a1[2].f32)[2];
        v127 = reinterpret_cast<int32_t *>(a1[2].f32)[3];
        hkTransformf::setMul((hkTransformf::Self *)&v132, (const hkTransformf::Self *)a2, (const hkTransformf::Self *)&v115);
        return (__m128 *)sub_1826A80(v74);
      case 0xB:
        reinterpret_cast<uint64_t *>(v115.f32)[0] = 0;
        v116 = 0;
        v117 = 0;
        v118 = 0;
        v119 = 0;
        v120 = 0;
        v121 = 0;
        v122 = 0;
        v123 = 0;
        v124 = 0;
        v125 = 0;
        v126 = 0;
        v127 = 0;
        v128 = 0;
        v129 = 0;
        v130 = 0;
        v131 = 0;
        sub_1826A80(&v115);
        result = (__m128 *)hkQsTransformf::setFromTransformNoScale((hkQsTransformf::Self *)v78, (const hkTransformf::Self *)a2);
        v28 = (float)(v82 * v82) - 0.5;
        v29 = (float)((float)(a1[2].f32[0] * v79) + (float)(a1[2].f32[1] * v80))
            + (float)(a1[2].f32[2] * v81);
        v30 = (float)((float)(a1[2].f32[3] * v28) + (float)(v82 * v29)) + (float)(v82 * 0.0);
        v31 = a1[2].f32[2] * v79;
        v32 = (float)((float)(a1[2].f32[0] * v28) + (float)(v79 * v29))
            + (float)((float)((float)(a1[2].f32[2] * v80) - (float)(a1[2].f32[1] * v81)) * v82);
        v33 = v80 * v29;
        v87 = (float)(v32 + v32) + v78[0];
        v34 = a1[2].f32[1] * v28;
        v35 = (float)(v28 * a1[2].f32[2]) + (float)(v29 * v81);
        v36 = a1[2].f32[0] * v80;
        v37 = (float)(v34 + v33) + (float)((float)((float)(a1[2].f32[0] * v81) - v31) * v82);
        v88 = (float)(v37 + v37) + v78[1];
        v38 = v35 + (float)((float)((float)(a1[2].f32[1] * v79) - v36) * v82);
        v89 = (float)(v38 + v38) + v78[2];
        v39 = a1[3].f32[0];
        v40 = a1[3].f32[1];
        v90 = (float)(v30 + v30) + v78[3];
        v41 = (float)(v79 * v39) + (float)(v80 * v40);
        v42 = a1[3].f32[3];
        v43 = v79 * a1[3].f32[2];
        v91[0] = (float)((float)((float)(v80 * a1[3].f32[2]) - (float)(v81 * v40)) + (float)(v82 * v39))
               + (float)(v79 * v42);
        v91[1] = (float)((float)((float)(v81 * v39) - v43) + (float)(v82 * v40)) + (float)(v80 * v42);
        v44 = v82 * v42;
        v45 = v81 * v42;
        v46 = v85 * a1[4].f32[2];
        v47 = (float)((float)((float)(v40 * v79) - (float)(v39 * v80)) + (float)(a1[3].f32[2] * v82)) + v45;
        v48 = v41 + (float)(v81 * a1[3].f32[2]);
        v49 = v83 * a1[4].f32[0];
        v91[2] = v47;
        v92 = v49;
        v91[3] = v44 - v48;
        v50 = v84 * a1[4].f32[1];
        v93 = v50;
        v94 = v46;
        v51 = v115.f32[0];
        v52 = v86 * a1[4].f32[3];
        v95 = v52;
        if ( v115.f32[0] == 0.0 )
          return result;
        *(float *)v77 = v92;
        *(float *)&v77[1] = v93;
        *(float *)&v77[2] = v94;
        *(float *)&v77[3] = v95;
        v53 = fabs(v46 - 1.0);
        v54 = (fabs(v49 - 1.0) <= 0.00000011920929f) | (fabs(v50 - 1.0) <= 0.00000011920929f ? 2 : 0);
        LOBYTE(v55) = v53 <= 0.00000011920929f ? 4 : 0;
        if ( fabs(v52 - 1.0) <= 0.00000011920929f )
          v55 = v53 > 0.00000011920929f ? 8 : 12;
        if ( (((uint8_t)v55 | v54) & 7) != 7 )
        {
          scaleVolumeMassProperties((const hkVector4f::Self *)v77, (hkMassProperties::Self *)&v115);
          v51 = v115.f32[0];
        }
        v76[0] = v51 / v115.f32[1];
        v73 = (float)(v51 / v115.f32[1]) * v115.f32[1];
        hkMatrix3f::mul((float *)&v120, v76);
        reinterpret_cast<int32_t *>(v132.f32)[0] = (int32_t)(uintptr_t)&v133;
        v56 = v74->f32[0];
        v165 = 0;
        v166 = 0;
        v57 = v74[1].f32[0];
        v167 = 0;
        v137 = v57;
        v138 = v74[1].f32[1];
        v139 = v74[1].f32[2];
        v140 = v74[1].f32[3];
        v141 = v74[2].f32[0];
        v142 = v74[2].f32[1];
        v143 = v74[2].f32[2];
        v144 = v74[2].f32[3];
        v145 = reinterpret_cast<int32_t *>(v74[3].f32)[0];
        v58 = reinterpret_cast<int32_t *>(v74[3].f32)[1];
        v133 = v56;
        v146 = v58;
        v59 = v74->f32[1];
        v60 = reinterpret_cast<int32_t *>(v74[3].f32)[2];
        v115.f32[1] = v73;
        v168 = 0;
        v134 = v59;
        v147 = v60;
        v148 = reinterpret_cast<int32_t *>(v74[3].f32)[3];
        v149 = reinterpret_cast<int32_t *>(v74[4].f32)[0];
        v150 = reinterpret_cast<int32_t *>(v74[4].f32)[1];
        v151 = reinterpret_cast<int32_t *>(v74[4].f32)[2];
        v152 = reinterpret_cast<int32_t *>(v74[4].f32)[3];
        v155 = 0;
        v154 = 0;
        v157 = 0;
        v156 = 0;
        v159 = 0;
        v153 = 1065353216;
        v158 = 1065353216;
        v160 = 0;
        v186[0] = 1065353216;
        memset(&v186[1], 0, 16);
        v186[5] = 1065353216;
        memset(&v186[6], 0, 16);
        v162 = 0;
        v163 = 1065353216;
        v164 = 0;
        memset(&v186[11], 0, 20);
        v186[10] = 1065353216;
        v161 = 0;
        *(uint64_t *)((char *)reinterpret_cast<uint64_t *>(v132.f32) + 4) = 0x8000000200000002LL;
        v170 = v116;
        v169 = reinterpret_cast<uint64_t *>(v115.f32)[0];
        v171 = v117;
        v172 = v118;
        v173 = v119;
        v174 = v120;
        v175 = v121;
        v176 = v122;
        v177 = v123;
        v178 = v124;
        v179 = v125;
        v180 = v126;
        v181 = v127;
        v182 = v128;
        v183 = v129;
        v184 = v130;
        v185 = v131;
        *(float *)&v96[12] = v87;
        *(float *)&v96[13] = v88;
        *(float *)&v96[14] = v89;
        *(float *)&v96[15] = v90;
        hkRotationf::set((hkRotationf::Self *)v96, (const hkQuaternionf::Self *)v91);
        memcpy(v186, v96, 64);
        goto LABEL_7;
      case 0xC:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x17:
      case 0x18:
      case 0x1C:
      case 0x1D:
        return result;
      case 0xE:
        hkTransformf::setMul((hkTransformf::Self *)&v132, (const hkTransformf::Self *)a2, (const hkTransformf::Self *)&a1[3]);
        return (__m128 *)sub_1826A80(v74);
      case 0x19:
        if ( reinterpret_cast<int32_t *>(a1[1].f32)[0] > 0 )
        {
          v68 = a1;
          m128_f32 = a1[2].f32;
          v62 = 0;
          do
          {
            v69 = v62;
            v132 = *(__m128 *)a2;
            v133 = a2[4];
            v134 = a2[5];
            v63 = *m128_f32;
            v135 = a2[6];
            v64 = m128_f32[1];
            v136 = a2[7];
            v137 = a2[8];
            v138 = a2[9];
            v65 = m128_f32[2];
            v139 = a2[10];
            v140 = a2[11];
            v141 = a2[12];
            v142 = a2[13];
            v143 = a2[14];
            v144 = a2[15];
            m128_f32 += 4;
            v141 = (float)((float)((float)(v63 * v132.f32[0]) + (float)(v64 * v133)) + (float)(v65 * v137)) + v141;
            v144 = (float)((float)((float)(v132.f32[3] * v63) + (float)(v136 * v64)) + (float)(v140 * v65)) + v144;
            v66 = *(m128_f32 - 1);
            v142 = (float)((float)((float)(v132.f32[1] * v63) + (float)(v134 * v64)) + (float)(v138 * v65)) + v142;
            v143 = (float)((float)((float)(v132.f32[2] * v63) + (float)(v135 * v64)) + (float)(v139 * v65)) + v143;
            hkpSphereShape::Construct((hkpSphereShape::Self *)&v115, v66);
            sub_1826A80(v74);
            result = v68;
            v62 = v69 + 1;
          }
          while ( reinterpret_cast<int32_t *>(v68[1].f32)[0] > v69 + 1 );
        }
        return result;
      case 0x1E:
        return (__m128 *)sub_1826A80(v74);
      case 0x1F:
        v8 = 0.0;
LABEL_5:
        if ( v8 == 0.0 )
          return result;
        v115.f32[0] = v8;
        *(float *)&v70 = v8 * v98;
        hkMatrix3f::mul((float *)&v103, v115.f32);
        reinterpret_cast<int32_t *>(v132.f32)[0] = (int32_t)(uintptr_t)&v133;
        v9 = v74->f32[0];
        v165 = 0;
        v166 = 0;
        v10 = v74[1].f32[0];
        v167 = 0;
        v137 = v10;
        v138 = v74[1].f32[1];
        v139 = v74[1].f32[2];
        v140 = v74[1].f32[3];
        v141 = v74[2].f32[0];
        v142 = v74[2].f32[1];
        v143 = v74[2].f32[2];
        v144 = v74[2].f32[3];
        v145 = reinterpret_cast<int32_t *>(v74[3].f32)[0];
        v11 = reinterpret_cast<int32_t *>(v74[3].f32)[1];
        v133 = v9;
        v146 = v11;
        v12 = reinterpret_cast<int32_t *>(v74[3].f32)[2];
        v134 = v74->f32[1];
        v168 = 0;
        v98 = *(float *)&v70;
        v147 = v12;
        v148 = reinterpret_cast<int32_t *>(v74[3].f32)[3];
        v149 = reinterpret_cast<int32_t *>(v74[4].f32)[0];
        v150 = reinterpret_cast<int32_t *>(v74[4].f32)[1];
        v151 = reinterpret_cast<int32_t *>(v74[4].f32)[2];
        v152 = reinterpret_cast<int32_t *>(v74[4].f32)[3];
        v153 = 1065353216;
        v154 = 0;
        v155 = 0;
        v156 = 0;
        v157 = 0;
        v158 = 1065353216;
        v159 = 0;
        v160 = 0;
        v161 = 0;
        v162 = 0;
        v163 = 1065353216;
        v164 = 0;
        v170 = v99;
        v171 = v100;
        v172 = v101;
        v173 = v102;
        v174 = v103;
        v175 = v104;
        v176 = v105;
        v177 = v106;
        v178 = v107;
        v179 = v108;
        v180 = v109;
        v181 = v110;
        v182 = v111;
        v183 = v112;
        *(uint64_t *)((char *)reinterpret_cast<uint64_t *>(v132.f32) + 4) = 0x8000000200000002LL;
        v169 = __PAIR64__(v70, LODWORD(v97));
        v184 = v113;
        v185 = v114;
        memcpy(v186, a2, 64);
LABEL_7:
        hkInertiaTensorComputer::combineMassProperties(v75);
        result = (__m128 *)reinterpret_cast<int32_t *>(v132.f32)[2];
        reinterpret_cast<int32_t *>(v132.f32)[1] = 0;
        if ( reinterpret_cast<int32_t *>(v132.f32)[2] >= 0 )
          result = (__m128 *)(*(int ( **)(uint32_t *, int32_t, int32_t))(hkContainerHeapAllocator::s_alloc + 20))(
                               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                               reinterpret_cast<int32_t *>(v132.f32)[0],
                               144 * reinterpret_cast<int32_t *>(v132.f32)[2]);
        break;
      default:
        abort();
    }
  }
  return result;
}

// Binary VA: 0x178dd90 (source: lib_batch_3.json)
int sub_178DD90(float *a1, float *a2, float a3)
{
  bool v3;
  float v4; // xmm0_4
  float v5; // xmm3_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm4_4
  float v9; // xmm5_4
  float v10; // xmm7_4
  float v11; // xmm6_4
  float v12; // xmm5_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm4_4
  float v16; // xmm5_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm7_4
  float v20; // xmm2_4
  float v21; // xmm0_4
  float v22; // xmm4_4
  __m128i v23;
  float v24; // xmm5_4
  float v25; // xmm6_4
  float v26; // xmm2_4
  float v27; // xmm1_4
  float v28; // xmm7_4
  float v29; // xmm4_4
  float v30; // xmm2_4
  __m128i v31;
  __m128i v32;
  __m128i v33;
  char v34;
  float v35; // xmm2_4
  char v36;
  char v37; // si
  char v38;
  int v39;
  int v40;
  float v41; // xmm0_4
  float v42; // xmm4_4
  int v43;
  int v44;
  float v45; // xmm0_4
  float v46; // xmm2_4
  int v47;
  int v48; // xmm0_4
  float v49; // xmm1_4
  float v50; // xmm0_4
  int result;
  bool v52; // cf
  float v53; // xmm0_4
  float v54; // xmm0_4
  float v55; // xmm3_4
  int v56;
  float v57; // xmm5_4
  char v58;
  float v59; // xmm4_4
  float v60; // xmm5_4
  float *v61;
  g4_int128_t v62;
  char v63; // di
  int v64;
  float v65; // xmm6_4
  float v66; // xmm3_4
  float *v67;
  float v68; // xmm0_4
  float v69; // xmm4_4
  float *v70;
  int v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79; // [esp-3Ch] [ebp-48h]
  float v80; // [esp-3Ch] [ebp-48h]
  float v81; // [esp-3Ch] [ebp-48h]
  float v82;
  float v83;
  float v84;
  float v85;
  float v86; // [esp-2Ch] [ebp-38h]
  unsigned int v87; // [esp-2Ch] [ebp-38h]
  unsigned int v88;
  float v89;
  float v90;
  float v91;
  float v92;
  float v93;
  char v94;
  float v95; // [esp-1Ch] [ebp-28h]
  float v96;
  float v97;
  float v98;
  char v99;
  float v101;
  g4_int128_t v102;

  v3 = false;
  v4 = a2[8];
  v5 = a2[4];
  v6 = a2[5];
  v7 = a2[6];
  v96 = v4 - v5;
  v84 = *a2 - v4;
  v90 = a2[10] - v7;
  v8 = a2[2];
  v92 = a2[9] - v6;
  v9 = a2[1];
  v86 = v9 - a2[9];
  v79 = v8 - a2[10];
  v77 = v5 - *a2;
  *(float *)&v88 = v6 - v9;
  v75 = v7 - v8;
  v95 = a2[12];
  v73 = v95 - *a2;
  v10 = a2[13];
  v11 = v10 - v9;
  v12 = a2[14];
  v72 = v12 - v8;
  v83 = v10;
  v82 = v12;
  v13 = v95 - v5;
  v14 = v10 - v6;
  v15 = v12 - v7;
  v16 = v12 - a2[10];
  v17 = v95 - v4;
  v18 = v10 - a2[9];
  v19 = (float)(v92 * v15) - (float)(v90 * v14);
  v91 = (float)(v90 * v13) - (float)(v15 * v96);
  v93 = (float)(v96 * v14) - (float)(v13 * v92);
  v20 = v79 * v17;
  v21 = v17 * v86;
  *(float *)&v87 = (float)(v86 * v16) - (float)(v79 * v18);
  v22 = (float)(v84 * v18) - v21;
  do { std::memset(&v23, 0, 16); v23.u64[0] = (uint64_t)(uintptr_t)(v88); } while (0);
  *(float *)v23.i32 = *(float *)&v88 * v72;
  v85 = v20 - (float)(v16 * v84);
  v31 = v23;
  *(float *)v31.i32 = (float)(*(float *)&v88 * v72) - (float)(v75 * v11);
  *(float *)v23.i32 = (float)(v75 * v73) - (float)(v72 * v77);
  v76 = *a1;
  v24 = (float)(v77 * v11) - (float)(*(float *)&v88 * v73);
  v89 = a1[2];
  v74 = a1[1];
  v25 = a3 * (float)(*a1 - v95);
  v26 = (float)(v74 - v83) * a3;
  v27 = (float)(v89 - v82) * a3;
  v80 = v19;
  v101 = (float)((float)(v91 * v26) + (float)(v19 * v25)) + (float)(v93 * v27);
  v97 = (float)(v85 * v26) + (float)(*(float *)&v87 * v25);
  v28 = v22 * v27;
  v29 = v22 * v22;
  v30 = (float)((float)(v26 * *(float *)v23.i32) + (float)(v25 * *(float *)v31.i32)) + (float)(v27 * v24);
  do { std::memset(&v32, 0, 16); v32.u64[0] = (uint64_t)(uintptr_t)(LODWORD(v80)); } while (0);
  *(float *)v31.i32 = (float)((float)(*(float *)v31.i32 * *(float *)v31.i32)
                                  + (float)(*(float *)v23.i32 * *(float *)v23.i32))
                          + (float)(v24 * v24);
  v98 = v28 + v97;
  v78 = v30;
  *(float *)v32.i32 = (float)((float)(*(float *)v32.i32 * *(float *)v32.i32) + (float)(v91 * v91))
                          + (float)(v93 * v93);
  do { std::memset(&v33, 0, 16); v33.u64[0] = (uint64_t)(uintptr_t)(v87); } while (0);
  *(float *)v33.i32 = (float)(*(float *)v33.i32 * *(float *)v33.i32) + (float)(v85 * v85);
  if ( *(float *)v32.i32 == 0.0 )
    v3 = !__builtin_isnan(*(float *)v32.i32);
  v34 = v3 | 8;
  v35 = *(float *)v33.i32 + v29;
  if ( v35 == 0.0 )
  {
    v36 = 6;
    v37 = 2;
  }
  else
  {
    v36 = 4;
    v37 = 0;
  }
  if ( *(float *)v31.i32 != 0.0 )
    v36 = v37;
  if ( __builtin_isnan(*(float *)v31.i32) )
    v36 = v37;
  v38 = v34 | v36;
  *(float *)v32.i32 = fmaxf(*(float *)v32.i32, 0.00000011920929f);
  *(float *)v33.i32 = fmaxf(v35, 0.00000011920929f);
  *(float *)v31.i32 = fmaxf(*(float *)v31.i32, 0.00000011920929f);
  if ( (v38 & 1) == 0 )
  {
    v39 = _mm_cvtsi128_si32(v32);
    v40 = (2130706432 - v39) & ((v39 ^ (v39 + 2139095040)) >> 31);
    v41 = (float)(2.0
                - (float)(*(float *)v32.i32
                        * (float)((float)(2.0 - (float)(*(float *)v32.i32 * *(float *)&v40)) * *(float *)&v40)))
        * (float)((float)(2.0 - (float)(*(float *)v32.i32 * *(float *)&v40)) * *(float *)&v40);
    v42 = (float)(fabs(v101) * v101) * (float)((float)(2.0 - (float)(*(float *)v32.i32 * v41)) * v41);
    if ( (v38 & 2) == 0 )
      goto LABEL_11;
LABEL_31:
    v46 = 3.40282e38f;
    if ( (v38 & 4) == 0 )
      goto LABEL_12;
    goto LABEL_32;
  }
  v42 = 3.40282e38f;
  if ( (v38 & 2) != 0 )
    goto LABEL_31;
LABEL_11:
  v43 = _mm_cvtsi128_si32(v33);
  v44 = (2130706432 - v43) & ((v43 ^ (v43 + 2139095040)) >> 31);
  v45 = (float)(2.0
              - (float)(*(float *)v33.i32
                      * (float)((float)(2.0 - (float)(*(float *)v33.i32 * *(float *)&v44)) * *(float *)&v44)))
      * (float)((float)(2.0 - (float)(*(float *)v33.i32 * *(float *)&v44)) * *(float *)&v44);
  v46 = (float)(fabs(v98) * v98) * (float)((float)(2.0 - (float)(*(float *)v33.i32 * v45)) * v45);
  if ( (v38 & 4) == 0 )
  {
LABEL_12:
    v47 = _mm_cvtsi128_si32(v31);
    v48 = (2130706432 - v47) & ((v47 ^ (v47 + 2139095040)) >> 31);
    v49 = (float)(fabs(v78) * v78)
        * (float)((float)(2.0
                        - (float)(*(float *)v31.i32
                                * (float)((float)(2.0
                                                - (float)(*(float *)v31.i32
                                                        * (float)((float)(2.0
                                                                        - (float)(*(float *)v31.i32
                                                                                * *(float *)&v48))
                                                                * *(float *)&v48)))
                                        * (float)((float)(2.0 - (float)(*(float *)v31.i32 * *(float *)&v48))
                                                * *(float *)&v48))))
                * (float)((float)(2.0
                                - (float)(*(float *)v31.i32
                                        * (float)((float)(2.0 - (float)(*(float *)v31.i32 * *(float *)&v48))
                                                * *(float *)&v48)))
                        * (float)((float)(2.0 - (float)(*(float *)v31.i32 * *(float *)&v48)) * *(float *)&v48)));
    goto LABEL_13;
  }
LABEL_32:
  v49 = 3.40282e38f;
LABEL_13:
  if ( v46 >= v42 )
  {
    v50 = v46;
    result = 1;
  }
  else
  {
    v50 = v42;
    result = 0;
  }
  v52 = v49 < v50;
  v53 = fmaxf(v42, v46);
  if ( !v52 )
    result = 2;
  v54 = fmaxf(v53, v49);
  v55 = fminf(fminf(v42, v46), v49);
  LOBYTE(v56) = v49 >= v54 ? 4 : 0;
  if ( v54 <= 3.40282e38f )
    v56 = v49 < v54 ? 8 : 12;
  v57 = v55;
  v58 = v56 | (v42 >= v54) | (v46 >= v54 ? 2 : 0);
  if ( (v56 & 1 | (v42 >= v54)) == 0 )
    v57 = v42;
  v59 = v55;
  if ( (v58 & 2) == 0 )
    v59 = v46;
  if ( (v58 & 4) != 0 )
    v49 = v55;
  v60 = fmaxf(fmaxf(v57, v59), v49);
  if ( v54 < 0.00000011920929f )
    return -1;
  if ( v54 <= (float)(v60 * 1.1f) )
  {
    v61 = a2;
    *(uint64_t *)&v62 = g4_m128_u64_lane(_mm_unpacklo_ps(G4_BITCAST<__m128>(LODWORD(v101)), G4_BITCAST<__m128>(LODWORD(v98))), 0);
    *((uint64_t *)&v62 + 1) = g4_m128_u64_lane(_mm_unpacklo_ps(G4_BITCAST<__m128>(LODWORD(v78)), G4_BITCAST<__m128>(LODWORD(v78))), 0);
    v102 = v62;
    v99 = BYTE1(hkpCollideTriangleUtil::vertexToEdgeLut);
    v63 = (char)hkpCollideTriangleUtil::vertexToEdgeLut;
    v64 = 0;
    while ( 1 )
    {
      v94 = *((uint8_t *)&hkpCollideTriangleUtil::vertexToEdgeLut + v64 + 2);
      if ( *((float *)&v102 + v94) >= 0.0 && *((float *)&v102 + v63) >= 0.0 )
      {
        v65 = v61[2];
        v66 = v61[1];
        v67 = &a2[4 * v94];
        v68 = v67[2];
        v69 = v67[1] - v66;
        v81 = *v67 - *v61;
        v70 = &a2[4 * v63];
        if ( (float)((float)((float)((float)((float)(v81 * (float)(v76 - *v61)) + (float)((float)(v74 - v66) * v69))
                                   + (float)((float)(v68 - v65) * (float)(v89 - v65)))
                           * (float)((float)((float)((float)(v95 - *v61) * (float)(*v70 - *v61))
                                           + (float)((float)(v70[1] - v66) * (float)(v83 - v66)))
                                   + (float)((float)(v82 - v65) * (float)(v70[2] - v65))))
                   - (float)((float)((float)((float)((float)(v76 - *v61) * (float)(*v70 - *v61))
                                           + (float)((float)(v74 - v66) * (float)(v70[1] - v66)))
                                   + (float)((float)(v70[2] - v65) * (float)(v89 - v65)))
                           * (float)((float)((float)(v81 * (float)(v95 - *v61)) + (float)(v69 * (float)(v83 - v66)))
                                   + (float)((float)(v82 - v65) * (float)(v68 - v65))))) < 0.0 )
          *((uint32_t *)&v102 + v63) = -1082130432;
        else
          *((uint32_t *)&v102 + v94) = -1082130432;
      }
      ++v64;
      v61 += 4;
      if ( v64 == 3 )
        break;
      v63 = v99;
      v99 = v94;
    }
    v71 = 4 * (*((float *)&v102 + 2) > 0.0) + 8;
    if ( *((float *)&v102 + 3) <= 0.0 )
      v71 = 4 * (*((float *)&v102 + 2) > 0.0);
    if ( (v71 & 7 | (uint8_t)((*(float *)&v102 > 0.0) | (2 * (*((float *)&v102 + 1) > 0.0)))) != 0 )
      return hkVector4Comparison_maskToFirstIndex[v71 | (*(float *)&v102 > 0.0) | (2 * (*((float *)&v102 + 1) > 0.0))];
    return -1;
  }
  return result;
}

// Binary VA: 0x1826470 (source: lib_batch_3.json)
float * sub_1826470(float *a1, int *a2, hkpRigidBody::Self *a3, float *a4)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  float v12; // xmm1_4
  int v13;
  int v14;
  hkpRigidBody::Self *v15;
  float v16; // xmm0_4
  int v18;
  hkpRigidBody::Self *v20;
  int v21; // [esp-Ch] [ebp-98h]
  int v22;
  float v23;
  float v24;
  float v25;
  float v26[5];
  float v27;
  float v28;
  int *v29;
  int v30;
  int v31;
  int v32; // [esp+3Ch] [ebp-50h] BYREF

  v29 = &v32;
  v5 = a2[1] - 1;
  v30 = 0;
  v31 = -2147483632;
  v22 = v5;
  if ( v5 < 0 )
    goto LABEL_18;
  v21 = 4 * v5;
  do
  {
    v6 = *a2;
    v7 = *a2 + v21;
    v8 = *(uint32_t *)v7;
    v20 = *(hkpRigidBody::Self **)(*(uint32_t *)v7 + 20);
    if ( v20 == a3 )
    {
      v20 = *(hkpRigidBody::Self **)(v8 + 24);
    }
    else if ( a3 != *(hkpRigidBody::Self **)(*(uint32_t *)v7 + 24) )
    {
      goto LABEL_4;
    }
    if ( v20 != nullptr )
    {
      v9 = a2[1] - 1;
      a2[1] = v9;
      if ( v22 != v9 )
        *(uint32_t *)v7 = *(uint32_t *)(v6 + 4 * v9);
      v10 = v30;
      if ( v30 == (v31 & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)&v29, 4, v18);
        v10 = v30;
      }
      v29[v10] = v8;
      ++v30;
    }
LABEL_4:
    --v22;
    v21 -= 4;
  }
  while ( v22 != -1 );
  v11 = v30 - 1;
  if ( v30 - 1 < 0 )
  {
LABEL_18:
    v12 = 0.0;
    v23 = 0.0;
    goto LABEL_19;
  }
  v12 = 0.0;
  v23 = 0.0;
  v13 = v11;
  do
  {
    v14 = v29[v13];
    v15 = *(hkpRigidBody::Self **)(v14 + 20);
    if ( a3 == v15 )
      v15 = *(hkpRigidBody::Self **)(v14 + 24);
    --v11;
    --v13;
    sub_1826470(v15, (int)(uintptr_t)a4);
    v12 = v12 + v25;
    v23 = fmaxf(v25, v23);
  }
  while ( v11 != -1 );
LABEL_19:
  if ( (uint8_t)(*((uint8_t *)a3 + 232) - 4) <= 1u )
  {
    *a1 = 0.0;
  }
  else
  {
    (*(void ( **)(char *, float *))(*((uint32_t *)a3 + 56) + 36))((char *)a3 + 224, v26);
    v16 = fmaxf(fmaxf(v26[0], v27), v28);
    if ( v12 != 0.0 )
    {
      v24 = fmaxf(fminf(v12, v16 * *a4), v23);
      v26[0] = fmaxf(v26[0], v24);
      v27 = fmaxf(v27, v24);
      v28 = fmaxf(v28, v24);
      hkpRigidBody::setInertiaLocal(a3, (const hkMatrix3f::Self *)v26);
      v16 = fmaxf(fminf(v16 * *a4, v12 + v16), v24);
    }
    *a1 = v16;
  }
  v30 = 0;
  if ( v31 >= 0 )
    (*(void ( **)(uint32_t *, int *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v29,
      4 * v31);
  return a1;
}

// Binary VA: 0x18180e0 (source: lib_batch_3.json)
int sub_18180E0(int *a1,
 int a2,
 float *a3,
 __m128 *a4,
 int *a5,
 int a6,
 int a7,
 int a8,
 int a9,
 float a10,
 float a11,
 float a12,
 int32_t a13,
 float a14,
 float a15,
 float a16,
 float a17,
 float a18,
 float a19,
 float a20,
 int a21)
{
  int v22;
  float v23; // xmm4_4
  int v24;
  float v25; // xmm2_4
  float v26; // xmm3_4
  float v27; // xmm1_4
  float v28; // xmm0_4
  float v29; // xmm5_4
  float v30; // xmm4_4
  float v31; // xmm3_4
  int result;
  float v33; // xmm0_4
  int v34;
  int v35;
  int v36; // [esp-4Ch] [ebp-58h]
  __m128 v38;
  int v39;

  v22 = *a1;
  v38 = _mm_xor_ps(*a4, G4_BITCAST<__m128>(xmmword_1C7C2A0));
  (*(void ( **)(int *, __m128 *, int *, int, int, int, int *, int))(v22 + 40))(
    a1,
    &v38,
    &v39,
    v34,
    v35,
    v36,
    a5,
    a2);
  v23 = a4->f32[1];
  v24 = *a5;
  v25 = (float)(*a3 * a4->f32[0]) + (float)(a3[1] * v23);
  v26 = a4->f32[2];
  v27 = (float)(a3[4] * a4->f32[0]) + (float)(a3[5] * v23);
  v28 = (float)(a4->f32[0] * a3[8]) + (float)(v23 * a3[9]);
  v29 = a3[6] * v26;
  v30 = a3[10] * v26;
  v31 = v26 * a3[2];
  a15 = v27 + v29;
  a16 = v28 + v30;
  a14 = v25 + v31;
  a17 = v28 + v30;
  result = (*(int ( **)(int *, float *, float *))(v24 + 40))(a5, &a14, &a18);
  v33 = (float)((float)((float)(a10
                              - (float)((float)((float)((float)(*a3 * a18) + (float)(a3[4] * a19)) + (float)(a3[8] * a20))
                                      + a3[12]))
                      * a4->f32[0])
              + (float)((float)(a11
                              - (float)((float)((float)((float)(a3[1] * a18) + (float)(a3[5] * a19))
                                              + (float)(a3[9] * a20))
                                      + a3[13]))
                      * a4->f32[1]))
      + (float)((float)(a12
                      - (float)((float)((float)((float)(a18 * a3[2]) + (float)(a19 * a3[6])) + (float)(a20 * a3[10]))
                              + a3[14]))
              * a4->f32[2]);
  if ( v33 > a4[2].f32[3] )
  {
    a4->f32[0] = a10;
    a4->f32[1] = a11;
    a4->f32[2] = a12;
    reinterpret_cast<int32_t *>(a4->f32)[3] = a13;
    a4[1].f32[0] = a18;
    a4[1].f32[1] = a19;
    a4[1].f32[2] = a20;
    result = a21;
    reinterpret_cast<int32_t *>(a4[1].f32)[3] = a21;
    reinterpret_cast<int32_t *>(a4[2].f32)[0] = reinterpret_cast<int32_t *>(a4->f32)[0];
    reinterpret_cast<int32_t *>(a4[2].f32)[1] = reinterpret_cast<int32_t *>(a4->f32)[1];
    reinterpret_cast<int32_t *>(a4[2].f32)[2] = reinterpret_cast<int32_t *>(a4->f32)[2];
    a4[2].f32[3] = v33;
  }
  return result;
}

// Binary VA: 0x656420 (source: game_core_batch_1.json)
void *sub_656420()
{
  void *result;

  if ( byte_20D2D50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2D50) != 0 )
  {
    sub_7D7730(&unk_20D2D60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2D50);
    __cxa_atexit((void (*)(void *))sub_77E4C0, &unk_20D2D60, &unk_20D1280);
  }
  result = nullptr;
  if ( byte_20D2D64 == 0 )
    return &unk_20D2D60;
  return result;
}

// Binary VA: 0x6567a0 (source: game_core_batch_1.json)
void sub_6567A0(uint32_t *a1, int a2)
{
  int v2;
  char *v3;
  int v4;
  int v5[4];

  if ( *a1 != 0 )
    sub_5459F0((int)(uintptr_t)a1, *a1 + 16);
  if ( a2 != 0 )
  {
    v2 = 0;
    *a1 = a2 - 12;
    v5[0] = (int)(uintptr_t)a1;
    if ( a2 != 12 )
      v2 = a2;
    v3 = *(char **)(v2 + 8);
    if ( v3 == *(char **)(v2 + 12) )
    {
      g4_std::vector_Gangstar_Handleable_a745f6::M_insert_aux(v2 + 4, v3, v5);
    }
    else
    {
      v4 = 0;
      if ( v3 != nullptr )
      {
        *(uint32_t *)v3 = (uint32_t)(uintptr_t)(a1);
        v4 = *(uint32_t *)(v2 + 8);
      }
      *(uint32_t *)(v2 + 8) = v4 + 4;
    }
  }
  else
  {
    *a1 = 0;
  }
}

// Binary VA: 0x1891d90 (source: lib_batch_3.json)
hkString::Self * sub_1891D90(hkString::Self **a1, hkStreamReader::Self *a2, hkString::Self *a3)
{
  hkString::Self *v3;
  int v4;
  hkString::Self *v5;
  int v6;
  int v7;
  int v8;
  hkString::Self *result;
  hkString::Self *v10;
  int v11; // [esp+Ch] [ebp-20h]
  uint32_t v12[5];

  hkXmlStreamParser::Construct((hkXmlStreamParser::Self *)a1, a2);
  a1[30] = a3;
  a1[31] = nullptr;
  a1[32] = nullptr;
  a1[33] = (hkString::Self *)0x80000000;
  a1[34] = nullptr;
  a1[35] = nullptr;
  a1[36] = (hkString::Self *)0x80000000;
  a1[37] = nullptr;
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Construct(a1 + 38);
  a1[42] = nullptr;
  a1[43] = nullptr;
  a1[44] = (hkString::Self *)0x80000000;
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Construct(a1 + 45);
  v3 = a1[32];
  v4 = (unsigned int)(uintptr_t)a1[33] & 0x3FFFFFFF;
  a1[49] = nullptr;
  a1[50] = nullptr;
  a1[51] = (hkString::Self *)0x80000000;
  if ( v3 == (hkString::Self *)v4 )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(a1 + 31), 4, v11);
    v3 = a1[32];
  }
  *((uint32_t *)a1[31] + (uint32_t)(uintptr_t)v3) = 0;
  v5 = a1[35];
  v6 = (unsigned int)(uintptr_t)a1[36] & 0x3FFFFFFF;
  a1[32] = (hkString::Self *)((char *)a1[32] + 1);
  if ( v5 == (hkString::Self *)v6 )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(a1 + 34), 4, v11);
    v5 = a1[35];
  }
  *((uint32_t *)a1[34] + (uint32_t)(uintptr_t)v5) = (uint32_t)(uintptr_t)(&unk_1B15112);
  v7 = (int)(uintptr_t)a1[35] + 1;
  v8 = (unsigned int)(uintptr_t)a1[36] & 0x3FFFFFFF;
  a1[35] = (hkString::Self *)v7;
  if ( v7 == v8 )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(a1 + 34), 4, v11);
    v7 = (int)(uintptr_t)a1[35];
  }
  *((uint32_t *)a1[34] + v7) = 0;
  a1[37] = (hkString::Self *)(&dword_0 + 2);
  a1[35] = (hkString::Self *)((char *)a1[35] + 1);
  v12[0] = (uint32_t)(uintptr_t)("#0000");
  v12[1] = (uint32_t)(uintptr_t)(&a0000_0[hkString::strLen((hkString::Self *)"#0000")]);
  result = (hkString::Self *)(uintptr_t)(sub_1891BB0((int)(uintptr_t)a1, (int)(uintptr_t)v12, (int)(uintptr_t)v10));
  a1[52] = result;
  return result;
}

// Binary VA: 0x1704450 (source: lib_batch_3.json)
int sub_1704450(uint8_t *a1, int a2, uint32_t *a3, int a4)
{
  int *address;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  int *v9;
  int *v10;
  int v11;
  int v12;
  float *v13;
  float *v14;
  float v15; // xmm5_4
  float v16; // xmm4_4
  float v17; // xmm3_4
  float v18; // xmm7_4
  float v19; // xmm3_4
  float v20; // xmm2_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  float v23; // xmm7_4
  float v24; // xmm3_4
  float v25; // xmm3_4
  float v26; // xmm1_4
  uint64_t v27; // rax
  int v28;
  uint32_t *v29;
  int v30;
  float v31; // xmm7_4
  float *v32;
  float *v33;
  float v34; // xmm6_4
  float v35; // xmm7_4
  float v36; // xmm0_4
  float v37; // xmm2_4
  int v38;
  int v39;
  int v40;
  float v41; // xmm1_4
  float v42; // xmm0_4
  float v43; // xmm2_4
  const hkSweptTransformf::Self *v45; // [esp-CCh] [ebp-7B8h]
  hkTransformf::Self *v46; // [esp-C4h] [ebp-7B0h]
  hkTransformf::Self *v47; // [esp-C4h] [ebp-7B0h]
  float *v48; // [esp-BCh] [ebp-7A8h]
  int *v49; // [esp-B4h] [ebp-7A0h]
  int *v50; // [esp-B0h] [ebp-79Ch]
  uint8_t *v51; // [esp-ACh] [ebp-798h]
  int *v52; // [esp-A8h] [ebp-794h]
  int v54; // [esp-A0h] [ebp-78Ch] BYREF
  int v55;
  uint32_t v56[8];
  uint8_t v57[64];
  int *v58;
  int *v59;
  int v60;
  int v61; // [esp+4Ch] [ebp-6A0h]
  int v62;
  float v63[20];
  float v64; // [esp+B0h] [ebp-63Ch]
  float v65; // [esp+B4h] [ebp-638h]
  float v66; // [esp+B8h] [ebp-634h]
  float v67; // [esp+BCh] [ebp-630h]
  uint32_t v68[4]; // [esp+C0h] [ebp-62Ch] BYREF
  uint32_t v69[4]; // [esp+D0h] [ebp-61Ch] BYREF
  float v70[16]; // [esp+E0h] [ebp-60Ch] BYREF
  float v71[16];
  int v72;
  int v73;

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v6 = *address;
  v52 = address;
  v7 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)v7 < *(uint32_t *)(*address + 12) )
  {
    *v7 = (uint32_t)(uintptr_t)("TtProcessNnEntry");
    v8 = __rdtsc();
    v7[1] = v8;
    *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
  }
  v9 = *((int **)a1 + 4);
  v10 = *((int **)a1 + 5);
  v11 = *a1;
  while ( 2 )
  {
    switch ( v11 )
    {
      case 2:
        v30 = *((uint32_t *)a1 + 2);
        v68[1] = (uint32_t)(uintptr_t)(v10);
        v68[3] = a2;
        v68[2] = 0;
        v68[0] = (uint32_t)(uintptr_t)(v9);
        v31 = *(float *)(a2 + 88);
        v69[0] = v30;
        v32 = (float *)v9[2];
        v33 = (float *)v10[2];
        v34 = v32[23] * v31;
        v35 = v31 * v33[23];
        v36 = (float)((float)(v32[18] - v32[22]) * v34) + (float)((float)(v33[22] - v33[18]) * v35);
        v37 = (float)((float)(v32[16] - v32[20]) * v34) + (float)((float)(v33[20] - v33[16]) * v35);
        v71[5] = (float)((float)(v32[17] - v32[21]) * v34) + (float)((float)(v33[21] - v33[17]) * v35);
        v71[6] = v36;
        v71[4] = v37;
        v71[7] = (float)(v33[40] * (float)(v35 * v33[39])) + (float)((float)(v34 * v32[39]) * v32[40]);
        hkTransformf::setMulInverseMul((hkTransformf::Self *)v70, (const hkTransformf::Self *)v32, (const hkTransformf::Self *)v33);
        (*(void ( **)(uint32_t *, uint8_t *, uint8_t *, uint32_t, int))(*(uint32_t *)a2
                                                                                         + ((a1[1] + 104) << 6)
                                                                                         + 8))(
          v68,
          a1,
          a1 + 32,
          0,
          a4);
        goto LABEL_9;
      case 4:
        v12 = *((uint32_t *)a1 + 2);
        v60 = 0;
        v62 = v12;
        v61 = a2;
        v13 = (float *)v10[2];
        v14 = (float *)v9[2];
        v59 = v10;
        v15 = v13[21];
        v16 = v13[22];
        v58 = v9;
        v17 = *(float *)(a2 + 88);
        v18 = v14[23] * v17;
        v19 = v17 * v13[23];
        v20 = (float)((float)(v14[18] - v14[22]) * v18) + (float)((float)(v16 - v13[18]) * v19);
        v21 = (float)((float)(v14[16] - v14[20]) * v18) + (float)((float)(v13[20] - v13[16]) * v19);
        v22 = (float)((float)(v14[17] - v14[21]) * v18) + (float)((float)(v15 - v13[17]) * v19);
        v23 = (float)(v18 * v14[39]) * v14[40];
        v24 = (float)(v19 * v13[39]) * v13[40];
        v66 = v20;
        v64 = v21;
        v65 = v22;
        v25 = v24 + v23;
        v67 = v25;
        v51 = a1 + 48;
        if ( *(float *)(a2 + 80) == *((float *)a1 + 6) )
          goto LABEL_16;
        if ( *(uint32_t *)(*(uint32_t *)(a2 + 96) + 16) == 0 )
        {
          *((uint32_t *)a1 + 6) = *(uint32_t *)(a2 + 84);
          *((uint32_t *)a1 + 8) = 0;
          v26 = -3.40282e38f;
          *((uint32_t *)a1 + 9) = 0;
          *((uint32_t *)a1 + 10) = 0;
          *((uint32_t *)a1 + 11) = -8388626;
LABEL_8:
          v63[16] = v26;
          hkTransformf::setMulInverseMul((hkTransformf::Self *)v63, (const hkTransformf::Self *)v14, (const hkTransformf::Self *)v13);
          (*(void ( **)(int **, uint8_t *, uint8_t *, uint8_t *, int))(*(uint32_t *)a2 + ((a1[1] + 104) << 6) + 8))(
            &v58,
            a1,
            v51,
            a1 + 32,
            a4);
          goto LABEL_9;
        }
        v45 = *(const hkSweptTransformf::Self **)(a2 + 80);
        v48 = v14;
        v56[2] = 0;
        hkSweptTransformUtil::lerp2((hkSweptTransformUtil::Self *)(v9[2] + 64), v45, COERCE_FLOAT(v70), v46);
        hkSweptTransformUtil::lerp2(
          (hkSweptTransformUtil::Self *)(v59[2] + 64),
          *(const hkSweptTransformf::Self **)(v61 + 80),
          COERCE_FLOAT(v71),
          v47);
        v56[1] = (uint32_t)(uintptr_t)(v69);
        v56[4] = v62;
        v56[3] = v61;
        v38 = v58[1];
        v56[0] = (uint32_t)(uintptr_t)(v68);
        v39 = *v58;
        v68[1] = v38;
        v68[0] = v39;
        v40 = *v59;
        v69[1] = v59[1];
        v68[3] = (uint32_t)(uintptr_t)(v58);
        v69[3] = (uint32_t)(uintptr_t)(v59);
        v69[2] = (uint32_t)(uintptr_t)(v71);
        v69[0] = v40;
        v68[2] = (uint32_t)(uintptr_t)(v70);
        hkTransformf::setMulInverseMul((hkTransformf::Self *)v57, (const hkTransformf::Self *)v70, (const hkTransformf::Self *)v71);
        (*(void ( **)(uint32_t *, uint8_t *, uint8_t *, uint8_t *))(*(uint32_t *)a2
                                                                                               + ((a1[1] + 104) << 6)
                                                                                               + 4))(
          v56,
          a1,
          v51,
          a1 + 32);
        v21 = v64;
        v14 = v48;
        v22 = v65;
        v20 = v66;
        v25 = v67;
LABEL_16:
        v41 = v22 * *((float *)a1 + 9);
        v42 = v21 * *((float *)a1 + 8);
        v43 = v20 * *((float *)a1 + 10);
        *((uint32_t *)a1 + 6) = *(uint32_t *)(a2 + 84);
        v26 = *((float *)a1 + 11) - (float)((float)((float)(v42 + v41) + v43) + v25);
        if ( v26 < *(float *)(a2 + 12) )
          goto LABEL_8;
        *((float *)a1 + 11) = v26;
        if ( a1[2] != 0 )
          (*(void ( **)(uint8_t *, uint8_t *, int, uint32_t))(*(uint32_t *)a2 + (a1[1] << 6) + 6632))(
            a1,
            v51,
            v62,
            *(uint32_t *)(a4 + 4));
        ++*a3;
LABEL_9:
        LODWORD(v27) = (uint32_t)(uintptr_t)(v52);
        v28 = *v52;
        v29 = *(uint32_t **)(*v52 + 4);
        if ( (unsigned int)(uintptr_t)v29 < *(uint32_t *)(*v52 + 12) )
        {
          *v29 = (uint32_t)(uintptr_t)("Et");
          v27 = __rdtsc();
          v29[1] = v27;
          *(uint32_t *)(v28 + 4) = (uint32_t)(uintptr_t)(v29 + 3);
        }
        return v27;
      case 6:
        (*(void ( **)(uint32_t, int *, int *, int, int))(**((uint32_t **)a1 + 8) + 32))(
          *((uint32_t *)a1 + 8),
          v9,
          v10,
          a2,
          a4);
        goto LABEL_9;
      case 10:
      case 12:
      case 14:
        v49 = v10;
        LOBYTE(v68[0]) = 0;
        v50 = (int *)(hkAgentMachine_processTransformedShapes(v9, &v55, (int)(uintptr_t)&v73, 4, v68));
        v10 = (int *)(hkAgentMachine_processTransformedShapes(v49, &v54, (int)(uintptr_t)&v72, 4, v68));
        v11 &= 0xF7u;
        v9 = v50;
        continue;
      default:
        goto LABEL_9;
    }
  }
}

// Binary VA: 0x1880300 (source: lib_batch_3.json)
int sub_1880300(int a1, uint32_t *a2, uint32_t *a3, int a4, char a5)
{
  int v6;
  bool v7; // zf
  int result;
  uint32_t *v9;
  char *v10;
  char *CurrentVersion;
  hkString::Self *v12;
  int v13;
  signed int v14;
  int SectionHeader;
  int v16;
  int v17;
  int v18;
  char *v19;
  int v20;
  size_t v21;
  int ClassNameRegistry;
  signed int v23;
  int v24;
  int v25;
  hkVersionUtil::Self *v26;
  const hkTypeInfoRegistry::Self *v27;
  int v28;
  int v29;
  hkPackfileHeader::Self *v30;
  char *v31;
  int v32; // [esp+Ch] [ebp-5Ch]
  int v33; // [esp+Ch] [ebp-5Ch]
  size_t v34; // [esp+Ch] [ebp-5Ch]
  hkPackfileHeader::Self *v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v45; // [esp+1Ch] [ebp-4Ch]
  int v46; // [esp+1Ch] [ebp-4Ch]
  int v47; // [esp+1Ch] [ebp-4Ch]
  int v48; // [esp+1Ch] [ebp-4Ch]
  int v49;
  uint32_t *v50;
  int v51;
  int v52;
  char v53; // [esp+2Bh] [ebp-3Dh] BYREF
  char v54[4]; // [esp+2Ch] [ebp-3Ch] BYREF
  hkPackfileHeader::Self *v55;
  size_t v56;
  int v57;
  uint8_t v58[8];
  int v59; // [esp+4Ch] [ebp-1Ch]
  uint32_t *v60;

  v60 = (uint32_t *)(&a3);
  v6 = a1;
  v50 = a3;
  v7 = *a2 == 2;
  v55 = nullptr;
  v49 = a4;
  v56 = 0;
  v57 = 0x80000000;
  if ( !v7 )
    goto LABEL_2;
  if ( hkString::memCmp((hkString::Self *)(a2 + 3), &hkStructureLayout::HostLayoutRules, (size_t)&loc_4) != 0 )
  {
    if ( v50 == nullptr || *v50 != 0 )
    {
LABEL_9:
      result = 0;
      goto LABEL_3;
    }
    v9 = v50;
    *v50 = 3;
    v10 = "Wrong platform for packfile";
    goto LABEL_11;
  }
  CurrentVersion = (char *)hkVersionUtil::getCurrentVersion(v26);
  v6 = a1;
  v12 = (hkString::Self *)(a2[2] & 0xFFFFFFFE);
  if ( CurrentVersion != nullptr && v12 != nullptr )
  {
    v13 = hkString::strCmp(v12, CurrentVersion);
    v6 = a1;
    if ( v13 != 0 )
      goto LABEL_14;
  }
  else if ( v12 != nullptr || CurrentVersion != nullptr )
  {
    goto LABEL_14;
  }
  if ( a2[1] == *(uint32_t *)"\v" )
  {
    v14 = v56 + 64;
    if ( (int)(v56 + 64) > (v57 & 0x3FFFFFFF) )
    {
      v45 = v6;
      if ( 2 * (v57 & 0x3FFFFFFF) >= v14 )
        v14 = 2 * (v57 & 0x3FFFFFFF);
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v54,
        (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
        (int *)&v55,
        v14,
        1);
      v14 = v56 + 64;
      v6 = v45;
    }
    v56 = v14;
    v32 = v6;
    G4_VCALL<void>(v6, 24, v55, 64);
    v35 = v55;
    v40 = *((uint32_t *)v55 + 5);
    v46 = v40 << 6;
    SectionHeader = (int)(uintptr_t)(hkPackfileHeader::getSectionHeader(v55, v55, 0));
    v42 = SectionHeader - (uint32_t)(uintptr_t)v55;
    v30 = v55;
    v16 = v32;
    if ( *((int *)v35 + 3) > 9 )
    {
      v34 = v56;
      v29 = *((uint16_t *)v35 + 31);
      v37 = v57 & 0x3FFFFFFF;
      v23 = v56 + v29;
      if ( (int)(v56 + v29) > (v57 & 0x3FFFFFFF) )
      {
        v28 = v16;
        v24 = 2 * v37;
        if ( 2 * v37 < v23 )
          v24 = v56 + v29;
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v54,
          (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
          (int *)&v55,
          v24,
          1);
        v23 = v56 + v29;
        v30 = v55;
        v16 = v28;
      }
      v56 = v23;
      v38 = v16;
      G4_VCALL<void>(v16, 24, (size_t)v30 + v34, v29);
      v16 = v38;
    }
    v17 = v56 + v46;
    if ( (int)(v56 + v46) > (v57 & 0x3FFFFFFF) )
    {
      v36 = v16;
      if ( v17 < 2 * (v57 & 0x3FFFFFFF) )
        v17 = 2 * (v57 & 0x3FFFFFFF);
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v54,
        (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
        (int *)&v55,
        v17,
        1);
      v16 = v36;
      v17 = v56 + v46;
    }
    v56 = v17;
    v33 = v16;
    v31 = (char *)v55 + v42;
    G4_VCALL<void>(v16, 24, (char *)v55 + v42, v46);
    v18 = v33;
    if ( v40 <= 0 )
    {
      v20 = 0;
    }
    else
    {
      v19 = v31;
      v20 = 0;
      do
      {
        v20 += *((uint32_t *)v19 + 11);
        v19 += 64;
      }
      while ( v19 != &v31[v46] );
      v18 = v33;
    }
    v43 = v42 + v46;
    v47 = v20 + v56;
    if ( (int)(v20 + v56) > (v57 & 0x3FFFFFFF) )
    {
      v39 = v18;
      v41 = v20;
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v54,
        (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
        (int *)&v55,
        v47,
        1);
      v20 = v41;
      v47 = v41 + v56;
      v18 = v39;
      if ( (int)(v41 + v56) > (v57 & 0x3FFFFFFF) )
      {
        v25 = 2 * (v57 & 0x3FFFFFFF);
        if ( v25 < v47 )
          v25 = v41 + v56;
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v54,
          (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
          (int *)&v55,
          v25,
          1);
        v20 = v41;
        v47 = v41 + v56;
        v18 = v39;
      }
    }
    v21 = v47;
    v48 = v18;
    v56 = v21;
    G4_VCALL<void>(v18, 24, (char *)v55 + v43, v20);
    ClassNameRegistry = hkSerializeUtil::LoadOptions::getClassNameRegistry((hkSerializeUtil::LoadOptions::Self *)&a5);
    sub_187EB20(&v53, (int *)v55, ClassNameRegistry);
    v6 = v48;
    if ( v53 != 0 )
    {
      result = (int)(uintptr_t)(hkNativePackfileUtils::load(v55, (const void *)v56, v49, v27));
      goto LABEL_3;
    }
    if ( (a5 & 1) != 0 )
    {
      if ( v50 == nullptr || *v50 != 0 )
        goto LABEL_9;
      v9 = v50;
      *v50 = 4;
      v10 = "Class signatures not up to date.";
LABEL_11:
      hkStringPtr::opAssign((hkStringPtr::Self *)(v9 + 1), (hkString::Self *)v10);
      result = 0;
      goto LABEL_3;
    }
  }
LABEL_14:
  if ( v56 == 0 )
  {
LABEL_2:
    result = (*(int ( **)(uint32_t, int, uint32_t *, uint32_t *))(*hkSingleton<hkSerializeDeprecated::Self>::s_instance + 32))(
               (uint32_t)(uintptr_t)(hkSingleton<hkSerializeDeprecated::Self>::s_instance),
               v6,
               a2,
               v50);
    goto LABEL_3;
  }
  hkIstream::Construct((hkIstream::Self *)v58, v55, v56);
  v52 = (*(int ( **)(uint32_t, int, uint32_t *, uint32_t *))(*hkSingleton<hkSerializeDeprecated::Self>::s_instance + 32))(
          (uint32_t)(uintptr_t)(hkSingleton<hkSerializeDeprecated::Self>::s_instance),
          v59,
          a2,
          v50);
  hkIstream::Destroy((hkIstream::Self *)v58);
  result = v52;
LABEL_3:
  v56 = 0;
  if ( v57 >= 0 )
  {
    v51 = result;
    (*(void ( **)(uint32_t *, hkPackfileHeader::Self *, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
      (uint32_t *)(uintptr_t)(hkContainerTempAllocator::s_alloc),
      v55,
      v57 & 0x3FFFFFFF);
    return v51;
  }
  return result;
}

// Binary VA: 0x18e5b50 (source: lib_batch_3.json)
int sub_18E5B50(int result, int a2, int a3)
{
  int v4;
  int v5; // [esp-Ch] [ebp-A8h]
  int v6;
  int v7;
  uint32_t *v8;
  int v9;
  int v10;
  uint32_t v11[36]; // [esp+Ch] [ebp-90h] BYREF

  if ( *(uint8_t *)(a2 + 16) != 0 )
    result = (int)(uintptr_t)(hkDebugDisplayHandler::displayStar(
               (hkDebugDisplayHandler::Self *)(hkSingleton<hkDebugDisplay::Self>::s_instance),
               (const hkVector4f::Self *)(*(uint32_t *)(result + 8) + 16 * a3),
               0.05f));
  if ( *(uint8_t *)(a2 + 21) != 0 )
  {
    v8 = v11;
    v10 = -2147483520;
    v9 = 1;
    LOBYTE(v11[0]) = 0;
    hkStringBuf::printf((hkStringBuf::Self *)&v8, "%d", a3);
    v5 = hkDebugDisplayProcess::m_tag;
    v4 = *(uint32_t *)(a2 + 8);
    hkDebugDisplay::display3dText(hkSingleton<hkDebugDisplay::Self>::s_instance);
    result = v10;
    v9 = 0;
    if ( v10 >= 0 )
      return (*(int ( **)(uint32_t *, uint32_t *, int, int, uint32_t, int, int, int, uint32_t *, int, int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))(hkContainerTempAllocator::s_alloc[0] + 20))(
               (uint32_t *)(uintptr_t)(hkContainerTempAllocator::s_alloc),
               v8,
               v10 & 0x3FFFFFFF,
               v4,
               0,
               v5,
               v6,
               v7,
               v8,
               v9,
               v10,
               v11[0],
               v11[1],
               v11[2],
               v11[3],
               v11[4],
               v11[5],
               v11[6],
               v11[7],
               v11[8],
               v11[9],
               v11[10],
               v11[11],
               v11[12],
               v11[13],
               v11[14],
               v11[15],
               v11[16],
               v11[17],
               v11[18],
               v11[19],
               v11[20],
               v11[21],
               v11[22],
               v11[23],
               v11[24],
               v11[25],
               v11[26],
               v11[27],
               v11[28],
               v11[29],
               v11[30],
               v11[31],
               v11[32]);
  }
  return result;
}

// Binary VA: 0x18815b0 (source: lib_batch_3.json)
hkVersionPatchManager::ClassWrapper::Self * sub_18815B0(hkVersionPatchManager::ClassWrapper::Self *a1,
 hkDataWorld::Self *a2,
 hkVersionPatchManager::ClassWrapper::Self *a3,
 uint32_t *a4,
 hkClassNameRegistry::Self *a5)
{
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  volatile int32_t *v9;
  int v10;
  int32_t v11; // kr00_4
  int32_t v12;
  int32_t v13; // ett
  int v14;
  int v15;
  hkClassNameRegistry::Self *v17;
  hkVersionPatchManager::ClassWrapper::Self *v19; // [esp+Ch] [ebp-40h]
  hkVersionPatchManager::ClassWrapper::Self *v20; // [esp+Ch] [ebp-40h]
  int v21;
  uint32_t *v22;
  uint8_t v23[8]; // [esp+1Ch] [ebp-30h] BYREF
  uint32_t v24[2];
  int v25; // [esp+2Ch] [ebp-20h]
  hkVersionPatchManager::ClassWrapper::Self **v26; // [esp+3Ch] [ebp-10h]

  v26 = &a3;
  v6 = a4;
  v19 = a3;
  v17 = a5;
  hkBinaryTagfileReader::Construct((hkBinaryTagfileReader::Self *)v23);
  hkBinaryTagfileReader::load((hkBinaryTagfileReader::Self *)&v22, (hkStreamReader::Self *)v23, (hkDataWorld::Self *)a2, (int)(uintptr_t)a3);
  v7 = v22;
  if ( v22 != nullptr )
  {
    if ( v6 != nullptr )
    {
      if ( sub_1881130((int)(uintptr_t)v19, v6, (hkVersionPatchManager::Self *)(hkSingleton<hkVersionPatchManager::Self>::s_instance), (int)(uintptr_t)v17) == 0 )
      {
        *(uint32_t *)a1 = 1;
        v7 = v22;
        goto LABEL_14;
      }
      hkDefaultClassWrapper::Construct((hkDefaultClassWrapper::Self *)v24, v17);
      hkVersionPatchManager::applyPatches((hkVersionPatchManager::Self *)&v21, (hkDataWorld::Self *)hkSingleton<hkVersionPatchManager::Self>::s_instance, (hkVersionPatchManager::ClassWrapper::Self *)v19, (uint32_t *)(v24));
      if ( v21 == 0 )
        goto LABEL_5;
      if ( *v6 == 0 )
      {
        *v6 = 4;
        hkStringPtr::opAssign(
          (hkStringPtr::Self *)(v6 + 1),
          (hkString::Self *)"Patching to latest version failed. Have you registered the necessary patches? Patches may be missi"
                      "ng because your assets are older than HK_SERIALIZE_MIN_COMPATIBLE_VERSION (if defined). Make sure "
                      "that the patches are registered properly (see hkRegisterPatches.cxx, included by hkProductFeatures"
                      ".cxx). See the hkError output for more details.");
      }
    }
    else
    {
      hkDefaultClassWrapper::Construct((hkDefaultClassWrapper::Self *)v24, v17);
      hkVersionPatchManager::applyPatches((hkVersionPatchManager::Self *)&v21, (hkDataWorld::Self *)hkSingleton<hkVersionPatchManager::Self>::s_instance, (hkVersionPatchManager::ClassWrapper::Self *)v19, (uint32_t *)(v24));
      if ( v21 == 0 )
      {
LABEL_5:
        *(uint32_t *)a1 = 0;
        goto LABEL_6;
      }
    }
    *(uint32_t *)a1 = 1;
LABEL_6:
    v8 = (uint32_t *)v25;
    v24[0] = off_20A7E88;
    if ( v25 != 0 && *(uint16_t *)(v25 + 6) != 0 )
    {
      v9 = (volatile int32_t *)(v25 + 4);
      v20 = a1;
      do
      {
        v11 = v8[1];
        HIWORD(v10) = HIWORD(v11);
        LOWORD(v10) = 0;
        v12 = v10 | (uint16_t)(v11 - 1);
        v13 = v11;
      }
      while ( v13 != __sync_val_compare_and_swap(v9, v13, v12) );
      a1 = v20;
      if ( (uint16_t)v12 == 0 )
        G4_VCALL<void>(v8, 16);
    }
    v25 = 0;
    v24[0] = off_2054CB8;
    v7 = v22;
    goto LABEL_14;
  }
  if ( v6 != nullptr && *v6 == 0 )
  {
    *v6 = 4;
    hkStringPtr::opAssign(
      (hkStringPtr::Self *)(v6 + 1),
      (hkString::Self *)"Patching to latest version failed. Have you registered the necessary patches? Patches may be missing b"
                  "ecause your assets are older than HK_SERIALIZE_MIN_COMPATIBLE_VERSION (if defined). Make sure that the"
                  " patches are registered properly (see hkRegisterPatches.cxx, included by hkProductFeatures.cxx). See t"
                  "he hkError output for more details.");
    v7 = v22;
  }
  *(uint32_t *)a1 = 1;
LABEL_14:
  if ( v7 != nullptr )
  {
    v14 = v7[1];
    v15 = v7[2];
    LOWORD(v14) = 0;
    v7[1] = v14 | (uint16_t)(v7[1] - 1);
    v7[2] = v15 - 1;
    if ( v15 == 1 )
      G4_VCALL<void>(v7, 4);
  }
  return a1;
}

// Binary VA: 0x1561780 (source: lib_batch_2.json)
int sub_1561780(hkString::Self *a1, int a2)
{
  return hkOstream::opShl(a2, a1);
}

// Binary VA: 0x1881360 (source: lib_batch_3.json)
hkVersionPatchManager::ClassWrapper::Self * sub_1881360(hkVersionPatchManager::ClassWrapper::Self *a1,
 hkDataWorld::Self *a2,
 hkVersionPatchManager::ClassWrapper::Self *a3,
 uint32_t *a4,
 hkClassNameRegistry::Self *a5)
{
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  volatile int32_t *v9;
  int v10;
  int32_t v11; // kr00_4
  int32_t v12;
  int32_t v13; // ett
  int v14;
  int v15;
  hkClassNameRegistry::Self *v17;
  hkVersionPatchManager::ClassWrapper::Self *v18;
  hkVersionPatchManager::ClassWrapper::Self *v19;
  int v20;
  uint32_t *v21; // [esp+Ch] [ebp-48h] BYREF
  uint32_t v22[4]; // [esp+1Ch] [ebp-38h] BYREF
  uint32_t v23[2]; // [esp+2Ch] [ebp-28h] BYREF
  int v24;
  int *v25;

  v25 = (int *)&a3;
  v18 = a3;
  v17 = a5;
  v6 = a4;
  v22[0] = off_20A6868;
  v22[1] = -65535;
  hkXmlTagfileReader::load((hkXmlTagfileReader::Self *)&v21, (hkStreamReader::Self *)v22, a2, (int)(uintptr_t)a3);
  v7 = v21;
  if ( v21 != nullptr )
  {
    if ( v6 != nullptr )
    {
      if ( sub_1881130((int)(uintptr_t)v18, v6, (hkVersionPatchManager::Self *)(hkSingleton<hkVersionPatchManager::Self>::s_instance), (int)(uintptr_t)v17) == 0 )
      {
        *(uint32_t *)a1 = 1;
        v7 = v21;
        goto LABEL_14;
      }
      hkDefaultClassWrapper::Construct((hkDefaultClassWrapper::Self *)v23, v17);
      hkVersionPatchManager::applyPatches((hkVersionPatchManager::Self *)&v20, (hkDataWorld::Self *)hkSingleton<hkVersionPatchManager::Self>::s_instance, (hkVersionPatchManager::ClassWrapper::Self *)v18, (uint32_t *)(v23));
      if ( v20 == 0 )
        goto LABEL_5;
      if ( *v6 == 0 )
      {
        *v6 = 4;
        hkStringPtr::opAssign(
          (hkStringPtr::Self *)(v6 + 1),
          (hkString::Self *)"Patching to latest version failed. Have you registered the necessary patches? Patches may be missi"
                      "ng because your assets are older than HK_SERIALIZE_MIN_COMPATIBLE_VERSION (if defined). Make sure "
                      "that the patches are registered properly (see hkRegisterPatches.cxx, included by hkProductFeatures"
                      ".cxx). See the hkError output for more details.");
      }
    }
    else
    {
      hkDefaultClassWrapper::Construct((hkDefaultClassWrapper::Self *)v23, v17);
      hkVersionPatchManager::applyPatches((hkVersionPatchManager::Self *)&v20, (hkDataWorld::Self *)hkSingleton<hkVersionPatchManager::Self>::s_instance, (hkVersionPatchManager::ClassWrapper::Self *)v18, (uint32_t *)(v23));
      if ( v20 == 0 )
      {
LABEL_5:
        *(uint32_t *)a1 = 0;
        goto LABEL_6;
      }
    }
    *(uint32_t *)a1 = 1;
LABEL_6:
    v8 = (uint32_t *)v24;
    v23[0] = off_20A7E88;
    if ( v24 != 0 && *(uint16_t *)(v24 + 6) != 0 )
    {
      v9 = (volatile int32_t *)(v24 + 4);
      v19 = a1;
      do
      {
        v11 = v8[1];
        HIWORD(v10) = HIWORD(v11);
        LOWORD(v10) = 0;
        v12 = v10 | (uint16_t)(v11 - 1);
        v13 = v11;
      }
      while ( v13 != __sync_val_compare_and_swap(v9, v13, v12) );
      a1 = v19;
      if ( (uint16_t)v12 == 0 )
        G4_VCALL<void>(v8, 16);
    }
    v24 = 0;
    v23[0] = off_2054CB8;
    v7 = v21;
    goto LABEL_14;
  }
  if ( v6 != nullptr && *v6 == 0 )
  {
    *v6 = 4;
    hkStringPtr::opAssign(
      (hkStringPtr::Self *)(v6 + 1),
      (hkString::Self *)"Patching to latest version failed. Have you registered the necessary patches? Patches may be missing b"
                  "ecause your assets are older than HK_SERIALIZE_MIN_COMPATIBLE_VERSION (if defined). Make sure that the"
                  " patches are registered properly (see hkRegisterPatches.cxx, included by hkProductFeatures.cxx). See t"
                  "he hkError output for more details.");
    v7 = v21;
  }
  *(uint32_t *)a1 = 1;
LABEL_14:
  if ( v7 != nullptr )
  {
    v14 = v7[1];
    v15 = v7[2];
    LOWORD(v14) = 0;
    v7[1] = v14 | (uint16_t)(v7[1] - 1);
    v7[2] = v15 - 1;
    if ( v15 == 1 )
      G4_VCALL<void>(v7, 4);
  }
  return a1;
}

// Binary VA: 0x1788800 (source: lib_batch_3.json)
const hkMatrix3f::Self * sub_1788800(int a1, float *a2, hkTransformf::Self *a3)
{
  int v4;
  uint32_t *v5;
  uint32_t *v6;
  float v7; // xmm7_4
  float v8; // xmm6_4
  int v9;
  float *v10;
  float *v11;
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm4_4
  float v16; // xmm1_4
  float v18; // [esp-2Ch] [ebp-38h]
  float v19;
  float v20;
  float v21;
  float v22; // [esp-1Ch] [ebp-28h]
  float v23; // [esp-1Ch] [ebp-28h]
  float v24;
  float v25;
  float v26;
  uint32_t v27[4];

  v4 = *(uint32_t *)(a1 + 64);
  v22 = *(float *)(a1 + 20);
  v26 = *(float *)(v4 + 8) * *a2;
  v5 = *(uint32_t **)a1;
  v27[0] = *(uint32_t *)v4;
  hkSweptTransformUtil::lerp2Ha((float *)(v5 + 16), (float *)(v27), (float *)(&v26), (float *)(a3));
  hkSweptTransformUtil::lerp2Ha((float *)(*(uint32_t *)(a1 + 4) + 64), (float *)(v27), (float *)(&v26), (float *)((char *)a3 + 64));
  hkTransformf::setMulInverseMul((hkTransformf::Self *)((char *)a3 + 128), a3, (hkTransformf::Self *)((char *)a3 + 64));
  hkVector4f::setRotatedDir(
    (hkTransformf::Self *)((char *)a3 + 192),
    (hkTransformf::Self *)((char *)a3 + 128),
    (const hkVector4f::Self *)(a1 + 32));
  hkVector4f::setTransformedPos(
    (hkTransformf::Self *)((char *)a3 + 208),
    (hkTransformf::Self *)((char *)a3 + 128),
    (const hkVector4f::Self *)(a1 + 48));
  *((float *)a3 + 51) = -v22;
  v6 = *(uint32_t **)a1;
  *((uint32_t *)a3 + 68) = *(uint32_t *)(*(uint32_t *)a1 + 128);
  *((uint32_t *)a3 + 69) = v6[33];
  *((uint32_t *)a3 + 70) = v6[34];
  *((uint32_t *)a3 + 71) = v6[35];
  v24 = *((float *)a3 + 2);
  v23 = *((float *)a3 + 4);
  v25 = *((float *)a3 + 5);
  v21 = *((float *)a3 + 6);
  v20 = *((float *)a3 + 8);
  v7 = *(float *)a3;
  v8 = *((float *)a3 + 1);
  v9 = 1;
  v19 = *((float *)a3 + 9);
  v18 = *((float *)a3 + 10);
  while ( 1 )
  {
    v10 = (float *)(a1 + 96 + 16 * v9);
    v11 = (float *)((char *)a3 + 16 * v9 + 240);
    v12 = v10[1];
    v13 = v10[2];
    v14 = v23 * *v10;
    v15 = (float)((float)(*v10 * v20) + (float)(v12 * v19)) + (float)(v18 * v13);
    v16 = (float)((float)(*v10 * v7) + (float)(v12 * v8)) + (float)(v24 * v13);
    v11[2] = v15;
    v11[3] = v15;
    *v11 = v16;
    v11[1] = (float)(v14 + (float)(v25 * v12)) + (float)(v13 * v21);
    if ( v9 != 1 )
      break;
    LOWORD(v9) = 0;
  }
  hkVector4f::setTransformedPos(
    (hkTransformf::Self *)((char *)a3 + 288),
    (hkTransformf::Self *)((char *)a3 + 128),
    (const hkVector4f::Self *)(*(uint32_t *)(a1 + 4) + 128));
  return hkVector4f::setRotatedInverseDir((hkTransformf::Self *)((char *)a3 + 224), a3, (const hkVector4f::Self *)(a1 + 80));
}

// Binary VA: 0x179bf90 (source: lib_batch_3.json)
float * sub_179BF90(uint8_t a1, int a2, int a3, int a4, float **a5)
{
  int v6;
  float *v7;
  float *v9;
  int v10;
  float *v11;
  float v12[15];

  v6 = (uint8_t)byte_1D190ED[a1];
  v10 = (uint8_t)byte_1D190EE[a1];
  v7 = (float *)(a3 + 16 * a1);
  v9 = (float *)(v6 + a4);
  v12[0] = *v7;
  v12[1] = v7[1];
  v12[2] = v7[2];
  v12[3] = v7[3];
  v12[8] = *(float *)(v6 + a4);
  v12[9] = *(float *)(v6 + a4 + 4);
  v12[10] = *(float *)(v6 + a4 + 8);
  v12[11] = *(float *)(v6 + a4 + 12);
  v12[4] = *(float *)(v10 + a4);
  v12[5] = *(float *)(v10 + a4 + 4);
  v12[6] = *(float *)(v10 + a4 + 8);
  v12[7] = *(float *)(v10 + a4 + 12);
  v11 = (float *)(v10 + a4);
  hk1dAngularBilateralConstraintBuildJacobian(v12, a2, a5);
  v12[8] = *v11;
  v12[9] = v11[1];
  v12[10] = v11[2];
  v12[11] = v11[3];
  v12[4] = -*v9;
  v12[5] = -v9[1];
  v12[6] = -v9[2];
  v12[7] = -v9[3];
  return hk1dAngularBilateralConstraintBuildJacobian(v12, a2, a5);
}

// Binary VA: 0x17a61d0 (source: lib_batch_3.json)
int sub_17A61D0(int a1, int a2, int *a3)
{
  float v3; // xmm2_4
  float v4; // xmm1_4
  float *v5;
  float v6; // xmm0_4
  float v7; // xmm5_4
  float v8; // xmm4_4
  float v9; // xmm3_4
  float v10; // xmm7_4
  float v11; // xmm6_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  float *v15;
  float v16; // xmm1_4
  float v17; // xmm7_4
  float v18;
  float v19; // xmm2_4
  float v20; // xmm1_4
  const void *v21;
  float v22; // xmm0_4
  float v23; // xmm3_4
  float v24; // xmm2_4
  float v25; // xmm7_4
  float v26; // xmm1_4
  float v27; // xmm7_4
  uint16_t v29;
  float v30; // [esp-1Ch] [ebp-298h]
  float v31;
  uint16_t *v32;
  int v33;
  float v34[2];
  float v35;
  float v36; // [esp+Ch] [ebp-270h]
  float v37[3];
  float v38; // [esp+1Ch] [ebp-260h]
  uint32_t v39[12];
  uint32_t v40[12];
  uint8_t v41[48];
  float v42[12]; // [esp+B0h] [ebp-1CCh] BYREF
  float v43[12]; // [esp+E0h] [ebp-19Ch] BYREF
  float v44[24];
  float v45[32];
  float v46[35]; // [esp+1F0h] [ebp-8Ch] BYREF

  v3 = *(float *)(a1 + 32);
  v4 = *(float *)(a1 + 36);
  memcpy(v44, (const void *)a2, sizeof(v44));
  v5 = *(float **)(a2 + 56);
  v32 = *(uint16_t **)(a1 + 20);
  v29 = *(uint16_t *)(a1 + 18);
  v6 = *(float *)(a1 + 40);
  v7 = (float)(v5[2] * v3) + (float)(v5[6] * v4);
  v8 = (float)(v5[3] * v3) + (float)(v5[7] * v4);
  v9 = *(float *)(a1 + 48);
  v10 = (float)(v4 * v5[4]) + (float)(v3 * *v5);
  v11 = (float)((float)(v5[1] * v3) + (float)(v5[5] * v4)) + (float)(v5[9] * v6);
  v12 = v5[10] * v6;
  v13 = v5[8] * v6;
  v14 = v6 * v5[11];
  v15 = *(float **)(a2 + 60);
  v34[1] = v11;
  v16 = v13 + v10;
  v17 = *(float *)(a1 + 52);
  v18 = *(float *)(a1 + 56);
  v35 = v7 + v12;
  v34[0] = v16;
  v36 = v8 + v14;
  v31 = v16;
  v19 = (float)(v15[1] * v9) + (float)(v15[5] * v17);
  v20 = (float)(v15[2] * v9) + (float)(v15[6] * v17);
  v30 = v15[3] * v9;
  v21 = *(const void **)(a2 + 48);
  v22 = v15[7] * v17;
  v23 = (float)((float)(v9 * *v15) + (float)(v17 * v15[4])) + (float)(v18 * v15[8]);
  v24 = v19 + (float)(v18 * v15[9]);
  v25 = v18 * v15[10];
  v37[0] = v23;
  v26 = v20 + v25;
  v27 = v18 * v15[11];
  v37[1] = v24;
  v37[2] = v26;
  v38 = (float)(v22 + v30) + v27;
  memcpy(v45, v21, sizeof(v45));
  memcpy(v46, *(const void **)(a2 + 52), 128);
  v45[29] = v11 + v45[29];
  v45[30] = v35 + v45[30];
  v45[28] = v31 + v45[28];
  v45[31] = v36 + v45[31];
  v46[28] = v23 + v46[28];
  v46[29] = v24 + v46[29];
  v46[30] = v26 + v46[30];
  LODWORD(v44[12]) = (uint32_t)(uintptr_t)(v45);
  v46[31] = v38 + v46[31];
  LODWORD(v44[13]) = (uint32_t)(uintptr_t)(v46);
  hkMatrix3f::setCrossSkewSymmetric((hkMatrix3f::Self *)v39, (const hkVector4f::Self *)v34);
  hkMatrix3f::setCrossSkewSymmetric((hkMatrix3f::Self *)v40, (const hkVector4f::Self *)v37);
  memcpy(v41, v39, sizeof(v41));
  hkMatrix3f::setMulInverse((hkMatrix3f::Self *)v39, (const hkMatrix3f::Self *)v41, (const hkRotationf::Self *)&v45[16]);
  memcpy(v41, v40, sizeof(v41));
  hkMatrix3f::setMulInverse((hkMatrix3f::Self *)v40, (const hkMatrix3f::Self *)v41, (const hkRotationf::Self *)&v46[16]);
  memcpy(v42, v39, sizeof(v42));
  v33 = -1082130432;
  hkMatrix3f::mul(v42, (float *)&v33);
  memcpy(v43, v40, sizeof(v43));
  hkMatrix3f::mul(v43, (float *)&v33);
  v45[4] = (float)((float)((float)(v45[8] * v42[0]) + (float)(v45[9] * v42[4])) + (float)(v45[10] * v42[8])) + v45[4];
  v45[6] = (float)((float)((float)(v45[8] * v42[2]) + (float)(v45[9] * v42[6])) + (float)(v45[10] * v42[10])) + v45[6];
  v45[5] = (float)((float)((float)(v45[8] * v42[1]) + (float)(v45[9] * v42[5])) + (float)(v45[10] * v42[9])) + v45[5];
  v45[7] = (float)((float)((float)(v45[8] * v42[3]) + (float)(v45[9] * v42[7])) + (float)(v45[10] * v42[11])) + v45[7];
  v46[4] = (float)((float)((float)(v43[4] * v46[9]) + (float)(v43[0] * v46[8])) + (float)(v46[10] * v43[8])) + v46[4];
  v46[5] = (float)((float)((float)(v43[1] * v46[8]) + (float)(v43[5] * v46[9])) + (float)(v46[10] * v43[9])) + v46[5];
  v46[6] = (float)((float)((float)(v43[2] * v46[8]) + (float)(v43[6] * v46[9])) + (float)(v46[10] * v43[10])) + v46[6];
  v46[7] = (float)((float)((float)(v46[8] * v43[3]) + (float)(v46[9] * v43[7])) + (float)(v46[10] * v43[11])) + v46[7];
  hkSetCenterOfMassBuildJacobian((uint32_t *)(uintptr_t)(v42), (uint32_t *)(uintptr_t)(v43), a3);
  if ( *v32 == 29 )
    hkSimpleContactConstraintDataBuildJacobian(v32, v44, 1, a3);
  else
    hkSolverBuildJacobianFromAtomsNotContact(v32, v29, v44, (float **)a3);
  return hkSetCenterOfMassBuildJacobian(v39, v40, a3);
}

// Binary VA: 0x179bec0 (source: lib_batch_3.json)
float sub_179BEC0(__m128i a1)
{
  int v1;
  float v2; // xmm2_4
  float v3; // xmm1_4

  v1 = ((_mm_cvtsi128_si32(a1) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(a1) >> 1));
  v2 = (float)(*(float *)&v1 * 1.5)
     - (float)((float)((float)(0.5 * *(float *)a1.i32) * *(float *)&v1) * (float)(*(float *)&v1 * *(float *)&v1));
  v3 = (float)(v2 * 1.5) - (float)((float)((float)(0.5 * *(float *)a1.i32) * v2) * (float)(v2 * v2));
  return (float)(1.5 * v3) - (float)((float)((float)(0.5 * *(float *)a1.i32) * v3) * (float)(v3 * v3));
}

// Binary VA: 0x179d4f0 (source: lib_batch_3.json)
float * sub_179D4F0(int a1, int a2, float *a3, float *a4, float **a5)
{
  int v5;
  float *v6;
  float v7; // xmm0_4
  float *v8;
  float *v9;
  float v10;
  float v11; // xmm4_4
  float v12; // xmm3_4
  float v13; // xmm7_4
  float v14; // xmm6_4
  float v15; // xmm5_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm2_4
  float v19; // xmm6_4
  float v20; // xmm1_4
  float v21; // xmm5_4
  float v22; // xmm4_4
  float v23; // xmm3_4
  float v24; // xmm7_4
  float v25; // xmm0_4
  float v26; // xmm2_4
  float v27; // xmm7_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm7_4
  float v32; // xmm2_4
  float v33; // xmm1_4
  float v34; // xmm7_4
  float v35; // xmm2_4
  float v36; // xmm0_4
  float v37; // xmm5_4
  float v38; // xmm4_4
  float v39; // xmm3_4
  float v40; // xmm2_4
  float v41; // xmm0_4
  float v42; // xmm6_4
  float v43; // xmm4_4
  float v44; // xmm5_4
  float v45; // xmm1_4
  float v46; // xmm4_4
  float v47; // xmm2_4
  float v48; // xmm1_4
  float v49; // xmm4_4
  float v50; // xmm3_4
  float v51; // xmm2_4
  float v52; // xmm0_4
  float v53; // xmm5_4
  float v54; // xmm2_4
  float v55; // xmm3_4
  float v56; // xmm5_4
  float v57; // xmm7_4
  float v58; // xmm3_4
  float v59; // xmm0_4
  float v60; // xmm2_4
  float v61; // xmm3_4
  float v62; // xmm7_4
  float v63; // xmm3_4
  float v64; // xmm0_4
  float v65; // xmm1_4
  float v66; // xmm7_4
  float v67; // xmm0_4
  float v68; // xmm7_4
  float v69; // xmm2_4
  float v70; // xmm1_4
  float v71; // xmm7_4
  float v72; // xmm2_4
  float v73; // xmm0_4
  float v74; // xmm2_4
  float v75; // xmm5_4
  float v76; // xmm6_4
  float v77; // xmm2_4
  float v78; // xmm6_4
  float v79; // xmm2_4
  float v80; // xmm0_4
  float *v81;
  float v82; // xmm0_4
  float v83; // xmm2_4
  float v84; // xmm3_4
  float *v85;
  float v86; // xmm1_4
  float v87; // xmm0_4
  float v88; // xmm3_4
  __m128i v89;
  float v90; // xmm2_4
  float v91; // xmm5_4
  float v92; // xmm4_4
  __m128i v93;
  float v94; // xmm4_4
  float v95; // xmm1_4
  float v96; // xmm1_4
  float v97; // xmm0_4
  float *v98;
  float v99; // xmm3_4
  float v100; // xmm2_4
  float v101; // xmm1_4
  float *v102;
  float v103; // xmm0_4
  float v104; // xmm3_4
  float v105; // xmm1_4
  __m128i v106;
  float v107; // xmm3_4
  float v108; // xmm2_4
  float v109; // xmm6_4
  __m128i v110;
  float v111; // xmm5_4
  float v112; // xmm1_4
  float v113; // xmm1_4
  __m128i v114;
  float v115; // xmm5_4
  int v116;
  int v117; // xmm1_4
  float v118; // xmm6_4
  float v119; // xmm1_4
  __m128i v120;
  float v121; // xmm2_4
  float v122; // xmm3_4
  float v123; // xmm0_4
  float v124; // xmm1_4
  float v125; // xmm0_4
  __m128i v126;
  float v127; // xmm3_4
  float v128; // xmm2_4
  float v129; // xmm1_4
  float v130; // xmm1_4
  __m128i v131;
  int v132;
  float v133; // xmm0_4
  float v134; // xmm6_4
  float v135; // xmm0_4
  float v136; // xmm4_4
  float v137; // xmm3_4
  float v138; // xmm2_4
  float v139; // xmm0_4
  float v140; // xmm2_4
  float v141; // xmm3_4
  float v143; // xmm1_4
  int v144; // xmm0_4
  float v145; // xmm0_4
  float v146; // xmm5_4
  float v147; // xmm0_4
  float v148; // xmm0_4
  float v149; // xmm6_4
  float v150; // xmm0_4
  int v151; // [esp-D4h] [ebp-E0h]
  int v152; // [esp-D0h] [ebp-DCh]
  float v153; // [esp-C8h] [ebp-D4h]
  float v154; // [esp-C4h] [ebp-D0h]
  float *v155; // [esp-C4h] [ebp-D0h]
  float v156; // [esp-C0h] [ebp-CCh]
  float v157; // [esp-BCh] [ebp-C8h]
  float v158; // [esp-B8h] [ebp-C4h]
  int v159; // [esp-B4h] [ebp-C0h]
  float v161; // [esp-ACh] [ebp-B8h]
  int v162; // [esp-ACh] [ebp-B8h]
  float v163; // [esp-A8h] [ebp-B4h]
  float v164; // [esp-A4h] [ebp-B0h]
  float *v165; // [esp-A4h] [ebp-B0h]
  float v166; // [esp-A0h] [ebp-ACh]
  float v167; // [esp-A0h] [ebp-ACh]
  int v168; // [esp-A0h] [ebp-ACh]
  float v169; // [esp-A0h] [ebp-ACh]
  float *v170; // [esp-A0h] [ebp-ACh]
  float v171; // [esp-9Ch] [ebp-A8h]
  float v172; // [esp-9Ch] [ebp-A8h]
  float v173; // [esp-9Ch] [ebp-A8h]
  float v174; // [esp-9Ch] [ebp-A8h]
  int v175; // [esp-9Ch] [ebp-A8h]
  float *v176; // [esp-9Ch] [ebp-A8h]
  float v177;
  float v178;
  float *v179;
  float v180;
  float v181;
  float v182;
  float v183;
  int v184;
  int v185;
  float v186;
  float v187;
  float v188;
  int v189;
  float *v190;
  int v191;
  float v192;
  float v193;
  float v194; // [esp-8Ch] [ebp-98h]
  float v195; // [esp-8Ch] [ebp-98h]
  float v196; // [esp-8Ch] [ebp-98h]
  float v197; // [esp-8Ch] [ebp-98h]
  int v198; // [esp-8Ch] [ebp-98h]
  int v199; // [esp-8Ch] [ebp-98h]
  int v200; // [esp-8Ch] [ebp-98h]
  float *v201; // [esp-8Ch] [ebp-98h]
  float v202; // [esp-8Ch] [ebp-98h]
  int v203; // [esp-8Ch] [ebp-98h]
  float v204;
  float v205;
  int v206;
  float v207;
  float *v208;
  float v209;
  float v210;
  int v211;
  float v212;
  int v213;
  int v214;
  float v215;
  float v216;
  float v217;
  int v218;
  int v219; // [esp-7Ch] [ebp-88h]
  int v220;
  unsigned int v221;
  float v222; // [esp-6Ch] [ebp-78h]
  float v223;
  float v224;
  float v225[12];
  float v226[15];

  v5 = a1;
  v6 = *(float **)(a2 + 52);
  v7 = *(float *)(a2 + 4);
  v166 = *(float *)(a1 + 92);
  v8 = *a5;
  v9 = *(float **)(a2 + 48);
  v10 = *(float *)(v5 + 76);
  v209 = *(float *)(v5 + 36) * v7;
  v204 = *(float *)(v5 + 40) * v7;
  v11 = *(float *)(v5 + 64) * v7;
  v12 = *(float *)(v5 + 68) * v7;
  v194 = *(float *)(v5 + 44) * v7;
  v13 = *(float *)(v5 + 80) * v7;
  v14 = *(float *)(v5 + 84) * v7;
  v15 = *(float *)(v5 + 88) * v7;
  v187 = *(float *)(v5 + 48) * v7;
  v180 = *(float *)(v5 + 52) * v7;
  v177 = *(float *)(v5 + 56) * v7;
  v171 = *(float *)(v5 + 60) * v7;
  v16 = *(float *)(v5 + 32) * v7;
  v8[10] = *(float *)(v5 + 72) * v7;
  *v8 = v16;
  v8[1] = v209;
  v8[2] = v204;
  v8[3] = v194;
  v8[4] = v187;
  v8[5] = v180;
  v8[6] = v177;
  v8[8] = v11;
  v8[12] = v13;
  v8[7] = v171;
  v8[9] = v12;
  v8[11] = v10 * v7;
  v8[13] = v14;
  v8[14] = v15;
  v8[15] = v7 * v166;
  v17 = *a3;
  v18 = a3[1];
  v19 = v9[16];
  v20 = a3[2];
  v21 = v9[24];
  v167 = (float)((float)(v9[20] * v18) + (float)(*a3 * v19)) + (float)(v20 * v21);
  v225[0] = v167;
  v22 = v9[25];
  v23 = v9[26];
  v164 = (float)((float)(v9[21] * v18) + (float)(v9[17] * v17)) + (float)(v20 * v22);
  v225[1] = v164;
  v195 = v9[18] * v17;
  v24 = v9[22] * v18;
  v25 = (float)(v17 * v9[19]) + (float)(v18 * v9[23]);
  v26 = a3[4];
  v196 = v24 + v195;
  v27 = v20 * v23;
  v28 = v25 + (float)(v20 * v9[27]);
  v29 = a3[5];
  v197 = v27 + v196;
  v225[2] = v197;
  v225[3] = v28;
  v30 = a3[6];
  v188 = (float)((float)(v9[20] * v29) + (float)(v19 * v26)) + (float)(v21 * v30);
  v225[4] = v188;
  v210 = (float)((float)(v9[21] * v29) + (float)(v9[17] * v26)) + (float)(v22 * v30);
  v225[5] = v210;
  v181 = v9[18] * v26;
  v31 = v9[22] * v29;
  v32 = (float)(v26 * v9[19]) + (float)(v29 * v9[23]);
  v33 = a3[9];
  v182 = v31 + v181;
  v34 = v23 * v30;
  v35 = v32 + (float)(v30 * v9[27]);
  v36 = a3[10];
  v37 = v21 * v36;
  v38 = v22 * v36;
  v39 = v23 * v36;
  v183 = v34 + v182;
  v225[7] = v35;
  v40 = a3[8];
  v225[6] = v183;
  v41 = v36 * v9[27];
  v156 = (float)((float)(v9[20] * v33) + (float)(v19 * v40)) + v37;
  v225[8] = v156;
  v42 = v6[24];
  v43 = (float)((float)(v9[21] * v33) + (float)(v9[17] * v40)) + v38;
  v44 = v9[22] * v33;
  v45 = v33 * v9[23];
  v154 = v43;
  v225[9] = v43;
  v46 = (float)(v9[18] * v40) + v44;
  v47 = (float)(v40 * v9[19]) + v45;
  v48 = a4[2];
  v49 = v46 + v39;
  v50 = v6[20];
  v51 = v47 + v41;
  v52 = *a4;
  v53 = v6[16] * *a4;
  v225[10] = v49;
  v225[11] = v51;
  v54 = a4[1];
  v161 = (float)((float)(v50 * v54) + v53) + (float)(v48 * v42);
  v55 = v6[17] * v52;
  v226[0] = v161;
  v56 = v6[25];
  v158 = (float)((float)(v6[21] * v54) + v55) + (float)(v48 * v56);
  v226[1] = v158;
  v57 = v6[18] * v52;
  v58 = v6[22] * v54;
  v59 = (float)(v52 * v6[19]) + (float)(v54 * v6[23]);
  v60 = a4[4];
  v61 = (float)(v58 + v57) + (float)(v6[26] * v48);
  v62 = v6[16] * v60;
  v157 = v61;
  v226[2] = v61;
  v63 = v6[27];
  v64 = v59 + (float)(v48 * v63);
  v65 = a4[5];
  v66 = (float)(v6[20] * v65) + v62;
  v226[3] = v64;
  v67 = a4[6];
  v178 = (float)(v42 * v67) + v66;
  v226[4] = v178;
  v205 = (float)((float)(v6[21] * v65) + (float)(v6[17] * v60)) + (float)(v56 * v67);
  v226[5] = v205;
  v172 = v6[18] * v60;
  v68 = v6[22] * v65;
  v69 = (float)(v60 * v6[19]) + (float)(v65 * v6[23]);
  v70 = a4[9];
  v173 = v68 + v172;
  v71 = v6[26] * v67;
  v72 = v69 + (float)(v67 * v63);
  v73 = a4[10];
  v174 = v71 + v173;
  v226[6] = v174;
  v226[7] = v72;
  v74 = a4[8];
  v163 = (float)((float)(v6[20] * v70) + (float)(v6[16] * v74)) + (float)(v42 * v73);
  v226[8] = v163;
  v75 = (float)((float)(v6[21] * v70) + (float)(v6[17] * v74)) + (float)(v56 * v73);
  v76 = v6[18] * v74;
  v77 = v74 * v6[19];
  v153 = v75;
  v226[9] = v75;
  v78 = (float)(v76 + (float)(v6[22] * v70)) + (float)(v6[26] * v73);
  v79 = (float)(v77 + (float)(v70 * v6[23])) + (float)(v63 * v73);
  v80 = (float)(v167 + v210) + v49;
  v226[10] = v78;
  v226[11] = v79;
  if ( v80 > 0.0 )
  {
    v145 = v80 + 1.0;
    v146 = fsqrt(v145);
    if ( __builtin_isnan(v146) )
    {
      v152 = v5;
      v170 = v9;
      v217 = sqrtf(v145);
      v5 = v152;
      v146 = v217;
      v9 = v170;
    }
    v147 = 0.5 / v146;
    do { std::memset(&v89, 0, 16); v89.u64[0] = (uint64_t)(uintptr_t)(LODWORD(v183)); } while (0);
    v91 = v146 * 0.5;
    v92 = (float)(v156 - v197) * v147;
    v90 = (float)(v164 - v188) * v147;
    *(float *)v89.i32 = (float)(v183 - v154) * v147;
    v212 = v92;
  }
  else
  {
    v211 = v210 > v167;
    v218 = 1;
    v219 = 2;
    v189 = 4 * v211;
    v220 = 0;
    if ( v49 > v226[4 * v211 - 12 + v211] )
    {
      v84 = v197;
      v189 = 8;
      v82 = v167;
      v198 = 1;
      v83 = v164;
      v168 = 4;
      v184 = 0;
      v211 = 2;
    }
    else
    {
      v159 = v5;
      v184 = *(&v218 + v211);
      v198 = *(&v218 + v184);
      v81 = &v225[4 * v184];
      v82 = v81[v184];
      v168 = 4 * v198;
      v83 = v81[v198];
      v84 = v81[v211];
      v5 = v159;
    }
    v165 = v9;
    v85 = &v225[v168];
    v190 = &v225[v189];
    v86 = (float)(v190[v211] - (float)(v82 + v225[v168 + v198])) + 1.0;
    v87 = fsqrt(v86);
    if ( __builtin_isnan(v87) )
    {
      v151 = v5;
      v155 = &v225[v168];
      v169 = sqrtf(v86);
      v5 = v151;
      v87 = v169;
      v85 = v155;
      v9 = v165;
    }
    *((float *)&v221 + v211) = v87 * 0.5;
    v88 = (float)(v84 + v190[v184]) * (float)(0.5 / v87);
    v224 = (float)(v83 - v85[v184]) * (float)(0.5 / v87);
    *((float *)&v221 + v184) = v88;
    *((float *)&v221 + v198) = (float)(v190[v198] + v85[v211]) * (float)(0.5 / v87);
    v212 = v222;
    do { std::memset(&v89, 0, 16); v89.u64[0] = (uint64_t)(uintptr_t)(v221); } while (0);
    v90 = v223;
    v91 = v224;
    v92 = v222;
  }
  v93 = v89;
  *(float *)v93.i32 = (float)((float)((float)(*(float *)v89.i32 * *(float *)v89.i32)
                                          + (float)(v92 * v92))
                                  + (float)(v90 * v90))
                          + (float)(v91 * v91);
  v94 = 0.5 * *(float *)v93.i32;
  v199 = ((_mm_cvtsi128_si32(v93) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v93) >> 1));
  v95 = (float)(1.5 * *(float *)&v199)
      - (float)((float)((float)(0.5 * *(float *)v93.i32) * *(float *)&v199)
              * (float)(*(float *)&v199 * *(float *)&v199));
  v96 = (float)(1.5 * (float)((float)(1.5 * v95) - (float)((float)(v94 * v95) * (float)(v95 * v95))))
      - (float)((float)(v94 * (float)((float)(1.5 * v95) - (float)((float)(v94 * v95) * (float)(v95 * v95))))
              * (float)((float)((float)(1.5 * v95) - (float)((float)(v94 * v95) * (float)(v95 * v95)))
                      * (float)((float)(1.5 * v95) - (float)((float)(v94 * v95) * (float)(v95 * v95)))));
  v8[17] = v212 * v96;
  v8[19] = v91 * v96;
  v8[16] = *(float *)v89.i32 * v96;
  v8[18] = v90 * v96;
  v97 = (float)(v161 + v205) + v78;
  if ( v97 > 0.0 )
  {
    v148 = v97 + 1.0;
    v149 = fsqrt(v148);
    if ( __builtin_isnan(v149) )
    {
      v203 = v5;
      v208 = v9;
      v216 = sqrtf(v148);
      v5 = v203;
      v149 = v216;
      v9 = v208;
    }
    do { std::memset(&v106, 0, 16); v106.u64[0] = (uint64_t)(uintptr_t)(LODWORD(v174)); } while (0);
    v150 = 0.5 / v149;
    v109 = v149 * 0.5;
    v108 = (float)(v158 - v178) * v150;
    v107 = (float)(v163 - v157) * v150;
    *(float *)v106.i32 = (float)(v174 - v153) * v150;
  }
  else
  {
    v213 = v205 > v161;
    v218 = 1;
    v219 = 2;
    v200 = 4 * v213;
    v220 = 0;
    if ( v78 > v226[4 * v213 + v213] )
    {
      v101 = v157;
      v185 = 4;
      v100 = v158;
      v200 = 8;
      v99 = v161;
      v206 = 1;
      v191 = 0;
      v213 = 2;
    }
    else
    {
      v175 = v5;
      v191 = *(&v218 + v213);
      v206 = *(&v218 + v191);
      v98 = &v226[4 * v191];
      v99 = v98[v191];
      v185 = 4 * v206;
      v100 = v98[v206];
      v101 = v98[v213];
      v5 = v175;
    }
    v179 = v9;
    v102 = &v226[v185];
    v201 = &v226[v200];
    v103 = (float)(v201[v213] - (float)(v99 + v226[v185 + v206])) + 1.0;
    v104 = fsqrt(v103);
    if ( __builtin_isnan(v104) )
    {
      v162 = v5;
      v176 = &v226[v185];
      v186 = sqrtf(v103);
      v5 = v162;
      v104 = v186;
      v102 = v176;
      v9 = v179;
    }
    *((float *)&v221 + v213) = v104 * 0.5;
    v105 = (float)(v101 + v201[v191]) * (float)(0.5 / v104);
    v224 = (float)(v100 - v102[v191]) * (float)(0.5 / v104);
    *((float *)&v221 + v191) = v105;
    *((float *)&v221 + v206) = (float)(v201[v206] + v102[v213]) * (float)(0.5 / v104);
    do { std::memset(&v106, 0, 16); v106.u64[0] = (uint64_t)(uintptr_t)(v221); } while (0);
    v107 = v222;
    v108 = v223;
    v109 = v224;
  }
  v110 = v106;
  *(float *)v110.i32 = (float)((float)((float)(*(float *)v106.i32 * *(float *)v106.i32)
                                           + (float)(v107 * v107))
                                   + (float)(v108 * v108))
                           + (float)(v109 * v109);
  v111 = 0.5 * *(float *)v110.i32;
  v214 = ((_mm_cvtsi128_si32(v110) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v110) >> 1));
  v112 = (float)(1.5 * *(float *)&v214)
       - (float)((float)((float)(0.5 * *(float *)v110.i32) * *(float *)&v214)
               * (float)(*(float *)&v214 * *(float *)&v214));
  *(float *)v110.i32 = (float)(1.5 * v112)
                           - (float)((float)((float)(0.5 * *(float *)v110.i32) * v112) * (float)(v112 * v112));
  v113 = (float)(1.5 * *(float *)v110.i32)
       - (float)((float)(v111 * *(float *)v110.i32) * (float)(*(float *)v110.i32 * *(float *)v110.i32));
  v8[20] = *(float *)v106.i32 * v113;
  v8[21] = v107 * v113;
  v8[22] = v108 * v113;
  v8[23] = v109 * v113;
  v192 = v6[15];
  do { std::memset(&v114, 0, 16); v114.u64[0] = (uint64_t)(uintptr_t)(LODWORD(v192)); } while (0);
  *(float *)v114.i32 = v192 + v9[15];
  v115 = *(float *)(v5 + 20);
  v207 = *(float *)(v5 + 24);
  v116 = _mm_cvtsi128_si32(v114);
  v117 = (2130706432 - v116) & ((v116 ^ (v116 + 2139095040)) >> 31);
  v118 = 1.0;
  v119 = (float)(2.0
               - (float)(*(float *)v114.i32
                       * (float)((float)(2.0 - (float)(*(float *)v114.i32 * *(float *)&v117)) * *(float *)&v117)))
       * (float)((float)(2.0 - (float)(*(float *)v114.i32 * *(float *)&v117)) * *(float *)&v117);
  do { std::memset(&v120, 0, 16); v120.u64[0] = (uint64_t)(uintptr_t)(*(unsigned int *)(v5 + 16)); } while (0);
  v215 = *(float *)(v5 + 28);
  v121 = 0.0;
  v202 = *(float *)v120.i32;
  *(float *)v110.i32 = 2.0 - (float)(*(float *)v114.i32 * v119);
  v122 = 0.0;
  v123 = *(float *)v110.i32 * v119;
  v124 = 0.0;
  *(float *)v120.i32 = (float)((float)((float)(*(float *)v120.i32 * 0.0) + (float)(v115 * 0.0))
                                   + (float)(v207 * 0.0))
                           + (float)(v215 * 1.0);
  if ( _mm_cvtsi128_si32(v120) < 0 )
  {
    v122 = -0.0;
    v121 = -0.0;
    v124 = -0.0;
    v118 = -1.0;
  }
  do { std::memset(&v126, 0, 16); v126.u64[0] = (uint64_t)(uintptr_t)(LODWORD(v202)); } while (0);
  v125 = v123 * v192;
  *(float *)v126.i32 = (float)((float)(v202 - v122) * v125) + v122;
  v127 = (float)((float)(v115 - v121) * v125) + v121;
  v128 = (float)((float)(v207 - v124) * v125) + v124;
  v129 = (float)(v215 - v118) * v125;
  v131 = v126;
  v130 = v129 + v118;
  *(float *)v131.i32 = (float)((float)((float)(*(float *)v126.i32 * *(float *)v126.i32)
                                           + (float)(v127 * v127))
                                   + (float)(v128 * v128))
                           + (float)(v130 * v130);
  if ( *(float *)v131.i32 <= 0.0 )
  {
    v135 = 0.0;
  }
  else
  {
    v193 = 0.5 * *(float *)v131.i32;
    v132 = ((_mm_cvtsi128_si32(v131) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v131) >> 1));
    v133 = (float)(1.5 * *(float *)&v132)
         - (float)((float)((float)(0.5 * *(float *)v131.i32) * *(float *)&v132)
                 * (float)(*(float *)&v132 * *(float *)&v132));
    v134 = (float)(1.5 * v133) - (float)((float)(v193 * v133) * (float)(v133 * v133));
    v135 = (float)(1.5 * v134) - (float)((float)(v193 * v134) * (float)(v134 * v134));
  }
  v136 = *(float *)v126.i32 * v135;
  v137 = v127 * v135;
  v138 = v128 * v135;
  v139 = v135 * v130;
  v8[24] = v136;
  v8[25] = v137;
  v8[26] = v138;
  v8[27] = v139;
  v8[28] = (float)((float)((float)(v207 * v137) - (float)(v115 * v138)) + (float)(v215 * v136)) - (float)(v202 * v139);
  v8[29] = (float)((float)((float)(v202 * v138) - (float)(v207 * v136)) + (float)(v215 * v137)) - (float)(v115 * v139);
  v8[30] = (float)((float)((float)(v136 * v115) - (float)(v137 * v202)) + (float)(v215 * v138)) - (float)(v207 * v139);
  v8[31] = (float)((float)((float)(v202 * v136) + (float)(v115 * v137)) + (float)(v138 * v207)) + (float)(v139 * v215);
  v140 = *(float *)(a2 + 64);
  v141 = *(float *)(a2 + 8) * v140;
  v143 = 1.0
       - (float)((float)((float)((float)(*(float *)(v5 + 16) * *(float *)(v5 + 16))
                               + (float)(*(float *)(v5 + 20) * *(float *)(v5 + 20)))
                       + (float)(*(float *)(v5 + 24) * *(float *)(v5 + 24)))
               * 2.0);
  v144 = *(uint32_t *)(v5 + 44);
  *(uint8_t *)v8 = 35;
  v8[3] = v140;
  v8[7] = v141;
  *((uint32_t *)v8 + 15) = v144;
  v8[11] = v143;
  *a5 = v8 + 32;
  return v8 + 32;
}

// Binary VA: 0x179c3f0 (source: lib_batch_3.json)
float ** sub_179C3F0(int a1, int a2, float **a3)
{
  float *v3;
  float *v4;
  float *v5;
  float v6; // xmm5_4
  float v7; // xmm4_4
  float v8; // xmm0_4
  float *v9;
  int v10;
  float v11; // xmm1_4
  float v12; // xmm7_4
  float *v13;
  float v14; // xmm2_4
  float v15; // xmm6_4
  float v16; // xmm5_4
  float v17; // xmm3_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm0_4
  float v21; // xmm5_4
  float v22; // xmm3_4
  char *v23;
  __m128i v24;
  float v25; // xmm0_4
  float v26; // xmm7_4
  float v27; // xmm6_4
  float v28; // xmm4_4
  float v29; // xmm2_4
  float v30; // xmm0_4
  float v31; // xmm7_4
  float v32; // xmm6_4
  float v33; // xmm4_4
  float v34; // xmm2_4
  float v35; // xmm0_4
  int v36;
  int v37; // xmm0_4
  int v38;
  float v39; // xmm0_4
  float v40; // xmm0_4
  float *v43; // [esp-1Ch] [ebp-28h]
  int v44;
  int v45;
  float *v47; // [esp-Ch] [ebp-18h]
  float v48;
  float v49;

  v47 = *(float **)a1;
  v44 = *(uint32_t *)(a1 + 4);
  v3 = *a3;
  v43 = *a3;
  if ( *(int *)(a1 + 12) > 0 )
  {
    v4 = *a3;
    v45 = 0;
    v5 = v3 + 4;
    do
    {
      v6 = *v47;
      v7 = -*v47;
      v8 = v47[1];
      v9 = *(float **)(a2 + 52);
      v10 = *(uint32_t *)(a2 + 48);
      v11 = *(float *)(v10 + 64) * *v47;
      v49 = -v8;
      v12 = v47[2];
      *v4 = v11;
      v13 = v4;
      v14 = *(float *)(v10 + 68) * v6;
      v4 += 12;
      v48 = -v12;
      *(v4 - 11) = v14;
      v15 = *(float *)(v10 + 72) * v6;
      *(v4 - 10) = v15;
      v16 = v6 * *(float *)(v10 + 76);
      *(v4 - 9) = v16;
      v17 = (float)(*(float *)(v10 + 80) * v8) + v11;
      *(v4 - 12) = v17;
      v18 = (float)(*(float *)(v10 + 84) * v8) + v14;
      *(v4 - 11) = v18;
      v19 = (float)(*(float *)(v10 + 88) * v8) + v15;
      *(v4 - 10) = v19;
      v20 = (float)(v8 * *(float *)(v10 + 92)) + v16;
      *(v4 - 9) = v20;
      v21 = (float)(*(float *)(v10 + 96) * v12) + v17;
      *(v4 - 12) = v21;
      v22 = (float)(*(float *)(v10 + 100) * v12) + v18;
      *(v4 - 11) = v22;
      v23 = (char *)((char *)v13 - (char *)v43);
      do { std::memset(&v24, 0, 16); v24.u64[0] = (uint64_t)(uintptr_t)(*(unsigned int *)(v10 + 104)); } while (0);
      *(float *)v24.i32 = (float)(*(float *)v24.i32 * v12) + v19;
      *(v4 - 10) = *(float *)v24.i32;
      *(v4 - 9) = (float)(v12 * *(float *)(v10 + 108)) + v20;
      v25 = v9[16] * v7;
      *(float *)((char *)v5 + (uint32_t)(uintptr_t)v23) = v25;
      v26 = v9[17] * v7;
      *(float *)((char *)v5 + (uint32_t)(uintptr_t)v23 + 4) = v26;
      v27 = v9[18] * v7;
      *(float *)((char *)v5 + (uint32_t)(uintptr_t)v23 + 8) = v27;
      v28 = v7 * v9[19];
      *(float *)((char *)v5 + (uint32_t)(uintptr_t)v23 + 12) = v28;
      v29 = (float)(v49 * v9[20]) + v25;
      *(float *)((char *)v5 + (uint32_t)(uintptr_t)v23) = v29;
      v30 = (float)(v49 * v9[21]) + v26;
      *(float *)((char *)v5 + (uint32_t)(uintptr_t)v23 + 4) = v30;
      v31 = (float)(v49 * v9[22]) + v27;
      *(float *)((char *)v5 + (uint32_t)(uintptr_t)v23 + 8) = v31;
      v32 = (float)(v49 * v9[23]) + v28;
      *(float *)((char *)v5 + (uint32_t)(uintptr_t)v23 + 12) = v32;
      v33 = (float)(v48 * v9[24]) + v29;
      *(float *)((char *)v5 + (uint32_t)(uintptr_t)v23) = v33;
      v34 = (float)(v48 * v9[25]) + v30;
      *(float *)((char *)v5 + (uint32_t)(uintptr_t)v23 + 4) = v34;
      v35 = (float)(v48 * v9[26]) + v31;
      *(float *)((char *)v5 + (uint32_t)(uintptr_t)v23 + 8) = v35;
      v47 += 4;
      *(float *)((char *)v5 + (uint32_t)(uintptr_t)v23 + 12) = (float)(v48 * v9[27]) + v32;
      *(float *)v24.i32 = (float)((float)((float)((float)(*(float *)v24.i32 * *(float *)v24.i32)
                                                      * *(float *)(v10 + 56))
                                              + (float)((float)(v35 * v35) * v9[14]))
                                      + (float)((float)((float)((float)(v22 * v22) * *(float *)(v10 + 52))
                                                      + (float)((float)(v34 * v34) * v9[13]))
                                              + (float)((float)((float)(v21 * v21) * *(float *)(v10 + 48))
                                                      + (float)((float)(v33 * v33) * v9[12]))))
                              + 0.00000011920929f;
      v36 = _mm_cvtsi128_si32(v24);
      v37 = (2130706432 - v36) & ((v36 ^ (v36 + 2139095040)) >> 31);
      v38 = v44;
      v44 += 16;
      v39 = (float)(2.0
                  - (float)(*(float *)v24.i32
                          * (float)((float)(2.0 - (float)(*(float *)v24.i32 * *(float *)&v37)) * *(float *)&v37)))
          * (float)((float)(2.0 - (float)(*(float *)v24.i32 * *(float *)&v37)) * *(float *)&v37);
      *(v4 - 9) = (float)(2.0 - (float)(*(float *)v24.i32 * v39)) * v39;
      *(v4 - 5) = *(float *)(v38 + 4) * *(float *)(a2 + 32);
      v40 = *(float *)(a1 + 8) * *(float *)(a2 + 4);
      *((uint32_t *)v4 - 3) = v45;
      *((uint8_t *)v4 - 48) = 14;
      ++v45;
      *(v4 - 4) = v40;
    }
    while ( v45 < *(uint32_t *)(a1 + 12) );
    v3 = v4;
  }
  *a3 = v3;
  return a3;
}

// Binary VA: 0x187eb20 (source: lib_batch_3.json)
uint8_t * sub_187EB20(uint8_t *a1, int *a2, int a3)
{
  hkString::Self *SectionHeader;
  int v5;
  char *v6;
  int v7;
  hkClass::Self *v8;
  hkString::Self *v11;
  int v13;

  SectionHeader = (hkString::Self *)hkPackfileHeader::getSectionHeader((hkPackfileHeader::Self *)a2, a2, 0);
  if ( a2[5] <= 0 )
  {
LABEL_13:
    *a1 = 0;
    return a1;
  }
  v5 = 0;
  while ( hkString::strCmp(SectionHeader, hkBinaryPackfileWriter::SECTION_TAG_CLASSNAMES) != 0 )
  {
    ++v5;
    SectionHeader = (hkString::Self *)((char *)SectionHeader + 64);
    if ( a2[5] <= v5 )
      goto LABEL_13;
  }
  if ( *((int *)SectionHeader + 6) > 6 )
  {
    v6 = (char *)a2 + *((uint32_t *)SectionHeader + 5);
    v13 = *(uint32_t *)v6;
    v11 = (hkString::Self *)(v6 + 5);
    if ( v6[5] != -1 )
    {
      v7 = 0;
      while ( v6[4] == 9 )
      {
        v8 = (hkClass::Self *)G4_VCALL<int>(a3, 24, v11);
        if ( v8 == nullptr || v13 != hkClass::getSignature(v8, 0) )
          break;
        v7 += hkString::strLen(v11) + 6;
        if ( *((uint32_t *)SectionHeader + 6) - 6 > v7 )
        {
          v6 = (char *)a2 + v7 + *((uint32_t *)SectionHeader + 5);
          v13 = *(uint32_t *)v6;
          v11 = (hkString::Self *)(v6 + 5);
          if ( v6[5] != -1 )
            continue;
        }
        goto LABEL_14;
      }
      goto LABEL_13;
    }
  }
LABEL_14:
  *a1 = 1;
  return a1;
}

// Binary VA: 0x179cc20 (source: lib_batch_3.json)
float * sub_179CC20(int a1, int a2, float *a3, float *a4, float **a5)
{
  float *v5;
  float *v6;
  float *v7;
  float v8; // xmm4_4
  __m128i v9;
  float v10; // xmm5_4
  __m128i v11;
  __m128i v12;
  float v13; // xmm2_4
  float v14; // xmm7_4
  __m128i v15;
  float v16; // xmm4_4
  float v17; // xmm0_4
  float v18; // xmm3_4
  float v19; // xmm1_4
  int v20;
  float v21; // xmm4_4
  float v22; // xmm1_4
  float v23; // xmm3_4
  float v24; // xmm5_4
  float v25; // xmm4_4
  float v26; // xmm6_4
  float v27; // xmm7_4
  float v28; // xmm6_4
  float v29; // xmm5_4
  float v30; // xmm2_4
  float v31; // xmm0_4
  float v32; // xmm4_4
  float v33; // xmm3_4
  float v34; // xmm1_4
  float v35; // xmm7_4
  float v36; // xmm1_4
  float v37; // xmm4_4
  float v38; // xmm3_4
  float v39; // xmm6_4
  float v40; // xmm7_4
  float v41; // xmm1_4
  float v42; // xmm3_4
  float v43; // xmm5_4
  float v44; // xmm4_4
  float v45; // xmm6_4
  float v46; // xmm3_4
  float v47; // xmm2_4
  float v48; // xmm6_4
  float v49; // xmm2_4
  float v50; // xmm5_4
  float v51; // xmm4_4
  float v52; // xmm3_4
  float v53; // xmm6_4
  float v54; // xmm2_4
  float v55; // xmm5_4
  __m128i v56;
  int v57;
  int v58;
  float v59; // xmm1_4
  int v60; // xmm1_4
  float v61; // xmm1_4
  float v62; // xmm0_4
  float v63; // xmm3_4
  __m128i v64;
  int v65; // xmm1_4
  float v66; // xmm1_4
  float v67; // xmm0_4
  float v68; // xmm4_4
  float *result;
  __m128i v70;
  bool v71; // cf
  float v72; // xmm0_4
  float v73; // xmm3_4
  float v74; // xmm2_4
  float v75; // xmm1_4
  float v76; // xmm4_4
  int v77; // xmm1_4
  float v78; // xmm1_4
  float v79; // xmm0_4
  float v80; // xmm5_4
  float v81;
  float v82;
  float v83;
  float v84; // [esp-3Ch] [ebp-48h]
  float v85;
  float v87;
  float v88;
  float v89; // [esp-2Ch] [ebp-38h]
  float v90;
  float v91;
  float v92;
  float v93;
  float v94; // [esp-1Ch] [ebp-28h]
  float v95; // [esp-1Ch] [ebp-28h]
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  int v103;
  float v104;

  v82 = a3[13];
  v83 = a3[14];
  v5 = *(float **)(a2 + 48);
  v6 = *(float **)(a2 + 52);
  v84 = a4[12];
  v92 = a4[13];
  v85 = a4[14];
  v7 = *a5;
  v104 = *(float *)(a1 + 52);
  v8 = *(float *)(a1 + 16) - a3[12];
  v94 = a3[12];
  v88 = *(float *)(a1 + 48);
  do { std::memset(&v9, 0, 16); v9.u64[0] = (uint64_t)(uintptr_t)(*(unsigned int *)(a1 + 24)); } while (0);
  *(float *)v9.i32 = *(float *)v9.i32 - v83;
  v98 = v84 - *(float *)(a1 + 32);
  v10 = *(float *)(a1 + 20) - v82;
  v96 = v92 - *(float *)(a1 + 36);
  do { std::memset(&v11, 0, 16); v11.u64[0] = (uint64_t)(uintptr_t)(LODWORD(v85)); } while (0);
  *(float *)v11.i32 = v85 - *(float *)(a1 + 40);
  v12 = v9;
  *(float *)v12.i32 = (float)((float)(v10 * v10) + (float)(v8 * v8))
                          + (float)(*(float *)v9.i32 * *(float *)v9.i32);
  v90 = *(float *)v12.i32;
  if ( *(float *)v12.i32 > 0.00000011920929f )
  {
    v70 = v12;
    v71 = *(float *)v12.i32 > 0.0;
    v72 = 0.0;
    if ( v71 )
    {
      v73 = 0.5 * *(float *)v70.i32;
      v103 = ((_mm_cvtsi128_si32(v70) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v70) >> 1));
      v74 = (float)(1.5 * *(float *)&v103)
          - (float)((float)((float)(0.5 * *(float *)v70.i32) * *(float *)&v103)
                  * (float)(*(float *)&v103 * *(float *)&v103));
      v75 = (float)(1.5 * v74) - (float)((float)(v73 * v74) * (float)(v74 * v74));
      v72 = (float)(1.5 * v75) - (float)((float)(v73 * v75) * (float)(v75 * v75));
    }
    v13 = *(float *)v9.i32 * v72;
    v91 = v8 * v72;
    v101 = v10 * v72;
    v14 = (float)(*(float *)(a1 + 28) - a3[15]) * v72;
  }
  else
  {
    v91 = 1.0;
    v101 = 0.0;
    v13 = 0.0;
    v14 = 0.0;
  }
  v15 = v11;
  *(float *)v15.i32 = (float)((float)(v96 * v96) + (float)(v98 * v98))
                          + (float)(*(float *)v11.i32 * *(float *)v11.i32);
  v89 = *(float *)v15.i32;
  if ( *(float *)v15.i32 > 0.00000011920929f )
  {
    if ( *(float *)v15.i32 <= 0.0 )
    {
      v80 = 0.0;
    }
    else
    {
      v76 = 0.5 * *(float *)v15.i32;
      v77 = ((_mm_cvtsi128_si32(v15) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v15) >> 1));
      v78 = (float)(*(float *)&v77 * 1.5)
          - (float)((float)((float)(0.5 * *(float *)v15.i32) * *(float *)&v77)
                  * (float)(*(float *)&v77 * *(float *)&v77));
      v79 = (float)(v78 * 1.5) - (float)((float)((float)(0.5 * *(float *)v15.i32) * v78) * (float)(v78 * v78));
      v80 = (float)(1.5 * v79) - (float)((float)(v76 * v79) * (float)(v79 * v79));
    }
    v17 = v98 * v80;
    v16 = v96 * v80;
    v19 = *(float *)v11.i32 * v80;
    v18 = (float)(a4[15] - *(float *)(a1 + 44)) * v80;
  }
  else
  {
    v16 = 0.0;
    v17 = -1.0;
    v18 = 0.0;
    v19 = 0.0;
  }
  v20 = a2;
  v87 = *(float *)(a2 + 8);
  v81 = *(float *)(v20 + 36);
  v21 = v16 * v104;
  v22 = v19 * v104;
  v7[3] = v14;
  *v7 = v91;
  v7[1] = v101;
  v7[2] = v13;
  v7[4] = v17 * v104;
  v7[5] = v21;
  v7[6] = v22;
  v7[7] = v18 * v104;
  v97 = v21;
  v23 = v85 - v6[30];
  v24 = v94 - v5[28];
  v25 = v82 - v5[29];
  v26 = v83 - v5[30];
  v95 = v84 - v6[28];
  v93 = v92 - v6[29];
  v27 = (float)(v25 * v13) - (float)(v101 * v26);
  v28 = (float)(v26 * v91) - (float)(v13 * v24);
  v29 = (float)(v24 * v101) - (float)(v25 * v91);
  v30 = (float)(v97 * v23) - (float)(v93 * v22);
  v102 = (float)(v22 * v95) - (float)(v23 * (float)(v17 * v104));
  v31 = (float)((float)(v17 * v104) * v93) - (float)(v97 * v95);
  v32 = v5[16] * v27;
  v7[8] = v32;
  v33 = v5[17] * v27;
  v7[9] = v33;
  v34 = v5[18] * v27;
  v7[10] = v34;
  v35 = v27 * v5[19];
  v99 = v34;
  v7[11] = v35;
  v36 = (float)(v5[20] * v28) + v32;
  v7[8] = v36;
  v37 = (float)(v5[21] * v28) + v33;
  v7[9] = v37;
  v38 = (float)(v5[22] * v28) + v99;
  v7[10] = v38;
  v39 = (float)(v28 * v5[23]) + v35;
  v7[11] = v39;
  v40 = (float)(v5[24] * v29) + v36;
  v7[8] = v40;
  v41 = (float)(v5[25] * v29) + v37;
  v7[9] = v41;
  v42 = v38 + (float)(v5[26] * v29);
  v7[10] = v42;
  v100 = v42;
  v7[11] = (float)(v29 * v5[27]) + v39;
  v43 = v6[16] * v30;
  v7[12] = v43;
  v44 = v6[17] * v30;
  v7[13] = v44;
  v45 = v6[18] * v30;
  v7[14] = v45;
  v46 = v45;
  v47 = v30 * v6[19];
  v7[15] = v47;
  v48 = v47;
  v49 = (float)(v102 * v6[20]) + v43;
  v7[12] = v49;
  v50 = (float)(v102 * v6[21]) + v44;
  v7[13] = v50;
  v51 = (float)(v102 * v6[22]) + v46;
  v7[14] = v51;
  v52 = (float)(v102 * v6[23]) + v48;
  v7[15] = v52;
  v53 = (float)(v6[24] * v31) + v49;
  v7[12] = v53;
  v54 = (float)(v6[25] * v31) + v50;
  v7[13] = v54;
  v55 = (float)(v6[26] * v31) + v51;
  v7[14] = v55;
  v7[15] = (float)(v31 * v6[27]) + v52;
  do { std::memset(&v56, 0, 16); v56.u64[0] = (uint64_t)(uintptr_t)(LODWORD(v104)); } while (0);
  *(float *)v56.i32 = (float)((float)((float)((float)(v100 * v100) * v5[14]) + (float)((float)(v55 * v55) * v6[14]))
                                  + (float)((float)((float)((float)(v41 * v41) * v5[13])
                                                  + (float)((float)(v54 * v54) * v6[13]))
                                          + (float)((float)((float)(v40 * v40) * v5[12])
                                                  + (float)((float)(v53 * v53) * v6[12]))))
                          + (float)((float)((float)((float)(*(float *)v56.i32 * *(float *)v56.i32) * v6[15])
                                          + v5[15])
                                  + 0.00000011920929f);
  v57 = _mm_cvtsi128_si32(v56);
  v58 = (2130706432 - v57) & ((v57 ^ (v57 + 2139095040)) >> 31);
  v59 = (float)(2.0
              - (float)(*(float *)v56.i32
                      * (float)((float)(2.0 - (float)(*(float *)v56.i32 * *(float *)&v58)) * *(float *)&v58)))
      * (float)((float)(2.0 - (float)(*(float *)v56.i32 * *(float *)&v58)) * *(float *)&v58);
  v7[11] = (float)((float)(2.0 - (float)(*(float *)v56.i32 * v59)) * v59) * v81;
  if ( v89 <= 0.0 )
  {
    do { std::memset(&v64, 0, 16); v64.u64[0] = (uint64_t)(uintptr_t)(LODWORD(v90)); } while (0);
    v63 = 0.0;
    if ( v90 > 0.0 )
      goto LABEL_7;
LABEL_16:
    v68 = 0.0;
    goto LABEL_8;
  }
  v60 = ((_mm_cvtsi128_si32(G4_BITCAST<__m128i>(LODWORD(v89))) + 2139095040) >> 31)
      & (1597463174 - (_mm_cvtsi128_si32(G4_BITCAST<__m128i>(LODWORD(v89))) >> 1));
  v61 = (float)(*(float *)&v60 * 1.5)
      - (float)((float)((float)(0.5 * v89) * *(float *)&v60) * (float)(*(float *)&v60 * *(float *)&v60));
  v62 = (float)(v61 * 1.5) - (float)((float)((float)(0.5 * v89) * v61) * (float)(v61 * v61));
  v63 = (float)((float)(1.5 * v62) - (float)((float)((float)(0.5 * v89) * v62) * (float)(v62 * v62))) * v89;
  do { std::memset(&v64, 0, 16); v64.u64[0] = (uint64_t)(uintptr_t)(LODWORD(v90)); } while (0);
  if ( v90 <= 0.0 )
    goto LABEL_16;
LABEL_7:
  v65 = ((_mm_cvtsi128_si32(v64) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v64) >> 1));
  v66 = (float)(*(float *)&v65 * 1.5)
      - (float)((float)((float)(0.5 * *(float *)v64.i32) * *(float *)&v65)
              * (float)(*(float *)&v65 * *(float *)&v65));
  v67 = (float)(v66 * 1.5) - (float)((float)((float)(0.5 * *(float *)v64.i32) * v66) * (float)(v66 * v66));
  v68 = (float)((float)(1.5 * v67) - (float)((float)((float)(0.5 * *(float *)v64.i32) * v67) * (float)(v67 * v67)))
      * *(float *)v64.i32;
LABEL_8:
  v7[3] = (float)((float)((float)(v63 * v104) + v68) - v88) * v87;
  result = *a5;
  *a5 += 16;
  *(uint8_t *)result = 11;
  return result;
}

// Binary VA: 0x179c0d0 (source: lib_batch_3.json)
float * sub_179C0D0(float *result, float *a2, float *a3)
{
  float v3; // xmm3_4
  float v4; // xmm5_4
  float v5; // xmm2_4
  float v6; // xmm6_4
  float v7; // xmm4_4
  float v8; // xmm1_4
  float v9; // xmm5_4
  float v10; // xmm6_4
  float v11; // xmm4_4
  float v12; // xmm5_4
  float v13; // xmm6_4
  float v14; // xmm4_4
  float v15; // xmm5_4
  float v16; // xmm4_4
  float v17; // xmm0_4
  float v18;
  float v19;
  float v20;
  float v21; // [esp+Ch] [ebp-18h]
  float v22;
  float v23;
  float v24;
  float v25; // [esp+1Ch] [ebp-8h]
  float v26;

  v22 = result[7];
  v3 = *result;
  v23 = result[9];
  v26 = result[3];
  v4 = a2[13];
  v18 = result[2];
  v20 = result[5];
  v5 = result[4];
  v6 = a2[12];
  v24 = result[10];
  v21 = result[6];
  v25 = result[11];
  v7 = a2[14];
  v19 = result[1];
  v8 = result[8];
  a3[12] = (float)((float)(*result * v6) + (float)(v4 * v5)) + (float)(v7 * v8);
  a3[13] = (float)((float)(v19 * v6) + (float)(v20 * v4)) + (float)(v23 * v7);
  a3[14] = (float)((float)(v18 * v6) + (float)(v21 * v4)) + (float)(v24 * v7);
  a3[15] = (float)((float)(v6 * v26) + (float)(v4 * v22)) + (float)(v7 * v25);
  v9 = a2[9];
  v10 = a2[8];
  v11 = a2[10];
  a3[8] = (float)((float)(v3 * v10) + (float)(v9 * v5)) + (float)(v11 * v8);
  a3[9] = (float)((float)(v19 * v10) + (float)(v20 * v9)) + (float)(v23 * v11);
  a3[10] = (float)((float)(v18 * v10) + (float)(v21 * v9)) + (float)(v24 * v11);
  a3[11] = (float)((float)(v10 * v26) + (float)(v9 * v22)) + (float)(v11 * v25);
  v12 = a2[5];
  v13 = a2[4];
  v14 = a2[6];
  a3[4] = (float)((float)(v3 * v13) + (float)(v12 * v5)) + (float)(v14 * v8);
  a3[5] = (float)((float)(v19 * v13) + (float)(v20 * v12)) + (float)(v23 * v14);
  a3[6] = (float)((float)(v18 * v13) + (float)(v21 * v12)) + (float)(v24 * v14);
  a3[7] = (float)((float)(v13 * v26) + (float)(v12 * v22)) + (float)(v14 * v25);
  v15 = *a2;
  v16 = a2[1];
  v17 = a2[2];
  *a3 = (float)((float)(v3 * *a2) + (float)(v5 * v16)) + (float)(v8 * v17);
  a3[1] = (float)((float)(v19 * v15) + (float)(v20 * v16)) + (float)(v23 * v17);
  a3[2] = (float)((float)(v18 * v15) + (float)(v21 * v16)) + (float)(v24 * v17);
  a3[3] = (float)((float)(v15 * v26) + (float)(v16 * v22)) + (float)(v17 * v25);
  return result;
}

// Binary VA: 0x179c780 (source: lib_batch_3.json)
float * sub_179C780(float *a1,
 int a2,
 float *a3,
 float *a4,
 float *a5,
 float *a6,
 float *a7,
 float *a8)
{
  float *v9;
  int v10;
  float v11; // xmm6_4
  float v12; // xmm2_4
  float v13; // xmm4_4
  float v14; // xmm1_4
  float v15; // xmm7_4
  float v16; // xmm0_4
  float v17; // xmm3_4
  float v18; // xmm5_4
  float v19; // xmm6_4
  float v20; // xmm5_4
  float v21; // xmm4_4
  float v22; // xmm3_4
  float v23; // xmm2_4
  float v24; // xmm2_4
  float v25; // xmm5_4
  float v26; // xmm1_4
  float v27; // xmm4_4
  float v28; // xmm3_4
  float v29; // xmm2_4
  float v30; // xmm5_4
  float v31; // xmm1_4
  __m128i v32;
  float v33; // xmm3_4
  float v34; // xmm2_4
  int v35;
  __m128i v36;
  float v37; // xmm0_4
  __m128i v38;
  __m128i v39;
  float v40; // xmm6_4
  unsigned int v41;
  int v42;
  int v43;
  float v44; // xmm6_4
  float v45; // xmm5_4
  float v46; // xmm4_4
  float v47; // xmm3_4
  float v48; // xmm5_4
  int v49;
  float v50; // xmm3_4
  __m128i v51;
  float v52; // xmm0_4
  float v53; // xmm3_4
  int v54;
  int v55; // xmm4_4
  int v56;
  float v57; // xmm4_4
  int v58; // xmm2_4
  float v60;
  float v61;
  float v62;

  v9 = *(float **)(a2 + 48);
  v10 = *(uint32_t *)(a2 + 52);
  v11 = a3[12] - v9[28];
  v12 = a3[13] - v9[29];
  v60 = a4[12] - *(float *)(v10 + 112);
  v13 = v9[16] * v11;
  v14 = a3[14] - v9[30];
  v15 = a4[13] - *(float *)(v10 + 116);
  v16 = a4[14] - *(float *)(v10 + 120);
  *a5 = v13;
  v17 = v9[17] * v11;
  a5[1] = v17;
  v18 = v9[18] * v11;
  a5[2] = v18;
  v19 = v11 * v9[19];
  v62 = v18;
  a5[3] = v19;
  v20 = (float)(v9[20] * v12) + v13;
  *a5 = v20;
  v21 = (float)(v9[21] * v12) + v17;
  a5[1] = v21;
  v22 = (float)(v9[22] * v12) + v62;
  a5[2] = v22;
  v23 = (float)(v12 * v9[23]) + v19;
  a5[3] = v23;
  *a5 = (float)(v9[24] * v14) + v20;
  a5[1] = (float)(v9[25] * v14) + v21;
  a5[2] = (float)(v9[26] * v14) + v22;
  a5[3] = (float)(v14 * v9[27]) + v23;
  v24 = *(float *)(v10 + 64) * v60;
  *a6 = v24;
  v25 = *(float *)(v10 + 68) * v60;
  a6[1] = v25;
  v26 = *(float *)(v10 + 72) * v60;
  a6[2] = v26;
  v27 = v60 * *(float *)(v10 + 76);
  a6[3] = v27;
  v28 = (float)(*(float *)(v10 + 80) * v15) + v24;
  *a6 = v28;
  v29 = (float)(*(float *)(v10 + 84) * v15) + v25;
  a6[1] = v29;
  v30 = (float)(*(float *)(v10 + 88) * v15) + v26;
  a6[2] = v30;
  v31 = (float)(v15 * *(float *)(v10 + 92)) + v27;
  a6[3] = v31;
  do { std::memset(&v32, 0, 16); v32.u64[0] = (uint64_t)(uintptr_t)(*(unsigned int *)(v10 + 96)); } while (0);
  *(float *)v32.i32 = (float)(*(float *)v32.i32 * v16) + v28;
  *a6 = *(float *)v32.i32;
  v33 = (float)(*(float *)(v10 + 100) * v16) + v29;
  a6[1] = v33;
  v34 = (float)(*(float *)(v10 + 104) * v16) + v30;
  a6[2] = v34;
  a6[3] = (float)(v16 * *(float *)(v10 + 108)) + v31;
  v35 = *(uint32_t *)(a2 + 48);
  do { std::memset(&v36, 0, 16); v36.u64[0] = (uint64_t)(uintptr_t)(*(unsigned int *)(v35 + 48)); } while (0);
  do { std::memset(&v39, 0, 16); v39.u64[0] = (uint64_t)(uintptr_t)(*(unsigned int *)a5); } while (0);
  *(float *)v36.i32 = fmaxf(fmaxf(*(float *)v36.i32, *(float *)(v35 + 52)), *(float *)(v35 + 56));
  v37 = fmaxf(
          fmaxf(*(float *)(*(uint32_t *)(a2 + 52) + 48), *(float *)(*(uint32_t *)(a2 + 52) + 52)),
          *(float *)(*(uint32_t *)(a2 + 52) + 56));
  v38 = v36;
  *(float *)v38.i32 = fmaxf(*(float *)v36.i32, v37);
  *(float *)v39.i32 = (float)((float)(*(float *)v39.i32 * *(float *)v39.i32) + (float)(a5[1] * a5[1]))
                          + (float)(a5[2] * a5[2]);
  v40 = 0.0;
  v41 = _mm_cvtsi128_si32(v38);
  if ( *(float *)v39.i32 > 0.0 )
  {
    v42 = _mm_cvtsi128_si32(v39) >> 1;
    v43 = (_mm_cvtsi128_si32(v39) + 2139095040) >> 31;
    v61 = 0.5 * *(float *)v39.i32;
    v44 = (float)(1.5 * COERCE_FLOAT(v43 & (1597463174 - v42)))
        - (float)((float)((float)(0.5 * *(float *)v39.i32) * COERCE_FLOAT(v43 & (1597463174 - v42)))
                * (float)(COERCE_FLOAT(v43 & (1597463174 - v42)) * COERCE_FLOAT(v43 & (1597463174 - v42))));
    v45 = (float)(1.5 * v44) - (float)((float)((float)(0.5 * *(float *)v39.i32) * v44) * (float)(v44 * v44));
    v40 = (float)(1.5 * v45) - (float)((float)(v61 * v45) * (float)(v45 * v45));
  }
  *(float *)v36.i32 = *(float *)v36.i32 * v40;
  v46 = (float)(*(float *)v32.i32 * *(float *)v32.i32) + (float)(v33 * v33);
  v47 = 0.0;
  *(float *)v32.i32 = v46 + (float)(v34 * v34);
  if ( *(float *)v32.i32 > 0.0 )
  {
    v48 = 0.5 * *(float *)v32.i32;
    v49 = ((_mm_cvtsi128_si32(v32) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v32) >> 1));
    v50 = (float)(*(float *)&v49 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)v32.i32) * *(float *)&v49)
                * (float)(*(float *)&v49 * *(float *)&v49));
    v47 = (float)(1.5 * (float)((float)(v50 * 1.5) - (float)((float)(v48 * v50) * (float)(v50 * v50))))
        - (float)((float)(v48 * (float)((float)(v50 * 1.5) - (float)((float)(v48 * v50) * (float)(v50 * v50))))
                * (float)((float)((float)(v50 * 1.5) - (float)((float)(v48 * v50) * (float)(v50 * v50)))
                        * (float)((float)(v50 * 1.5) - (float)((float)(v48 * v50) * (float)(v50 * v50)))));
  }
  v51 = _mm_cvtsi32_si128(v41);
  *(float *)v51.i32 = fmaxf(*(float *)v51.i32, 0.00000011920929f);
  v52 = v37 * v47;
  v53 = *(float *)(a2 + 8) * a1[3];
  v54 = _mm_cvtsi128_si32(v51);
  *(float *)v36.i32 = fmaxf(fmaxf(*(float *)v36.i32, v52), 0.00000011920929f);
  v55 = (2130706432 - v54) & ((v54 ^ (v54 + 2139095040)) >> 31);
  v56 = _mm_cvtsi128_si32(v36);
  v57 = (float)(2.0
              - (float)(*(float *)v51.i32
                      * (float)((float)(2.0 - (float)(*(float *)v51.i32 * *(float *)&v55)) * *(float *)&v55)))
      * (float)((float)(2.0 - (float)(*(float *)v51.i32 * *(float *)&v55)) * *(float *)&v55);
  *a7 = fminf((float)((float)(2.0 - (float)(*(float *)v51.i32 * v57)) * v57) * v53, a1[2]);
  v58 = (2130706432 - v56) & ((v56 ^ (v56 + 2139095040)) >> 31);
  *a8 = fminf(
          (float)((float)(2.0
                        - (float)(*(float *)v36.i32
                                * (float)((float)(2.0
                                                - (float)(*(float *)v36.i32
                                                        * (float)((float)(2.0
                                                                        - (float)(*(float *)v36.i32
                                                                                * *(float *)&v58))
                                                                * *(float *)&v58)))
                                        * (float)((float)(2.0 - (float)(*(float *)v36.i32 * *(float *)&v58))
                                                * *(float *)&v58))))
                * (float)((float)(2.0
                                - (float)(*(float *)v36.i32
                                        * (float)((float)(2.0 - (float)(*(float *)v36.i32 * *(float *)&v58))
                                                * *(float *)&v58)))
                        * (float)((float)(2.0 - (float)(*(float *)v36.i32 * *(float *)&v58)) * *(float *)&v58)))
        * v53,
          a1[1]);
  return a8;
}

// Binary VA: 0x18a5750 (source: lib_batch_3.json)
int sub_18A5750(int a1, int a2)
{
  hkClass::Self *v4;
  int ( *v5)(int, int);
  int Name;
  int v7;
  int address;
  int v9;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  hkString::Self *v16;
  char *v17;
  int v18[3];
  uint8_t v19[540];

  v4 = *(hkClass::Self **)(a1 + 4);
  if ( v4 != nullptr )
  {
    v5 = *(int ( **)(int, int))(*(uint32_t *)a2 + 44);
    Name = hkClass::getName(v4);
    v7 = v5(a2, Name);
    if ( v7 != 0 )
    {
      *(uint32_t *)(a1 + 4) = *(uint32_t *)(v7 + 12);
    }
    else
    {
      hkErrStream::Construct((hkErrStream::Self *)v18, (hkString::Self *)v19, 512);
      v16 = (hkString::Self *)hkClass::getName(*(hkClass::Self **)(a1 + 4));
      v17 = *(char **)a1;
      v11 = hkOstream::opShl((int)(uintptr_t)v18, (hkString::Self *)"Ignore object at 0x");
      v12 = hkOstream::opShl(v11, v17);
      v13 = hkOstream::opShl(v12, (hkString::Self *)". Class '");
      v14 = hkOstream::opShl(v13, v16);
      hkOstream::opShl(v14, (hkString::Self *)"' is not registered in the provided hkDataWorldNative.");
      hkError::messageWarning(
        (hkError::Self *)0x1800473A,
        (int)(uintptr_t)v19,
        "Data/Native/hkDataObjectNative.cpp",
        (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_324)->st_name + 2,
        v15);
      hkErrStream::Destroy((hkErrStream::Self *)v18);
      *(uint32_t *)a1 = 0;
      *(uint32_t *)(a1 + 4) = 0;
    }
  }
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v9 = (*(int ( **)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
         *(uint32_t *)(*(uint32_t *)address + 44),
         28);
  *(uint32_t *)(v9 + 4) = -65536;
  *(uint32_t *)(v9 + 8) = 0;
  *(uint32_t *)v9 = off_20A6D48;
  hkClassAccessor::Construct(v9 + 12, a1);
  *(uint32_t *)(v9 + 20) = a2;
  *(uint8_t *)(v9 + 24) = 0;
  return v9;
}

// Binary VA: 0x18ea810 (source: lib_batch_4.json)
void sub_18EA810(uint32_t *a1)
{
  int v2;
  int v3;
  int i;
  int v5;
  int v6;
  int32_t v7; // kr00_4
  int32_t v8;
  int32_t v9; // ett
  int v10;
  int v11; // [esp-Ch] [ebp-234h]
  int v12;
  int v13;
  uint32_t v14[4];
  int v15[3];
  int v16[131]; // [esp+1Ch] [ebp-20Ch] BYREF

  v13 = 0;
  hkStringPtr::Construct((hkStringPtr::Self *)v14);
  v2 = hkObjectSerialize::readObject((hkIArchive::Self *)(uintptr_t)(a1[4]), (int)(uintptr_t)(&v13));
  v12 = v2;
  if ( v2 != 0
    && (v3 = (*(int ( **)(uint32_t *))(*hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance + 28))(hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance),
        (v11 = G4_VCALL<int>(v3, 28, v2)) != 0) )
  {
    for ( i = 0; i < a1[9]; ++i )
    {
      v5 = *(uint32_t *)(a1[8] + 4 * i);
      G4_VCALL<void>(v5, 8, v12, v11);
    }
    if ( *(uint16_t *)(v12 + 6) != 0 )
    {
      do
      {
        v7 = *(uint32_t *)(v12 + 4);
        HIWORD(v6) = HIWORD(v7);
        LOWORD(v6) = 0;
        v8 = v6 | (uint16_t)(v7 - 1);
        v9 = v7;
      }
      while ( v9 != __sync_val_compare_and_swap((volatile int32_t *)(v12 + 4), v9, v8) );
      if ( (uint16_t)v8 == 0 )
        G4_VCALL<void>(v12, 16);
    }
  }
  else
  {
    if ( v13 != 0 )
    {
      hkErrStream::Construct((hkErrStream::Self *)v15, (hkString::Self *)v16, 512);
      hkOstream::opShl((int)(uintptr_t)v15, (hkString::Self *)(v14[0] & 0xFFFFFFFE));
      hkError::messageWarning(
        (hkError::Self *)0x6345FED,
        (int)(uintptr_t)v16,
        "Process/hkRemoteObjectProcess.cpp",
        (const char *)&dword_5C,
        v10);
    }
    else
    {
      hkErrStream::Construct((hkErrStream::Self *)v15, (hkString::Self *)v16, 512);
      hkOstream::opShl((int)(uintptr_t)v15, (hkString::Self *)"Could not load object from network for unknown reason");
      hkError::messageWarning(
        (hkError::Self *)0x6345FED,
        (int)(uintptr_t)v16,
        "Process/hkRemoteObjectProcess.cpp",
        (const char *)&dword_60,
        v10);
    }
    hkErrStream::Destroy((hkErrStream::Self *)v15);
  }
  hkStringPtr::Destroy((hkStringPtr::Self *)v14);
}

// Binary VA: 0x17a6b00 (source: lib_batch_3.json)
float * sub_17A6B00(float *result, float *a2, float *a3)
{
  float v3; // xmm2_4
  float v4; // xmm7_4
  float v5; // xmm1_4
  float v6; // xmm6_4
  float v7; // xmm0_4
  float v8; // xmm5_4
  float v9; // xmm3_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm1_4
  float v13; // xmm4_4
  float v14; // xmm4_4
  float v15; // xmm2_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm3_4
  float v22; // xmm5_4
  float v23; // xmm6_4
  float v24; // xmm1_4
  float v25;
  float v26;
  float v27;
  float v28; // [esp+Ch] [ebp-18h]
  float v29;
  float v30;
  float v31;
  float v32; // [esp+1Ch] [ebp-8h]
  float v33;

  v3 = a3[16];
  v4 = a3[4] - v3;
  v5 = a3[17];
  v6 = a3[5] - v5;
  v7 = a3[18];
  v25 = a3[8] - a3[20];
  v8 = a3[6] - v7;
  v9 = a3[7] - a3[19];
  v26 = a3[9] - a3[21];
  v27 = a3[10] - a3[22];
  v28 = a3[11] - a3[23];
  v10 = v3 + (float)(result[12] * v4);
  a3[16] = v10;
  v29 = v10;
  v11 = v5 + (float)(result[13] * v6);
  a3[17] = v11;
  v30 = v11;
  v12 = a3[20];
  v13 = (float)(result[14] * v8) + v7;
  a3[18] = v13;
  v14 = v13 + v8;
  v15 = (float)(result[15] * v9) + a3[19];
  a3[19] = v15;
  v16 = v15 + v9;
  v31 = v12 + (float)(v25 * result[12]);
  a3[20] = v31;
  v17 = (float)(v26 * result[13]) + a3[21];
  a3[21] = v17;
  v32 = v17;
  v18 = (float)(v27 * result[14]) + a3[22];
  a3[22] = v18;
  v33 = v18;
  v19 = a3[2];
  v20 = (float)(v28 * result[15]) + a3[23];
  a3[23] = v20;
  v21 = a2[2] * v19;
  v22 = (float)(v6 + v30) + (float)(a2[1] * v19);
  v23 = a2[3] * v19;
  v24 = v19 * *a2;
  a3[5] = v22;
  a3[6] = v21 + v14;
  a3[7] = v23 + v16;
  a3[4] = (float)(v4 + v29) + v24;
  a3[8] = v25 + v31;
  a3[9] = v26 + v32;
  a3[10] = v27 + v33;
  a3[11] = v20 + v28;
  return result;
}

// Binary VA: 0x17a6a70 (source: lib_batch_3.json)
float sub_17A6A70(__m128i a1)
{
  int v1;
  float v2; // xmm2_4
  float v3; // xmm1_4

  v1 = ((_mm_cvtsi128_si32(a1) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(a1) >> 1));
  v2 = (float)(*(float *)&v1 * 1.5)
     - (float)((float)((float)(0.5 * *(float *)a1.i32) * *(float *)&v1) * (float)(*(float *)&v1 * *(float *)&v1));
  v3 = (float)(v2 * 1.5) - (float)((float)((float)(0.5 * *(float *)a1.i32) * v2) * (float)(v2 * v2));
  return (float)(1.5 * v3) - (float)((float)((float)(0.5 * *(float *)a1.i32) * v3) * (float)(v3 * v3));
}

// Binary VA: 0x18ecd60 (source: lib_batch_4.json)
int sub_18ECD60(void *a1, hkClass::Self *a2, char a3, unsigned int a4, hkOArchive::Self **a5)
{
  if ( a3 != 0 )
    return hkInspectProcess::addTopLevelObject(a5, a1, a2, a4);
  else
    return hkInspectProcess::removeTopLevelObject(a5, a1);
}

// Binary VA: 0x1885180 (source: lib_batch_3.json)
int sub_1885180(int *a1, int *a2, unsigned int a3, unsigned int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int i;
  int v10;
  unsigned int *v11;
  int v12;
  int result;
  int v14;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  uint32_t *v21;
  int v23;
  int v24;
  uint32_t *v25;
  unsigned int v26; // [esp+2Ch] [ebp-10h]

  v5 = a1[1];
  v23 = v5;
  v6 = a1[2];
  if ( 2 * v5 > v6 )
  {
    v14 = 2 * v6 + 2;
    v16 = *a2;
    if ( v14 < 8 )
      v14 = 8;
    v26 = v5 & 0x80000000;
    v24 = v6 + 1;
    v25 = (uint32_t *)*a1;
    v17 = (*(int ( **)(int *, int))(v16 + 8))(a2, 12 * v14);
    if ( v17 != 0 )
    {
      *a1 = v17;
      v18 = 0;
      v19 = 0;
      while ( 1 )
      {
        ++v19;
        *(uint32_t *)(v17 + v18) = -1;
        v18 += 12;
        if ( v14 <= v19 )
          break;
        v17 = *a1;
      }
      v20 = 0;
      a1[2] = v14 - 1;
      a1[1] = 0;
      v21 = v25;
      if ( v24 > 0 )
      {
        do
        {
          if ( *v21 != -1 )
            sub_1885180(*v21, v21[1], v21[2]);
          ++v20;
          v21 += 3;
        }
        while ( v24 != v20 );
      }
      if ( v26 == 0 )
        G4_VCALL<void>(a2, 12, v25, 12 * v24);
    }
    v6 = a1[2];
    v23 = a1[1];
  }
  v7 = *a1;
  v8 = v6 & (-1640531535 * (a3 >> 4));
  for ( i = 3 * v8; ; i = 3 * v8 )
  {
    v10 = 4 * i;
    v11 = (unsigned int *)(v7 + v10);
    v12 = *(uint32_t *)(v7 + v10);
    if ( v12 == -1 )
      break;
    if ( v12 == a3 && v11[1] == a4 )
    {
      result = 0;
      goto LABEL_9;
    }
    v8 = v6 & (v8 + 1);
  }
  result = 1;
LABEL_9:
  a1[1] = result + v23;
  *v11 = a3;
  v11[1] = a4;
  *(uint32_t *)(*a1 + v10 + 8) = a5;
  return result;
}

// Binary VA: 0x188b790 (source: lib_batch_3.json)
int sub_188B790(int a1, int a2, int a3)
{
  int v3;
  int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int *v7;
  int v8;
  int *v9;
  int v10;
  unsigned int i;
  int v12;
  uint32_t *v13;
  int v14;
  uint32_t *v15;
  int v16;
  uint32_t *v17;
  int v18;
  int v19;
  unsigned int j;
  int v21;
  uint32_t *v22;
  int v23;
  uint32_t *v24;
  int v25;
  int v26;
  int result;
  uint32_t *v28;
  int v29;
  int v30;
  uint32_t *v31;
  int v32;
  int16_t v33; // ax
  int v34;
  int v35;
  hkString::Self *v36;
  int v37;
  unsigned int v38;
  int v39;
  uint32_t *v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  uint32_t *v48;
  unsigned int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  char **v56;
  char **v57;
  signed int v58;
  hkOArchive::Self *v59;
  int v60;
  unsigned int v61;
  uint8_t *v62;
  int v63;
  int mm;
  int v65;
  hkTypeManager::Type::Self *v66;
  int v67;
  int16_t v68; // dx
  int v69;
  char ***v70;
  int v71;
  int v72;
  int v73;
  int v74;
  uint32_t *v75;
  int v76;
  int16_t v77; // ax
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int16_t v85; // dx
  int v86;
  int v87;
  int v88;
  int v89;
  int16_t v90; // dx
  int v91;
  char ***v92;
  uint32_t *v93;
  unsigned int v94;
  unsigned int v95;
  unsigned int v96;
  unsigned int v97;
  int address;
  hkDataObject_Value::Self *v99;
  uint32_t *v100;
  bool v101; // zf
  int v102;
  int16_t v103; // cx
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  hkString::Self *v110;
  hkString::Self *v111;
  unsigned int v112;
  hkString::Self *v113;
  hkString::Self *v114;
  int v115;
  uint64_t v116; // krA8_8
  int64_t v117; // rdi
  uint8_t v118;
  uint8_t v119;
  char v120;
  uint64_t v121; // krB0_8
  int64_t v122; // rdi
  uint8_t v123;
  uint8_t v124;
  char v125;
  int v126;
  int v127;
  uint64_t v128; // krB8_8
  int64_t v129; // rdi
  uint8_t v130;
  int64_t v131; // rdi
  uint8_t v132;
  uint8_t v133;
  char v134;
  int ii;
  hkTypeManager::Type::Self *v136;
  uint64_t v137; // krC0_8
  int64_t v138; // rdi
  uint8_t v139;
  uint8_t v140;
  char v141;
  int v142;
  int v143;
  hkString::Self *v144;
  signed int v145;
  uint64_t v146; // krC8_8
  int64_t v147; // rdi
  uint8_t v148;
  int v149;
  hkString::Self *v150;
  hkString::Self *v151;
  unsigned int v152;
  hkString::Self *v153;
  int v154;
  uint32_t *v155;
  int v156;
  int v157;
  hkString::Self *v158;
  int v159;
  int v160;
  uint64_t v161; // krD0_8
  int64_t v162; // rdi
  uint8_t v163;
  int v164;
  int v165;
  hkString::Self *v166;
  hkString::Self *v167;
  hkString::Self *v168;
  hkString::Self *v169;
  int v170;
  hkOArchive::Self *v171;
  hkString::Self *v172;
  int v173;
  int v174;
  uint64_t v175; // rax
  char v176;
  uint64_t v177; // rax
  uint8_t v178;
  uint64_t v179; // rdi
  hkOArchive::Self *v180;
  char v181;
  unsigned int v182;
  uint8_t v183;
  uint64_t v184; // rdi
  hkOArchive::Self *v185;
  char v186;
  hkString::Self *m;
  hkTypeManager::Type::Self *v188;
  int v189;
  hkString::Self *v190;
  hkString::Self *v191;
  hkString::Self *v192;
  int v193;
  hkOArchive::Self *v194;
  hkString::Self *v195;
  int v196;
  int v197;
  uint64_t v198; // rax
  char v199;
  uint64_t v200; // rax
  uint8_t v201;
  uint64_t v202; // rdi
  hkOArchive::Self *v203;
  char v204;
  unsigned int LegacyType;
  uint8_t v206;
  uint64_t v207; // rdi
  hkOArchive::Self *v208;
  char v209;
  hkOArchive::Self *k;
  hkOArchive::Self *Terminal;
  int v212;
  uint64_t v213; // rax
  signed int v214;
  uint64_t v215; // rax
  char v216;
  uint64_t v217; // rax
  uint8_t v218;
  uint64_t v219; // rdi
  hkOArchive::Self *v220;
  char v221;
  uint64_t v222; // rax
  int v223;
  int v224;
  hkString::Self *v225;
  uint64_t v226; // rax
  char v227;
  uint64_t v228; // rax
  uint8_t v229;
  uint64_t v230; // rdi
  hkOArchive::Self *v231;
  char v232;
  uint64_t v233; // rax
  signed int v234;
  uint64_t v235; // rax
  char v236;
  uint64_t v237; // rax
  uint8_t v238;
  uint64_t v239; // rdi
  hkOArchive::Self *v240;
  char v241;
  uint64_t v242; // rax
  int v243;
  uint64_t v244; // krD8_8
  int64_t v245; // rdi
  uint8_t v246;
  uint64_t v247; // krE0_8
  int64_t v248; // rdi
  uint8_t v249;
  uint64_t v250; // krE8_8
  int64_t v251; // rdi
  uint8_t v252;
  hkString::Self *v253;
  int v254;
  int v255;
  uint64_t v256; // krF0_8
  int64_t v257; // rdi
  uint8_t v258;
  int64_t v259; // rdi
  uint8_t v260;
  uint8_t v261;
  char v262;
  hkOArchive::Self *n;
  hkString::Self *v264;
  int v265;
  int64_t v266; // rax
  uint64_t v267; // krF8_8
  int64_t v268; // rdi
  uint8_t v269;
  int v270;
  int v271;
  hkString::Self *v272;
  hkString::Self *v273;
  int v274;
  int v275;
  uint64_t v276; // kr100_8
  int64_t v277; // rdi
  uint8_t v278;
  signed int v279;
  uint64_t v280; // rax
  char v281;
  uint64_t v282; // rax
  uint8_t v283;
  uint64_t v284; // rdi
  char v285;
  uint64_t v286; // rax
  signed int v287;
  uint64_t v288; // rax
  char v289;
  uint64_t v290; // rax
  uint8_t v291;
  uint64_t v292; // rdi
  char v293;
  int64_t v294; // rax
  uint64_t v295; // rax
  int v296;
  int v297;
  hkString::Self *v298;
  uint64_t v299; // rax
  char v300;
  uint64_t v301; // rax
  uint8_t v302;
  uint64_t v303; // rdi
  hkOArchive::Self *v304;
  char v305;
  signed int v306;
  uint64_t v307; // kr108_8
  int64_t v308; // rdi
  uint8_t v309;
  int v310;
  int v311;
  int v312;
  int v313;
  int v314;
  int TypeName;
  int v316;
  int v317;
  int v318;
  int v319;
  int v320;
  int v321;
  int *v322; // [esp-Ch] [ebp-1C4h]
  int v323;
  int v324;
  int v325;
  int v326;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v327;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v328;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v329; // [esp+Ch] [ebp-1ACh]
  uint64_t v330;
  int64_t v331;
  uint64_t v332;
  uint64_t v333;
  int64_t v334;
  int64_t v335;
  int64_t v336;
  int64_t v337;
  int64_t v338;
  int64_t v339;
  int64_t v340;
  uint64_t v341;
  hkOArchive::Self *v342; // [esp+B0h] [ebp-108h]
  hkOArchive::Self *v343; // [esp+B0h] [ebp-108h]
  hkOArchive::Self *v344; // [esp+B0h] [ebp-108h]
  char v345; // [esp+B0h] [ebp-108h]
  hkOArchive::Self *v346; // [esp+B0h] [ebp-108h]
  uint8_t v347; // [esp+B0h] [ebp-108h]
  hkOArchive::Self *v348; // [esp+B0h] [ebp-108h]
  hkOArchive::Self *v349; // [esp+B0h] [ebp-108h]
  hkOArchive::Self *v350; // [esp+B0h] [ebp-108h]
  char v351; // [esp+B0h] [ebp-108h]
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v352; // [esp+B4h] [ebp-104h]
  hkOArchive::Self *v353; // [esp+B4h] [ebp-104h]
  hkOArchive::Self *v354; // [esp+B4h] [ebp-104h]
  hkOArchive::Self *v355; // [esp+B4h] [ebp-104h]
  char v356; // [esp+B4h] [ebp-104h]
  char v357; // [esp+B4h] [ebp-104h]
  uint8_t v358; // [esp+B4h] [ebp-104h]
  hkOArchive::Self *v359; // [esp+B4h] [ebp-104h]
  hkOArchive::Self *v360; // [esp+B4h] [ebp-104h]
  hkOArchive::Self *v361; // [esp+B4h] [ebp-104h]
  hkOArchive::Self *v362; // [esp+B4h] [ebp-104h]
  hkOArchive::Self *v363; // [esp+B4h] [ebp-104h]
  hkOArchive::Self *v364; // [esp+B4h] [ebp-104h]
  hkString::Self *v365; // [esp+C0h] [ebp-F8h]
  hkString::Self *v366; // [esp+C0h] [ebp-F8h]
  hkString::Self *v367; // [esp+C0h] [ebp-F8h]
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v368; // [esp+C0h] [ebp-F8h]
  hkString::Self *v369; // [esp+C0h] [ebp-F8h]
  int v370; // [esp+C4h] [ebp-F4h]
  hkOArchive::Self *v371; // [esp+C4h] [ebp-F4h]
  uint8_t v372; // [esp+C4h] [ebp-F4h]
  hkOArchive::Self *v373; // [esp+C4h] [ebp-F4h]
  hkOArchive::Self *v374; // [esp+C4h] [ebp-F4h]
  hkOArchive::Self *v375; // [esp+C4h] [ebp-F4h]
  uint8_t v376; // [esp+C4h] [ebp-F4h]
  hkOArchive::Self *v377; // [esp+C4h] [ebp-F4h]
  hkOArchive::Self *v378; // [esp+C4h] [ebp-F4h]
  hkTypeManager::Type::Self *v379; // [esp+C8h] [ebp-F0h]
  hkTypeManager::Type::Self *v380; // [esp+C8h] [ebp-F0h]
  hkTypeManager::Type::Self *v381; // [esp+C8h] [ebp-F0h]
  hkTypeManager::Type::Self *v382; // [esp+C8h] [ebp-F0h]
  int v383; // [esp+C8h] [ebp-F0h]
  hkTypeManager::Type::Self *v384; // [esp+C8h] [ebp-F0h]
  int (*v385)(void); // [esp+C8h] [ebp-F0h]
  int (*v386)(void); // [esp+C8h] [ebp-F0h]
  hkOArchive::Self *v387; // [esp+D4h] [ebp-E4h]
  hkOArchive::Self *v388; // [esp+D4h] [ebp-E4h]
  hkOArchive::Self *v389; // [esp+D4h] [ebp-E4h]
  hkOArchive::Self *v390; // [esp+D4h] [ebp-E4h]
  hkOArchive::Self *v391; // [esp+D4h] [ebp-E4h]
  signed int v392; // [esp+D4h] [ebp-E4h]
  hkOArchive::Self *v393; // [esp+D4h] [ebp-E4h]
  uint8_t v394; // [esp+D4h] [ebp-E4h]
  hkOArchive::Self *v395; // [esp+D4h] [ebp-E4h]
  hkOArchive::Self *v396; // [esp+D4h] [ebp-E4h]
  int (*v397)(void); // [esp+D4h] [ebp-E4h]
  hkOArchive::Self *v398; // [esp+D4h] [ebp-E4h]
  uint8_t v399; // [esp+D4h] [ebp-E4h]
  hkOArchive::Self *v400; // [esp+D4h] [ebp-E4h]
  hkOArchive::Self *v401; // [esp+D4h] [ebp-E4h]
  char **kk; // [esp+E0h] [ebp-D8h]
  char **Type; // [esp+E0h] [ebp-D8h]
  char **v405; // [esp+E0h] [ebp-D8h]
  char **v406; // [esp+E0h] [ebp-D8h]
  float v407; // [esp+E0h] [ebp-D8h]
  char **v408; // [esp+E0h] [ebp-D8h]
  char **v409; // [esp+E0h] [ebp-D8h]
  char **v410; // [esp+E0h] [ebp-D8h]
  char **v411; // [esp+E0h] [ebp-D8h]
  unsigned int v412; // [esp+E4h] [ebp-D4h]
  uint32_t *v413; // [esp+E4h] [ebp-D4h]
  hkDataObject_Value::Self *v415; // [esp+ECh] [ebp-CCh]
  hkDataObject_Value::Self *v416; // [esp+ECh] [ebp-CCh]
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v417; // [esp+ECh] [ebp-CCh]
  hkDataObject_Value::Self *jj; // [esp+ECh] [ebp-CCh]
  int v419; // [esp+ECh] [ebp-CCh]
  char v420; // [esp+ECh] [ebp-CCh]
  hkDataObject_Value::Self *v421; // [esp+ECh] [ebp-CCh]
  hkString::Self **v422; // [esp+ECh] [ebp-CCh]
  hkDataObject_Value::Self *v423; // [esp+ECh] [ebp-CCh]
  int (*v424)(void); // [esp+ECh] [ebp-CCh]
  hkDataObject_Value::Self *v425; // [esp+ECh] [ebp-CCh]
  unsigned int v426; // [esp+F0h] [ebp-C8h] BYREF
  hkOArchive::Self *v427; // [esp+F4h] [ebp-C4h]
  char v428[4]; // [esp+FCh] [ebp-BCh] BYREF
  uint32_t *v429;
  int v430[4];
  int v431[4];
  int v432[4];
  int v433[4];
  uint32_t v434[4];
  int v435;
  int v436;
  int v437;
  int v438;
  int v439;
  int v440;
  int v441;
  int v442;
  uint32_t *v443;
  signed int v444;
  int v445;
  int *v446; // [esp+1A8h] [ebp-10h]

  v446 = &a3;
  v3 = a3;
  v437 = 0;
  v438 = 0;
  v439 = 0x80000000;
  hkArrayUtil::reserve((hkArrayUtil::Self *)v428, (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc, &v437, 128, 12);
  if ( *(uint32_t *)v3 != 0 )
  {
    (*(void ( **)(unsigned int *))(**(uint32_t **)v3 + 8))(&v426);
    v4 = v438;
    v5 = v426;
    v6 = (unsigned int)(uintptr_t)v427;
    if ( v438 != (v439 & 0x3FFFFFFF) )
      goto LABEL_3;
  }
  else
  {
    v4 = v438;
    v6 = 0;
    v5 = 0;
    if ( v438 != (v439 & 0x3FFFFFFF) )
      goto LABEL_3;
  }
  hkArrayUtil::reserveMore((hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc, (hkMemoryAllocator::Self *)&v437, 12, v311);
  v4 = v438;
LABEL_3:
  v438 = v4 + 1;
  v7 = (unsigned int *)(v437 + 12 * v4);
  *v7 = v5;
  v7[1] = v6;
  v7[2] = 0;
  v8 = v438;
LABEL_4:
  if ( v8 == 0 )
    goto LABEL_30;
  do
  {
    v9 = (int *)(v437 + 12 * v8 - 12);
    v440 = *v9;
    v441 = v9[1];
    v442 = v9[2];
    v8 = --v438;
    if ( v440 == 0 && v441 == 0 )
      goto LABEL_4;
    (*(void ( **)(uint32_t **))(*(uint32_t *)a2 + 48))(&v429);
    if ( *(uint32_t *)(a1 + 88) != 0 )
    {
      if ( v429 == nullptr )
        goto LABEL_29;
      (*(void ( **)(unsigned int *))(*v429 + 8))(&v426);
      v415 = (hkDataObject_Value::Self *)v426;
      v412 = (unsigned int)(uintptr_t)v427;
      v10 = *(uint32_t *)(a1 + 100);
      if ( v10 > 0 )
      {
        for ( i = -1640531535 * (v426 >> 4); ; i = v12 + 1 )
        {
          v12 = v10 & i;
          v13 = (uint32_t *)(*(uint32_t *)(a1 + 92) + 12 * v12);
          if ( *v13 == -1 )
            goto LABEL_121;
          if ( *v13 == v426 && v427 == (hkOArchive::Self *)v13[1] )
            break;
        }
        v14 = v13[2];
        if ( v14 != -1 )
        {
          v15 = **(uint32_t ***)(*(uint32_t *)(a1 + 104) + 4 * v14);
          v413 = v15;
          if ( v15 == nullptr )
            goto LABEL_26;
          v16 = v15[1];
          v17 = v15;
          LOWORD(v16) = 0;
          v18 = v16 | (uint16_t)(v15[1] + 1);
          ++v17[2];
          v17[1] = v18;
          goto LABEL_17;
        }
      }
LABEL_121:
      (*(void ( **)(uint32_t **))(**(uint32_t **)(a1 + 88) + 20))(&v443);
      if ( v443 != nullptr )
      {
        (*(void ( **)(unsigned int *))(*v443 + 8))(&v426);
        v93 = v429;
        v94 = v426;
        v95 = (unsigned int)(uintptr_t)v427;
        if ( v429 != nullptr )
        {
LABEL_123:
          (*(void ( **)(unsigned int *))(*v93 + 8))(&v426);
          v96 = v426;
          v97 = (unsigned int)(uintptr_t)v427;
          goto LABEL_124;
        }
      }
      else
      {
        v93 = v429;
        v95 = 0;
        v94 = 0;
        if ( v429 != nullptr )
          goto LABEL_123;
      }
      v97 = 0;
      v96 = 0;
LABEL_124:
      if ( v94 != v96 || v95 != v97 )
      {
        sub_1885180(
          (int *)(a1 + 92),
          &hkContainerHeapAllocator::s_alloc,
          (unsigned int)(uintptr_t)v415,
          v412,
          *(uint32_t *)(a1 + 108));
        address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        v99 = (hkDataObject_Value::Self *)(*(int ( **)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                      *(uint32_t *)(*(uint32_t *)address + 44),
                                      4);
        v100 = v443;
        v101 = v443 == nullptr;
        *(uint32_t *)v99 = (uint32_t)(uintptr_t)(v443);
        if ( !v101 )
        {
          v102 = v100[1];
          ++v100[2];
          v103 = v102;
          LOWORD(v102) = 0;
          v100[1] = v102 | (uint16_t)(v103 + 1);
        }
        v104 = *(uint32_t *)(a1 + 108);
        if ( v104 == (*(uint32_t *)(a1 + 112) & 0x3FFFFFFF) )
        {
          v425 = v99;
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc,
            (hkMemoryAllocator::Self *)(a1 + 104),
            4,
            v311);
          v104 = *(uint32_t *)(a1 + 108);
          v99 = v425;
        }
        v105 = *(uint32_t *)(a1 + 104);
        *(uint32_t *)(a1 + 108) = v104 + 1;
        *(uint32_t *)(v105 + 4 * v104) = (uint32_t)(uintptr_t)(v99);
        v106 = (int)(uintptr_t)v443;
        v413 = v443;
        if ( v443 == nullptr )
          goto LABEL_26;
        v107 = v443[2];
        HIWORD(v108) = HIWORD(v443[1]);
        LOWORD(v108) = 0;
        v443[1] = v108 | (uint16_t)v443[1];
        if ( v107 == 0 )
          G4_VCALL<void>(v106, 4);
        goto LABEL_17;
      }
      v28 = v443;
      if ( v443 != nullptr )
      {
        v29 = v443[1];
        v30 = v443[2];
        LOWORD(v29) = 0;
        v443[1] = v29 | (uint16_t)(v443[1] - 1);
        v28[2] = v30 - 1;
        if ( v30 == 1 )
          G4_VCALL<void>(v28, 4);
      }
    }
    v31 = v429;
    v413 = v429;
    if ( v429 == nullptr )
      goto LABEL_29;
    v32 = v429[1];
    ++v429[2];
    v33 = v32;
    LOWORD(v32) = 0;
    v31[1] = v32 | (uint16_t)(v33 + 1);
LABEL_17:
    (*(void ( **)(unsigned int *))(*v413 + 8))(&v426);
    v19 = *(uint32_t *)(a1 + 60);
    if ( v19 > 0 )
    {
      for ( j = -1640531535 * (v426 >> 4); ; j = v21 + 1 )
      {
        v21 = v19 & j;
        v22 = (uint32_t *)(*(uint32_t *)(a1 + 52) + 12 * v21);
        if ( *v22 == -1 )
          goto LABEL_41;
        if ( v426 == *v22 && (hkOArchive::Self *)v22[1] == v427 )
          break;
      }
      if ( v22[2] != -1 )
      {
        v23 = v413[1];
        LOWORD(v23) = 0;
        v413[1] = v23 | (uint16_t)(v413[1] - 1);
        v416 = (hkDataObject_Value::Self *)v413[2];
        v413[2] = (uint32_t)(uintptr_t)((char *)v416 - 1);
        if ( v416 == (hkDataObject_Value::Self *)((char *)&dword_0 + 1) )
          G4_VCALL<void>(v413, 4);
LABEL_26:
        v24 = v429;
        if ( v429 == nullptr )
          goto LABEL_29;
        v25 = v429[1];
        v26 = v429[2];
        LOWORD(v25) = 0;
        v429[1] = v25 | (uint16_t)(v429[1] - 1);
        v24[2] = v26 - 1;
        if ( v26 != 1 )
          goto LABEL_29;
LABEL_28:
        G4_VCALL<void>(v24, 4);
        goto LABEL_29;
      }
    }
LABEL_41:
    v34 = G4_VCALL<int>(v413, 12, v413);
    v35 = 0;
    v430[0] = v34;
    if ( v34 != 0 )
    {
      v36 = (hkString::Self *)G4_VCALL<int>(v34, 12);
      v417 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(a1 + 32);
      if ( hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
             (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(a1 + 32),
             v36,
             -1) < 0 )
      {
        v109 = G4_VCALL<int>(v430[0], 20);
        v431[0] = v109;
        v409 = nullptr;
        if ( v109 != 0 )
        {
          v110 = (hkString::Self *)G4_VCALL<int>(v109, 12);
          v409 = (char **)hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
                            v417,
                            v110,
                            -1);
          if ( (int)(uintptr_t)v409 < 0 )
          {
            v149 = G4_VCALL<int>(v431[0], 20);
            v432[0] = v149;
            v383 = 0;
            if ( v149 != 0 )
            {
              v150 = (hkString::Self *)G4_VCALL<int>(v149, 12);
              v383 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(v417, v150, -1);
              if ( v383 < 0 )
              {
                v164 = 0;
                v165 = G4_VCALL<int>(v432[0], 20);
                v433[0] = v165;
                if ( v165 != 0 )
                {
                  v166 = (hkString::Self *)G4_VCALL<int>(v165, 12);
                  v164 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(v417, v166, -1);
                  if ( v164 < 0 )
                  {
                    v310 = v433[0];
                    v443 = (uint32_t *)(*(int (**)(void))(*(uint32_t *)v433[0] + 20))();
                    v411 = (char **)sub_18876F0(
                                      a1,
                                      (uint32_t *)(&v443),
                                      v310,
                                      v313,
                                      v318,
                                      (int)(uintptr_t)v322,
                                      v323,
                                      v324,
                                      v325,
                                      v326,
                                      (int)(uintptr_t)v327,
                                      (int)(uintptr_t)v329,
                                      v330,
                                      SHIDWORD(v330),
                                      v331,
                                      SHIDWORD(v331),
                                      v332,
                                      SHIDWORD(v332),
                                      v333,
                                      SHIDWORD(v333),
                                      v334,
                                      SHIDWORD(v334),
                                      v335,
                                      (uint32_t *)HIDWORD(v335),
                                      (uint32_t *)v336,
                                      SHIDWORD(v336),
                                      v337,
                                      SHIDWORD(v337),
                                      v338,
                                      SHIDWORD(v338),
                                      v339,
                                      SHIDWORD(v339),
                                      v340,
                                      SHIDWORD(v340),
                                      v341,
                                      SHIDWORD(v341));
                    v190 = (hkString::Self *)G4_VCALL<int>(v433[0], 12);
                    v164 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
                             v417,
                             v190,
                             -1);
                    if ( v164 == -1 )
                    {
                      v346 = *(hkOArchive::Self **)(a1 + 36);
                      v191 = (hkString::Self *)G4_VCALL<int>(v433[0], 12);
                      hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
                        v417,
                        v191,
                        (unsigned int)(uintptr_t)v346);
                      v398 = (hkOArchive::Self *)G4_VCALL<int>(v433[0], 28);
                      hkArray_hkDataClass_MemberInfo_h_3e2cfa::Construct((hkArray_Raw *)&v443, (int)(uintptr_t)v398);
                      hkDataClass::getAllDeclaredMemberInfo(v433, &v443);
                      hkOArchive::write8u((hkOArchive::Self *)a1, 4u);
                      v192 = (hkString::Self *)G4_VCALL<int>(v433[0], 12);
                      sub_18854F0((uint32_t *)a1, v192);
                      v193 = G4_VCALL<int>(v433[0], 16);
                      sub_1885330((hkOArchive::Self *)a1, v193);
                      G4_VCALL<void>(v433[0], 16);
                      sub_1885330((hkOArchive::Self *)a1, (int)(uintptr_t)v411);
                      sub_1885330((hkOArchive::Self *)a1, (int)(uintptr_t)v398);
                      v367 = nullptr;
                      v194 = (hkOArchive::Self *)a1;
                      v329 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(a1 + 16);
                      if ( (int)(uintptr_t)v398 > 0 )
                      {
                        do
                        {
                          v371 = (hkOArchive::Self *)&v443[4 * (uint32_t)(uintptr_t)v367];
                          v195 = *(hkString::Self **)v371;
                          if ( *(uint32_t *)v371 != 0 )
                          {
                            v196 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
                                     v329,
                                     v195,
                                     -1);
                            if ( v196 == -1 )
                            {
                              v234 = hkString::strLen(v195);
                              v327 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)v234;
                              if ( v234 >> 31 < 0 )
                              {
                                v242 = -(int64_t)v234;
                                HIDWORD(v235) = v242 >> 31;
                                v330 = __PAIR64__(HIDWORD(v235), 2 * (int)v242) | 1;
                                LODWORD(v235) = (2 * v242) | 1;
                              }
                              else
                              {
                                v235 = 2LL * v234;
                                v330 = v235;
                              }
                              v236 = v235;
                              v237 = v235 >> 7;
                              v358 = v236 & 0x7F;
                              if ( v237 != 0 )
                              {
                                v238 = v236 & 0x7F;
                                v326 = (int)(uintptr_t)v195;
                                v359 = v194;
                                v239 = __PAIR64__(v237, HIDWORD(v237));
                                v240 = v359;
                                do
                                {
                                  v360 = v240;
                                  hkOArchive::write8u(v240, v238 | 0x80);
                                  v241 = BYTE4(v239);
                                  HIDWORD(v239) = __PAIR64__(v239, HIDWORD(v239)) >> 7;
                                  LODWORD(v239) = (unsigned int)v239 >> 7;
                                  v238 = v241 & 0x7F;
                                  v240 = v360;
                                }
                                while ( v239 != 0 );
                                v195 = (hkString::Self *)v326;
                                v358 = v238;
                                v194 = v240;
                              }
                              hkOArchive::write8u(v194, v358);
                              hkOArchive::writeRaw(v194, v195, (int)(uintptr_t)v327);
                              hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
                                v329,
                                v195,
                                *((uint32_t *)v194 + 5) + 1);
                            }
                            else
                            {
                              v197 = -v196;
                              if ( v197 >> 31 < 0 )
                              {
                                v233 = -(int64_t)v197;
                                HIDWORD(v198) = v233 >> 31;
                                LODWORD(v198) = (2 * v233) | 1;
                              }
                              else
                              {
                                v198 = 2LL * v197;
                              }
                              v199 = v198;
                              v200 = v198 >> 7;
                              v201 = v199 & 0x7F;
                              if ( v200 != 0 )
                              {
                                v354 = v194;
                                v202 = __PAIR64__(v200, HIDWORD(v200));
                                v203 = v354;
                                do
                                {
                                  v355 = v203;
                                  hkOArchive::write8u(v203, v201 | 0x80);
                                  v204 = BYTE4(v202);
                                  v203 = v355;
                                  HIDWORD(v202) = __PAIR64__(v202, HIDWORD(v202)) >> 7;
                                  LODWORD(v202) = (unsigned int)v202 >> 7;
                                  v201 = v204 & 0x7F;
                                }
                                while ( v202 != 0 );
                                v194 = v355;
                              }
                              hkOArchive::write8u(v194, v201);
                            }
                          }
                          else
                          {
                            hkOArchive::write8u(v194, 3u);
                          }
                          LegacyType = hkTypeManager::getLegacyType((hkTypeManager::Type::Self ***)(*((hkTypeManager::Self **)v371 + 2)), (hkTypeManager::Type::Self *)v434, (const char **)&v435);
                          v372 = (2 * LegacyType) & 0x7F;
                          if ( (2 * (uint64_t)LegacyType) >> 7 != 0 )
                          {
                            v206 = (2 * LegacyType) & 0x7F;
                            v356 = LegacyType;
                            v373 = v194;
                            v207 = __PAIR64__(LegacyType >> 6, 0);
                            v208 = v373;
                            do
                            {
                              v374 = v208;
                              hkOArchive::write8u(v208, v206 | 0x80);
                              v209 = BYTE4(v207);
                              HIDWORD(v207) = __PAIR64__(v207, HIDWORD(v207)) >> 7;
                              LODWORD(v207) = (unsigned int)v207 >> 7;
                              v206 = v209 & 0x7F;
                              v208 = v374;
                            }
                            while ( v207 != 0 );
                            LOBYTE(LegacyType) = v356;
                            v372 = v206;
                            v194 = v208;
                          }
                          hkOArchive::write8u(v194, v372);
                          if ( (LegacyType & 0x20) != 0 )
                          {
                            if ( v435 >> 31 < 0 )
                            {
                              HIDWORD(v226) = (uint64_t)(-2LL * v435) >> 32;
                              v331 = (-2LL * v435) | 1;
                              LODWORD(v226) = (-2 * v435) | 1;
                            }
                            else
                            {
                              v226 = 2LL * v435;
                              v331 = v226;
                            }
                            v227 = v226;
                            v228 = v226 >> 7;
                            v376 = v227 & 0x7F;
                            if ( v228 != 0 )
                            {
                              v229 = v227 & 0x7F;
                              v357 = LegacyType;
                              v377 = v194;
                              v230 = __PAIR64__(v228, HIDWORD(v228));
                              v231 = v377;
                              do
                              {
                                v378 = v231;
                                hkOArchive::write8u(v231, v229 | 0x80);
                                v232 = BYTE4(v230);
                                HIDWORD(v230) = __PAIR64__(v230, HIDWORD(v230)) >> 7;
                                LODWORD(v230) = (unsigned int)v230 >> 7;
                                v229 = v232 & 0x7F;
                                v231 = v378;
                              }
                              while ( v230 != 0 );
                              LOBYTE(LegacyType) = v357;
                              v376 = v229;
                              v194 = v231;
                            }
                            hkOArchive::write8u(v194, v376);
                          }
                          if ( (LegacyType & 0xF) - 8 <= 1 )
                          {
                            if ( v434[0] != 0 )
                            {
                              v223 = G4_VCALL<int>(v433[0], 8);
                              v224 = G4_VCALL<int>(v223, 44, v434[0]);
                              v225 = (hkString::Self *)G4_VCALL<int>(v224, 12);
                              sub_18854F0((uint32_t *)(v194), v225);
                            }
                            else
                            {
                              sub_18854C0(v194);
                            }
                          }
                          v367 = (hkString::Self *)((char *)v367 + 1);
                        }
                        while ( v367 != (hkString::Self *)(v398) );
                        for ( k = nullptr; k != v398; k = (hkOArchive::Self *)((char *)k + 1) )
                        {
                          Terminal = (hkOArchive::Self *)hkTypeManager::Type::findTerminal((hkTypeManager::Type::Self *)v443[4 * (uint32_t)(uintptr_t)k + 2]);
                          if ( *(uint32_t *)Terminal == 6 )
                          {
                            v375 = Terminal;
                            v212 = G4_VCALL<int>(v433[0], 8);
                            v385 = *(int (**)(void))(*(uint32_t *)v212 + 44);
                            TypeName = hkTypeManager::Type::getTypeName((hkTypeManager::Type::Self *)(v375));
                            v435 = v385();
                            sub_18876F0(
                              a1,
                              (uint32_t *)(&v435),
                              v212,
                              TypeName,
                              v320,
                              (int)(uintptr_t)v322,
                              v323,
                              v324,
                              v325,
                              v326,
                              (int)(uintptr_t)v327,
                              (int)(uintptr_t)v329,
                              v330,
                              SHIDWORD(v330),
                              v331,
                              SHIDWORD(v331),
                              v332,
                              SHIDWORD(v332),
                              v333,
                              SHIDWORD(v333),
                              v334,
                              SHIDWORD(v334),
                              v335,
                              (uint32_t *)HIDWORD(v335),
                              (uint32_t *)v336,
                              SHIDWORD(v336),
                              v337,
                              SHIDWORD(v337),
                              v338,
                              SHIDWORD(v338),
                              v339,
                              SHIDWORD(v339),
                              v340,
                              SHIDWORD(v340),
                              v341,
                              SHIDWORD(v341));
                          }
                        }
                      }
                      v444 = 0;
                      if ( v445 >= 0 )
                        (*(void ( **)(uint32_t *, uint32_t *, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
                          (uint32_t *)(uintptr_t)(hkContainerTempAllocator::s_alloc),
                          v443,
                          16 * v445);
                      v164 = (int)(uintptr_t)v346;
                    }
                  }
                }
                v167 = (hkString::Self *)G4_VCALL<int>(v432[0], 12);
                v383 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(v417, v167, -1);
                if ( v383 == -1 )
                {
                  v329 = *(hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> **)(a1 + 36);
                  v168 = (hkString::Self *)G4_VCALL<int>(v432[0], 12);
                  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
                    v417,
                    v168,
                    (unsigned int)(uintptr_t)v329);
                  v366 = (hkString::Self *)G4_VCALL<int>(v432[0], 28);
                  hkArray_hkDataClass_MemberInfo_h_3e2cfa::Construct((hkArray_Raw *)&v443, (int)(uintptr_t)v366);
                  hkDataClass::getAllDeclaredMemberInfo(v432, &v443);
                  hkOArchive::write8u((hkOArchive::Self *)a1, 4u);
                  v169 = (hkString::Self *)G4_VCALL<int>(v432[0], 12);
                  sub_18854F0((uint32_t *)a1, v169);
                  v170 = G4_VCALL<int>(v432[0], 16);
                  sub_1885330((hkOArchive::Self *)a1, v170);
                  G4_VCALL<void>(v432[0], 16);
                  sub_1885330((hkOArchive::Self *)a1, v164);
                  sub_1885330((hkOArchive::Self *)a1, (int)(uintptr_t)v366);
                  v353 = nullptr;
                  v171 = (hkOArchive::Self *)a1;
                  v327 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(a1 + 16);
                  if ( (int)(uintptr_t)v366 > 0 )
                  {
                    do
                    {
                      v393 = (hkOArchive::Self *)&v443[4 * (uint32_t)(uintptr_t)v353];
                      v172 = *(hkString::Self **)v393;
                      if ( *(uint32_t *)v393 != 0 )
                      {
                        v173 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
                                 v327,
                                 v172,
                                 -1);
                        if ( v173 == -1 )
                        {
                          v214 = hkString::strLen(v172);
                          v326 = v214;
                          if ( v214 >> 31 < 0 )
                          {
                            v222 = -(int64_t)v214;
                            HIDWORD(v215) = v222 >> 31;
                            v333 = __PAIR64__(HIDWORD(v215), 2 * (int)v222) | 1;
                            LODWORD(v215) = (2 * v222) | 1;
                          }
                          else
                          {
                            v215 = 2LL * v214;
                            v333 = v215;
                          }
                          v216 = v215;
                          v217 = v215 >> 7;
                          v347 = v216 & 0x7F;
                          if ( v217 != 0 )
                          {
                            v218 = v216 & 0x7F;
                            v325 = (int)(uintptr_t)v172;
                            v348 = v171;
                            v219 = __PAIR64__(v217, HIDWORD(v217));
                            v220 = v348;
                            do
                            {
                              v349 = v220;
                              hkOArchive::write8u(v220, v218 | 0x80);
                              v221 = BYTE4(v219);
                              HIDWORD(v219) = __PAIR64__(v219, HIDWORD(v219)) >> 7;
                              LODWORD(v219) = (unsigned int)v219 >> 7;
                              v218 = v221 & 0x7F;
                              v220 = v349;
                            }
                            while ( v219 != 0 );
                            v172 = (hkString::Self *)v325;
                            v347 = v218;
                            v171 = v220;
                          }
                          hkOArchive::write8u(v171, v347);
                          hkOArchive::writeRaw(v171, v172, v326);
                          hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
                            v327,
                            v172,
                            *((uint32_t *)v171 + 5) + 1);
                        }
                        else
                        {
                          v174 = -v173;
                          if ( v174 >> 31 < 0 )
                          {
                            v213 = -(int64_t)v174;
                            HIDWORD(v175) = v213 >> 31;
                            v332 = __PAIR64__(HIDWORD(v175), 2 * (int)v213) | 1;
                            LODWORD(v175) = (2 * v213) | 1;
                          }
                          else
                          {
                            v175 = 2LL * v174;
                            v332 = v175;
                          }
                          v176 = v175;
                          v177 = v175 >> 7;
                          v178 = v176 & 0x7F;
                          if ( v177 != 0 )
                          {
                            v343 = v171;
                            v179 = __PAIR64__(v177, HIDWORD(v177));
                            v180 = v343;
                            do
                            {
                              v344 = v180;
                              hkOArchive::write8u(v180, v178 | 0x80);
                              v181 = BYTE4(v179);
                              v180 = v344;
                              HIDWORD(v179) = __PAIR64__(v179, HIDWORD(v179)) >> 7;
                              LODWORD(v179) = (unsigned int)v179 >> 7;
                              v178 = v181 & 0x7F;
                            }
                            while ( v179 != 0 );
                            v171 = v344;
                          }
                          hkOArchive::write8u(v171, v178);
                        }
                      }
                      else
                      {
                        hkOArchive::write8u(v171, 3u);
                      }
                      v182 = hkTypeManager::getLegacyType((hkTypeManager::Type::Self ***)(*((hkTypeManager::Self **)v393 + 2)), (hkTypeManager::Type::Self *)v434, (const char **)&v435);
                      v394 = (2 * v182) & 0x7F;
                      if ( (2 * (uint64_t)v182) >> 7 != 0 )
                      {
                        v183 = (2 * v182) & 0x7F;
                        v345 = v182;
                        v395 = v171;
                        v184 = __PAIR64__(v182 >> 6, 0);
                        v185 = v395;
                        do
                        {
                          v396 = v185;
                          hkOArchive::write8u(v185, v183 | 0x80);
                          v186 = BYTE4(v184);
                          HIDWORD(v184) = __PAIR64__(v184, HIDWORD(v184)) >> 7;
                          LODWORD(v184) = (unsigned int)v184 >> 7;
                          v183 = v186 & 0x7F;
                          v185 = v396;
                        }
                        while ( v184 != 0 );
                        LOBYTE(v182) = v345;
                        v394 = v183;
                        v171 = v185;
                      }
                      hkOArchive::write8u(v171, v394);
                      if ( (v182 & 0x20) != 0 )
                      {
                        if ( v435 >> 31 < 0 )
                        {
                          HIDWORD(v299) = (uint64_t)(-2LL * v435) >> 32;
                          v334 = (-2LL * v435) | 1;
                          LODWORD(v299) = (-2 * v435) | 1;
                        }
                        else
                        {
                          v299 = 2LL * v435;
                          v334 = v299;
                        }
                        v300 = v299;
                        v301 = v299 >> 7;
                        v399 = v300 & 0x7F;
                        if ( v301 != 0 )
                        {
                          v302 = v300 & 0x7F;
                          v351 = v182;
                          v400 = v171;
                          v303 = __PAIR64__(v301, HIDWORD(v301));
                          v304 = v400;
                          do
                          {
                            v401 = v304;
                            hkOArchive::write8u(v304, v302 | 0x80);
                            v305 = BYTE4(v303);
                            HIDWORD(v303) = __PAIR64__(v303, HIDWORD(v303)) >> 7;
                            LODWORD(v303) = (unsigned int)v303 >> 7;
                            v302 = v305 & 0x7F;
                            v304 = v401;
                          }
                          while ( v303 != 0 );
                          v399 = v302;
                          LOBYTE(v182) = v351;
                          v171 = v304;
                        }
                        hkOArchive::write8u(v171, v399);
                      }
                      if ( (v182 & 0xF) - 8 <= 1 )
                      {
                        if ( v434[0] != 0 )
                        {
                          v296 = G4_VCALL<int>(v432[0], 8);
                          v297 = G4_VCALL<int>(v296, 44, v434[0]);
                          v298 = (hkString::Self *)G4_VCALL<int>(v297, 12);
                          sub_18854F0((uint32_t *)(v171), v298);
                        }
                        else
                        {
                          sub_18854C0(v171);
                        }
                      }
                      v353 = (hkOArchive::Self *)((char *)v353 + 1);
                    }
                    while ( v353 != (hkOArchive::Self *)(v366) );
                    for ( m = nullptr; m != v366; m = (hkString::Self *)((char *)m + 1) )
                    {
                      v188 = (hkTypeManager::Type::Self *)hkTypeManager::Type::findTerminal((hkTypeManager::Type::Self *)v443[4 * (uint32_t)(uintptr_t)m + 2]);
                      if ( *(uint32_t *)v188 == 6 )
                      {
                        v384 = v188;
                        v189 = G4_VCALL<int>(v432[0], 8);
                        v397 = *(int (**)(void))(*(uint32_t *)v189 + 44);
                        v314 = hkTypeManager::Type::getTypeName(v384);
                        v435 = v397();
                        sub_18876F0(
                          a1,
                          (uint32_t *)(&v435),
                          v189,
                          v314,
                          v319,
                          (int)(uintptr_t)v322,
                          v323,
                          v324,
                          v325,
                          v326,
                          (int)(uintptr_t)v327,
                          (int)(uintptr_t)v329,
                          v330,
                          SHIDWORD(v330),
                          v331,
                          SHIDWORD(v331),
                          v332,
                          SHIDWORD(v332),
                          v333,
                          SHIDWORD(v333),
                          v334,
                          SHIDWORD(v334),
                          v335,
                          (uint32_t *)HIDWORD(v335),
                          (uint32_t *)v336,
                          SHIDWORD(v336),
                          v337,
                          SHIDWORD(v337),
                          v338,
                          SHIDWORD(v338),
                          v339,
                          SHIDWORD(v339),
                          v340,
                          SHIDWORD(v340),
                          v341,
                          SHIDWORD(v341));
                      }
                    }
                  }
                  hkArray_hkDataClass_MemberInfo_h_3e2cfa::clearAndDeallocate((hkArray<hkDataClass_MemberInfo, hkContainerTempAllocator::Self> *)&v443);
                  v383 = (int)(uintptr_t)v329;
                }
              }
            }
            v151 = (hkString::Self *)G4_VCALL<int>(v431[0], 12);
            v409 = (char **)hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
                              v417,
                              v151,
                              -1);
            if ( v409 == (char **)-1 )
            {
              v152 = *(uint32_t *)(a1 + 36);
              v329 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)v152;
              v153 = (hkString::Self *)G4_VCALL<int>(v431[0], 12);
              hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v417, v153, v152);
              v154 = G4_VCALL<int>(v431[0], 28);
              v155 = nullptr;
              v392 = v154;
              v443 = nullptr;
              v444 = 0;
              v445 = 0x80000000;
              if ( v154 == 0
                || (v435 = 16 * v154,
                    v155 = (uint32_t *)(*(int ( **)(uint32_t, uint32_t *, int *))(hkContainerTempAllocator::s_alloc[0]
                                                                                    + 16))(
                                       0,
                                       (uint32_t *)(uintptr_t)(hkContainerTempAllocator::s_alloc),
                                       &v435),
                    v156 = v435 / 16,
                    v435 / 16 == 0) )
              {
                v156 = 0x80000000;
              }
              v445 = v156;
              v157 = 0;
              v443 = v155;
              v444 = v392;
              if ( v392 > 0 )
              {
                do
                {
                  *(__m128i *)&v155[v157] = __m128i{};
                  v157 += 4;
                }
                while ( v157 != 4 * v392 );
              }
              hkDataClass::getAllDeclaredMemberInfo(v431, &v443);
              hkOArchive::write8u((hkOArchive::Self *)a1, 4u);
              v158 = (hkString::Self *)G4_VCALL<int>(v431[0], 12);
              v410 = (char **)v158;
              if ( v158 != nullptr )
              {
                v159 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
                         (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(a1 + 16),
                         v158,
                         -1);
                if ( v159 == -1 )
                {
                  v306 = hkString::strLen((hkString::Self *)v410);
                  v364 = (hkOArchive::Self *)v306;
                  if ( v306 >> 31 < 0 )
                    v336 = (-2LL * v306) | 1;
                  else
                    v336 = 2LL * v306;
                  v307 = v336;
                  while ( 1 )
                  {
                    LODWORD(v308) = HIDWORD(v307) >> 7;
                    v309 = v307 & 0x7F;
                    v307 >>= 7;
                    HIDWORD(v308) = v307;
                    if ( v308 == 0 )
                      break;
                    hkOArchive::write8u((hkOArchive::Self *)a1, v309 | 0x80);
                  }
                  hkOArchive::write8u((hkOArchive::Self *)a1, v309);
                  hkOArchive::writeRaw((hkOArchive::Self *)a1, v410, (int)(uintptr_t)v364);
                  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
                    (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(a1 + 16),
                    (hkString::Self *)v410,
                    *(uint32_t *)(a1 + 20) + 1);
                }
                else
                {
                  v160 = -v159;
                  if ( v160 >> 31 < 0 )
                    v335 = (-2LL * v160) | 1;
                  else
                    v335 = 2LL * v160;
                  v161 = v335;
                  while ( 1 )
                  {
                    LODWORD(v162) = HIDWORD(v161) >> 7;
                    v163 = v161 & 0x7F;
                    v161 >>= 7;
                    HIDWORD(v162) = v161;
                    if ( v162 == 0 )
                      break;
                    hkOArchive::write8u((hkOArchive::Self *)a1, v163 | 0x80);
                  }
                  hkOArchive::write8u((hkOArchive::Self *)a1, v163);
                }
              }
              else
              {
                hkOArchive::write8u((hkOArchive::Self *)a1, 3u);
              }
              v243 = G4_VCALL<int>(v431[0], 16);
              if ( v243 >> 31 < 0 )
                v337 = (-2LL * v243) | 1;
              else
                v337 = 2LL * v243;
              v244 = v337;
              while ( 1 )
              {
                LODWORD(v245) = HIDWORD(v244) >> 7;
                v246 = v244 & 0x7F;
                v244 >>= 7;
                HIDWORD(v245) = v244;
                if ( v245 == 0 )
                  break;
                hkOArchive::write8u((hkOArchive::Self *)a1, v246 | 0x80);
              }
              hkOArchive::write8u((hkOArchive::Self *)a1, v246);
              G4_VCALL<void>(v431[0], 16);
              if ( v383 >> 31 < 0 )
              {
                v266 = -2LL * v383;
                v338 = v266 | 1;
                v247 = v266 | 1;
              }
              else
              {
                v338 = 2LL * v383;
                v247 = v338;
              }
              while ( 1 )
              {
                LODWORD(v248) = HIDWORD(v247) >> 7;
                v249 = v247 & 0x7F;
                v247 >>= 7;
                HIDWORD(v248) = v247;
                if ( v248 == 0 )
                  break;
                hkOArchive::write8u((hkOArchive::Self *)a1, v249 | 0x80);
              }
              hkOArchive::write8u((hkOArchive::Self *)a1, v249);
              if ( v392 >> 31 < 0 )
              {
                v294 = -2LL * v392;
                v339 = v294 | 1;
                v250 = v294 | 1;
              }
              else
              {
                v339 = 2LL * v392;
                v250 = v339;
              }
              while ( 1 )
              {
                LODWORD(v251) = HIDWORD(v250) >> 7;
                v252 = v250 & 0x7F;
                v250 >>= 7;
                HIDWORD(v251) = v250;
                if ( v251 == 0 )
                  break;
                hkOArchive::write8u((hkOArchive::Self *)a1, v252 | 0x80);
              }
              hkOArchive::write8u((hkOArchive::Self *)a1, v252);
              v350 = nullptr;
              v368 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(a1 + 16);
              if ( v392 > 0 )
              {
                do
                {
                  v361 = (hkOArchive::Self *)&v443[4 * (uint32_t)(uintptr_t)v350];
                  v253 = *(hkString::Self **)v361;
                  if ( *(uint32_t *)v361 != 0 )
                  {
                    v254 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
                             v368,
                             v253,
                             -1);
                    if ( v254 == -1 )
                    {
                      v279 = hkString::strLen(v253);
                      v328 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)v279;
                      if ( v279 >> 31 < 0 )
                      {
                        v286 = -(int64_t)v279;
                        HIDWORD(v280) = v286 >> 31;
                        v341 = __PAIR64__(HIDWORD(v280), 2 * (int)v286) | 1;
                        LODWORD(v280) = (2 * v286) | 1;
                      }
                      else
                      {
                        v280 = 2LL * v279;
                        v341 = v280;
                      }
                      v281 = v280;
                      v282 = v280 >> 7;
                      v283 = v281 & 0x7F;
                      if ( v282 != 0 )
                      {
                        v326 = (int)(uintptr_t)v253;
                        v284 = __PAIR64__(v282, HIDWORD(v282));
                        do
                        {
                          hkOArchive::write8u((hkOArchive::Self *)a1, v283 | 0x80);
                          v285 = BYTE4(v284);
                          HIDWORD(v284) = __PAIR64__(v284, HIDWORD(v284)) >> 7;
                          LODWORD(v284) = (unsigned int)v284 >> 7;
                          v283 = v285 & 0x7F;
                        }
                        while ( v284 != 0 );
                        v253 = (hkString::Self *)v326;
                      }
                      hkOArchive::write8u((hkOArchive::Self *)a1, v283);
                      hkOArchive::writeRaw((hkOArchive::Self *)a1, v253, (int)(uintptr_t)v328);
                      v327 = *(hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> **)(a1 + 20);
                      hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
                        v368,
                        v253,
                        (unsigned int)(uintptr_t)v327 + 1);
                    }
                    else
                    {
                      v255 = -v254;
                      if ( v255 >> 31 < 0 )
                        v340 = (-2LL * v255) | 1;
                      else
                        v340 = 2LL * v255;
                      v256 = v340;
                      while ( 1 )
                      {
                        LODWORD(v257) = HIDWORD(v256) >> 7;
                        v258 = v256 & 0x7F;
                        v256 >>= 7;
                        HIDWORD(v257) = v256;
                        if ( v257 == 0 )
                          break;
                        hkOArchive::write8u((hkOArchive::Self *)a1, v258 | 0x80);
                      }
                      hkOArchive::write8u((hkOArchive::Self *)a1, v258);
                    }
                  }
                  else
                  {
                    hkOArchive::write8u((hkOArchive::Self *)a1, 3u);
                  }
                  v362 = (hkOArchive::Self *)hkTypeManager::getLegacyType((hkTypeManager::Type::Self ***)(*((hkTypeManager::Self **)v361 + 2)), (hkTypeManager::Type::Self *)v434, (const char **)&v435);
                  HIDWORD(v259) = (2 * (uint64_t)(unsigned int)(uintptr_t)v362) >> 7;
                  LODWORD(v259) = 0;
                  v260 = (2 * (uint8_t)(uintptr_t)v362) & 0x7F;
                  if ( v259 != 0 )
                  {
                    v261 = (2 * (uint8_t)(uintptr_t)v362) & 0x7F;
                    do
                    {
                      hkOArchive::write8u((hkOArchive::Self *)a1, v261 | 0x80);
                      v262 = BYTE4(v259);
                      HIDWORD(v259) = __PAIR64__(v259, HIDWORD(v259)) >> 7;
                      LODWORD(v259) = (unsigned int)v259 >> 7;
                      v261 = v262 & 0x7F;
                    }
                    while ( v259 != 0 );
                    v260 = v261;
                  }
                  hkOArchive::write8u((hkOArchive::Self *)a1, v260);
                  if ( ((uint8_t)(uintptr_t)v362 & 0x20) != 0 )
                  {
                    if ( v435 >> 31 < 0 )
                      v267 = (-2LL * v435) | 1;
                    else
                      v267 = 2LL * v435;
                    while ( 1 )
                    {
                      LODWORD(v268) = HIDWORD(v267) >> 7;
                      v269 = v267 & 0x7F;
                      v267 >>= 7;
                      HIDWORD(v268) = v267;
                      if ( v268 == 0 )
                        break;
                      hkOArchive::write8u((hkOArchive::Self *)a1, v269 | 0x80);
                    }
                    hkOArchive::write8u((hkOArchive::Self *)a1, v269);
                  }
                  if ( ((uint8_t)(uintptr_t)v362 & 0xFu) - 8 <= 1 )
                  {
                    if ( v434[0] != 0 )
                    {
                      v270 = G4_VCALL<int>(v431[0], 8);
                      v271 = G4_VCALL<int>(v270, 44, v434[0]);
                      v272 = (hkString::Self *)G4_VCALL<int>(v271, 12);
                      v273 = v272;
                      if ( v272 != nullptr )
                      {
                        v274 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
                                 v368,
                                 v272,
                                 -1);
                        if ( v274 == -1 )
                        {
                          v287 = hkString::strLen(v273);
                          v363 = (hkOArchive::Self *)v287;
                          if ( v287 >> 31 < 0 )
                          {
                            v295 = -(int64_t)v287;
                            HIDWORD(v288) = v295 >> 31;
                            LODWORD(v288) = (2 * v295) | 1;
                          }
                          else
                          {
                            v288 = 2LL * v287;
                          }
                          v289 = v288;
                          v290 = v288 >> 7;
                          v291 = v289 & 0x7F;
                          if ( v290 != 0 )
                          {
                            v327 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(v273);
                            v292 = __PAIR64__(v290, HIDWORD(v290));
                            do
                            {
                              hkOArchive::write8u((hkOArchive::Self *)a1, v291 | 0x80);
                              v293 = BYTE4(v292);
                              HIDWORD(v292) = __PAIR64__(v292, HIDWORD(v292)) >> 7;
                              LODWORD(v292) = (unsigned int)v292 >> 7;
                              v291 = v293 & 0x7F;
                            }
                            while ( v292 != 0 );
                            v273 = (hkString::Self *)(v327);
                          }
                          hkOArchive::write8u((hkOArchive::Self *)a1, v291);
                          hkOArchive::writeRaw((hkOArchive::Self *)a1, v273, (int)(uintptr_t)v363);
                          hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
                            v368,
                            v273,
                            *(uint32_t *)(a1 + 20) + 1);
                        }
                        else
                        {
                          v275 = -v274;
                          if ( v275 >> 31 < 0 )
                            v276 = (-2LL * v275) | 1;
                          else
                            v276 = 2LL * v275;
                          while ( 1 )
                          {
                            LODWORD(v277) = HIDWORD(v276) >> 7;
                            v278 = v276 & 0x7F;
                            v276 >>= 7;
                            HIDWORD(v277) = v276;
                            if ( v277 == 0 )
                              break;
                            hkOArchive::write8u((hkOArchive::Self *)a1, v278 | 0x80);
                          }
                          hkOArchive::write8u((hkOArchive::Self *)a1, v278);
                        }
                      }
                      else
                      {
                        hkOArchive::write8u((hkOArchive::Self *)a1, 3u);
                      }
                    }
                    else
                    {
                      sub_18854C0((hkOArchive::Self *)a1);
                    }
                  }
                  v350 = (hkOArchive::Self *)((char *)v350 + 1);
                }
                while ( v350 != (hkOArchive::Self *)v392 );
                for ( n = nullptr; n != (hkOArchive::Self *)v392; n = (hkOArchive::Self *)((char *)n + 1) )
                {
                  v264 = (hkString::Self *)hkTypeManager::Type::findTerminal((hkTypeManager::Type::Self *)v443[4 * (uint32_t)(uintptr_t)n + 2]);
                  if ( *(uint32_t *)v264 == 6 )
                  {
                    v369 = v264;
                    v265 = G4_VCALL<int>(v431[0], 8);
                    v386 = *(int (**)(void))(*(uint32_t *)v265 + 44);
                    v316 = hkTypeManager::Type::getTypeName((hkTypeManager::Type::Self *)(v369));
                    v435 = v386();
                    sub_18876F0(
                      a1,
                      (uint32_t *)(&v435),
                      v265,
                      v316,
                      v321,
                      (int)(uintptr_t)v322,
                      v323,
                      v324,
                      v325,
                      v326,
                      (int)(uintptr_t)v327,
                      (int)(uintptr_t)v329,
                      v330,
                      SHIDWORD(v330),
                      v331,
                      SHIDWORD(v331),
                      v332,
                      SHIDWORD(v332),
                      v333,
                      SHIDWORD(v333),
                      v334,
                      SHIDWORD(v334),
                      v335,
                      (uint32_t *)HIDWORD(v335),
                      (uint32_t *)v336,
                      SHIDWORD(v336),
                      v337,
                      SHIDWORD(v337),
                      v338,
                      SHIDWORD(v338),
                      v339,
                      SHIDWORD(v339),
                      v340,
                      SHIDWORD(v340),
                      v341,
                      SHIDWORD(v341));
                  }
                }
              }
              hkArray_hkDataClass_MemberInfo_h_3e2cfa::clearAndDeallocate((hkArray<hkDataClass_MemberInfo, hkContainerTempAllocator::Self> *)&v443);
              v409 = (char **)v329;
            }
          }
        }
        v111 = (hkString::Self *)G4_VCALL<int>(v430[0], 12);
        if ( hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(v417, v111, -1) == -1 )
        {
          v112 = *(uint32_t *)(a1 + 36);
          v113 = (hkString::Self *)G4_VCALL<int>(v430[0], 12);
          hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v417, v113, v112);
          v370 = G4_VCALL<int>(v430[0], 28);
          hkArray_hkDataClass_MemberInfo_h_3e2cfa::Construct((hkArray_Raw *)&v443, v370);
          hkDataClass::getAllDeclaredMemberInfo(v430, &v443);
          hkOArchive::write8u((hkOArchive::Self *)a1, 4u);
          v114 = (hkString::Self *)G4_VCALL<int>(v430[0], 12);
          sub_18854F0((uint32_t *)a1, v114);
          v115 = G4_VCALL<int>(v430[0], 16);
          if ( v115 >> 31 < 0 )
            v116 = (-2LL * v115) | 1;
          else
            v116 = 2LL * v115;
          HIDWORD(v117) = v116 >> 7;
          LODWORD(v117) = HIDWORD(v116) >> 7;
          v118 = v116 & 0x7F;
          if ( v117 != 0 )
          {
            v119 = v116 & 0x7F;
            do
            {
              hkOArchive::write8u((hkOArchive::Self *)a1, v119 | 0x80);
              v120 = BYTE4(v117);
              HIDWORD(v117) = __PAIR64__(v117, HIDWORD(v117)) >> 7;
              LODWORD(v117) = (unsigned int)v117 >> 7;
              v119 = v120 & 0x7F;
            }
            while ( v117 != 0 );
            v118 = v119;
          }
          hkOArchive::write8u((hkOArchive::Self *)a1, v118);
          G4_VCALL<void>(v430[0], 16);
          sub_1885330((hkOArchive::Self *)a1, (int)(uintptr_t)v409);
          if ( v370 >> 31 < 0 )
            v121 = (-2LL * v370) | 1;
          else
            v121 = 2LL * v370;
          HIDWORD(v122) = v121 >> 7;
          LODWORD(v122) = HIDWORD(v121) >> 7;
          v123 = v121 & 0x7F;
          if ( v122 != 0 )
          {
            v124 = v121 & 0x7F;
            do
            {
              hkOArchive::write8u((hkOArchive::Self *)a1, v124 | 0x80);
              v125 = BYTE4(v122);
              HIDWORD(v122) = __PAIR64__(v122, HIDWORD(v122)) >> 7;
              LODWORD(v122) = (unsigned int)v122 >> 7;
              v124 = v125 & 0x7F;
            }
            while ( v122 != 0 );
            v123 = v124;
          }
          hkOArchive::write8u((hkOArchive::Self *)a1, v123);
          v390 = nullptr;
          v352 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(a1 + 16);
          if ( v370 > 0 )
          {
            do
            {
              v422 = (hkString::Self **)&v443[4 * (uint32_t)(uintptr_t)v390];
              v365 = *v422;
              if ( *v422 != nullptr )
              {
                v126 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(v352, *v422, -1);
                if ( v126 == -1 )
                {
                  v145 = hkString::strLen(v365);
                  v342 = (hkOArchive::Self *)v145;
                  if ( v145 >> 31 < 0 )
                    v146 = (-2LL * v145) | 1;
                  else
                    v146 = 2LL * v145;
                  while ( 1 )
                  {
                    LODWORD(v147) = HIDWORD(v146) >> 7;
                    v148 = v146 & 0x7F;
                    v146 >>= 7;
                    HIDWORD(v147) = v146;
                    if ( v147 == 0 )
                      break;
                    hkOArchive::write8u((hkOArchive::Self *)a1, v148 | 0x80);
                  }
                  hkOArchive::write8u((hkOArchive::Self *)a1, v148);
                  hkOArchive::writeRaw((hkOArchive::Self *)a1, v365, (int)(uintptr_t)v342);
                  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
                    v352,
                    v365,
                    *(uint32_t *)(a1 + 20) + 1);
                }
                else
                {
                  v127 = -v126;
                  if ( v127 >> 31 < 0 )
                    v128 = (-2LL * v127) | 1;
                  else
                    v128 = 2LL * v127;
                  while ( 1 )
                  {
                    LODWORD(v129) = HIDWORD(v128) >> 7;
                    v130 = v128 & 0x7F;
                    v128 >>= 7;
                    HIDWORD(v129) = v128;
                    if ( v129 == 0 )
                      break;
                    hkOArchive::write8u((hkOArchive::Self *)a1, v130 | 0x80);
                  }
                  hkOArchive::write8u((hkOArchive::Self *)a1, v130);
                }
              }
              else
              {
                hkOArchive::write8u((hkOArchive::Self *)a1, 3u);
              }
              v423 = (hkDataObject_Value::Self *)hkTypeManager::getLegacyType((hkTypeManager::Type::Self ***)(v422[2]), (hkTypeManager::Type::Self *)v434, (const char **)&v435);
              HIDWORD(v131) = (2 * (uint64_t)(unsigned int)(uintptr_t)v423) >> 7;
              LODWORD(v131) = 0;
              v132 = (2 * (uint8_t)(uintptr_t)v423) & 0x7F;
              if ( v131 != 0 )
              {
                v133 = (2 * (uint8_t)(uintptr_t)v423) & 0x7F;
                do
                {
                  hkOArchive::write8u((hkOArchive::Self *)a1, v133 | 0x80);
                  v134 = BYTE4(v131);
                  HIDWORD(v131) = __PAIR64__(v131, HIDWORD(v131)) >> 7;
                  LODWORD(v131) = (unsigned int)v131 >> 7;
                  v133 = v134 & 0x7F;
                }
                while ( v131 != 0 );
                v132 = v133;
              }
              hkOArchive::write8u((hkOArchive::Self *)a1, v132);
              if ( ((uint8_t)(uintptr_t)v423 & 0x20) != 0 )
              {
                if ( v435 >> 31 < 0 )
                  v137 = (-2LL * v435) | 1;
                else
                  v137 = 2LL * v435;
                HIDWORD(v138) = v137 >> 7;
                LODWORD(v138) = HIDWORD(v137) >> 7;
                v139 = v137 & 0x7F;
                if ( v138 != 0 )
                {
                  v140 = v137 & 0x7F;
                  do
                  {
                    hkOArchive::write8u((hkOArchive::Self *)a1, v140 | 0x80);
                    v141 = BYTE4(v138);
                    HIDWORD(v138) = __PAIR64__(v138, HIDWORD(v138)) >> 7;
                    LODWORD(v138) = (unsigned int)v138 >> 7;
                    v140 = v141 & 0x7F;
                  }
                  while ( v138 != 0 );
                  v139 = v140;
                }
                hkOArchive::write8u((hkOArchive::Self *)a1, v139);
              }
              if ( ((uint8_t)(uintptr_t)v423 & 0xFu) - 8 <= 1 )
              {
                if ( v434[0] != 0 )
                {
                  v142 = G4_VCALL<int>(v430[0], 8);
                  v143 = G4_VCALL<int>(v142, 44, v434[0]);
                  v144 = (hkString::Self *)G4_VCALL<int>(v143, 12);
                  sub_18854F0((uint32_t *)a1, v144);
                }
                else
                {
                  sub_18854C0((hkOArchive::Self *)a1);
                }
              }
              v390 = (hkOArchive::Self *)((char *)v390 + 1);
            }
            while ( v390 != (hkOArchive::Self *)v370 );
            for ( ii = 0; ii != v370; ++ii )
            {
              v136 = (hkTypeManager::Type::Self *)hkTypeManager::Type::findTerminal((hkTypeManager::Type::Self *)v443[4 * ii + 2]);
              if ( *(uint32_t *)v136 == 6 )
              {
                v391 = (hkOArchive::Self *)G4_VCALL<int>(v430[0], 8);
                v424 = *(int (**)(void))(*(uint32_t *)v391 + 44);
                v312 = hkTypeManager::Type::getTypeName(v136);
                v435 = v424();
                sub_18876F0(
                  a1,
                  (uint32_t *)(&v435),
                  (int)(uintptr_t)v391,
                  v312,
                  v317,
                  (int)(uintptr_t)v322,
                  v323,
                  v324,
                  v325,
                  v326,
                  (int)(uintptr_t)v327,
                  (int)(uintptr_t)v329,
                  v330,
                  SHIDWORD(v330),
                  v331,
                  SHIDWORD(v331),
                  v332,
                  SHIDWORD(v332),
                  v333,
                  SHIDWORD(v333),
                  v334,
                  SHIDWORD(v334),
                  v335,
                  (uint32_t *)HIDWORD(v335),
                  (uint32_t *)v336,
                  SHIDWORD(v336),
                  v337,
                  SHIDWORD(v337),
                  v338,
                  SHIDWORD(v338),
                  v339,
                  SHIDWORD(v339),
                  v340,
                  SHIDWORD(v340),
                  v341,
                  SHIDWORD(v341));
              }
            }
          }
          v444 = 0;
          if ( v445 >= 0 )
          {
            v317 = 16 * v445;
            (*(void ( **)(uint32_t *, uint32_t *))(hkContainerTempAllocator::s_alloc[0] + 20))(
              (uint32_t *)(uintptr_t)(hkContainerTempAllocator::s_alloc),
              v443);
          }
        }
      }
      v35 = v430[0];
    }
    v37 = G4_VCALL<int>(v35, 40);
    v443 = nullptr;
    v38 = (v37 + 7) & 0xFFFFFFF8;
    v444 = 0;
    v445 = 0x80000000;
    if ( v37 + 7 >= 0 && v38 != 0 )
    {
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v428,
        (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
        (int *)&v443,
        v38,
        1);
      if ( (int)(v38 - v444) > 0 )
        memset((char *)v443 + v444, 0, v38 - v444);
    }
    v444 = (v37 + 7) & 0xFFFFFFF8;
    if ( v37 > (v445 & 0x3FFFFFFF) )
    {
      v39 = 2 * (v445 & 0x3FFFFFFF);
      if ( v37 >= v39 )
        v39 = v37;
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v428,
        (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
        (int *)&v443,
        v39,
        1);
    }
    v444 = v37;
    for ( jj = (hkDataObject_Value::Self *)G4_VCALL<int>(v413, 24);
          G4_VCALL<int>(v413, 28, jj) != 0;
          jj = (hkDataObject_Value::Self *)G4_VCALL<int>(v413, 32, jj) )
    {
      v317 = (int)(uintptr_t)jj;
      (*(void ( **)(int *))(*v413 + 40))(&v435);
      switch ( *(uint32_t *)hkDataObject_Value::getType((hkDataObject_Value::Self *)&v435) )
      {
        case 2:
        case 4:
          v80 = ((int64_t ( *)(int, int))*(uint32_t *)(*(uint32_t *)v435 + 52))(v435, v436) != 0;
          goto LABEL_96;
        case 3:
          v407 = ((long double ( *)(int, int))*(uint32_t *)(*(uint32_t *)v435 + 64))(v435, v436);
          v80 = true;
          if ( v407 == 0.0 )
            v80 = __builtin_isnan(v407);
          goto LABEL_96;
        case 5:
          v80 = G4_VCALL<int>(v435, 48, v436) != 0;
          goto LABEL_96;
        case 6:
        case 7:
          v40 = (uint32_t *)G4_VCALL<int>(v435, 56, v436);
          if ( v40 == nullptr )
            continue;
          v41 = v40[2];
          HIWORD(v42) = HIWORD(v40[1]);
          LOWORD(v42) = 0;
          v40[1] = v42 | (uint16_t)v40[1];
          if ( v41 == 0 )
            G4_VCALL<void>(v40, 4);
          goto LABEL_56;
        case 8:
          v74 = G4_VCALL<int>(v435, 44, v436);
          v75 = (uint32_t *)v74;
          if ( v74 != 0 )
          {
            v76 = *(uint32_t *)(v74 + 4);
            ++*(uint32_t *)(v74 + 8);
            v77 = v76;
            LOWORD(v76) = 0;
            v75[1] = v76 | (uint16_t)(v77 + 1);
          }
          v78 = G4_VCALL<int>(v75, 24);
          v79 = v75[1];
          LOWORD(v79) = 0;
          v80 = v78 != 0;
          v81 = v79 | (uint16_t)(v75[1] - 1);
          v82 = v75[2];
          v75[1] = v81;
          v75[2] = v82 - 1;
          if ( v82 == 1 )
          {
            v406 = (char **)v80;
            G4_VCALL<void>(v75, 4);
            v80 = (int)(uintptr_t)v406;
          }
LABEL_96:
          if ( v80 )
            goto LABEL_56;
          continue;
        case 9:
LABEL_56:
          v43 = G4_VCALL<int>(v413, 36, jj);
          v44 = G4_VCALL<int>(v430[0], 48, v43);
          *((uint8_t *)v443 + v44) = 1;
          break;
        default:
          continue;
      }
    }
    v45 = *(uint32_t *)(a1 + 56) & 0x7FFFFFFF;
    (*(void ( **)(unsigned int *, uint32_t *))(*v413 + 8))(&v426, v413);
    sub_1885180((int *)(a1 + 52), &hkContainerHeapAllocator::s_alloc, v426, (unsigned int)(uintptr_t)v427, v45);
    v46 = *(uint32_t *)(a1 + 80);
    if ( v46 == (*(uint32_t *)(a1 + 84) & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc,
        (hkMemoryAllocator::Self *)(a1 + 76),
        16,
        v317);
      v46 = *(uint32_t *)(a1 + 80);
    }
    v47 = *(uint32_t *)(a1 + 76);
    *(uint32_t *)(a1 + 80) = v46 + 1;
    v48 = (uint32_t *)(16 * v46 + v47);
    (*(void ( **)(unsigned int *, uint32_t *))(*v413 + 8))(&v426, v413);
    v49 = (unsigned int)(uintptr_t)v427;
    *v48 = v426;
    v48[1] = v49;
    v48[2] = *(uint32_t *)(a1 + 68);
    v50 = -1;
    if ( v442 == 0 )
    {
      v50 = *(uint32_t *)(a1 + 48);
      *(uint32_t *)(a1 + 48) = v50 + 1;
    }
    v48[3] = v50;
    v51 = v444 + 7;
    v419 = (v444 + 7) >> 3;
    v52 = *(uint32_t *)(a1 + 68);
    v53 = v52 + v419;
    v54 = *(uint32_t *)(a1 + 72) & 0x3FFFFFFF;
    if ( v52 + v419 <= v54 )
    {
      v387 = (hkOArchive::Self *)v444;
    }
    else
    {
      v55 = 2 * v54;
      if ( v55 < v53 )
        v55 = v52 + v419;
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v428,
        (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
        (int *)(a1 + 64),
        v55,
        1);
      v53 = *(uint32_t *)(a1 + 68) + v419;
      v387 = (hkOArchive::Self *)v444;
      v51 = v444 + 7;
    }
    v56 = (char **)(*(uint32_t *)(a1 + 64) + v52);
    *(uint32_t *)(a1 + 68) = v53;
    v57 = v56;
    v58 = v51 & 0xFFFFFFF8;
    v59 = v387;
    if ( (int)(v51 & 0xFFFFFFF8) > (v445 & 0x3FFFFFFF) )
    {
      v60 = 2 * (v445 & 0x3FFFFFFF);
      if ( v58 >= v60 )
        v60 = v58;
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v428,
        (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
        (int *)&v443,
        v60,
        1);
      v59 = (hkOArchive::Self *)v444;
    }
    if ( v58 - (int)(uintptr_t)v59 > 0 )
      memset((char *)v59 + (uint32_t)(uintptr_t)v443, 0, v58 - (uint32_t)(uintptr_t)v59);
    v61 = 0;
    v444 = v58;
    for ( kk = v57; (int)v61 < v444; *v62 = v420 )
    {
      v62 = (uint8_t *)(kk);
      kk = (char **)((char *)kk + 1);
      v420 = LOBYTE(v443[v61 / 4])
           | (HIBYTE(v443[v61 / 4 + 1]) << 7)
           | (BYTE2(v443[v61 / 4 + 1]) << 6)
           | (32 * BYTE1(v443[v61 / 4 + 1]))
           | (8 * HIBYTE(v443[v61 / 4]))
           | (16 * LOBYTE(v443[v61 / 4 + 1]))
           | (4 * BYTE2(v443[v61 / 4]))
           | (2 * BYTE1(v443[v61 / 4]));
      v61 += 8;
    }
    if ( (v445 & 0x3FFFFFFF) < (int)(uintptr_t)v387 )
    {
      v63 = 2 * (v445 & 0x3FFFFFFF);
      if ( (int)(uintptr_t)v387 >= v63 )
        v63 = (int)(uintptr_t)v387;
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v428,
        (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
        (int *)&v443,
        v63,
        1);
    }
    v444 = (signed int)(uintptr_t)v387;
    G4_VCALL<void>(v413, 12);
    for ( mm = G4_VCALL<int>(v413, 24);
          G4_VCALL<int>(v413, 28, mm) != 0;
          mm = G4_VCALL<int>(v413, 32, mm) )
    {
      (*(void ( **)(int *))(*v413 + 40))(&v435);
      Type = (char **)hkDataObject_Value::getType((hkDataObject_Value::Self *)&v435);
      if ( *(uint32_t *)hkTypeManager::Type::findTerminal((hkTypeManager::Type::Self *)Type) != 6 )
        continue;
      v65 = (int)(uintptr_t)*Type;
      if ( *Type == (char *)((uint8_t *)&loc_6 + 1) )
      {
        v66 = (hkTypeManager::Type::Self *)G4_VCALL<int>(v435, 56, v436);
        if ( v66 != nullptr )
        {
          v89 = *((uint32_t *)v66 + 1);
          ++*((uint32_t *)v66 + 2);
          v90 = v89;
          LOWORD(v89) = 0;
          v380 = v66;
          *((uint32_t *)v66 + 1) = v89 | (uint16_t)(v90 + 1);
          (*(void ( **)(unsigned int *))(*(uint32_t *)v66 + 8))(&v426);
          v408 = (char **)v426;
          v389 = v427;
          v66 = v380;
        }
        else
        {
          v389 = nullptr;
          v408 = nullptr;
        }
        v91 = v438;
        if ( v438 == (v439 & 0x3FFFFFFF) )
        {
          v382 = v66;
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc,
            (hkMemoryAllocator::Self *)&v437,
            12,
            v311);
          v91 = v438;
          v66 = v382;
        }
        v438 = v91 + 1;
        v92 = (char ***)(v437 + 12 * v91);
        *v92 = v408;
        v92[1] = (char **)v389;
        v92[2] = nullptr;
        if ( v66 != nullptr )
        {
LABEL_90:
          v71 = *((uint32_t *)v66 + 1);
          LOWORD(v71) = 0;
          v72 = v71 | (uint16_t)(*((uint32_t *)v66 + 1) - 1);
          v73 = *((uint32_t *)v66 + 2);
          *((uint32_t *)v66 + 1) = v72;
          *((uint32_t *)v66 + 2) = v73 - 1;
          if ( v73 == 1 )
            G4_VCALL<void>(v66, 4);
          continue;
        }
      }
      else if ( (int)(uintptr_t)*Type > 7 )
      {
        if ( v65 <= 9 )
        {
          v83 = G4_VCALL<int>(v435, 44, v436);
          v434[0] = v83;
          if ( v83 != 0 )
          {
            v84 = *(uint32_t *)(v83 + 4);
            ++*(uint32_t *)(v83 + 8);
            v85 = v84;
            LOWORD(v84) = 0;
            *(uint32_t *)(v83 + 4) = v84 | (uint16_t)(v85 + 1);
          }
          sub_18883F0(&v437, 0);
          v66 = (hkTypeManager::Type::Self *)v434[0];
          if ( v434[0] != 0 )
            goto LABEL_90;
        }
      }
      else if ( v65 == 6 )
      {
        v66 = (hkTypeManager::Type::Self *)G4_VCALL<int>(v435, 56, v436);
        if ( v66 != nullptr )
        {
          v67 = *((uint32_t *)v66 + 1);
          ++*((uint32_t *)v66 + 2);
          v68 = v67;
          LOWORD(v67) = 0;
          v379 = v66;
          *((uint32_t *)v66 + 1) = v67 | (uint16_t)(v68 + 1);
          (*(void ( **)(unsigned int *))(*(uint32_t *)v66 + 8))(&v426);
          v405 = (char **)v426;
          v388 = v427;
          v66 = v379;
        }
        else
        {
          v388 = nullptr;
          v405 = nullptr;
        }
        v69 = v438;
        if ( v438 == (v439 & 0x3FFFFFFF) )
        {
          v381 = v66;
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc,
            (hkMemoryAllocator::Self *)&v437,
            12,
            v311);
          v69 = v438;
          v66 = v381;
        }
        v438 = v69 + 1;
        v70 = (char ***)(v437 + 12 * v69);
        *v70 = v405;
        v70[1] = (char **)v388;
        v70[2] = (char **)(&dword_0 + 1);
        if ( v66 != nullptr )
          goto LABEL_90;
      }
    }
    v444 = 0;
    if ( v445 >= 0 )
      (*(void ( **)(uint32_t *, uint32_t *, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
        (uint32_t *)(uintptr_t)(hkContainerTempAllocator::s_alloc),
        v443,
        v445 & 0x3FFFFFFF);
    v443 = nullptr;
    v445 = 0x80000000;
    v86 = v413[1];
    LOWORD(v86) = 0;
    v413[1] = v86 | (uint16_t)(v413[1] - 1);
    v421 = (hkDataObject_Value::Self *)v413[2];
    v413[2] = (uint32_t)(uintptr_t)((char *)v421 - 1);
    if ( v421 == (hkDataObject_Value::Self *)((char *)&dword_0 + 1) )
      G4_VCALL<void>(v413, 4);
    v24 = v429;
    if ( v429 != nullptr )
    {
      v87 = v429[1];
      v88 = v429[2];
      LOWORD(v87) = 0;
      v429[1] = v87 | (uint16_t)(v429[1] - 1);
      v24[2] = v88 - 1;
      if ( v88 == 1 )
        goto LABEL_28;
    }
LABEL_29:
    v8 = v438;
  }
  while ( v438 != 0 );
LABEL_30:
  result = v439;
  v438 = 0;
  if ( v439 >= 0 )
    return (*(int ( **)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
             (uint32_t *)(uintptr_t)(hkContainerTempAllocator::s_alloc),
             v437,
             12 * v439);
  return result;
}

// Binary VA: 0x188f400 (source: lib_batch_3.json)
int sub_188F400(int *a1, int a2, char a3, int a4, hkMemoryAllocator::Self *a5)
{
  int result;
  int v6;
  int v7; // [esp+Ch] [ebp-10h]

  if ( a3 != 0 )
  {
    result = *a1;
    if ( *a1 == 0 )
    {
      v6 = *((uint32_t *)a5 + 1);
      if ( v6 == (*((uint32_t *)a5 + 2) & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a5, 4, v7);
        v6 = *((uint32_t *)a5 + 1);
      }
      result = *(uint32_t *)a5;
      *(uint32_t *)(*(uint32_t *)a5 + 4 * v6) = (uint32_t)(uintptr_t)(a1);
      ++*((uint32_t *)a5 + 1);
    }
  }
  return result;
}

// Binary VA: 0x1556fa0 (source: lib_batch_2.json)
int sub_1556FA0(int a1, int a2, float a3)
{
  int v4;
  int result;
  int v6;
  int v7;
  float v8; // xmm0_4
  int v9;
  int v10;
  int v11;
  float v12; // xmm0_4
  int v13;
  int v14;
  int v15;
  float v16; // xmm0_4
  int v17;
  int v18;
  int v19;
  float v20; // xmm0_4
  int v21;
  int v22;
  int v23;
  float v24; // xmm0_4
  int v25;
  int v26;
  int v27;
  float v28; // xmm0_4
  int v29;
  int v30;
  int v31;
  float v32; // xmm0_4
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  float v38; // xmm0_4
  int v40; // [esp+Ch] [ebp-50h]
  int v41;
  int v42;
  int v43;
  int v44; // [esp+1Ch] [ebp-40h]
  int v45;
  int v46;
  int v47;
  int v48; // [esp+2Ch] [ebp-30h]
  int v49;
  int v50;
  int v51;
  int v52; // [esp+3Ch] [ebp-20h]
  int v53;
  int v54;
  int v55;

  v42 = 4 * a2;
  v4 = a1 + 4 * a2;
  *(uint32_t *)(v4 + 48) = 0;
  v45 = 0;
  *(float *)v4 = a3 * *(float *)v4;
  result = *(uint32_t *)(a1 + 100);
  if ( result > 0 )
  {
    result = a1;
    v6 = 0;
    do
    {
      v46 = 0;
      v51 = *(uint32_t *)(*(uint32_t *)(result + 96) + 4 * v6);
      v7 = v42 + v51;
      v8 = a3 * *(float *)(v42 + v51);
      *(uint32_t *)(v7 + 48) = 0;
      *(float *)v7 = v8;
      if ( *(int *)(v51 + 100) > 0 )
      {
        v9 = v51;
        v10 = 0;
        do
        {
          v47 = 0;
          v52 = *(uint32_t *)(*(uint32_t *)(v9 + 96) + 4 * v10);
          v11 = v42 + v52;
          v12 = a3 * *(float *)(v42 + v52);
          *(uint32_t *)(v11 + 48) = 0;
          *(float *)v11 = v12;
          if ( *(int *)(v52 + 100) > 0 )
          {
            v13 = v52;
            v14 = 0;
            do
            {
              v48 = 0;
              v53 = *(uint32_t *)(*(uint32_t *)(v13 + 96) + 4 * v14);
              v15 = v42 + v53;
              v16 = a3 * *(float *)(v42 + v53);
              *(uint32_t *)(v15 + 48) = 0;
              *(float *)v15 = v16;
              if ( *(int *)(v53 + 100) > 0 )
              {
                v17 = v53;
                v18 = 0;
                do
                {
                  v49 = 0;
                  v54 = *(uint32_t *)(*(uint32_t *)(v17 + 96) + 4 * v18);
                  v19 = v42 + v54;
                  v20 = a3 * *(float *)(v42 + v54);
                  *(uint32_t *)(v19 + 48) = 0;
                  *(float *)v19 = v20;
                  if ( *(int *)(v54 + 100) > 0 )
                  {
                    v21 = v54;
                    v22 = 0;
                    do
                    {
                      v50 = 0;
                      v55 = *(uint32_t *)(*(uint32_t *)(v21 + 96) + 4 * v22);
                      v23 = v42 + v55;
                      v24 = a3 * *(float *)(v42 + v55);
                      *(uint32_t *)(v23 + 48) = 0;
                      *(float *)v23 = v24;
                      if ( *(int *)(v55 + 100) > 0 )
                      {
                        v25 = v55;
                        v26 = 0;
                        do
                        {
                          v43 = 0;
                          v44 = *(uint32_t *)(*(uint32_t *)(v25 + 96) + 4 * v26);
                          v27 = v42 + v44;
                          v28 = a3 * *(float *)(v42 + v44);
                          *(uint32_t *)(v27 + 48) = 0;
                          *(float *)v27 = v28;
                          if ( *(int *)(v44 + 100) > 0 )
                          {
                            v29 = v44;
                            v30 = 0;
                            do
                            {
                              v40 = 0;
                              v41 = *(uint32_t *)(*(uint32_t *)(v29 + 96) + 4 * v30);
                              v31 = v42 + v41;
                              v32 = a3 * *(float *)(v42 + v41);
                              *(uint32_t *)(v31 + 48) = 0;
                              *(float *)v31 = v32;
                              if ( *(int *)(v41 + 100) > 0 )
                              {
                                v33 = v41;
                                v34 = 0;
                                do
                                {
                                  v35 = 0;
                                  v36 = *(uint32_t *)(*(uint32_t *)(v33 + 96) + 4 * v34);
                                  v37 = v36 + v42;
                                  v38 = a3 * *(float *)(v36 + v42);
                                  *(uint32_t *)(v37 + 48) = 0;
                                  *(float *)v37 = v38;
                                  if ( *(int *)(v36 + 100) > 0 )
                                  {
                                    do
                                    {
                                      ++v35;
                                      sub_1556FA0();
                                    }
                                    while ( v35 < *(uint32_t *)(v36 + 100) );
                                  }
                                  v33 = v41;
                                  v34 = ++v40;
                                }
                                while ( v40 < *(uint32_t *)(v41 + 100) );
                              }
                              v29 = v44;
                              v30 = ++v43;
                            }
                            while ( v43 < *(uint32_t *)(v44 + 100) );
                          }
                          v25 = v55;
                          v26 = ++v50;
                        }
                        while ( v50 < *(uint32_t *)(v55 + 100) );
                      }
                      v21 = v54;
                      v22 = ++v49;
                    }
                    while ( v49 < *(uint32_t *)(v54 + 100) );
                  }
                  v17 = v53;
                  v18 = ++v48;
                }
                while ( v48 < *(uint32_t *)(v53 + 100) );
              }
              v13 = v52;
              v14 = ++v47;
            }
            while ( v47 < *(uint32_t *)(v52 + 100) );
          }
          v9 = v51;
          v10 = ++v46;
        }
        while ( v46 < *(uint32_t *)(v51 + 100) );
      }
      result = a1;
      v6 = ++v45;
    }
    while ( *(uint32_t *)(a1 + 100) > v45 );
  }
  return result;
}

// Binary VA: 0x1891740 (source: lib_batch_3.json)
int sub_1891740(unsigned int a1,
 uint8_t *a2,
 hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *a3,
 int a4)
{
  hkClass::Self *Parent;
  int v5;
  hkClass::Self *v6;
  int v7;
  int v8;
  int v9;
  hkClass::Self *v10;
  hkClassMember::Self *v11;
  int NumDeclaredInterfaces;
  int DeclaredMember;
  int v14;
  hkClassMember::Self *v15;
  char *v16;
  int v17;
  int result;
  int i;
  hkClassMember::Self *Member;
  unsigned int StructClass;
  int v22;
  int v23;
  int v24;
  int v25;
  hkClassMember::Self *v26;
  hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *v28;
  hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *v29;
  hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *j;
  hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *v31;
  hkClass::Self *v32;
  hkClass::Self *v33;
  hkClass::Self *NumMembers;
  uint8_t v35[4];
  void *v36; // [esp+1Ch] [ebp-28h] BYREF
  int v37;
  int v38;
  hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> **v39;

  Parent = (hkClass::Self *)a1;
  v39 = &a3;
  v28 = a3;
  v5 = a4;
  v23 = a4;
  hkMapBase_unsigned_long_unsigned_l_393416::insert(
    a3,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
    a1,
    0);
  if ( v5 != 0 )
  {
    NumMembers = (hkClass::Self *)hkClass::getNumMembers(Parent);
    if ( (int)(uintptr_t)NumMembers > 0 )
    {
      for ( i = 0; (hkClass::Self *)i != NumMembers; ++i )
      {
        Member = (hkClassMember::Self *)hkClass::getMember(Parent, i);
        if ( *((uint32_t *)Member + 1) != 0 )
        {
          v26 = Member;
          StructClass = hkClassMember::getStructClass(Member);
          if ( (signed int)hkMapBase_unsigned_long_unsigned_l_393416::findKey(
                             v28,
                             StructClass) > *((uint32_t *)v28 + 2) )
          {
            hkClassMember::getStructClass(v26);
            sub_1891740(v28, v23);
          }
        }
      }
    }
  }
  v36 = nullptr;
  v37 = 0;
  v38 = 0x80000000;
  hkArrayUtil::reserve((hkArrayUtil::Self *)v35, (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc, (int *)&v36, 16, 4);
  for ( ; Parent != nullptr; Parent = (hkClass::Self *)hkClass::getParent(Parent) )
  {
    v6 = (hkClass::Self *)v37;
    v7 = v37 + 1;
    if ( v37 + 1 > (v38 & 0x3FFFFFFF) )
    {
      v8 = 2 * (v38 & 0x3FFFFFFF);
      if ( v8 < v7 )
        v8 = v37 + 1;
      v32 = (hkClass::Self *)v37;
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v35,
        (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
        (int *)&v36,
        v8,
        4);
      v6 = v32;
    }
    hkMemUtil::memMove((hkMemUtil::Self *)((char *)v36 + 4), (char *)v36, 4 * (uint32_t)(uintptr_t)v6);
    *(uint32_t *)v36 = (uint32_t)(uintptr_t)(Parent);
    v37 = v7;
  }
  v9 = 0;
  v24 = 0;
  v25 = 1;
  v22 = *a2;
  if ( v37 > 0 )
  {
    while ( 1 )
    {
      v29 = nullptr;
      v10 = *((hkClass::Self **)v36 + v24);
      v11 = (hkClassMember::Self *)v25;
      v33 = v10;
      while ( 1 )
      {
        v25 = (int)(uintptr_t)v11;
        NumDeclaredInterfaces = hkClass::getNumDeclaredInterfaces(v10);
        v11 = (hkClassMember::Self *)v25;
        if ( (int)(uintptr_t)v29 >= NumDeclaredInterfaces )
          break;
        if ( v9 % v22 != 0 )
          v9 = v22 + v9 - v9 % v22;
        v9 += v22;
        v10 = v33;
        if ( v25 < v22 )
          v11 = (hkClassMember::Self *)v22;
        v29 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)((char *)v29 + 1);
      }
      for ( j = nullptr;
            (int)(uintptr_t)j < hkClass::getNumDeclaredMembers(v33);
            j = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)((char *)j + 1) )
      {
        DeclaredMember = hkClass::getDeclaredMember(v33, (int)(uintptr_t)j);
        if ( v9 == 0 && v24 != 0 )
          v9 = a2[3] == 0;
        v14 = sub_1891480(DeclaredMember, *(uint8_t *)(DeclaredMember + 12), *a2);
        v15 = (hkClassMember::Self *)v25;
        if ( v25 < v14 )
          v15 = (hkClassMember::Self *)v14;
        v25 = (int)(uintptr_t)v15;
        if ( v9 % v14 != 0 )
          v9 = v14 + v9 - v9 % v14;
        if ( v9 != *(uint16_t *)(DeclaredMember + 18) )
          sub_1891470(DeclaredMember, v9);
        v9 += sub_18915E0((uint8_t *)DeclaredMember, a2, *(uint8_t *)(DeclaredMember + 12));
      }
      v16 = (char *)v9;
      if ( v9 % v25 != 0 )
        v16 = (char *)(v25 + v9 - v9 % v25);
      v17 = 1;
      if ( v16 != nullptr )
        v17 = (int)(uintptr_t)v16;
      v31 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v17;
      if ( v17 != hkClass::getObjectSize(v33) )
        hkClass::setObjectSize(v33, (int)(uintptr_t)v31);
      if ( a2[2] != 0 )
        v16 = (char *)v9;
      if ( v37 <= ++v24 )
        break;
      v9 = (int)(uintptr_t)v16;
    }
  }
  result = v38;
  v37 = 0;
  if ( v38 >= 0 )
    return (*(int ( **)(uint32_t *, void *, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
             (uint32_t *)(uintptr_t)(hkContainerTempAllocator::s_alloc),
             v36,
             4 * v38);
  return result;
}

// Binary VA: 0x1557e90 (source: lib_batch_2.json)
int sub_1557E90(uint32_t *a1, int a2, float a3, int a4, int a5)
{
  int result;
  const char *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int16_t v13; // si
  int address;
  const char *v15;
  int v16;
  int v17;
  int v18;
  int v19; // [esp+1Ch] [ebp-30h]
  int i;
  int v22;

  result = a4;
  if ( a4 > 11 )
    result = 11;
  v22 = result;
  if ( *(int *)(a2 + 100) > 0 )
  {
    v18 = 0;
    for ( i = 0; result > i; ++i )
    {
      v19 = *(uint32_t *)(*(uint32_t *)(a2 + 96) + 4 * i);
      v7 = *(const char **)(v19 + 120);
      v8 = a1[25];
      if ( v8 > v18 )
      {
        v16 = 4 * v18;
        if ( hkString::strCmp(*(hkString::Self **)(*(uint32_t *)(a1[24] + 4 * v18) + 120), *(const char **)(v19 + 120), v15) == 0 )
        {
          v9 = v18;
          goto LABEL_10;
        }
        v8 = a1[25];
      }
      if ( v8 <= 0 )
      {
LABEL_13:
        v13 = *(uint16_t *)(v19 + 132);
        address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        v17 = (*(int ( **)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                *(uint32_t *)(*(uint32_t *)address + 44),
                136);
        hkMonitorStreamAnalyzer::Node::Construct(v17, a1, *(uint32_t *)(v19 + 120), v13);
        v10 = v17;
        goto LABEL_11;
      }
      v9 = 0;
      while ( 1 )
      {
        v16 = 4 * v9;
        if ( hkString::strCmp(*(hkString::Self **)(*(uint32_t *)(a1[24] + 4 * v9) + 120), v7, v15) == 0 )
          break;
        if ( ++v9 >= a1[25] )
          goto LABEL_13;
      }
LABEL_10:
      v18 = v9;
      v10 = *(uint32_t *)(a1[24] + v16);
LABEL_11:
      v11 = v19 + 4 * a5;
      v12 = v10 + 4 * v22;
      *(float *)v12 = (float)(*(float *)v11 * (float)(1.0 - a3)) + *(float *)v12;
      *(uint32_t *)(v12 + 48) = *(uint32_t *)(v11 + 48);
      sub_1557E90(v22, a5);
      result = *(uint32_t *)(a2 + 100);
      v18 += result - 1 > v18;
    }
  }
  return result;
}

// Binary VA: 0x1557db0 (source: lib_batch_2.json)
int sub_1557DB0(uint32_t *a1, uint32_t *a2, char *a3, int16_t a4, char a5)
{
  const char *v6;
  int v7;
  int v8;
  hkString::Self *v9;
  int address;
  int v11;
  const char *v13;

  v6 = a3;
  if ( *a3 == 47 )
  {
    v6 = a3 + 1;
    a2 = a1;
  }
  if ( a5 == 0 || a2 == nullptr || v6 == nullptr || (v7 = a2[25]) <= 0 )
  {
LABEL_12:
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v11 = (*(int ( **)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
            *(uint32_t *)(*(uint32_t *)address + 44),
            136);
    hkMonitorStreamAnalyzer::Node::Construct(v11, a2, (int)(uintptr_t)v6, a4);
    return v11;
  }
  v8 = 0;
  while ( 1 )
  {
    v9 = *(hkString::Self **)(*(uint32_t *)(a2[24] + 4 * v8) + 120);
    if ( v9 != nullptr )
      break;
LABEL_11:
    if ( ++v8 >= v7 )
      goto LABEL_12;
  }
  if ( hkString::strCmp(v9, v6, v13) != 0 )
  {
    v7 = a2[25];
    goto LABEL_11;
  }
  return *(uint32_t *)(a2[24] + 4 * v8);
}

// Binary VA: 0x15576d0 (source: lib_batch_2.json)
int sub_15576D0(uint32_t *a1, double *a2, double a3)
{
  int v5;
  int v6;
  int v7;
  double v8; // xmm1_8
  double v9; // xmm0_8
  int v10;
  int v11;
  int v12;
  double v13; // xmm1_8
  double v14; // xmm0_8
  int v15;
  int v16;
  int v17;
  double v18; // xmm1_8
  double v19; // xmm0_8
  int v20;
  int v21;
  int v22;
  double v23; // xmm1_8
  double v24; // xmm0_8
  int v25;
  int v26;
  int v27;
  double v28; // xmm1_8
  double v29; // xmm0_8
  int v30;
  int v31;
  int v32;
  double v33; // xmm1_8
  double v34; // xmm0_8
  int v35;
  int v36;
  double v37; // xmm0_8
  double v38; // xmm1_8
  int v39;
  int v40;
  double v41; // xmm0_8
  double v42; // xmm1_8
  int i;
  int v44;
  double v45; // xmm1_8
  double v46; // xmm0_8
  int v48;
  int v49;
  int v50;
  int v51; // [esp+1Ch] [ebp-40h]
  int v52;
  int v53;
  int v54;
  int v55; // [esp+2Ch] [ebp-30h]
  int v56;
  int v57;
  int v58;
  int v59; // [esp+3Ch] [ebp-20h]
  int v60;
  int v61;
  int v62;

  if ( (int)a1[1] > 0 )
  {
    v57 = 0;
    v5 = 0;
    do
    {
      v6 = 4 * v5;
      v7 = *(uint32_t *)(*a1 + 4 * v5);
      v52 = v7;
      if ( *(uint16_t *)(v7 + 132) != 2 )
      {
        v8 = *(double *)(v7 + 108);
        v9 = *a2;
        if ( a3 > v8 && v9 - v8 > a3 )
          return 1;
        *a2 = fmax(v9, v8);
        v52 = *(uint32_t *)(*a1 + v6);
      }
      if ( *(int *)(v52 + 100) > 0 )
      {
        v58 = 0;
        v10 = 0;
        do
        {
          v11 = 4 * v10;
          v12 = *(uint32_t *)(*(uint32_t *)(v52 + 96) + 4 * v10);
          v53 = v12;
          if ( *(uint16_t *)(v12 + 132) != 2 )
          {
            v13 = *(double *)(v12 + 108);
            v14 = *a2;
            if ( a3 > v13 && v14 - v13 > a3 )
              return 1;
            *a2 = fmax(v14, v13);
            v53 = *(uint32_t *)(*(uint32_t *)(v52 + 96) + v11);
          }
          if ( *(int *)(v53 + 100) > 0 )
          {
            v59 = 0;
            v15 = 0;
            do
            {
              v16 = 4 * v15;
              v17 = *(uint32_t *)(*(uint32_t *)(v53 + 96) + 4 * v15);
              v54 = v17;
              if ( *(uint16_t *)(v17 + 132) != 2 )
              {
                v18 = *(double *)(v17 + 108);
                v19 = *a2;
                if ( a3 > v18 && v19 - v18 > a3 )
                  return 1;
                *a2 = fmax(v19, v18);
                v54 = *(uint32_t *)(*(uint32_t *)(v53 + 96) + v16);
              }
              if ( *(int *)(v54 + 100) > 0 )
              {
                v60 = 0;
                v20 = 0;
                do
                {
                  v21 = 4 * v20;
                  v22 = *(uint32_t *)(*(uint32_t *)(v54 + 96) + 4 * v20);
                  v55 = v22;
                  if ( *(uint16_t *)(v22 + 132) != 2 )
                  {
                    v23 = *(double *)(v22 + 108);
                    v24 = *a2;
                    if ( a3 > v23 && v24 - v23 > a3 )
                      return 1;
                    *a2 = fmax(v24, v23);
                    v55 = *(uint32_t *)(*(uint32_t *)(v54 + 96) + v21);
                  }
                  if ( *(int *)(v55 + 100) > 0 )
                  {
                    v61 = 0;
                    v25 = 0;
                    do
                    {
                      v26 = 4 * v25;
                      v27 = *(uint32_t *)(*(uint32_t *)(v55 + 96) + 4 * v25);
                      v56 = v27;
                      if ( *(uint16_t *)(v27 + 132) != 2 )
                      {
                        v28 = *(double *)(v27 + 108);
                        v29 = *a2;
                        if ( a3 > v28 && v29 - v28 > a3 )
                          return 1;
                        *a2 = fmax(v29, v28);
                        v56 = *(uint32_t *)(*(uint32_t *)(v55 + 96) + v26);
                      }
                      v62 = 0;
                      if ( *(int *)(v56 + 100) > 0 )
                      {
                        v30 = 0;
                        do
                        {
                          v31 = 4 * v30;
                          v32 = *(uint32_t *)(*(uint32_t *)(v56 + 96) + 4 * v30);
                          v50 = v32;
                          if ( *(uint16_t *)(v32 + 132) != 2 )
                          {
                            v33 = *(double *)(v32 + 108);
                            v34 = *a2;
                            if ( a3 > v33 && v34 - v33 > a3 )
                              return 1;
                            *a2 = fmax(v34, v33);
                            v50 = *(uint32_t *)(*(uint32_t *)(v56 + 96) + v31);
                          }
                          if ( *(int *)(v50 + 100) > 0 )
                          {
                            v51 = 0;
                            v35 = 0;
                            do
                            {
                              v36 = *(uint32_t *)(*(uint32_t *)(v50 + 96) + 4 * v35);
                              v48 = v36;
                              if ( *(uint16_t *)(v36 + 132) != 2 )
                              {
                                v37 = *(double *)(v36 + 108);
                                v38 = *a2;
                                if ( a3 > v37 && v38 - v37 > a3 )
                                  return 1;
                                *a2 = fmax(v38, v37);
                                v36 = *(uint32_t *)(*(uint32_t *)(v50 + 96) + 4 * v35);
                                v48 = v36;
                              }
                              v49 = 0;
                              v39 = 0;
                              if ( *(int *)(v36 + 100) > 0 )
                              {
                                do
                                {
                                  v40 = *(uint32_t *)(*(uint32_t *)(v48 + 96) + 4 * v39);
                                  if ( *(uint16_t *)(v40 + 132) != 2 )
                                  {
                                    v41 = *(double *)(v40 + 108);
                                    v42 = *a2;
                                    if ( a3 > v41 && v42 - v41 > a3 )
                                      return 1;
                                    *a2 = fmax(v42, v41);
                                    v40 = *(uint32_t *)(*(uint32_t *)(v48 + 96) + 4 * v39);
                                  }
                                  if ( *(int *)(v40 + 100) > 0 )
                                  {
                                    for ( i = 0; i < *(uint32_t *)(v40 + 100); ++i )
                                    {
                                      v44 = *(uint32_t *)(*(uint32_t *)(v40 + 96) + 4 * i);
                                      if ( *(uint16_t *)(v44 + 132) != 2 )
                                      {
                                        v45 = *(double *)(v44 + 108);
                                        v46 = *a2;
                                        if ( a3 > v45 && v46 - v45 > a3 )
                                          return 1;
                                        *a2 = fmax(v46, v45);
                                      }
                                      if ( (uint8_t)sub_15576D0() != 0 )
                                        return 1;
                                    }
                                  }
                                  v39 = ++v49;
                                }
                                while ( v49 < *(uint32_t *)(v48 + 100) );
                              }
                              v35 = ++v51;
                            }
                            while ( v51 < *(uint32_t *)(v50 + 100) );
                          }
                          v30 = ++v62;
                        }
                        while ( v62 < *(uint32_t *)(v56 + 100) );
                      }
                      v25 = ++v61;
                    }
                    while ( v61 < *(uint32_t *)(v55 + 100) );
                  }
                  v20 = ++v60;
                }
                while ( v60 < *(uint32_t *)(v54 + 100) );
              }
              v15 = ++v59;
            }
            while ( v59 < *(uint32_t *)(v53 + 100) );
          }
          v10 = ++v58;
        }
        while ( v58 < *(uint32_t *)(v52 + 100) );
      }
      v5 = ++v57;
    }
    while ( a1[1] > v57 );
  }
  return 0;
}

// Binary VA: 0x15572b0 (source: lib_batch_2.json)
int sub_15572B0(uint32_t *a1, double a2, double a3)
{
  int result;
  int v4;
  double v5; // xmm0_8
  int v6;
  double v7; // xmm0_8
  int v8;
  double v9; // xmm0_8
  int v10;
  double v11; // xmm0_8
  int v12;
  double v13; // xmm0_8
  int v14;
  double v15; // xmm0_8
  int v16;
  double v17; // xmm0_8
  int v18;
  int jj;
  int v20;
  int v21;
  double v22; // xmm0_8
  int kk;
  int v24;
  int v25;
  double v26; // xmm0_8
  int v28;
  int ii;
  int v30; // [esp+1Ch] [ebp-40h]
  int v31;
  int v32;
  int v33;
  int v34; // [esp+2Ch] [ebp-30h]
  int v35;
  int v36;
  int i;
  int j; // [esp+3Ch] [ebp-20h]
  int k;
  int m;
  int n;

  result = a1[1];
  v36 = 0;
  if ( result > 0 )
  {
    do
    {
      v4 = *(uint32_t *)(*a1 + 4 * v36);
      v31 = v4;
      if ( *(uint16_t *)(v4 + 132) != 2 )
      {
        v5 = *(double *)(v4 + 108);
        if ( a2 > v5 )
        {
          *(double *)(v4 + 108) = v5 + a3;
          v31 = *(uint32_t *)(*a1 + 4 * v36);
        }
      }
      for ( i = 0; i < *(uint32_t *)(v31 + 100); ++i )
      {
        v6 = *(uint32_t *)(*(uint32_t *)(v31 + 96) + 4 * i);
        v32 = v6;
        if ( *(uint16_t *)(v6 + 132) != 2 )
        {
          v7 = *(double *)(v6 + 108);
          if ( a2 > v7 )
          {
            *(double *)(v6 + 108) = v7 + a3;
            v32 = *(uint32_t *)(*(uint32_t *)(v31 + 96) + 4 * i);
          }
        }
        for ( j = 0; j < *(uint32_t *)(v32 + 100); ++j )
        {
          v8 = *(uint32_t *)(*(uint32_t *)(v32 + 96) + 4 * j);
          v33 = v8;
          if ( *(uint16_t *)(v8 + 132) != 2 )
          {
            v9 = *(double *)(v8 + 108);
            if ( a2 > v9 )
            {
              *(double *)(v8 + 108) = v9 + a3;
              v33 = *(uint32_t *)(*(uint32_t *)(v32 + 96) + 4 * j);
            }
          }
          for ( k = 0; k < *(uint32_t *)(v33 + 100); ++k )
          {
            v10 = *(uint32_t *)(*(uint32_t *)(v33 + 96) + 4 * k);
            v34 = v10;
            if ( *(uint16_t *)(v10 + 132) != 2 )
            {
              v11 = *(double *)(v10 + 108);
              if ( a2 > v11 )
              {
                *(double *)(v10 + 108) = v11 + a3;
                v34 = *(uint32_t *)(*(uint32_t *)(v33 + 96) + 4 * k);
              }
            }
            for ( m = 0; m < *(uint32_t *)(v34 + 100); ++m )
            {
              v12 = *(uint32_t *)(*(uint32_t *)(v34 + 96) + 4 * m);
              v35 = v12;
              if ( *(uint16_t *)(v12 + 132) != 2 )
              {
                v13 = *(double *)(v12 + 108);
                if ( a2 > v13 )
                {
                  *(double *)(v12 + 108) = v13 + a3;
                  v35 = *(uint32_t *)(*(uint32_t *)(v34 + 96) + 4 * m);
                }
              }
              for ( n = 0; n < *(uint32_t *)(v35 + 100); ++n )
              {
                v14 = *(uint32_t *)(*(uint32_t *)(v35 + 96) + 4 * n);
                v30 = v14;
                if ( *(uint16_t *)(v14 + 132) != 2 )
                {
                  v15 = *(double *)(v14 + 108);
                  if ( a2 > v15 )
                  {
                    *(double *)(v14 + 108) = v15 + a3;
                    v30 = *(uint32_t *)(*(uint32_t *)(v35 + 96) + 4 * n);
                  }
                }
                for ( ii = 0; ii < *(uint32_t *)(v30 + 100); ++ii )
                {
                  v16 = *(uint32_t *)(*(uint32_t *)(v30 + 96) + 4 * ii);
                  v28 = v16;
                  if ( *(uint16_t *)(v16 + 132) != 2 )
                  {
                    v17 = *(double *)(v16 + 108);
                    if ( a2 > v17 )
                    {
                      *(double *)(v16 + 108) = v17 + a3;
                      v28 = *(uint32_t *)(*(uint32_t *)(v30 + 96) + 4 * ii);
                    }
                  }
                  v18 = 0;
                  for ( jj = v28; v18 < *(uint32_t *)(v28 + 100); ++v18 )
                  {
                    v20 = 4 * v18;
                    v21 = *(uint32_t *)(*(uint32_t *)(jj + 96) + 4 * v18);
                    if ( *(uint16_t *)(v21 + 132) != 2 )
                    {
                      v22 = *(double *)(v21 + 108);
                      if ( a2 > v22 )
                      {
                        *(double *)(v21 + 108) = v22 + a3;
                        v21 = *(uint32_t *)(*(uint32_t *)(v28 + 96) + 4 * v18);
                      }
                    }
                    for ( kk = 0; kk < *(uint32_t *)(v21 + 100); ++kk )
                    {
                      v24 = 4 * kk;
                      v25 = *(uint32_t *)(*(uint32_t *)(v21 + 96) + 4 * kk);
                      if ( *(uint16_t *)(v25 + 132) != 2 )
                      {
                        v26 = *(double *)(v25 + 108);
                        if ( a2 > v26 )
                          *(double *)(v25 + 108) = v26 + a3;
                      }
                      sub_15572B0(v20, v24);
                    }
                    jj = v28;
                  }
                }
              }
            }
          }
        }
      }
      result = (int)(uintptr_t)a1;
      ++v36;
    }
    while ( a1[1] > v36 );
  }
  return result;
}

// Binary VA: 0x155acb0 (source: lib_batch_2.json)
hkMonitorStreamAnalyzer::Node::Self * sub_155ACB0(int a1,
 int a2,
 float a3,
 float a4,
 hkMemoryAllocator::Self *a5,
 int a6)
{
  hkMonitorStreamAnalyzer::Node::Self **v7;
  hkMonitorStreamAnalyzer::Node::Self *result;
  int v9;
  hkMonitorStreamAnalyzer::Node::Self *v10;
  int v11;
  double v12; // xmm3_8
  double v13; // xmm2_8
  double v14; // xmm0_8
  int v15;
  int v16;
  hkMonitorStreamAnalyzer::Node::Self *v17;
  int i;
  int v19;
  double v20; // xmm0_8
  float v21; // xmm7_4
  double v22; // xmm6_8
  float v23; // xmm7_4
  int v24;
  int v25; // [esp+Ch] [ebp-60h]
  int v26; // [esp+Ch] [ebp-60h]
  double v28;
  hkMonitorStreamAnalyzer::Node::Self *v29;
  hkMonitorStreamAnalyzer::Node::Self *v30;

  v7 = *(hkMonitorStreamAnalyzer::Node::Self ***)(a1 + 96);
  result = *v7;
  if ( *v7 != nullptr && *((uint16_t *)result + 66) == 2 )
  {
    v19 = 0;
    v9 = *(uint32_t *)(a1 + 100);
    while ( ++v19 < v9 )
    {
      result = v7[v19];
      if ( result == nullptr || *((uint16_t *)result + 66) != 2 )
        goto LABEL_4;
    }
    result = nullptr;
  }
  else
  {
    v9 = *(uint32_t *)(a1 + 100);
  }
LABEL_4:
  v10 = v7[v9 - 1];
  if ( v10 != nullptr )
  {
    v11 = v9 - 1;
    if ( *((uint16_t *)v10 + 66) == 2 )
    {
      for ( i = v11 - 1; i >= 0; --i )
      {
        v10 = v7[i];
        if ( v10 == nullptr )
          break;
        if ( *((uint16_t *)v10 + 66) != 2 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      if ( result != nullptr )
      {
        v12 = *(double *)((char *)result + 108);
        v28 = a3;
        v13 = v12 - a3;
        if ( a2 != 0 )
        {
          v14 = 0.0;
          if ( v13 > 0.0 )
          {
            v29 = v10;
            v15 = *((uint32_t *)a5 + 1);
            v16 = a2;
            v17 = result;
            do
            {
              v14 = v14 + a4;
              if ( (*((uint32_t *)a5 + 2) & 0x3FFFFFFF) == v15 )
              {
                hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a5, 4, v25);
                v15 = *((uint32_t *)a5 + 1);
              }
              *(uint32_t *)(*(uint32_t *)a5 + 4 * v15) = 0;
              v15 = *((uint32_t *)a5 + 1) + 1;
              --v16;
              *((uint32_t *)a5 + 1) = v15;
              if ( v16 == 0 )
              {
                v12 = *(double *)((char *)v17 + 108);
                v10 = v29;
                goto LABEL_23;
              }
            }
            while ( v13 > v14 );
            v12 = *(double *)((char *)v17 + 108);
            a2 = v16;
            v10 = v29;
          }
          v22 = *((float *)v10 + a6) + *(double *)((char *)v10 + 108);
          result = (hkMonitorStreamAnalyzer::Node::Self *)a1;
          *(double *)(a1 + 108) = v12;
          v23 = v22 - v28 + v28 - v12 + 1.0;
          *(float *)(a1 + 4 * a6) = v23;
          if ( v22 - v28 > v14 )
          {
            result = nullptr;
            do
            {
              result = getNodeAtSample((hkMonitorStreamAnalyzer::Node::Self *)a1, result, v28 + v14, a6);
              if ( result != nullptr )
              {
                v24 = *((uint32_t *)a5 + 1);
                if ( v24 == (*((uint32_t *)a5 + 2) & 0x3FFFFFFF) )
                {
                  v30 = result;
                  hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a5, 4, v26);
                  v24 = *((uint32_t *)a5 + 1);
                  result = v30;
                }
                *(uint32_t *)(*(uint32_t *)a5 + 4 * v24) = (uint32_t)(uintptr_t)(result);
                ++*((uint32_t *)a5 + 1);
              }
              --a2;
              v14 = v14 + a4;
            }
            while ( a2 != 0 && v22 - v28 > v14 );
          }
        }
        else
        {
LABEL_23:
          v20 = *((float *)v10 + a6) + *(double *)((char *)v10 + 108);
          *(double *)(a1 + 108) = v12;
          v21 = v20 - v28 + v28 - v12 + 1.0;
          *(float *)(a1 + 4 * a6) = v21;
          return (hkMonitorStreamAnalyzer::Node::Self *)a1;
        }
      }
    }
  }
  return result;
}

// Binary VA: 0x1558070 (source: lib_batch_2.json)
int sub_1558070(uint32_t *a1, int a2)
{
  int result;
  int v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  int v8;
  hkString::Self *v9;
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  int v20;
  int v21;
  int16_t v22; // dx
  const char *v23;
  hkString::Self *v24;
  int16_t v25;
  hkString::Self *v26;
  int v27;

  result = *(uint32_t *)(a2 + 100);
  v27 = 0;
  if ( result > 0 )
  {
    result = a2;
    do
    {
      v4 = *(uint32_t *)(*(uint32_t *)(result + 96) + 4 * v27);
      v24 = *(hkString::Self **)(v4 + 120);
      if ( (int)a1[25] <= 0 )
      {
LABEL_11:
        v25 = *(uint16_t *)(v4 + 132);
        v20 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
        v21 = G4_VCALL<int>(v20, 8, 136);
        v22 = v25;
        v26 = (hkString::Self *)v21;
        hkMonitorStreamAnalyzer::Node::Construct(v21, a1, *(uint32_t *)(v4 + 120), v22);
        v9 = v26;
      }
      else
      {
        v5 = a1;
        v6 = 0;
        v7 = v5;
        while ( hkString::strCmp(v24, *(const char **)(*(uint32_t *)(v7[24] + 4 * v6) + 120), v23) != 0 )
        {
          if ( ++v6 >= v7[25] )
          {
            a1 = v7;
            goto LABEL_11;
          }
        }
        v8 = 4 * v6;
        a1 = v7;
        v9 = *(hkString::Self **)(v7[24] + v8);
        if ( v9 == nullptr )
          goto LABEL_11;
      }
      *(float *)v9 = *(float *)v9 + *(float *)v4;
      v10 = *((float *)v9 + 1);
      *((uint32_t *)v9 + 12) += *(uint32_t *)(v4 + 48);
      *((float *)v9 + 1) = v10 + *(float *)(v4 + 4);
      v11 = *((float *)v9 + 2);
      *((uint32_t *)v9 + 13) += *(uint32_t *)(v4 + 52);
      *((float *)v9 + 2) = v11 + *(float *)(v4 + 8);
      v12 = *((float *)v9 + 3);
      *((uint32_t *)v9 + 14) += *(uint32_t *)(v4 + 56);
      *((float *)v9 + 3) = v12 + *(float *)(v4 + 12);
      v13 = *((float *)v9 + 4);
      *((uint32_t *)v9 + 15) += *(uint32_t *)(v4 + 60);
      *((float *)v9 + 4) = v13 + *(float *)(v4 + 16);
      v14 = *((float *)v9 + 5);
      *((uint32_t *)v9 + 16) += *(uint32_t *)(v4 + 64);
      *((float *)v9 + 5) = v14 + *(float *)(v4 + 20);
      *((uint32_t *)v9 + 17) += *(uint32_t *)(v4 + 68);
      *((float *)v9 + 6) = *((float *)v9 + 6) + *(float *)(v4 + 24);
      v15 = *((float *)v9 + 7);
      *((uint32_t *)v9 + 18) += *(uint32_t *)(v4 + 72);
      *((float *)v9 + 7) = v15 + *(float *)(v4 + 28);
      v16 = *((float *)v9 + 8);
      *((uint32_t *)v9 + 19) += *(uint32_t *)(v4 + 76);
      *((float *)v9 + 8) = v16 + *(float *)(v4 + 32);
      v17 = *((float *)v9 + 9);
      *((uint32_t *)v9 + 20) += *(uint32_t *)(v4 + 80);
      *((float *)v9 + 9) = v17 + *(float *)(v4 + 36);
      v18 = *((float *)v9 + 10);
      *((uint32_t *)v9 + 21) += *(uint32_t *)(v4 + 84);
      *((float *)v9 + 10) = v18 + *(float *)(v4 + 40);
      v19 = *((float *)v9 + 11);
      *((uint32_t *)v9 + 22) += *(uint32_t *)(v4 + 88);
      *((float *)v9 + 11) = v19 + *(float *)(v4 + 44);
      *((uint32_t *)v9 + 23) += *(uint32_t *)(v4 + 92);
      sub_1558070();
      result = a2;
      ++v27;
    }
    while ( *(uint32_t *)(a2 + 100) > v27 );
  }
  return result;
}

// Binary VA: 0x655b00 (source: game_core_batch_1.json)
void *sub_655B00()
{
  void *result;
  int v1;
  void *obj;

  if ( byte_20D4B60 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4B60) != 0 )
  {
    sub_7B3590(v1, &unk_20D4B80, obj);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4B60);
    __cxa_atexit((void (*)(void *))sub_7B7D00, &unk_20D4B80, &unk_20D1280);
  }
  result = nullptr;
  if ( byte_20D4B84 == 0 )
    return &unk_20D4B80;
  return result;
}

// Binary VA: 0x1556b80 (source: lib_batch_2.json)
int sub_1556B80(hkOstream::Self *a1, int a2, float a3, int a4)
{
  int i;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  int v9;
  bool v10; // zf
  unsigned int v11;
  unsigned int v12;
  int v13;
  unsigned int v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  int v22;
  unsigned int v23;
  unsigned int v24;
  int v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  unsigned int v29;
  unsigned int v30;
  int v31;
  unsigned int v32;
  unsigned int v33;
  int v34;
  unsigned int v35;
  unsigned int v36;
  int v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  unsigned int v46;
  float v47; // xmm1_4
  int v48;
  int result;
  unsigned int v51;
  int v52;
  int v53;
  uint8_t v54[284];

  if ( a4 != 0 )
  {
    if ( a4 > 1 )
    {
      for ( i = 1; i != a4; ++i )
        hkOstream::printf(a1, "\t");
    }
    v6 = *(uint32_t *)(a2 + 48);
    v7 = *(uint32_t *)(a2 + 52);
    v8 = v7;
    v9 = 2 - (v6 == 0);
    if ( v6 >= v7 )
      v8 = *(uint32_t *)(a2 + 48);
    v10 = v7 == 0;
    v11 = *(uint32_t *)(a2 + 56);
    if ( v10 )
    {
      v9 = v6 != 0;
      v8 = *(uint32_t *)(a2 + 48);
    }
    v12 = *(uint32_t *)(a2 + 56);
    v13 = v9 + 1;
    if ( v8 >= v11 )
      v12 = v8;
    if ( v11 == 0 )
    {
      v13 = v9;
      v12 = v8;
    }
    v14 = *(uint32_t *)(a2 + 60);
    v15 = v13 + 1;
    v16 = v14;
    if ( v12 >= v14 )
      v16 = v12;
    v10 = v14 == 0;
    v17 = *(uint32_t *)(a2 + 64);
    if ( v10 )
    {
      v15 = v13;
      v16 = v12;
    }
    v18 = *(uint32_t *)(a2 + 64);
    v19 = v15 + 1;
    if ( v16 >= v17 )
      v18 = v16;
    v10 = v17 == 0;
    v20 = *(uint32_t *)(a2 + 68);
    if ( v10 )
    {
      v19 = v15;
      v18 = v16;
    }
    v21 = *(uint32_t *)(a2 + 68);
    v22 = v19 + 1;
    if ( v18 >= v20 )
      v21 = v18;
    v10 = v20 == 0;
    v23 = *(uint32_t *)(a2 + 72);
    if ( v10 )
    {
      v22 = v19;
      v21 = v18;
    }
    v24 = *(uint32_t *)(a2 + 72);
    v25 = v22 + 1;
    if ( v21 >= v23 )
      v24 = v21;
    v10 = v23 == 0;
    v26 = *(uint32_t *)(a2 + 76);
    if ( v10 )
    {
      v25 = v22;
      v24 = v21;
    }
    v27 = *(uint32_t *)(a2 + 76);
    v28 = v25 + 1;
    if ( v24 >= v26 )
      v27 = v24;
    v10 = v26 == 0;
    v29 = *(uint32_t *)(a2 + 80);
    if ( v10 )
    {
      v28 = v25;
      v27 = v24;
    }
    v30 = *(uint32_t *)(a2 + 80);
    v31 = v28 + 1;
    if ( v27 >= v29 )
      v30 = v27;
    v10 = v29 == 0;
    v32 = *(uint32_t *)(a2 + 84);
    if ( v10 )
    {
      v31 = v28;
      v30 = v27;
    }
    v33 = *(uint32_t *)(a2 + 84);
    v34 = v31 + 1;
    if ( v30 >= v32 )
      v33 = v30;
    v10 = v32 == 0;
    v35 = *(uint32_t *)(a2 + 88);
    if ( v10 )
    {
      v34 = v31;
      v33 = v30;
    }
    v36 = *(uint32_t *)(a2 + 88);
    v37 = v34 + 1;
    if ( v33 >= v35 )
      v36 = v33;
    if ( v35 == 0 )
    {
      v37 = v34;
      v36 = v33;
    }
    v38 = *(uint32_t *)(a2 + 92);
    v39 = v38;
    if ( v36 >= v38 )
      v39 = v36;
    if ( v38 != 0 )
    {
      v36 = v39;
      ++v37;
    }
    v40 = v36;
    v51 = v36;
    v52 = v37;
    hkString::snprintf((hkString::Self *)v54, 0xC8u, "%s(%i)", *(const char **)(a2 + 120), v36);
    if ( v40 <= 1 )
    {
      hkString::snprintf((hkString::Self *)v54, 0xC8u, "%s", *(const char **)(a2 + 120));
    }
    else if ( a3 == 1.0 )
    {
      hkString::snprintf((hkString::Self *)v54, 0xC8u, "%s (%i)", *(const char **)(a2 + 120), v51);
    }
    else
    {
      hkString::snprintf(
        (hkString::Self *)v54,
        0xC8u,
        "%s (%4.1f)",
        *(const char **)(a2 + 120),
        (float)((float)((float)((float)HIWORD(v51) * 65536.0) + (float)(uint16_t)v51) * a3));
    }
    v41 = 3;
    hkOstream::printf(a1, "%-32s", v54);
    do
    {
      hkOstream::printf(a1, "\t");
      --v41;
    }
    while ( v41 != 0 );
    v42 = v52;
    if ( v52 != 0 )
    {
      v43 = a2;
      v53 = a2;
      v44 = 0;
      v45 = v42;
      while ( 1 )
      {
        v46 = *(uint32_t *)(v43 + 48);
        if ( v46 == 0 )
          goto LABEL_57;
        v47 = a3 * *(float *)v43;
        if ( v51 > v46 )
          v47 = v47
              * (float)((float)((float)((float)HIWORD(v51) * 65536.0) + (float)(uint16_t)v51)
                      / (float)((float)((float)HIWORD(v46) * 65536.0) + (float)(uint16_t)v46));
        if ( --v45 != 0 )
        {
          hkOstream::printf(a1, "% 12.3f: ", v47);
LABEL_57:
          ++v44;
          v43 += 4;
          if ( v44 == 12 )
            goto LABEL_63;
        }
        else
        {
          ++v44;
          hkOstream::printf(a1, "% 12.3f\n", v47);
          v43 += 4;
          if ( v44 == 12 )
          {
LABEL_63:
            a2 = v53;
            goto LABEL_64;
          }
        }
      }
    }
    hkOstream::printf(a1, "% 12.3f\n", 0, 0);
  }
LABEL_64:
  v48 = 0;
  result = *(uint32_t *)(a2 + 100);
  if ( result > 0 )
  {
    do
    {
      ++v48;
      result = sub_1556B80(a4 + 1);
    }
    while ( *(uint32_t *)(a2 + 100) > v48 );
  }
  return result;
}

// Binary VA: 0x155e270 (source: lib_batch_2.json)
int sub_155E270(hkOstream::Self *a1, unsigned int a2, int a3)
{
  int v4;
  int Iterator;
  int Value;
  int v7;
  char *v8;
  float v9; // xmm1_4
  char *i;
  int v11;
  int v12;
  float v13; // xmm0_4
  int v14;
  char *v15;
  int v16;
  float v17; // xmm1_4
  int v18;
  int v19;
  char *v20;
  float v21; // xmm0_4
  char *v22;
  int result;
  hkOstream::Self *v24;
  hkMonitorStreamAnalyzer::Node::Self *v25;
  int v26;
  int v27;
  int v28;
  hkMonitorStreamAnalyzer::Node::Self *v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  hkMonitorStreamAnalyzer::Node::Self *v35;
  int v36;
  int v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;
  unsigned int v42;
  unsigned int v43;
  unsigned int v44;
  unsigned int v45;
  unsigned int v46;
  unsigned int v47;
  unsigned int v48;
  unsigned int v49;
  unsigned int v50;
  unsigned int v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  unsigned int v56;
  unsigned int v57;
  unsigned int v58;
  unsigned int v59;
  unsigned int v60;
  unsigned int v61;
  int v62;
  unsigned int v63;
  unsigned int v64;
  unsigned int v65;
  unsigned int v66;
  unsigned int v67;
  unsigned int v68;
  unsigned int v69;
  unsigned int v70;
  unsigned int v71;
  unsigned int v72;
  unsigned int v73;
  unsigned int v74;
  int v75; // [esp-1Ch] [ebp-188h]
  float v77;
  int address;
  int v79;
  int v80;
  int v81;
  int v82;
  hkMonitorStreamAnalyzer::Node::Self *v83;
  hkMonitorStreamAnalyzer::Node::Self *v84;
  char *v85; // [esp+1Ch] [ebp-150h]
  char *v86;
  char *v87;
  char *v88;
  char *v89; // [esp+2Ch] [ebp-140h]
  char *v90; // [esp+2Ch] [ebp-140h]
  int v91;
  char *v92;
  char *v93;
  char *v94;
  int v95;
  hkMonitorStreamAnalyzer::Node::Self *v96;
  hkMonitorStreamAnalyzer::Node::Self *v97;
  int v98;
  int v99;
  bool v100; // [esp+3Fh] [ebp-12Dh] BYREF
  char v101[4];
  int v102;
  int v103;
  int v104; // [esp+4Ch] [ebp-120h]
  hkString::Self *v105;
  int v106;
  int *v107; // [esp+15Ch] [ebp-10h]

  v107 = &a3;
  v102 = 0;
  v103 = 0;
  v104 = 0x80000000;
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Construct(&v105);
  sub_15582A0(a2, (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)&v105, v75);
  if ( v106 > 0 )
  {
    v4 = 2 * (v104 & 0x3FFFFFFF);
    if ( v4 < v106 )
      v4 = v106;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v101, (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc, &v102, v4, 4);
  }
  Iterator = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getIterator((hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)&v105);
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::isValid(&v100, (int)(uintptr_t)&v105, Iterator);
  while ( v100 )
  {
    Value = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getValue(&v105, Iterator);
    *(uint32_t *)(v102 + 4 * v103++) = Value;
    Iterator = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getNext(&v105, Iterator);
    hkCachedHashMap_hkStringMapOperations_hk_b9db0c::isValid(&v100, (int)(uintptr_t)&v105, Iterator);
  }
  v95 = v102;
  if ( v103 <= 1 )
    goto LABEL_40;
  v85 = nullptr;
  v80 = v103 - 1;
  v7 = v103 - 1;
  v8 = nullptr;
  while ( 2 )
  {
    v9 = *(float *)(*(uint32_t *)(v95 + 4 * ((int)(uintptr_t)&v8[v7] >> 1)) + 4);
    v89 = *(char **)(v95 + 4 * ((int)(uintptr_t)&v8[v7] >> 1));
    v86 = v8 + 1;
    for ( i = v8 + 1; ; ++i )
    {
      v88 = i - 1;
      if ( v9 > *(float *)(*(uint32_t *)(v95 + 4 * (uint32_t)(uintptr_t)i - 4) + 4) )
        continue;
      v91 = v95 + 4 * v7;
      v11 = *(uint32_t *)v91;
      v12 = v91 - 4;
      if ( *(float *)(*(uint32_t *)v91 + 4) > v9 )
      {
        do
        {
          v11 = *(uint32_t *)v12;
          --v7;
          v13 = *(float *)(*(uint32_t *)v12 + 4);
          v14 = v12;
          v12 -= 4;
        }
        while ( v13 > v9 );
        v91 = v14;
      }
      if ( v7 < (int)(uintptr_t)v88 )
        break;
      if ( (char *)v7 != v88 )
      {
        *(uint32_t *)v91 = *(uint32_t *)(v95 + 4 * (uint32_t)(uintptr_t)i - 4);
        *(uint32_t *)(v95 + 4 * (uint32_t)(uintptr_t)i - 4) = v11;
      }
      --v7;
      v88 = i;
      if ( v7 < (int)(uintptr_t)i )
        break;
      v9 = *((float *)v89 + 1);
    }
    v82 = v7;
    if ( (int)(uintptr_t)v85 >= v7 )
      goto LABEL_17;
    v15 = v86;
    while ( 2 )
    {
      v16 = (int)(uintptr_t)v15;
      v17 = *(float *)(*(uint32_t *)(v95 + 4 * ((int)(uintptr_t)&v85[v82] >> 1)) + 4);
      v87 = *(char **)(v95 + 4 * ((int)(uintptr_t)&v85[v82] >> 1));
      v18 = v82;
      while ( 2 )
      {
        v92 = (char *)(v16 - 1);
        if ( v17 > *(float *)(*(uint32_t *)(v95 + 4 * v16 - 4) + 4) )
        {
LABEL_39:
          ++v16;
          continue;
        }
        break;
      }
      v90 = (char *)(v95 + 4 * v18);
      v19 = *(uint32_t *)v90;
      v20 = v90 - 4;
      if ( *(float *)(*(uint32_t *)v90 + 4) > v17 )
      {
        do
        {
          v19 = *(uint32_t *)v20;
          --v18;
          v21 = *(float *)(*(uint32_t *)v20 + 4);
          v22 = v20;
          v20 -= 4;
        }
        while ( v21 > v17 );
        v90 = v22;
      }
      if ( v18 >= (int)(uintptr_t)v92 )
      {
        if ( (char *)v18 != v92 )
        {
          *(uint32_t *)v90 = *(uint32_t *)(v95 + 4 * v16 - 4);
          *(uint32_t *)(v95 + 4 * v16 - 4) = v19;
        }
        --v18;
        v92 = (char *)v16;
        if ( v18 >= v16 )
        {
          v17 = *((float *)v87 + 1);
          goto LABEL_39;
        }
      }
      if ( v18 > (int)(uintptr_t)v85 )
        hkAlgorithm::quickSortRecursive<int, void>(
          v95,
          (int)(uintptr_t)v85,
          v18,
          (uint8_t ( *)(int, int))hkCompareInfosBySize);
      if ( (int)(uintptr_t)v92 < v82 )
      {
        v85 = v92;
        v15 = v92 + 1;
        continue;
      }
      break;
    }
LABEL_17:
    if ( v80 > (int)(uintptr_t)v88 )
    {
      v85 = v88;
      v7 = v80;
      v8 = v88;
      continue;
    }
    break;
  }
LABEL_40:
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Destroy((hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)&v105);
  v77 = *(float *)(*(uint32_t *)(v102 + 4 * v103 - 4) + 4);
  hkOstream::printf(a1, "\n\n");
  hkOstream::printf(a1, "************************************\n");
  hkOstream::printf(a1, "********** Per Type Times    *******\n");
  hkOstream::printf(a1, "************************************\n");
  result = v103 - 1;
  v79 = v103 - 1;
  if ( v103 - 1 >= 0 )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v24 = a1;
    v81 = 4 * v79;
    while ( 1 )
    {
      v25 = *(hkMonitorStreamAnalyzer::Node::Self **)(v102 + v81);
      if ( *((float *)v25 + 1) <= (float)(v77 * 0.01f) )
      {
        v26 = *((uint32_t *)v25 + 38);
        goto LABEL_44;
      }
      hkOstream::printf(v24, (char *)&a0[1]);
      hkOstream::printf(v24, "************************************\n\n");
      if ( *((int *)v25 + 35) > 0 )
      {
        v98 = 0;
        v83 = v25;
        hkOstream::printf(v24, "\t\t");
        while ( 1 )
        {
          v37 = *((uint32_t *)v83 + 34) + 136 * v98;
          v38 = *(uint32_t *)(v37 + 52);
          v39 = *(uint32_t *)(v37 + 48);
          if ( v38 != 0 && v39 < v38 )
            v39 = *(uint32_t *)(v37 + 52);
          v40 = *(uint32_t *)(v37 + 56);
          if ( v40 != 0 && v39 < v40 )
            v39 = *(uint32_t *)(v37 + 56);
          v41 = *(uint32_t *)(v37 + 60);
          if ( v41 != 0 && v39 < v41 )
            v39 = *(uint32_t *)(v37 + 60);
          v42 = *(uint32_t *)(v37 + 64);
          if ( v42 != 0 && v39 < v42 )
            v39 = *(uint32_t *)(v37 + 64);
          v43 = *(uint32_t *)(v37 + 68);
          if ( v43 != 0 && v39 < v43 )
            v39 = *(uint32_t *)(v37 + 68);
          v44 = *(uint32_t *)(v37 + 72);
          if ( v44 != 0 && v39 < v44 )
            v39 = *(uint32_t *)(v37 + 72);
          v45 = *(uint32_t *)(v37 + 76);
          if ( v45 != 0 && v39 < v45 )
            v39 = *(uint32_t *)(v37 + 76);
          v46 = *(uint32_t *)(v37 + 80);
          if ( v46 != 0 && v39 < v46 )
            v39 = *(uint32_t *)(v37 + 80);
          v47 = *(uint32_t *)(v37 + 84);
          if ( v47 != 0 && v39 < v47 )
            v39 = *(uint32_t *)(v37 + 84);
          v48 = *(uint32_t *)(v37 + 88);
          if ( v48 != 0 && v39 < v48 )
            v39 = *(uint32_t *)(v37 + 88);
          v49 = *(uint32_t *)(v37 + 92);
          if ( v49 != 0 && v39 < v49 )
            v39 = *(uint32_t *)(v37 + 92);
          hkString::snprintf((hkString::Self *)&v105, 0xC8u, "%s (%i)", *(const char **)(v37 + 120), v39);
          hkOstream::printf(v24, "%-34s%s", &v105, "\t\t\t");
          if ( *(uint32_t *)(v37 + 48) != 0 )
          {
            hkOstream::printf(v24, "% 12.3f: ", *(float *)v37);
            if ( *(uint32_t *)(v37 + 52) == 0 )
            {
LABEL_63:
              if ( *(uint32_t *)(v37 + 56) == 0 )
                goto LABEL_64;
              goto LABEL_111;
            }
          }
          else if ( *(uint32_t *)(v37 + 52) == 0 )
          {
            goto LABEL_63;
          }
          hkOstream::printf(v24, "% 12.3f: ", *(float *)(v37 + 4));
          if ( *(uint32_t *)(v37 + 56) == 0 )
          {
LABEL_64:
            if ( *(uint32_t *)(v37 + 60) == 0 )
              goto LABEL_65;
            goto LABEL_112;
          }
LABEL_111:
          hkOstream::printf(v24, "% 12.3f: ", *(float *)(v37 + 8));
          if ( *(uint32_t *)(v37 + 60) == 0 )
          {
LABEL_65:
            if ( *(uint32_t *)(v37 + 64) == 0 )
              goto LABEL_66;
            goto LABEL_113;
          }
LABEL_112:
          hkOstream::printf(v24, "% 12.3f: ", *(float *)(v37 + 12));
          if ( *(uint32_t *)(v37 + 64) == 0 )
          {
LABEL_66:
            if ( *(uint32_t *)(v37 + 68) == 0 )
              goto LABEL_67;
            goto LABEL_114;
          }
LABEL_113:
          hkOstream::printf(v24, "% 12.3f: ", *(float *)(v37 + 16));
          if ( *(uint32_t *)(v37 + 68) == 0 )
          {
LABEL_67:
            if ( *(uint32_t *)(v37 + 72) == 0 )
              goto LABEL_68;
            goto LABEL_115;
          }
LABEL_114:
          hkOstream::printf(v24, "% 12.3f: ", *(float *)(v37 + 20));
          if ( *(uint32_t *)(v37 + 72) == 0 )
          {
LABEL_68:
            if ( *(uint32_t *)(v37 + 76) == 0 )
              goto LABEL_69;
            goto LABEL_116;
          }
LABEL_115:
          hkOstream::printf(v24, "% 12.3f: ", *(float *)(v37 + 24));
          if ( *(uint32_t *)(v37 + 76) == 0 )
          {
LABEL_69:
            if ( *(uint32_t *)(v37 + 80) == 0 )
              goto LABEL_70;
            goto LABEL_117;
          }
LABEL_116:
          hkOstream::printf(v24, "% 12.3f: ", *(float *)(v37 + 28));
          if ( *(uint32_t *)(v37 + 80) == 0 )
          {
LABEL_70:
            if ( *(uint32_t *)(v37 + 84) == 0 )
              goto LABEL_71;
            goto LABEL_118;
          }
LABEL_117:
          hkOstream::printf(v24, "% 12.3f: ", *(float *)(v37 + 32));
          if ( *(uint32_t *)(v37 + 84) == 0 )
          {
LABEL_71:
            if ( *(uint32_t *)(v37 + 88) != 0 )
              goto LABEL_119;
            goto LABEL_72;
          }
LABEL_118:
          hkOstream::printf(v24, "% 12.3f: ", *(float *)(v37 + 36));
          if ( *(uint32_t *)(v37 + 88) != 0 )
          {
LABEL_119:
            hkOstream::printf(v24, "% 12.3f: ", *(float *)(v37 + 40));
            if ( *(uint32_t *)(v37 + 92) == 0 )
              goto LABEL_73;
            goto LABEL_120;
          }
LABEL_72:
          if ( *(uint32_t *)(v37 + 92) != 0 )
LABEL_120:
            hkOstream::printf(v24, "% 12.3f: ", *(float *)(v37 + 44));
LABEL_73:
          hkOstream::printf(v24, (char *)&a0[1]);
          if ( ++v98 >= *((uint32_t *)v83 + 35) )
          {
            v25 = v83;
            break;
          }
          hkOstream::printf(v24, "\t\t");
        }
      }
      v50 = *((uint32_t *)v25 + 13);
      v51 = *((uint32_t *)v25 + 12);
      if ( v50 != 0 && v51 < v50 )
        v51 = *((uint32_t *)v25 + 13);
      v52 = *((uint32_t *)v25 + 14);
      if ( v52 != 0 && v51 < v52 )
        v51 = *((uint32_t *)v25 + 14);
      v53 = *((uint32_t *)v25 + 15);
      if ( v53 != 0 && v51 < v53 )
        v51 = *((uint32_t *)v25 + 15);
      v54 = *((uint32_t *)v25 + 16);
      if ( v54 != 0 && v51 < v54 )
        v51 = *((uint32_t *)v25 + 16);
      v55 = *((uint32_t *)v25 + 17);
      if ( v55 != 0 && v51 < v55 )
        v51 = *((uint32_t *)v25 + 17);
      v56 = *((uint32_t *)v25 + 18);
      if ( v56 != 0 && v51 < v56 )
        v51 = *((uint32_t *)v25 + 18);
      v57 = *((uint32_t *)v25 + 19);
      if ( v57 != 0 && v51 < v57 )
        v51 = *((uint32_t *)v25 + 19);
      v58 = *((uint32_t *)v25 + 20);
      if ( v58 != 0 && v51 < v58 )
        v51 = *((uint32_t *)v25 + 20);
      v59 = *((uint32_t *)v25 + 21);
      if ( v59 != 0 && v51 < v59 )
        v51 = *((uint32_t *)v25 + 21);
      v60 = *((uint32_t *)v25 + 22);
      if ( v60 != 0 && v51 < v60 )
        v51 = *((uint32_t *)v25 + 22);
      v61 = *((uint32_t *)v25 + 23);
      if ( v61 != 0 && v51 < v61 )
        v51 = *((uint32_t *)v25 + 23);
      if ( v77 <= 0.0 )
        hkString::snprintf((hkString::Self *)&v105, 0xC8u, "%s (%i)", *((const char **)v25 + 30), v51);
      else
        hkString::snprintf(
          (hkString::Self *)&v105,
          0xC8u,
          "%s (%i) %4.1f%%",
          *((const char **)v25 + 30),
          v51,
          (float)((float)(100.0 * *((float *)v25 + 1)) / v77));
      hkOstream::printf(v24, "%-34s%s", &v105, "\t\t\t");
      if ( *((uint32_t *)v25 + 12) != 0 )
        hkOstream::printf(v24, "% 12.3f: ", *(float *)v25);
      if ( *((uint32_t *)v25 + 13) != 0 )
        hkOstream::printf(v24, "% 12.3f: ", *((float *)v25 + 1));
      if ( *((uint32_t *)v25 + 14) != 0 )
        hkOstream::printf(v24, "% 12.3f: ", *((float *)v25 + 2));
      if ( *((uint32_t *)v25 + 15) != 0 )
        hkOstream::printf(v24, "% 12.3f: ", *((float *)v25 + 3));
      if ( *((uint32_t *)v25 + 16) != 0 )
        hkOstream::printf(v24, "% 12.3f: ", *((float *)v25 + 4));
      if ( *((uint32_t *)v25 + 17) != 0 )
        hkOstream::printf(v24, "% 12.3f: ", *((float *)v25 + 5));
      if ( *((uint32_t *)v25 + 18) != 0 )
        hkOstream::printf(v24, "% 12.3f: ", *((float *)v25 + 6));
      if ( *((uint32_t *)v25 + 19) != 0 )
        hkOstream::printf(v24, "% 12.3f: ", *((float *)v25 + 7));
      if ( *((uint32_t *)v25 + 20) != 0 )
        hkOstream::printf(v24, "% 12.3f: ", *((float *)v25 + 8));
      if ( *((uint32_t *)v25 + 21) != 0 )
        hkOstream::printf(v24, "% 12.3f: ", *((float *)v25 + 9));
      if ( *((uint32_t *)v25 + 22) != 0 )
        hkOstream::printf(v24, "% 12.3f: ", *((float *)v25 + 10));
      if ( *((uint32_t *)v25 + 23) != 0 )
        hkOstream::printf(v24, "% 12.3f: ", *((float *)v25 + 11));
      hkOstream::printf(v24, (char *)&a0[1]);
      v26 = *((uint32_t *)v25 + 38);
      if ( v26 > 0 )
        break;
LABEL_44:
      v27 = v26 - 1;
      if ( v27 >= 0 )
      {
        v96 = v25;
        v93 = (char *)v24;
        v28 = v27;
        v29 = (hkMonitorStreamAnalyzer::Node::Self *)(136 * v27 + *((uint32_t *)v25 + 37));
        do
        {
          --v28;
          hkMonitorStreamAnalyzer::Node::Destroy(v29);
          v29 = (hkMonitorStreamAnalyzer::Node::Self *)((char *)v29 - 136);
        }
        while ( v28 != -1 );
        v25 = v96;
        v24 = (hkOstream::Self *)v93;
      }
      v30 = *((uint32_t *)v25 + 39);
      *((uint32_t *)v25 + 38) = 0;
      if ( v30 >= 0 )
        (*(void ( **)(uint32_t *, uint32_t, int))(hkContainerDebugAllocator::s_alloc[0] + 20))(
          (uint32_t *)(uintptr_t)(hkContainerDebugAllocator::s_alloc),
          *((uint32_t *)v25 + 37),
          136 * (v30 & 0x3FFFFFFF));
      v31 = *((uint32_t *)v25 + 35);
      *((uint32_t *)v25 + 37) = 0;
      v32 = v31 - 1;
      *((uint32_t *)v25 + 39) = 0x80000000;
      v33 = *((uint32_t *)v25 + 34);
      if ( v32 >= 0 )
      {
        v97 = v25;
        v94 = (char *)v24;
        v34 = v32;
        v35 = (hkMonitorStreamAnalyzer::Node::Self *)(136 * v32 + v33);
        do
        {
          --v34;
          hkMonitorStreamAnalyzer::Node::Destroy(v35);
          v35 = (hkMonitorStreamAnalyzer::Node::Self *)((char *)v35 - 136);
        }
        while ( v34 != -1 );
        v25 = v97;
        v24 = (hkOstream::Self *)v94;
      }
      v36 = *((uint32_t *)v25 + 36);
      *((uint32_t *)v25 + 35) = 0;
      if ( v36 >= 0 )
        (*(void ( **)(uint32_t *, uint32_t, int))(hkContainerDebugAllocator::s_alloc[0] + 20))(
          (uint32_t *)(uintptr_t)(hkContainerDebugAllocator::s_alloc),
          *((uint32_t *)v25 + 34),
          136 * (v36 & 0x3FFFFFFF));
      *((uint32_t *)v25 + 34) = 0;
      *((uint32_t *)v25 + 36) = 0x80000000;
      hkMonitorStreamAnalyzer::Node::Destroy(v25);
      result = (*(int ( **)(uint32_t, hkMonitorStreamAnalyzer::Node::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 48)
                                                                                + 12))(
                 *(uint32_t *)(*(uint32_t *)address + 48),
                 v25,
                 160);
      --v79;
      v81 -= 4;
      if ( v79 == -1 )
        goto LABEL_57;
    }
    v99 = 0;
    v84 = v25;
    hkOstream::printf(v24, "\t\t");
    while ( 1 )
    {
      v62 = *((uint32_t *)v84 + 37) + 136 * v99;
      v63 = *(uint32_t *)(v62 + 52);
      v64 = *(uint32_t *)(v62 + 48);
      if ( v63 != 0 && v64 < v63 )
        v64 = *(uint32_t *)(v62 + 52);
      v65 = *(uint32_t *)(v62 + 56);
      if ( v65 != 0 && v64 < v65 )
        v64 = *(uint32_t *)(v62 + 56);
      v66 = *(uint32_t *)(v62 + 60);
      if ( v66 != 0 && v64 < v66 )
        v64 = *(uint32_t *)(v62 + 60);
      v67 = *(uint32_t *)(v62 + 64);
      if ( v67 != 0 && v64 < v67 )
        v64 = *(uint32_t *)(v62 + 64);
      v68 = *(uint32_t *)(v62 + 68);
      if ( v68 != 0 && v64 < v68 )
        v64 = *(uint32_t *)(v62 + 68);
      v69 = *(uint32_t *)(v62 + 72);
      if ( v69 != 0 && v64 < v69 )
        v64 = *(uint32_t *)(v62 + 72);
      v70 = *(uint32_t *)(v62 + 76);
      if ( v70 != 0 && v64 < v70 )
        v64 = *(uint32_t *)(v62 + 76);
      v71 = *(uint32_t *)(v62 + 80);
      if ( v71 != 0 && v64 < v71 )
        v64 = *(uint32_t *)(v62 + 80);
      v72 = *(uint32_t *)(v62 + 84);
      if ( v72 != 0 && v64 < v72 )
        v64 = *(uint32_t *)(v62 + 84);
      v73 = *(uint32_t *)(v62 + 88);
      if ( v73 != 0 && v64 < v73 )
        v64 = *(uint32_t *)(v62 + 88);
      v74 = *(uint32_t *)(v62 + 92);
      if ( v74 != 0 && v64 < v74 )
        v64 = *(uint32_t *)(v62 + 92);
      hkString::snprintf((hkString::Self *)&v105, 0xC8u, "%s (%i)", *(const char **)(v62 + 120), v64);
      hkOstream::printf(v24, "%-34s%s", &v105, "\t\t\t");
      if ( *(uint32_t *)(v62 + 48) != 0 )
      {
        hkOstream::printf(v24, "% 12.3f: ", *(float *)v62);
        if ( *(uint32_t *)(v62 + 52) == 0 )
        {
LABEL_184:
          if ( *(uint32_t *)(v62 + 56) == 0 )
            goto LABEL_185;
          goto LABEL_232;
        }
      }
      else if ( *(uint32_t *)(v62 + 52) == 0 )
      {
        goto LABEL_184;
      }
      hkOstream::printf(v24, "% 12.3f: ", *(float *)(v62 + 4));
      if ( *(uint32_t *)(v62 + 56) == 0 )
      {
LABEL_185:
        if ( *(uint32_t *)(v62 + 60) == 0 )
          goto LABEL_186;
        goto LABEL_233;
      }
LABEL_232:
      hkOstream::printf(v24, "% 12.3f: ", *(float *)(v62 + 8));
      if ( *(uint32_t *)(v62 + 60) == 0 )
      {
LABEL_186:
        if ( *(uint32_t *)(v62 + 64) == 0 )
          goto LABEL_187;
        goto LABEL_234;
      }
LABEL_233:
      hkOstream::printf(v24, "% 12.3f: ", *(float *)(v62 + 12));
      if ( *(uint32_t *)(v62 + 64) == 0 )
      {
LABEL_187:
        if ( *(uint32_t *)(v62 + 68) == 0 )
          goto LABEL_188;
        goto LABEL_235;
      }
LABEL_234:
      hkOstream::printf(v24, "% 12.3f: ", *(float *)(v62 + 16));
      if ( *(uint32_t *)(v62 + 68) == 0 )
      {
LABEL_188:
        if ( *(uint32_t *)(v62 + 72) == 0 )
          goto LABEL_189;
        goto LABEL_236;
      }
LABEL_235:
      hkOstream::printf(v24, "% 12.3f: ", *(float *)(v62 + 20));
      if ( *(uint32_t *)(v62 + 72) == 0 )
      {
LABEL_189:
        if ( *(uint32_t *)(v62 + 76) == 0 )
          goto LABEL_190;
        goto LABEL_237;
      }
LABEL_236:
      hkOstream::printf(v24, "% 12.3f: ", *(float *)(v62 + 24));
      if ( *(uint32_t *)(v62 + 76) == 0 )
      {
LABEL_190:
        if ( *(uint32_t *)(v62 + 80) == 0 )
          goto LABEL_191;
        goto LABEL_238;
      }
LABEL_237:
      hkOstream::printf(v24, "% 12.3f: ", *(float *)(v62 + 28));
      if ( *(uint32_t *)(v62 + 80) == 0 )
      {
LABEL_191:
        if ( *(uint32_t *)(v62 + 84) == 0 )
          goto LABEL_192;
        goto LABEL_239;
      }
LABEL_238:
      hkOstream::printf(v24, "% 12.3f: ", *(float *)(v62 + 32));
      if ( *(uint32_t *)(v62 + 84) == 0 )
      {
LABEL_192:
        if ( *(uint32_t *)(v62 + 88) != 0 )
          goto LABEL_240;
        goto LABEL_193;
      }
LABEL_239:
      hkOstream::printf(v24, "% 12.3f: ", *(float *)(v62 + 36));
      if ( *(uint32_t *)(v62 + 88) != 0 )
      {
LABEL_240:
        hkOstream::printf(v24, "% 12.3f: ", *(float *)(v62 + 40));
        if ( *(uint32_t *)(v62 + 92) == 0 )
          goto LABEL_194;
        goto LABEL_241;
      }
LABEL_193:
      if ( *(uint32_t *)(v62 + 92) != 0 )
LABEL_241:
        hkOstream::printf(v24, "% 12.3f: ", *(float *)(v62 + 44));
LABEL_194:
      hkOstream::printf(v24, (char *)&a0[1]);
      ++v99;
      v26 = *((uint32_t *)v84 + 38);
      if ( v99 >= v26 )
      {
        v25 = v84;
        goto LABEL_44;
      }
      hkOstream::printf(v24, "\t\t");
    }
  }
LABEL_57:
  v103 = 0;
  if ( v104 >= 0 )
    return (*(int ( **)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
             (uint32_t *)(uintptr_t)(hkContainerTempAllocator::s_alloc),
             v102,
             4 * v104);
  return result;
}

// Binary VA: 0x655470 (source: game_core_batch_1.json)
int sub_655470(int a1)
{
  int v1;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = 0;
  if ( a1 != 0 && *(uint32_t *)(*(uint32_t *)(a1 + 408) - 12) != 0 )
  {
    v3 = *(uint32_t *)(a1 + 404);
    if ( v3 != 0 )
    {
      v1 = 1;
      if ( (*(int ( **)(uint32_t))(*(uint32_t *)v3 + 28))(*(uint32_t *)(a1 + 404)) != 11
        && (*(int ( **)(uint32_t))(**(uint32_t **)(a1 + 404) + 28))(*(uint32_t *)(a1 + 404)) != 8
        && (*(int ( **)(uint32_t))(**(uint32_t **)(a1 + 404) + 28))(*(uint32_t *)(a1 + 404)) != 12 )
      {
        v1 = 0;
        if ( *(uint32_t *)(*(uint32_t *)(a1 + 408) - 12) != 0 )
        {
          v4 = *(uint32_t *)(a1 + 404);
          if ( v4 != 0 )
          {
            v1 = 1;
            if ( (*(int ( **)(uint32_t))(*(uint32_t *)v4 + 28))(*(uint32_t *)(a1 + 404)) != 9 )
            {
              v1 = 0;
              if ( *(uint32_t *)(*(uint32_t *)(a1 + 408) - 12) != 0 )
              {
                v5 = *(uint32_t *)(a1 + 404);
                if ( v5 != 0 )
                {
                  v6 = (*(int ( **)(uint32_t))(*(uint32_t *)v5 + 28))(*(uint32_t *)(a1 + 404));
                  LOBYTE(v6) = v6 == 10;
                  return v6;
                }
              }
            }
          }
        }
      }
    }
  }
  return v1;
}

// Binary VA: 0x655f30 (source: game_core_batch_1.json)
int *sub_655F30()
{
  int *result;
  int v1;
  int v2;
  int v3;
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  int v9;
  int v10;
  int v11; // [esp+1Ch] [ebp-30h]
  unsigned int v12[5];

  if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
  {
    dword_20D3C40 = (int)(uintptr_t)&off_204B608;
    byte_20D3C44 = 0;
    dword_20D3CBC = (int)(uintptr_t)&dword_213B814;
    dword_20D3C4C = 0;
    dword_20D3C50 = 0;
    dword_20D3C5C = 0;
    dword_20D3C54 = (int)(uintptr_t)&dword_20D3C4C;
    dword_20D3C58 = (int)(uintptr_t)&dword_20D3C4C;
    byte_20D3C60 = 1;
    dword_20D3C68 = 0;
    dword_20D3C70 = 1;
    dword_20D3C7C = -1;
    dword_20D3C80 = 0;
    dword_20D3C84 = 0;
    dword_20D3C88 = 0;
    dword_20D3C8C = 0;
    dword_20D3C90 = 0;
    dword_20D3C94 = 0;
    dword_20D3C98 = 0;
    dword_20D3C9C = 0;
    dword_20D3CA0 = 0;
    dword_20D3CA4 = 0;
    dword_20D3CA8 = 0;
    dword_20D3CAC = 0;
    dword_20D3CB0 = 0;
    dword_20D3CB4 = 0;
    dword_20D3CB8 = 0;
    dword_20D3CC0 = -1;
    dword_20D3CC8 = -1;
    dword_20D3CCC = -1;
    dword_20D3CD0 = -1;
    dword_20D3CD4 = 0;
    dword_20D3CD8 = -1;
    dword_20D3DDC = -1;
    dword_20D3DE0 = -1;
    dword_20D3DE4 = -1;
    dword_20D3DE8 = -1;
    dword_20D3DEC = -1;
    byte_20D3DF0 = 1;
    dword_20D3DF4 = 0;
    dword_20D3DF8 = 0;
    byte_20D3DFC = 0;
    byte_20D3DFD = 0;
    byte_20D3DFE = 0;
    byte_20D3DFF = 0;
    byte_20D3E00 = 0;
    byte_20D3E01 = 0;
    byte_20D3E02 = 0;
    byte_20D3E03 = 0;
    byte_20D3E04 = 0;
    dword_20D3E08 = 0;
    dword_20D3E0C = 0;
    dword_20D3E10 = 0;
    dword_20D3E14 = 0;
    dword_20D3E18 = 0;
    dword_20D3E1C = 0;
    dword_20D3E20 = 0;
    byte_20D3E24 = 0;
    byte_20D3E25 = 0;
    byte_20D3E26 = 0;
    dword_20D3E2C = 0;
    dword_20D3C6C = sub_4EBC30(4u, 1);
    *(uint32_t *)dword_20D3C6C = 0;
    v1 = sub_4EBBF0(0x90u, 1);
    sub_668A60(v1);
    dword_20D3C74 = v1;
    v2 = sub_4EBBF0(0x34u, 1);
    sub_671EC0(v2);
    v3 = dword_20D3E0C;
    dword_20D3C78 = v2;
    v12[0] = 4;
    v12[1] = 0xFFFFFFFF;
    v11 = dword_20D3E08;
    v4 = (dword_20D3E0C - dword_20D3E08) >> 3;
    if ( dword_20D9980 > v4 )
    {
      sub_6209C0((int)(uintptr_t)&dword_20D3E08, (char *)dword_20D3E0C, dword_20D9980 - v4, v12);
      v3 = dword_20D3E0C;
      v11 = dword_20D3E08;
      v4 = (dword_20D3E0C - dword_20D3E08) >> 3;
    }
    else if ( dword_20D9980 < v4 )
    {
      v3 = dword_20D3E08 + 8 * dword_20D9980;
      dword_20D3E0C = v3;
      v4 = (8 * dword_20D9980) >> 3;
    }
    if ( v4 != 0 )
    {
      v5 = 0;
      v6 = (v3 - v11) >> 3;
      v7 = 0;
      do
      {
        v8 = *(uint32_t *)(dword_20D9970 + 164 * v5 + 8);
        if ( v8 >= 0 && v8 < (unsigned int)dword_20D9A20 )
        {
          v9 = *(uint32_t *)(dword_20D9A10 + 32 * v8 + 12);
          if ( v9 != 0 )
          {
            if ( v9 >= 0 && v9 < dword_20D9A60 )
              ++dword_20D3E18;
          }
          else
          {
            ++dword_20D3E14;
          }
        }
        v5 = ++v7;
      }
      while ( v7 < v6 );
    }
    v10 = (int)(uintptr_t)(operator new(0x3Cu));
    sub_8EA810(v10);
    dword_20D3E2C = v10;
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
    __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
  }
  result = nullptr;
  if ( byte_20D3C44 == 0 )
    return (int *)(&dword_20D3C40);
  return result;
}

// Binary VA: 0x655a30 (source: game_core_batch_1.json)
int sub_655A30(volatile int32_t **a1)
{
  int result;
  volatile int32_t *v2;

  result = (int)(uintptr_t)a1;
  v2 = *a1;
  if ( *a1 != nullptr )
  {
    result = __sync_fetch_and_add(v2, 0xFFFFFFFF);
    if ( result == 1 )
    {
      glitch::video::CMaterialRenderer::Destroy((glitch::video::CMaterialRenderer::Self *)v2);
      return sub_4EBE40((int)(uintptr_t)v2);
    }
  }
  return result;
}

// Binary VA: 0x655dd0 (source: game_core_batch_1.json)
int *sub_655DD0()
{
  int *result;

  if ( byte_20D5130 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5130) != 0 )
  {
    byte_20D5144 = 0;
    dword_20D5140 = (int)(uintptr_t)&off_204A6C0;
    dword_20D5148 = 0;
    dword_20D514C = 0;
    dword_20D5150 = 0;
    dword_20D5154 = 0;
    dword_20D5158 = 0;
    dword_20D515C = 0;
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5130);
    __cxa_atexit((void (*)(void *))sub_5E79C0, &dword_20D5140, &unk_20D1280);
  }
  result = nullptr;
  if ( byte_20D5144 == 0 )
    return (int *)(&dword_20D5140);
  return result;
}

// Binary VA: 0x6544f0 (source: game_core_batch_1.json)
float * sub_6544F0(float *a1, float *a2)
{
  float *result;
  float v3; // xmm1_4
  float v4; // xmm2_4
  float v5; // xmm0_4
  float v6; // xmm3_4
  float v7; // xmm3_4
  float v8; // xmm4_4
  float v9; // xmm3_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm4_4
  float v19; // xmm0_4
  float v20; // xmm3_4
  float v21; // xmm0_4
  float v22; // xmm2_4
  float v23; // xmm1_4
  float v24; // xmm4_4
  float v25; // xmm0_4
  float v26; // xmm2_4
  float v27; // xmm4_4
  float v28; // xmm1_4
  float v29; // xmm4_4
  float v30; // xmm0_4
  float v31; // xmm4_4

  result = a1;
  v3 = a2[5];
  v4 = *a2;
  v5 = a2[10];
  v6 = (float)(v3 + *a2) + v5;
  if ( v6 <= 0.0 )
  {
    if ( v4 <= v3 || v4 <= v5 )
    {
      if ( v3 <= v5 )
      {
        v30 = fsqrt((float)((float)(v5 - v4) - v3) + 1.0);
        v31 = 0.5 / v30;
        v13 = v30 * 0.5;
        v9 = (float)(a2[4] - a2[1]) * v31;
        v14 = (float)(a2[9] + a2[6]) * v31;
        v15 = (float)(a2[8] + a2[2]) * v31;
      }
      else
      {
        v28 = fsqrt((float)((float)(v3 - v4) - v5) + 1.0);
        v29 = 0.5 / v28;
        v14 = v28 * 0.5;
        v9 = (float)(a2[2] - a2[8]) * v29;
        v13 = (float)(a2[9] + a2[6]) * v29;
        v15 = (float)(a2[4] + a2[1]) * v29;
      }
      a1[3] = v9;
    }
    else
    {
      v26 = fsqrt((float)((float)(v4 - v3) - v5) + 1.0);
      v27 = 0.5 / v26;
      v15 = v26 * 0.5;
      v9 = (float)(a2[9] - a2[6]) * v27;
      v13 = (float)(a2[2] + a2[8]) * v27;
      v14 = (float)(a2[4] + a2[1]) * v27;
      a1[3] = v9;
    }
  }
  else
  {
    v7 = fsqrt(v6 + 1.0);
    v8 = 0.5 / v7;
    v9 = v7 * 0.5;
    v10 = a2[4] - a2[1];
    v11 = a2[2] - a2[8];
    v12 = a2[9] - a2[6];
    a1[3] = v9;
    v13 = v10 * v8;
    v14 = v11 * v8;
    v15 = v12 * v8;
  }
  v16 = -v15;
  v17 = -v14;
  v18 = -v13;
  *a1 = v16;
  a1[1] = v17;
  a1[2] = -v13;
  v19 = (float)((float)((float)(v16 * v16) + (float)(v17 * v17)) + (float)(v9 * v9)) + (float)(v18 * v18);
  if ( v19 != 0.0 )
  {
    v20 = 1.0 / fsqrt(v19);
    v21 = (float)((float)((float)(v19 * v20) * v20) + -3.0) * (float)(v20 * -0.5);
    v22 = v16 * v21;
    v23 = v17 * v21;
    v24 = v18 * v21;
    v25 = v21 * a1[3];
    *a1 = v22;
    a1[1] = v23;
    a1[2] = v24;
    a1[3] = v25;
  }
  return result;
}

// Binary VA: 0xcc67e0 (source: lib_batch_0.json)
int sub_CC67E0(uint32_t *a1,
 char *a2,
 uint8_t *a3,
 int a4,
 unsigned int a5,
 int a6,
 int a7,
 int a8,
 int a9)
{
  int v9;
  char *v10;
  int result;
  char *v12;
  uint8_t *v13;
  signed int v14;
  int v15;
  uint8_t *v16;
  unsigned int v17;
  unsigned int v18;
  char *v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  bool v24; // cf
  unsigned int v25;
  int v26;
  char *v27;
  uint32_t *v28;
  uint32_t *v29;
  unsigned int v30;
  uint8_t *v31;
  uint8_t *v32;
  int v33;
  char *v34;
  char *v35;
  unsigned int v36;
  unsigned int v37;
  int v38;
  unsigned int v39;
  char *v40;
  char *v41;
  char *v42;
  int v43;
  uint16_t *v44;
  unsigned int v45;
  unsigned int v46;
  int v47;
  char *v48;
  uint32_t *v49;
  int v50;
  unsigned int v51;
  unsigned int v52;
  char *v53;
  unsigned int v54;
  unsigned int v55;
  int v56;
  unsigned int v57;
  unsigned int v58;
  int v59;
  char *v60;
  char *v61;
  signed int j;
  unsigned int v63;
  char *v64;
  int v65;
  int v66;
  char *v67;
  unsigned int v68;
  char *v69; // [esp-5Ch] [ebp-68h]
  int v70; // [esp-5Ch] [ebp-68h]
  unsigned int v71;
  unsigned int v72;
  unsigned int v73;
  unsigned int i; // [esp-4Ch] [ebp-58h]
  uint8_t *v75; // [esp-4Ch] [ebp-58h]
  unsigned int v76;
  char *v77;
  uint8_t *v78;
  uint16_t *v79;
  unsigned int v80; // [esp-3Ch] [ebp-48h]
  int v81;
  unsigned int v82;
  char *v83;
  char *v84;
  unsigned int v85;
  unsigned int v86;
  char *v87;
  char *v88; // [esp-2Ch] [ebp-38h]
  int v89;
  char *v90;
  unsigned int v91;
  int v93;
  bool v94;
  unsigned int v95;
  unsigned int v96;
  unsigned int v97;
  char *v98;
  char *v99;
  int v101;
  unsigned int v102;
  unsigned int v103;
  char *v104;
  char *v105;
  char *v106;
  char *v107;
  unsigned int v108;
  char *v109;
  char *v110;
  unsigned int v111;
  unsigned int v112;
  uint16_t *v113;
  unsigned int v114;

  v9 = a1[4100];
  v10 = a2;
  v88 = (char *)a1[4098];
  v77 = &v88[v9];
  v81 = &v88[v9] - a2;
  v91 = (unsigned int)(uintptr_t)&a2[a4 - 12];
  v80 = (unsigned int)(uintptr_t)&a2[a4 - 5];
  result = 0;
  v76 = (unsigned int)(uintptr_t)&a3[a5];
  if ( (unsigned int)a4 > 0x7E000000 )
    return result;
  v90 = &a2[-v9];
  if ( a8 == 1 )
  {
    v82 = (unsigned int)(uintptr_t)&a2[-v9];
    v93 = (int)(uintptr_t)&a2[-a1[4096]];
    v94 = a7 == 2;
    if ( a7 != 2 )
      goto LABEL_6;
LABEL_15:
    result = 0;
    if ( a4 > 65546 )
      return result;
    v12 = a2;
    v13 = a3;
    v83 = a2;
    if ( a4 <= 12 )
      goto LABEL_7;
    goto LABEL_17;
  }
  if ( a8 == 2 )
  {
    v93 = (int)(uintptr_t)&a2[-a1[4096]];
    v82 = (unsigned int)(uintptr_t)a2;
  }
  else
  {
    v82 = (unsigned int)(uintptr_t)a2;
    v93 = (int)(uintptr_t)a2;
  }
  v94 = a7 == 2;
  if ( a7 == 2 )
    goto LABEL_15;
LABEL_6:
  v12 = a2;
  v13 = a3;
  v83 = a2;
  if ( a4 <= 12 )
  {
LABEL_7:
    v14 = &a2[a4] - v10;
    if ( a6 == 0 || (result = 0, a5 >= v14 + v13 - a3 + (v14 + 240) / 0xFFu + 1) )
    {
      LOBYTE(v15) = 16 * v14;
      if ( v14 > 14 )
      {
        v15 = v14 - 15;
        for ( *v13++ = -16; v15 > 254; ++v13 )
        {
          v15 -= 255;
          *v13 = -1;
        }
      }
      *v13 = v15;
      v16 = v13 + 1;
      memcpy(v13 + 1, v83, v14);
      return &v16[v14] - a3;
    }
    return result;
  }
LABEL_17:
  v17 = -1640531535 * *(uint32_t *)v12;
  if ( v94 )
    v18 = v17 >> 19;
  else
    v18 = v17 >> 20;
  switch ( a7 )
  {
    case 1:
      v28 = (uint32_t *)(a2);
      a1[v18] = (uint32_t)(uintptr_t)(&a2[-v93]);
      v29 = (uint32_t *)(a2);
      goto LABEL_50;
    case 0:
      v28 = (uint32_t *)(a2);
      a1[v18] = (uint32_t)(uintptr_t)(a2);
      v29 = (uint32_t *)(a2);
LABEL_50:
      v19 = (char *)v29 + 1;
      v20 = *(uint32_t *)((char *)v28 + 1);
      goto LABEL_23;
    case 2:
      *((uint16_t *)a1 + v18) = (uint16_t)(uintptr_t)a2 - v93;
      v19 = a2 + 1;
      v20 = *(uint32_t *)(a2 + 1);
      break;
    default:
      v19 = a2 + 1;
      v20 = *(uint32_t *)(a2 + 1);
      if ( !v94 )
      {
LABEL_23:
        v21 = (unsigned int)(-1640531535 * v20) >> 20;
        goto LABEL_24;
      }
      break;
  }
  v21 = (unsigned int)(-1640531535 * v20) >> 19;
LABEL_24:
  v83 = a2;
  v13 = a3;
  v89 = 0;
  v73 = (unsigned int)(uintptr_t)&a2[a4 - 8];
  v68 = (unsigned int)(uintptr_t)&a2[a4 - 6];
  while ( 2 )
  {
    v108 = 64;
    v101 = 1;
    v69 = v19;
    v78 = v13;
    for ( i = v21; ; i = v23 )
    {
      v19 += v101;
      v25 = v108++ >> 6;
      v101 = v25;
      if ( v91 < (unsigned int)(uintptr_t)v19 )
      {
        v13 = v78;
        v10 = v83;
        goto LABEL_7;
      }
      if ( a7 == 0 )
      {
        v71 = a1[i];
        goto LABEL_27;
      }
      if ( a7 == 1 )
      {
        v71 = a1[i] + v93;
LABEL_27:
        if ( a8 != 2 )
          goto LABEL_28;
        goto LABEL_42;
      }
      v71 = v93 + *((uint16_t *)a1 + i);
      if ( a8 != 2 )
      {
LABEL_28:
        v22 = -1640531535 * *(uint32_t *)v19;
        if ( !v94 )
          goto LABEL_29;
        goto LABEL_46;
      }
LABEL_42:
      v26 = 0;
      v27 = v88;
      if ( (unsigned int)(uintptr_t)a2 <= v71 )
        v27 = a2;
      else
        v26 = v81;
      v89 = v26;
      v22 = -1640531535 * *(uint32_t *)v19;
      v82 = (unsigned int)(uintptr_t)v27;
      if ( !v94 )
      {
LABEL_29:
        v23 = v22 >> 20;
        v24 = a7 == 0;
        if ( a7 == 1 )
          goto LABEL_47;
        goto LABEL_30;
      }
LABEL_46:
      v23 = v22 >> 19;
      v24 = a7 == 0;
      if ( a7 == 1 )
      {
LABEL_47:
        a1[i] = (uint32_t)(uintptr_t)(&v69[-v93]);
        goto LABEL_32;
      }
LABEL_30:
      if ( v24 )
      {
        a1[i] = (uint32_t)(uintptr_t)(v69);
      }
      else if ( a7 == 2 )
      {
        *((uint16_t *)a1 + i) = (uint16_t)(uintptr_t)v69 - v93;
      }
LABEL_32:
      if ( ((unsigned int)(uintptr_t)v90 <= v71 || a9 != 1)
        && (a7 == 2 || (unsigned int)(uintptr_t)v69 <= v71 + 0xFFFF)
        && *(uint32_t *)(v89 + v71) == *(uint32_t *)v69 )
      {
        break;
      }
      v69 = v19;
    }
    v10 = v69;
    v30 = v71;
    v31 = v78;
    if ( v83 < v69 && v82 < v89 + v71 )
    {
      v32 = (uint8_t *)(v71 + v89 - 1);
      if ( *(v69 - 1) == *v32 )
      {
        do
        {
          --v10;
          --v30;
          if ( v10 == v83 )
            break;
          if ( v82 >= (unsigned int)(uintptr_t)v32 )
            break;
          --v32;
        }
        while ( *(v10 - 1) == *v32 );
      }
    }
    v109 = (char *)(v78 + 1);
    v102 = v10 - v83;
    if ( a6 == 0 || v76 >= (unsigned int)(uintptr_t)&v109[v102 + 8 + (v10 - v83) / 0xFFu] )
    {
      if ( v102 <= 0xE )
      {
        *v78 = 16 * v102;
        v35 = (char *)(v78 + 1);
      }
      else
      {
        *v78 = -16;
        v33 = v102 - 15;
        if ( (int)(v102 - 15) > 254 )
        {
          v34 = (char *)(v78 + 1);
          do
          {
            v33 -= 255;
            *v34++ = -1;
          }
          while ( v33 > 254 );
          v109 = v34;
        }
        *v109++ = v33;
        v35 = v109;
      }
      v36 = (unsigned int)(uintptr_t)&v35[v102];
      v37 = 1;
      if ( (unsigned int)(uintptr_t)(v109 + 1) <= v36 )
        v37 = ((v36 + 7 - (unsigned int)(uintptr_t)(v109 + 8)) >> 3) + 1;
      v95 = v37;
      v103 = v37 >> 1;
      v70 = 2 * (v37 >> 1);
      if ( v70 != 0
        && (v83 > v109 + 16 || v109 > v83 + 16)
        && ((v36 + 7 - (unsigned int)(uintptr_t)(v109 + 8)) >> 3) + 1 > 5
        && (unsigned int)(uintptr_t)(v109 + 1) <= v36 )
      {
        v72 = v36;
        v38 = 0;
        v39 = 0;
        do
        {
          ++v39;
          *(__m128i *)&v109[v38] = *(__m128i *)&v83[v38];
          v38 += 16;
        }
        while ( v103 > v39 );
        v110 = &v109[8 * v70];
        v84 = &v83[8 * v70];
        v36 = v72;
        if ( v95 != v70 )
        {
          v96 = v30;
          v40 = v110 + 8;
          v104 = v10;
          v41 = v110;
          v42 = v84;
          goto LABEL_74;
        }
      }
      else
      {
        v96 = v30;
        v104 = v10;
        v41 = v109;
        v42 = v83;
        v40 = v109 + 8;
LABEL_74:
        while ( 1 )
        {
          *(uint32_t *)v41 = *(uint32_t *)v42;
          v43 = *((uint32_t *)v42 + 1);
          v42 += 8;
          *((uint32_t *)v41 + 1) = v43;
          v41 = v40;
          if ( v36 <= (unsigned int)(uintptr_t)v40 )
            break;
          v40 += 8;
        }
        v10 = v104;
        v30 = v96;
        v31 = v78;
      }
      v44 = (uint16_t *)v36;
      v97 = v30;
      v75 = v31;
LABEL_77:
      *v44 = (uint16_t)(uintptr_t)v10 - v97;
      v13 = (uint8_t *)(v44 + 1);
      if ( (char *)v82 == v88 && a8 == 2 )
      {
        v45 = v89 + v97;
        v46 = (unsigned int)(uintptr_t)&v77[-v89 - v97 + (uint32_t)(uintptr_t)v10];
        if ( v46 > v80 )
          v46 = (unsigned int)(uintptr_t)&a2[a4 - 5];
        v105 = v10 + 4;
        v98 = (char *)v46;
        v79 = (uint16_t *)(v45 + 4);
        v85 = v46 - 3;
        if ( (unsigned int)(uintptr_t)(v10 + 4) >= v46 - 3 )
        {
          v48 = v10 + 4;
          goto LABEL_159;
        }
        v47 = *((uint32_t *)v10 + 1) ^ *(uint32_t *)(v45 + 4);
        v48 = v10 + 4;
        v111 = v47;
        if ( v47 != 0 )
        {
LABEL_86:
          _BitScanForward((unsigned int *)&v50, v111);
          v51 = &v48[v50 >> 3] - v105;
        }
        else
        {
          v49 = (uint32_t *)(v79);
          while ( 1 )
          {
            v48 += 4;
            ++v49;
            if ( (unsigned int)(uintptr_t)v48 >= v85 )
              break;
            v111 = *v49 ^ *(uint32_t *)v48;
            if ( v111 != 0 )
              goto LABEL_86;
          }
          v79 = (uint16_t *)(v49);
LABEL_159:
          if ( v48 < v98 - 1 && *v79 == *(uint16_t *)v48 )
          {
            v48 += 2;
            ++v79;
          }
          if ( v98 > v48 )
            v48 += *(uint8_t *)v79 == (uint8_t)*v48;
          v51 = v48 - v105;
        }
        v10 += v51 + 4;
        if ( v10 != v98 )
        {
LABEL_88:
          if ( a6 != 0 && v76 < (unsigned int)(uintptr_t)&v13[(v51 >> 8) + 6] )
            return 0;
          if ( v51 <= 0xE )
          {
            *v75 += v51;
          }
          else
          {
            v52 = v51 - 15;
            for ( *v75 += 15; v52 > 0x1FD; v13 += 2 )
            {
              v52 -= 510;
              *v13 = -1;
              v13[1] = -1;
            }
            if ( v52 > 0xFE )
            {
              *v13 = -1;
              LOBYTE(v52) = v52 + 1;
              ++v13;
            }
            *v13++ = v52;
          }
          if ( (unsigned int)(uintptr_t)v10 > v91 )
          {
            v83 = v10;
            goto LABEL_7;
          }
          v53 = v10 - 2;
          v54 = -1640531535 * *(uint32_t *)(v10 - 2);
          if ( v94 )
            v55 = v54 >> 19;
          else
            v55 = v54 >> 20;
          if ( a7 == 1 )
          {
            v53 -= v93;
          }
          else if ( a7 != 0 )
          {
            if ( a7 == 2 )
            {
              *((uint16_t *)a1 + v55) = (uint16_t)(uintptr_t)v53 - v93;
              v56 = *(uint32_t *)v10;
            }
            else
            {
              v56 = *(uint32_t *)v10;
              if ( !v94 )
                goto LABEL_103;
            }
            v86 = -1640531535 * v56;
            v112 = (unsigned int)(-1640531535 * v56) >> 19;
LABEL_118:
            if ( a7 != 1 )
            {
              v97 = v93 + *((uint16_t *)a1 + v112);
              if ( a8 == 2 )
              {
LABEL_120:
                v59 = 0;
                if ( (unsigned int)(uintptr_t)a2 > v97 )
                  v59 = v81;
                v89 = v59;
                v60 = v88;
                if ( (unsigned int)(uintptr_t)a2 <= v97 )
                  v60 = a2;
                v82 = (unsigned int)(uintptr_t)v60;
              }
LABEL_106:
              v58 = v86 >> 20;
              if ( v94 )
                v58 = v86 >> 19;
              if ( a7 == 1 )
              {
                a1[v58] = (uint32_t)(uintptr_t)(&v10[-v93]);
              }
              else if ( a7 != 0 )
              {
                if ( a7 == 2 )
                  *((uint16_t *)a1 + v58) = (uint16_t)(uintptr_t)v10 - v93;
              }
              else
              {
                a1[v58] = (uint32_t)(uintptr_t)(v10);
              }
              if ( (unsigned int)(uintptr_t)v90 > v97 && a9 == 1
                || (unsigned int)(uintptr_t)v10 > v97 + 0xFFFF
                || *(uint32_t *)(v97 + v89) != *(uint32_t *)v10 )
              {
                v19 = v10 + 1;
                v63 = -1640531535 * *(uint32_t *)(v10 + 1);
                if ( v94 )
                  v21 = v63 >> 19;
                else
                  v21 = v63 >> 20;
                v83 = v10;
                continue;
              }
              v44 = (uint16_t *)(v13 + 1);
              *v13 = 0;
              v75 = v13;
              goto LABEL_77;
            }
            v97 = a1[v112] + v93;
LABEL_105:
            if ( a8 == 2 )
              goto LABEL_120;
            goto LABEL_106;
          }
          a1[v55] = (uint32_t)(uintptr_t)(v53);
          v56 = *(uint32_t *)v10;
LABEL_103:
          v86 = -1640531535 * v56;
          v57 = (unsigned int)(-1640531535 * v56) >> 20;
          v112 = v57;
          if ( a7 != 0 )
            goto LABEL_118;
          v97 = a1[v57];
          goto LABEL_105;
        }
        v107 = v10;
        if ( (unsigned int)(uintptr_t)v10 < v73 )
        {
          v114 = *(uint32_t *)a2 ^ *(uint32_t *)v10;
          if ( v114 != 0 )
          {
LABEL_148:
            _BitScanForward((unsigned int *)&v65, v114);
            v66 = &v107[v65 >> 3] - v10;
          }
          else
          {
            v64 = a2;
            v99 = v10;
            while ( 1 )
            {
              v10 += 4;
              v64 += 4;
              if ( (unsigned int)(uintptr_t)v10 >= v73 )
                break;
              v114 = *(uint32_t *)v64 ^ *(uint32_t *)v10;
              if ( v114 != 0 )
              {
                v107 = v10;
                v10 = v99;
                goto LABEL_148;
              }
            }
            v107 = v10;
            v10 = v99;
            v87 = v64;
LABEL_179:
            if ( (unsigned int)(uintptr_t)v107 < v68 && *(uint16_t *)v87 == *(uint16_t *)v107 )
            {
              v107 += 2;
              v87 += 2;
            }
            v67 = v107;
            if ( v80 > (unsigned int)(uintptr_t)v107 )
              v67 = &v107[*v87 == *v107];
            v66 = v67 - v10;
          }
          v51 += v66;
          v10 += v66;
          goto LABEL_88;
        }
        v87 = a2;
        goto LABEL_179;
      }
      v61 = v10 + 4;
      v113 = (uint16_t *)(v97 + 4);
      v106 = v10 + 4;
      if ( (unsigned int)(uintptr_t)(v10 + 4) >= v73 )
      {
LABEL_172:
        if ( (unsigned int)(uintptr_t)v61 < v68 && *v113 == *(uint16_t *)v61 )
        {
          v61 += 2;
          ++v113;
        }
        if ( v80 > (unsigned int)(uintptr_t)v61 )
          v61 += *(uint8_t *)v113 == (uint8_t)*v61;
        v51 = v61 - v106;
      }
      else
      {
        for ( j = *(uint32_t *)(v97 + 4) ^ *((uint32_t *)v10 + 1); j == 0; j = *(uint32_t *)v113 ^ *(uint32_t *)v61 )
        {
          v61 += 4;
          v113 += 2;
          if ( (unsigned int)(uintptr_t)v61 >= v73 )
            goto LABEL_172;
        }
        _BitScanForward((unsigned int *)&j, j);
        v51 = &v61[j >> 3] - v106;
      }
      v10 += v51 + 4;
      goto LABEL_88;
    }
    return 0;
  }
}

// Binary VA: 0xcc5f00 (source: lib_batch_0.json)
int sub_CC5F00(uint8_t *a1,
 unsigned int a2,
 int a3,
 int a4,
 int a5,
 int a6,
 int a7,
 int a8,
 char *src,
 int a10,
 unsigned int a11)
{
  unsigned int v11;
  unsigned int v12;
  uint8_t *v13;
  unsigned int v14;
  size_t v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  unsigned int v20;
  int v21;
  unsigned int v22;
  int v23;
  char *v24;
  char *v25;
  uint32_t *v26;
  unsigned int v27;
  int v28;
  unsigned int v29;
  uint32_t *v30;
  int v31;
  int v32;
  int result;
  int v34;
  int v35;
  int v36;
  int v37;
  char *v38;
  unsigned int v39;
  int v40;
  unsigned int v41;
  uint8_t *v42;
  char *v43;
  unsigned int v44;
  char v45;
  int v46;
  unsigned int v47;
  uint32_t *v48;
  char *v49;
  unsigned int v50;
  int v51;
  unsigned int v52;
  uint8_t *v53;
  char *v54;
  uint8_t *v55;
  char v56;
  int32_t v57;
  int *v58;
  int v59;
  unsigned int v60; // [esp-8Ch] [ebp-98h]
  unsigned int v61; // [esp-8Ch] [ebp-98h]
  size_t v62; // [esp-8Ch] [ebp-98h]
  int v65; // [esp-7Ch] [ebp-88h]
  unsigned int v66;
  unsigned int v67;
  uint8_t *v68;
  int v69;
  char v70;
  int v71;
  uint8_t *v72;
  int v73;
  unsigned int v74; // [esp-4Ch] [ebp-58h]
  int v75; // [esp-4Ch] [ebp-58h]
  unsigned int v76; // [esp-4Ch] [ebp-58h]
  char *v77; // [esp-4Ch] [ebp-58h]
  unsigned int v78; // [esp-4Ch] [ebp-58h]
  unsigned int v79;
  char *v80;
  unsigned int v81;
  unsigned int v82;
  uint8_t *v83;
  unsigned int v84;
  unsigned int v85;
  uint8_t *v86;
  unsigned int v87;
  char *v88;
  unsigned int v89;
  unsigned int v90;
  __m128i v91[2];
  __m128i v92[2];

  v67 = (unsigned int)(uintptr_t)&a1[a3];
  v68 = (uint8_t *)(a4 + a2);
  v11 = a7 + a2;
  v65 = a11 + a10;
  v91[0] = G4_BITCAST<__m128i>(xmmword_1C7C470);
  v91[1] = G4_BITCAST<__m128i>(xmmword_1C7C400);
  v92[0] = G4_BITCAST<__m128i>(xmmword_1C7C480);
  v92[1] = G4_BITCAST<__m128i>(xmmword_1C7C490);
  if ( a6 != 0 && v11 > (unsigned int)(uintptr_t)(v68 - 12) )
    v11 = (unsigned int)(uintptr_t)(v68 - 12);
  if ( a5 != 0 )
  {
    if ( a4 == 0 )
    {
      result = -1;
      if ( a3 == 1 )
        return -(*a1 != 0);
      return result;
    }
  }
  else if ( a4 == 0 )
  {
    return *a1 == 0 ? 1 : -1;
  }
  v12 = a2;
  if ( a6 == 0 )
    v11 = (unsigned int)(uintptr_t)(v68 - 12);
  v13 = a1;
  v66 = v11;
  while ( 1 )
  {
    v14 = *v13++;
    v70 = v14;
    v15 = v14 >> 4;
    if ( v14 >> 4 != 15 )
      goto LABEL_10;
    if ( a5 != 0 )
    {
      do
      {
        v32 = *v13++;
        v15 += v32;
      }
      while ( (unsigned int)(uintptr_t)v13 < v67 - 15 && v32 == 255 );
    }
    else
    {
      do
      {
        v34 = *v13++;
        v15 += v34;
        if ( v34 != 255 )
          break;
        v35 = *v13++;
        v15 += v35;
      }
      while ( v35 == 255 );
    }
    if ( a5 == 1 )
    {
      v16 = v15 + v12;
      if ( __CFADD__(v15, v12) || __CFADD__(v15, v13) )
        return a1 - v13 - 1;
    }
    else
    {
LABEL_10:
      v16 = v12 + v15;
    }
    if ( a5 != 0 )
      break;
    if ( v16 > (unsigned int)(uintptr_t)(v68 - 8) )
      goto LABEL_82;
    v72 = &v13[v15];
LABEL_14:
    v17 = v12 + 8;
    v18 = 1;
    if ( v12 + 1 <= v16 )
      v18 = ((v16 + ~v12) >> 3) + 1;
    v79 = v18;
    v87 = v18 >> 1;
    v69 = 2 * (v18 >> 1);
    if ( v69 != 0
      && ((unsigned int)(uintptr_t)v13 > v12 + 16 || v12 > (unsigned int)(uintptr_t)(v13 + 16))
      && ((v16 + ~v12) >> 3) + 1 > 5
      && v12 + 1 <= v16 )
    {
      v19 = 0;
      v20 = 0;
      do
      {
        ++v20;
        *(__m128i *)(v12 + v19) = *(__m128i *)&v13[v19];
        v19 += 16;
      }
      while ( v87 > v20 );
      v12 += 8 * v69;
      v13 += 8 * v69;
      if ( v79 == v69 )
        goto LABEL_24;
      v17 = v12 + 8;
    }
    while ( 1 )
    {
      *(uint32_t *)v12 = *(uint32_t *)v13;
      v21 = *((uint32_t *)v13 + 1);
      v13 += 8;
      *(uint32_t *)(v12 + 4) = v21;
      v12 = v17;
      if ( v16 <= v17 )
        break;
      v17 += 8;
    }
LABEL_24:
    v22 = v16 - *(uint16_t *)v72;
    v13 = v72 + 2;
    if ( a5 == 1 && a11 <= 0xFFFF && (unsigned int)(uintptr_t)&src[-a11] > v22 )
      return a1 - v13 - 1;
    v23 = v70 & 0xF;
    if ( v23 == 15 )
    {
      if ( a5 != 0 )
      {
        while ( (unsigned int)(uintptr_t)v13 <= v67 - 5 )
        {
          v37 = *v13++;
          v23 += v37;
          if ( v37 != 255 )
            goto LABEL_62;
        }
        return a1 - v13 - 1;
      }
      do
      {
        v36 = *v13++;
        v23 += v36;
      }
      while ( v36 == 255 );
LABEL_62:
      if ( a5 == 1 && __CFADD__(v23, v16) )
        return a1 - v13 - 1;
    }
    v24 = (char *)(v23 + 4);
    v80 = v24;
    if ( v22 < (unsigned int)(uintptr_t)src && a8 == 2 )
    {
      v12 = (unsigned int)(uintptr_t)&v24[v16];
      if ( &v24[v16] > (char *)(v68 - 5) )
        return a1 - v13 - 1;
      v88 = &src[-v22];
      if ( v24 > &src[-v22] )
      {
        v60 = v16;
        memcpy((void *)v16, (const void *)(v65 - (uint32_t)(uintptr_t)v88), (size_t)&src[-v22]);
        v12 = (unsigned int)(uintptr_t)&v88[v60];
        if ( v80 - v88 <= (unsigned int)(&v88[v60] - src) )
        {
          memcpy(&v88[v60], src, v80 - v88);
          v12 = (unsigned int)(uintptr_t)&v80[v60];
        }
        else
        {
          v38 = &v80[v60];
          v90 = (unsigned int)(uintptr_t)&v80[v60];
          if ( v12 < (unsigned int)(uintptr_t)&v80[v60] )
          {
            v82 = (unsigned int)(uintptr_t)&v38[-v12];
            v39 = (unsigned int)(uintptr_t)&v38[-v12] >> 4;
            v75 = 16 * v39;
            if ( 16 * v39 != 0 && ((unsigned int)(uintptr_t)src > v12 + 16 || v12 > (unsigned int)(uintptr_t)(src + 16)) && v82 > 0xF )
            {
              v40 = 0;
              v41 = 0;
              do
              {
                ++v41;
                *(__m128i *)(v12 + v40) = *(__m128i *)&src[v40];
                v40 += 16;
              }
              while ( v39 > v41 );
              v42 = (uint8_t *)(v12 + v75);
              v43 = &src[v75];
              if ( v82 == v75 )
                goto LABEL_78;
              v83 = v13;
              v44 = v90;
            }
            else
            {
              v83 = v13;
              v43 = src;
              v42 = (uint8_t *)v12;
              v44 = v90;
            }
            do
            {
              v45 = *v43++;
              *v42++ = v45;
            }
            while ( v44 > (unsigned int)(uintptr_t)v42 );
            v13 = v83;
LABEL_78:
            v12 = v90;
          }
        }
      }
      else
      {
        memcpy((void *)v16, (const void *)(v65 + v22 - (uint32_t)(uintptr_t)src), (size_t)v24);
      }
    }
    else
    {
      v89 = (unsigned int)(uintptr_t)&v24[v16];
      if ( *(uint16_t *)v72 <= 7u )
      {
        v57 = v92[0].i32[*(uint16_t *)v72];
        *(uint8_t *)v16 = *(uint8_t *)v22;
        *(uint8_t *)(v16 + 1) = *(uint8_t *)(v22 + 1);
        *(uint8_t *)(v16 + 2) = *(uint8_t *)(v22 + 2);
        *(uint8_t *)(v16 + 3) = *(uint8_t *)(v22 + 3);
        v58 = (int *)(v91[0].i32[v16 - v22] + v22);
        v59 = *v58;
        v25 = (char *)v58 - v57;
        *(uint32_t *)(v16 + 4) = v59;
      }
      else
      {
        *(uint32_t *)v16 = *(uint32_t *)v22;
        *(uint32_t *)(v16 + 4) = *(uint32_t *)(v22 + 4);
        v25 = (char *)(v22 + 8);
      }
      v26 = (uint32_t *)(v16 + 8);
      if ( (unsigned int)(uintptr_t)(v68 - 12) < v89 )
      {
        if ( v89 > (unsigned int)(uintptr_t)(v68 - 5) )
          return a1 - v13 - 1;
        v84 = (unsigned int)(uintptr_t)(v68 - 8);
        if ( v26 >= (uint32_t *)v68 - 2 )
          goto LABEL_109;
        v76 = ((unsigned int)(v68 - 9 - (uint8_t *)v26) >> 3) + 1;
        if ( 2 * (v76 >> 1) == 0 || v25 <= (char *)v26 + 16 && v26 <= (uint32_t *)v25 + 4 || v76 <= 5 )
        {
          v48 = v26;
          v49 = v25;
          v77 = v25;
          goto LABEL_106;
        }
        v46 = 0;
        v47 = 0;
        do
        {
          ++v47;
          *(__m128i *)&v26[v46] = *(__m128i *)&v25[v46 * 4];
          v46 += 4;
        }
        while ( v76 >> 1 > v47 );
        v48 = &v26[4 * (v76 >> 1)];
        if ( v76 != 2 * (v76 >> 1) )
        {
          v49 = &v25[16 * (v76 >> 1)];
          v77 = v25;
          do
          {
LABEL_106:
            *v48 = *(uint32_t *)v49;
            v48[1] = *((uint32_t *)v49 + 1);
            v48 += 2;
            v49 += 8;
          }
          while ( v84 > (unsigned int)(uintptr_t)v48 );
          v25 = v77;
        }
        v50 = v84 - (uint32_t)(uintptr_t)v26;
        v26 = (uint32_t *)(v68 - 8);
        v25 += v50;
LABEL_109:
        v12 = v89;
        if ( (unsigned int)(uintptr_t)v26 < v89 )
        {
          v85 = v89 - (uint32_t)(uintptr_t)v26;
          v78 = (v89 - (unsigned int)(uintptr_t)v26) >> 4;
          v73 = 16 * v78;
          if ( 16 * v78 != 0 )
          {
            if ( (v25 > (char *)v26 + 16 || v26 > (uint32_t *)v25 + 4) && v85 > 0xF )
            {
              v51 = 0;
              v52 = 0;
              do
              {
                ++v52;
                *(__m128i *)&v26[v51] = *(__m128i *)&v25[v51 * 4];
                v51 += 4;
              }
              while ( v78 > v52 );
              v53 = (uint8_t *)(&v26[v73 / 4u]);
              v25 += v73;
              if ( v85 == v73 )
                goto LABEL_47;
              v54 = (char *)(v53 + 1);
              v55 = v53;
            }
            else
            {
              v54 = (char *)v26 + 1;
              v55 = (uint8_t *)(v26);
            }
          }
          else
          {
            v54 = (char *)v26 + 1;
            v55 = (uint8_t *)(v26);
          }
          while ( 1 )
          {
            v56 = *v25++;
            *v55 = v56;
            v86 = (uint8_t *)(v54);
            if ( v89 <= (unsigned int)(uintptr_t)v54 )
              break;
            ++v54;
            v55 = v86;
          }
          goto LABEL_47;
        }
      }
      else
      {
        v27 = 1;
        if ( (unsigned int)(uintptr_t)v26 + 1 <= v89 )
          v27 = ((v89 + 7 - (unsigned int)(uintptr_t)(v26 + 2)) >> 3) + 1;
        v74 = v27;
        v81 = v27 >> 1;
        v71 = 2 * (v27 >> 1);
        if ( v71 == 0
          || v25 <= (char *)v26 + 16 && v26 <= (uint32_t *)v25 + 4
          || ((v89 + 7 - (unsigned int)(uintptr_t)(v26 + 2)) >> 3) + 1 <= 5
          || (unsigned int)(uintptr_t)v26 + 1 > v89 )
        {
          v30 = v26 + 2;
LABEL_46:
          while ( 1 )
          {
            *v26 = *(uint32_t *)v25;
            v31 = *((uint32_t *)v25 + 1);
            v25 += 8;
            v26[1] = v31;
            v26 = v30;
            if ( v89 <= (unsigned int)(uintptr_t)v30 )
              break;
            v30 += 2;
          }
          goto LABEL_47;
        }
        v28 = 0;
        v29 = 0;
        do
        {
          ++v29;
          *(__m128i *)&v26[v28] = *(__m128i *)&v25[v28 * 4];
          v28 += 4;
        }
        while ( v81 > v29 );
        v26 += 2 * v71;
        v25 += 8 * v71;
        if ( v74 != v71 )
        {
          v30 = v26 + 2;
          goto LABEL_46;
        }
LABEL_47:
        v12 = v89;
      }
    }
  }
  if ( v66 >= v16 )
  {
    v72 = &v13[v15];
    if ( (unsigned int)(uintptr_t)&v13[v15] <= v67 - 8 )
      goto LABEL_14;
  }
LABEL_82:
  if ( a6 != 0 )
  {
    if ( (unsigned int)(uintptr_t)v68 < v16 )
      return a1 - v13 - 1;
    if ( a5 != 0 )
    {
      if ( v67 >= (unsigned int)(uintptr_t)&v13[v15] )
        goto LABEL_86;
      return a1 - v13 - 1;
    }
LABEL_93:
    v62 = v15;
    memcpy((void *)v12, v13, v15);
    return &v13[v62] - a1;
  }
  else
  {
    if ( v68 != (uint8_t *)v16 && a5 == 0 )
      return a1 - v13 - 1;
    if ( a5 == 0 )
      goto LABEL_93;
    if ( (uint8_t *)v67 != &v13[v15] || (unsigned int)(uintptr_t)v68 < v16 )
      return a1 - v13 - 1;
LABEL_86:
    v61 = v16;
    memcpy((void *)v12, v13, v15);
    return v61 - a2;
  }
}

// Binary VA: 0xc97480 (source: lib_batch_0.json)
int sub_C97480(size_t *a1, char *a2, int a3)
{
  int result;
  size_t v4;
  size_t n;
  size_t v6;
  int v7;
  int v8;
  size_t v9;
  size_t v10;
  int v11;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  size_t *v15;
  uint32_t *i;
  size_t *v17;
  size_t v18;
  size_t v19;
  int v20;
  int v21;
  uint32_t *v22;
  size_t *v23;
  size_t j;
  int v25;
  size_t v26;
  int v27;
  size_t v28;
  int v29;
  size_t v30;
  int v31;
  int v32;
  size_t v33;
  int v34;
  size_t *v35;
  size_t v36;
  int jj;
  int v38;
  size_t v39;
  size_t v40;
  size_t v41;
  int v42;
  int v43;
  size_t v44;
  int v45;
  size_t *v46;
  size_t *k;
  int v48;
  char *m;
  char *v50;
  size_t v51;
  size_t v52;
  size_t v53;
  int v54;
  int v55;
  size_t v56;
  int kk;
  size_t v58;
  size_t v59;
  size_t v60;
  int v61;
  int ii;
  size_t v63;
  size_t v64;
  size_t v65;
  int v66;
  int v67;
  uint32_t *s1;
  void *v69;
  void *s2;
  uint32_t *v71;
  uint32_t *v72; // [esp+1Ch] [ebp-60h]
  void *v73; // [esp+1Ch] [ebp-60h]
  char *v74; // [esp+1Ch] [ebp-60h]
  void *v75; // [esp+1Ch] [ebp-60h]
  int v76; // [esp+1Ch] [ebp-60h]
  size_t v77;
  size_t v78;
  int v79;
  int v80;
  int v81;
  size_t v82;
  size_t *v83;
  size_t *v84;
  size_t *v85;
  size_t *v86;
  size_t v87;
  size_t v88;
  size_t v89;
  signed int v90;
  size_t v91;
  size_t v92;
  size_t v93;
  void *v94; // [esp+2Ch] [ebp-50h]
  uint32_t *v95; // [esp+2Ch] [ebp-50h]
  size_t *v96; // [esp+2Ch] [ebp-50h]
  size_t *v98;
  size_t *v99;
  size_t *v100;
  size_t v101;
  size_t v102;
  int v103;
  int v104;
  size_t *v105; // [esp+3Ch] [ebp-40h]
  size_t v106;
  int v107;
  int v108;
  int v109;
  size_t v110;
  int v111; // [esp+4Ch] [ebp-30h]
  size_t *v112;
  size_t *v113;
  int v114; // [esp+5Ch] [ebp-20h]

  result = a2 - (char *)a1;
  v100 = (size_t *)a2;
  if ( result > 67 )
  {
    if ( a3 != 0 )
    {
      while ( 1 )
      {
        --a3;
        v77 = *a1;
        v83 = &a1[result >> 3];
        v87 = *v83;
        v72 = *(uint32_t **)(*a1 + 8);
        v4 = *(v72 - 3);
        n = v4;
        v6 = *(uint32_t *)(*(uint32_t *)(*v83 + 8) - 12);
        v69 = *(void **)(*v83 + 8);
        if ( v6 <= v4 )
          n = *(uint32_t *)(*(uint32_t *)(*v83 + 8) - 12);
        v7 = memcmp(*(const void **)(*a1 + 8), *(const void **)(*v83 + 8), n);
        if ( v7 == 0 )
          v7 = v4 - v6;
        v94 = (void *)*(v100 - 1);
        v8 = *((uint32_t *)v94 + 2);
        v9 = *(uint32_t *)(v8 - 12);
        if ( v7 >= 0 )
        {
          v28 = v4;
          v71 = *((uint32_t **)v94 + 2);
          if ( v9 <= v4 )
            v28 = *(uint32_t *)(v8 - 12);
          v29 = memcmp(v72, *((const void **)v94 + 2), v28);
          v13 = v71;
          if ( v29 == 0 )
            v29 = v4 - v9;
          if ( v29 >= 0 )
          {
            v30 = v6;
            if ( v9 <= v6 )
              v30 = v9;
            v31 = v6 - v9;
            v32 = memcmp(v69, v71, v30);
            if ( v32 == 0 )
              v32 = v31;
            if ( v32 < 0 )
            {
LABEL_43:
              *a1 = (size_t)v94;
              *(v100 - 1) = v77;
              v13 = *(uint32_t **)(v77 + 8);
              v72 = *(uint32_t **)(*a1 + 8);
              v9 = *(v13 - 3);
              v4 = *(v72 - 3);
              goto LABEL_14;
            }
LABEL_13:
            *a1 = v87;
            *v83 = v77;
            v72 = *(uint32_t **)(*a1 + 8);
            v4 = *(v72 - 3);
            v13 = *(uint32_t **)(*(v100 - 1) + 8);
            v9 = *(v13 - 3);
          }
        }
        else
        {
          v10 = v6;
          if ( v9 <= v6 )
            v10 = *(uint32_t *)(v8 - 12);
          s2 = *((void **)v94 + 2);
          v11 = v6 - v9;
          v12 = memcmp(v69, s2, v10);
          if ( v12 == 0 )
            v12 = v11;
          if ( v12 < 0 )
            goto LABEL_13;
          v33 = v4;
          if ( v9 <= v4 )
            v33 = v9;
          v34 = memcmp(v72, s2, v33);
          v13 = (uint32_t *)(s2);
          if ( v34 == 0 )
            v34 = v4 - v9;
          if ( v34 < 0 )
            goto LABEL_43;
        }
LABEL_14:
        v14 = v13;
        v84 = v100;
        v15 = a1 + 1;
        for ( i = v14; ; v9 = *(i - 3) )
        {
          v88 = v9;
          v95 = i;
          do
          {
            v17 = v15;
            v78 = *v15;
            s1 = *(uint32_t **)(*v15 + 8);
            v19 = *(s1 - 3);
            v18 = v19;
            if ( v4 <= v19 )
              v19 = v4;
            v20 = v18 - v4;
            v21 = memcmp(s1, v72, v19);
            v15 = v17 + 1;
            if ( v21 == 0 )
              v21 = v20;
          }
          while ( v21 < 0 );
          v22 = v95;
          v23 = v84 - 1;
          v96 = v17;
          for ( j = v88; ; j = *(v22 - 3) )
          {
            v26 = v4;
            if ( j <= v4 )
              v26 = j;
            v89 = *v23;
            v84 = v23;
            v27 = memcmp(v72, v22, v26);
            if ( v27 == 0 )
              v27 = v4 - j;
            if ( v27 >= 0 )
              break;
            v25 = *--v23;
            v22 = *(uint32_t **)(v25 + 8);
          }
          if ( v23 <= v96 )
            break;
          *v96 = v89;
          *v23 = v78;
          v15 = v96 + 1;
          v72 = *(uint32_t **)(*a1 + 8);
          v4 = *(v72 - 3);
          i = *(uint32_t **)(*(v23 - 1) + 8);
        }
        sub_C97480(a3);
        result = (char *)v96 - (char *)a1;
        if ( (char *)v96 - (char *)a1 <= 67 )
          return result;
        if ( a3 == 0 )
          goto LABEL_67;
        v100 = v96;
      }
    }
    v96 = (size_t *)a2;
LABEL_67:
    v45 = result >> 2;
    v46 = a1;
    v114 = v45 & 1;
    v108 = (v45 - 1) >> 1;
    v111 = (v45 - 2) >> 1;
    v107 = v111;
    v112 = &a1[v111];
    v113 = &a1[2 * v111 + 1];
    v105 = v112;
    for ( k = v112; ; k = v105 )
    {
      v48 = v107;
      v110 = *k;
      if ( v107 < v108 )
      {
        v104 = v107;
        for ( m = (char *)v107; ; v104 = (int)(uintptr_t)m )
        {
          v50 = m + 1;
          v74 = (char *)(2 * (uint32_t)(uintptr_t)v50);
          v80 = 2 * (uint32_t)(uintptr_t)v50 - 1;
          v99 = &v46[2 * (uint32_t)(uintptr_t)v50];
          v102 = *v99;
          v92 = v46[v80];
          v51 = *(uint32_t *)(*(uint32_t *)(*v99 + 8) - 12);
          v52 = *(uint32_t *)(*(uint32_t *)(v92 + 8) - 12);
          v53 = v51;
          if ( v52 <= v51 )
            v53 = *(uint32_t *)(*(uint32_t *)(v92 + 8) - 12);
          v54 = v51 - v52;
          v55 = memcmp(*(const void **)(*v99 + 8), *(const void **)(v92 + 8), v53);
          k = v99;
          v56 = v102;
          if ( v55 != 0 )
            v54 = v55;
          m = v74;
          if ( v54 < 0 )
          {
            m = (char *)v80;
            v56 = v92;
            k = &v46[v80];
          }
          v48 = (int)(uintptr_t)m;
          v46[v104] = v56;
          if ( (int)(uintptr_t)m >= v108 )
            break;
        }
      }
      if ( v114 == 0 && v111 == v48 )
      {
        k = v113;
        v48 = 2 * v111 + 1;
        *v112 = *v113;
      }
      if ( v107 < v48 )
      {
        v93 = v48;
        v76 = (v48 - 1) / 2;
        for ( ii = v76; ; v76 = ii )
        {
          v86 = &v46[ii];
          v82 = *v86;
          v63 = *(uint32_t *)(*(uint32_t *)(*v86 + 8) - 12);
          v64 = v63;
          v65 = *(uint32_t *)(*(uint32_t *)(v110 + 8) - 12);
          if ( v65 <= v63 )
            v64 = *(uint32_t *)(*(uint32_t *)(v110 + 8) - 12);
          v66 = v63 - v65;
          v67 = memcmp(*(const void **)(*v86 + 8), *(const void **)(v110 + 8), v64);
          if ( v67 == 0 )
            v67 = v66;
          if ( v67 >= 0 )
          {
            k = &v46[v93];
            goto LABEL_82;
          }
          v46[v93] = v82;
          if ( v107 >= v76 )
            break;
          ii = (v76 - 1) / 2;
          v93 = v76;
        }
        k = v86;
      }
LABEL_82:
      --v105;
      *k = v110;
      if ( v107 == 0 )
        break;
      --v107;
    }
    while ( 1 )
    {
      --v96;
      v35 = v46;
      v90 = 0;
      v36 = *v96;
      *v96 = *v46;
      v106 = v36;
      v109 = v96 - v46;
      if ( (v109 - 1) / 2 > 0 )
      {
        v103 = 0;
        for ( jj = 0; ; v103 = jj )
        {
          v38 = jj + 1;
          v73 = (void *)(2 * v38);
          v79 = 2 * v38 - 1;
          v98 = &v46[2 * v38];
          v91 = v46[v79];
          v101 = *v98;
          v39 = *(uint32_t *)(*(uint32_t *)(*v98 + 8) - 12);
          v40 = v39;
          v41 = *(uint32_t *)(*(uint32_t *)(v91 + 8) - 12);
          if ( v41 <= v39 )
            v40 = *(uint32_t *)(*(uint32_t *)(v91 + 8) - 12);
          v42 = v39 - v41;
          v43 = memcmp(*(const void **)(*v98 + 8), *(const void **)(v91 + 8), v40);
          v35 = v98;
          v44 = v101;
          if ( v43 != 0 )
            v42 = v43;
          jj = (int)(uintptr_t)v73;
          if ( v42 < 0 )
          {
            v44 = v91;
            jj = v79;
            v35 = &v46[v79];
          }
          v46[v103] = v44;
          if ( jj >= (v109 - 1) / 2 )
            break;
        }
        v90 = jj;
      }
      if ( (v109 & 1) == 0 && v90 == (v109 - 2) / 2 )
        break;
      result = v90;
      if ( v90 > 0 )
        goto LABEL_85;
LABEL_64:
      *v35 = v106;
      if ( (char *)v96 - (char *)v46 <= 7 )
        return result;
    }
    v90 = 2 * v90 + 1;
    *v35 = v46[v90];
LABEL_85:
    v81 = (v90 - 1) >> 1;
    for ( kk = v81; ; v81 = kk )
    {
      v85 = &v46[kk];
      v75 = (void *)*v85;
      v58 = *(uint32_t *)(*(uint32_t *)(*v85 + 8) - 12);
      v59 = v58;
      v60 = *(uint32_t *)(*(uint32_t *)(v106 + 8) - 12);
      if ( v60 <= v58 )
        v59 = *(uint32_t *)(*(uint32_t *)(v106 + 8) - 12);
      v61 = v58 - v60;
      result = memcmp(*(const void **)(*v85 + 8), *(const void **)(v106 + 8), v59);
      if ( result == 0 )
        result = v61;
      if ( result >= 0 )
      {
        v35 = &v46[v90];
        goto LABEL_64;
      }
      v46[v90] = (size_t)v75;
      result = (v81 - 1) / 2;
      if ( v81 == 0 )
        break;
      kk = (v81 - 1) / 2;
      v90 = v81;
    }
    v35 = v85;
    goto LABEL_64;
  }
  return result;
}

// Binary VA: 0xc97330 (source: lib_batch_0.json)
int sub_C97330(int result, uint32_t *a2)
{
  size_t v2;
  size_t n;
  size_t v4;
  int v5;
  const void *s1;
  uint32_t *v7;
  size_t v8;
  size_t v9;
  int v10;
  uint32_t *v11;
  void *v12;
  int v13;
  uint32_t *v14;
  uint32_t *v15; // [esp+1Ch] [ebp-30h]
  int v16;
  uint32_t *v17;
  uint8_t *src;

  src = (uint8_t *)result;
  if ( (uint32_t *)result != a2 )
  {
    result += 4;
    if ( a2 != (uint32_t *)result )
    {
      v17 = (uint32_t *)result;
      do
      {
        v14 = v17;
        v16 = *v17;
        v2 = *(uint32_t *)(*(uint32_t *)(*v17 + 8) - 12);
        n = v2;
        v4 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)src + 8) - 12);
        v12 = *(void **)(*v17 + 8);
        if ( v4 <= v2 )
          n = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)src + 8) - 12);
        v5 = memcmp(*(const void **)(*v17 + 8), *(const void **)(*(uint32_t *)src + 8), n);
        s1 = v12;
        if ( v5 == 0 )
          v5 = v2 - v4;
        v7 = v17 - 1;
        if ( v5 >= 0 )
        {
          while ( 1 )
          {
            v15 = v7;
            v13 = *v7;
            v8 = *(uint32_t *)(*(uint32_t *)(*v7 + 8) - 12);
            v9 = v8;
            if ( v2 <= v8 )
              v9 = v2;
            v10 = v2 - v8;
            result = memcmp(s1, *(const void **)(*v7 + 8), v9);
            if ( result == 0 )
              result = v10;
            --v7;
            if ( result >= 0 )
              break;
            *v14 = v13;
            s1 = *(const void **)(v16 + 8);
            v14 = v15;
            v2 = *((uint32_t *)s1 - 3);
          }
          v11 = v17 + 1;
          *v14 = v16;
        }
        else
        {
          v11 = v17 + 1;
          if ( ((char *)v17 - (char *)(src)) >> 2 != 0 )
            memmove(&v11[-(((char *)v17 - (char *)(src)) >> 2)], src, 4 * (((char *)v17 - (char *)(src)) >> 2));
          result = (int)(uintptr_t)src;
          *(uint32_t *)src = v16;
        }
        v17 = v11;
      }
      while ( a2 != v11 );
    }
  }
  return result;
}

// Binary VA: 0x655c20 (source: game_core_batch_1.json)
int *sub_655C20()
{
  int *result;

  if ( byte_20D2800 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2800) != 0 )
  {
    sub_AABC00((int)(uintptr_t)&dword_20D2820);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2800);
    __cxa_atexit((void (*)(void *))sub_542BE0, &dword_20D2820, &unk_20D1280);
  }
  result = nullptr;
  if ( byte_20D2824 == 0 )
    return (int *)(&dword_20D2820);
  return result;
}

// Binary VA: 0xc928c0 (source: lib_batch_0.json)
int sub_C928C0(int a1, int a2, int a3, char *format, va_list __varargs)
{
  int SequentialThreadId;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  int v12;
  int v14;
  char *v15;
  char *v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  pthread_mutex_t **v20;
  char v21;
  unsigned int v22;
  int v23; // [esp-Ch] [ebp-138h]
  char *v24;
  int v25;
  int v26;
  char *v27;
  int64_t Milliseconds; // [esp+Ch] [ebp-120h]
  int v29;
  int v30;
  int v31; // [esp+1Ch] [ebp-110h]
  char s[268];

  v20 = (pthread_mutex_t **)(a1 + 4);
  glf::Mutex::Lock((pthread_mutex_t **)(a1 + 4));
  glf::PrintParams::Construct((glf::PrintParams::Self *)&v27);
  v29 = a2;
  v30 = a3;
  Milliseconds = glf::GetMilliseconds();
  SequentialThreadId = glf::Thread::GetSequentialThreadId();
  v8 = *(uint32_t *)(a1 + 32);
  v31 = SequentialThreadId;
  v9 = *(uint32_t *)(a1 + 28);
  if ( (unsigned int)(v8 - v9) >> 2 != 0 )
  {
    v25 = a1;
    v24 = nullptr;
    v23 = 0;
    v21 = 0;
    v10 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v12 = *(uint32_t *)(v9 + 4 * v10);
        if ( v12 != 0 )
          break;
LABEL_6:
        if ( ++v10 >= (v8 - v9) >> 2 )
          return glf::Mutex::Unlock(v20);
      }
      __sync_add_and_fetch((volatile int32_t *)(v12 + 4), 1u);
      if ( (uint8_t)glf::Logger::IsStreamEnabled(v25, v10) != 0 && a3 >= *(uint32_t *)(v12 + 12) )
      {
        if ( v21 == 0 )
          break;
        if ( v24 != nullptr )
          goto LABEL_12;
LABEL_13:
        v21 = 1;
      }
      if ( __sync_fetch_and_add((volatile int32_t *)(v12 + 4), 0xFFFFFFFF) != 1 )
      {
        v11 = *(uint32_t *)(v12 + 4);
        _mm_mfence();
        if ( v11 == 1 )
          G4_VCALL<void>(v12, 12);
        v9 = *(uint32_t *)(v25 + 28);
        v8 = *(uint32_t *)(v25 + 32);
        goto LABEL_6;
      }
      G4_VCALL<void>(v12, 8);
      G4_VCALL<void>(v12, 16);
      ++v10;
      v9 = *(uint32_t *)(v25 + 28);
      v8 = *(uint32_t *)(v25 + 32);
      if ( v10 >= (v8 - v9) >> 2 )
        return glf::Mutex::Unlock(v20);
    }
    v14 = vsnprintf(s, 0xFEu, format, __varargs);
    if ( v14 < 0 )
    {
      v22 = v10;
      v15 = *(char **)(v25 + 12);
      v16 = *(char **)(v25 + 16);
      while ( 1 )
      {
        if ( (double)(unsigned int)(v16 - v15) >= 1000000.0 )
        {
          v10 = v22;
          goto LABEL_31;
        }
        v17 = vsnprintf(v15, *(uint32_t *)(v25 + 16) - (uint32_t)(uintptr_t)v15 - 2, format, __varargs);
        if ( v17 >= 0 )
          break;
        LOBYTE(v26) = 0;
        v15 = *(char **)(v25 + 12);
        v18 = *(uint32_t *)(v25 + 16) - (uint32_t)(uintptr_t)v15;
        v19 = v18 + 0x4000;
        if ( v18 < v18 + 0x4000 )
        {
          g4_std_vector_char_fill_insert((size_t *)(v25 + 12), *(char **)(v25 + 16), 0x4000u, (char *)&v26);
          v15 = *(char **)(v25 + 12);
          v16 = *(char **)(v25 + 16);
        }
        else
        {
          v16 = &v15[v19];
          *(uint32_t *)(v25 + 16) = (uint32_t)(uintptr_t)(&v15[v19]);
        }
      }
      v10 = v22;
      v23 = v17;
      v24 = *(char **)(v25 + 12);
LABEL_31:
      if ( v24 == nullptr )
        goto LABEL_13;
    }
    else
    {
      v23 = v14;
      if ( v14 == 254 )
        s[254] = 0;
      v24 = s;
    }
    if ( v23 == 0 || v24[v23 - 1] != 10 )
    {
      v24[v23] = 10;
      v24[++v23] = 0;
    }
LABEL_12:
    v27 = v24;
    G4_VCALL<void>(v12, 20, &v27);
    goto LABEL_13;
  }
  return glf::Mutex::Unlock(v20);
}

// Binary VA: 0xccb450 (source: lib_batch_0.json)
int sub_CCB450(int a1, int a2)
{
  size_t v2;
  int i;
  int v4;
  uint32_t *v5;
  size_t v6;
  size_t n;
  int v8;
  uint32_t *v9;
  void *v10;
  size_t v11;
  uint32_t *v12;
  int v13;
  int v14;
  uint32_t *v16;
  unsigned int v17;
  size_t v18;
  size_t v19;
  unsigned int v20;
  int v21;
  int v22;
  int v23;
  unsigned int v24;
  size_t v25;
  size_t v26;
  size_t v27;
  unsigned int v28;
  unsigned int v29;
  int v30;
  int v31;
  uint32_t *v32;
  char v33; // [esp+1Ch] [ebp-30h]
  void *s1;
  size_t v37; // [esp+2Ch] [ebp-20h]
  size_t v38; // [esp+2Ch] [ebp-20h]

  if ( (*(uint8_t **)unk_20DF738) == 0 )
  {
    v10 = &unk_20DF734;
    goto LABEL_16;
  }
  s1 = *(void **)a2;
  v2 = *(uint32_t *)(*(uint32_t *)a2 - 12);
  for ( i = (int)(uintptr_t)((*(uint8_t **)unk_20DF738)); ; i = v4 )
  {
    v5 = *(uint32_t **)(i + 16);
    v6 = *(v5 - 3);
    n = v6;
    v32 = (uint32_t *)i;
    if ( v2 <= v6 )
      n = v2;
    v37 = n;
    v8 = memcmp(s1, *(const void **)(i + 16), n);
    if ( v8 == 0 )
      v8 = v2 - v6;
    if ( v8 >= 0 )
      break;
    v4 = v32[2];
    v33 = 1;
    if ( v4 == 0 )
      goto LABEL_11;
LABEL_4:
    ;
  }
  v4 = v32[3];
  v33 = 0;
  if ( v4 != 0 )
    goto LABEL_4;
LABEL_11:
  v9 = v5;
  v10 = v32;
  v11 = v37;
  v12 = v9;
  v38 = (size_t)v32;
  if ( v33 == 0 )
    goto LABEL_12;
LABEL_16:
  if ( (void *)(*(uint8_t **)unk_20DF73C) == v10 )
  {
    LOBYTE(v24) = 1;
    if ( v10 != &unk_20DF734 )
    {
      v25 = *(uint32_t *)(*(uint32_t *)a2 - 12);
      v26 = *(uint32_t *)(*((uint32_t *)v10 + 4) - 12);
      v27 = v25;
      if ( v26 <= v25 )
        v27 = *(uint32_t *)(*((uint32_t *)v10 + 4) - 12);
      v28 = v25 - v26;
      v29 = memcmp(*(const void **)a2, *((const void **)v10 + 4), v27);
      if ( v29 == 0 )
        v29 = v28;
      v24 = v29 >> 31;
    }
    v30 = (int)(uintptr_t)(operator new(0x1Cu));
    if ( v30 != -16 )
    {
      sub_193A2E0((size_t **)(uintptr_t)(v30 + 16), (size_t **)(uintptr_t)(a2));
      v31 = *(uint32_t *)(a2 + 4);
      *(uint32_t *)(v30 + 24) = *(uint32_t *)(a2 + 8);
      *(uint32_t *)(v30 + 20) = v31;
    }
    sub_1904970(v24, v30, v10, &unk_20DF734);
    *(uint32_t *)a1 = v30;
    ++unk_20DF744;
    *(uint8_t *)(a1 + 4) = 1;
    return a1;
  }
  else
  {
    v16 = (uint32_t *)sub_19048F0(v10);
    v12 = (uint32_t *)v16[4];
    v38 = (size_t)v10;
    v10 = v16;
    v6 = *(v12 - 3);
    s1 = *(void **)a2;
    v2 = *(uint32_t *)(*(uint32_t *)a2 - 12);
    v11 = v2;
    if ( v6 <= v2 )
      v11 = *(v12 - 3);
LABEL_12:
    v13 = memcmp(v12, s1, v11);
    v14 = v6 - v2;
    if ( v13 == 0 )
      v13 = v14;
    if ( v13 < 0 )
    {
      LOBYTE(v17) = 1;
      if ( (void *)v38 != &unk_20DF734 )
      {
        v18 = *(uint32_t *)(*(uint32_t *)(v38 + 16) - 12);
        v19 = v18;
        if ( v2 <= v18 )
          v19 = v2;
        v20 = v2 - v18;
        v21 = memcmp(s1, *(const void **)(v38 + 16), v19);
        if ( v21 != 0 )
          v20 = v21;
        v17 = v20 >> 31;
      }
      v22 = (int)(uintptr_t)(operator new(0x1Cu));
      if ( v22 != -16 )
      {
        sub_193A2E0((size_t **)(uintptr_t)(v22 + 16), (size_t **)(uintptr_t)(a2));
        v23 = *(uint32_t *)(a2 + 4);
        *(uint32_t *)(v22 + 24) = *(uint32_t *)(a2 + 8);
        *(uint32_t *)(v22 + 20) = v23;
      }
      sub_1904970(v17, v22, v38, &unk_20DF734);
      *(uint32_t *)a1 = v22;
      ++unk_20DF744;
      *(uint8_t *)(a1 + 4) = 1;
      return a1;
    }
    else
    {
      *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v10);
      *(uint8_t *)(a1 + 4) = 0;
      return a1;
    }
  }
}

// Binary VA: 0xc83760 (source: lib_batch_0.json)
int * sub_C83760(int *a1, uint32_t *a2, int a3, int a4)
{
  uint32_t *s1;
  size_t v5;
  size_t n;
  int v7;
  int v8;
  int v10;
  size_t v11;
  size_t v12;
  int v13;
  int v14;
  int v15;
  size_t v16;
  size_t v17;
  int v18;
  int v19;
  uint32_t *v20;
  size_t v21;
  size_t v22;
  int v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  char v29;
  void *v30;
  void *v31;
  size_t v32;
  int v33;
  char v34;
  size_t v35;
  const void *v36;
  const void *v37;
  void *s2;
  void *v40;
  void *v41;
  void *v42;
  size_t v44;
  size_t v45;
  size_t v46;
  size_t v47; // [esp+2Ch] [ebp-30h]
  size_t v48; // [esp+2Ch] [ebp-30h]
  void *v49;
  int v50;
  int v51;
  int v52[5];

  v47 = (size_t)(a2 + 1);
  if ( (uint32_t *)a3 == a2 + 1 )
  {
    if ( a2[5] != 0 )
    {
      v46 = a2[4];
      v20 = *(uint32_t **)(v46 + 16);
      v21 = *(uint32_t *)(*(uint32_t *)a4 - 12);
      v22 = *(v20 - 3);
      v37 = *(const void **)a4;
      if ( v21 <= v22 )
        v22 = *(uint32_t *)(*(uint32_t *)a4 - 12);
      v33 = *(v20 - 3);
      v48 = v22;
      v23 = memcmp(*(const void **)(v46 + 16), *(const void **)a4, v22);
      if ( v23 == 0 )
        v23 = v33 - v21;
      if ( v23 < 0 )
      {
        LOBYTE(v40) = 1;
        if ( a3 != v46 )
        {
          v24 = memcmp(v37, v20, v48);
          v25 = v21 - v33;
          if ( v24 == 0 )
            v24 = v25;
          v40 = (void *)(v24 >> 31);
        }
        v14 = (int)(uintptr_t)(operator new(0x44u));
        if ( v14 != -16 )
        {
          sub_193A2E0((size_t **)(uintptr_t)(v14 + 16), (size_t **)(uintptr_t)(a4));
          sub_193A2E0((size_t **)(uintptr_t)(v14 + 20), (size_t **)(uintptr_t)(a4 + 4));
          sub_193A2E0((size_t **)(uintptr_t)(v14 + 24), (size_t **)(uintptr_t)(a4 + 8));
          sub_193A2E0((size_t **)(uintptr_t)(v14 + 28), (size_t **)(uintptr_t)(a4 + 12));
          *(uint32_t *)(v14 + 32) = *(uint32_t *)(a4 + 16);
          *(uint32_t *)(v14 + 36) = *(uint32_t *)(a4 + 20);
          *(uint32_t *)(v14 + 40) = *(uint32_t *)(a4 + 24);
          *(uint32_t *)(v14 + 44) = *(uint32_t *)(a4 + 28);
          *(uint32_t *)(v14 + 48) = *(uint32_t *)(a4 + 32);
          *(uint32_t *)(v14 + 52) = *(uint32_t *)(a4 + 36);
          *(uint32_t *)(v14 + 56) = *(uint32_t *)(a4 + 40);
          *(uint32_t *)(v14 + 60) = *(uint32_t *)(a4 + 44);
          *(uint16_t *)(v14 + 64) = *(uint16_t *)(a4 + 48);
        }
        sub_1904970((char)(uintptr_t)v40, v14, v46, a3);
        goto LABEL_31;
      }
    }
  }
  else
  {
    s2 = *(void **)a4;
    s1 = *(uint32_t **)(a3 + 16);
    v5 = *(uint32_t *)(*(uint32_t *)a4 - 12);
    n = v5;
    v32 = *(s1 - 3);
    if ( v32 <= v5 )
      n = *(s1 - 3);
    v35 = n;
    v7 = memcmp(*(const void **)a4, *(const void **)(a3 + 16), n);
    v44 = v7;
    v49 = (void *)(v5 - v32);
    if ( v7 == 0 )
      v7 = v5 - v32;
    if ( v7 < 0 )
    {
      if ( a3 != a2[3] )
      {
        v10 = sub_1904940(a3);
        v11 = v5;
        v50 = v10;
        v12 = *(uint32_t *)(*(uint32_t *)(v10 + 16) - 12);
        v36 = *(const void **)(v10 + 16);
        if ( v12 <= v5 )
          v11 = *(uint32_t *)(*(uint32_t *)(v10 + 16) - 12);
        v45 = v11;
        v13 = memcmp(*(const void **)(v10 + 16), s2, v11);
        if ( v13 == 0 )
          v13 = v12 - v5;
        if ( v13 >= 0 )
          goto LABEL_39;
        if ( *(uint32_t *)(v50 + 12) == 0 )
        {
          LOBYTE(v26) = 1;
          if ( v47 != v50 )
          {
            v27 = v5 - v12;
            v28 = memcmp(s2, v36, v45);
            if ( v28 == 0 )
              v28 = v27;
            v26 = v28 >> 31;
          }
          v34 = v26;
          v14 = (int)(uintptr_t)(operator new(0x44u));
          v29 = v34;
          if ( v14 != -16 )
          {
            sub_193A2E0((size_t **)(uintptr_t)(v14 + 16), (size_t **)(uintptr_t)(a4));
            sub_193A2E0((size_t **)(uintptr_t)(v14 + 20), (size_t **)(uintptr_t)(a4 + 4));
            sub_193A2E0((size_t **)(uintptr_t)(v14 + 24), (size_t **)(uintptr_t)(a4 + 8));
            sub_193A2E0((size_t **)(uintptr_t)(v14 + 28), (size_t **)(uintptr_t)(a4 + 12));
            *(uint32_t *)(v14 + 32) = *(uint32_t *)(a4 + 16);
            *(uint32_t *)(v14 + 36) = *(uint32_t *)(a4 + 20);
            *(uint32_t *)(v14 + 40) = *(uint32_t *)(a4 + 24);
            *(uint32_t *)(v14 + 44) = *(uint32_t *)(a4 + 28);
            *(uint32_t *)(v14 + 48) = *(uint32_t *)(a4 + 32);
            *(uint32_t *)(v14 + 52) = *(uint32_t *)(a4 + 36);
            *(uint32_t *)(v14 + 56) = *(uint32_t *)(a4 + 40);
            *(uint32_t *)(v14 + 60) = *(uint32_t *)(a4 + 44);
            *(uint16_t *)(v14 + 64) = *(uint16_t *)(a4 + 48);
            v29 = v34;
          }
          sub_1904970(v29, v14, v50, v47);
          goto LABEL_31;
        }
      }
      v14 = (int)(uintptr_t)(operator new(0x44u));
      if ( v14 != -16 )
      {
        sub_193A2E0((size_t **)(uintptr_t)(v14 + 16), (size_t **)(uintptr_t)(a4));
        sub_193A2E0((size_t **)(uintptr_t)(v14 + 20), (size_t **)(uintptr_t)(a4 + 4));
        sub_193A2E0((size_t **)(uintptr_t)(v14 + 24), (size_t **)(uintptr_t)(a4 + 8));
        sub_193A2E0((size_t **)(uintptr_t)(v14 + 28), (size_t **)(uintptr_t)(a4 + 12));
        *(uint32_t *)(v14 + 32) = *(uint32_t *)(a4 + 16);
        *(uint32_t *)(v14 + 36) = *(uint32_t *)(a4 + 20);
        *(uint32_t *)(v14 + 40) = *(uint32_t *)(a4 + 24);
        *(uint32_t *)(v14 + 44) = *(uint32_t *)(a4 + 28);
        *(uint32_t *)(v14 + 48) = *(uint32_t *)(a4 + 32);
        *(uint32_t *)(v14 + 52) = *(uint32_t *)(a4 + 36);
        *(uint32_t *)(v14 + 56) = *(uint32_t *)(a4 + 40);
        *(uint32_t *)(v14 + 60) = *(uint32_t *)(a4 + 44);
        *(uint16_t *)(v14 + 64) = *(uint16_t *)(a4 + 48);
      }
      sub_1904970(1, v14, a3, v47);
      goto LABEL_31;
    }
    v8 = memcmp(s1, s2, v35);
    if ( v8 == 0 )
      v8 = v32 - v5;
    if ( v8 >= 0 )
    {
      *a1 = a3;
      return a1;
    }
    v15 = a2[4];
    if ( a3 == v15 )
    {
      v31 = (void *)v44;
      if ( v44 == 0 )
        v31 = (void *)(v5 - v32);
      v42 = v31;
      v14 = (int)(uintptr_t)(operator new(0x44u));
      if ( v14 != -16 )
      {
        sub_193A2E0((size_t **)(uintptr_t)(v14 + 16), (size_t **)(uintptr_t)(a4));
        sub_193A2E0((size_t **)(uintptr_t)(v14 + 20), (size_t **)(uintptr_t)(a4 + 4));
        sub_193A2E0((size_t **)(uintptr_t)(v14 + 24), (size_t **)(uintptr_t)(a4 + 8));
        sub_193A2E0((size_t **)(uintptr_t)(v14 + 28), (size_t **)(uintptr_t)(a4 + 12));
        *(uint32_t *)(v14 + 32) = *(uint32_t *)(a4 + 16);
        *(uint32_t *)(v14 + 36) = *(uint32_t *)(a4 + 20);
        *(uint32_t *)(v14 + 40) = *(uint32_t *)(a4 + 24);
        *(uint32_t *)(v14 + 44) = *(uint32_t *)(a4 + 28);
        *(uint32_t *)(v14 + 48) = *(uint32_t *)(a4 + 32);
        *(uint32_t *)(v14 + 52) = *(uint32_t *)(a4 + 36);
        *(uint32_t *)(v14 + 56) = *(uint32_t *)(a4 + 40);
        *(uint32_t *)(v14 + 60) = *(uint32_t *)(a4 + 44);
        *(uint16_t *)(v14 + 64) = *(uint16_t *)(a4 + 48);
      }
      sub_1904970((int)(uintptr_t)v42 < 0, v14, v15, v47);
      goto LABEL_31;
    }
    v51 = sub_19048E0(a3);
    v16 = v5;
    v17 = *(uint32_t *)(*(uint32_t *)(v51 + 16) - 12);
    if ( v17 <= v5 )
      v16 = *(uint32_t *)(*(uint32_t *)(v51 + 16) - 12);
    v18 = v5 - v17;
    v19 = memcmp(s2, *(const void **)(v51 + 16), v16);
    if ( v19 != 0 )
      v18 = v19;
    if ( v18 < 0 )
    {
      if ( *(uint32_t *)(a3 + 12) != 0 )
      {
        v14 = (int)(uintptr_t)(operator new(0x44u));
        if ( v14 != -16 )
        {
          sub_193A2E0((size_t **)(uintptr_t)(v14 + 16), (size_t **)(uintptr_t)(a4));
          sub_193A2E0((size_t **)(uintptr_t)(v14 + 20), (size_t **)(uintptr_t)(a4 + 4));
          sub_193A2E0((size_t **)(uintptr_t)(v14 + 24), (size_t **)(uintptr_t)(a4 + 8));
          sub_193A2E0((size_t **)(uintptr_t)(v14 + 28), (size_t **)(uintptr_t)(a4 + 12));
          *(uint32_t *)(v14 + 32) = *(uint32_t *)(a4 + 16);
          *(uint32_t *)(v14 + 36) = *(uint32_t *)(a4 + 20);
          *(uint32_t *)(v14 + 40) = *(uint32_t *)(a4 + 24);
          *(uint32_t *)(v14 + 44) = *(uint32_t *)(a4 + 28);
          *(uint32_t *)(v14 + 48) = *(uint32_t *)(a4 + 32);
          *(uint32_t *)(v14 + 52) = *(uint32_t *)(a4 + 36);
          *(uint32_t *)(v14 + 56) = *(uint32_t *)(a4 + 40);
          *(uint32_t *)(v14 + 60) = *(uint32_t *)(a4 + 44);
          *(uint16_t *)(v14 + 64) = *(uint16_t *)(a4 + 48);
        }
        sub_1904970(1, v14, v51, v47);
      }
      else
      {
        v30 = (void *)v44;
        if ( v44 == 0 )
          v30 = v49;
        v41 = v30;
        v14 = (int)(uintptr_t)(operator new(0x44u));
        if ( v14 != -16 )
        {
          sub_193A2E0((size_t **)(uintptr_t)(v14 + 16), (size_t **)(uintptr_t)(a4));
          sub_193A2E0((size_t **)(uintptr_t)(v14 + 20), (size_t **)(uintptr_t)(a4 + 4));
          sub_193A2E0((size_t **)(uintptr_t)(v14 + 24), (size_t **)(uintptr_t)(a4 + 8));
          sub_193A2E0((size_t **)(uintptr_t)(v14 + 28), (size_t **)(uintptr_t)(a4 + 12));
          *(uint32_t *)(v14 + 32) = *(uint32_t *)(a4 + 16);
          *(uint32_t *)(v14 + 36) = *(uint32_t *)(a4 + 20);
          *(uint32_t *)(v14 + 40) = *(uint32_t *)(a4 + 24);
          *(uint32_t *)(v14 + 44) = *(uint32_t *)(a4 + 28);
          *(uint32_t *)(v14 + 48) = *(uint32_t *)(a4 + 32);
          *(uint32_t *)(v14 + 52) = *(uint32_t *)(a4 + 36);
          *(uint32_t *)(v14 + 56) = *(uint32_t *)(a4 + 40);
          *(uint32_t *)(v14 + 60) = *(uint32_t *)(a4 + 44);
          *(uint16_t *)(v14 + 64) = *(uint16_t *)(a4 + 48);
        }
        sub_1904970((int)(uintptr_t)v41 < 0, v14, a3, v47);
      }
LABEL_31:
      ++a2[5];
      *a1 = v14;
      return a1;
    }
  }
LABEL_39:
  sub_C83430((int)(uintptr_t)v52, a2, a4);
  *a1 = v52[0];
  return a1;
}

// Binary VA: 0xc89770 (source: lib_batch_0.json)
void sub_C89770(int a1, uint32_t *a2)
{
  uint32_t *v2;
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;
  uint32_t *v13;
  int v14;
  int v15;
  uint32_t *v16;
  int v17;
  int v18;
  uint32_t *v19;
  int v20;
  int v21;
  uint32_t *v22;
  int v23;
  int v24;
  uint32_t *v25;
  int v26;
  int v27;
  uint32_t *v28;
  int v29;
  uint32_t *v30;
  uint32_t *v31;
  uint32_t *v32;
  uint32_t *v33; // [esp+2Ch] [ebp-50h]
  uint32_t *v34;
  uint32_t *v35;
  uint32_t *v36;
  uint32_t *v37; // [esp+3Ch] [ebp-40h]

  v37 = a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      v32 = (uint32_t *)a2[3];
      if ( v32 != nullptr )
      {
        while ( 1 )
        {
          v33 = (uint32_t *)v32[3];
          if ( v33 != nullptr )
          {
            while ( 1 )
            {
              v34 = (uint32_t *)v33[3];
              if ( v34 != nullptr )
              {
                while ( 1 )
                {
                  v35 = (uint32_t *)v34[3];
                  if ( v35 != nullptr )
                  {
                    while ( 1 )
                    {
                      v36 = (uint32_t *)v35[3];
                      if ( v36 != nullptr )
                      {
                        while ( 1 )
                        {
                          v31 = (uint32_t *)v36[3];
                          if ( v31 != nullptr )
                          {
                            while ( 1 )
                            {
                              v30 = (uint32_t *)v31[3];
                              if ( v30 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v2 = (uint32_t *)v30[3];
                                  if ( v2 != nullptr )
                                  {
                                    while ( 1 )
                                    {
                                      sub_C89770(a1, v2[3]);
                                      v3 = v2[5];
                                      v4 = (uint32_t *)v2[2];
                                      if ( (uint32_t *)(v3 - 12) != dword_213B808
                                        && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
                                      {
                                        sub_1938AF0((void *)(v3 - 12));
                                      }
                                      v5 = v2[4];
                                      if ( (uint32_t *)(v5 - 12) != dword_213B808
                                        && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
                                      {
                                        sub_1938AF0((void *)(v5 - 12));
                                      }
                                      operator delete(v2);
                                      if ( v4 == nullptr )
                                        break;
                                      v2 = v4;
                                    }
                                  }
                                  v6 = v30[5];
                                  v7 = (uint32_t *)v30[2];
                                  if ( (uint32_t *)(v6 - 12) != dword_213B808
                                    && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
                                  {
                                    sub_1938AF0((void *)(v6 - 12));
                                  }
                                  v8 = v30[4];
                                  if ( (uint32_t *)(v8 - 12) != dword_213B808
                                    && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
                                  {
                                    sub_1938AF0((void *)(v8 - 12));
                                  }
                                  operator delete(v30);
                                  if ( v7 == nullptr )
                                    break;
                                  v30 = v7;
                                }
                              }
                              v9 = v31[5];
                              v10 = (uint32_t *)v31[2];
                              if ( (uint32_t *)(v9 - 12) != dword_213B808
                                && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
                              {
                                sub_1938AF0((void *)(v9 - 12));
                              }
                              v11 = v31[4];
                              if ( (uint32_t *)(v11 - 12) != dword_213B808
                                && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
                              {
                                sub_1938AF0((void *)(v11 - 12));
                              }
                              operator delete(v31);
                              if ( v10 == nullptr )
                                break;
                              v31 = v10;
                            }
                          }
                          v12 = v36[5];
                          v13 = (uint32_t *)v36[2];
                          if ( (uint32_t *)(v12 - 12) != dword_213B808
                            && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
                          {
                            sub_1938AF0((void *)(v12 - 12));
                          }
                          v14 = v36[4];
                          if ( (uint32_t *)(v14 - 12) != dword_213B808
                            && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
                          {
                            sub_1938AF0((void *)(v14 - 12));
                          }
                          operator delete(v36);
                          if ( v13 == nullptr )
                            break;
                          v36 = v13;
                        }
                      }
                      v15 = v35[5];
                      v16 = (uint32_t *)v35[2];
                      if ( (uint32_t *)(v15 - 12) != dword_213B808
                        && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
                      {
                        sub_1938AF0((void *)(v15 - 12));
                      }
                      v17 = v35[4];
                      if ( (uint32_t *)(v17 - 12) != dword_213B808
                        && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
                      {
                        sub_1938AF0((void *)(v17 - 12));
                      }
                      operator delete(v35);
                      if ( v16 == nullptr )
                        break;
                      v35 = v16;
                    }
                  }
                  v18 = v34[5];
                  v19 = (uint32_t *)v34[2];
                  if ( (uint32_t *)(v18 - 12) != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    sub_1938AF0((void *)(v18 - 12));
                  }
                  v20 = v34[4];
                  if ( (uint32_t *)(v20 - 12) != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    sub_1938AF0((void *)(v20 - 12));
                  }
                  operator delete(v34);
                  if ( v19 == nullptr )
                    break;
                  v34 = v19;
                }
              }
              v21 = v33[5];
              v22 = (uint32_t *)v33[2];
              if ( (uint32_t *)(v21 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
              {
                sub_1938AF0((void *)(v21 - 12));
              }
              v23 = v33[4];
              if ( (uint32_t *)(v23 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
              {
                sub_1938AF0((void *)(v23 - 12));
              }
              operator delete(v33);
              if ( v22 == nullptr )
                break;
              v33 = v22;
            }
          }
          v24 = v32[5];
          v25 = (uint32_t *)v32[2];
          if ( (uint32_t *)(v24 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
          {
            sub_1938AF0((void *)(v24 - 12));
          }
          v26 = v32[4];
          if ( (uint32_t *)(v26 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
          {
            sub_1938AF0((void *)(v26 - 12));
          }
          operator delete(v32);
          if ( v25 == nullptr )
            break;
          v32 = v25;
        }
      }
      v27 = v37[5];
      v28 = (uint32_t *)v37[2];
      if ( (uint32_t *)(v27 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
      {
        sub_1938AF0((void *)(v27 - 12));
      }
      v29 = v37[4];
      if ( (uint32_t *)(v29 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
      {
        sub_1938AF0((void *)(v29 - 12));
      }
      operator delete(v37);
      if ( v28 == nullptr )
        break;
      v37 = v28;
      a2 = v28;
    }
  }
}

// Binary VA: 0xca5410 (source: lib_batch_0.json)
char * sub_CA5410(int a1, char *a2, unsigned int a3, int16_t *a4)
{
  char *result;
  char *v5;
  glf::Self *v6;
  unsigned int v7;
  unsigned int v8;
  bool v9; // cf
  unsigned int v10;
  int v11;
  uint32_t *v12;
  unsigned int v13;
  uint32_t *v14;
  glf::Self *v15;
  uint32_t *v16;
  glf::Self *v17;
  uint32_t *v18;
  char *v19;
  char *v20;
  uint32_t *v21;
  unsigned int v22;
  char *v23;
  uint32_t *v24;
  char *v25;
  int v26;
  size_t v27;
  unsigned int v28;
  int v29;
  uint32_t *v30;
  char *v31;
  uint32_t *v33; // [esp+1Ch] [ebp-40h]
  int16_t v34; // [esp+1Ch] [ebp-40h]
  size_t v35;
  int16_t v36;
  int v37;
  unsigned int v38;
  int v39;
  int v40; // [esp+2Ch] [ebp-30h]
  int v41;

  result = a2;
  if ( a3 == 0 )
    return result;
  v5 = *(char **)(a1 + 4);
  if ( a3 > -1431655765 * ((*(uint32_t *)(a1 + 8) - (int)(uintptr_t)v5) >> 2) )
  {
    v6 = *(glf::Self **)a1;
    v7 = -1431655765 * ((int)(uintptr_t)&v5[-*(uint32_t *)a1] >> 2);
    if ( a3 > 357913941 - v7 )
      sub_1900180("vector::_M_fill_insert");
    v8 = a3;
    if ( v7 >= a3 )
      v8 = v7;
    v9 = __CFADD__(v8, v7);
    v10 = v8 + v7;
    if ( v9 || v10 > 0x15555555 )
    {
      v35 = 0xFFFFFFFC;
      v27 = 0xFFFFFFFC;
      v11 = -1431655765 * ((a2 - (char *)v6) >> 2);
    }
    else
    {
      v11 = -1431655765 * ((a2 - (char *)v6) >> 2);
      if ( v10 == 0 )
      {
        v33 = nullptr;
        v35 = 0;
        v12 = nullptr;
        goto LABEL_10;
      }
      v27 = 12 * v10;
      v35 = v27;
    }
    v31 = a2;
    v33 = (uint32_t *)(glf::Alloc(v27));
    a2 = v31;
    v12 = v33;
LABEL_10:
    v13 = a3;
    v14 = &v12[3 * v11];
    do
    {
      if ( v14 != nullptr )
      {
        *v14 = *(uint32_t *)a4;
        v14[1] = *((uint32_t *)a4 + 1);
        v14[2] = *((uint32_t *)a4 + 2);
      }
      v14 += 3;
      --v13;
    }
    while ( v13 != 0 );
    v15 = *(glf::Self **)a1;
    v16 = v33;
    if ( a2 != *(char **)a1 )
    {
      v17 = *(glf::Self **)a1;
      do
      {
        if ( v16 != nullptr )
        {
          *v16 = *(uint32_t *)v17;
          v16[1] = *((uint32_t *)v17 + 1);
          v16[2] = *((uint32_t *)v17 + 2);
        }
        v17 = (glf::Self *)((char *)v17 + 12);
        v16 += 3;
      }
      while ( a2 != (char *)v17 );
      v16 = &v33[((unsigned int)(a2 - ((char *)v15 + 12)) >> 2) + 3];
    }
    v18 = &v16[3 * a3];
    v19 = *(char **)(a1 + 4);
    if ( a2 != v19 )
    {
      v20 = a2;
      v21 = &v16[3 * a3];
      do
      {
        if ( v21 != nullptr )
        {
          *v21 = *(uint32_t *)v20;
          v21[1] = *((uint32_t *)v20 + 1);
          v21[2] = *((uint32_t *)v20 + 2);
        }
        v20 += 12;
        v21 += 3;
      }
      while ( v19 != v20 );
      v18 += ((unsigned int)(v19 - (a2 + 12)) >> 2) + 3;
    }
    if ( *(uint32_t *)a1 != 0 )
      glf::Free(*(glf::Self **)a1);
    result = (char *)a1;
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v33);
    *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v18);
    *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)((char *)v33 + v35);
    return result;
  }
  v34 = *a4;
  v36 = a4[1];
  v40 = *((uint32_t *)a4 + 1);
  v41 = *((uint32_t *)a4 + 2);
  v22 = -1431655765 * ((v5 - a2) >> 2);
  if ( a3 >= v22 )
  {
    v28 = a3 - v22;
    v39 = *(uint32_t *)(a1 + 4);
    v38 = a3 - v22;
    if ( a3 != v22 )
    {
      v29 = *(uint32_t *)(a1 + 4);
      do
      {
        if ( v29 != 0 )
        {
          *(uint16_t *)v29 = v34;
          *(uint16_t *)(v29 + 2) = v36;
          *(uint32_t *)(v29 + 4) = v40;
          *(uint32_t *)(v29 + 8) = v41;
        }
        v29 += 12;
        --v28;
      }
      while ( v28 != 0 );
      result = a2;
      v22 = -1431655765 * ((v5 - a2) >> 2);
      v28 = v38;
      v39 = *(uint32_t *)(a1 + 4);
    }
    v30 = (uint32_t *)(v39 + 12 * v28);
    *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v30);
    if ( a2 == v5 )
    {
      result = (char *)&v30[3 * v22];
      *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(result);
    }
    else
    {
      do
      {
        if ( v30 != nullptr )
        {
          *v30 = *(uint32_t *)a2;
          v30[1] = *((uint32_t *)a2 + 1);
          v30[2] = *((uint32_t *)a2 + 2);
        }
        a2 += 12;
        v30 += 3;
      }
      while ( v5 != a2 );
      *(uint32_t *)(a1 + 4) += 12 * v22;
      do
      {
        *(uint16_t *)result = v34;
        *((uint16_t *)result + 1) = v36;
        *((uint32_t *)result + 1) = v40;
        *((uint32_t *)result + 2) = v41;
        result += 12;
      }
      while ( v5 != result );
    }
  }
  else
  {
    v23 = &v5[-12 * a3];
    v37 = 12 * a3;
    v24 = *(uint32_t **)(a1 + 4);
    if ( v5 != v23 )
    {
      v25 = &v5[-12 * a3];
      do
      {
        if ( v24 != nullptr )
        {
          *v24 = *(uint32_t *)v25;
          v24[1] = *((uint32_t *)v25 + 1);
          v24[2] = *((uint32_t *)v25 + 2);
        }
        v25 += 12;
        v24 += 3;
      }
      while ( v5 != v25 );
      result = a2;
      v24 = *(uint32_t **)(a1 + 4);
    }
    *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&v24[v37 / 4u]);
    v26 = -1431655765 * ((v23 - a2) >> 2);
    if ( v26 > 0 )
    {
      do
      {
        v23 -= 12;
        v5 -= 12;
        --v26;
        *(uint32_t *)v5 = *(uint32_t *)v23;
        *((uint32_t *)v5 + 1) = *((uint32_t *)v23 + 1);
        *((uint32_t *)v5 + 2) = *((uint32_t *)v23 + 2);
      }
      while ( v26 != 0 );
    }
    if ( a2 != &a2[v37] )
    {
      do
      {
        *(uint16_t *)result = v34;
        *((uint16_t *)result + 1) = v36;
        *((uint32_t *)result + 1) = v40;
        *((uint32_t *)result + 2) = v41;
        result += 12;
      }
      while ( &a2[v37] != result );
    }
  }
  return result;
}

// Binary VA: 0xc9ddd0 (source: lib_batch_0.json)
void sub_C9DDD0(uint32_t *a1, const glf::fs2::Path::Self *a2, glf::fs2::Path::Self *a3, char *s)
{
  const glf::fs2::Path::Self *v5;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  bool v10; // zf
  int v11;
  size_t v12;
  int v13;
  uint32_t *v14;
  int v15;
  int v16;
  size_t v17;
  int v18;
  uint32_t *v19;
  int v20;
  unsigned int v21;
  glf::fs2::Path::Self *src;
  uint32_t *v23;
  glf::fs2::Path::Self *v24;
  int v25;
  glf::fs2::Path::Self *v26;
  int v27;
  void *v28;
  glf::fs2::Path::Self *v29;
  glf::fs2::Path::Self *v30; // [esp+1Ch] [ebp-90h]
  glf::fs2::Path::Self *v31; // [esp+1Ch] [ebp-90h]
  int v32;
  glf::fs2::Path::Self *v33;
  glf::fs2::Path::Self *v34;
  glf::fs2::Path::Self *v35;
  int v36;
  uint32_t *v37;
  size_t v38;
  int v39;
  glf::fs2::Path::Self *v41; // [esp+2Ch] [ebp-80h]
  uint32_t *dest;
  char *desta;
  void *v44;
  char v45[15];
  int v46[2];
  uint8_t v47[8];
  uint8_t v48[8];
  int v49[2];
  uint8_t v50[8];
  uint8_t v51[8];
  uint8_t v52[8];
  uint32_t *v53;
  uint8_t v54[8];
  uint32_t *v55; // [esp+8Ch] [ebp-20h]

  sub_193A910((int)(uintptr_t)v49, s, (int)(uintptr_t)v46);
  v49[1] = 0;
  glf::fs2::Path::Init((glf::fs2::Path::Self *)v49);
  glf::fs2::Path::Construct((glf::fs2::Path::Self *)v51, a3);
  v5 = (const glf::fs2::Path::Self *)glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v51, (const glf::fs2::Path::Self *)v49);
  glf::fs2::Path::Construct((glf::fs2::Path::Self *)v50, v5);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v51);
  glf::fs2::FileSystem::FixPath((glf::fs2::FileSystem::Self *)((char *)v46 + 1), a2, (glf::fs2::Path::Self *)v50);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v50);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v49);
  glf::fs2::Path::RemovePrefix((glf::fs2::Path::Self *)v48, (const glf::fs2::Path::Self *)((char *)v46 + 1));
  glf::fs2::Path::opAssign((glf::fs2::Path::Self *)((char *)v46 + 1), (const glf::fs2::Path::Self *)v48);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v48);
  glf::fs2::Path::RemovePrefix((glf::fs2::Path::Self *)v47, a3);
  v6 = *(uint32_t **)(*a1 + 8);
  v7 = *a1 + 4;
  v36 = v7;
  v44 = (void *)v7;
  if ( v6 != nullptr )
  {
    dest = a1;
    v8 = *a1 + 4;
    do
    {
      while ( (int)glf::fs2::Path::Compare((glf::fs2::Path::Self *)(v6 + 4), (const glf::fs2::Path::Self *)((char *)v46 + 1)) >= 0 )
      {
        v8 = (int)(uintptr_t)v6;
        v6 = (uint32_t *)v6[2];
        if ( v6 == nullptr )
          goto LABEL_6;
      }
      v6 = (uint32_t *)v6[3];
    }
    while ( v6 != nullptr );
LABEL_6:
    v9 = v8;
    v10 = v8 == v36;
    a1 = dest;
    if ( v10 )
    {
      v7 = (int)(uintptr_t)v44;
      v36 = *dest + 4;
    }
    else
    {
      v30 = (glf::fs2::Path::Self *)v9;
      v11 = glf::fs2::Path::Compare((glf::fs2::Path::Self *)((char *)v46 + 1), (const glf::fs2::Path::Self *)(v9 + 16));
      v7 = (int)(uintptr_t)v30;
      v36 = *dest + 4;
      if ( v11 < 0 )
        v7 = (int)(uintptr_t)v44;
    }
  }
  if ( v7 == v36 )
  {
    v37 = (uint32_t *)(glf::MemObject::opNew(0x28u));
    v37[2] = (uint32_t)(uintptr_t)(&dword_213B814);
    v37[3] = 0;
    v37[4] = 0;
    v37[5] = 0;
    *v37 = *((uint32_t *)s + 256);
    v12 = strlen(s);
    g4_std::string::assign((int)(uintptr_t)(v37 + 2), s, v12);
    v37[6] = (uint32_t)(uintptr_t)(a2);
    v37[7] = a1[1];
    v13 = *((uint32_t *)s + 259);
    v37[9] = *((uint32_t *)s + 260);
    v37[8] = v13;
    v14 = *(uint32_t **)(*a1 + 8);
    v38 = *a1 + 4;
    if ( v14 == nullptr )
      goto LABEL_18;
    v15 = *a1 + 4;
    do
    {
      while ( (int)glf::fs2::Path::Compare((glf::fs2::Path::Self *)(v14 + 4), (const glf::fs2::Path::Self *)v47) >= 0 )
      {
        v15 = (int)(uintptr_t)v14;
        v14 = (uint32_t *)v14[2];
        if ( v14 == nullptr )
          goto LABEL_16;
      }
      v14 = (uint32_t *)v14[3];
    }
    while ( v14 != nullptr );
LABEL_16:
    if ( v15 == v38
      || (v16 = glf::fs2::Path::Compare((glf::fs2::Path::Self *)v47, (const glf::fs2::Path::Self *)(v15 + 16)), v17 = v15, v16 < 0) )
    {
LABEL_18:
      v17 = v38;
    }
    v18 = *(uint32_t *)(v17 + 24);
    v37[1] = v18;
    v19 = *(uint32_t **)(v18 + 16);
    if ( v19 == *(uint32_t **)(v18 + 20) )
    {
      v21 = ((int)(uintptr_t)v19 - *(uint32_t *)(v18 + 12)) >> 2;
      v39 = 4;
      if ( v21 != 0 )
      {
        if ( v21 > 2 * v21 || 2 * v21 > 0x3FFFFFFF )
          v39 = -4;
        else
          v39 = 8 * v21;
      }
      v31 = *(glf::fs2::Path::Self **)(v18 + 16);
      v32 = ((int)(uintptr_t)v19 - *(uint32_t *)(v18 + 12)) >> 2;
      v41 = (glf::fs2::Path::Self *)operator new(v39);
      src = v31;
      v23 = (uint32_t *)((char *)v41 + 4 * v32);
      if ( v23 != nullptr )
        *v23 = (uint32_t)(uintptr_t)(v37);
      v24 = nullptr;
      v25 = ((int)(uintptr_t)v31 - *(uint32_t *)(v18 + 12)) >> 2;
      if ( v25 != 0 )
      {
        v35 = (glf::fs2::Path::Self *)(4 * v25);
        memmove(v41, *(const void **)(v18 + 12), 4 * v25);
        v24 = v35;
        src = v31;
      }
      desta = (char *)v24 + (uint32_t)(uintptr_t)v41 + 4;
      v26 = nullptr;
      v27 = (*(uint32_t *)(v18 + 16) - (int)(uintptr_t)src) >> 2;
      if ( v27 != 0 )
      {
        v34 = (glf::fs2::Path::Self *)(4 * v27);
        memmove(desta, src, 4 * v27);
        v26 = v34;
      }
      v28 = *(void **)(v18 + 12);
      v29 = (glf::fs2::Path::Self *)((char *)v26 + (uint32_t)(uintptr_t)desta);
      if ( v28 != nullptr )
      {
        v33 = v29;
        operator delete(v28);
        v29 = v33;
      }
      *(uint32_t *)(v18 + 16) = (uint32_t)(uintptr_t)(v29);
      *(uint32_t *)(v18 + 12) = (uint32_t)(uintptr_t)(v41);
      *(uint32_t *)(v18 + 20) = (uint32_t)(uintptr_t)((char *)v41 + v39);
    }
    else
    {
      v20 = 0;
      if ( v19 != nullptr )
      {
        *v19 = (uint32_t)(uintptr_t)(v37);
        v20 = *(uint32_t *)(v18 + 16);
      }
      *(uint32_t *)(v18 + 16) = v20 + 4;
    }
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v52, (const glf::fs2::Path::Self *)((char *)v46 + 1));
    v53 = v37;
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v54, (const glf::fs2::Path::Self *)v52);
    v55 = v53;
    g4_map_fs2_Path_insert((int)(uintptr_t)v45, (uint32_t *)(uintptr_t)*a1, (glf::fs2::Path::Self *)v54);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v54);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v52);
  }
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v47);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)((char *)v46 + 1));
}

// Binary VA: 0xc97100 (source: lib_batch_0.json)
void sub_C97100(int a1, uint32_t *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21; // [esp+1Ch] [ebp-30h]
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25; // [esp+2Ch] [ebp-20h]

  v25 = a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      v2 = (uint32_t *)v25[3];
      v20 = v2;
      if ( v2 != nullptr )
      {
        while ( 1 )
        {
          v3 = (uint32_t *)v2[3];
          v21 = v3;
          if ( v3 != nullptr )
          {
            while ( 1 )
            {
              v4 = (uint32_t *)v3[3];
              v22 = v4;
              if ( v4 != nullptr )
              {
                while ( 1 )
                {
                  v5 = (uint32_t *)v4[3];
                  v23 = v5;
                  if ( v5 != nullptr )
                  {
                    while ( 1 )
                    {
                      v6 = (uint32_t *)v5[3];
                      v24 = v6;
                      if ( v6 != nullptr )
                      {
                        while ( 1 )
                        {
                          v7 = (uint32_t *)v6[3];
                          v19 = v7;
                          if ( v7 != nullptr )
                          {
                            while ( 1 )
                            {
                              v8 = (uint32_t *)v7[3];
                              if ( v8 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v9 = (uint32_t *)v8[3];
                                  if ( v9 != nullptr )
                                  {
                                    while ( 1 )
                                    {
                                      sub_C97100(a1, v9[3]);
                                      v18 = (uint32_t *)v9[2];
                                      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(v9 + 4));
                                      operator delete(v9);
                                      if ( v18 == nullptr )
                                        break;
                                      v9 = v18;
                                    }
                                  }
                                  v10 = (uint32_t *)v8[2];
                                  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(v8 + 4));
                                  operator delete(v8);
                                  if ( v10 == nullptr )
                                    break;
                                  v8 = v10;
                                }
                              }
                              v11 = (uint32_t *)v19[2];
                              glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(v19 + 4));
                              operator delete(v19);
                              if ( v11 == nullptr )
                                break;
                              v19 = v11;
                              v7 = v11;
                            }
                          }
                          v12 = (uint32_t *)v24[2];
                          glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(v24 + 4));
                          operator delete(v24);
                          if ( v12 == nullptr )
                            break;
                          v24 = v12;
                          v6 = v12;
                        }
                      }
                      v13 = (uint32_t *)v23[2];
                      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(v23 + 4));
                      operator delete(v23);
                      if ( v13 == nullptr )
                        break;
                      v23 = v13;
                      v5 = v13;
                    }
                  }
                  v14 = (uint32_t *)v22[2];
                  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(v22 + 4));
                  operator delete(v22);
                  if ( v14 == nullptr )
                    break;
                  v22 = v14;
                  v4 = v14;
                }
              }
              v15 = (uint32_t *)v21[2];
              glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(v21 + 4));
              operator delete(v21);
              if ( v15 == nullptr )
                break;
              v21 = v15;
              v3 = v15;
            }
          }
          v16 = (uint32_t *)v20[2];
          glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(v20 + 4));
          operator delete(v20);
          if ( v16 == nullptr )
            break;
          v20 = v16;
          v2 = v16;
        }
      }
      v17 = (uint32_t *)v25[2];
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(v25 + 4));
      operator delete(v25);
      if ( v17 == nullptr )
        break;
      v25 = v17;
    }
  }
}

// Binary VA: 0xc96ee0 (source: lib_batch_0.json)
void sub_C96EE0(glf::fs2::Path::Self *a1, glf::fs2::Path::Self *a2, glf::fs2::Path::Self *a3)
{
  glf::fs2::Path::Self *v3;
  const glf::fs2::Path::Self *v4;
  glf::fs2::Path::Self *v5;
  glf::fs2::Path::Self *v6;
  int v7;
  int v8;
  int v9;
  glf::fs2::Path::Self *v10;
  int i;
  const glf::fs2::Path::Self *v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  glf::fs2::Path::Self *v17;
  glf::fs2::Path::Self *v18;
  const glf::fs2::Path::Self *v19;
  glf::fs2::Path::Self *v20;
  glf::fs2::Path::Self *v21;
  glf::fs2::Path::Self *v22;
  const glf::fs2::Path::Self *v23;
  glf::fs2::Path::Self *v24;
  glf::fs2::Path::Self *v25;
  glf::fs2::Path::Self *v26;
  int v27; // [esp+1Ch] [ebp-40h]
  glf::fs2::Path::Self *v28;
  const glf::fs2::Path::Self *v29;
  glf::fs2::Path::Self **v30;
  glf::fs2::Path::Self *v31;
  glf::fs2::Path::Self *v32;
  glf::fs2::Path::Self *v33;
  int v34; // [esp+2Ch] [ebp-30h]
  uint8_t v35[36];

  v3 = a2;
  v4 = a2;
  v5 = a1;
  v6 = *((glf::fs2::Path::Self **)a1 + 1);
  if ( v6 != *((glf::fs2::Path::Self **)a1 + 2) )
  {
    v7 = 0;
    if ( v6 != nullptr )
    {
      glf::fs2::Path::Construct(v6, (glf::fs2::Path::Self *)((char *)v6 - 8));
      v7 = *((uint32_t *)v5 + 1);
    }
    *((uint32_t *)v5 + 1) = v7 + 8;
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v35, a3);
    v8 = *((uint32_t *)v5 + 1);
    v9 = (v8 - 16 - (int)(uintptr_t)v3) >> 3;
    if ( v9 > 0 )
    {
      v28 = v3;
      v10 = (glf::fs2::Path::Self *)(v8 - 8);
      for ( i = v9; i != 0; --i )
      {
        v12 = (glf::fs2::Path::Self *)((char *)v10 - 16);
        v10 = (glf::fs2::Path::Self *)((char *)v10 - 8);
        glf::fs2::Path::opAssign(v10, v12);
      }
      v3 = v28;
    }
    glf::fs2::Path::opAssign(v3, (const glf::fs2::Path::Self *)v35);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v35);
    return;
  }
  v13 = *(uint32_t *)a1;
  v14 = ((int)(uintptr_t)v6 - v13) >> 3;
  if ( v14 != 0 )
  {
    v15 = 2 * v14;
    if ( v14 > 2 * v14 || v15 > 0x1FFFFFFF )
    {
      v34 = -8;
      v16 = ((int)(uintptr_t)v3 - v13) >> 3;
    }
    else
    {
      v34 = 16 * v14;
      v16 = ((int)(uintptr_t)v3 - v13) >> 3;
      if ( v15 == 0 )
      {
        v31 = (glf::fs2::Path::Self *)byte_8;
        v33 = nullptr;
        goto LABEL_13;
      }
    }
  }
  else
  {
    v34 = 8;
    v16 = ((int)(uintptr_t)v3 - v13) >> 3;
  }
  v27 = v16;
  v33 = (glf::fs2::Path::Self *)operator new(v34);
  v31 = (glf::fs2::Path::Self *)((char *)v33 + 8);
  v16 = v27;
LABEL_13:
  v17 = (glf::fs2::Path::Self *)((char *)v33 + 8 * v16);
  if ( v17 != nullptr )
    glf::fs2::Path::Construct(v17, a3);
  if ( v3 != *(glf::fs2::Path::Self **)v5 )
  {
    v29 = v4;
    v32 = v5;
    v18 = v33;
    v19 = *(const glf::fs2::Path::Self **)v5;
    do
    {
      if ( v18 != nullptr )
        glf::fs2::Path::Construct(v18, v19);
      v19 = (const glf::fs2::Path::Self *)((char *)v19 + 8);
      v18 = (glf::fs2::Path::Self *)((char *)v18 + 8);
    }
    while ( v3 != v19 );
    v5 = v32;
    v20 = (glf::fs2::Path::Self *)((char *)v18 + 8);
    v4 = v29;
    v31 = v20;
  }
  v21 = *((glf::fs2::Path::Self **)v5 + 1);
  if ( v3 != v21 )
  {
    v30 = (glf::fs2::Path::Self **)v5;
    v22 = v31;
    v23 = *((const glf::fs2::Path::Self **)v5 + 1);
    do
    {
      if ( v22 != nullptr )
        glf::fs2::Path::Construct(v22, v4);
      v4 = (const glf::fs2::Path::Self *)((char *)v4 + 8);
      v22 = (glf::fs2::Path::Self *)((char *)v22 + 8);
    }
    while ( v23 != v4 );
    v5 = (glf::fs2::Path::Self *)v30;
    v31 = v22;
    v21 = v30[1];
  }
  v24 = *(glf::fs2::Path::Self **)v5;
  if ( v21 != *(glf::fs2::Path::Self **)v5 )
  {
    v25 = v21;
    do
    {
      v26 = v24;
      v24 = (glf::fs2::Path::Self *)((char *)v24 + 8);
      glf::fs2::Path::Destroy(v26);
    }
    while ( v25 != v24 );
    v24 = *(glf::fs2::Path::Self **)v5;
  }
  if ( v24 != nullptr )
    operator delete(v24);
  *(uint32_t *)v5 = (uint32_t)(uintptr_t)(v33);
  *((uint32_t *)v5 + 1) = (uint32_t)(uintptr_t)(v31);
  *((uint32_t *)v5 + 2) = (uint32_t)(uintptr_t)((char *)v33 + v34);
}

// Binary VA: 0x655a90 (source: game_core_batch_1.json)
uint32_t * sub_655A90(uint32_t *a1, uint32_t **a2)
{
  uint32_t *result;
  bool v3; // zf

  result = *a2;
  v3 = *a2 == nullptr;
  *a1 = (uint32_t)(uintptr_t)(*a2);
  if ( !v3 )
    __sync_add_and_fetch((uint32_t *)((char *)result + *(uint32_t *)(*result - 16) + 4), 1u);
  return result;
}

// Binary VA: 0xca5130 (source: lib_batch_0.json)
glf::Self * sub_CA5130(glf::Self *result, glf::Self *src, unsigned int a3, uint32_t *a4)
{
  glf::Self *v4;
  glf::Self *v5;
  glf::Self *v6;
  unsigned int v7;
  unsigned int v8;
  bool v9; // cf
  unsigned int v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  unsigned int i;
  glf::Self *v15;
  uint32_t *v16;
  glf::Self *v17;
  glf::Self *v18;
  char *v19;
  char *v20;
  uint32_t *v21;
  int v22;
  glf::Self *v23;
  glf::Self *v24;
  size_t v25;
  unsigned int v26;
  glf::Self *v27;
  glf::Self *v28;
  glf::Self *v29; // [esp+1Ch] [ebp-30h]
  glf::Self *v30; // [esp+1Ch] [ebp-30h]
  glf::Self **v31;
  uint32_t *v32;
  unsigned int v33;
  int v34;
  size_t v35;
  size_t v36;

  v4 = src;
  v31 = (glf::Self **)result;
  if ( a3 == 0 )
    return result;
  v5 = result;
  result = *((glf::Self **)result + 1);
  if ( a3 > (*((uint32_t *)v5 + 2) - (int)(uintptr_t)result) >> 2 )
  {
    v6 = *v31;
    v7 = (result - *v31) >> 2;
    if ( a3 > 0x3FFFFFFF - v7 )
      sub_1900180("vector::_M_fill_insert");
    v8 = a3;
    if ( v7 >= a3 )
      v8 = v7;
    v9 = __CFADD__(v8, v7);
    v10 = v8 + v7;
    if ( v9 || v10 > 0x3FFFFFFF )
    {
      v35 = 0xFFFFFFFF;
      v25 = 0xFFFFFFFC;
      v11 = (src - v6) >> 2;
    }
    else
    {
      v11 = (src - v6) >> 2;
      if ( v10 == 0 )
      {
        v32 = nullptr;
        v35 = 0;
        v12 = nullptr;
        goto LABEL_10;
      }
      v35 = v10;
      v25 = 4 * v10;
    }
    v29 = src;
    v32 = (uint32_t *)(glf::Alloc(v25));
    src = v29;
    v12 = v32;
LABEL_10:
    v13 = &v12[v11];
    for ( i = a3; i != 0; --i )
    {
      if ( v13 != nullptr )
        *v13 = *a4;
      ++v13;
    }
    v15 = *v31;
    v16 = v32;
    if ( src != *v31 )
    {
      v17 = *v31;
      do
      {
        if ( v16 != nullptr )
          *v16 = *(uint32_t *)v17;
        v17 = (glf::Self *)((char *)v17 + 4);
        ++v16;
      }
      while ( src != v17 );
      v16 = &v32[((unsigned int)(src - (glf::Self *)((char *)v15 + 4)) >> 2) + 1];
    }
    v18 = (glf::Self *)&v16[a3];
    v19 = (char *)v31[1];
    if ( src != (glf::Self *)v19 )
    {
      v20 = (char *)src;
      v21 = &v16[a3];
      do
      {
        if ( v21 != nullptr )
          *v21 = *(uint32_t *)v20;
        v20 += 4;
        ++v21;
      }
      while ( v19 != v20 );
      v18 = (glf::Self *)((char *)v18 + 4 * ((unsigned int)(v19 - ((char *)src + 4)) >> 2) + 4);
    }
    if ( *v31 != nullptr )
      glf::Free(*v31);
    *v31 = (glf::Self *)v32;
    v31[1] = v18;
    result = (glf::Self *)&v32[v35];
    v31[2] = (glf::Self *)&v32[v35];
    return result;
  }
  v22 = *a4;
  v33 = (result - src) >> 2;
  if ( a3 >= v33 )
  {
    v26 = a3 - v33;
    v27 = result;
    if ( a3 != v33 )
    {
      do
      {
        if ( v27 != nullptr )
          *(uint32_t *)v27 = v22;
        v27 = (glf::Self *)((char *)v27 + 4);
        --v26;
      }
      while ( v26 != 0 );
      v27 = v31[1];
      v26 = a3 - v33;
    }
    v28 = (glf::Self *)((char *)v27 + 4 * v26);
    v31[1] = v28;
    if ( src == result )
    {
      result = (glf::Self *)((char *)v28 + 4 * v33);
      v31[1] = result;
    }
    else
    {
      do
      {
        if ( v28 != nullptr )
          *(uint32_t *)v28 = *(uint32_t *)src;
        src = (glf::Self *)((char *)src + 4);
        v28 = (glf::Self *)((char *)v28 + 4);
      }
      while ( result != src );
      v31[1] = (glf::Self *)((char *)v31[1] + 4 * v33);
      do
      {
        *(uint32_t *)v4 = v22;
        v4 = (glf::Self *)((char *)v4 + 4);
      }
      while ( result != v4 );
    }
  }
  else
  {
    v34 = 4 * a3;
    v36 = (size_t)result - 4 * a3;
    v23 = result;
    if ( result != (glf::Self *)v36 )
    {
      v24 = (glf::Self *)((char *)result - 4 * a3);
      do
      {
        if ( v23 != nullptr )
          *(uint32_t *)v23 = *(uint32_t *)v24;
        v24 = (glf::Self *)((char *)v24 + 4);
        v23 = (glf::Self *)((char *)v23 + 4);
      }
      while ( result != v24 );
      v4 = src;
      v23 = v31[1];
    }
    v31[1] = (glf::Self *)((char *)v23 + v34);
    if ( (int)(v36 - (uint32_t)(uintptr_t)src) >> 2 != 0 )
    {
      v30 = src;
      result = (glf::Self *)memmove(
                        (char *)result - 4 * ((int)(v36 - (uint32_t)(uintptr_t)src) >> 2),
                        src,
                        4 * ((int)(v36 - (uint32_t)(uintptr_t)src) >> 2));
      src = v30;
    }
    if ( src != (glf::Self *)((char *)src + v34) )
    {
      do
      {
        *(uint32_t *)v4 = v22;
        v4 = (glf::Self *)((char *)v4 + 4);
      }
      while ( (glf::Self *)((char *)src + v34) != v4 );
    }
  }
  return result;
}

// Binary VA: 0xca58c0 (source: lib_batch_0.json)
unsigned int * sub_CA58C0(int a1, glf::Self *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int *result;
  unsigned int *v5;
  unsigned int *v6;
  unsigned int *v7;
  int v8;
  unsigned int *v9;
  unsigned int *v10;
  unsigned int v11;
  __m128i v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int *v15;
  unsigned int *v16;
  unsigned int *v17;
  unsigned int v18;
  __m128i v19;
  unsigned int v20;
  glf::Self *v21;
  unsigned int v22;
  unsigned int v23;
  bool v24; // cf
  unsigned int v25;
  int v26;
  size_t v27;
  int v28;
  uint32_t *v29;
  unsigned int *v30;
  unsigned int i;
  glf::Self *v32;
  uint32_t *v33;
  glf::Self *v34;
  char *v35;
  char *v36;
  uint32_t *v37;
  glf::Self *v38;
  unsigned int v39;
  unsigned int v40;
  int v41;
  unsigned int v42; // [esp-Ch] [ebp-18h]
  int v43; // [esp-Ch] [ebp-18h]
  uint32_t *v44; // [esp-Ch] [ebp-18h]
  unsigned int *v46;
  unsigned int v47;
  unsigned int v48;
  uint32_t *v49;

  result = (unsigned int *)a2;
  if ( a3 == 0 )
    return result;
  v5 = *(unsigned int **)(a1 + 4);
  if ( a3 <= (*(uint32_t *)(a1 + 8) - (int)(uintptr_t)v5) >> 3 )
  {
    v40 = *a4;
    v39 = a4[1];
    v42 = ((char *)v5 - (char *)a2) >> 3;
    if ( a3 >= v42 )
    {
      v14 = a3 - v42;
      v15 = *(unsigned int **)(a1 + 4);
      if ( a3 != v42 )
      {
        do
        {
          if ( v15 != nullptr )
          {
            *v15 = v40;
            v15[1] = v39;
          }
          v15 += 2;
          --v14;
        }
        while ( v14 != 0 );
        result = (unsigned int *)a2;
        v15 = *(unsigned int **)(a1 + 4);
        v14 = a3 - v42;
      }
      v16 = &v15[2 * v14];
      *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v16);
      if ( a2 == (glf::Self *)v5 )
      {
        result = &v16[2 * v42];
        *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(result);
      }
      else
      {
        v17 = (unsigned int *)a2;
        do
        {
          if ( v16 != nullptr )
          {
            *v16 = *v17;
            v16[1] = v17[1];
          }
          v17 += 2;
          v16 += 2;
        }
        while ( v5 != v17 );
        *(uint32_t *)(a1 + 4) += 8 * v42;
        v48 = ((unsigned int)((char *)v5 - ((char *)a2 + 8)) >> 3) + 1;
        if ( v48 <= 2 )
          goto LABEL_71;
        if ( 2 * (v48 >> 1) == 0 )
          goto LABEL_71;
        v18 = 0;
        v19.i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v40), _mm_cvtsi32_si128(v39)).u64[0];
        v19.i64[1] = v19.i64[0];
        do
        {
          v20 = v18++;
          *((__m128i *)a2 + v20) = v19;
        }
        while ( v48 >> 1 > v18 );
        result = (unsigned int *)((char *)a2 + 16 * (v48 >> 1));
        if ( v48 != 2 * (v48 >> 1) )
        {
LABEL_71:
          do
          {
            *result = v40;
            result[1] = v39;
            result += 2;
          }
          while ( v5 != result );
        }
      }
    }
    else
    {
      v43 = 8 * a3;
      v46 = &v5[-2 * a3];
      v6 = *(unsigned int **)(a1 + 4);
      if ( v5 != v46 )
      {
        v7 = &v5[-2 * a3];
        do
        {
          if ( v6 != nullptr )
          {
            *v6 = *v7;
            v6[1] = v7[1];
          }
          v7 += 2;
          v6 += 2;
        }
        while ( v5 != v7 );
        result = (unsigned int *)a2;
        v6 = *(unsigned int **)(a1 + 4);
      }
      *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&v6[v43 / 4u]);
      v8 = ((char *)v46 - (char *)a2) >> 3;
      if ( v8 > 0 )
      {
        v9 = &v5[-2 * v8];
        v10 = &v46[-2 * v8];
        do
        {
          v9[2 * v8 - 2] = v10[2 * v8 - 2];
          v9[2 * v8 - 1] = v10[2 * v8 - 1];
          --v8;
        }
        while ( v8 != 0 );
      }
      if ( a2 != (glf::Self *)((char *)a2 + v43) )
      {
        v47 = ((unsigned int)(v43 - 8) >> 3) + 1;
        if ( v47 <= 2 )
          goto LABEL_72;
        if ( 2 * (v47 >> 1) == 0 )
          goto LABEL_72;
        v11 = 0;
        v12.i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v40), _mm_cvtsi32_si128(v39)).u64[0];
        v12.i64[1] = v12.i64[0];
        do
        {
          v13 = v11++;
          *((__m128i *)a2 + v13) = v12;
        }
        while ( v47 >> 1 > v11 );
        result = (unsigned int *)((char *)a2 + 16 * (v47 >> 1));
        if ( v47 != 2 * (v47 >> 1) )
        {
LABEL_72:
          do
          {
            *result = v40;
            result[1] = v39;
            result += 2;
          }
          while ( (unsigned int *)((char *)a2 + v43) != result );
        }
      }
    }
    return result;
  }
  v21 = *(glf::Self **)a1;
  v22 = ((int)(uintptr_t)v5 - *(uint32_t *)a1) >> 3;
  if ( a3 > 0x1FFFFFFF - v22 )
    sub_1900180("vector::_M_fill_insert");
  v23 = a3;
  if ( v22 >= a3 )
    v23 = v22;
  v24 = __CFADD__(v22, v23);
  v25 = v22 + v23;
  if ( v24 || v25 > 0x1FFFFFFF )
  {
    v41 = -2;
    v26 = a2 - v21;
    v27 = 0xFFFFFFF8;
    v28 = v26 >> 3;
LABEL_43:
    v38 = a2;
    v44 = (uint32_t *)(glf::Alloc(v27));
    a2 = v38;
    v29 = v44;
    goto LABEL_44;
  }
  v28 = (a2 - v21) >> 3;
  if ( v25 != 0 )
  {
    v41 = 2 * v25;
    v27 = 8 * v25;
    goto LABEL_43;
  }
  v44 = nullptr;
  v41 = 0;
  v29 = nullptr;
LABEL_44:
  v30 = &v29[2 * v28];
  for ( i = a3; i != 0; --i )
  {
    if ( v30 != nullptr )
    {
      *v30 = *a4;
      v30[1] = a4[1];
    }
    v30 += 2;
  }
  v32 = *(glf::Self **)a1;
  v33 = v44;
  if ( a2 != *(glf::Self **)a1 )
  {
    v34 = *(glf::Self **)a1;
    do
    {
      if ( v33 != nullptr )
      {
        *v33 = *(uint32_t *)v34;
        v33[1] = *((uint32_t *)v34 + 1);
      }
      v34 = (glf::Self *)((char *)v34 + 8);
      v33 += 2;
    }
    while ( a2 != v34 );
    v33 = &v44[2 * ((unsigned int)(a2 - (glf::Self *)((char *)v32 + 8)) >> 3) + 2];
  }
  v49 = &v33[2 * a3];
  v35 = *(char **)(a1 + 4);
  if ( a2 != (glf::Self *)v35 )
  {
    v36 = (char *)a2;
    v37 = &v33[2 * a3];
    do
    {
      if ( v37 != nullptr )
      {
        *v37 = *(uint32_t *)v36;
        v37[1] = *((uint32_t *)v36 + 1);
      }
      v36 += 8;
      v37 += 2;
    }
    while ( v35 != v36 );
    v49 += 2 * ((unsigned int)(v35 - ((char *)a2 + 8)) >> 3) + 2;
  }
  if ( *(uint32_t *)a1 != 0 )
    glf::Free(*(glf::Self **)a1);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v44);
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v49);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&v44[v41]);
  return &v44[v41];
}

// Binary VA: 0xcc9b60 (source: lib_batch_0.json)
int sub_CC9B60(void **a1, volatile int32_t **a2, volatile int32_t **a3)
{
  volatile int32_t **v3;
  void **v4;
  char *v5;
  char *v6;
  int v7;
  char *v8;
  int v9;
  char *v10;
  int v11;
  int v12;
  int v13;
  volatile int32_t *v14;
  volatile int32_t *v15;
  int v16;
  int result;
  uint8_t *v18;
  unsigned int v19;
  unsigned int v20;
  int v21;
  volatile int32_t **v22;
  volatile int32_t **v23;
  volatile int32_t *v24;
  bool v25; // zf
  volatile int32_t **v26;
  volatile int32_t **v27;
  volatile int32_t *v28;
  volatile int32_t **v29;
  volatile int32_t *v30;
  volatile int32_t **v31;
  volatile int32_t **v32;
  volatile int32_t **v33;
  int v34;
  volatile int32_t *v35;
  char *v36; // [esp+1Ch] [ebp-30h]
  char *v37; // [esp+1Ch] [ebp-30h]
  int v38; // [esp+1Ch] [ebp-30h]
  volatile int32_t **v39; // [esp+1Ch] [ebp-30h]
  volatile int32_t *v40;
  int v41;
  size_t v42;
  int v43;
  volatile int32_t **v45;
  void **v46; // [esp+2Ch] [ebp-20h]

  v3 = a2;
  v4 = a1;
  v5 = (char *)a1[1];
  if ( v5 == a1[2] )
  {
    v18 = (uint8_t *)(*a1);
    v19 = (v5 - (char *)(v18)) >> 2;
    if ( v19 != 0 )
    {
      v20 = 2 * v19;
      if ( v19 > 2 * v19 || v20 > 0x3FFFFFFF )
      {
        v43 = -4;
        v21 = ((char *)a2 - (char *)(v18)) >> 2;
      }
      else
      {
        v43 = 8 * v19;
        v21 = ((char *)a2 - (char *)(v18)) >> 2;
        if ( v20 == 0 )
        {
          v22 = (volatile int32_t **)&loc_4;
          v41 = 0;
LABEL_35:
          v23 = (volatile int32_t **)(v41 + 4 * v21);
          if ( v23 != nullptr )
          {
            v24 = *a3;
            v25 = *a3 == nullptr;
            *v23 = *a3;
            if ( !v25 )
              __sync_add_and_fetch(v24 + 1, 1u);
          }
          v26 = (volatile int32_t **)*v4;
          if ( a2 != *v4 )
          {
            v27 = (volatile int32_t **)v41;
            do
            {
              if ( v27 != nullptr )
              {
                v28 = *v26;
                v25 = *v26 == nullptr;
                *v27 = *v26;
                if ( !v25 )
                  __sync_add_and_fetch(v28 + 1, 1u);
              }
              ++v26;
              ++v27;
            }
            while ( a2 != v26 );
            v22 = v27 + 1;
          }
          v29 = (volatile int32_t **)v4[1];
          if ( a2 != v29 )
          {
            do
            {
              if ( v22 != nullptr )
              {
                v30 = *v3;
                v25 = *v3 == nullptr;
                *v22 = *v3;
                if ( !v25 )
                  __sync_add_and_fetch(v30 + 1, 1u);
              }
              ++v3;
              ++v22;
            }
            while ( v29 != v3 );
            v29 = (volatile int32_t **)v4[1];
          }
          v31 = (volatile int32_t **)*v4;
          if ( v29 == *v4 )
          {
LABEL_60:
            if ( v31 != nullptr )
            {
              v39 = v22;
              operator delete(v31);
              v22 = v39;
            }
            v4[1] = v22;
            *v4 = (void *)v41;
            v4[2] = (void *)(v41 + v43);
            return v41 + v43;
          }
          v46 = v4;
          v45 = v22;
          v32 = v29;
          v33 = v31;
          while ( 1 )
          {
            while ( 1 )
            {
              v35 = *v33;
              if ( *v33 != nullptr )
                break;
LABEL_55:
              if ( v32 == ++v33 )
                goto LABEL_59;
            }
            if ( __sync_fetch_and_add(v35 + 1, 0xFFFFFFFF) != 1 )
            {
              v34 = *((uint32_t *)v35 + 1);
              _mm_mfence();
              if ( v34 == 1 )
                G4_VCALL<void>(v35, 12);
              goto LABEL_55;
            }
            ++v33;
            G4_VCALL<void>(v35, 8);
            G4_VCALL<void>(v35, 16);
            if ( v32 == v33 )
            {
LABEL_59:
              v4 = v46;
              v22 = v45;
              v31 = (volatile int32_t **)*v46;
              goto LABEL_60;
            }
          }
        }
      }
    }
    else
    {
      v43 = 4;
      v21 = ((char *)a2 - (char *)(v18)) >> 2;
    }
    v38 = v21;
    v41 = (int)(uintptr_t)(operator new(v43));
    v21 = v38;
    v22 = (volatile int32_t **)(v41 + 4);
    goto LABEL_35;
  }
  v6 = nullptr;
  if ( v5 != nullptr )
  {
    v7 = *((uint32_t *)v5 - 1);
    *(uint32_t *)v5 = v7;
    if ( v7 != 0 )
      __sync_add_and_fetch((volatile int32_t *)(v7 + 4), 1u);
    v6 = (char *)v4[1];
  }
  v8 = v6 + 4;
  v4[1] = v8;
  v40 = *a3;
  if ( *a3 != nullptr )
  {
    __sync_add_and_fetch(*a3 + 1, 1u);
    v8 = (char *)v4[1];
  }
  v9 = (v8 - 8 - (char *)a2) >> 2;
  if ( v9 > 0 )
  {
    v10 = v8 - 12;
    v42 = (size_t)(v8 - 8);
    v11 = -4 * v9;
    while ( 1 )
    {
      v13 = *(uint32_t *)&v10[4 * v9 + v11];
      if ( v13 != 0 )
        __sync_add_and_fetch((volatile int32_t *)(v13 + 4), 1u);
      v14 = *(volatile int32_t **)(v42 + v11 + 4 * v9);
      *(uint32_t *)(v42 + v11 + 4 * v9) = v13;
      if ( v14 == nullptr )
        goto LABEL_12;
      if ( __sync_fetch_and_add(v14 + 1, 0xFFFFFFFF) == 1 )
      {
        v36 = v10;
        G4_VCALL<void>(v14, 8);
        G4_VCALL<void>(v14, 16);
        --v9;
        v10 = v36;
        if ( v9 == 0 )
          break;
      }
      else
      {
        v12 = *((uint32_t *)v14 + 1);
        _mm_mfence();
        if ( v12 == 1 )
        {
          v37 = v10;
          G4_VCALL<void>(v14, 12);
          v10 = v37;
        }
LABEL_12:
        if ( --v9 == 0 )
          break;
      }
    }
  }
  if ( v40 != nullptr )
    __sync_add_and_fetch(v40 + 1, 1u);
  v15 = *a2;
  *a2 = v40;
  if ( v15 != nullptr )
  {
    if ( __sync_fetch_and_add(v15 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v15, 8);
      G4_VCALL<void>(v15, 16);
    }
    else
    {
      v16 = *((uint32_t *)v15 + 1);
      _mm_mfence();
      if ( v16 == 1 )
        G4_VCALL<void>(v15, 12);
    }
  }
  result = (int)(uintptr_t)v40;
  if ( v40 != nullptr )
  {
    if ( __sync_fetch_and_add(v40 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v40, 8);
      return G4_VCALL<int>(v40, 16);
    }
    else
    {
      result = *((uint32_t *)v40 + 1);
      _mm_mfence();
      if ( result == 1 )
        return G4_VCALL<int>(v40, 12);
    }
  }
  return result;
}

// Binary VA: 0x654be0 (source: game_core_batch_1.json)
bool sub_654BE0(int a1, char a2)
{
  bool result;
  int v3;
  int64_t v4; // rax

  result = false;
  if ( *(uint32_t *)(*(uint32_t *)(a1 + 8) - 12) != 0 )
  {
    v3 = *(uint32_t *)(a1 + 4);
    if ( v3 != 0 )
    {
      v4 = ((int64_t ( *)(int))*(uint32_t *)(*(uint32_t *)v3 + 32))(v3);
      return ((((a2 & 0x20) != 0) << a2) & HIDWORD(v4) | (((a2 & 0x20) == 0) << a2) & (unsigned int)v4) != 0;
    }
  }
  return result;
}

// Binary VA: 0x656a10 (source: game_core_batch_1.json)
void sub_656A10(uint32_t *a1, int a2)
{
  int v2;
  char *v3;
  int v4;
  int v5[4];

  if ( *a1 != 0 )
    sub_5459F0((int)(uintptr_t)a1, *a1 + 16);
  if ( a2 != 0 )
  {
    v2 = 0;
    *a1 = a2 - 12;
    v5[0] = (int)(uintptr_t)a1;
    if ( a2 != 12 )
      v2 = a2;
    v3 = *(char **)(v2 + 8);
    if ( v3 == *(char **)(v2 + 12) )
    {
      g4_std::vector_Gangstar_Handleable_a745f6::M_insert_aux(v2 + 4, v3, v5);
    }
    else
    {
      v4 = 0;
      if ( v3 != nullptr )
      {
        *(uint32_t *)v3 = (uint32_t)(uintptr_t)(a1);
        v4 = *(uint32_t *)(v2 + 8);
      }
      *(uint32_t *)(v2 + 8) = v4 + 4;
    }
  }
  else
  {
    *a1 = 0;
  }
}

// Binary VA: 0x656b20 (source: game_core_batch_1.json)
void sub_656B20(uint32_t *a1, int a2)
{
  int v2;
  char *v3;
  int v4;
  int v5[4];

  if ( *a1 != 0 )
    sub_5459F0((int)(uintptr_t)a1, *a1 + 16);
  if ( a2 != 0 )
  {
    v2 = 0;
    *a1 = a2 - 12;
    v5[0] = (int)(uintptr_t)a1;
    if ( a2 != 12 )
      v2 = a2;
    v3 = *(char **)(v2 + 8);
    if ( v3 == *(char **)(v2 + 12) )
    {
      g4_std::vector_Gangstar_Handleable_a745f6::M_insert_aux(v2 + 4, v3, v5);
    }
    else
    {
      v4 = 0;
      if ( v3 != nullptr )
      {
        *(uint32_t *)v3 = (uint32_t)(uintptr_t)(a1);
        v4 = *(uint32_t *)(v2 + 8);
      }
      *(uint32_t *)(v2 + 8) = v4 + 4;
    }
  }
  else
  {
    *a1 = 0;
  }
}

// Binary VA: 0x656550 (source: game_core_batch_1.json)
int sub_656550(unsigned int *a1)
{
  unsigned int v1;
  unsigned int v2;
  unsigned int v3;
  unsigned int v4;
  int v5;
  char v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  int *v11;
  int result;
  int v13;
  bool v14; // zf
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  int *v19;
  int v20;
  int v21;
  unsigned int *v22;
  unsigned int *v23;
  unsigned int v24;
  unsigned int v25; // [esp+1Ch] [ebp-1Ch]
  unsigned int v26;
  unsigned int *v27;

  v26 = 0;
  v27 = a1;
  v1 = a1[1];
  v25 = a1[2];
  if ( -1431655765 * ((int)(v25 - v1) >> 2) != 0 )
  {
    if ( *(uint8_t *)(v1 + 4) != 0 )
    {
      v2 = 0;
      v23 = a1;
      v3 = 0;
    }
    else
    {
      sub_61FDE0(&v26);
      v3 = v26;
      v23 = v27;
      v2 = v26;
      v1 = v27[1];
      v25 = v27[2];
    }
  }
  else
  {
    v23 = a1;
    v3 = 0;
    v2 = 0;
  }
  while ( -1431655765 * ((int)(v25 - v1) >> 2) > v2 )
  {
    ++*(uint32_t *)(v1 + 12 * v2 + 8);
    v1 = v23[1];
    v25 = v23[2];
    v4 = -1431655765 * ((int)(v25 - v1) >> 2);
    if ( v2 < v4 )
    {
      v3 = v2;
      v5 = 4 * (3 * v2 + 3);
      do
      {
        if ( ++v3 >= v4 )
          break;
        v6 = *(uint8_t *)(v1 + v5 + 4);
        v5 += 12;
      }
      while ( v6 == 0 );
      v2 = v3;
    }
  }
  v26 = v3;
  v7 = *a1;
  v8 = a1[1];
  v9 = -1431655765 * ((int)(a1[2] - v8) >> 2);
  if ( *a1 >= v9 )
  {
    v26 = 0;
    v27 = a1;
    v22 = a1;
    v24 = 0;
    if ( v9 != 0 && *(uint8_t *)(v8 + 4) == 0 )
    {
      sub_61FDE0(&v26);
      v22 = v27;
      v24 = v26;
      v8 = v27[1];
      v9 = -1431655765 * ((int)(v27[2] - v8) >> 2);
    }
    v15 = v24;
    while ( v15 < v9 )
    {
      v16 = v24;
      v17 = v15 + 1;
      if ( *(uint32_t *)(v8 + 12 * v24 + 8) < *(uint32_t *)(v8 + 12 * v15 + 8) )
        v16 = v15;
      v24 = v16;
      v21 = 12 * v17;
      while ( 1 )
      {
        v15 = v17;
        if ( v17 >= v9 )
          break;
        v18 = v21;
        v21 += 12;
        if ( *(uint8_t *)(v8 + v18 + 4) != 0 )
          break;
        ++v17;
      }
    }
    v19 = (int *)(v8 + 12 * v24);
    v20 = *v19;
    *((uint8_t *)v19 + 4) = 0;
    v19[2] = 0;
    if ( v20 != 0 )
      G4_VCALL<void>(v20, 364);
    *((uint8_t *)v19 + 4) = 1;
    return *(uint32_t *)(v22[1] + 12 * v24);
  }
  else
  {
    v10 = v7 + 1;
    v11 = (int *)(v8 + 12 * v7);
    result = 0;
    *a1 = v10;
    v13 = *v11;
    v14 = *v11 == 0;
    *((uint8_t *)v11 + 4) = 0;
    v11[2] = 0;
    if ( !v14 )
    {
      G4_VCALL<void>(v13, 364);
      result = *v11;
    }
    *((uint8_t *)v11 + 4) = 1;
  }
  return result;
}

// Binary VA: 0x6553e0 (source: game_core_batch_1.json)
int *sub_6553E0()
{
  if ( byte_20D5BF0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5BF0) != 0 )
  {
    dword_20D5BF8 = (int)off_2048508;
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5BF0);
    __cxa_atexit((void (*)(void *))sub_542850, &dword_20D5BF8, &unk_20D1280);
  }
  return (int *)(&dword_20D5BF8);
}

// Binary VA: 0x655ab0 (source: game_core_batch_1.json)
uint32_t ** sub_655AB0(uint32_t **a1, uint32_t **a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v6;

  v2 = *a2;
  v3 = nullptr;
  v6 = *a2;
  if ( v6 != nullptr )
  {
    __sync_add_and_fetch((uint32_t *)((char *)v2 + *(uint32_t *)(*v2 - 16) + 4), 1u);
    v3 = v6;
  }
  v4 = *a1;
  *a1 = v3;
  v6 = v4;
  sub_5EDFE0(&v6);
  return a1;
}

// Binary VA: 0x655ea0 (source: game_core_batch_1.json)
int *sub_655EA0()
{
  int *result;

  if ( byte_20D5C00 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5C00) != 0 )
  {
    sub_76C650(&dword_20D5C20);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5C00);
    __cxa_atexit((void (*)(void *))sub_76F420, &dword_20D5C20, &unk_20D1280);
  }
  result = nullptr;
  if ( byte_20D5C24 == 0 )
    return (int *)(&dword_20D5C20);
  return result;
}

// Binary VA: 0x656390 (source: game_core_batch_1.json)
int *sub_656390()
{
  int *result;

  if ( byte_20D5CB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5CB0) != 0 )
  {
    sub_96F310(&dword_20D5CC0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5CB0);
    __cxa_atexit((void (*)(void *))sub_9AC0D0, &dword_20D5CC0, &unk_20D1280);
  }
  result = nullptr;
  if ( byte_20D5CC4 == 0 )
    return (int *)(&dword_20D5CC0);
  return result;
}

// Binary VA: 0x655d40 (source: game_core_batch_1.json)
int *sub_655D40()
{
  int *result;

  if ( byte_20D2430 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2430) != 0 )
  {
    sub_7D1280(&dword_20D2438);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2430);
    __cxa_atexit((void (*)(void *))sub_789DF0, &dword_20D2438, &unk_20D1280);
  }
  result = nullptr;
  if ( byte_20D243C == 0 )
    return (int *)(&dword_20D2438);
  return result;
}

// Binary VA: 0x16d9d60 (source: lib_batch_3.json)
bool sub_16D9D60(int a1, int a2)
{
  return *(uint32_t *)(*(uint32_t *)(a1 + 4) + 20) < *(uint32_t *)(*(uint32_t *)(a2 + 4) + 20);
}

// Binary VA: 0x1885330 (source: lib_batch_3.json)
int sub_1885330(hkOArchive::Self *a1, int64_t a2)
{
  uint64_t v3; // rax
  char v4;
  uint64_t v5; // rax
  uint8_t v6;
  uint64_t v7; // rdi
  char v8;

  if ( ((unsigned int)a2 | (HIDWORD(a2) + 0x80000000)) == 0 )
  {
    hkOArchive::write8u(a1, 0x81u);
    v7 = 0x40000;
    v6 = 0;
    do
    {
LABEL_5:
      hkOArchive::write8u(a1, v6 | 0x80);
      v8 = BYTE4(v7);
      HIDWORD(v7) = __PAIR64__(v7, HIDWORD(v7)) >> 7;
      LODWORD(v7) = (unsigned int)v7 >> 7;
      v6 = v8 & 0x7F;
    }
    while ( v7 != 0 );
    return hkOArchive::write8u(a1, v6);
  }
  v3 = 2 * a2;
  if ( a2 < 0 )
  {
    HIDWORD(v3) = (uint64_t)(-2 * a2) >> 32;
    LODWORD(v3) = (-2 * a2) | 1;
  }
  v4 = v3;
  v5 = v3 >> 7;
  v6 = v4 & 0x7F;
  v7 = __PAIR64__(v5, HIDWORD(v5));
  if ( v5 != 0 )
    goto LABEL_5;
  return hkOArchive::write8u(a1, v6);
}

// Binary VA: 0x18854c0 (source: lib_batch_3.json)
int sub_18854C0(hkOArchive::Self *a1)
{
  return hkOArchive::write8u(a1, 3u);
}

// Binary VA: 0x18854f0 (source: lib_batch_3.json)
int sub_18854F0(uint32_t *a1, hkString::Self *a2)
{
  int v3;
  int v4;
  int v5;
  uint64_t v6; // rax
  char v7;
  uint64_t v8; // rax
  uint8_t v9;
  uint64_t v10; // rdi
  char v11;
  uint64_t v13; // rax
  int64_t v14; // kr08_8
  int64_t v15; // rdi
  int64_t v16; // rax
  char v17;
  uint8_t v18;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v20;
  int v21; // [esp+1Ch] [ebp-20h]

  if ( a2 == nullptr )
    return hkOArchive::write8u((hkOArchive::Self *)a1, 3u);
  v20 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(a1 + 4);
  v3 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
         (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(a1 + 4),
         a2,
         -1);
  if ( v3 == -1 )
  {
    LODWORD(v13) = hkString::strLen(a2);
    v14 = 2LL * (int)v13;
    HIDWORD(v13) = HIDWORD(v14);
    HIDWORD(v15) = v14;
    v21 = v13;
    LODWORD(v15) = v13 >> 31;
    if ( v14 < 0 )
    {
      v16 = -2LL * v13;
      LODWORD(v15) = HIDWORD(v16);
      HIDWORD(v15) = v16 | 1;
    }
    while ( 1 )
    {
      v17 = BYTE4(v15);
      HIDWORD(v15) = __PAIR64__(v15, HIDWORD(v15)) >> 7;
      LODWORD(v15) = (unsigned int)v15 >> 7;
      v18 = v17 & 0x7F;
      if ( v15 == 0 )
        break;
      hkOArchive::write8u((hkOArchive::Self *)a1, v18 | 0x80);
    }
    hkOArchive::write8u((hkOArchive::Self *)a1, v18);
    hkOArchive::writeRaw((hkOArchive::Self *)a1, a2, v21);
    return hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v20, a2, a1[5] + 1);
  }
  else
  {
    v4 = -v3;
    v5 = -v3 >> 31;
    v6 = 2LL * -v3;
    if ( v5 < 0 )
    {
      HIDWORD(v6) = (-2LL * __PAIR64__(v5, v4)) >> 32;
      LODWORD(v6) = (-2 * v4) | 1;
    }
    v7 = v6;
    v8 = v6 >> 7;
    v9 = v7 & 0x7F;
    v10 = __PAIR64__(v8, HIDWORD(v8));
    if ( v8 != 0 )
    {
      do
      {
        hkOArchive::write8u((hkOArchive::Self *)a1, v9 | 0x80);
        v11 = BYTE4(v10);
        HIDWORD(v10) = __PAIR64__(v10, HIDWORD(v10)) >> 7;
        LODWORD(v10) = (unsigned int)v10 >> 7;
        v9 = v11 & 0x7F;
      }
      while ( v10 != 0 );
    }
    return hkOArchive::write8u((hkOArchive::Self *)a1, v9);
  }
}

// Binary VA: 0x1891470 (source: lib_batch_3.json)
int sub_1891470(int result, int16_t a2)
{
  *(uint16_t *)(result + 18) = a2;
  return result;
}

// Binary VA: 0x1891480 (source: lib_batch_3.json)
int sub_1891480(int a1, int a2, int a3)
{
  int Alignment;
  int v4;
  int v5;
  int v7;
  hkClass::Self *StructClass;
  int v9;

  switch ( a2 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 24:
    case 31:
    case 32:
    case 34:
      Alignment = hkClassMember::getAlignment((hkClass::Self **)a1);
      break;
    case 19:
      Alignment = sub_1891480(a1, *(uint8_t *)(a1 + 13), a3);
      break;
    case 20:
    case 21:
    case 22:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 33:
      Alignment = a3;
      break;
    case 25:
      v7 = 0;
      Alignment = 1;
      StructClass = (hkClass::Self *)hkClassMember::getStructClass((hkClassMember::Self *)a1);
      while ( v7 < hkClass::getNumMembers(StructClass) )
      {
        hkClassMember::Self *m25 = (hkClassMember::Self *)hkClass::getMember(StructClass, v7);
        v9 = sub_1891480((int)(uintptr_t)m25, *((uint8_t *)m25 + 12), a3);
        if ( Alignment < v9 )
          Alignment = v9;
        ++v7;
      }
      break;
    default:
      Alignment = -1;
      break;
  }
  v4 = *(uint16_t *)(a1 + 16) & 0x980;
  if ( (*(uint16_t *)(a1 + 16) & 0x980) != 0 )
  {
    v5 = 32;
    if ( v4 != 2048 )
      v5 = 8 * (v4 == 256) + 8;
    if ( Alignment < v5 )
      return v5;
  }
  return Alignment;
}

// Binary VA: 0x18915e0 (source: lib_batch_3.json)
int sub_18915E0(uint8_t *a1, uint8_t *a2, int a3)
{
  int result;
  int v5;
  hkClass::Self *StructClass;
  int ObjectSize;
  int CstyleArraySize;
  int v9;
  int v10;
  int v11[3];
  int v12[131];

  switch ( a3 )
  {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 24:
    case 31:
    case 32:
      return hkClassMember::getSizeInBytes((hkClassMember::Self *)a1);
    case 19:
      return sub_18915E0(a1, a2, a1[13]);
    case 20:
    case 21:
    case 29:
    case 30:
    case 33:
      ObjectSize = *a2;
      goto LABEL_11;
    case 22:
      v5 = 4;
      goto LABEL_9;
    case 23:
      goto LABEL_5;
    case 25:
      StructClass = (hkClass::Self *)hkClassMember::getStructClass((hkClassMember::Self *)a1);
      ObjectSize = hkClass::getObjectSize(StructClass);
LABEL_11:
      CstyleArraySize = hkClassMember::getCstyleArraySize((hkClassMember::Self *)a1);
      v9 = 1;
      if ( CstyleArraySize != 0 )
        v9 = hkClassMember::getCstyleArraySize((hkClassMember::Self *)a1);
      return ObjectSize * v9;
    case 26:
      v5 = 0;
LABEL_9:
      result = *a2 + v5 + 4;
      break;
    case 27:
      result = 2 * *a2 + 4;
      break;
    case 28:
      result = 2 * *a2;
      break;
    case 34:
      result = 4;
      break;
    default:
      hkErrStream::Construct((hkErrStream::Self *)v11, (hkString::Self *)v12, 512);
      hkOstream::opShl((int)(uintptr_t)v11, (hkString::Self *)"Unknown class member type in structureLayout::getMemberSize().");
      if ( hkError::messageError((hkError::Self *)0x50A18B58, (int)(uintptr_t)v12, "Util/hkStructureLayout.cpp", &dword_D0[3], v10) != 0 )
        __builtin_debugtrap();
      hkErrStream::Destroy((hkErrStream::Self *)v11);
LABEL_5:
      result = 0;
      break;
  }
  return result;
}

// Binary VA: 0x1938af0 (source: lib_batch_4.json)
void sub_1938AF0(void *a1)
{
  operator delete(a1);
}

// Binary VA: 0x193a2e0 (source: lib_batch_4.json)
size_t * sub_193A2E0(size_t **a1, size_t **a2)
{
  size_t *result;
  uint8_t v3[13]; // [esp+1Fh] [ebp-Dh] BYREF

  result = *a2;
  if ( (*(*a2 - 1) & 0x80000000) != 0 )
  {
    result = sub_1939A80((int)(uintptr_t)(*a2 - 3), (int)(uintptr_t)v3, 0);
    *a1 = result;
  }
  else
  {
    if ( *a2 - 3 != (size_t *)(dword_213B808) )
      __sync_add_and_fetch((volatile int32_t *)result - 1, 1u);
    *a1 = result;
  }
  return result;
}

// Binary VA: 0x155abf0 (source: lib_batch_2.json)
static hkMonitorStreamAnalyzer::Node::Self *getNodeAtSample(hkMonitorStreamAnalyzer::Node::Self *a1,
 hkMonitorStreamAnalyzer::Node::Self *a2,
 double a3,
 int a4)
{
  hkMonitorStreamAnalyzer::Node::Self *result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  double v10; // xmm2_8

  result = a1;
  if ( a2 != nullptr && *((float *)a2 + a4) + *(double *)((char *)a2 + 108) >= a3 )
  {
    result = a2;
  }
  else if ( a1 == nullptr )
  {
    return result;
  }
  while ( 1 )
  {
    v5 = *((uint32_t *)result + 25);
    v6 = 0;
    while ( v5 - v6 > 2 )
    {
      v7 = *(uint32_t *)(*((uint32_t *)result + 24) + 4 * ((v6 + v5) >> 1));
      if ( *(uint16_t *)(v7 + 132) == 2 )
        break;
      if ( *(double *)(v7 + 108) > a3 )
        v5 = (v6 + v5) >> 1;
      else
        v6 = (v6 + v5) >> 1;
    }
    if ( v5 <= v6 )
      break;
    while ( 1 )
    {
      v8 = *((uint32_t *)result + 24);
      v9 = *(uint32_t *)(v8 + 4 * v6);
      if ( *(uint16_t *)(v9 + 132) != 2 )
      {
        v10 = *(double *)(v9 + 108);
        if ( *(float *)(v9 + 4 * a4) + v10 >= a3 )
          break;
      }
      if ( ++v6 == v5 )
        return result;
    }
    if ( a3 < v10 )
      break;
    result = *(hkMonitorStreamAnalyzer::Node::Self **)(v8 + 4 * v6);
  }
  return result;
}

// Binary VA: 0x1826940 (source: lib_batch_3.json)
static hkMassProperties::Self *scaleVolumeMassProperties(const hkVector4f::Self *a1, hkMassProperties::Self *a2)
{
  float v3; // xmm6_4
  float v4; // xmm3_4
  float v5; // xmm5_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm5_4
  float v9; // xmm4_4
  float v10; // xmm6_4
  float v11; // xmm2_4
  float v12; // xmm7_4
  float v13; // xmm2_4

  v3 = *((float *)a2 + 18);
  v4 = *((float *)a1 + 1);
  v5 = *((float *)a2 + 13);
  v6 = (float)((float)(*((float *)a2 + 8) + v3) - v5) * (float)((float)(v4 * v4) * 0.5);
  v7 = (float)((float)(*((float *)a2 + 8) + v5) - v3) * (float)((float)(*((float *)a1 + 2) * *((float *)a1 + 2)) * 0.5);
  v8 = (float)((float)(v5 + v3) - *((float *)a2 + 8)) * (float)((float)(*(float *)a1 * *(float *)a1) * 0.5);
  v9 = (float)(*((float *)a2 + 12) * *(float *)a1) * v4;
  v10 = (float)(*((float *)a2 + 17) * v4) * *((float *)a1 + 2);
  v11 = *((float *)a2 + 4);
  v12 = (float)(*((float *)a2 + 16) * *(float *)a1) * *((float *)a1 + 2);
  *(float *)a2 = (float)((float)(v4 * *(float *)a1) * *((float *)a1 + 2)) * *(float *)a2;
  *((float *)a2 + 4) = v11 * *(float *)a1;
  *((float *)a2 + 5) = *((float *)a2 + 5) * *((float *)a1 + 1);
  *((float *)a2 + 6) = *((float *)a2 + 6) * *((float *)a1 + 2);
  v13 = *((float *)a2 + 7) * *((float *)a1 + 3);
  *((float *)a2 + 9) = v9;
  *((float *)a2 + 7) = v13;
  *((float *)a2 + 8) = v6 + v7;
  *((float *)a2 + 10) = v12;
  *((float *)a2 + 12) = v9;
  *((float *)a2 + 13) = v7 + v8;
  *((float *)a2 + 14) = v10;
  *((float *)a2 + 16) = v12;
  *((float *)a2 + 17) = v10;
  *((float *)a2 + 18) = v8 + v6;
  return a2;
}

// Binary VA: 0x15582a0 (source: lib_batch_2.json)
unsigned int sub_15582A0(unsigned int a1,
 hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *a2,
 int a3)
{
  hkString::Self *v3;
  unsigned int v4;
  uint32_t *v5;
  __m128 v6;
  __m128 v7;
  __m128 v8;
  int v9;
  unsigned int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  float v20; // xmm0_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  unsigned int result;
  int v27;
  int v28;
  int v29;
  int v30;
  unsigned int v31;
  __m128 v32;
  __m128 v33;
  __m128 v34;
  int v35;
  int v36;
  int v37;
  uint32_t *v38;
  int v39;
  int v40;
  int v41;
  int v42;
  uint32_t *v43;
  float v44; // xmm0_4
  float v45; // xmm0_4
  float v46; // xmm0_4
  float v47; // xmm0_4
  float v48; // xmm0_4
  float v49; // xmm0_4
  float v50; // xmm0_4
  float v51; // xmm0_4
  float v52; // xmm0_4
  float v53; // xmm0_4
  float v54; // xmm0_4
  float v55; // xmm0_4
  float v56; // xmm0_4
  float v57; // xmm0_4
  float v58; // xmm0_4
  float v59; // xmm0_4
  float v60; // xmm0_4
  float v61; // xmm0_4
  float v62; // xmm0_4
  float v63; // xmm0_4
  float v64; // xmm0_4
  int address;
  const char *v66;
  int v68;
  int v70; // [esp+Ch] [ebp-2Ch]
  hkString::Self *v71;
  hkString::Self *v72;
  unsigned int v73;
  int v74;
  int v75;
  unsigned int v76;
  int v77;
  int v78;
  uint32_t v79[7]; // [esp+1Ch] [ebp-1Ch] BYREF

  v79[3] = (uint32_t)(uintptr_t)(&a3);
  v3 = *(hkString::Self **)(a1 + 120);
  v4 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(a2, v3, 0);
  v73 = v4;
  if ( v4 == 0 )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v73 = (*(int ( **)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 48) + 8))(
            *(uint32_t *)(*(uint32_t *)address + 48),
            160);
    hkMonitorStreamAnalyzer::Node::Construct(v73, nullptr, 0, 0);
    *(uint32_t *)(v73 + 136) = 0;
    *(uint32_t *)(v73 + 140) = 0;
    *(uint32_t *)(v73 + 144) = 0x80000000;
    *(uint32_t *)(v73 + 148) = 0;
    *(uint32_t *)(v73 + 152) = 0;
    *(uint32_t *)(v73 + 156) = 0x80000000;
    *(uint32_t *)(v73 + 120) = (uint32_t)(uintptr_t)(v3);
    hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(a2, v3, v73);
    v4 = v73;
  }
  if ( (a1 + 16 <= v4 + 48 || v4 + 64 <= a1)
    && (v4 >= a1 + 16 || v4 + 16 <= a1)
    && (v73 >= a1 + 64 || v4 + 16 <= a1 + 48)
    && (v4 + 48 >= a1 + 64 || v4 + 64 <= a1 + 48) )
  {
    v5 = (uint32_t *)a1;
    v6 = _mm_add_ps(_mm_loadh_ps((const double *)(v73 + 8)), _mm_loadh_ps((const double *)(a1 + 8)));
    _mm_storel_ps((double *)v73, v6);
    _mm_storeh_ps((double *)(v73 + 8), v6);
    *(__m128i *)(v73 + 48) = _mm_add_epi32(*(__m128i *)(v73 + 48), *(__m128i *)(a1 + 48));
    v7 = _mm_add_ps(_mm_loadh_ps((const double *)(v73 + 24)), _mm_loadh_ps((const double *)(a1 + 24)));
    _mm_storel_ps((double *)(v73 + 16), v7);
    _mm_storeh_ps((double *)(v73 + 24), v7);
    *(__m128i *)(v73 + 64) = _mm_add_epi32(*(__m128i *)(v73 + 64), *(__m128i *)(a1 + 64));
    v8 = _mm_add_ps(_mm_loadh_ps((const double *)(v73 + 40)), _mm_loadh_ps((const double *)(a1 + 40)));
    _mm_storel_ps((double *)(v73 + 32), v8);
    _mm_storeh_ps((double *)(v73 + 40), v8);
    *(__m128i *)(v73 + 80) = _mm_add_epi32(*(__m128i *)(v73 + 80), *(__m128i *)(a1 + 80));
  }
  else
  {
    *(float *)v73 = *(float *)v73 + *(float *)a1;
    v44 = *(float *)(v73 + 4);
    *(uint32_t *)(v73 + 48) += *(uint32_t *)(a1 + 48);
    *(float *)(v73 + 4) = v44 + *(float *)(a1 + 4);
    v45 = *(float *)(v73 + 8);
    *(uint32_t *)(v73 + 52) += *(uint32_t *)(a1 + 52);
    *(float *)(v73 + 8) = v45 + *(float *)(a1 + 8);
    v46 = *(float *)(v73 + 12);
    *(uint32_t *)(v73 + 56) += *(uint32_t *)(a1 + 56);
    *(float *)(v73 + 12) = v46 + *(float *)(a1 + 12);
    v47 = *(float *)(v73 + 16);
    *(uint32_t *)(v73 + 60) += *(uint32_t *)(a1 + 60);
    *(float *)(v73 + 16) = v47 + *(float *)(a1 + 16);
    v48 = *(float *)(v73 + 20);
    *(uint32_t *)(v73 + 64) += *(uint32_t *)(a1 + 64);
    *(float *)(v73 + 20) = v48 + *(float *)(a1 + 20);
    v49 = *(float *)(v73 + 24);
    *(uint32_t *)(v73 + 68) += *(uint32_t *)(a1 + 68);
    *(float *)(v73 + 24) = v49 + *(float *)(a1 + 24);
    v50 = *(float *)(v73 + 28);
    *(uint32_t *)(v73 + 72) += *(uint32_t *)(a1 + 72);
    *(float *)(v73 + 28) = v50 + *(float *)(a1 + 28);
    v51 = *(float *)(v73 + 32);
    *(uint32_t *)(v73 + 76) += *(uint32_t *)(a1 + 76);
    *(float *)(v73 + 32) = v51 + *(float *)(a1 + 32);
    v52 = *(float *)(v73 + 36);
    *(uint32_t *)(v73 + 80) += *(uint32_t *)(a1 + 80);
    *(float *)(v73 + 36) = v52 + *(float *)(a1 + 36);
    v53 = *(float *)(v73 + 40);
    *(uint32_t *)(v73 + 84) += *(uint32_t *)(a1 + 84);
    *(float *)(v73 + 40) = v53 + *(float *)(a1 + 40);
    v54 = *(float *)(v73 + 44);
    *(uint32_t *)(v73 + 88) += *(uint32_t *)(a1 + 88);
    *(float *)(v73 + 44) = v54 + *(float *)(a1 + 44);
    *(uint32_t *)(v73 + 92) += *(uint32_t *)(a1 + 92);
    v5 = (uint32_t *)a1;
  }
  v70 = 0;
  if ( (int)v5[25] > 0 )
  {
    do
    {
      v74 = *(uint32_t *)(v5[24] + 4 * v70);
      sub_15582A0(0u, nullptr, 0);
      v9 = v74;
      v71 = *(hkString::Self **)(v74 + 120);
      v10 = v73;
      v11 = *(uint32_t *)(v73 + 152);
      v12 = v11 - 1;
      if ( v11 - 1 >= 0 )
      {
        v68 = v74;
        v13 = 136 * v12;
        do
        {
          v75 = *(uint32_t *)(v73 + 148) + v13;
          if ( hkString::strCmp(v71, *(const char **)(v75 + 120), v66) == 0 )
          {
            v14 = v75;
            v15 = v68;
            goto LABEL_12;
          }
          --v12;
          v13 -= 136;
        }
        while ( v12 != -1 );
        v10 = v73;
        v9 = v68;
        v11 = *(uint32_t *)(v73 + 152);
      }
      v35 = *(uint32_t *)(v10 + 156) & 0x3FFFFFFF;
      if ( v11 + 1 <= v35 )
      {
        v37 = v11;
      }
      else
      {
        v36 = 2 * v35;
        v77 = v9;
        if ( v11 + 1 >= v36 )
          v36 = v11 + 1;
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v79,
          (hkMemoryAllocator::Self *)hkContainerDebugAllocator::s_alloc,
          (int *)(v73 + 148),
          v36,
          136);
        v9 = v77;
        v37 = *(uint32_t *)(v73 + 152);
      }
      v78 = v9;
      v38 = (uint32_t *)(*(uint32_t *)(v73 + 148) + 136 * v37);
      v38[24] = 0;
      v38[25] = 0;
      v38[26] = 0x80000000;
      ++*(uint32_t *)(v73 + 152);
      v14 = *(uint32_t *)(v73 + 148) + 136 * v11;
      hkMonitorStreamAnalyzer::Node::Construct(v14, nullptr, (int)(uintptr_t)v71, 0);
      v15 = v78;
LABEL_12:
      *(float *)v14 = *(float *)v14 + *(float *)v15;
      v16 = *(float *)(v14 + 4);
      *(uint32_t *)(v14 + 48) += *(uint32_t *)(v15 + 48);
      *(float *)(v14 + 4) = v16 + *(float *)(v15 + 4);
      v17 = *(float *)(v14 + 8);
      *(uint32_t *)(v14 + 52) += *(uint32_t *)(v15 + 52);
      *(float *)(v14 + 8) = v17 + *(float *)(v15 + 8);
      v18 = *(float *)(v14 + 12);
      *(uint32_t *)(v14 + 56) += *(uint32_t *)(v15 + 56);
      *(float *)(v14 + 12) = v18 + *(float *)(v15 + 12);
      v19 = *(float *)(v14 + 16);
      *(uint32_t *)(v14 + 60) += *(uint32_t *)(v15 + 60);
      *(float *)(v14 + 16) = v19 + *(float *)(v15 + 16);
      v20 = *(float *)(v14 + 20);
      *(uint32_t *)(v14 + 64) += *(uint32_t *)(v15 + 64);
      *(float *)(v14 + 20) = v20 + *(float *)(v15 + 20);
      *(uint32_t *)(v14 + 68) += *(uint32_t *)(v15 + 68);
      *(float *)(v14 + 24) = *(float *)(v14 + 24) + *(float *)(v15 + 24);
      v21 = *(float *)(v14 + 28);
      *(uint32_t *)(v14 + 72) += *(uint32_t *)(v15 + 72);
      *(float *)(v14 + 28) = v21 + *(float *)(v15 + 28);
      v22 = *(float *)(v14 + 32);
      *(uint32_t *)(v14 + 76) += *(uint32_t *)(v15 + 76);
      *(float *)(v14 + 32) = v22 + *(float *)(v15 + 32);
      v23 = *(float *)(v14 + 36);
      *(uint32_t *)(v14 + 80) += *(uint32_t *)(v15 + 80);
      *(float *)(v14 + 36) = v23 + *(float *)(v15 + 36);
      v24 = *(float *)(v14 + 40);
      *(uint32_t *)(v14 + 84) += *(uint32_t *)(v15 + 84);
      *(float *)(v14 + 40) = v24 + *(float *)(v15 + 40);
      v25 = *(float *)(v14 + 44);
      *(uint32_t *)(v14 + 88) += *(uint32_t *)(v15 + 88);
      *(float *)(v14 + 44) = v25 + *(float *)(v15 + 44);
      *(uint32_t *)(v14 + 92) += *(uint32_t *)(v15 + 92);
      v5 = (uint32_t *)a1;
      ++v70;
    }
    while ( *(uint32_t *)(a1 + 100) > v70 );
    v5 = (uint32_t *)a1;
  }
  result = v5[29];
  if ( result != 0 )
  {
    v72 = *(hkString::Self **)(result + 120);
    v27 = *(uint32_t *)(v73 + 140);
    v28 = v27 - 1;
    if ( v27 - 1 >= 0 )
    {
      v29 = *(uint32_t *)(v73 + 140) - 1;
      v30 = 136 * v28;
      do
      {
        v76 = *(uint32_t *)(v73 + 136) + v30;
        if ( hkString::strCmp(v72, *(const char **)(v76 + 120), v66) == 0 )
        {
          v31 = v76;
          goto LABEL_20;
        }
        --v29;
        v30 -= 136;
      }
      while ( v29 != -1 );
      v27 = *(uint32_t *)(v73 + 140);
    }
    v39 = v27 + 1;
    v40 = *(uint32_t *)(v73 + 144) & 0x3FFFFFFF;
    if ( v27 + 1 <= v40 )
    {
      v42 = v27;
    }
    else
    {
      v41 = 2 * v40;
      if ( v39 < v41 )
        v39 = v41;
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v79,
        (hkMemoryAllocator::Self *)hkContainerDebugAllocator::s_alloc,
        (int *)(v73 + 136),
        v39,
        136);
      v42 = *(uint32_t *)(v73 + 140);
    }
    v43 = (uint32_t *)(*(uint32_t *)(v73 + 136) + 136 * v42);
    v43[24] = 0;
    v43[25] = 0;
    v43[26] = 0x80000000;
    ++*(uint32_t *)(v73 + 140);
    v31 = *(uint32_t *)(v73 + 136) + 136 * v27;
    hkMonitorStreamAnalyzer::Node::Construct(v31, nullptr, (int)(uintptr_t)v72, 0);
LABEL_20:
    result = *(uint32_t *)(a1 + 116);
    if ( (result + 64 <= v31 + 48 || v31 + 64 <= result + 48)
      && (v31 >= result + 64 || v31 + 16 <= result + 48)
      && (result + 16 <= v31 + 48 || result >= v31 + 64)
      && (v31 >= result + 16 || result >= v31 + 16) )
    {
      v32 = _mm_add_ps(_mm_loadh_ps((const double *)(v31 + 8)), _mm_loadh_ps((const double *)(result + 8)));
      _mm_storel_ps((double *)v31, v32);
      _mm_storeh_ps((double *)(v31 + 8), v32);
      *(__m128i *)(v31 + 48) = _mm_add_epi32(*(__m128i *)(v31 + 48), *(__m128i *)(result + 48));
      v33 = _mm_add_ps(_mm_loadh_ps((const double *)(v31 + 24)), _mm_loadh_ps((const double *)(result + 24)));
      _mm_storel_ps((double *)(v31 + 16), v33);
      _mm_storeh_ps((double *)(v31 + 24), v33);
      *(__m128i *)(v31 + 64) = _mm_add_epi32(*(__m128i *)(v31 + 64), *(__m128i *)(result + 64));
      v34 = _mm_add_ps(_mm_loadh_ps((const double *)(v31 + 40)), _mm_loadh_ps((const double *)(result + 40)));
      _mm_storel_ps((double *)(v31 + 32), v34);
      _mm_storeh_ps((double *)(v31 + 40), v34);
      *(__m128i *)(v31 + 80) = _mm_add_epi32(*(__m128i *)(v31 + 80), *(__m128i *)(result + 80));
    }
    else
    {
      *(float *)v31 = *(float *)v31 + *(float *)result;
      v55 = *(float *)(v31 + 4);
      *(uint32_t *)(v31 + 48) += *(uint32_t *)(result + 48);
      *(float *)(v31 + 4) = v55 + *(float *)(result + 4);
      v56 = *(float *)(v31 + 8);
      *(uint32_t *)(v31 + 52) += *(uint32_t *)(result + 52);
      *(float *)(v31 + 8) = v56 + *(float *)(result + 8);
      v57 = *(float *)(v31 + 12);
      *(uint32_t *)(v31 + 56) += *(uint32_t *)(result + 56);
      *(float *)(v31 + 12) = v57 + *(float *)(result + 12);
      v58 = *(float *)(v31 + 16);
      *(uint32_t *)(v31 + 60) += *(uint32_t *)(result + 60);
      *(float *)(v31 + 16) = v58 + *(float *)(result + 16);
      v59 = *(float *)(v31 + 20);
      *(uint32_t *)(v31 + 64) += *(uint32_t *)(result + 64);
      *(float *)(v31 + 20) = v59 + *(float *)(result + 20);
      *(uint32_t *)(v31 + 68) += *(uint32_t *)(result + 68);
      *(float *)(v31 + 24) = *(float *)(v31 + 24) + *(float *)(result + 24);
      v60 = *(float *)(v31 + 28);
      *(uint32_t *)(v31 + 72) += *(uint32_t *)(result + 72);
      *(float *)(v31 + 28) = v60 + *(float *)(result + 28);
      v61 = *(float *)(v31 + 32);
      *(uint32_t *)(v31 + 76) += *(uint32_t *)(result + 76);
      *(float *)(v31 + 32) = v61 + *(float *)(result + 32);
      v62 = *(float *)(v31 + 36);
      *(uint32_t *)(v31 + 80) += *(uint32_t *)(result + 80);
      *(float *)(v31 + 36) = v62 + *(float *)(result + 36);
      v63 = *(float *)(v31 + 40);
      *(uint32_t *)(v31 + 84) += *(uint32_t *)(result + 84);
      *(float *)(v31 + 40) = v63 + *(float *)(result + 40);
      v64 = *(float *)(v31 + 44);
      *(uint32_t *)(v31 + 88) += *(uint32_t *)(result + 88);
      *(float *)(v31 + 44) = v64 + *(float *)(result + 44);
      result = *(uint32_t *)(result + 92);
      *(uint32_t *)(v31 + 92) += result;
    }
  }
  return result;
}

// Binary VA: 0xca15a0 (source: lib_batch_0.json)
static int g4_map_fs2_Path_insert(int a1, uint32_t *a2, glf::fs2::Path::Self *a3)
{
  uint32_t *v3;
  uint32_t *v4;
  char v5;
  uint32_t *v6;
  int v8;
  uint32_t *v9;
  int v10;
  int v11;
  uint32_t *v12;
  int v13; // [esp+1Ch] [ebp-20h]

  v3 = (uint32_t *)a2[2];
  v12 = a2 + 1;
  if ( v3 == nullptr )
  {
    v3 = a2 + 1;
    goto LABEL_8;
  }
  while ( (int)glf::fs2::Path::Compare(a3, (const glf::fs2::Path::Self *)(v3 + 4)) < 0 )
  {
    v4 = (uint32_t *)v3[2];
    v5 = 1;
    if ( v4 == nullptr )
      goto LABEL_7;
LABEL_4:
    v3 = v4;
  }
  v4 = (uint32_t *)v3[3];
  v5 = 0;
  if ( v4 != nullptr )
    goto LABEL_4;
LABEL_7:
  if ( v5 != 0 )
  {
LABEL_8:
    if ( (uint32_t *)a2[3] != v3 )
    {
      v6 = (uint32_t *)sub_19048F0(v3);
      goto LABEL_10;
    }
    goto LABEL_13;
  }
  v6 = v3;
LABEL_10:
  v9 = v6;
  if ( (int)glf::fs2::Path::Compare((glf::fs2::Path::Self *)(v6 + 4), a3) < 0 )
  {
LABEL_13:
    LOBYTE(v13) = 1;
    if ( v12 != v3 )
      v13 = glf::fs2::Path::Compare(a3, (const glf::fs2::Path::Self *)(v3 + 4)) >> 31;
    v8 = (int)(uintptr_t)(operator new(0x1Cu));
    if ( v8 != -16 )
    {
      v10 = v8;
      glf::fs2::Path::Construct((glf::fs2::Path::Self *)(v8 + 16), a3);
      v8 = v10;
      *(uint32_t *)(v10 + 24) = *((uint32_t *)a3 + 2);
    }
    v11 = v8;
    sub_1904970(v13, v8, v3, v12);
    ++a2[5];
    *(uint32_t *)a1 = v11;
    *(uint8_t *)(a1 + 4) = 1;
    return a1;
  }
  else
  {
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v9);
    *(uint8_t *)(a1 + 4) = 0;
    return a1;
  }
}

// Binary VA: 0xcafc30 (source: lib_batch_0.json)
static void g4_std_vector_char_fill_insert(size_t *a1, char *src, size_t n, char *a4)
{
  int v4;
  char *v5;
  char *v6;
  uint8_t *v7;
  char *v8;
  char *v9;
  size_t v10;
  char *v11;
  char *v12;
  size_t v13;
  size_t v14;
  bool v15; // cf
  size_t v16;
  char *v17;
  char *v18;
  size_t i;
  char *v20;
  char *v21;
  char *v22;
  char *v23;
  uint8_t *v24;
  size_t v25;
  char *v26;
  size_t v27;
  size_t v28;
  uint8_t v29;
  char *v30;
  size_t v31; // [esp+1Ch] [ebp-20h]

  v4 = (int)(uintptr_t)a1;
  v5 = a4;
  if ( n == 0 )
    return;
  v6 = (char *)a1[1];
  if ( n <= a1[2] - (unsigned int)(uintptr_t)v6 )
  {
    v25 = v6 - src;
    v29 = *a4;
    v7 = (uint8_t *)a1[1];
    if ( n >= v6 - src )
    {
      if ( n != v25 )
      {
        v10 = n - v25;
        do
        {
          if ( v7 != nullptr )
            *v7 = v29;
          ++v7;
          --v10;
        }
        while ( v10 != 0 );
        v7 = (uint8_t *)a1[1];
      }
      v11 = (char *)&v7[n - v25];
      a1[1] = (size_t)v11;
      if ( v6 != src )
      {
        v12 = src;
        do
        {
          if ( v11 != nullptr )
            *v11 = *v12;
          ++v12;
          ++v11;
        }
        while ( v12 != v6 );
        v11 = (char *)a1[1];
      }
      a1[1] = (size_t)&v11[v25];
      memset(src, v29, v25);
    }
    else
    {
      v8 = (char *)a1[1];
      if ( v6 != &v6[-n] )
      {
        v9 = &v6[-n];
        do
        {
          if ( v8 != nullptr )
            *v8 = *v9;
          ++v9;
          ++v8;
        }
        while ( v9 != v6 );
        v4 = (int)(uintptr_t)a1;
        v8 = (char *)a1[1];
      }
      *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(&v8[n]);
      if ( &v6[-n] != src )
        memmove(&src[n], src, &v6[-n] - src);
      memset(src, v29, n);
    }
    return;
  }
  v13 = (size_t)&v6[-*a1];
  if ( n > ~v13 )
    sub_1900180("vector::_M_fill_insert");
  v14 = n;
  v31 = 0xFFFFFFFF;
  if ( v13 >= n )
    v14 = v13;
  v15 = __CFADD__(v14, v13);
  v16 = v14 + v13;
  v26 = &src[-*a1];
  if ( v15 )
    goto LABEL_31;
  if ( v16 != 0 )
  {
    v31 = v16;
LABEL_31:
    v17 = (char *)glf::Alloc(v31);
    v30 = v17;
    v5 = a4;
    goto LABEL_32;
  }
  v30 = nullptr;
  v31 = 0;
  v17 = nullptr;
LABEL_32:
  v18 = &v17[(uint32_t)(uintptr_t)v26];
  for ( i = n; i != 0; --i )
  {
    if ( v18 != nullptr )
      *v18 = *v5;
    ++v18;
  }
  v27 = *a1;
  v20 = v30;
  if ( (char *)*a1 != src )
  {
    v21 = (char *)*a1;
    do
    {
      if ( v20 != nullptr )
        *v20 = *v21;
      ++v21;
      ++v20;
    }
    while ( v21 != src );
    v20 = &src[(uint32_t)(uintptr_t)v30 - v27];
  }
  v28 = (size_t)&v20[n];
  v22 = (char *)a1[1];
  if ( v22 != src )
  {
    v23 = src;
    v24 = (uint8_t *)v28;
    do
    {
      if ( v24 != nullptr )
        *v24 = *v23;
      ++v23;
      ++v24;
    }
    while ( v23 != v22 );
    v28 += v23 - src;
  }
  if ( *a1 != 0 )
    glf::Free((glf::Self *)*a1);
  *a1 = (size_t)v30;
  a1[1] = v28;
  a1[2] = (size_t)&v30[v31];
}

// Binary VA: 0xc83430 (source: lib_batch_0.json)
int sub_C83430(int a1, uint32_t *a2, int a3)
{
  size_t v3;
  uint32_t *v4;
  size_t v5;
  size_t i;
  size_t v7;
  uint32_t *v8;
  size_t v9;
  size_t n;
  int v11;
  uint32_t *v12;
  size_t v13;
  size_t v14;
  uint32_t *v15;
  int v16;
  int v17;
  size_t v19;
  unsigned int v20;
  size_t v21;
  size_t v22;
  size_t v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  unsigned int v27;
  size_t v28;
  size_t v29;
  unsigned int v30;
  int v31;
  size_t v32;
  char v33;
  void *s1; // [esp+1Ch] [ebp-30h]
  size_t v37;
  size_t v38;
  uint32_t *v39; // [esp+2Ch] [ebp-20h]

  v3 = a2[2];
  v4 = a2 + 1;
  v39 = v4;
  if ( v3 == 0 )
  {
    v13 = (size_t)v4;
    goto LABEL_17;
  }
  s1 = *(void **)a3;
  v5 = *(uint32_t *)(*(uint32_t *)a3 - 12);
  for ( i = v3; ; i = v7 )
  {
    v8 = *(uint32_t **)(i + 16);
    v9 = *(v8 - 3);
    n = v9;
    v32 = i;
    if ( v5 <= v9 )
      n = v5;
    v37 = n;
    v11 = memcmp(s1, *(const void **)(i + 16), n);
    if ( v11 == 0 )
      v11 = v5 - v9;
    if ( v11 >= 0 )
      break;
    v7 = *(uint32_t *)(v32 + 8);
    v33 = 1;
    if ( v7 == 0 )
      goto LABEL_11;
LABEL_4:
    ;
  }
  v7 = *(uint32_t *)(v32 + 12);
  v33 = 0;
  if ( v7 != 0 )
    goto LABEL_4;
LABEL_11:
  v12 = v8;
  v13 = v32;
  v14 = v37;
  v15 = v12;
  v38 = v32;
  if ( v33 == 0 )
    goto LABEL_12;
LABEL_17:
  if ( a2[3] == v13 )
  {
    LOBYTE(v20) = 1;
    if ( v39 != (uint32_t *)v13 )
    {
      v21 = *(uint32_t *)(*(uint32_t *)(v13 + 16) - 12);
      v22 = *(uint32_t *)(*(uint32_t *)a3 - 12);
      v23 = v22;
      if ( v21 <= v22 )
        v23 = *(uint32_t *)(*(uint32_t *)(v13 + 16) - 12);
      v24 = v22 - v21;
      v25 = memcmp(*(const void **)a3, *(const void **)(v13 + 16), v23);
      if ( v25 == 0 )
        v25 = v24;
      v20 = v25 >> 31;
    }
    v26 = (int)(uintptr_t)(operator new(0x44u));
    if ( v26 != -16 )
    {
      sub_193A2E0((size_t **)(uintptr_t)(v26 + 16), (size_t **)(uintptr_t)(a3));
      sub_193A2E0((size_t **)(uintptr_t)(v26 + 20), (size_t **)(uintptr_t)(a3 + 4));
      sub_193A2E0((size_t **)(uintptr_t)(v26 + 24), (size_t **)(uintptr_t)(a3 + 8));
      sub_193A2E0((size_t **)(uintptr_t)(v26 + 28), (size_t **)(uintptr_t)(a3 + 12));
      *(uint32_t *)(v26 + 32) = *(uint32_t *)(a3 + 16);
      *(uint32_t *)(v26 + 36) = *(uint32_t *)(a3 + 20);
      *(uint32_t *)(v26 + 40) = *(uint32_t *)(a3 + 24);
      *(uint32_t *)(v26 + 44) = *(uint32_t *)(a3 + 28);
      *(uint32_t *)(v26 + 48) = *(uint32_t *)(a3 + 32);
      *(uint32_t *)(v26 + 52) = *(uint32_t *)(a3 + 36);
      *(uint32_t *)(v26 + 56) = *(uint32_t *)(a3 + 40);
      *(uint32_t *)(v26 + 60) = *(uint32_t *)(a3 + 44);
      *(uint16_t *)(v26 + 64) = *(uint16_t *)(a3 + 48);
    }
    sub_1904970(v20, v26, v13, v39);
  }
  else
  {
    v19 = sub_19048F0(v13);
    v15 = *(uint32_t **)(v19 + 16);
    v38 = v13;
    v13 = v19;
    v9 = *(v15 - 3);
    s1 = *(void **)a3;
    v5 = *(uint32_t *)(*(uint32_t *)a3 - 12);
    v14 = v5;
    if ( v9 <= v5 )
      v14 = *(v15 - 3);
LABEL_12:
    v16 = memcmp(v15, s1, v14);
    v17 = v9 - v5;
    if ( v16 != 0 )
      v17 = v16;
    if ( v17 >= 0 )
    {
      *(uint32_t *)a1 = v13;
      *(uint8_t *)(a1 + 4) = 0;
      return a1;
    }
    LOBYTE(v27) = 1;
    if ( v39 != (uint32_t *)v38 )
    {
      v28 = *(uint32_t *)(*(uint32_t *)(v38 + 16) - 12);
      v29 = v28;
      if ( v5 <= v28 )
        v29 = v5;
      v30 = v5 - v28;
      v31 = memcmp(s1, *(const void **)(v38 + 16), v29);
      if ( v31 != 0 )
        v30 = v31;
      v27 = v30 >> 31;
    }
    v26 = (int)(uintptr_t)(operator new(0x44u));
    if ( v26 != -16 )
    {
      sub_193A2E0((size_t **)(uintptr_t)(v26 + 16), (size_t **)(uintptr_t)(a3));
      sub_193A2E0((size_t **)(uintptr_t)(v26 + 20), (size_t **)(uintptr_t)(a3 + 4));
      sub_193A2E0((size_t **)(uintptr_t)(v26 + 24), (size_t **)(uintptr_t)(a3 + 8));
      sub_193A2E0((size_t **)(uintptr_t)(v26 + 28), (size_t **)(uintptr_t)(a3 + 12));
      *(uint32_t *)(v26 + 32) = *(uint32_t *)(a3 + 16);
      *(uint32_t *)(v26 + 36) = *(uint32_t *)(a3 + 20);
      *(uint32_t *)(v26 + 40) = *(uint32_t *)(a3 + 24);
      *(uint32_t *)(v26 + 44) = *(uint32_t *)(a3 + 28);
      *(uint32_t *)(v26 + 48) = *(uint32_t *)(a3 + 32);
      *(uint32_t *)(v26 + 52) = *(uint32_t *)(a3 + 36);
      *(uint32_t *)(v26 + 56) = *(uint32_t *)(a3 + 40);
      *(uint32_t *)(v26 + 60) = *(uint32_t *)(a3 + 44);
      *(uint16_t *)(v26 + 64) = *(uint16_t *)(a3 + 48);
    }
    sub_1904970(v27, v26, v38, v39);
  }
  ++a2[5];
  *(uint32_t *)a1 = v26;
  *(uint8_t *)(a1 + 4) = 1;
  return a1;
}

// Binary VA: 0x1881130 (source: lib_batch_3.json)
int sub_1881130(int a1, uint32_t *a2, hkVersionPatchManager::Self *a3, int a4)
{
  int v4;
  hkClass::Self *v5;
  uint64_t v6; // rax
  int result;
  hkString::Self *v8;
  int v10;
  hkString::Self *v11;
  int v12;
  int v13;
  int v14; // [esp-Ch] [ebp-A8h]
  int v15;
  hkString::Self *v16;
  int v17;
  int v18;
  char v19; // [esp+Ch] [ebp-90h] BYREF

  v4 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0x80000000;
  hkDataWorldDict::findAllClasses(a1, &v13);
  if ( v14 <= 0 )
  {
LABEL_6:
    result = 1;
  }
  else
  {
    while ( 1 )
    {
      v11 = (hkString::Self *)(*(int ( **)(uint32_t))(**(uint32_t **)(v13 + 4 * v4) + 12))(*(uint32_t *)(v13 + 4 * v4));
      v10 = (*(int ( **)(uint32_t))(**(uint32_t **)(v13 + 4 * v4) + 16))(*(uint32_t *)(v13 + 4 * v4));
      v5 = (hkClass::Self *)G4_VCALL<int>(a4, 24, v11);
      if ( v5 == nullptr || v10 != hkClass::getDescribedVersion(v5) )
      {
        LODWORD(v6) = ((void)v10, hkVersionPatchManager::getUid((hkVersionPatchManager::UidFromClassVersion::Self **)a3, (hkString::Self *)v11));
        if ( (unsigned int)hkMapBase_unsigned_long_long_unsig_cbedf5::getWithDefault(
                             (hkVersionPatchManager::Self *)((char *)a3 + 24),
                             v6,
                             0xFFFFFFFFFFFFFFFFLL) == -1 )
          break;
      }
      if ( ++v4 >= v14 )
        goto LABEL_6;
    }
    v16 = (hkString::Self *)&v19;
    v18 = -2147483520;
    v17 = 1;
    v19 = 0;
    if ( v10 != 0 )
      hkStringBuf::printf(
        (hkStringBuf::Self *)&v16,
        "Unable to version data of class %s, version 0x%p\n%s",
        v11,
        v10,
        "Patching to latest version failed. Have you registered the necessary patches? Patches may be missing because you"
        "r assets are older than HK_SERIALIZE_MIN_COMPATIBLE_VERSION (if defined). Make sure that the patches are registe"
        "red properly (see hkRegisterPatches.cxx, included by hkProductFeatures.cxx). See the hkError output for more details.");
    else
      hkStringBuf::printf(
        (hkStringBuf::Self *)&v16,
        "Unable to load class %s, version 0x0\n%s",
        v11,
        "No information about this class exists in the serialization system. This could happen if:\n"
        "* You have provided a custom classes file which does not include this class\n"
        "* You have not specified keycodes before including hkProductFeatures.cxx\n"
        "* Custom classes have not been registered.");
    v8 = v16;
    if ( *a2 == 0 )
    {
      *a2 = 4;
      hkStringPtr::opAssign((hkStringPtr::Self *)(a2 + 1), v8);
    }
    v17 = 0;
    if ( v18 >= 0 )
      (*(void ( **)(uint32_t *, hkString::Self *, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
        (uint32_t *)(uintptr_t)(hkContainerTempAllocator::s_alloc),
        v16,
        v18 & 0x3FFFFFFF);
    result = 0;
  }
  v14 = 0;
  if ( v15 >= 0 )
  {
    v12 = result;
    (*(void ( **)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
      (uint32_t *)(uintptr_t)(hkContainerTempAllocator::s_alloc),
      v13,
      4 * v15);
    return v12;
  }
  return result;
}

// Binary VA: 0x18876f0 (source: lib_batch_3.json)
int sub_18876F0(int a1,
 uint32_t *a2,
 int a3,
 int a4,
 int a5,
 int a6,
 int a7,
 int a8,
 int a9,
 int a10,
 int a11,
 int a12,
 int a13,
 int a14,
 int a15,
 int a16,
 int a17,
 int a18,
 int a19,
 int a20,
 int a21,
 int a22,
 int a23,
 uint32_t *a24,
 uint32_t *a25,
 int a26,
 int a27,
 int a28,
 int a29,
 int a30,
 int a31,
 int a32,
 int a33,
 int a34,
 int a35,
 int a36)
{
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v36;
  hkString::Self *v37;
  int result;
  hkString::Self *v39;
  hkString::Self *v40;
  int v41;
  int v42;
  int v43;
  int v44;
  hkString::Self *v45;
  int v46;
  uint64_t v47; // rax
  unsigned int v48;
  int64_t v49; // kr50_8
  unsigned int v50;
  char v51;
  int64_t v52; // rdi
  uint8_t v53;
  uint8_t v54;
  char v55;
  uint64_t v56; // rax
  unsigned int v57;
  int64_t v58; // kr58_8
  unsigned int v59;
  char v60;
  int64_t v61; // rdi
  uint8_t v62;
  uint8_t v63;
  char v64;
  int64_t v65; // rax
  unsigned int v66;
  int64_t v67; // kr60_8
  unsigned int v68;
  char v69;
  int64_t v70; // rdi
  uint8_t v71;
  uint8_t v72;
  char v73;
  unsigned int v74;
  int v75;
  char v76;
  int64_t v77; // rdi
  uint8_t v78;
  uint8_t v79;
  char v80;
  int v81;
  int v82;
  uint64_t v83; // kr68_8
  int64_t v84; // rdi
  uint8_t v85;
  int64_t v86; // rdi
  uint8_t v87;
  uint8_t v88;
  char v89;
  int i;
  hkTypeManager::Type::Self *Terminal;
  int TypeName;
  uint64_t v93; // kr70_8
  int64_t v94; // rdi
  uint8_t v95;
  uint8_t v96;
  char v97;
  int v98;
  int v99;
  hkString::Self *v100;
  int v101;
  int v102;
  uint64_t v103; // kr78_8
  int64_t v104; // rdi
  uint8_t v105;
  uint8_t v106;
  char v107;
  signed int v108;
  uint64_t v109; // kr80_8
  int64_t v110; // rdi
  uint8_t v111;
  signed int v112;
  uint64_t v113; // kr88_8
  int64_t v114; // rdi
  uint8_t v115;
  int64_t v116; // rax
  int64_t v117; // rax
  uint64_t v118; // rax
  int64_t v119; // kr90_8
  int64_t v120; // rdi
  char v121;
  uint8_t v122;
  int64_t v123; // rax
  int64_t v124; // rax
  int v125; // [esp-9Ch] [ebp-A8h]
  int v126;
  int v127;
  int v128;
  int v129; // [esp-8Ch] [ebp-98h]
  int v130;
  int v131;
  int v132;
  int v133; // [esp-7Ch] [ebp-88h]
  int v134;
  int v135;
  int v136;
  int v137; // [esp-6Ch] [ebp-78h]
  int v138;
  int v139;
  int v140;
  int v141; // [esp-5Ch] [ebp-68h]
  int v142;
  int v143;
  int v144;
  int v145; // [esp-4Ch] [ebp-58h]
  int v146;
  int v147;
  int v148;
  int v149; // [esp-3Ch] [ebp-48h]
  int v150;
  int v151; // [esp-2Ch] [ebp-38h]
  int v152;
  int v153;
  int v154;
  int v155; // [esp-1Ch] [ebp-28h]
  int v156;
  int v157;
  int v158;
  int v159; // [esp-Ch] [ebp-18h]
  int v160;
  int v161;
  int *savedregs; // [esp+Ch] [ebp+0h]
  unsigned int v163; // [esp+2Ch] [ebp+20h]
  int v164;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v165;
  int v166;
  hkString::Self *v167;
  int v168;
  int v169; // [esp+5Ch] [ebp+50h]
  hkString::Self *v170;
  int v171;
  int v172;
  int v173;
  hkString::Self **v174;
  unsigned int LegacyType;
  int ( *v176)(int, int);
  hkString::Self *v177;

  a24 = a2;
  a25 = (uint32_t *)(uintptr_t)a1;
  if ( *a2 == 0 )
    return 0;
  v36 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(a1 + 32);
  v37 = (hkString::Self *)G4_VCALL<int>(*a2, 12, v125, v126, v127, v128, v129, v130, v131, v132, v133, v134, v135, v136, v137, v138, v139, v140, v141, v142, v143, v144, v145, v146, v147, v148, v149, a2, a1, v150, v151, v152, v153, v154, v155, v156, v157, v158, v159, v160, v161);
  result = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(v36, v37, -1);
  if ( result < 0 )
  {
    a34 = G4_VCALL<int>(*a24, 20);
    v173 = sub_18876F0(a1, (uint32_t *)&a34);
    v39 = (hkString::Self *)G4_VCALL<int>(*a24, 12);
    result = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(v36, v39, -1);
    if ( result == -1 )
    {
      v163 = a25[9];
      v40 = (hkString::Self *)G4_VCALL<int>(*a24, 12);
      hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v36, v40, v163);
      v41 = G4_VCALL<int>(*a24, 28);
      v169 = v41;
      v42 = 0;
      a34 = 0;
      a35 = 0;
      a36 = 0x80000000;
      if ( v41 == 0
        || (a30 = 16 * v41,
            v42 = (*(int ( **)(uint32_t *, int *))(hkContainerTempAllocator::s_alloc[0] + 16))(
                    (uint32_t *)(uintptr_t)(hkContainerTempAllocator::s_alloc),
                    &a30),
            v43 = a30 / 16,
            a30 / 16 == 0) )
      {
        v43 = 0x80000000;
      }
      a36 = v43;
      v44 = 0;
      a34 = v42;
      a35 = v169;
      if ( v169 > 0 )
      {
        do
        {
          *(__m128i *)(v42 + v44) = __m128i{};
          v44 += 16;
        }
        while ( v44 != 16 * v169 );
      }
      hkDataClass::getAllDeclaredMemberInfo(a24, &a34);
      hkOArchive::write8u((hkOArchive::Self *)a25, 4u);
      v45 = (hkString::Self *)G4_VCALL<int>(*a24, 12);
      v170 = v45;
      if ( v45 != nullptr )
      {
        v46 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
                (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(a25 + 4),
                v45,
                -1);
        if ( v46 == -1 )
        {
          LODWORD(v118) = hkString::strLen(v170);
          v119 = 2LL * (int)v118;
          HIDWORD(v118) = HIDWORD(v119);
          HIDWORD(v120) = v119;
          v166 = v118;
          LODWORD(v120) = v118 >> 31;
          if ( v119 < 0 )
          {
            v124 = -2LL * v118;
            LODWORD(v120) = HIDWORD(v124);
            HIDWORD(v120) = v124 | 1;
          }
          while ( 1 )
          {
            v121 = BYTE4(v120);
            HIDWORD(v120) = __PAIR64__(v120, HIDWORD(v120)) >> 7;
            LODWORD(v120) = (unsigned int)v120 >> 7;
            v122 = v121 & 0x7F;
            if ( v120 == 0 )
              break;
            hkOArchive::write8u((hkOArchive::Self *)a25, v122 | 0x80);
          }
          hkOArchive::write8u((hkOArchive::Self *)a25, v122);
          hkOArchive::writeRaw((hkOArchive::Self *)a25, v170, v166);
          hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
            (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(a25 + 4),
            v170,
            a25[5] + 1);
        }
        else
        {
          LODWORD(v47) = -v46;
          v49 = 2LL * (int)v47;
          HIDWORD(v47) = HIDWORD(v49);
          v48 = v49;
          v50 = v47 >> 31;
          if ( v49 < 0 )
          {
            v123 = -2LL * v47;
            v50 = HIDWORD(v123);
            v48 = v123 | 1;
          }
          v51 = v48;
          HIDWORD(v52) = __PAIR64__(v50, v48) >> 7;
          LODWORD(v52) = v50 >> 7;
          v53 = v51 & 0x7F;
          if ( v52 != 0 )
          {
            v54 = v53;
            do
            {
              hkOArchive::write8u((hkOArchive::Self *)a25, v54 | 0x80);
              v55 = BYTE4(v52);
              HIDWORD(v52) = __PAIR64__(v52, HIDWORD(v52)) >> 7;
              LODWORD(v52) = (unsigned int)v52 >> 7;
              v54 = v55 & 0x7F;
            }
            while ( v52 != 0 );
            v53 = v54;
          }
          hkOArchive::write8u((hkOArchive::Self *)a25, v53);
        }
      }
      else
      {
        hkOArchive::write8u((hkOArchive::Self *)a25, 3u);
      }
      LODWORD(v56) = G4_VCALL<int>(*a24, 16);
      v58 = 2LL * (int)v56;
      HIDWORD(v56) = HIDWORD(v58);
      v57 = v58;
      v59 = v56 >> 31;
      if ( v58 < 0 )
      {
        v117 = -2LL * v56;
        v59 = HIDWORD(v117);
        v57 = v117 | 1;
      }
      v60 = v57;
      HIDWORD(v61) = __PAIR64__(v59, v57) >> 7;
      LODWORD(v61) = v59 >> 7;
      v62 = v60 & 0x7F;
      if ( v61 != 0 )
      {
        v63 = v62;
        do
        {
          hkOArchive::write8u((hkOArchive::Self *)a25, v63 | 0x80);
          v64 = BYTE4(v61);
          HIDWORD(v61) = __PAIR64__(v61, HIDWORD(v61)) >> 7;
          LODWORD(v61) = (unsigned int)v61 >> 7;
          v63 = v64 & 0x7F;
        }
        while ( v61 != 0 );
        v62 = v63;
      }
      hkOArchive::write8u((hkOArchive::Self *)a25, v62);
      G4_VCALL<void>(*a24, 16);
      LODWORD(v65) = v173;
      v67 = 2LL * v173;
      HIDWORD(v65) = HIDWORD(v67);
      v66 = v67;
      v68 = __PAIR64__(HIDWORD(v67), v173) >> 31;
      if ( v67 < 0 )
      {
        v116 = -2 * v65;
        v68 = HIDWORD(v116);
        v66 = v116 | 1;
      }
      v69 = v66;
      HIDWORD(v70) = __PAIR64__(v68, v66) >> 7;
      LODWORD(v70) = v68 >> 7;
      v71 = v69 & 0x7F;
      if ( v70 != 0 )
      {
        v72 = v71;
        do
        {
          hkOArchive::write8u((hkOArchive::Self *)a25, v72 | 0x80);
          v73 = BYTE4(v70);
          HIDWORD(v70) = __PAIR64__(v70, HIDWORD(v70)) >> 7;
          LODWORD(v70) = (unsigned int)v70 >> 7;
          v72 = v73 & 0x7F;
        }
        while ( v70 != 0 );
        v71 = v72;
      }
      hkOArchive::write8u((hkOArchive::Self *)a25, v71);
      if ( v169 >> 31 < 0 )
      {
        v74 = (uint64_t)(-2LL * v169) >> 32;
        v75 = (-2 * v169) | 1;
      }
      else
      {
        v74 = (uint64_t)v169 >> 31;
        v75 = 2 * v169;
      }
      v76 = v75;
      HIDWORD(v77) = __PAIR64__(v74, v75) >> 7;
      LODWORD(v77) = v74 >> 7;
      v78 = v76 & 0x7F;
      if ( v77 != 0 )
      {
        v79 = v78;
        do
        {
          hkOArchive::write8u((hkOArchive::Self *)a25, v79 | 0x80);
          v80 = BYTE4(v77);
          HIDWORD(v77) = __PAIR64__(v77, HIDWORD(v77)) >> 7;
          LODWORD(v77) = (unsigned int)v77 >> 7;
          v79 = v80 & 0x7F;
        }
        while ( v77 != 0 );
        v78 = v79;
      }
      hkOArchive::write8u((hkOArchive::Self *)a25, v78);
      v171 = 0;
      v165 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(a25 + 4);
      if ( v169 > 0 )
      {
        do
        {
          v174 = (hkString::Self **)(a34 + 16 * v171);
          v167 = *v174;
          if ( *v174 != nullptr )
          {
            v81 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(v165, *v174, -1);
            if ( v81 == -1 )
            {
              v108 = hkString::strLen(v167);
              v164 = v108;
              if ( v108 >> 31 < 0 )
                v109 = (-2LL * v108) | 1;
              else
                v109 = 2LL * v108;
              while ( 1 )
              {
                LODWORD(v110) = HIDWORD(v109) >> 7;
                v111 = v109 & 0x7F;
                v109 >>= 7;
                HIDWORD(v110) = v109;
                if ( v110 == 0 )
                  break;
                hkOArchive::write8u((hkOArchive::Self *)a25, v111 | 0x80);
              }
              hkOArchive::write8u((hkOArchive::Self *)a25, v111);
              hkOArchive::writeRaw((hkOArchive::Self *)a25, v167, v164);
              hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v165, v167, a25[5] + 1);
            }
            else
            {
              v82 = -v81;
              if ( v82 >> 31 < 0 )
                v83 = (-2LL * v82) | 1;
              else
                v83 = 2LL * v82;
              while ( 1 )
              {
                LODWORD(v84) = HIDWORD(v83) >> 7;
                v85 = v83 & 0x7F;
                v83 >>= 7;
                HIDWORD(v84) = v83;
                if ( v84 == 0 )
                  break;
                hkOArchive::write8u((hkOArchive::Self *)a25, v85 | 0x80);
              }
              hkOArchive::write8u((hkOArchive::Self *)a25, v85);
            }
          }
          else
          {
            hkOArchive::write8u((hkOArchive::Self *)a25, 3u);
          }
          LegacyType = hkTypeManager::getLegacyType((hkTypeManager::Type::Self ***)(v174[2]), (hkTypeManager::Type::Self *)&a26, (const char **)&a30);
          HIDWORD(v86) = (2 * (uint64_t)LegacyType) >> 7;
          LODWORD(v86) = (unsigned int)((uint64_t)LegacyType >> 31) >> 7;
          v87 = (2 * LegacyType) & 0x7F;
          if ( v86 != 0 )
          {
            v88 = (2 * LegacyType) & 0x7F;
            do
            {
              hkOArchive::write8u((hkOArchive::Self *)a25, v88 | 0x80);
              v89 = BYTE4(v86);
              HIDWORD(v86) = __PAIR64__(v86, HIDWORD(v86)) >> 7;
              LODWORD(v86) = (unsigned int)v86 >> 7;
              v88 = v89 & 0x7F;
            }
            while ( v86 != 0 );
            v87 = v88;
          }
          hkOArchive::write8u((hkOArchive::Self *)a25, v87);
          if ( (LegacyType & 0x20) != 0 )
          {
            if ( a30 >> 31 < 0 )
              v93 = (-2LL * a30) | 1;
            else
              v93 = 2LL * a30;
            HIDWORD(v94) = v93 >> 7;
            LODWORD(v94) = HIDWORD(v93) >> 7;
            v95 = v93 & 0x7F;
            if ( v94 != 0 )
            {
              v96 = v93 & 0x7F;
              do
              {
                hkOArchive::write8u((hkOArchive::Self *)a25, v96 | 0x80);
                v97 = BYTE4(v94);
                HIDWORD(v94) = __PAIR64__(v94, HIDWORD(v94)) >> 7;
                LODWORD(v94) = (unsigned int)v94 >> 7;
                v96 = v97 & 0x7F;
              }
              while ( v94 != 0 );
              v95 = v96;
            }
            hkOArchive::write8u((hkOArchive::Self *)a25, v95);
          }
          if ( (LegacyType & 0xF) - 8 <= 1 )
          {
            if ( a26 != 0 )
            {
              v98 = G4_VCALL<int>(*a24, 8);
              v99 = G4_VCALL<int>(v98, 44, a26);
              v100 = (hkString::Self *)G4_VCALL<int>(v99, 12);
              v177 = v100;
              if ( v100 != nullptr )
              {
                v101 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(v165, v100, -1);
                if ( v101 == -1 )
                {
                  v112 = hkString::strLen(v177);
                  v168 = v112;
                  if ( v112 >> 31 < 0 )
                    v113 = (-2LL * v112) | 1;
                  else
                    v113 = 2LL * v112;
                  while ( 1 )
                  {
                    LODWORD(v114) = HIDWORD(v113) >> 7;
                    v115 = v113 & 0x7F;
                    v113 >>= 7;
                    HIDWORD(v114) = v113;
                    if ( v114 == 0 )
                      break;
                    hkOArchive::write8u((hkOArchive::Self *)a25, v115 | 0x80);
                  }
                  hkOArchive::write8u((hkOArchive::Self *)a25, v115);
                  hkOArchive::writeRaw((hkOArchive::Self *)a25, v177, v168);
                  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v165, v177, a25[5] + 1);
                }
                else
                {
                  v102 = -v101;
                  if ( v102 >> 31 < 0 )
                    v103 = (-2LL * v102) | 1;
                  else
                    v103 = 2LL * v102;
                  HIDWORD(v104) = v103 >> 7;
                  LODWORD(v104) = HIDWORD(v103) >> 7;
                  v105 = v103 & 0x7F;
                  if ( v104 != 0 )
                  {
                    v106 = v103 & 0x7F;
                    do
                    {
                      hkOArchive::write8u((hkOArchive::Self *)a25, v106 | 0x80);
                      v107 = BYTE4(v104);
                      HIDWORD(v104) = __PAIR64__(v104, HIDWORD(v104)) >> 7;
                      LODWORD(v104) = (unsigned int)v104 >> 7;
                      v106 = v107 & 0x7F;
                    }
                    while ( v104 != 0 );
                    v105 = v106;
                  }
                  hkOArchive::write8u((hkOArchive::Self *)a25, v105);
                }
              }
              else
              {
                hkOArchive::write8u((hkOArchive::Self *)a25, 3u);
              }
            }
            else
            {
              sub_18854C0((hkOArchive::Self *)a25);
            }
          }
          ++v171;
        }
        while ( v171 != v169 );
        for ( i = 0; i != v169; ++i )
        {
          Terminal = (hkTypeManager::Type::Self *)hkTypeManager::Type::findTerminal(*(hkTypeManager::Type::Self **)(a34 + 16 * i + 8));
          if ( *(uint32_t *)Terminal == 6 )
          {
            v172 = G4_VCALL<int>(*a24, 8);
            v176 = *(int ( **)(int, int))(*(uint32_t *)v172 + 44);
            TypeName = hkTypeManager::Type::getTypeName(Terminal);
            a30 = v176(v172, TypeName);
            sub_18876F0(a1, (uint32_t *)&a30);
          }
        }
      }
      a35 = 0;
      if ( a36 >= 0 )
        (*(void ( **)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
          (uint32_t *)(uintptr_t)(hkContainerTempAllocator::s_alloc),
          a34,
          16 * a36);
      return v163;
    }
  }
  return result;
}

// Binary VA: 0x4ebe40 (recovered via IDA MCP)
int sub_4EBE40(int a1)
{
  { sub_5240B0((int *)(uintptr_t)a1); return 0; }
}

// ============================================================================
// PART 2: Recovered Named C++14 Functions (Group B)
// ============================================================================

// Binary VA: 0x1938df0 (from cxx_stl_runtime_part03.cpp)
const void **g4_std::string::assign(const void **a1, int *src, size_t n)
{
  int *dest;
  int v4;

  dest = (int *)*a1;
  v4 = *((uint32_t *)*a1 - 3);
  if ( n > 0x3FFFFFFC )
    sub_1900180("basic_string::assign");
  if ( src < dest || src > (int *)((char *)dest + v4) || *(dest - 1) > 0 )
    return sub_1938D60(a1, 0, v4, src, n);
  if ( n <= (char *)src - (char *)dest )
  {
    if ( n != 1 )
    {
      memcpy(dest, src, n);
      dest = (int *)*a1;
      goto LABEL_9;
    }
LABEL_16:
    *(uint8_t *)dest = *(uint8_t *)src;
    dest = (int *)*a1;
    goto LABEL_9;
  }
  if ( src != dest )
  {
    if ( n != 1 )
    {
      memmove(dest, src, n);
      dest = (int *)*a1;
      goto LABEL_9;
    }
    goto LABEL_16;
  }
LABEL_9:
  if ( dest - 3 != (int *)(uintptr_t)(dword_213B808) )
  {
    *(dest - 1) = 0;
    *(dest - 3) = n;
    *((uint8_t *)dest + n) = 0;
  }
  return a1;
}


// Binary VA: 0x1244fc0 (from boost_runtime_part01.cpp)
template <> int boost::unordered::detail::table_impl<boost::unordered::detail::map<std::allocator<std::pair<const std::string, boost::shared_ptr<chatv2::Core::ArionChannel::Self>>>, std::string, boost::shared_ptr<chatv2::Core::ArionChannel::Self>, boost::hash<std::string>, std::equal_to<std::string>>>::opIndex(
        boost::unordered::detail::table<boost::unordered::detail::map<std::allocator<std::pair<std::string const, boost::shared_ptr<chatv2::Core::ArionChannel::Self>>>, std::string, boost::shared_ptr<chatv2::Core::ArionChannel::Self>, boost::hash<std::string>, std::equal_to<std::string>>> *a1,
        const void **a2)
{
  unsigned int v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  unsigned int v7;
  int v8;
  int v9;
  uint32_t *v10;
  void *v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  uint32_t *v16;
  int v17;
  int v18;
  uint32_t **v19;
  unsigned int v20;
  uint32_t *v21;
  int v22;
  int v23;
  uint32_t **v24;
  int v25;
  int v26;
  uint32_t **v27;
  int v29;
  int *v30;
  int v31;
  uint32_t *v32;
  int v33;
  uint32_t *v34;
  unsigned int v35;
  uint32_t *v36;
  uint32_t *v37;
  uint32_t *v38;
  uint32_t *v39;
  uint32_t *v40;
  uint32_t *v41;
  uint32_t *v42;
  uint32_t *v43;
  uint32_t *v44;
  uint32_t *v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  uint32_t *v51;
  int v52;
  uint32_t v53[7];

  v2 = 0;
  v50 = 0;
  v3 = (char *)*a2;
  v4 = (int)(uintptr_t)*a2 + *((uint32_t *)*a2 - 3);
  if ( *a2 != (const void *)v4 )
  {
    do
    {
      v5 = *v3++;
      v2 ^= (v2 << 6) + (v2 >> 2) - 1640531527 + v5;
    }
    while ( v3 != (char *)v4 );
    v50 = v2 % *((uint32_t *)a1 + 1);
  }
  v6 = 0;
  if ( *((uint32_t *)a1 + 2) != 0 )
  {
    v29 = *((uint32_t *)a1 + 5);
    if ( v29 == 0 )
    {
      __assert2(
        "../../../../../lib/boost/unordered/detail/table.hpp",
        234,
        "boost::unordered::detail::table<Types>::bucket_pointer boost::unordered::detail::table<Types>::get_bucket(std::s"
        "ize_t) const [with Types = boost::unordered::detail::map<std::allocator<std::pair<const std::basic_string<char>,"
        " boost::shared_ptr<chatv2::Core::ArionChannel::Self> > >, std::basic_string<char>, boost::shared_ptr<chatv2::Core::Ari"
        "onChannel>, boost::hash<std::basic_string<char> >, std::equal_to<std::basic_string<char> > >, boost::unordered::"
        "detail::table<Types>::bucket_pointer = boost::unordered::detail::ptr_bucket*, std::size_t = unsigned int]",
        "buckets_");
      v29 = *((uint32_t *)a1 + 5);
    }
    v6 = 0;
    v30 = *(int **)(v29 + 4 * v50);
    if ( v30 != nullptr )
    {
      v31 = *v30;
      if ( v31 != 0 )
        v6 = v31 - 12;
    }
  }
  while ( v6 != 0 )
  {
    v7 = *(uint32_t *)(v6 + 16);
    if ( v2 == v7 )
    {
      if ( *((uint32_t *)*a2 - 3) == *(uint32_t *)(*(uint32_t *)v6 - 12)
        && memcmp(*a2, *(const void **)v6, *((uint32_t *)*a2 - 3)) == 0 )
      {
        return (int)(uintptr_t)((uint32_t *)v6);
      }
    }
    else if ( v50 != v7 % *((uint32_t *)a1 + 1) )
    {
      break;
    }
    v8 = *(uint32_t *)(v6 + 12);
    if ( v8 == 0 )
      break;
    v6 = v8 - 12;
  }
  g4_std_compat::string_construct_copy(v53, a2);
  v9 = (int)(uintptr_t)(operator new(0x14u));
  v10 = (uint32_t *)v9;
  if ( v9 != 0 )
  {
    *(uint32_t *)(v9 + 12) = 0;
    *(uint32_t *)(v9 + 16) = 0;
    v38 = (uint32_t *)v9;
    g4_std_compat::string_construct_copy(v9, v53);
    v10 = v38;
  }
  if ( v10 != (uint32_t *)-4 )
  {
    v10[1] = 0;
    v10[2] = 0;
  }
  v11 = (void *)(v53[0] - 12);
  if ( (uint32_t *)(v53[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v53[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v43 = v10;
    g4_std::string::Rep::M_destroy(v11);
    v10 = v43;
  }
  v12 = *((uint32_t *)a1 + 2);
  v13 = v12 + 1;
  if ( *((uint32_t *)a1 + 5) != 0 )
  {
    if ( v13 > *((uint32_t *)a1 + 4) )
    {
      v39 = v10;
      v14 = (v12 >> 1) + v12;
      if ( v14 >= v13 )
        v13 = v14;
      v15 = sub_123A860((float *)a1 + 3, v13);
      v10 = v39;
      if ( v15 != *((uint32_t *)a1 + 1) )
      {
        if ( *((uint32_t *)a1 + 5) == 0 )
        {
          __assert2(
            "../../../../../lib/boost/unordered/detail/unique.hpp",
            591,
            "void boost::unordered::detail::table_impl<Types>::rehash_impl(std::size_t) [with Types = boost::unordered::d"
            "etail::map<std::allocator<std::pair<const std::basic_string<char>, boost::shared_ptr<chatv2::Core::ArionChan"
            "nel> > >, std::basic_string<char>, boost::shared_ptr<chatv2::Core::ArionChannel>, boost::hash<std::basic_str"
            "ing<char> >, std::equal_to<std::basic_string<char> > >, std::size_t = unsigned int]",
            "this->buckets_");
          v10 = v39;
        }
        v40 = v10;
        boost::unordered::detail::table<boost::unordered::detail::map<std::allocator<std::pair<std::string const,boost::shared_ptr<chatv2::Core::ArionChannel::Self>>>,std::string,boost::shared_ptr<chatv2::Core::ArionChannel::Self>,boost::hash<std::string>,std::equal_to<std::string>>>::create_buckets(
          a1,
          v15);
        v16 = v40;
        v17 = *((uint32_t *)a1 + 1);
        v18 = *((uint32_t *)a1 + 5);
        if ( v18 == 0 )
        {
          __assert2(
            "../../../../../lib/boost/unordered/detail/table.hpp",
            234,
            "boost::unordered::detail::table<Types>::bucket_pointer boost::unordered::detail::table<Types>::get_bucket(st"
            "d::size_t) const [with Types = boost::unordered::detail::map<std::allocator<std::pair<const std::basic_strin"
            "g<char>, boost::shared_ptr<chatv2::Core::ArionChannel::Self> > >, std::basic_string<char>, boost::shared_ptr<chatv"
            "2::Core::ArionChannel>, boost::hash<std::basic_string<char> >, std::equal_to<std::basic_string<char> > >, bo"
            "ost::unordered::detail::table<Types>::bucket_pointer = boost::unordered::detail::ptr_bucket*, std::size_t = unsigned int]",
            "buckets_");
          v16 = v40;
          v18 = *((uint32_t *)a1 + 5);
        }
        v37 = v16;
        v51 = (uint32_t *)(v18 + 4 * v17);
        v19 = (uint32_t **)v51;
        v20 = v2;
        while ( 1 )
        {
          v21 = *v19;
          if ( *v19 == nullptr )
            break;
          while ( 1 )
          {
            v22 = v21[1] % *((uint32_t *)a1 + 1);
            v23 = *((uint32_t *)a1 + 5);
            if ( v23 == 0 )
            {
              v46 = v21[1] % *((uint32_t *)a1 + 1);
              __assert2(
                "../../../../../lib/boost/unordered/detail/table.hpp",
                234,
                "boost::unordered::detail::table<Types>::bucket_pointer boost::unordered::detail::table<Types>::get_bucke"
                "t(std::size_t) const [with Types = boost::unordered::detail::map<std::allocator<std::pair<const std::bas"
                "ic_string<char>, boost::shared_ptr<chatv2::Core::ArionChannel::Self> > >, std::basic_string<char>, boost::shar"
                "ed_ptr<chatv2::Core::ArionChannel::Self>, boost::hash<std::basic_string<char> >, std::equal_to<std::basic_stri"
                "ng<char> > >, boost::unordered::detail::table<Types>::bucket_pointer = boost::unordered::detail::ptr_buc"
                "ket*, std::size_t = unsigned int]",
                "buckets_");
              v22 = v46;
              v23 = *((uint32_t *)a1 + 5);
            }
            v24 = (uint32_t **)(v23 + 4 * v22);
            if ( *v24 == nullptr )
              break;
            *v51 = *v21;
            *v21 = **v24;
            **v24 = (uint32_t)(uintptr_t)(v21);
            v21 = (uint32_t *)*v51;
            if ( *v51 == 0 )
              goto LABEL_29;
          }
          v32 = v51;
          v51 = v21;
          *v24 = v32;
          v19 = (uint32_t **)v21;
        }
LABEL_29:
        v2 = v20;
        v10 = v37;
      }
    }
  }
  else
  {
    v42 = v10;
    v35 = sub_123A860((float *)a1 + 3, v13);
    if ( v35 < *((uint32_t *)a1 + 1) )
      v35 = *((uint32_t *)a1 + 1);
    boost::unordered::detail::table<boost::unordered::detail::map<std::allocator<std::pair<std::string const,boost::shared_ptr<chatv2::Core::ArionChannel::Self>>>,std::string,boost::shared_ptr<chatv2::Core::ArionChannel::Self>,boost::hash<std::string>,std::equal_to<std::string>>>::create_buckets(
      a1,
      v35);
    v10 = v42;
  }
  if ( v10 == nullptr )
  {
    __assert2(
      "../../../../../lib/boost/unordered/detail/buckets.hpp",
      383,
      "boost::unordered::detail::node_constructor<NodeAlloc>::node_pointer boost::unordered::detail::node_constructor<Nod"
      "eAlloc>::release() [with NodeAlloc = std::allocator<boost::unordered::detail::ptr_node<std::pair<const std::basic_"
      "string<char>, boost::shared_ptr<chatv2::Core::ArionChannel::Self> > > >, boost::unordered::detail::node_constructor<Node"
      "Alloc>::node_pointer = boost::unordered::detail::ptr_node<std::pair<const std::basic_string<char>, boost::shared_p"
      "tr<chatv2::Core::ArionChannel::Self> > >*]",
      "node_ && node_constructed_");
    v10 = nullptr;
  }
  v10[4] = v2;
  v25 = v2 % *((uint32_t *)a1 + 1);
  v26 = *((uint32_t *)a1 + 5);
  if ( v26 == 0 )
  {
    v47 = v25;
    v41 = v10;
    __assert2(
      "../../../../../lib/boost/unordered/detail/table.hpp",
      234,
      "boost::unordered::detail::table<Types>::bucket_pointer boost::unordered::detail::table<Types>::get_bucket(std::siz"
      "e_t) const [with Types = boost::unordered::detail::map<std::allocator<std::pair<const std::basic_string<char>, boo"
      "st::shared_ptr<chatv2::Core::ArionChannel::Self> > >, std::basic_string<char>, boost::shared_ptr<chatv2::Core::ArionChan"
      "nel>, boost::hash<std::basic_string<char> >, std::equal_to<std::basic_string<char> > >, boost::unordered::detail::"
      "table<Types>::bucket_pointer = boost::unordered::detail::ptr_bucket*, std::size_t = unsigned int]",
      "buckets_");
    v26 = *((uint32_t *)a1 + 5);
    v10 = v41;
    v25 = v47;
  }
  v27 = (uint32_t **)(v26 + 4 * v25);
  v36 = (uint32_t *)(v27);
  if ( *v27 != nullptr )
  {
    v10[3] = **v27;
    **v27 = (uint32_t)(uintptr_t)(v10 + 3);
  }
  else
  {
    v33 = *((uint32_t *)a1 + 1);
    if ( v26 == 0 )
    {
      v48 = *((uint32_t *)a1 + 1);
      v44 = v10;
      __assert2(
        "../../../../../lib/boost/unordered/detail/table.hpp",
        234,
        "boost::unordered::detail::table<Types>::bucket_pointer boost::unordered::detail::table<Types>::get_bucket(std::s"
        "ize_t) const [with Types = boost::unordered::detail::map<std::allocator<std::pair<const std::basic_string<char>,"
        " boost::shared_ptr<chatv2::Core::ArionChannel::Self> > >, std::basic_string<char>, boost::shared_ptr<chatv2::Core::Ari"
        "onChannel>, boost::hash<std::basic_string<char> >, std::equal_to<std::basic_string<char> > >, boost::unordered::"
        "detail::table<Types>::bucket_pointer = boost::unordered::detail::ptr_bucket*, std::size_t = unsigned int]",
        "buckets_");
      v26 = *((uint32_t *)a1 + 5);
      v10 = v44;
      v33 = v48;
    }
    v52 = v26 + 4 * v33;
    v34 = v10 + 3;
    if ( *(uint32_t *)v52 != 0 )
    {
      v49 = *(uint32_t *)(*(uint32_t *)v52 + 4) % *((uint32_t *)a1 + 1);
      if ( v26 == 0 )
      {
        v45 = v10;
        __assert2(
          "../../../../../lib/boost/unordered/detail/table.hpp",
          234,
          "boost::unordered::detail::table<Types>::bucket_pointer boost::unordered::detail::table<Types>::get_bucket(std:"
          ":size_t) const [with Types = boost::unordered::detail::map<std::allocator<std::pair<const std::basic_string<ch"
          "ar>, boost::shared_ptr<chatv2::Core::ArionChannel> > >, std::basic_string<char>, boost::shared_ptr<chatv2::Cor"
          "e::ArionChannel>, boost::hash<std::basic_string<char> >, std::equal_to<std::basic_string<char> > >, boost::uno"
          "rdered::detail::table<Types>::bucket_pointer = boost::unordered::detail::ptr_bucket*, std::size_t = unsigned int]",
          "buckets_");
        v26 = *((uint32_t *)a1 + 5);
        v10 = v45;
      }
      v34 = v10 + 3;
      *(uint32_t *)(v26 + 4 * v49) = (uint32_t)(uintptr_t)(v10 + 3);
    }
    *v36 = v52;
    v10[3] = *(uint32_t *)v52;
    *(uint32_t *)v52 = (uint32_t)(uintptr_t)(v34);
  }
  ++*((uint32_t *)a1 + 2);
  return (int)(uintptr_t)(v10);
}


// Binary VA: std::_Rb_tree<string, pair<const string, string>>::_M_erase
template <> void std::_Rb_tree<std::string, std::pair<const std::string, std::string>, std::_Select1st<std::pair<const std::string, std::string>>, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>>::_M_erase(int a1, uint32_t *a2)
{
  while (a2 != nullptr)
  {
    _M_erase(a1, (uint32_t *)(uintptr_t)a2[3]);
    uint32_t *left = (uint32_t *)(uintptr_t)a2[2];
    uint32_t v_str = a2[5];
    if (v_str != 0 && (uint32_t *)(uintptr_t)(v_str - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(uintptr_t)(v_str - 4), -1) <= 0)
      g4_std::string::Rep::M_destroy((void *)(uintptr_t)(v_str - 12));
    uint32_t k_str = a2[4];
    if (k_str != 0 && (uint32_t *)(uintptr_t)(k_str - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(uintptr_t)(k_str - 4), -1) <= 0)
      g4_std::string::Rep::M_destroy((void *)(uintptr_t)(k_str - 12));
    opDelete(a2);
    a2 = left;
  }
}

// Binary VA: std::_Rb_tree<string, pair<const string, pair<unsigned int, bool>>>::_M_erase
template <> void std::_Rb_tree<std::string, std::pair<const std::string, std::pair<unsigned int, bool>>, std::_Select1st<std::pair<const std::string, std::pair<unsigned int, bool>>>, std::less<std::string>, std::allocator<std::pair<const std::string, std::pair<unsigned int, bool>>>>::_M_erase(int a1, uint32_t *a2)
{
  while (a2 != nullptr)
  {
    _M_erase(a1, (uint32_t *)(uintptr_t)a2[3]);
    uint32_t *left = (uint32_t *)(uintptr_t)a2[2];
    uint32_t k_str = a2[4];
    if (k_str != 0 && (uint32_t *)(uintptr_t)(k_str - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(uintptr_t)(k_str - 4), -1) <= 0)
      g4_std::string::Rep::M_destroy((void *)(uintptr_t)(k_str - 12));
    opDelete(a2);
    a2 = left;
  }
}

// Binary VA: 0xc81720
int glf::Thread::sIsMain(int a1)
{
  (void)a1;
  pthread_t main_tid = (pthread_t)(uintptr_t)(*((uint32_t *)glf::ThreadMgr::Get() + 4));
  return main_tid == pthread_self() ? 1 : 0;
}

// Binary VA: 0x18dede0..0x18dee10
char *hkDisplayPlane::getNormal(hkDisplayPlane *self) { return (char *)self + 96; }
char *hkDisplayPlane::getCenter(hkDisplayPlane *self) { return (char *)self + 112; }
char *hkDisplayPlane::getPerpToNormal(hkDisplayPlane *self) { return (char *)self + 128; }
char *hkDisplayPlane::getExtents(hkDisplayPlane *self) { return (char *)self + 144; }

// Binary VA: 0x1708330 & 0x17083d0
int hkpBroadPhase::lockImplementation(void *self)
{
  pthread_mutex_t *mutex = *((pthread_mutex_t **)self + 7);
  return mutex ? pthread_mutex_lock(mutex) : 0;
}
int hkpBroadPhase::unlockImplementation(void *self)
{
  pthread_mutex_t *mutex = *((pthread_mutex_t **)self + 7);
  return mutex ? pthread_mutex_unlock(mutex) : 0;
}

// Binary VA: 0x1707fe0
void hkpBroadPhase::Destroy(void *self)
{
  pthread_mutex_t *mutex;
  int address;

  mutex = *((pthread_mutex_t **)self + 7);
  *(uint32_t *)self = off_209BE88;
  if ( mutex != nullptr )
  {
    if ( pthread_mutex_destroy(mutex) != 0 )
    {
      printf(
        "%s:%d:%s\n",
        "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
        28,
        "~hkCriticalSection");
      perror("pthread_mutex_destroy(&m_mutex)");
      __builtin_debugtrap();
    }
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void ( **)(uint32_t, pthread_mutex_t *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      mutex,
      8);
    *((uint32_t *)self + 7) = 0;
  }
  *(uint32_t *)self = off_2054CB8;
}

// Binary VA: 0xcbaa30 (full Fs implementation)
static int g4_glf_fs_GetDir_impl(int a1, int16_t a2)
{
  int v2;
  char *s;
  size_t v5;
  void *v6;
  void *v7;
  int v8; // [esp+1Ch] [ebp-10h]

  v2 = a2 & 0xF000;
  if ( (a2 & 0xF000) != 0 )
  {
    switch ( v2 )
    {
      case 4096:
        return *(uint32_t *)(a1 + 8);
      case 8192:
        return *(uint32_t *)(a1 + 12);
      case 16384:
        return *(uint32_t *)(a1 + 16);
      case 12288:
        return *(uint32_t *)(a1 + 20);
      case 24576:
        s = (char *)glf::allocateEphemeralAllocation((glf::Self *)&reinterpret_cast<G4Elf32Sym *>(stru_7F4)->st_info, (unsigned int)(uintptr_t)v6);
        (*(void ( **)(uint32_t, int, char *))(**(uint32_t **)(a1 + 316) + 28))(*(uint32_t *)(a1 + 316), 2048, s);
        v5 = strlen(s);
        g4_std::string::assign(a1 + 28, s, v5);
        v8 = *(uint32_t *)(a1 + 28);
        glf::freeEphemeralAllocation((glf::Self *)s, v7);
        return v8;
      case 28672:
        return *(uint32_t *)(a1 + 32);
      default:
        break;
    }
  }
  return *(uint32_t *)(a1 + 4);
}

// Binary VA: 0xcbbda0 (full Fs implementation)
static int g4_glf_fs_MountDrive_impl(int a1, char *s, char *a3, int a4)
{
  int result;
  unsigned int v5;
  int v6;
  size_t v7;
  size_t v8;

  result = 0;
  v5 = *(uint32_t *)(a1 + 248);
  if ( v5 <= 0xF )
  {
    v6 = *(uint32_t *)(a1 + 4 * v5 + 252);
    *(uint32_t *)(a1 + 248) = v5 + 1;
    v7 = strlen(s);
    g4_std::string::assign(v6, s, v7);
    v8 = strlen(a3);
    g4_std::string::assign(v6 + 4, a3, v8);
    *(uint32_t *)(v6 + 8) = a4;
    return 1;
  }
  return result;
}

// Binary VA: 0xcbc590 (full Fs implementation)
static unsigned int g4_glf_fs_ResolvePath_impl(int a1, char *s, unsigned int a3, glf::Self *a4, char *a5)
{
  glf::Self *v5;
  size_t v6;
  size_t v7;
  int v8;
  size_t v9;
  size_t v10;
  size_t v11;
  int v12;
  int v13;
  size_t v14;
  size_t v15;
  int v16;
  int *v17;
  size_t v18;
  void *v19;
  char *v21;
  int v22;
  int v23;
  int v24;
  size_t v25;
  char *v26;
  char *v27;
  char *v28;
  unsigned int v29;
  char v30;
  size_t v31;
  char *v32;
  glf::Self *Dir; // [esp-1Ch] [ebp-4Ch]
  char *v34;
  int *v35;
  size_t v36;
  char *v37;
  glf::Self *v38;
  char *v39;
  int v40;
  uint32_t v41[4];
  int v42[7];

  *(uint8_t *)a4 = 0;
  v41[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  v34 = s;
  if ( *(uint8_t *)a1 != 0 && (a3 & 0x3000) == 0 )
  {
    v25 = strlen(s);
    g4_std::string::assign((int)(uintptr_t)v41, s, v25);
    v26 = (char *)v41[0];
    if ( *(int *)(v41[0] - 4) < 0 || (sub_19397C0(v41), v26 = (char *)v41[0], *(int *)(v41[0] - 4) < 0) )
    {
      v34 = v26;
      v27 = v26;
      v39 = &v26[*((uint32_t *)v26 - 3)];
    }
    else
    {
      sub_19397C0(v41);
      v34 = (char *)v41[0];
      v27 = (char *)v41[0];
      v39 = &v34[*((uint32_t *)v34 - 3)];
      if ( *(int *)(v41[0] - 4) >= 0 )
      {
        sub_19397C0(v41);
        v34 = (char *)v41[0];
        v27 = (char *)v41[0];
      }
    }
    if ( v39 != v27 )
    {
      v28 = v26;
      do
      {
        v29 = *v27;
        if ( v29 <= 0xFF )
          LOWORD(v29) = *(uint16_t *)(tolower_tab_ + 2 * v29 + 2);
        *v28 = v29;
        ++v27;
        ++v28;
      }
      while ( v27 != v39 );
      v34 = (char *)v41[0];
    }
  }
  Dir = (glf::Self *)glf::Fs::GetDir(a1, a3);
  if ( dword_20DF644 != 0 )
  {
    v5 = (glf::Self *)v34;
    if ( *v34 == 46 )
    {
      v30 = v34[1];
      if ( v30 == 92 || v30 == 47 )
        v5 = (glf::Self *)(v34 + 2);
    }
    v6 = glf::Strlen(Dir);
    v7 = v6;
    if ( v6 != 0 && glf::Strncmp(v5, (char *)Dir, v6) == 0 )
      v5 = (glf::Self *)((char *)v5 + v7 + 1);
    sub_193A910((int)(uintptr_t)v42, (char *)v5, (int)(uintptr_t)&v40);
    v8 = dword_20DF638;
    v37 = (char *)v42[0];
    if ( dword_20DF638 != 0 )
    {
      v9 = *(uint32_t *)(v42[0] - 12);
      v35 = (int *)(&dword_20DF634);
      do
      {
        while ( 1 )
        {
          v10 = *(uint32_t *)(*(uint32_t *)(v8 + 16) - 12);
          v11 = v10;
          v31 = v9;
          if ( v9 <= v10 )
            v11 = v9;
          v12 = memcmp(*(const void **)(v8 + 16), v37, v11);
          v9 = v31;
          v13 = v10 - v31;
          if ( v12 == 0 )
            v12 = v13;
          if ( v12 < 0 )
            break;
          v35 = (int *)v8;
          v8 = *(uint32_t *)(v8 + 8);
          if ( v8 == 0 )
            goto LABEL_15;
        }
        v8 = *(uint32_t *)(v8 + 12);
      }
      while ( v8 != 0 );
LABEL_15:
      if ( v35 != (int *)(&dword_20DF634) )
      {
        v14 = *(uint32_t *)(v35[4] - 12);
        v15 = v14;
        if ( v31 <= v14 )
          v15 = v31;
        v16 = memcmp(v37, (const void *)v35[4], v15);
        if ( v16 == 0 )
          v16 = v31 - v14;
        v17 = (int *)(&dword_20DF634);
        if ( v16 >= 0 )
          v17 = v35;
        v35 = v17;
      }
    }
    else
    {
      v35 = (int *)(&dword_20DF634);
    }
    if ( v37 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v37 - 1, 0xFFFFFFFF) <= 0 )
      sub_1938AF0(v37 - 12);
    if ( v35 != (int *)(&dword_20DF634) )
    {
      a3 |= 0xC0000u;
      v34 = (char *)v35[5];
    }
  }
  if ( v34[1] == 58 )
    goto LABEL_30;
  v18 = strlen((const char *)Dir);
  if ( strncmp(v34, (const char *)Dir, v18) == 0 )
    goto LABEL_30;
  if ( *v34 != 47 )
  {
    glf::VJoinPath(a4, a5, (uint8_t *)&dword_0 + 2, (unsigned int)(uintptr_t)Dir, v34);
    goto LABEL_31;
  }
  v38 = (glf::Self *)(v34 + 1);
  v21 = strchr(v34 + 1, 47);
  v32 = v21;
  if ( v21 == nullptr || (v36 = v21 - (char *)v38, *(uint32_t *)(a1 + 248) == 0) )
  {
LABEL_30:
    glf::VJoinPath(a4, a5, (uint8_t *)&dword_0 + 1, (unsigned int)(uintptr_t)v34);
    goto LABEL_31;
  }
  v22 = 0;
  v23 = a1;
  while ( 1 )
  {
    v24 = *(uint32_t *)(v23 + 4 * v22 + 252);
    if ( glf::Strncmp(v38, *(char **)v24, v36) == 0 )
      break;
    v23 = a1;
    if ( *(uint32_t *)(a1 + 248) <= (unsigned int)++v22 )
      goto LABEL_30;
  }
  glf::VJoinPath(a4, a5, (char *)((uint8_t *)&dword_0 + 3), (unsigned int)(uintptr_t)Dir, *(uint32_t *)(v24 + 4), v32 + 1);
  a3 |= *(uint32_t *)(v24 + 8);
LABEL_31:
  v19 = (void *)(v41[0] - 12);
  if ( (uint32_t *)(v41[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v41[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    sub_1938AF0(v19);
  }
  return a3;
}

// Binary VA: 0xcbcb80 (full Fs implementation)
static int g4_glf_fs_RmDir_impl(int a1, char *a2, char *a3)
{
  glf::Self *EphemeralAllocation;
  char *s;
  uint8_t v6; // [esp+2Ch] [ebp-10h]

  EphemeralAllocation = (glf::Self *)glf::allocateEphemeralAllocation((glf::Self *)&reinterpret_cast<G4Elf32Sym *>(stru_7F4)->st_info, (unsigned int)(uintptr_t)s);
  glf::Fs::ResolvePath(a1, a2, (unsigned int)(uintptr_t)a3, EphemeralAllocation, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_7F4)->st_info);
  v6 = (*(int ( **)(uint32_t))(**(uint32_t **)(a1 + 316) + 16))(*(uint32_t *)(a1 + 316));
  glf::freeEphemeralAllocation(EphemeralAllocation, EphemeralAllocation);
  return v6;
}

// Binary VA: 0xcbcc50 (full Fs implementation)
static int g4_glf_fs_MkDir_impl(int a1, char *a2, char *a3)
{
  glf::Self *EphemeralAllocation;
  char *s;
  uint8_t v6; // [esp+2Ch] [ebp-10h]

  EphemeralAllocation = (glf::Self *)glf::allocateEphemeralAllocation((glf::Self *)&reinterpret_cast<G4Elf32Sym *>(stru_7F4)->st_info, (unsigned int)(uintptr_t)s);
  glf::Fs::ResolvePath(a1, a2, (unsigned int)(uintptr_t)a3, EphemeralAllocation, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_7F4)->st_info);
  v6 = (*(int ( **)(uint32_t))(**(uint32_t **)(a1 + 316) + 12))(*(uint32_t *)(a1 + 316));
  glf::freeEphemeralAllocation(EphemeralAllocation, EphemeralAllocation);
  return v6;
}

// Binary VA: 0xcbab20 (glf::Fs::SetDir)
static int g4_glf_fs_SetDir_impl(int a1, int16_t a2, char *s)
{
  int result;
  size_t v4;
  size_t v5;
  size_t v6;
  size_t v7;
  size_t v8;
  size_t v9;

  result = a2 & 0xF000;
  if ( (a2 & 0xF000) != 0 )
  {
    switch ( result )
    {
      case 4096:
        v6 = strlen(s);
        return (int)(uintptr_t)(g4_std::string::assign(a1 + 8, s, v6));
      case 8192:
        v7 = strlen(s);
        return (int)(uintptr_t)(g4_std::string::assign(a1 + 12, s, v7));
      case 16384:
        v8 = strlen(s);
        return (int)(uintptr_t)(g4_std::string::assign(a1 + 16, s, v8));
      case 12288:
        v9 = strlen(s);
        return (int)(uintptr_t)(g4_std::string::assign(a1 + 20, s, v9));
      case 24576:
        return (*(int ( **)(uint32_t, char *))(**(uint32_t **)(a1 + 316) + 32))(*(uint32_t *)(a1 + 316), s);
      case 28672:
        v5 = strlen(s);
        return (int)(uintptr_t)(g4_std::string::assign(a1 + 32, s, v5));
      default:
        break;
    }
  }
  else
  {
    v4 = strlen(s);
    return (int)(uintptr_t)(g4_std::string::assign(a1 + 4, s, v4));
  }
  return result;
}

// Exact FD:83378-83385 wrappers calling recovered glf::Fs implementations
int glf::Fs::GetDir(int a1, void *a2) { return g4_glf_fs_GetDir_impl(a1, (int16_t)(intptr_t)a2); }
namespace glf { namespace Fs { int SetDir(int a1, int16_t a2, char *s); } }
int glf::Fs::SetDir(int a1, int16_t a2, char *s) { return g4_glf_fs_SetDir_impl(a1, a2, s); }
int glf::Fs::SetDataDir(int a1, const void *a2) { return g4_glf_fs_SetDir_impl(a1, 0, (char *)a2); }
int glf::Fs::SetHomeDir(int a1, const void *a2) { return g4_glf_fs_SetDir_impl(a1, 4096, (char *)a2); }
int glf::Fs::GetInfo(int a1, const void *a2, void *a3) { (void)a1; (void)a2; (void)a3; return 0; }
int glf::Fs::MountDrive(int a1, const void *a2, const void *a3) { return g4_glf_fs_MountDrive_impl(a1, (char *)a2, (char *)a3, 0); }
int glf::Fs::MountDrive(int a1, char *s, char *a3, int a4) { return g4_glf_fs_MountDrive_impl(a1, s, a3, a4); }
int glf::Fs::ResolvePath(int a1, const void *a2, void *a3) { return (int)g4_glf_fs_ResolvePath_impl(a1, (char *)a2, 0u, (glf::Self *)a3, nullptr); }
unsigned int glf::Fs::ResolvePath(int a1, char *s, unsigned int a3, glf::Self *a4, char *a5) { return g4_glf_fs_ResolvePath_impl(a1, s, a3, a4, a5); }
int glf::Fs::MkDir(int a1, const void *a2, int a3) { return g4_glf_fs_MkDir_impl(a1, (char *)a2, (char *)(intptr_t)a3); }
int glf::Fs::RmDir(int a1, const void *a2) { return g4_glf_fs_RmDir_impl(a1, (char *)a2, nullptr); }

// Binary VA: 0xd6dcf0
void glitch::collada::CRootSceneNode::Destroy(void *self)
{
  uint32_t *self_u32 = (uint32_t *)self;
  glitch::collada::CRootSceneNode::Self *v1;
  glitch::video::CMaterial::Self **v2;
  glitch::video::CMaterial::Self **v3;
  glitch::collada::CRootSceneNode::Self **v4;
  glitch::collada::CRootSceneNode::Self *v5;
  glitch::collada::CRootSceneNode::Self *v6;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v7;
  char *v8;
  int v9;
  char *v10;
  char *v11;
  char *v12;
  char **v13;
  glitch::collada::CRootSceneNode::Self *v14;
  char *v15;
  char *v16;
  uint32_t *v17;
  char **v18;
  glitch::collada::CRootSceneNode::Self *v19;
  char *v20;
  char *v21;
  glitch::video::CMaterial::Self ***i;
  glitch::video::CMaterial::Self *v23;
  glitch::video::CMaterial::Self **v24;
  bool v25; // zf
  glitch::collada::CRootSceneNode::Self **v26;
  glitch::collada::CRootSceneNode::Self *v27;
  glitch::collada::CRootSceneNode::Self **v28;
  glitch::collada::CRootSceneNode::Self *v29;
  glitch::collada::CRootSceneNode::Self **v30;
  glitch::collada::CRootSceneNode::Self *v31;
  glitch::collada::CRootSceneNode::Self **v32;
  glitch::collada::CRootSceneNode::Self *v33;
  glitch::collada::CRootSceneNode::Self *v34;
  int v35;
  glitch::video::CMaterial::Self **v36;
  glitch::video::CMaterial::Self **v37;
  glitch::video::CMaterial::Self **v38;
  int *v39;
  glitch::collada::CRootSceneNode::Self *v40;
  glitch::video::CMaterial::Self **v41; // [esp+1Ch] [ebp-20h]

  v1 = (glitch::collada::CRootSceneNode::Self *)self;
  *self_u32 = (uint32_t)(uintptr_t)((glitch::collada::CRootSceneNode::Self **)off_2075570);
  *(self_u32 + 109) = (uint32_t)(uintptr_t)((glitch::collada::CRootSceneNode::Self **)&off_20756A8);
  *(self_u32 + 110) = (uint32_t)(uintptr_t)((glitch::collada::CRootSceneNode::Self **)off_20756C8);
  v2 = (glitch::video::CMaterial::Self **)(self_u32 + 86);
  glitch::scene::ISceneNode::removeAllBlocking((glitch::scene::ISceneNode::Self *)self);
  glitch::collada::CRootSceneNode::removeIKSolvers((glitch::collada::CRootSceneNode::Self *)self);
  v3 = (glitch::video::CMaterial::Self **)(uintptr_t)(*(self_u32 + 86));
  if ( v3 != (glitch::video::CMaterial::Self **)(self_u32 + 86) )
  {
    do
    {
      glitch::video::CMaterial::setRootSceneNode(v3[3], nullptr);
      v3 = (glitch::video::CMaterial::Self **)*v3;
    }
    while ( v2 != v3 );
  }
  v4 = (glitch::collada::CRootSceneNode::Self **)(uintptr_t)(*(self_u32 + 107));
  if ( v4 != (glitch::collada::CRootSceneNode::Self **)(self_u32 + 107) )
  {
    while ( 1 )
    {
      v5 = v4[3];
      v6 = *v4;
      if ( v5 != nullptr )
        sub_5459C0((volatile int32_t *)((char *)v5 + *(uint32_t *)(*(uint32_t *)v5 - 16)));
      v7 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)v4[2];
      if ( v7 != nullptr && __sync_fetch_and_add((volatile int32_t *)v7, 0xFFFFFFFF) == 1 )
        glitch::core::detail::SSharedStringHeapEntry::SData::release(v7, v34);
      sub_4EBE40((int)(uintptr_t)v4);
      if ( v6 == (glitch::collada::CRootSceneNode::Self *)(self_u32 + 107) )
        break;
      v4 = (glitch::collada::CRootSceneNode::Self **)v6;
    }
    v1 = (glitch::collada::CRootSceneNode::Self *)self;
    v2 = (glitch::video::CMaterial::Self **)(self_u32 + 86);
  }
  if ( *((uint32_t *)v1 + 106) != 0 )
    sub_5459C0(*((volatile int32_t **)v1 + 106));
  v8 = *((char **)v1 + 104);
  v9 = *((uint32_t *)v1 + 103);
  if ( v8 != (char *)v9 )
  {
    v39 = (int *)v1;
    v41 = v2;
    v10 = *((char **)v1 + 103);
    v35 = v9 + 4;
    v11 = v10;
    v12 = v8;
    do
    {
      if ( *(uint32_t *)(v35 + v10 - v11) != 0 )
        sub_5459C0(*(volatile int32_t **)(v35 + v10 - v11));
      if ( *(uint32_t *)v10 != 0 )
        sub_5459C0((volatile int32_t *)(*(uint32_t *)(**(uint32_t **)v10 - 12) + *(uint32_t *)v10));
      v10 += 8;
    }
    while ( v12 != v10 );
    v1 = (glitch::collada::CRootSceneNode::Self *)v39;
    v2 = v41;
    v9 = v39[103];
  }
  if ( v9 != 0 )
    sub_4EBE40(v9);
  v13 = *((char ***)v1 + 101);
  if ( v13 != (char **)((char *)v1 + 404) )
  {
    v36 = v2;
    v14 = v1;
    v15 = (char *)v1 + 404;
    while ( 1 )
    {
      v16 = *v13;
      sub_4EBE40((int)(uintptr_t)v13);
      if ( v16 == v15 )
        break;
      v13 = (char **)v16;
    }
    v1 = v14;
    v2 = v36;
  }
  g4_std::Rb_tree_char_const_pair_char_con_38ba9c::M_erase(
    (int)(uintptr_t)v1 + 364,
    *((void **)v1 + 93));
  v17 = *((uint32_t **)v1 + 90);
  if ( v17 != nullptr )
    sub_5459C0((uint32_t *)((char *)v17 + *(uint32_t *)(*v17 - 12)));
  v18 = *((char ***)v1 + 88);
  if ( v18 != (char **)((char *)v1 + 352) )
  {
    v37 = v2;
    v19 = v1;
    v20 = (char *)v1 + 352;
    while ( 1 )
    {
      v21 = *v18;
      sub_4EBE40((int)(uintptr_t)v18);
      if ( v21 == v20 )
        break;
      v18 = (char **)v21;
    }
    v1 = v19;
    v2 = v37;
  }
  if ( *((glitch::video::CMaterial::Self ***)v1 + 86) != v2 )
  {
    v38 = v2;
    v40 = v1;
    for ( i = *((glitch::video::CMaterial::Self ****)v1 + 86); ; i = (glitch::video::CMaterial::Self ***)v24 )
    {
      v23 = (glitch::video::CMaterial::Self *)i[3];
      v24 = *i;
      if ( v23 != nullptr )
      {
        v25 = *(uint32_t *)v23 == 2;
        _mm_mfence();
        if ( v25 )
          glitch::video::CMaterial::removeFromRootSceneNode(v23);
        if ( __sync_fetch_and_add((volatile int32_t *)v23, 0xFFFFFFFF) == 1 )
        {
          glitch::video::CMaterial::Destroy(v23);
          sub_4EBE40((int)(uintptr_t)v23);
        }
      }
      sub_4EBE40((int)(uintptr_t)i);
      if ( v24 == v38 )
        break;
    }
    v1 = v40;
  }
  v26 = *((glitch::collada::CRootSceneNode::Self ***)v1 + 84);
  if ( v26 != (glitch::collada::CRootSceneNode::Self **)((char *)v1 + 336) )
  {
    while ( 1 )
    {
      v27 = *v26;
      sub_4EBE40((int)(uintptr_t)v26);
      if ( v27 == (glitch::collada::CRootSceneNode::Self *)((char *)v1 + 336) )
        break;
      v26 = (glitch::collada::CRootSceneNode::Self **)v27;
    }
  }
  v28 = *((glitch::collada::CRootSceneNode::Self ***)v1 + 82);
  if ( v28 != (glitch::collada::CRootSceneNode::Self **)((char *)v1 + 328) )
  {
    while ( 1 )
    {
      v29 = *v28;
      sub_4EBE40((int)(uintptr_t)v28);
      if ( v29 == (glitch::collada::CRootSceneNode::Self *)((char *)v1 + 328) )
        break;
      v28 = (glitch::collada::CRootSceneNode::Self **)v29;
    }
  }
  v30 = *((glitch::collada::CRootSceneNode::Self ***)v1 + 80);
  if ( v30 != (glitch::collada::CRootSceneNode::Self **)((char *)v1 + 320) )
  {
    while ( 1 )
    {
      v31 = *v30;
      sub_4EBE40((int)(uintptr_t)v30);
      if ( v31 == (glitch::collada::CRootSceneNode::Self *)((char *)v1 + 320) )
        break;
      v30 = (glitch::collada::CRootSceneNode::Self **)v31;
    }
  }
  v32 = *((glitch::collada::CRootSceneNode::Self ***)v1 + 78);
  if ( v32 != (glitch::collada::CRootSceneNode::Self **)((char *)v1 + 312) )
  {
    while ( 1 )
    {
      v33 = *v32;
      sub_4EBE40((int)(uintptr_t)v32);
      if ( v33 == (glitch::collada::CRootSceneNode::Self *)((char *)v1 + 312) )
        break;
      v32 = (glitch::collada::CRootSceneNode::Self **)v33;
    }
  }
  *(uint32_t *)v1 = off_20753B0;
  *((uint32_t *)v1 + 109) = (uint32_t)(uintptr_t)(&off_20754E8);
  *((uint32_t *)v1 + 110) = off_2075508;
  glitch::collada::CColladaDatabase::Destroy((glitch::collada::CRootSceneNode::Self *)((char *)v1 + 288));
  *(uint32_t *)v1 = off_2075230;
  *((uint32_t *)v1 + 110) = off_2075384;
  *((uint32_t *)v1 + 109) = (uint32_t)(uintptr_t)(&off_2075364);
  glitch::scene::ISceneNode::Destroy(v1);
  *((uint32_t *)v1 + 109) = off_207506C;
  *((uint32_t *)v1 + 110) = (uint32_t)(uintptr_t)(&off_20483C0);
}

// Binary VA: 0x1cbc261 & POSIX compat
uint8_t algn_1CBC261[16] = {};
int lsof(...) { return 0; }
