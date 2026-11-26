#include "Core/Utils/DecompTypes.h"
#include "gameswf_ArabicTextRules.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ArabicTextRules::hasOnlyIsolatedAndEndForms  (binary VA: 0x10fd430)
// Original: gameswf::ArabicTextRules::hasOnlyIsolatedAndEndForms
// ----------------------------------------------------------------------------
bool gameswf::ArabicTextRules::hasOnlyIsolatedAndEndForms(gameswf::ArabicTextRules::Self *self)
{
  bool result;

  result = true;
  if ( (uint16_t)((uint16_t)(uintptr_t)self - 1569) <= 0x29u )
    return gameswf::ArabicTextRules::s_suiLookUpTable[5 * (uint16_t)(uintptr_t)self - 7842] == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ArabicTextRules::replace  (binary VA: 0x10fd470)
// Original: gameswf::ArabicTextRules::replace
// ----------------------------------------------------------------------------
int gameswf::ArabicTextRules::replace(uint16_t a1, int a2)
{
  int result;

  result = a1;
  if ( (uint16_t)(a1 - 1569) <= 0x29u )
    return (uint16_t)gameswf::ArabicTextRules::s_suiLookUpTable[5 * a1 - 7845 + a2];
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ArabicTextRules::format  (binary VA: 0x10fd4b0)
// Original: gameswf::ArabicTextRules::format
// ----------------------------------------------------------------------------
void gameswf::ArabicTextRules::format(gameswf::ArabicTextRules::Self *self, uint16_t *a2, uint16_t *a3, int a4)
{
  uint16_t *v4;
  uint16_t *v6;
  uint16_t v7;
  bool v8; // cc
  int v9;
  int v10;
  char v11;
  uint16_t v12;
  char v13; // bp
  int v14;
  uint16_t *v15;
  uint16_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint16_t v19; // di
  int v20;
  uint16_t v21;
  uint32_t *v22;
  uint16_t *v23;
  int v24;
  int v25;
  char *v26;

  if ( (int)(uintptr_t)(a3) > 0 )
  {
    v4 = a2;
    v6 = nullptr;
    v23 = (uint16_t *)((char *)a3 - 1);
    while ( 1 )
    {
      while ( v6 != nullptr
           && !gameswf::ArabicTextRules::hasOnlyIsolatedAndEndForms((gameswf::ArabicTextRules::Self *)*((uint16_t *)self
                                                                                                - 1)) )
      {
        if ( gameswf::ArabicTextRules::hasOnlyIsolatedAndEndForms((gameswf::ArabicTextRules::Self *)*(uint16_t *)self)
          || v23 == v6
          || (uint16_t)((v21 = *((uint16_t *)self + 1)) - 32) <= 0xFu
          || (uint16_t)(v21 - 58) <= 5u
          || v21 == 160 )
        {
LABEL_16:
          v7 = gameswf::ArabicTextRules::replace(*(uint16_t *)self, 2);
          *v4 = v7;
          goto LABEL_8;
        }
        if ( v21 > 0xA0u )
        {
          if ( v21 == 171 || v21 == 187 )
            goto LABEL_16;
        }
        else if ( v21 == 10 || v21 == 13 )
        {
          goto LABEL_16;
        }
        v7 = gameswf::ArabicTextRules::replace(*(uint16_t *)self, 3);
        *v4 = v7;
LABEL_8:
        v8 = v7 <= 0x29u;
        if ( v7 == 41 )
          goto LABEL_19;
LABEL_9:
        if ( v8 )
        {
          if ( v7 == 40 )
            *v4 = 41;
        }
        else if ( v7 == 171 )
        {
          *v4 = 187;
        }
        else if ( v7 == 187 )
        {
          *v4 = 171;
        }
        v6 = (uint16_t *)((char *)v6 + 1);
        ++v4;
        self = (gameswf::ArabicTextRules::Self *)((char *)self + 2);
        if ( v6 == a3 )
        {
LABEL_20:
          v9 = 0;
          v24 = -1;
          v10 = -1;
          v11 = 0;
          v26 = (char *)a3 - 1;
          while ( 1 )
          {
            v12 = a2[v9];
            if ( (uint16_t)(v12 - 32) <= 0xFu )
              goto LABEL_57;
            v13 = 1;
            if ( (uint16_t)(v12 - 58) > 5u )
            {
              if ( v12 != 160 )
              {
                if ( v12 > 0xA0u )
                {
                  if ( v12 != 171 && v12 != 187 )
                  {
LABEL_27:
                    v13 = 0;
                    goto LABEL_28;
                  }
                }
                else if ( v12 != 10 && v12 != 13 )
                {
                  goto LABEL_27;
                }
              }
              v13 = 1;
            }
LABEL_28:
            if ( v12 <= 0x620u )
            {
              if ( v13 != 0 )
                goto LABEL_57;
              if ( v10 != -1 )
              {
                v24 = v9;
                v11 = 1;
LABEL_57:
                if ( v26 != (char *)v9 )
                  goto LABEL_36;
                goto LABEL_30;
              }
              v24 = v9;
              v10 = v9;
              v11 = 1;
              if ( v26 != (char *)v9 )
                goto LABEL_36;
            }
            else if ( v11 == 0 )
            {
              goto LABEL_57;
            }
LABEL_30:
            if ( v24 != v10 && v10 != -1 )
            {
              v14 = v24;
              v15 = &a2[v10];
              v16 = &a2[v24];
              if ( v15 < v16 )
              {
                v25 = v9;
                v22 = (uint32_t *)(a4 + 4 * v10);
                v17 = (uint32_t *)(a4 + 4 * v14);
                v18 = v22;
                do
                {
                  v19 = *v15;
                  *v15 = *v16;
                  *v16 = v19;
                  ++v15;
                  --v16;
                  v20 = *(uint16_t *)v18;
                  *v18 = *v17;
                  *v17 = v20;
                  ++v18;
                  --v17;
                }
                while ( v15 < v16 );
                v9 = v25;
                v10 = -1;
                v24 = -1;
                v11 = 0;
                goto LABEL_36;
              }
              v24 = -1;
              v10 = -1;
            }
            v11 = 0;
LABEL_36:
            if ( (uint16_t *)++v9 == a3 )
              return;
          }
        }
      }
      if ( v23 == v6 || *((uint16_t *)self + 1) <= 0x620u && v6 != nullptr && *((uint16_t *)self - 1) > 0x620u )
      {
        v7 = gameswf::ArabicTextRules::replace(*(uint16_t *)self, 1);
        *v4 = v7;
        goto LABEL_8;
      }
      if ( !gameswf::ArabicTextRules::hasOnlyIsolatedAndEndForms((gameswf::ArabicTextRules::Self *)*(uint16_t *)self) )
      {
        v7 = gameswf::ArabicTextRules::replace(*(uint16_t *)self, 4);
        *v4 = v7;
        goto LABEL_8;
      }
      v7 = *v4;
      v8 = *v4 <= 0x29u;
      if ( *v4 != 41 )
        goto LABEL_9;
LABEL_19:
      *v4 = 40;
      v6 = (uint16_t *)((char *)v6 + 1);
      ++v4;
      self = (gameswf::ArabicTextRules::Self *)((char *)self + 2);
      if ( v6 == a3 )
        goto LABEL_20;
    }
  }
}


