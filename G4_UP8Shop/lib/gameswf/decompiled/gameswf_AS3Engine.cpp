#include "Core/Utils/DecompTypes.h"
#include "gameswf_AS3Engine.h"

// ----------------------------------------------------------------------------
// Function: gameswf::AS3Engine::Destroy  (binary VA: 0x10bd020)
// Original: gameswf::AS3Engine::~AS3Engine
// ----------------------------------------------------------------------------
void gameswf::AS3Engine::Destroy(gameswf::AS3Engine::Self *self)
{
  int v1;
  int i;
  gameswf::Self *v3;
  bool v4;
  int v5;
  gameswf::Self *v6;
  gameswf::Self *v7;
  int v8;
  int v9;
  int j;
  uint32_t *v11;
  int v12;
  int v13;
  uint32_t *v14;
  int v15;
  gameswf::Self *v16;
  gameswf::Self *v17;
  int k;
  int v19;
  gameswf::Self *v20;
  int v21;
  uint32_t *v22;
  int v23;

  v1 = *((uint32_t *)self + 17);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2091708);
  if ( v1 <= 0 )
  {
    if ( v1 < 0 )
    {
      v21 = 8 * v1;
      do
      {
        v22 = (uint32_t *)(*((uint32_t *)self + 16) + v21);
        if ( v22 != nullptr )
        {
          *v22 = 0;
          v22[1] = 0;
        }
        v21 += 8;
        ++v1;
      }
      while ( v1 != 0 );
    }
  }
  else
  {
    for ( i = 0; i != v1; ++i )
    {
      v3 = *(gameswf::Self **)(*((uint32_t *)self + 16) + 8 * i);
      if ( v3 != nullptr )
      {
        v4 = (*(uint16_t *)v3)-- == 1;
        if ( v4 )
          gameswf::free_internal(v3);
      }
    }
  }
  v5 = *((uint32_t *)self + 19);
  *((uint32_t *)self + 17) = 0;
  if ( v5 == 0 )
  {
    v6 = *((gameswf::Self **)self + 16);
    *((uint32_t *)self + 18) = 0;
    if ( v6 != nullptr )
      gameswf::free_internal(v6);
    *((uint32_t *)self + 16) = 0;
  }
  if ( *((uint32_t *)self + 15) != 0 )
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 15));
  if ( *((uint32_t *)self + 14) != 0 )
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 14));
  if ( *((uint32_t *)self + 13) != 0 )
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 13));
  if ( *((uint32_t *)self + 12) != 0 )
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 12));
  if ( *((uint32_t *)self + 11) != 0 )
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 11));
  if ( *((uint32_t *)self + 10) != 0 )
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 10));
  if ( *((uint32_t *)self + 9) != 0 )
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 9));
  v7 = *((gameswf::Self **)self + 8);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20916F8);
  if ( v7 != nullptr )
  {
    v8 = *((uint32_t *)v7 + 1);
    if ( v8 >= 0 )
    {
      v9 = 8;
      for ( j = 0; j <= v8; ++j )
      {
        v11 = (uint32_t *)((char *)v7 + v9);
        if ( *(uint32_t *)((char *)v7 + v9) != -2 )
        {
          *v11 = -2;
          v11[1] = 0;
          v7 = *((gameswf::Self **)self + 8);
        }
        v9 += 16;
      }
    }
    gameswf::free_internal(v7);
    *((uint32_t *)self + 8) = 0;
  }
  v12 = *((uint32_t *)self + 5);
  if ( v12 < 0 )
  {
    v13 = 4 * v12;
    do
    {
      v14 = (uint32_t *)(*((uint32_t *)self + 4) + v13);
      if ( v14 != nullptr )
        *v14 = 0;
      v13 += 4;
      ++v12;
    }
    while ( v12 != 0 );
  }
  v15 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 5) = 0;
  if ( v15 == 0 )
  {
    v16 = *((gameswf::Self **)self + 4);
    *((uint32_t *)self + 6) = 0;
    if ( v16 != nullptr )
      gameswf::free_internal(v16);
    *((uint32_t *)self + 4) = 0;
  }
  v17 = *((gameswf::Self **)self + 3);
  if ( v17 != nullptr )
  {
    v23 = *((uint32_t *)v17 + 1);
    if ( v23 >= 0 )
    {
      for ( k = 0; k <= v23; ++k )
      {
        v19 = (int)(uintptr_t)(v17) + 32 * k + 8;
        if ( *(uint32_t *)v19 != -2 )
        {
          sub_59CE50((int)(uintptr_t)(v17) + 32 * k + 16);
          if ( *(uint32_t *)(v19 + 28) != 0 )
            gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v19 + 28));
          *(uint32_t *)v19 = -2;
          *(uint32_t *)(v19 + 4) = 0;
          v17 = *((gameswf::Self **)self + 3);
        }
      }
    }
    gameswf::free_internal(v17);
    *((uint32_t *)self + 3) = 0;
  }
  v20 = *((gameswf::Self **)self + 1);
  if ( v20 != nullptr )
  {
    v4 = (*(uint16_t *)v20)-- == 1;
    if ( v4 )
      gameswf::free_internal(v20);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::AS3Engine::registerABC  (binary VA: 0x117ce10)
// Original: gameswf::AS3Engine::registerABC
// ----------------------------------------------------------------------------
gameswf::Self ** gameswf::AS3Engine::registerABC(gameswf::AS3Engine::Self *self, gameswf::abc_def::Self *a2)
{
  gameswf::RefCounted::Self *v2;
  int v3;
  int v4;
  int v5;
  gameswf::Self **result;
  gameswf::Self **v7;
  gameswf::Self *WeakProxy;
  int v9;
  gameswf::Self *v10;

  v2 = (gameswf::RefCounted::Self *)(a2);
  v3 = *((uint32_t *)self + 17);
  v4 = *((uint32_t *)self + 18);
  v5 = v3 + 1;
  if ( v3 + 1 <= v4 || *((uint32_t *)self + 19) != 0 )
  {
    result = *((gameswf::Self ***)self + 16);
  }
  else
  {
    v9 = v5 + (v5 >> 1);
    *((uint32_t *)self + 18) = v9;
    if ( v9 != 0 )
    {
      if ( *((uint32_t *)self + 16) != 0 )
        result = (gameswf::Self **)gameswf::realloc_internal(*((gameswf::Self **)self + 16), 8 * v9, 8 * v4);
      else
        result = (gameswf::Self **)gameswf::malloc_internal(8 * v9);
      *((uint32_t *)self + 16) = (uint32_t)(uintptr_t)(result);
      v3 = *((uint32_t *)self + 17);
      v2 = (gameswf::RefCounted::Self *)(a2);
    }
    else
    {
      v10 = *((gameswf::Self **)self + 16);
      if ( v10 != nullptr )
      {
        gameswf::free_internal(v10);
        v3 = *((uint32_t *)self + 17);
        v2 = (gameswf::RefCounted::Self *)(a2);
      }
      *((uint32_t *)self + 16) = 0;
      result = nullptr;
    }
  }
  v7 = &result[2 * v3];
  if ( v7 != nullptr )
  {
    *v7 = nullptr;
    v7[1] = (gameswf::Self *)(v2);
    if ( v2 != nullptr )
    {
      WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v2);
      result = (gameswf::Self **)sub_7E5ED0(v7, WeakProxy);
    }
    else
    {
      result = (gameswf::Self **)sub_7E5ED0(&result[2 * v3], nullptr);
    }
  }
  *((uint32_t *)self + 17) = v5;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::AS3Engine::alive  (binary VA: 0x117cf50)
// Original: gameswf::AS3Engine::alive
// ----------------------------------------------------------------------------
int gameswf::AS3Engine::alive(gameswf::AS3Engine::Self *self)
{
  int v1;
  int v2;
  gameswf::Self **v3;
  int v4;
  int v5;
  int v6;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  char *v15;

  v1 = *((uint32_t *)self + 17);
  if ( v1 > 0 )
  {
    v2 = 0;
    while ( 1 )
    {
      v3 = (gameswf::Self **)(*((uint32_t *)self + 16) + 8 * v2);
      if ( v3[1] == nullptr )
        goto LABEL_4;
      if ( *((uint8_t *)*v3 + 2) != 0 )
      {
        gameswf::abc_def::alive(v3[1]);
        v1 = *((uint32_t *)self + 17);
LABEL_4:
        if ( ++v2 >= v1 )
          break;
      }
      else
      {
        ++v2;
        sub_7E5ED0(v3, nullptr);
        v3[1] = nullptr;
        v1 = *((uint32_t *)self + 17);
        if ( v2 >= v1 )
          break;
      }
    }
  }
  v4 = *((uint32_t *)self + 3);
  v15 = (char *)self + 12;
  if ( v4 != 0 )
  {
    v5 = 0;
    if ( *(int *)(v4 + 4) >= 0 && *(uint32_t *)(v4 + 8) == -2 )
    {
      v8 = 40;
      v9 = 1;
      do
      {
        v5 = v9;
        if ( v9 > *(uint32_t *)(v4 + 4) )
          break;
        v10 = *(uint32_t *)(v4 + v8);
        ++v9;
        v8 += 32;
      }
      while ( v10 == -2 );
    }
    if ( self != (gameswf::AS3Engine::Self *)-12 )
    {
LABEL_11:
      while ( v4 != 0 )
      {
        if ( v5 > *(uint32_t *)(v4 + 4) )
          break;
        (*(void (**)(uint32_t))(**(uint32_t **)(v4 + 32 * v5 + 36) + 76))(*(uint32_t *)(v4 + 32 * v5 + 36));
        v4 = *(uint32_t *)v15;
        v6 = *(uint32_t *)(*(uint32_t *)v15 + 4);
        if ( v5 > v6 )
          break;
        v11 = v5 + 1;
        if ( v6 >= v5 + 1 && *(uint32_t *)(v4 + 32 * v11 + 8) == -2 )
        {
          v12 = v5 + 2;
          v13 = 32 * v12 + 8;
          while ( 1 )
          {
            v11 = v12;
            if ( *(uint32_t *)(*(uint32_t *)v15 + 4) < v12 )
              break;
            v14 = *(uint32_t *)(v4 + v13);
            ++v12;
            v13 += 32;
            if ( v14 != -2 )
            {
              v5 = v11;
              goto LABEL_11;
            }
          }
        }
        v5 = v11;
      }
    }
  }
  (*(void (**)(uint32_t))(**((uint32_t **)self + 9) + 76))(*((uint32_t *)self + 9));
  (*(void (**)(uint32_t))(**((uint32_t **)self + 10) + 76))(*((uint32_t *)self + 10));
  return (*(int (**)(uint32_t))(**((uint32_t **)self + 12) + 76))(*((uint32_t *)self + 12));
}

// ----------------------------------------------------------------------------
// Function: gameswf::AS3Engine::getEvent  (binary VA: 0x117d0d0)
// Original: gameswf::AS3Engine::getEvent
// ----------------------------------------------------------------------------
int gameswf::AS3Engine::getEvent(gameswf::AS3Engine::Self *self, gameswf::Self **a2)
{
  int v2;

  v2 = *((uint32_t *)self + 9);
  gameswf::String::opAssign((gameswf::Self **)(v2 + 40), a2);
  *(uint8_t *)(v2 + 60) = 0;
  *(uint8_t *)(v2 + 61) = 0;
  *(uint32_t *)(v2 + 64) = 1;
  *(uint32_t *)(v2 + 72) = 0;
  sub_7E5ED0((gameswf::Self **)(v2 + 68), nullptr);
  *(uint32_t *)(v2 + 80) = 0;
  sub_7E5ED0((gameswf::Self **)(v2 + 76), nullptr);
  return *((uint32_t *)self + 9);
}

// ----------------------------------------------------------------------------
// Function: gameswf::AS3Engine::getMouseEvent  (binary VA: 0x117d160)
// Original: gameswf::AS3Engine::getMouseEvent
// ----------------------------------------------------------------------------
int gameswf::AS3Engine::getMouseEvent(gameswf::AS3Engine::Self *self, gameswf::Self **a2)
{
  int v2;

  v2 = *((uint32_t *)self + 10);
  gameswf::String::opAssign((gameswf::Self **)(v2 + 40), a2);
  *(uint8_t *)(v2 + 60) = 0;
  *(uint8_t *)(v2 + 61) = 0;
  *(uint32_t *)(v2 + 64) = 1;
  *(uint32_t *)(v2 + 72) = 0;
  sub_7E5ED0((gameswf::Self **)(v2 + 68), nullptr);
  *(uint32_t *)(v2 + 80) = 0;
  sub_7E5ED0((gameswf::Self **)(v2 + 76), nullptr);
  *(uint8_t *)(*((uint32_t *)self + 10) + 60) = 1;
  return *((uint32_t *)self + 10);
}

// ----------------------------------------------------------------------------
// Function: gameswf::AS3Engine::getKeyboardEvent  (binary VA: 0x117d200)
// Original: gameswf::AS3Engine::getKeyboardEvent
// ----------------------------------------------------------------------------
int gameswf::AS3Engine::getKeyboardEvent(gameswf::AS3Engine::Self *self, gameswf::Self **a2)
{
  int v2;

  v2 = *((uint32_t *)self + 11);
  gameswf::String::opAssign((gameswf::Self **)(v2 + 40), a2);
  *(uint8_t *)(v2 + 60) = 0;
  *(uint8_t *)(v2 + 61) = 0;
  *(uint32_t *)(v2 + 64) = 1;
  *(uint32_t *)(v2 + 72) = 0;
  sub_7E5ED0((gameswf::Self **)(v2 + 68), nullptr);
  *(uint32_t *)(v2 + 80) = 0;
  sub_7E5ED0((gameswf::Self **)(v2 + 76), nullptr);
  *(uint8_t *)(*((uint32_t *)self + 11) + 60) = 1;
  return *((uint32_t *)self + 11);
}

// ----------------------------------------------------------------------------
// Function: gameswf::AS3Engine::getTimerEvent  (binary VA: 0x117d2a0)
// Original: gameswf::AS3Engine::getTimerEvent
// ----------------------------------------------------------------------------
int gameswf::AS3Engine::getTimerEvent(gameswf::AS3Engine::Self *self, gameswf::Self **a2)
{
  int v2;

  v2 = *((uint32_t *)self + 12);
  gameswf::String::opAssign((gameswf::Self **)(v2 + 40), a2);
  *(uint8_t *)(v2 + 60) = 0;
  *(uint8_t *)(v2 + 61) = 0;
  *(uint32_t *)(v2 + 64) = 1;
  *(uint32_t *)(v2 + 72) = 0;
  sub_7E5ED0((gameswf::Self **)(v2 + 68), nullptr);
  *(uint32_t *)(v2 + 80) = 0;
  sub_7E5ED0((gameswf::Self **)(v2 + 76), nullptr);
  return *((uint32_t *)self + 12);
}

// ----------------------------------------------------------------------------
// Function: gameswf::AS3Engine::getNetStatusEvent  (binary VA: 0x117d330)
// Original: gameswf::AS3Engine::getNetStatusEvent
// ----------------------------------------------------------------------------
int gameswf::AS3Engine::getNetStatusEvent(gameswf::AS3Engine::Self *self, gameswf::Self **a2)
{
  int v2;

  v2 = *((uint32_t *)self + 13);
  gameswf::String::opAssign((gameswf::Self **)(v2 + 40), a2);
  *(uint8_t *)(v2 + 60) = 0;
  *(uint8_t *)(v2 + 61) = 0;
  *(uint32_t *)(v2 + 64) = 1;
  *(uint32_t *)(v2 + 72) = 0;
  sub_7E5ED0((gameswf::Self **)(v2 + 68), nullptr);
  *(uint32_t *)(v2 + 80) = 0;
  sub_7E5ED0((gameswf::Self **)(v2 + 76), nullptr);
  return *((uint32_t *)self + 13);
}

// ----------------------------------------------------------------------------
// Function: gameswf::AS3Engine::getFocusEvent  (binary VA: 0x117d3c0)
// Original: gameswf::AS3Engine::getFocusEvent
// ----------------------------------------------------------------------------
int gameswf::AS3Engine::getFocusEvent(gameswf::AS3Engine::Self *self, gameswf::Self **a2)
{
  int v2;

  v2 = *((uint32_t *)self + 14);
  gameswf::String::opAssign((gameswf::Self **)(v2 + 40), a2);
  *(uint8_t *)(v2 + 60) = 0;
  *(uint8_t *)(v2 + 61) = 0;
  *(uint32_t *)(v2 + 64) = 1;
  *(uint32_t *)(v2 + 72) = 0;
  sub_7E5ED0((gameswf::Self **)(v2 + 68), nullptr);
  *(uint32_t *)(v2 + 80) = 0;
  sub_7E5ED0((gameswf::Self **)(v2 + 76), nullptr);
  *(uint8_t *)(*((uint32_t *)self + 14) + 60) = 1;
  return *((uint32_t *)self + 14);
}

// ----------------------------------------------------------------------------
// Function: gameswf::AS3Engine::getModel3DEvent  (binary VA: 0x117d460)
// Original: gameswf::AS3Engine::getModel3DEvent
// ----------------------------------------------------------------------------
int gameswf::AS3Engine::getModel3DEvent(gameswf::AS3Engine::Self *self, gameswf::Self **a2)
{
  int v2;

  v2 = *((uint32_t *)self + 15);
  gameswf::String::opAssign((gameswf::Self **)(v2 + 40), a2);
  *(uint8_t *)(v2 + 60) = 0;
  *(uint8_t *)(v2 + 61) = 0;
  *(uint32_t *)(v2 + 64) = 1;
  *(uint32_t *)(v2 + 72) = 0;
  sub_7E5ED0((gameswf::Self **)(v2 + 68), nullptr);
  *(uint32_t *)(v2 + 80) = 0;
  sub_7E5ED0((gameswf::Self **)(v2 + 76), nullptr);
  return *((uint32_t *)self + 15);
}

// ----------------------------------------------------------------------------
// Function: gameswf::AS3Engine::registerTopLevelPackage  (binary VA: 0x117ea80)
// Original: gameswf::AS3Engine::registerTopLevelPackage
// ----------------------------------------------------------------------------
int gameswf::AS3Engine::registerTopLevelPackage(gameswf::AS3Engine::Self *self, int a2, int a3, gameswf::ASClass::Self *a4, int a5, gameswf::Self *a6, gameswf::ASPackage::Self *a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, unsigned int a38, int a39, int a40, unsigned int a41)
{
  uint8_t STACK[1219] = {0};
  gameswf::Player::Self *v41;
  gameswf::Self *v42;
  gameswf::Player::Self *v43;
  gameswf::Self *v44;
  gameswf::Player::Self *v45;
  gameswf::Self *v46;
  unsigned int v47;
  gameswf::Player::Self *v48;
  gameswf::Self *v49;
  gameswf::Player::Self *v50;
  gameswf::Self *v51;
  unsigned int v52;
  gameswf::Player::Self *v53;
  gameswf::Self *v54;
  unsigned int v55;
  gameswf::Player::Self *v56;
  gameswf::Self *v57;
  int v58;
  gameswf::Player::Self *v59;
  gameswf::Self *v60;
  int v61;
  gameswf::Player::Self *v62;
  gameswf::Self *v63;
  int v64;
  gameswf::Player::Self *v65;
  gameswf::Self *v66;
  unsigned int v67;
  gameswf::ASArray::Self *v68;
  gameswf::Self **Class;
  gameswf::Self *v70;
  gameswf::RefCounted::Self *v71;
  gameswf::RefCounted::Self *v72;
  gameswf::Player::Self *v73;
  gameswf::Self *v74;
  gameswf::Self **v75;
  gameswf::Self *v76;
  unsigned int v77;
  gameswf::Self *v78;
  unsigned int v79;
  typedef gameswf::Self **_g4_t_v81;
  typedef gameswf::Self **_g4_t_v82;
  typedef gameswf::Self **_g4_t_v83;
  typedef gameswf::Self **_g4_t_v84;
  typedef gameswf::Self **_g4_t_v85;
  typedef gameswf::Self **_g4_t_v86;
  typedef gameswf::Self **_g4_t_v87;
  typedef gameswf::Self **_g4_t_v88;
  typedef gameswf::Self **_g4_t_v89;
  typedef gameswf::Self **_g4_t_v90;
  typedef gameswf::Player::Self *_g4_t_v91;
  typedef gameswf::Player::Self *_g4_t_v92;
  typedef gameswf::Player::Self *_g4_t_v93;
  typedef gameswf::Player::Self *_g4_t_v94;
  typedef gameswf::Player::Self *_g4_t_v95;
  typedef gameswf::Player::Self *_g4_t_v96;
  typedef gameswf::Player::Self *_g4_t_v97;
  typedef gameswf::Player::Self *_g4_t_v98;
  typedef uint32_t *_g4_t_v99;
  typedef uint16_t _g4_t_v100[6];
  typedef uint8_t _g4_t_v101[12];
  typedef uint8_t _g4_t_v102[12];
  typedef uint8_t _g4_t_v103[12];
  typedef uint8_t _g4_t_v104[12];
  typedef uint8_t _g4_t_v105[12];
  typedef uint8_t _g4_t_v106[12];
  typedef uint8_t _g4_t_v107[12];
  typedef uint8_t _g4_t_v108[12];
  typedef uint8_t _g4_t_v109[36];
  typedef char _g4_t_v110;
  typedef char _g4_t_v111;
  typedef gameswf::Self *_g4_t_v112;
  typedef int16_t _g4_t_v113;
  typedef char _g4_t_v114;
  typedef char _g4_t_v115;
  typedef char _g4_t_v116;
  typedef char _g4_t_v117;
  typedef gameswf::Self *_g4_t_v118;
  typedef int16_t _g4_t_v119;
  typedef char _g4_t_v120;
  typedef char _g4_t_v121;
  typedef unsigned int _g4_t_v122[3];
  typedef gameswf::Self *_g4_t_v123;
  typedef unsigned int _g4_t_v124;
  typedef char _g4_t_v125;
  typedef char _g4_t_v126;
  typedef gameswf::Self *_g4_t_v127;
  typedef int16_t _g4_t_v128;
  typedef char _g4_t_v129;
  typedef char _g4_t_v130;
  typedef unsigned int _g4_t_v131[3];
  typedef gameswf::Self *_g4_t_v132;
  typedef unsigned int _g4_t_v133;
  typedef unsigned int _g4_t_v134[3];
  typedef gameswf::Self *_g4_t_v135;
  typedef unsigned int _g4_t_v136;
  typedef unsigned int _g4_t_v137[3];
  typedef gameswf::Self *_g4_t_v138;
  typedef unsigned int _g4_t_v139;
  typedef unsigned int _g4_t_v140[3];
  typedef gameswf::Self *_g4_t_v141;
  typedef unsigned int _g4_t_v142;
  typedef unsigned int _g4_t_v143[3];
  typedef gameswf::Self *_g4_t_v144;
  typedef unsigned int _g4_t_v145;
  typedef unsigned int _g4_t_v146[3];
  typedef gameswf::Self *_g4_t_v147;
  typedef unsigned int _g4_t_v148;
  typedef unsigned int _g4_t_v149[3];
  typedef gameswf::Self *_g4_t_v150;
  typedef int16_t _g4_t_v151;
  typedef char _g4_t_v152;
  typedef char _g4_t_v153;
  typedef gameswf::String::Self *_g4_t_v154;
  typedef const gameswf::String::Self *_g4_t_v155;
  typedef const gameswf::ASValue::Self *_g4_t_v156;
  enum : size_t {
    _g4_s0 = 672u,
    _g4_s1 = (0u + sizeof(_g4_t_v81)) > _g4_s0 ? (0u + sizeof(_g4_t_v81)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v82)) > _g4_s1 ? (0u + sizeof(_g4_t_v82)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v83)) > _g4_s2 ? (0u + sizeof(_g4_t_v83)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v84)) > _g4_s3 ? (0u + sizeof(_g4_t_v84)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v85)) > _g4_s4 ? (0u + sizeof(_g4_t_v85)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v86)) > _g4_s5 ? (0u + sizeof(_g4_t_v86)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_v87)) > _g4_s6 ? (0u + sizeof(_g4_t_v87)) : _g4_s6,
    _g4_s8 = (0u + sizeof(_g4_t_v88)) > _g4_s7 ? (0u + sizeof(_g4_t_v88)) : _g4_s7,
    _g4_s9 = (0u + sizeof(_g4_t_v89)) > _g4_s8 ? (0u + sizeof(_g4_t_v89)) : _g4_s8,
    _g4_s10 = (0u + sizeof(_g4_t_v90)) > _g4_s9 ? (0u + sizeof(_g4_t_v90)) : _g4_s9,
    _g4_s11 = (4u + sizeof(_g4_t_v91)) > _g4_s10 ? (4u + sizeof(_g4_t_v91)) : _g4_s10,
    _g4_s12 = (4u + sizeof(_g4_t_v92)) > _g4_s11 ? (4u + sizeof(_g4_t_v92)) : _g4_s11,
    _g4_s13 = (4u + sizeof(_g4_t_v93)) > _g4_s12 ? (4u + sizeof(_g4_t_v93)) : _g4_s12,
    _g4_s14 = (4u + sizeof(_g4_t_v94)) > _g4_s13 ? (4u + sizeof(_g4_t_v94)) : _g4_s13,
    _g4_s15 = (4u + sizeof(_g4_t_v95)) > _g4_s14 ? (4u + sizeof(_g4_t_v95)) : _g4_s14,
    _g4_s16 = (4u + sizeof(_g4_t_v96)) > _g4_s15 ? (4u + sizeof(_g4_t_v96)) : _g4_s15,
    _g4_s17 = (4u + sizeof(_g4_t_v97)) > _g4_s16 ? (4u + sizeof(_g4_t_v97)) : _g4_s16,
    _g4_s18 = (4u + sizeof(_g4_t_v98)) > _g4_s17 ? (4u + sizeof(_g4_t_v98)) : _g4_s17,
    _g4_s19 = (12u + sizeof(_g4_t_v99)) > _g4_s18 ? (12u + sizeof(_g4_t_v99)) : _g4_s18,
    _g4_s20 = (16u + sizeof(_g4_t_v100)) > _g4_s19 ? (16u + sizeof(_g4_t_v100)) : _g4_s19,
    _g4_s21 = (28u + sizeof(_g4_t_v101)) > _g4_s20 ? (28u + sizeof(_g4_t_v101)) : _g4_s20,
    _g4_s22 = (40u + sizeof(_g4_t_v102)) > _g4_s21 ? (40u + sizeof(_g4_t_v102)) : _g4_s21,
    _g4_s23 = (52u + sizeof(_g4_t_v103)) > _g4_s22 ? (52u + sizeof(_g4_t_v103)) : _g4_s22,
    _g4_s24 = (64u + sizeof(_g4_t_v104)) > _g4_s23 ? (64u + sizeof(_g4_t_v104)) : _g4_s23,
    _g4_s25 = (76u + sizeof(_g4_t_v105)) > _g4_s24 ? (76u + sizeof(_g4_t_v105)) : _g4_s24,
    _g4_s26 = (88u + sizeof(_g4_t_v106)) > _g4_s25 ? (88u + sizeof(_g4_t_v106)) : _g4_s25,
    _g4_s27 = (100u + sizeof(_g4_t_v107)) > _g4_s26 ? (100u + sizeof(_g4_t_v107)) : _g4_s26,
    _g4_s28 = (112u + sizeof(_g4_t_v108)) > _g4_s27 ? (112u + sizeof(_g4_t_v108)) : _g4_s27,
    _g4_s29 = (124u + sizeof(_g4_t_v109)) > _g4_s28 ? (124u + sizeof(_g4_t_v109)) : _g4_s28,
    _g4_s30 = (160u + sizeof(_g4_t_v110)) > _g4_s29 ? (160u + sizeof(_g4_t_v110)) : _g4_s29,
    _g4_s31 = (161u + sizeof(_g4_t_v111)) > _g4_s30 ? (161u + sizeof(_g4_t_v111)) : _g4_s30,
    _g4_s32 = (172u + sizeof(_g4_t_v112)) > _g4_s31 ? (172u + sizeof(_g4_t_v112)) : _g4_s31,
    _g4_s33 = (176u + sizeof(_g4_t_v113)) > _g4_s32 ? (176u + sizeof(_g4_t_v113)) : _g4_s32,
    _g4_s34 = (178u + sizeof(_g4_t_v114)) > _g4_s33 ? (178u + sizeof(_g4_t_v114)) : _g4_s33,
    _g4_s35 = (179u + sizeof(_g4_t_v115)) > _g4_s34 ? (179u + sizeof(_g4_t_v115)) : _g4_s34,
    _g4_s36 = (192u + sizeof(_g4_t_v116)) > _g4_s35 ? (192u + sizeof(_g4_t_v116)) : _g4_s35,
    _g4_s37 = (193u + sizeof(_g4_t_v117)) > _g4_s36 ? (193u + sizeof(_g4_t_v117)) : _g4_s36,
    _g4_s38 = (204u + sizeof(_g4_t_v118)) > _g4_s37 ? (204u + sizeof(_g4_t_v118)) : _g4_s37,
    _g4_s39 = (208u + sizeof(_g4_t_v119)) > _g4_s38 ? (208u + sizeof(_g4_t_v119)) : _g4_s38,
    _g4_s40 = (210u + sizeof(_g4_t_v120)) > _g4_s39 ? (210u + sizeof(_g4_t_v120)) : _g4_s39,
    _g4_s41 = (211u + sizeof(_g4_t_v121)) > _g4_s40 ? (211u + sizeof(_g4_t_v121)) : _g4_s40,
    _g4_s42 = (224u + sizeof(_g4_t_v122)) > _g4_s41 ? (224u + sizeof(_g4_t_v122)) : _g4_s41,
    _g4_s43 = (236u + sizeof(_g4_t_v123)) > _g4_s42 ? (236u + sizeof(_g4_t_v123)) : _g4_s42,
    _g4_s44 = (240u + sizeof(_g4_t_v124)) > _g4_s43 ? (240u + sizeof(_g4_t_v124)) : _g4_s43,
    _g4_s45 = (256u + sizeof(_g4_t_v125)) > _g4_s44 ? (256u + sizeof(_g4_t_v125)) : _g4_s44,
    _g4_s46 = (257u + sizeof(_g4_t_v126)) > _g4_s45 ? (257u + sizeof(_g4_t_v126)) : _g4_s45,
    _g4_s47 = (268u + sizeof(_g4_t_v127)) > _g4_s46 ? (268u + sizeof(_g4_t_v127)) : _g4_s46,
    _g4_s48 = (272u + sizeof(_g4_t_v128)) > _g4_s47 ? (272u + sizeof(_g4_t_v128)) : _g4_s47,
    _g4_s49 = (274u + sizeof(_g4_t_v129)) > _g4_s48 ? (274u + sizeof(_g4_t_v129)) : _g4_s48,
    _g4_s50 = (275u + sizeof(_g4_t_v130)) > _g4_s49 ? (275u + sizeof(_g4_t_v130)) : _g4_s49,
    _g4_s51 = (288u + sizeof(_g4_t_v131)) > _g4_s50 ? (288u + sizeof(_g4_t_v131)) : _g4_s50,
    _g4_s52 = (300u + sizeof(_g4_t_v132)) > _g4_s51 ? (300u + sizeof(_g4_t_v132)) : _g4_s51,
    _g4_s53 = (304u + sizeof(_g4_t_v133)) > _g4_s52 ? (304u + sizeof(_g4_t_v133)) : _g4_s52,
    _g4_s54 = (320u + sizeof(_g4_t_v134)) > _g4_s53 ? (320u + sizeof(_g4_t_v134)) : _g4_s53,
    _g4_s55 = (332u + sizeof(_g4_t_v135)) > _g4_s54 ? (332u + sizeof(_g4_t_v135)) : _g4_s54,
    _g4_s56 = (336u + sizeof(_g4_t_v136)) > _g4_s55 ? (336u + sizeof(_g4_t_v136)) : _g4_s55,
    _g4_s57 = (352u + sizeof(_g4_t_v137)) > _g4_s56 ? (352u + sizeof(_g4_t_v137)) : _g4_s56,
    _g4_s58 = (364u + sizeof(_g4_t_v138)) > _g4_s57 ? (364u + sizeof(_g4_t_v138)) : _g4_s57,
    _g4_s59 = (368u + sizeof(_g4_t_v139)) > _g4_s58 ? (368u + sizeof(_g4_t_v139)) : _g4_s58,
    _g4_s60 = (384u + sizeof(_g4_t_v140)) > _g4_s59 ? (384u + sizeof(_g4_t_v140)) : _g4_s59,
    _g4_s61 = (396u + sizeof(_g4_t_v141)) > _g4_s60 ? (396u + sizeof(_g4_t_v141)) : _g4_s60,
    _g4_s62 = (400u + sizeof(_g4_t_v142)) > _g4_s61 ? (400u + sizeof(_g4_t_v142)) : _g4_s61,
    _g4_s63 = (416u + sizeof(_g4_t_v143)) > _g4_s62 ? (416u + sizeof(_g4_t_v143)) : _g4_s62,
    _g4_s64 = (428u + sizeof(_g4_t_v144)) > _g4_s63 ? (428u + sizeof(_g4_t_v144)) : _g4_s63,
    _g4_s65 = (432u + sizeof(_g4_t_v145)) > _g4_s64 ? (432u + sizeof(_g4_t_v145)) : _g4_s64,
    _g4_s66 = (448u + sizeof(_g4_t_v146)) > _g4_s65 ? (448u + sizeof(_g4_t_v146)) : _g4_s65,
    _g4_s67 = (460u + sizeof(_g4_t_v147)) > _g4_s66 ? (460u + sizeof(_g4_t_v147)) : _g4_s66,
    _g4_s68 = (464u + sizeof(_g4_t_v148)) > _g4_s67 ? (464u + sizeof(_g4_t_v148)) : _g4_s67,
    _g4_s69 = (480u + sizeof(_g4_t_v149)) > _g4_s68 ? (480u + sizeof(_g4_t_v149)) : _g4_s68,
    _g4_s70 = (492u + sizeof(_g4_t_v150)) > _g4_s69 ? (492u + sizeof(_g4_t_v150)) : _g4_s69,
    _g4_s71 = (496u + sizeof(_g4_t_v151)) > _g4_s70 ? (496u + sizeof(_g4_t_v151)) : _g4_s70,
    _g4_s72 = (498u + sizeof(_g4_t_v152)) > _g4_s71 ? (498u + sizeof(_g4_t_v152)) : _g4_s71,
    _g4_s73 = (499u + sizeof(_g4_t_v153)) > _g4_s72 ? (499u + sizeof(_g4_t_v153)) : _g4_s72,
    _g4_s74 = (576u + sizeof(_g4_t_v154)) > _g4_s73 ? (576u + sizeof(_g4_t_v154)) : _g4_s73,
    _g4_s75 = (580u + sizeof(_g4_t_v155)) > _g4_s74 ? (580u + sizeof(_g4_t_v155)) : _g4_s74,
    _g4_s76 = (584u + sizeof(_g4_t_v156)) > _g4_s75 ? (584u + sizeof(_g4_t_v156)) : _g4_s75
  };
  alignas(16) uint8_t _g4_sf[_g4_s76];
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 0u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 0u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 0u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 0u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 0u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 0u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 0u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 0u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 0u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 0u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 4u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 4u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 4u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 4u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 4u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 4u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 4u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 4u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 12u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 16u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 28u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 40u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 52u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 64u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 76u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 88u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 100u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 112u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 124u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 160u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 161u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 172u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 176u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 178u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 179u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 192u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 193u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 204u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 208u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 210u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 211u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 224u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 236u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 240u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 256u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 257u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 268u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 272u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 274u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 275u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 288u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 300u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 304u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 320u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 332u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 336u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 352u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 364u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 368u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 384u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 396u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 400u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 416u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 428u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 432u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 448u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 460u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 464u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 480u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 492u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 496u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 498u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 499u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 576u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 580u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 584u);

  v41 = *((gameswf::Player::Self **)self + 2);
  if ( v41 != nullptr && *(uint8_t *)(*((uint32_t *)self + 1) + 2) == 0 )
  {
    v41 = nullptr;
    sub_7E5ED0((gameswf::Self **)self + 1, nullptr);
    *((uint32_t *)self + 2) = 0;
  }
  v110 = 1;
  v111 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v110, 0);
  v42 = (gameswf::Self *)&v111;
  if ( v110 == -1 )
    v42 = v112;
  gameswf::Strcpy_s(v42, (char *)&dword_0 + 1, (gameswf::Self *)&unk_1B15112);
  v113 = -1;
  v114 = 127;
  v115 |= 1u;
  v99 = (uint32_t *)opNew(0x44u);
  gameswf::ASObject::ASObject((gameswf::ASObject::Self *)v99, v41);
  *v99 = ((uint32_t)(uintptr_t)&off_2091688);
  v99[10] = 0;
  v99[11] = 0;
  sub_7763C0((gameswf::String::Self *)(v99 + 12), &v110);
  if ( v110 == -1 && (v115 & 1) != 0 )
    gameswf::free_internal(v112);
  v43 = *((gameswf::Player::Self **)self + 2);
  if ( v43 != nullptr && *(uint8_t *)(*((uint32_t *)self + 1) + 2) == 0 )
  {
    v43 = nullptr;
    sub_7E5ED0((gameswf::Self **)self + 1, nullptr);
    *((uint32_t *)self + 2) = 0;
  }
  v116 = 1;
  v117 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v116, 5);
  v44 = (gameswf::Self *)&v117;
  if ( v116 == -1 )
    v44 = v118;
  gameswf::Strcpy_s(v44, (char *)&loc_6, (gameswf::Self *)"Class");
  v100[0] = 2;
  v119 = -1;
  *(uint64_t *)&v100[2] = 0;
  v120 = 127;
  v121 |= 1u;
  v81 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(v81, v43, (const gameswf::String::Self *)&v116, nullptr, (const gameswf::ASValue::Self *)v100, false);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v99, (gameswf::ASClass::Self *)v81);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v100);
  if ( v116 == -1 && (v121 & 1) != 0 )
    gameswf::free_internal(v118);
  v45 = *((gameswf::Player::Self **)self + 2);
  if ( v45 != nullptr && *(uint8_t *)(*((uint32_t *)self + 1) + 2) == 0 )
  {
    sub_7E5ED0((gameswf::Self **)self + 1, nullptr);
    *((uint32_t *)self + 2) = 0;
    v45 = nullptr;
  }
  v91 = v45;
  LOWORD(v122[0]) = 1;
  gameswf::String::resize((gameswf::String::Self *)v122, 6);
  v46 = (gameswf::Self *)((char *)v122 + 1);
  if ( LOBYTE(v122[0]) == 0xFF )
    v46 = v123;
  gameswf::Strcpy_s(v46, (char *)&loc_6 + 1, (gameswf::Self *)"Object");
  v101[0] = 0;
  v101[1] = 0;
  v124 |= 0x7FFFFFu;
  v47 = HIWORD(v124);
  HIBYTE(v124) |= 1u;
  BYTE2(v124) = v47 & 0x7F;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v101, (int)(uintptr_t)(gameswf::ASObject::init));
  v82 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v82,
    v91,
    (const gameswf::String::Self *)v122,
    gameswf::ASObject::newOp,
    (const gameswf::ASValue::Self *)v101,
    false);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v99, (gameswf::ASClass::Self *)v82);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v101);
  if ( LOBYTE(v122[0]) == 0xFF && (v124 & 0x1000000) != 0 )
    gameswf::free_internal(v123);
  v48 = *((gameswf::Player::Self **)self + 2);
  if ( v48 != nullptr && *(uint8_t *)(*((uint32_t *)self + 1) + 2) == 0 )
  {
    v48 = nullptr;
    sub_7E5ED0((gameswf::Self **)self + 1, nullptr);
    *((uint32_t *)self + 2) = 0;
  }
  v125 = 1;
  v126 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v125, 8);
  v49 = (gameswf::Self *)&v126;
  if ( v125 == -1 )
    v49 = v127;
  gameswf::Strcpy_s(v49, byte_9, (gameswf::Self *)"Function");
  v102[0] = 0;
  v102[1] = 0;
  v128 = -1;
  v129 = 127;
  v130 |= 1u;
  v83 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(v83, v48, (const gameswf::String::Self *)&v125, nullptr, (const gameswf::ASValue::Self *)v102, false);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v99, (gameswf::ASClass::Self *)v83);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v102);
  if ( v125 == -1 && (v130 & 1) != 0 )
    gameswf::free_internal(v127);
  v50 = *((gameswf::Player::Self **)self + 2);
  if ( v50 != nullptr && *(uint8_t *)(*((uint32_t *)self + 1) + 2) == 0 )
  {
    sub_7E5ED0((gameswf::Self **)self + 1, nullptr);
    *((uint32_t *)self + 2) = 0;
    v50 = nullptr;
  }
  v92 = v50;
  LOWORD(v131[0]) = 1;
  gameswf::String::resize((gameswf::String::Self *)v131, 5);
  v51 = (gameswf::Self *)((char *)v131 + 1);
  if ( LOBYTE(v131[0]) == 0xFF )
    v51 = v132;
  gameswf::Strcpy_s(v51, (char *)&loc_6, (gameswf::Self *)"Error");
  v103[0] = 0;
  v103[1] = 0;
  v133 |= 0x7FFFFFu;
  v52 = HIWORD(v133);
  HIBYTE(v133) |= 1u;
  BYTE2(v133) = v52 & 0x7F;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v103, (int)(uintptr_t)(gameswf::ASError::init));
  v84 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v84,
    v92,
    (const gameswf::String::Self *)v131,
    (gameswf::ASObject::Self *(*)(gameswf::Player::Self *))gameswf::ASError::newOp,
    (const gameswf::ASValue::Self *)v103,
    false);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v99, (gameswf::ASClass::Self *)v84);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v103);
  if ( LOBYTE(v131[0]) == 0xFF && (v133 & 0x1000000) != 0 )
    gameswf::free_internal(v132);
  v53 = *((gameswf::Player::Self **)self + 2);
  if ( v53 != nullptr && *(uint8_t *)(*((uint32_t *)self + 1) + 2) == 0 )
  {
    sub_7E5ED0((gameswf::Self **)self + 1, nullptr);
    *((uint32_t *)self + 2) = 0;
    v53 = nullptr;
  }
  v93 = v53;
  LOWORD(v134[0]) = 1;
  gameswf::String::resize((gameswf::String::Self *)v134, 6);
  v54 = (gameswf::Self *)((char *)v134 + 1);
  if ( LOBYTE(v134[0]) == 0xFF )
    v54 = v135;
  gameswf::Strcpy_s(v54, (char *)&loc_6 + 1, (gameswf::Self *)"String");
  v104[0] = 0;
  v104[1] = 0;
  v136 |= 0x7FFFFFu;
  v55 = HIWORD(v136);
  HIBYTE(v136) |= 1u;
  BYTE2(v136) = v55 & 0x7F;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v104, (int)(uintptr_t)(gameswf::ASString::init));
  v85 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v85,
    v93,
    (const gameswf::String::Self *)v134,
    gameswf::ASObject::newOp,
    (const gameswf::ASValue::Self *)v104,
    false);
  gameswf::ASPackage::registerPrimitiveClass((gameswf::ASPackage::Self *)v99, (gameswf::ASClass::Self *)v85);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v104);
  if ( LOBYTE(v134[0]) == 0xFF && (v136 & 0x1000000) != 0 )
    gameswf::free_internal(v135);
  v56 = *((gameswf::Player::Self **)self + 2);
  if ( v56 != nullptr && *(uint8_t *)(*((uint32_t *)self + 1) + 2) == 0 )
  {
    sub_7E5ED0((gameswf::Self **)self + 1, nullptr);
    *((uint32_t *)self + 2) = 0;
    v56 = nullptr;
  }
  v94 = v56;
  LOWORD(v137[0]) = 1;
  gameswf::String::resize((gameswf::String::Self *)v137, 6);
  v57 = (gameswf::Self *)((char *)v137 + 1);
  if ( LOBYTE(v137[0]) == 0xFF )
    v57 = v138;
  gameswf::Strcpy_s(v57, (char *)&loc_6 + 1, (gameswf::Self *)"Number");
  v105[0] = 0;
  v105[1] = 0;
  v139 |= 0x7FFFFFu;
  v58 = HIBYTE(v139) | 1;
  BYTE2(v139) &= ~0x80u;
  HIBYTE(v139) = v58;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v105, (int)(uintptr_t)(gameswf::ASNumber::init));
  v86 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v86,
    v94,
    (const gameswf::String::Self *)v137,
    gameswf::ASObject::newOp,
    (const gameswf::ASValue::Self *)v105,
    false);
  gameswf::ASPackage::registerPrimitiveClass((gameswf::ASPackage::Self *)v99, (gameswf::ASClass::Self *)v86);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v105);
  if ( LOBYTE(v137[0]) == 0xFF && (v139 & 0x1000000) != 0 )
    gameswf::free_internal(v138);
  v59 = *((gameswf::Player::Self **)self + 2);
  if ( v59 != nullptr && *(uint8_t *)(*((uint32_t *)self + 1) + 2) == 0 )
  {
    sub_7E5ED0((gameswf::Self **)self + 1, nullptr);
    *((uint32_t *)self + 2) = 0;
    v59 = nullptr;
  }
  v95 = v59;
  LOWORD(v140[0]) = 1;
  gameswf::String::resize((gameswf::String::Self *)v140, 3);
  v60 = (gameswf::Self *)((char *)v140 + 1);
  if ( LOBYTE(v140[0]) == 0xFF )
    v60 = v141;
  gameswf::Strcpy_s(v60, (char *)&loc_4, (gameswf::Self *)"int");
  v106[0] = 0;
  v106[1] = 0;
  v142 |= 0x7FFFFFu;
  v61 = HIBYTE(v142) | 1;
  BYTE2(v142) &= ~0x80u;
  HIBYTE(v142) = v61;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v106, (int)(uintptr_t)(gameswf::ASNumber::init));
  v87 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v87,
    v95,
    (const gameswf::String::Self *)v140,
    gameswf::ASObject::newOp,
    (const gameswf::ASValue::Self *)v106,
    false);
  gameswf::ASPackage::registerPrimitiveClass((gameswf::ASPackage::Self *)v99, (gameswf::ASClass::Self *)v87);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v106);
  if ( LOBYTE(v140[0]) == 0xFF && (v142 & 0x1000000) != 0 )
    gameswf::free_internal(v141);
  v62 = *((gameswf::Player::Self **)self + 2);
  if ( v62 != nullptr && *(uint8_t *)(*((uint32_t *)self + 1) + 2) == 0 )
  {
    sub_7E5ED0((gameswf::Self **)self + 1, nullptr);
    *((uint32_t *)self + 2) = 0;
    v62 = nullptr;
  }
  v96 = v62;
  LOWORD(v143[0]) = 1;
  gameswf::String::resize((gameswf::String::Self *)v143, 4);
  v63 = (gameswf::Self *)((char *)v143 + 1);
  if ( LOBYTE(v143[0]) == 0xFF )
    v63 = v144;
  gameswf::Strcpy_s(v63, (char *)&loc_4 + 1, (gameswf::Self *)"uint");
  v107[0] = 0;
  v107[1] = 0;
  v145 |= 0x7FFFFFu;
  v64 = HIBYTE(v145) | 1;
  BYTE2(v145) &= ~0x80u;
  HIBYTE(v145) = v64;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v107, (int)(uintptr_t)(gameswf::ASNumber::init));
  v88 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v88,
    v96,
    (const gameswf::String::Self *)v143,
    gameswf::ASObject::newOp,
    (const gameswf::ASValue::Self *)v107,
    false);
  gameswf::ASPackage::registerPrimitiveClass((gameswf::ASPackage::Self *)v99, (gameswf::ASClass::Self *)v88);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v107);
  if ( LOBYTE(v143[0]) == 0xFF && (v145 & 0x1000000) != 0 )
    gameswf::free_internal(v144);
  v65 = *((gameswf::Player::Self **)self + 2);
  if ( v65 != nullptr && *(uint8_t *)(*((uint32_t *)self + 1) + 2) == 0 )
  {
    sub_7E5ED0((gameswf::Self **)self + 1, nullptr);
    *((uint32_t *)self + 2) = 0;
    v65 = nullptr;
  }
  v97 = v65;
  LOWORD(v146[0]) = 1;
  gameswf::String::resize((gameswf::String::Self *)v146, 7);
  v66 = (gameswf::Self *)((char *)v146 + 1);
  if ( LOBYTE(v146[0]) == 0xFF )
    v66 = v147;
  gameswf::Strcpy_s(v66, byte_8, (gameswf::Self *)"Boolean");
  v108[0] = 0;
  v108[1] = 0;
  v148 |= 0x7FFFFFu;
  v67 = HIWORD(v148);
  HIBYTE(v148) |= 1u;
  BYTE2(v148) = v67 & 0x7F;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v108, (int)(uintptr_t)(gameswf::ASBoolean::init));
  v89 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v89,
    v97,
    (const gameswf::String::Self *)v146,
    gameswf::ASObject::newOp,
    (const gameswf::ASValue::Self *)v108,
    false);
  gameswf::ASPackage::registerPrimitiveClass((gameswf::ASPackage::Self *)v99, (gameswf::ASClass::Self *)v89);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v108);
  if ( LOBYTE(v146[0]) == 0xFF && (v148 & 0x1000000) != 0 )
    gameswf::free_internal(v147);
  v68 = *((gameswf::ASArray::Self **)self + 2);
  if ( v68 != nullptr && *(uint8_t *)(*((uint32_t *)self + 1) + 2) == 0 )
  {
    sub_7E5ED0((gameswf::Self **)self + 1, nullptr);
    *((uint32_t *)self + 2) = 0;
    v68 = nullptr;
  }
  Class = gameswf::ASArray::createClass(v68);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v99, (gameswf::ASClass::Self *)Class);
  v70 = *((gameswf::Self **)self + 2);
  if ( v70 != nullptr && *(uint8_t *)(*((uint32_t *)self + 1) + 2) == 0 )
  {
    sub_7E5ED0((gameswf::Self **)self + 1, nullptr);
    *((uint32_t *)self + 2) = 0;
    v70 = nullptr;
  }
  v71 = (gameswf::RefCounted::Self *)(gameswf::mathInit(v70));
  v72 = v71;
  if ( v71 != nullptr )
    gameswf::RefCounted::addRef(v71);
  v73 = *((gameswf::Player::Self **)self + 2);
  if ( v73 != nullptr && *(uint8_t *)(*((uint32_t *)self + 1) + 2) == 0 )
  {
    sub_7E5ED0((gameswf::Self **)self + 1, nullptr);
    *((uint32_t *)self + 2) = 0;
    v73 = nullptr;
  }
  v98 = v73;
  LOWORD(v149[0]) = 1;
  gameswf::String::resize((gameswf::String::Self *)v149, 4);
  v74 = (gameswf::Self *)((char *)v149 + 1);
  if ( LOBYTE(v149[0]) == 0xFF )
    v74 = v150;
  gameswf::Strcpy_s(v74, (char *)&loc_4 + 1, (gameswf::Self *)"Math");
  v109[0] = 0;
  v109[1] = 0;
  v151 = -1;
  v152 = 127;
  v153 |= 1u;
  v90 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(v90, v98, (const gameswf::String::Self *)v149, nullptr, (const gameswf::ASValue::Self *)v109, false);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v109);
  v75 = v90;
  if ( LOBYTE(v149[0]) == 0xFF && (v153 & 1) != 0 )
  {
    gameswf::free_internal(v150);
    v75 = v90;
  }
  G4_VCALL<void>(v72, 80, v75);
  gameswf::ASPackage::registerClass(a7, a4);
  LOWORD(a38) = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)&a38, (int)(uintptr_t)(gameswf::ASGlobal::trace));
  LOBYTE(STACK[0x450]) = 1;
  v154 = (gameswf::String::Self *)&STACK[0x450];
  LOBYTE(STACK[0x451]) = 0;
  gameswf::String::resize(v154, 5);
  v76 = (gameswf::Self *)&STACK[0x451];
  if ( LOBYTE(STACK[0x450]) == 0xFF )
    v76 = (gameswf::Self *)STACK[0x45C];
  gameswf::Strcpy_s(v76, (char *)&loc_6, (gameswf::Self *)"trace");
  v77 = STACK[0x460] | 0x7FFFFF;
  v155 = (const gameswf::String::Self *)&STACK[0x450];
  STACK[0x460] = v77;
  LOBYTE(STACK[0x463]) = HIBYTE(v77) | 1;
  v156 = (const gameswf::ASValue::Self *)&a38;
  LOBYTE(STACK[0x462]) = BYTE2(v77) & 0x7F;
  gameswf::ASPackage::registerFunction(a7, v155, v156);
  if ( LOBYTE(STACK[0x450]) == 0xFF && (STACK[0x463] & 1) != 0 )
  {
    v155 = (const gameswf::String::Self *)STACK[0x458];
    gameswf::free_internal((gameswf::Self *)STACK[0x45C]);
  }
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&a38);
  LOWORD(a41) = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)&a41, (int)(uintptr_t)(gameswf::ASGlobal::toInt));
  LOBYTE(STACK[0x470]) = 1;
  v154 = (gameswf::String::Self *)&STACK[0x470];
  LOBYTE(STACK[0x471]) = 0;
  gameswf::String::resize(v154, 3);
  v78 = (gameswf::Self *)&STACK[0x471];
  if ( LOBYTE(STACK[0x470]) == 0xFF )
    v78 = (gameswf::Self *)STACK[0x47C];
  gameswf::Strcpy_s(v78, (char *)&loc_4, a6);
  v79 = STACK[0x480] | 0x7FFFFF;
  v155 = (const gameswf::String::Self *)&STACK[0x470];
  STACK[0x480] = v79;
  LOBYTE(STACK[0x483]) = HIBYTE(v79) | 1;
  v156 = (const gameswf::ASValue::Self *)&a41;
  LOBYTE(STACK[0x482]) = BYTE2(v79) & 0x7F;
  gameswf::ASPackage::registerFunction(a7, v155, v156);
  if ( LOBYTE(STACK[0x470]) == 0xFF && (STACK[0x483] & 1) != 0 )
  {
    v155 = (const gameswf::String::Self *)STACK[0x478];
    gameswf::free_internal((gameswf::Self *)STACK[0x47C]);
  }
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&a41);
  gameswf::ASClassManager::registerPackage(self, a7);
  return gameswf::RefCounted::dropRef(v72);
}

// ----------------------------------------------------------------------------
// Function: gameswf::AS3Engine::init  (binary VA: 0x1180030)
// Original: gameswf::AS3Engine::init
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::AS3Engine::init(gameswf::RefCounted::Self **self, gameswf::Player::Self *a2)
{
  gameswf::ASPackage::Self *inited;
  gameswf::ASPackage::Self *v3;
  gameswf::ASPackage::Self *v4;
  gameswf::ASPackage::Self *v5;
  gameswf::ASPackage::Self *v6;
  gameswf::ASPackage::Self *v7;
  gameswf::ASPackage::Self *v8;
  gameswf::ASPackage::Self *v9;
  gameswf::ASPackage::Self *v10;
  gameswf::ASPackage::Self *v11;
  gameswf::Self *v12;
  gameswf::Self *v13;
  gameswf::ASObject::Self *Object;
  gameswf::RefCounted::Self *v15;
  gameswf::RefCounted::Self *v16;
  gameswf::Self *v17;
  gameswf::Self *v18;
  gameswf::ASObject::Self *v19;
  gameswf::RefCounted::Self *v20;
  gameswf::RefCounted::Self *v21;
  gameswf::Self *v22;
  gameswf::Self *v23;
  gameswf::ASObject::Self *v24;
  gameswf::RefCounted::Self *v25;
  gameswf::RefCounted::Self *v26;
  gameswf::Self *v27;
  gameswf::Self *v28;
  gameswf::ASObject::Self *v29;
  gameswf::RefCounted::Self *v30;
  gameswf::RefCounted::Self *v31;
  gameswf::Self *v32;
  gameswf::Self *v33;
  gameswf::ASObject::Self *v34;
  gameswf::RefCounted::Self *v35;
  gameswf::RefCounted::Self *v36;
  gameswf::Self *v37;
  gameswf::Self *v38;
  gameswf::ASObject::Self *v39;
  gameswf::RefCounted::Self *v40;
  gameswf::RefCounted::Self *v41;
  gameswf::Self *v42;
  gameswf::Self *v43;
  gameswf::ASObject::Self *v44;
  gameswf::RefCounted::Self *v45;
  gameswf::RefCounted::Self *result;
  typedef int _g4_t_v47;
  typedef gameswf::Player::Self *_g4_t_v48;
  typedef gameswf::Player::Self *_g4_t_v49;
  typedef gameswf::Player::Self *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef gameswf::ASClass::Self *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef gameswf::Self *_g4_t_v54;
  typedef gameswf::ASPackage::Self *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57[3];
  typedef gameswf::Self *_g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63[3];
  typedef gameswf::Self *_g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69[3];
  typedef gameswf::Self *_g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75[3];
  typedef gameswf::Self *_g4_t_v76;
  typedef int _g4_t_v77;
  typedef unsigned int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef unsigned int _g4_t_v81[3];
  typedef gameswf::Self *_g4_t_v82;
  typedef int16_t _g4_t_v83;
  typedef char _g4_t_v84;
  typedef char _g4_t_v85;
  typedef char _g4_t_v86;
  typedef char _g4_t_v87;
  typedef gameswf::Self *_g4_t_v88;
  typedef int16_t _g4_t_v89;
  typedef char _g4_t_v90;
  typedef char _g4_t_v91;
  typedef char _g4_t_v92;
  typedef char _g4_t_v93;
  typedef gameswf::Self *_g4_t_v94;
  typedef int16_t _g4_t_v95;
  typedef char _g4_t_v96;
  typedef char _g4_t_v97;
  typedef char _g4_t_v98;
  typedef char _g4_t_v99;
  typedef gameswf::Self *_g4_t_v100;
  typedef int16_t _g4_t_v101;
  typedef char _g4_t_v102;
  typedef char _g4_t_v103;
  typedef char _g4_t_v104;
  typedef char _g4_t_v105;
  typedef gameswf::Self *_g4_t_v106;
  typedef int16_t _g4_t_v107;
  typedef char _g4_t_v108;
  typedef char _g4_t_v109;
  typedef char _g4_t_v110;
  typedef char _g4_t_v111;
  typedef gameswf::Self *_g4_t_v112;
  typedef int16_t _g4_t_v113;
  typedef char _g4_t_v114;
  typedef char _g4_t_v115;
  typedef char _g4_t_v116;
  typedef char _g4_t_v117;
  typedef gameswf::Self *_g4_t_v118;
  typedef int16_t _g4_t_v119;
  typedef char _g4_t_v120;
  typedef char _g4_t_v121;
  typedef char _g4_t_v122;
  typedef char _g4_t_v123;
  typedef gameswf::Self *_g4_t_v124;
  typedef int16_t _g4_t_v125;
  typedef char _g4_t_v126;
  typedef char _g4_t_v127;
  typedef char _g4_t_v128;
  typedef char _g4_t_v129;
  typedef gameswf::Self *_g4_t_v130;
  typedef int16_t _g4_t_v131;
  typedef char _g4_t_v132;
  typedef char _g4_t_v133;
  typedef char _g4_t_v134;
  typedef char _g4_t_v135;
  typedef gameswf::Self *_g4_t_v136;
  typedef int16_t _g4_t_v137;
  typedef char _g4_t_v138;
  typedef char _g4_t_v139;
  enum : size_t {
    _g4_s0 = 560u,
    _g4_s1 = (4u + sizeof(_g4_t_v47)) > _g4_s0 ? (4u + sizeof(_g4_t_v47)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v48)) > _g4_s1 ? (4u + sizeof(_g4_t_v48)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v49)) > _g4_s2 ? (4u + sizeof(_g4_t_v49)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v50)) > _g4_s3 ? (4u + sizeof(_g4_t_v50)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v51)) > _g4_s4 ? (8u + sizeof(_g4_t_v51)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v52)) > _g4_s5 ? (12u + sizeof(_g4_t_v52)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v53)) > _g4_s6 ? (16u + sizeof(_g4_t_v53)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v54)) > _g4_s7 ? (20u + sizeof(_g4_t_v54)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v55)) > _g4_s8 ? (24u + sizeof(_g4_t_v55)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v56)) > _g4_s9 ? (28u + sizeof(_g4_t_v56)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v57)) > _g4_s10 ? (32u + sizeof(_g4_t_v57)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v58)) > _g4_s11 ? (44u + sizeof(_g4_t_v58)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v59)) > _g4_s12 ? (48u + sizeof(_g4_t_v59)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v60)) > _g4_s13 ? (52u + sizeof(_g4_t_v60)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v61)) > _g4_s14 ? (56u + sizeof(_g4_t_v61)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v62)) > _g4_s15 ? (60u + sizeof(_g4_t_v62)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v63)) > _g4_s16 ? (64u + sizeof(_g4_t_v63)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v64)) > _g4_s17 ? (76u + sizeof(_g4_t_v64)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v65)) > _g4_s18 ? (80u + sizeof(_g4_t_v65)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v66)) > _g4_s19 ? (84u + sizeof(_g4_t_v66)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v67)) > _g4_s20 ? (88u + sizeof(_g4_t_v67)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v68)) > _g4_s21 ? (92u + sizeof(_g4_t_v68)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v69)) > _g4_s22 ? (96u + sizeof(_g4_t_v69)) : _g4_s22,
    _g4_s24 = (108u + sizeof(_g4_t_v70)) > _g4_s23 ? (108u + sizeof(_g4_t_v70)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v71)) > _g4_s24 ? (112u + sizeof(_g4_t_v71)) : _g4_s24,
    _g4_s26 = (116u + sizeof(_g4_t_v72)) > _g4_s25 ? (116u + sizeof(_g4_t_v72)) : _g4_s25,
    _g4_s27 = (120u + sizeof(_g4_t_v73)) > _g4_s26 ? (120u + sizeof(_g4_t_v73)) : _g4_s26,
    _g4_s28 = (124u + sizeof(_g4_t_v74)) > _g4_s27 ? (124u + sizeof(_g4_t_v74)) : _g4_s27,
    _g4_s29 = (128u + sizeof(_g4_t_v75)) > _g4_s28 ? (128u + sizeof(_g4_t_v75)) : _g4_s28,
    _g4_s30 = (140u + sizeof(_g4_t_v76)) > _g4_s29 ? (140u + sizeof(_g4_t_v76)) : _g4_s29,
    _g4_s31 = (144u + sizeof(_g4_t_v77)) > _g4_s30 ? (144u + sizeof(_g4_t_v77)) : _g4_s30,
    _g4_s32 = (148u + sizeof(_g4_t_v78)) > _g4_s31 ? (148u + sizeof(_g4_t_v78)) : _g4_s31,
    _g4_s33 = (152u + sizeof(_g4_t_v79)) > _g4_s32 ? (152u + sizeof(_g4_t_v79)) : _g4_s32,
    _g4_s34 = (156u + sizeof(_g4_t_v80)) > _g4_s33 ? (156u + sizeof(_g4_t_v80)) : _g4_s33,
    _g4_s35 = (160u + sizeof(_g4_t_v81)) > _g4_s34 ? (160u + sizeof(_g4_t_v81)) : _g4_s34,
    _g4_s36 = (172u + sizeof(_g4_t_v82)) > _g4_s35 ? (172u + sizeof(_g4_t_v82)) : _g4_s35,
    _g4_s37 = (176u + sizeof(_g4_t_v83)) > _g4_s36 ? (176u + sizeof(_g4_t_v83)) : _g4_s36,
    _g4_s38 = (178u + sizeof(_g4_t_v84)) > _g4_s37 ? (178u + sizeof(_g4_t_v84)) : _g4_s37,
    _g4_s39 = (179u + sizeof(_g4_t_v85)) > _g4_s38 ? (179u + sizeof(_g4_t_v85)) : _g4_s38,
    _g4_s40 = (192u + sizeof(_g4_t_v86)) > _g4_s39 ? (192u + sizeof(_g4_t_v86)) : _g4_s39,
    _g4_s41 = (193u + sizeof(_g4_t_v87)) > _g4_s40 ? (193u + sizeof(_g4_t_v87)) : _g4_s40,
    _g4_s42 = (204u + sizeof(_g4_t_v88)) > _g4_s41 ? (204u + sizeof(_g4_t_v88)) : _g4_s41,
    _g4_s43 = (208u + sizeof(_g4_t_v89)) > _g4_s42 ? (208u + sizeof(_g4_t_v89)) : _g4_s42,
    _g4_s44 = (210u + sizeof(_g4_t_v90)) > _g4_s43 ? (210u + sizeof(_g4_t_v90)) : _g4_s43,
    _g4_s45 = (211u + sizeof(_g4_t_v91)) > _g4_s44 ? (211u + sizeof(_g4_t_v91)) : _g4_s44,
    _g4_s46 = (224u + sizeof(_g4_t_v92)) > _g4_s45 ? (224u + sizeof(_g4_t_v92)) : _g4_s45,
    _g4_s47 = (225u + sizeof(_g4_t_v93)) > _g4_s46 ? (225u + sizeof(_g4_t_v93)) : _g4_s46,
    _g4_s48 = (236u + sizeof(_g4_t_v94)) > _g4_s47 ? (236u + sizeof(_g4_t_v94)) : _g4_s47,
    _g4_s49 = (240u + sizeof(_g4_t_v95)) > _g4_s48 ? (240u + sizeof(_g4_t_v95)) : _g4_s48,
    _g4_s50 = (242u + sizeof(_g4_t_v96)) > _g4_s49 ? (242u + sizeof(_g4_t_v96)) : _g4_s49,
    _g4_s51 = (243u + sizeof(_g4_t_v97)) > _g4_s50 ? (243u + sizeof(_g4_t_v97)) : _g4_s50,
    _g4_s52 = (256u + sizeof(_g4_t_v98)) > _g4_s51 ? (256u + sizeof(_g4_t_v98)) : _g4_s51,
    _g4_s53 = (257u + sizeof(_g4_t_v99)) > _g4_s52 ? (257u + sizeof(_g4_t_v99)) : _g4_s52,
    _g4_s54 = (268u + sizeof(_g4_t_v100)) > _g4_s53 ? (268u + sizeof(_g4_t_v100)) : _g4_s53,
    _g4_s55 = (272u + sizeof(_g4_t_v101)) > _g4_s54 ? (272u + sizeof(_g4_t_v101)) : _g4_s54,
    _g4_s56 = (274u + sizeof(_g4_t_v102)) > _g4_s55 ? (274u + sizeof(_g4_t_v102)) : _g4_s55,
    _g4_s57 = (275u + sizeof(_g4_t_v103)) > _g4_s56 ? (275u + sizeof(_g4_t_v103)) : _g4_s56,
    _g4_s58 = (288u + sizeof(_g4_t_v104)) > _g4_s57 ? (288u + sizeof(_g4_t_v104)) : _g4_s57,
    _g4_s59 = (289u + sizeof(_g4_t_v105)) > _g4_s58 ? (289u + sizeof(_g4_t_v105)) : _g4_s58,
    _g4_s60 = (300u + sizeof(_g4_t_v106)) > _g4_s59 ? (300u + sizeof(_g4_t_v106)) : _g4_s59,
    _g4_s61 = (304u + sizeof(_g4_t_v107)) > _g4_s60 ? (304u + sizeof(_g4_t_v107)) : _g4_s60,
    _g4_s62 = (306u + sizeof(_g4_t_v108)) > _g4_s61 ? (306u + sizeof(_g4_t_v108)) : _g4_s61,
    _g4_s63 = (307u + sizeof(_g4_t_v109)) > _g4_s62 ? (307u + sizeof(_g4_t_v109)) : _g4_s62,
    _g4_s64 = (320u + sizeof(_g4_t_v110)) > _g4_s63 ? (320u + sizeof(_g4_t_v110)) : _g4_s63,
    _g4_s65 = (321u + sizeof(_g4_t_v111)) > _g4_s64 ? (321u + sizeof(_g4_t_v111)) : _g4_s64,
    _g4_s66 = (332u + sizeof(_g4_t_v112)) > _g4_s65 ? (332u + sizeof(_g4_t_v112)) : _g4_s65,
    _g4_s67 = (336u + sizeof(_g4_t_v113)) > _g4_s66 ? (336u + sizeof(_g4_t_v113)) : _g4_s66,
    _g4_s68 = (338u + sizeof(_g4_t_v114)) > _g4_s67 ? (338u + sizeof(_g4_t_v114)) : _g4_s67,
    _g4_s69 = (339u + sizeof(_g4_t_v115)) > _g4_s68 ? (339u + sizeof(_g4_t_v115)) : _g4_s68,
    _g4_s70 = (352u + sizeof(_g4_t_v116)) > _g4_s69 ? (352u + sizeof(_g4_t_v116)) : _g4_s69,
    _g4_s71 = (353u + sizeof(_g4_t_v117)) > _g4_s70 ? (353u + sizeof(_g4_t_v117)) : _g4_s70,
    _g4_s72 = (364u + sizeof(_g4_t_v118)) > _g4_s71 ? (364u + sizeof(_g4_t_v118)) : _g4_s71,
    _g4_s73 = (368u + sizeof(_g4_t_v119)) > _g4_s72 ? (368u + sizeof(_g4_t_v119)) : _g4_s72,
    _g4_s74 = (370u + sizeof(_g4_t_v120)) > _g4_s73 ? (370u + sizeof(_g4_t_v120)) : _g4_s73,
    _g4_s75 = (371u + sizeof(_g4_t_v121)) > _g4_s74 ? (371u + sizeof(_g4_t_v121)) : _g4_s74,
    _g4_s76 = (384u + sizeof(_g4_t_v122)) > _g4_s75 ? (384u + sizeof(_g4_t_v122)) : _g4_s75,
    _g4_s77 = (385u + sizeof(_g4_t_v123)) > _g4_s76 ? (385u + sizeof(_g4_t_v123)) : _g4_s76,
    _g4_s78 = (396u + sizeof(_g4_t_v124)) > _g4_s77 ? (396u + sizeof(_g4_t_v124)) : _g4_s77,
    _g4_s79 = (400u + sizeof(_g4_t_v125)) > _g4_s78 ? (400u + sizeof(_g4_t_v125)) : _g4_s78,
    _g4_s80 = (402u + sizeof(_g4_t_v126)) > _g4_s79 ? (402u + sizeof(_g4_t_v126)) : _g4_s79,
    _g4_s81 = (403u + sizeof(_g4_t_v127)) > _g4_s80 ? (403u + sizeof(_g4_t_v127)) : _g4_s80,
    _g4_s82 = (416u + sizeof(_g4_t_v128)) > _g4_s81 ? (416u + sizeof(_g4_t_v128)) : _g4_s81,
    _g4_s83 = (417u + sizeof(_g4_t_v129)) > _g4_s82 ? (417u + sizeof(_g4_t_v129)) : _g4_s82,
    _g4_s84 = (428u + sizeof(_g4_t_v130)) > _g4_s83 ? (428u + sizeof(_g4_t_v130)) : _g4_s83,
    _g4_s85 = (432u + sizeof(_g4_t_v131)) > _g4_s84 ? (432u + sizeof(_g4_t_v131)) : _g4_s84,
    _g4_s86 = (434u + sizeof(_g4_t_v132)) > _g4_s85 ? (434u + sizeof(_g4_t_v132)) : _g4_s85,
    _g4_s87 = (435u + sizeof(_g4_t_v133)) > _g4_s86 ? (435u + sizeof(_g4_t_v133)) : _g4_s86,
    _g4_s88 = (448u + sizeof(_g4_t_v134)) > _g4_s87 ? (448u + sizeof(_g4_t_v134)) : _g4_s87,
    _g4_s89 = (449u + sizeof(_g4_t_v135)) > _g4_s88 ? (449u + sizeof(_g4_t_v135)) : _g4_s88,
    _g4_s90 = (460u + sizeof(_g4_t_v136)) > _g4_s89 ? (460u + sizeof(_g4_t_v136)) : _g4_s89,
    _g4_s91 = (464u + sizeof(_g4_t_v137)) > _g4_s90 ? (464u + sizeof(_g4_t_v137)) : _g4_s90,
    _g4_s92 = (466u + sizeof(_g4_t_v138)) > _g4_s91 ? (466u + sizeof(_g4_t_v138)) : _g4_s91,
    _g4_s93 = (467u + sizeof(_g4_t_v139)) > _g4_s92 ? (467u + sizeof(_g4_t_v139)) : _g4_s92
  };
  alignas(16) uint8_t _g4_sf[_g4_s93];
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 4u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 4u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 4u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 4u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 8u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 12u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 16u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 20u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 24u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 28u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 32u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 44u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 48u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 52u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 56u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 60u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 64u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 76u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 80u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 84u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 88u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 92u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 96u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 108u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 112u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 116u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 120u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 124u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 128u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 140u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 144u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 148u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 152u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 156u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 160u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 172u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 176u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 178u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 179u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 192u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 193u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 204u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 208u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 210u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 211u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 224u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 225u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 236u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 240u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 242u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 243u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 256u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 257u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 268u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 272u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 274u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 275u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 288u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 289u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 300u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 304u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 306u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 307u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 320u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 321u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 332u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 336u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 338u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 339u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 352u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 353u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 364u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 368u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 370u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 371u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 384u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 385u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 396u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 400u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 402u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 403u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 416u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 417u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 428u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 432u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 434u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 435u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 448u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 449u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 460u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 464u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 466u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 467u);

  gameswf::ASClassManager::init((gameswf::ASClassManager::Self *)self, a2);
  gameswf::AS3Engine::registerTopLevelPackage(
    (gameswf::AS3Engine::Self *)self,
    v47,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57[0],
    v57[1],
    v57[2],
    (int)(uintptr_t)(v58),
    v59,
    v60,
    v61,
    v62,
    v63[0],
    v63[1],
    v63[2],
    (int)(uintptr_t)(v64),
    v65,
    v66,
    v67,
    v68,
    v69[0],
    v69[1],
    v69[2],
    (int)(uintptr_t)(v70),
    v71,
    v72,
    v73,
    v74,
    v75[0],
    v75[1],
    v75[2],
    (int)(uintptr_t)(v76),
    v77,
    v78,
    v79,
    v80,
    v81[0]);
  inited = (gameswf::ASPackage::Self *)gameswf::eventsInitPackage(a2);
  gameswf::ASClassManager::registerPackage((gameswf::ASClassManager::Self *)self, inited);
  v3 = (gameswf::ASPackage::Self *)gameswf::displayInitPackage(a2);
  gameswf::ASClassManager::registerPackage((gameswf::ASClassManager::Self *)self, v3);
  v4 = (gameswf::ASPackage::Self *)gameswf::textInitPackage(a2, v48);
  gameswf::ASClassManager::registerPackage((gameswf::ASClassManager::Self *)self, v4);
  v5 = (gameswf::ASPackage::Self *)gameswf::utilsInitPackage(a2);
  gameswf::ASClassManager::registerPackage((gameswf::ASClassManager::Self *)self, v5);
  v6 = (gameswf::ASPackage::Self *)gameswf::netInitPackage(a2, v49);
  gameswf::ASClassManager::registerPackage((gameswf::ASClassManager::Self *)self, v6);
  v7 = (gameswf::ASPackage::Self *)gameswf::geomInitPackage(a2);
  gameswf::ASClassManager::registerPackage((gameswf::ASClassManager::Self *)self, v7);
  v8 = (gameswf::ASPackage::Self *)gameswf::filtersInitPackage(a2);
  gameswf::ASClassManager::registerPackage((gameswf::ASClassManager::Self *)self, v8);
  v9 = (gameswf::ASPackage::Self *)gameswf::mediaInitPackage(a2);
  gameswf::ASClassManager::registerPackage((gameswf::ASClassManager::Self *)self, v9);
  v10 = (gameswf::ASPackage::Self *)gameswf::xmlInitPackage(a2, v50);
  gameswf::ASClassManager::registerPackage((gameswf::ASClassManager::Self *)self, v10);
  v11 = (gameswf::ASPackage::Self *)gameswf::extensionsInitPackage(a2);
  gameswf::ASClassManager::registerPackage((gameswf::ASClassManager::Self *)self, v11);
  LOWORD(v63[0]) = 1;
  gameswf::String::resize((gameswf::String::Self *)v63, 5);
  v12 = (gameswf::Self *)((char *)v63 + 1);
  if ( LOBYTE(v63[0]) == 0xFF )
    v12 = v64;
  gameswf::Strcpy_s(v12, (char *)&loc_6, (gameswf::Self *)"Event");
  LOWORD(v57[0]) = 1;
  LOWORD(v65) = -1;
  BYTE2(v65) = 127;
  HIBYTE(v65) |= 1u;
  gameswf::String::resize((gameswf::String::Self *)v57, 12);
  v13 = (gameswf::Self *)((char *)v57 + 1);
  if ( LOBYTE(v57[0]) == 0xFF )
    v13 = v58;
  gameswf::Strcpy_s(v13, &byte_9[4], (gameswf::Self *)"flash.events");
  LOWORD(v59) = -1;
  BYTE2(v59) = 127;
  HIBYTE(v59) |= 1u;
  Object = gameswf::ASClassManager::createObject(self, (const gameswf::String::Self *)v57, (const gameswf::String::Self *)v63);
  v15 = (gameswf::RefCounted::Self *)(Object);
  if ( Object != nullptr
    && G4_VCALL<uint8_t>(Object, 8, 51) == 0 )
  {
    v15 = nullptr;
  }
  v16 = *(self + 9);
  if ( v15 != v16 )
  {
    if ( v16 != nullptr )
      gameswf::RefCounted::dropRef(*(self + 9));
    *(self + 9) = v15;
    if ( v15 != nullptr )
      gameswf::RefCounted::addRef(v15);
  }
  if ( LOBYTE(v57[0]) == 0xFF && (v59 & 0x1000000) != 0 )
  {
    gameswf::free_internal(v58);
    if ( LOBYTE(v63[0]) != 0xFF )
      goto LABEL_15;
  }
  else if ( LOBYTE(v63[0]) != 0xFF )
  {
    goto LABEL_15;
  }
  if ( (v65 & 0x1000000) != 0 )
    gameswf::free_internal(v64);
LABEL_15:
  LOWORD(v75[0]) = 1;
  gameswf::String::resize((gameswf::String::Self *)v75, 10);
  v17 = (gameswf::Self *)((char *)v75 + 1);
  if ( LOBYTE(v75[0]) == 0xFF )
    v17 = v76;
  gameswf::Strcpy_s(v17, &byte_9[2], (gameswf::Self *)"MouseEvent");
  LOWORD(v69[0]) = 1;
  LOWORD(v77) = -1;
  BYTE2(v77) = 127;
  HIBYTE(v77) |= 1u;
  gameswf::String::resize((gameswf::String::Self *)v69, 12);
  v18 = (gameswf::Self *)((char *)v69 + 1);
  if ( LOBYTE(v69[0]) == 0xFF )
    v18 = v70;
  gameswf::Strcpy_s(v18, &byte_9[4], (gameswf::Self *)"flash.events");
  LOWORD(v71) = -1;
  BYTE2(v71) = 127;
  HIBYTE(v71) |= 1u;
  v19 = gameswf::ASClassManager::createObject(self, (const gameswf::String::Self *)v69, (const gameswf::String::Self *)v75);
  v20 = (gameswf::RefCounted::Self *)(v19);
  if ( v19 != nullptr && G4_VCALL<uint8_t>(v19, 8, 52) == 0 )
    v20 = nullptr;
  v21 = *(self + 10);
  if ( v20 != v21 )
  {
    if ( v21 != nullptr )
      gameswf::RefCounted::dropRef(*(self + 10));
    *(self + 10) = v20;
    if ( v20 != nullptr )
      gameswf::RefCounted::addRef(v20);
  }
  if ( LOBYTE(v69[0]) == 0xFF && (v71 & 0x1000000) != 0 )
    gameswf::free_internal(v70);
  if ( LOBYTE(v75[0]) == 0xFF && (v77 & 0x1000000) != 0 )
    gameswf::free_internal(v76);
  v86 = 1;
  v87 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v86, 13);
  v22 = (gameswf::Self *)&v87;
  if ( v86 == -1 )
    v22 = v88;
  gameswf::Strcpy_s(v22, &byte_9[5], (gameswf::Self *)"KeyboardEvent");
  LOWORD(v81[0]) = 1;
  v89 = -1;
  v90 = 127;
  v91 |= 1u;
  gameswf::String::resize((gameswf::String::Self *)v81, 12);
  v23 = (gameswf::Self *)((char *)v81 + 1);
  if ( LOBYTE(v81[0]) == 0xFF )
    v23 = v82;
  gameswf::Strcpy_s(v23, &byte_9[4], (gameswf::Self *)"flash.events");
  v83 = -1;
  v84 = 127;
  v85 |= 1u;
  v24 = gameswf::ASClassManager::createObject(self, (const gameswf::String::Self *)v81, (const gameswf::String::Self *)&v86);
  v25 = (gameswf::RefCounted::Self *)(v24);
  if ( v24 != nullptr && G4_VCALL<uint8_t>(v24, 8, 53) == 0 )
    v25 = nullptr;
  v26 = *(self + 11);
  if ( v25 != v26 )
  {
    if ( v26 != nullptr )
      gameswf::RefCounted::dropRef(*(self + 11));
    *(self + 11) = v25;
    if ( v25 != nullptr )
      gameswf::RefCounted::addRef(v25);
  }
  if ( LOBYTE(v81[0]) == 0xFF && (v85 & 1) != 0 )
    gameswf::free_internal(v82);
  if ( v86 == -1 && (v91 & 1) != 0 )
    gameswf::free_internal(v88);
  v98 = 1;
  v99 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v98, 10);
  v27 = (gameswf::Self *)&v99;
  if ( v98 == -1 )
    v27 = v100;
  gameswf::Strcpy_s(v27, &byte_9[2], (gameswf::Self *)"TimerEvent");
  v92 = 1;
  v101 = -1;
  v93 = 0;
  v102 = 127;
  v103 |= 1u;
  gameswf::String::resize((gameswf::String::Self *)&v92, 12);
  v28 = (gameswf::Self *)&v93;
  if ( v92 == -1 )
    v28 = v94;
  gameswf::Strcpy_s(v28, &byte_9[4], (gameswf::Self *)"flash.events");
  v95 = -1;
  v96 = 127;
  v97 |= 1u;
  v29 = gameswf::ASClassManager::createObject(self, (const gameswf::String::Self *)&v92, (const gameswf::String::Self *)&v98);
  v30 = (gameswf::RefCounted::Self *)(v29);
  if ( v29 != nullptr && G4_VCALL<uint8_t>(v29, 8, 54) == 0 )
    v30 = nullptr;
  v31 = *(self + 12);
  if ( v30 != v31 )
  {
    if ( v31 != nullptr )
      gameswf::RefCounted::dropRef(*(self + 12));
    *(self + 12) = v30;
    if ( v30 != nullptr )
      gameswf::RefCounted::addRef(v30);
  }
  if ( v92 == -1 && (v97 & 1) != 0 )
    gameswf::free_internal(v94);
  if ( v98 == -1 && (v103 & 1) != 0 )
    gameswf::free_internal(v100);
  v110 = 1;
  v111 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v110, 14);
  v32 = (gameswf::Self *)&v111;
  if ( v110 == -1 )
    v32 = v112;
  gameswf::Strcpy_s(v32, &byte_9[6], (gameswf::Self *)"NetStatusEvent");
  v104 = 1;
  v113 = -1;
  v105 = 0;
  v114 = 127;
  v115 |= 1u;
  gameswf::String::resize((gameswf::String::Self *)&v104, 12);
  v33 = (gameswf::Self *)&v105;
  if ( v104 == -1 )
    v33 = v106;
  gameswf::Strcpy_s(v33, &byte_9[4], (gameswf::Self *)"flash.events");
  v107 = -1;
  v108 = 127;
  v109 |= 1u;
  v34 = gameswf::ASClassManager::createObject(self, (const gameswf::String::Self *)&v104, (const gameswf::String::Self *)&v110);
  v35 = (gameswf::RefCounted::Self *)(v34);
  if ( v34 != nullptr && G4_VCALL<uint8_t>(v34, 8, 55) == 0 )
    v35 = nullptr;
  v36 = *(self + 13);
  if ( v35 != v36 )
  {
    if ( v36 != nullptr )
      gameswf::RefCounted::dropRef(*(self + 13));
    *(self + 13) = v35;
    if ( v35 != nullptr )
      gameswf::RefCounted::addRef(v35);
  }
  if ( v104 == -1 && (v109 & 1) != 0 )
    gameswf::free_internal(v106);
  if ( v110 == -1 && (v115 & 1) != 0 )
    gameswf::free_internal(v112);
  v122 = 1;
  v123 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v122, 10);
  v37 = (gameswf::Self *)&v123;
  if ( v122 == -1 )
    v37 = v124;
  gameswf::Strcpy_s(v37, &byte_9[2], (gameswf::Self *)"FocusEvent");
  v116 = 1;
  v125 = -1;
  v117 = 0;
  v126 = 127;
  v127 |= 1u;
  gameswf::String::resize((gameswf::String::Self *)&v116, 12);
  v38 = (gameswf::Self *)&v117;
  if ( v116 == -1 )
    v38 = v118;
  gameswf::Strcpy_s(v38, &byte_9[4], (gameswf::Self *)"flash.events");
  v119 = -1;
  v120 = 127;
  v121 |= 1u;
  v39 = gameswf::ASClassManager::createObject(self, (const gameswf::String::Self *)&v116, (const gameswf::String::Self *)&v122);
  v40 = (gameswf::RefCounted::Self *)(v39);
  if ( v39 != nullptr && G4_VCALL<uint8_t>(v39, 8, 56) == 0 )
    v40 = nullptr;
  v41 = *(self + 14);
  if ( v40 != v41 )
  {
    if ( v41 != nullptr )
      gameswf::RefCounted::dropRef(*(self + 14));
    *(self + 14) = v40;
    if ( v40 != nullptr )
      gameswf::RefCounted::addRef(v40);
  }
  if ( v116 == -1 && (v121 & 1) != 0 )
    gameswf::free_internal(v118);
  if ( v122 == -1 && (v127 & 1) != 0 )
    gameswf::free_internal(v124);
  v134 = 1;
  v135 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v134, 12);
  v42 = (gameswf::Self *)&v135;
  if ( v134 == -1 )
    v42 = v136;
  gameswf::Strcpy_s(v42, &byte_9[4], (gameswf::Self *)"Model3DEvent");
  v128 = 1;
  v137 = -1;
  v129 = 0;
  v138 = 127;
  v139 |= 1u;
  gameswf::String::resize((gameswf::String::Self *)&v128, 16);
  v43 = (gameswf::Self *)&v129;
  if ( v128 == -1 )
    v43 = v130;
  gameswf::Strcpy_s(v43, (char *)&word_10 + 1, (gameswf::Self *)"gluic.extensions");
  v131 = -1;
  v132 = 127;
  v133 |= 1u;
  v44 = gameswf::ASClassManager::createObject(self, (const gameswf::String::Self *)&v128, (const gameswf::String::Self *)&v134);
  v45 = (gameswf::RefCounted::Self *)(v44);
  if ( v44 != nullptr && G4_VCALL<uint8_t>(v44, 8, 69) == 0 )
    v45 = nullptr;
  result = *(self + 15);
  if ( v45 != result )
  {
    if ( result != nullptr )
      result = (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(*(self + 15));
    *(self + 15) = v45;
    if ( v45 != nullptr )
      result = gameswf::RefCounted::addRef(v45);
  }
  if ( v128 == -1 && (v133 & 1) != 0 )
    result = (gameswf::RefCounted::Self *)gameswf::free_internal(v130);
  if ( v134 == -1 && (v139 & 1) != 0 )
    return (gameswf::RefCounted::Self *)gameswf::free_internal(v136);
  return result;
}


