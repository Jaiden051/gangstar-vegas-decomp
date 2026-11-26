#include "Core/Utils/DecompTypes.h"
#include "openssl_crypto_ssl_part02.h"

// ----------------------------------------------------------------------------
// Function: ASN1_BIT_STRING_free  (binary VA: 0x198b690)
// Original: ASN1_BIT_STRING_free
// ----------------------------------------------------------------------------
int ASN1_BIT_STRING_free(char a1)
{
  return ASN1_item_free(a1, ASN1_BIT_STRING_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_ASN1_OCTET_STRING  (binary VA: 0x198b6c0)
// Original: d2i_ASN1_OCTET_STRING
// ----------------------------------------------------------------------------
int d2i_ASN1_OCTET_STRING(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&ASN1_OCTET_STRING_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_ASN1_OCTET_STRING  (binary VA: 0x198b700)
// Original: i2d_ASN1_OCTET_STRING
// ----------------------------------------------------------------------------
int i2d_ASN1_OCTET_STRING(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&ASN1_OCTET_STRING_it));
}

// ----------------------------------------------------------------------------
// Function: ASN1_OCTET_STRING_new  (binary VA: 0x198b740)
// Original: ASN1_OCTET_STRING_new
// ----------------------------------------------------------------------------
int ASN1_OCTET_STRING_new()
{
  return ASN1_item_new((int)(uintptr_t)(&ASN1_OCTET_STRING_it));
}

// ----------------------------------------------------------------------------
// Function: ASN1_OCTET_STRING_free  (binary VA: 0x198b770)
// Original: ASN1_OCTET_STRING_free
// ----------------------------------------------------------------------------
int ASN1_OCTET_STRING_free(char a1)
{
  return ASN1_item_free(a1, ASN1_OCTET_STRING_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_ASN1_NULL  (binary VA: 0x198b7a0)
// Original: d2i_ASN1_NULL
// ----------------------------------------------------------------------------
int d2i_ASN1_NULL(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&ASN1_NULL_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_ASN1_NULL  (binary VA: 0x198b7e0)
// Original: i2d_ASN1_NULL
// ----------------------------------------------------------------------------
int i2d_ASN1_NULL(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&ASN1_NULL_it));
}

// ----------------------------------------------------------------------------
// Function: ASN1_NULL_new  (binary VA: 0x198b820)
// Original: ASN1_NULL_new
// ----------------------------------------------------------------------------
int ASN1_NULL_new()
{
  return ASN1_item_new((int)(uintptr_t)(&ASN1_NULL_it));
}

// ----------------------------------------------------------------------------
// Function: ASN1_NULL_free  (binary VA: 0x198b850)
// Original: ASN1_NULL_free
// ----------------------------------------------------------------------------
int ASN1_NULL_free(char a1)
{
  return ASN1_item_free(a1, ASN1_NULL_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_ASN1_UTF8STRING  (binary VA: 0x198b880)
// Original: d2i_ASN1_UTF8STRING
// ----------------------------------------------------------------------------
int d2i_ASN1_UTF8STRING(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&ASN1_UTF8STRING_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_ASN1_UTF8STRING  (binary VA: 0x198b8c0)
// Original: i2d_ASN1_UTF8STRING
// ----------------------------------------------------------------------------
int i2d_ASN1_UTF8STRING(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&ASN1_UTF8STRING_it));
}

// ----------------------------------------------------------------------------
// Function: ASN1_UTF8STRING_new  (binary VA: 0x198b900)
// Original: ASN1_UTF8STRING_new
// ----------------------------------------------------------------------------
int ASN1_UTF8STRING_new()
{
  return ASN1_item_new((int)(uintptr_t)(&ASN1_UTF8STRING_it));
}

// ----------------------------------------------------------------------------
// Function: ASN1_UTF8STRING_free  (binary VA: 0x198b930)
// Original: ASN1_UTF8STRING_free
// ----------------------------------------------------------------------------
int ASN1_UTF8STRING_free(char a1)
{
  return ASN1_item_free(a1, ASN1_UTF8STRING_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_ASN1_PRINTABLESTRING  (binary VA: 0x198b960)
// Original: d2i_ASN1_PRINTABLESTRING
// ----------------------------------------------------------------------------
int d2i_ASN1_PRINTABLESTRING(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&ASN1_PRINTABLESTRING_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_ASN1_PRINTABLESTRING  (binary VA: 0x198b9a0)
// Original: i2d_ASN1_PRINTABLESTRING
// ----------------------------------------------------------------------------
int i2d_ASN1_PRINTABLESTRING(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&ASN1_PRINTABLESTRING_it));
}

// ----------------------------------------------------------------------------
// Function: ASN1_PRINTABLESTRING_new  (binary VA: 0x198b9e0)
// Original: ASN1_PRINTABLESTRING_new
// ----------------------------------------------------------------------------
int ASN1_PRINTABLESTRING_new()
{
  return ASN1_item_new((int)(uintptr_t)(&ASN1_PRINTABLESTRING_it));
}

// ----------------------------------------------------------------------------
// Function: ASN1_PRINTABLESTRING_free  (binary VA: 0x198ba10)
// Original: ASN1_PRINTABLESTRING_free
// ----------------------------------------------------------------------------
int ASN1_PRINTABLESTRING_free(char a1)
{
  return ASN1_item_free(a1, ASN1_PRINTABLESTRING_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_ASN1_T61STRING  (binary VA: 0x198ba40)
// Original: d2i_ASN1_T61STRING
// ----------------------------------------------------------------------------
int d2i_ASN1_T61STRING(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&ASN1_T61STRING_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_ASN1_T61STRING  (binary VA: 0x198ba80)
// Original: i2d_ASN1_T61STRING
// ----------------------------------------------------------------------------
int i2d_ASN1_T61STRING(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&ASN1_T61STRING_it));
}

// ----------------------------------------------------------------------------
// Function: ASN1_T61STRING_new  (binary VA: 0x198bac0)
// Original: ASN1_T61STRING_new
// ----------------------------------------------------------------------------
int ASN1_T61STRING_new()
{
  return ASN1_item_new((int)(uintptr_t)(&ASN1_T61STRING_it));
}

// ----------------------------------------------------------------------------
// Function: ASN1_T61STRING_free  (binary VA: 0x198baf0)
// Original: ASN1_T61STRING_free
// ----------------------------------------------------------------------------
int ASN1_T61STRING_free(char a1)
{
  return ASN1_item_free(a1, ASN1_T61STRING_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_ASN1_IA5STRING  (binary VA: 0x198bb20)
// Original: d2i_ASN1_IA5STRING
// ----------------------------------------------------------------------------
int d2i_ASN1_IA5STRING(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&ASN1_IA5STRING_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_ASN1_IA5STRING  (binary VA: 0x198bb60)
// Original: i2d_ASN1_IA5STRING
// ----------------------------------------------------------------------------
int i2d_ASN1_IA5STRING(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&ASN1_IA5STRING_it));
}

// ----------------------------------------------------------------------------
// Function: ASN1_IA5STRING_new  (binary VA: 0x198bba0)
// Original: ASN1_IA5STRING_new
// ----------------------------------------------------------------------------
int ASN1_IA5STRING_new()
{
  return ASN1_item_new((int)(uintptr_t)(&ASN1_IA5STRING_it));
}

// ----------------------------------------------------------------------------
// Function: ASN1_IA5STRING_free  (binary VA: 0x198bbd0)
// Original: ASN1_IA5STRING_free
// ----------------------------------------------------------------------------
int ASN1_IA5STRING_free(char a1)
{
  return ASN1_item_free(a1, ASN1_IA5STRING_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_ASN1_GENERALSTRING  (binary VA: 0x198bc00)
// Original: d2i_ASN1_GENERALSTRING
// ----------------------------------------------------------------------------
int d2i_ASN1_GENERALSTRING(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&ASN1_GENERALSTRING_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_ASN1_GENERALSTRING  (binary VA: 0x198bc40)
// Original: i2d_ASN1_GENERALSTRING
// ----------------------------------------------------------------------------
int i2d_ASN1_GENERALSTRING(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&ASN1_GENERALSTRING_it));
}

// ----------------------------------------------------------------------------
// Function: ASN1_GENERALSTRING_new  (binary VA: 0x198bc80)
// Original: ASN1_GENERALSTRING_new
// ----------------------------------------------------------------------------
int ASN1_GENERALSTRING_new()
{
  return ASN1_item_new((int)(uintptr_t)(&ASN1_GENERALSTRING_it));
}

// ----------------------------------------------------------------------------
// Function: ASN1_GENERALSTRING_free  (binary VA: 0x198bcb0)
// Original: ASN1_GENERALSTRING_free
// ----------------------------------------------------------------------------
int ASN1_GENERALSTRING_free(char a1)
{
  return ASN1_item_free(a1, ASN1_GENERALSTRING_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_ASN1_UTCTIME  (binary VA: 0x198bce0)
// Original: d2i_ASN1_UTCTIME
// ----------------------------------------------------------------------------
int d2i_ASN1_UTCTIME(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&ASN1_UTCTIME_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_ASN1_UTCTIME  (binary VA: 0x198bd20)
// Original: i2d_ASN1_UTCTIME
// ----------------------------------------------------------------------------
int i2d_ASN1_UTCTIME(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&ASN1_UTCTIME_it));
}

// ----------------------------------------------------------------------------
// Function: ASN1_UTCTIME_new  (binary VA: 0x198bd60)
// Original: ASN1_UTCTIME_new
// ----------------------------------------------------------------------------
int ASN1_UTCTIME_new()
{
  return ASN1_item_new((int)(uintptr_t)(&ASN1_UTCTIME_it));
}

// ----------------------------------------------------------------------------
// Function: ASN1_UTCTIME_free  (binary VA: 0x198bd90)
// Original: ASN1_UTCTIME_free
// ----------------------------------------------------------------------------
int ASN1_UTCTIME_free(char a1)
{
  return ASN1_item_free(a1, ASN1_UTCTIME_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_ASN1_GENERALIZEDTIME  (binary VA: 0x198bdc0)
// Original: d2i_ASN1_GENERALIZEDTIME
// ----------------------------------------------------------------------------
int d2i_ASN1_GENERALIZEDTIME(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&ASN1_GENERALIZEDTIME_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_ASN1_GENERALIZEDTIME  (binary VA: 0x198be00)
// Original: i2d_ASN1_GENERALIZEDTIME
// ----------------------------------------------------------------------------
int i2d_ASN1_GENERALIZEDTIME(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&ASN1_GENERALIZEDTIME_it));
}

// ----------------------------------------------------------------------------
// Function: ASN1_GENERALIZEDTIME_new  (binary VA: 0x198be40)
// Original: ASN1_GENERALIZEDTIME_new
// ----------------------------------------------------------------------------
int ASN1_GENERALIZEDTIME_new()
{
  return ASN1_item_new((int)(uintptr_t)(&ASN1_GENERALIZEDTIME_it));
}

// ----------------------------------------------------------------------------
// Function: ASN1_GENERALIZEDTIME_free  (binary VA: 0x198be70)
// Original: ASN1_GENERALIZEDTIME_free
// ----------------------------------------------------------------------------
int ASN1_GENERALIZEDTIME_free(char a1)
{
  return ASN1_item_free(a1, ASN1_GENERALIZEDTIME_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_ASN1_VISIBLESTRING  (binary VA: 0x198bea0)
// Original: d2i_ASN1_VISIBLESTRING
// ----------------------------------------------------------------------------
int d2i_ASN1_VISIBLESTRING(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&ASN1_VISIBLESTRING_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_ASN1_VISIBLESTRING  (binary VA: 0x198bee0)
// Original: i2d_ASN1_VISIBLESTRING
// ----------------------------------------------------------------------------
int i2d_ASN1_VISIBLESTRING(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&ASN1_VISIBLESTRING_it));
}

// ----------------------------------------------------------------------------
// Function: ASN1_VISIBLESTRING_new  (binary VA: 0x198bf20)
// Original: ASN1_VISIBLESTRING_new
// ----------------------------------------------------------------------------
int ASN1_VISIBLESTRING_new()
{
  return ASN1_item_new((int)(uintptr_t)(&ASN1_VISIBLESTRING_it));
}

// ----------------------------------------------------------------------------
// Function: ASN1_VISIBLESTRING_free  (binary VA: 0x198bf50)
// Original: ASN1_VISIBLESTRING_free
// ----------------------------------------------------------------------------
int ASN1_VISIBLESTRING_free(char a1)
{
  return ASN1_item_free(a1, ASN1_VISIBLESTRING_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_ASN1_UNIVERSALSTRING  (binary VA: 0x198bf80)
// Original: d2i_ASN1_UNIVERSALSTRING
// ----------------------------------------------------------------------------
int d2i_ASN1_UNIVERSALSTRING(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&ASN1_UNIVERSALSTRING_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_ASN1_UNIVERSALSTRING  (binary VA: 0x198bfc0)
// Original: i2d_ASN1_UNIVERSALSTRING
// ----------------------------------------------------------------------------
int i2d_ASN1_UNIVERSALSTRING(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&ASN1_UNIVERSALSTRING_it));
}

// ----------------------------------------------------------------------------
// Function: ASN1_UNIVERSALSTRING_new  (binary VA: 0x198c000)
// Original: ASN1_UNIVERSALSTRING_new
// ----------------------------------------------------------------------------
int ASN1_UNIVERSALSTRING_new()
{
  return ASN1_item_new((int)(uintptr_t)(&ASN1_UNIVERSALSTRING_it));
}

// ----------------------------------------------------------------------------
// Function: ASN1_UNIVERSALSTRING_free  (binary VA: 0x198c030)
// Original: ASN1_UNIVERSALSTRING_free
// ----------------------------------------------------------------------------
int ASN1_UNIVERSALSTRING_free(char a1)
{
  return ASN1_item_free(a1, ASN1_UNIVERSALSTRING_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_ASN1_BMPSTRING  (binary VA: 0x198c060)
// Original: d2i_ASN1_BMPSTRING
// ----------------------------------------------------------------------------
int d2i_ASN1_BMPSTRING(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&ASN1_BMPSTRING_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_ASN1_BMPSTRING  (binary VA: 0x198c0a0)
// Original: i2d_ASN1_BMPSTRING
// ----------------------------------------------------------------------------
int i2d_ASN1_BMPSTRING(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&ASN1_BMPSTRING_it));
}

// ----------------------------------------------------------------------------
// Function: ASN1_BMPSTRING_new  (binary VA: 0x198c0e0)
// Original: ASN1_BMPSTRING_new
// ----------------------------------------------------------------------------
int ASN1_BMPSTRING_new()
{
  return ASN1_item_new((int)(uintptr_t)(&ASN1_BMPSTRING_it));
}

// ----------------------------------------------------------------------------
// Function: ASN1_BMPSTRING_free  (binary VA: 0x198c110)
// Original: ASN1_BMPSTRING_free
// ----------------------------------------------------------------------------
int ASN1_BMPSTRING_free(char a1)
{
  return ASN1_item_free(a1, ASN1_BMPSTRING_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_ASN1_TYPE  (binary VA: 0x198c140)
// Original: d2i_ASN1_TYPE
// ----------------------------------------------------------------------------
int d2i_ASN1_TYPE(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&ASN1_ANY_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_ASN1_TYPE  (binary VA: 0x198c180)
// Original: i2d_ASN1_TYPE
// ----------------------------------------------------------------------------
int i2d_ASN1_TYPE(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&ASN1_ANY_it));
}

// ----------------------------------------------------------------------------
// Function: ASN1_TYPE_new  (binary VA: 0x198c1c0)
// Original: ASN1_TYPE_new
// ----------------------------------------------------------------------------
int ASN1_TYPE_new()
{
  return ASN1_item_new((int)(uintptr_t)(&ASN1_ANY_it));
}

// ----------------------------------------------------------------------------
// Function: ASN1_TYPE_free  (binary VA: 0x198c1f0)
// Original: ASN1_TYPE_free
// ----------------------------------------------------------------------------
int ASN1_TYPE_free(char a1)
{
  return ASN1_item_free(a1, ASN1_ANY_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_ASN1_PRINTABLE  (binary VA: 0x198c220)
// Original: d2i_ASN1_PRINTABLE
// ----------------------------------------------------------------------------
int d2i_ASN1_PRINTABLE(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&ASN1_PRINTABLE_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_ASN1_PRINTABLE  (binary VA: 0x198c260)
// Original: i2d_ASN1_PRINTABLE
// ----------------------------------------------------------------------------
int i2d_ASN1_PRINTABLE(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&ASN1_PRINTABLE_it));
}

// ----------------------------------------------------------------------------
// Function: ASN1_PRINTABLE_new  (binary VA: 0x198c2a0)
// Original: ASN1_PRINTABLE_new
// ----------------------------------------------------------------------------
int ASN1_PRINTABLE_new()
{
  return ASN1_item_new((int)(uintptr_t)(&ASN1_PRINTABLE_it));
}

// ----------------------------------------------------------------------------
// Function: ASN1_PRINTABLE_free  (binary VA: 0x198c2d0)
// Original: ASN1_PRINTABLE_free
// ----------------------------------------------------------------------------
int ASN1_PRINTABLE_free(char a1)
{
  return ASN1_item_free(a1, ASN1_PRINTABLE_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_DISPLAYTEXT  (binary VA: 0x198c300)
// Original: d2i_DISPLAYTEXT
// ----------------------------------------------------------------------------
int d2i_DISPLAYTEXT(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&DISPLAYTEXT_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_DISPLAYTEXT  (binary VA: 0x198c340)
// Original: i2d_DISPLAYTEXT
// ----------------------------------------------------------------------------
int i2d_DISPLAYTEXT(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&DISPLAYTEXT_it));
}

// ----------------------------------------------------------------------------
// Function: d2i_DIRECTORYSTRING  (binary VA: 0x198c3e0)
// Original: d2i_DIRECTORYSTRING
// ----------------------------------------------------------------------------
int d2i_DIRECTORYSTRING(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&DIRECTORYSTRING_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_DIRECTORYSTRING  (binary VA: 0x198c420)
// Original: i2d_DIRECTORYSTRING
// ----------------------------------------------------------------------------
int i2d_DIRECTORYSTRING(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&DIRECTORYSTRING_it));
}

// ----------------------------------------------------------------------------
// Function: d2i_ASN1_SEQUENCE_ANY  (binary VA: 0x198c4c0)
// Original: d2i_ASN1_SEQUENCE_ANY
// ----------------------------------------------------------------------------
int d2i_ASN1_SEQUENCE_ANY(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&ASN1_SEQUENCE_ANY_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_ASN1_SEQUENCE_ANY  (binary VA: 0x198c500)
// Original: i2d_ASN1_SEQUENCE_ANY
// ----------------------------------------------------------------------------
int i2d_ASN1_SEQUENCE_ANY(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&ASN1_SEQUENCE_ANY_it));
}

// ----------------------------------------------------------------------------
// Function: d2i_ASN1_SET_ANY  (binary VA: 0x198c540)
// Original: d2i_ASN1_SET_ANY
// ----------------------------------------------------------------------------
int d2i_ASN1_SET_ANY(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&ASN1_SET_ANY_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_ASN1_SET_ANY  (binary VA: 0x198c580)
// Original: i2d_ASN1_SET_ANY
// ----------------------------------------------------------------------------
int i2d_ASN1_SET_ANY(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&ASN1_SET_ANY_it));
}

// ----------------------------------------------------------------------------
// Function: d2i_X509_ALGOR  (binary VA: 0x198c9b0)
// Original: d2i_X509_ALGOR
// ----------------------------------------------------------------------------
int d2i_X509_ALGOR(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&X509_ALGOR_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_X509_ALGOR  (binary VA: 0x198c9f0)
// Original: i2d_X509_ALGOR
// ----------------------------------------------------------------------------
int i2d_X509_ALGOR(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&X509_ALGOR_it));
}

// ----------------------------------------------------------------------------
// Function: X509_ALGOR_new  (binary VA: 0x198ca30)
// Original: X509_ALGOR_new
// ----------------------------------------------------------------------------
int X509_ALGOR_new()
{
  return ASN1_item_new((int)(uintptr_t)(&X509_ALGOR_it));
}

// ----------------------------------------------------------------------------
// Function: X509_ALGOR_free  (binary VA: 0x198ca60)
// Original: X509_ALGOR_free
// ----------------------------------------------------------------------------
int X509_ALGOR_free(char a1)
{
  return ASN1_item_free(a1, X509_ALGOR_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_X509_ALGORS  (binary VA: 0x198ca90)
// Original: d2i_X509_ALGORS
// ----------------------------------------------------------------------------
int d2i_X509_ALGORS(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&X509_ALGORS_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_X509_ALGORS  (binary VA: 0x198cad0)
// Original: i2d_X509_ALGORS
// ----------------------------------------------------------------------------
int i2d_X509_ALGORS(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&X509_ALGORS_it));
}

// ----------------------------------------------------------------------------
// Function: X509_ALGOR_dup  (binary VA: 0x198cb10)
// Original: X509_ALGOR_dup
// ----------------------------------------------------------------------------
int X509_ALGOR_dup(int a1)
{
  return ASN1_item_dup(X509_ALGOR_it, a1);
}

// ----------------------------------------------------------------------------
// Function: X509_ALGOR_set0  (binary VA: 0x198cb40)
// Original: X509_ALGOR_set0
// ----------------------------------------------------------------------------
int X509_ALGOR_set0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v6;

  v4 = 0;
  if ( a1 != 0 )
  {
    if ( a3 == -1 || *(uint32_t *)(a1 + 4) != 0 || (v6 = ASN1_TYPE_new(), *(uint32_t *)(a1 + 4) = v6, v6 != 0) )
    {
      if ( *(uint32_t *)a1 != 0 )
        ASN1_OBJECT_free(*(void **)a1);
      *(uint32_t *)a1 = a2;
      v4 = 1;
      if ( a3 != 0 )
      {
        if ( a3 == -1 )
        {
          if ( *(uint32_t *)(a1 + 4) != 0 )
          {
            ASN1_TYPE_free(*(uint32_t *)(a1 + 4));
            *(uint32_t *)(a1 + 4) = 0;
          }
        }
        else
        {
          ASN1_TYPE_set(*(uint32_t *)(a1 + 4), a3, a4);
        }
      }
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: X509_ALGOR_get0  (binary VA: 0x198cc00)
// Original: X509_ALGOR_get0
// ----------------------------------------------------------------------------
uint32_t * X509_ALGOR_get0(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4)
{
  uint32_t *result;
  uint32_t *v5;

  result = a4;
  if ( a1 != nullptr )
    *a1 = *a4;
  if ( a2 != nullptr )
  {
    v5 = (uint32_t *)a4[1];
    if ( v5 != nullptr )
    {
      *a2 = *v5;
      if ( a3 != nullptr )
      {
        result = *(uint32_t **)(a4[1] + 4);
        *a3 = (uint32_t)(uintptr_t)(result);
      }
    }
    else
    {
      *a2 = -1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: d2i_X509_ATTRIBUTE  (binary VA: 0x198cc60)
// Original: d2i_X509_ATTRIBUTE
// ----------------------------------------------------------------------------
int d2i_X509_ATTRIBUTE(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&X509_ATTRIBUTE_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_X509_ATTRIBUTE  (binary VA: 0x198cca0)
// Original: i2d_X509_ATTRIBUTE
// ----------------------------------------------------------------------------
int i2d_X509_ATTRIBUTE(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&X509_ATTRIBUTE_it));
}

// ----------------------------------------------------------------------------
// Function: X509_ATTRIBUTE_new  (binary VA: 0x198cce0)
// Original: X509_ATTRIBUTE_new
// ----------------------------------------------------------------------------
int X509_ATTRIBUTE_new()
{
  return ASN1_item_new((int)(uintptr_t)(&X509_ATTRIBUTE_it));
}

// ----------------------------------------------------------------------------
// Function: X509_ATTRIBUTE_free  (binary VA: 0x198cd10)
// Original: X509_ATTRIBUTE_free
// ----------------------------------------------------------------------------
int X509_ATTRIBUTE_free(char a1)
{
  return ASN1_item_free(a1, X509_ATTRIBUTE_it);
}

// ----------------------------------------------------------------------------
// Function: X509_ATTRIBUTE_dup  (binary VA: 0x198cd40)
// Original: X509_ATTRIBUTE_dup
// ----------------------------------------------------------------------------
int X509_ATTRIBUTE_dup(int a1)
{
  return ASN1_item_dup(X509_ATTRIBUTE_it, a1);
}

// ----------------------------------------------------------------------------
// Function: X509_ATTRIBUTE_create  (binary VA: 0x198cd70)
// Original: X509_ATTRIBUTE_create
// ----------------------------------------------------------------------------
uint32_t * X509_ATTRIBUTE_create(int a1, int a2, int a3)
{
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  char v10;
  char v11;

  v3 = (uint32_t *)X509_ATTRIBUTE_new();
  if ( v3 != nullptr )
  {
    *v3 = (uint32_t)(uintptr_t)(OBJ_nid2obj(a1));
    v3[1] = 0;
    v6 = (int)(uintptr_t)(sk_new_null(v5, v4));
    v3[2] = v6;
    if ( v6 != 0 && (v7 = ASN1_TYPE_new(), v8 = v7, v7 != 0) )
    {
      if ( sk_push(v3[2], v7) != 0 )
      {
        ASN1_TYPE_set(v8, a2, a3);
      }
      else
      {
        v10 = (char)(uintptr_t)v3;
        v3 = nullptr;
        X509_ATTRIBUTE_free(v10);
        ASN1_TYPE_free(v8);
      }
    }
    else
    {
      v11 = (char)(uintptr_t)v3;
      v3 = nullptr;
      X509_ATTRIBUTE_free(v11);
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: d2i_X509_EXTENSION  (binary VA: 0x198ce30)
// Original: d2i_X509_EXTENSION
// ----------------------------------------------------------------------------
int d2i_X509_EXTENSION(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&X509_EXTENSION_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_X509_EXTENSION  (binary VA: 0x198ce70)
// Original: i2d_X509_EXTENSION
// ----------------------------------------------------------------------------
int i2d_X509_EXTENSION(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&X509_EXTENSION_it));
}

// ----------------------------------------------------------------------------
// Function: X509_EXTENSION_new  (binary VA: 0x198ceb0)
// Original: X509_EXTENSION_new
// ----------------------------------------------------------------------------
int X509_EXTENSION_new()
{
  return ASN1_item_new((int)(uintptr_t)(&X509_EXTENSION_it));
}

// ----------------------------------------------------------------------------
// Function: X509_EXTENSION_free  (binary VA: 0x198cee0)
// Original: X509_EXTENSION_free
// ----------------------------------------------------------------------------
int X509_EXTENSION_free(char a1)
{
  return ASN1_item_free(a1, X509_EXTENSION_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_X509_EXTENSIONS  (binary VA: 0x198cf10)
// Original: d2i_X509_EXTENSIONS
// ----------------------------------------------------------------------------
int d2i_X509_EXTENSIONS(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&X509_EXTENSIONS_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_X509_EXTENSIONS  (binary VA: 0x198cf50)
// Original: i2d_X509_EXTENSIONS
// ----------------------------------------------------------------------------
int i2d_X509_EXTENSIONS(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&X509_EXTENSIONS_it));
}

// ----------------------------------------------------------------------------
// Function: X509_EXTENSION_dup  (binary VA: 0x198cf90)
// Original: X509_EXTENSION_dup
// ----------------------------------------------------------------------------
int X509_EXTENSION_dup(int a1)
{
  return ASN1_item_dup(X509_EXTENSION_it, a1);
}

// ----------------------------------------------------------------------------
// Function: X509_NAME_ENTRY_free  (binary VA: 0x198d280)
// Original: X509_NAME_ENTRY_free
// ----------------------------------------------------------------------------
int X509_NAME_ENTRY_free(char a1)
{
  return ASN1_item_free(a1, X509_NAME_ENTRY_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_X509_NAME_ENTRY  (binary VA: 0x198d2b0)
// Original: d2i_X509_NAME_ENTRY
// ----------------------------------------------------------------------------
int d2i_X509_NAME_ENTRY(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)X509_NAME_ENTRY_it);
}

// ----------------------------------------------------------------------------
// Function: i2d_X509_NAME_ENTRY  (binary VA: 0x198d2f0)
// Original: i2d_X509_NAME_ENTRY
// ----------------------------------------------------------------------------
int i2d_X509_NAME_ENTRY(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)X509_NAME_ENTRY_it);
}

// ----------------------------------------------------------------------------
// Function: X509_NAME_ENTRY_new  (binary VA: 0x198d330)
// Original: X509_NAME_ENTRY_new
// ----------------------------------------------------------------------------
int X509_NAME_ENTRY_new()
{
  return ASN1_item_new((int)X509_NAME_ENTRY_it);
}

// ----------------------------------------------------------------------------
// Function: X509_NAME_ENTRY_dup  (binary VA: 0x198db00)
// Original: X509_NAME_ENTRY_dup
// ----------------------------------------------------------------------------
int X509_NAME_ENTRY_dup(int a1)
{
  return ASN1_item_dup(X509_NAME_ENTRY_it, a1);
}

// ----------------------------------------------------------------------------
// Function: d2i_X509_NAME  (binary VA: 0x198db30)
// Original: d2i_X509_NAME
// ----------------------------------------------------------------------------
int d2i_X509_NAME(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&X509_NAME_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_X509_NAME  (binary VA: 0x198db70)
// Original: i2d_X509_NAME
// ----------------------------------------------------------------------------
int i2d_X509_NAME(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&X509_NAME_it));
}

// ----------------------------------------------------------------------------
// Function: X509_NAME_new  (binary VA: 0x198dbb0)
// Original: X509_NAME_new
// ----------------------------------------------------------------------------
int X509_NAME_new()
{
  return ASN1_item_new((int)(uintptr_t)(&X509_NAME_it));
}

// ----------------------------------------------------------------------------
// Function: X509_NAME_free  (binary VA: 0x198dbe0)
// Original: X509_NAME_free
// ----------------------------------------------------------------------------
int X509_NAME_free(char a1)
{
  return ASN1_item_free(a1, X509_NAME_it);
}

// ----------------------------------------------------------------------------
// Function: X509_NAME_dup  (binary VA: 0x198dc10)
// Original: X509_NAME_dup
// ----------------------------------------------------------------------------
int X509_NAME_dup(int a1)
{
  return ASN1_item_dup(X509_NAME_it, a1);
}

// ----------------------------------------------------------------------------
// Function: X509_NAME_set  (binary VA: 0x198dc40)
// Original: X509_NAME_set
// ----------------------------------------------------------------------------
bool X509_NAME_set(int *a1, int a2)
{
  int v2;

  if ( a2 == 0 || a1 == nullptr )
    return false;
  v2 = *a1;
  if ( *a1 != a2 )
  {
    v2 = X509_NAME_dup(a2);
    if ( v2 != 0 )
    {
      X509_NAME_free(*a1);
      *a1 = v2;
    }
    else
    {
      v2 = *a1;
    }
  }
  return v2 != 0;
}

// ----------------------------------------------------------------------------
// Function: d2i_X509_CINF  (binary VA: 0x198de30)
// Original: d2i_X509_CINF
// ----------------------------------------------------------------------------
int d2i_X509_CINF(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&X509_CINF_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_X509_CINF  (binary VA: 0x198de70)
// Original: i2d_X509_CINF
// ----------------------------------------------------------------------------
int i2d_X509_CINF(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&X509_CINF_it));
}

// ----------------------------------------------------------------------------
// Function: X509_CINF_new  (binary VA: 0x198deb0)
// Original: X509_CINF_new
// ----------------------------------------------------------------------------
int X509_CINF_new()
{
  return ASN1_item_new((int)(uintptr_t)(&X509_CINF_it));
}

// ----------------------------------------------------------------------------
// Function: X509_CINF_free  (binary VA: 0x198dee0)
// Original: X509_CINF_free
// ----------------------------------------------------------------------------
int X509_CINF_free(char a1)
{
  return ASN1_item_free(a1, X509_CINF_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_X509  (binary VA: 0x198df10)
// Original: d2i_X509
// ----------------------------------------------------------------------------
int d2i_X509(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&X509_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_X509  (binary VA: 0x198df50)
// Original: i2d_X509
// ----------------------------------------------------------------------------
int i2d_X509(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&X509_it));
}

// ----------------------------------------------------------------------------
// Function: X509_new  (binary VA: 0x198df90)
// Original: X509_new
// ----------------------------------------------------------------------------
int X509_new()
{
  return ASN1_item_new((int)(uintptr_t)(&X509_it));
}

// ----------------------------------------------------------------------------
// Function: X509_free  (binary VA: 0x198dfc0)
// Original: X509_free
// ----------------------------------------------------------------------------
int X509_free(char a1)
{
  return ASN1_item_free(a1, X509_it);
}

// ----------------------------------------------------------------------------
// Function: X509_dup  (binary VA: 0x198dff0)
// Original: X509_dup
// ----------------------------------------------------------------------------
int X509_dup(int a1)
{
  return ASN1_item_dup(X509_it, a1);
}

// ----------------------------------------------------------------------------
// Function: X509_get_ex_new_index  (binary VA: 0x198e020)
// Original: X509_get_ex_new_index
// ----------------------------------------------------------------------------
int X509_get_ex_new_index(int a1, int a2, int a3, int a4, int a5)
{
  return CRYPTO_get_ex_new_index(10, a1, a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: X509_set_ex_data  (binary VA: 0x198e070)
// Original: X509_set_ex_data
// ----------------------------------------------------------------------------
int X509_set_ex_data(int a1, int a2, int a3)
{
  return CRYPTO_set_ex_data((int *)(a1 + 24), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: X509_get_ex_data  (binary VA: 0x198e0b0)
// Original: X509_get_ex_data
// ----------------------------------------------------------------------------
int X509_get_ex_data(int a1, int a2)
{
  return CRYPTO_get_ex_data((uint32_t *)(a1 + 24), a2);
}

// ----------------------------------------------------------------------------
// Function: d2i_X509_AUX  (binary VA: 0x198e0e0)
// Original: d2i_X509_AUX
// ----------------------------------------------------------------------------
int d2i_X509_AUX(int *a1, char **a2, int a3)
{
  int v3;
  int v4;
  char v6;
  char *v7;

  v7 = *a2;
  v3 = d2i_X509(a1, a2, a3);
  if ( v3 != 0 )
  {
    v4 = v7 - *a2 + a3;
    if ( v4 != 0 && d2i_X509_CERT_AUX(v3 + 100, a2, v4) == 0 )
    {
      v6 = v3;
      v3 = 0;
      X509_free(v6);
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: i2d_X509_AUX  (binary VA: 0x198e170)
// Original: i2d_X509_AUX
// ----------------------------------------------------------------------------
int i2d_X509_AUX(int a1, void **a2)
{
  int v2;

  v2 = i2d_X509(a1, a2);
  if ( a1 != 0 )
    v2 += i2d_X509_CERT_AUX(*(uint32_t *)(a1 + 100), a2);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: d2i_X509_CERT_AUX  (binary VA: 0x198e1e0)
// Original: d2i_X509_CERT_AUX
// ----------------------------------------------------------------------------
int d2i_X509_CERT_AUX(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&X509_CERT_AUX_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_X509_CERT_AUX  (binary VA: 0x198e220)
// Original: i2d_X509_CERT_AUX
// ----------------------------------------------------------------------------
int i2d_X509_CERT_AUX(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&X509_CERT_AUX_it));
}

// ----------------------------------------------------------------------------
// Function: X509_CERT_AUX_new  (binary VA: 0x198e260)
// Original: X509_CERT_AUX_new
// ----------------------------------------------------------------------------
int X509_CERT_AUX_new()
{
  return ASN1_item_new((int)(uintptr_t)(&X509_CERT_AUX_it));
}

// ----------------------------------------------------------------------------
// Function: X509_CERT_AUX_free  (binary VA: 0x198e2e0)
// Original: X509_CERT_AUX_free
// ----------------------------------------------------------------------------
int X509_CERT_AUX_free(char a1)
{
  return ASN1_item_free(a1, X509_CERT_AUX_it);
}

// ----------------------------------------------------------------------------
// Function: X509_alias_set1  (binary VA: 0x198e310)
// Original: X509_alias_set1
// ----------------------------------------------------------------------------
int X509_alias_set1(int a1, char *s, size_t a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v8;
  int v9;

  if ( s != nullptr )
  {
    v3 = sub_198E290(a1);
    v4 = 0;
    v5 = v3;
    if ( v3 != 0 )
    {
      v6 = *(uint32_t *)(v3 + 8);
      if ( v6 != 0 )
        return ASN1_STRING_set(v6, s, a3);
      v6 = ASN1_UTF8STRING_new();
      *(uint32_t *)(v5 + 8) = v6;
      if ( v6 != 0 )
        return ASN1_STRING_set(v6, s, a3);
    }
  }
  else
  {
    v4 = 1;
    if ( a1 != 0 )
    {
      v8 = *(uint32_t *)(a1 + 100);
      if ( v8 != 0 )
      {
        v9 = *(uint32_t *)(v8 + 8);
        if ( v9 != 0 )
        {
          ASN1_UTF8STRING_free(v9);
          *(uint32_t *)(*(uint32_t *)(a1 + 100) + 8) = 0;
        }
      }
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: X509_keyid_set1  (binary VA: 0x198e3d0)
// Original: X509_keyid_set1
// ----------------------------------------------------------------------------
int X509_keyid_set1(int a1, char *s, size_t a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v8;
  int v9;

  if ( s != nullptr )
  {
    v3 = sub_198E290(a1);
    v4 = 0;
    v5 = v3;
    if ( v3 != 0 )
    {
      v6 = *(uint32_t *)(v3 + 12);
      if ( v6 != 0 )
        return ASN1_STRING_set(v6, s, a3);
      v6 = ASN1_OCTET_STRING_new();
      *(uint32_t *)(v5 + 12) = v6;
      if ( v6 != 0 )
        return ASN1_STRING_set(v6, s, a3);
    }
  }
  else
  {
    v4 = 1;
    if ( a1 != 0 )
    {
      v8 = *(uint32_t *)(a1 + 100);
      if ( v8 != 0 )
      {
        v9 = *(uint32_t *)(v8 + 12);
        if ( v9 != 0 )
        {
          ASN1_OCTET_STRING_free(v9);
          *(uint32_t *)(*(uint32_t *)(a1 + 100) + 12) = 0;
        }
      }
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: X509_alias_get0  (binary VA: 0x198e490)
// Original: X509_alias_get0
// ----------------------------------------------------------------------------
int X509_alias_get0(int a1, uint32_t *a2)
{
  int v2;
  uint32_t *v3;

  v2 = *(uint32_t *)(a1 + 100);
  if ( v2 == 0 )
    return 0;
  v3 = *(uint32_t **)(v2 + 8);
  if ( v3 == nullptr )
    return 0;
  if ( a2 != nullptr )
  {
    *a2 = *v3;
    v3 = *(uint32_t **)(*(uint32_t *)(a1 + 100) + 8);
  }
  return v3[2];
}

// ----------------------------------------------------------------------------
// Function: X509_keyid_get0  (binary VA: 0x198e4d0)
// Original: X509_keyid_get0
// ----------------------------------------------------------------------------
int X509_keyid_get0(int a1, uint32_t *a2)
{
  int v2;
  uint32_t *v3;

  v2 = *(uint32_t *)(a1 + 100);
  if ( v2 == 0 )
    return 0;
  v3 = *(uint32_t **)(v2 + 12);
  if ( v3 == nullptr )
    return 0;
  if ( a2 != nullptr )
  {
    *a2 = *v3;
    v3 = *(uint32_t **)(*(uint32_t *)(a1 + 100) + 12);
  }
  return v3[2];
}

// ----------------------------------------------------------------------------
// Function: X509_add1_trust_object  (binary VA: 0x198e510)
// Original: X509_add1_trust_object
// ----------------------------------------------------------------------------
int X509_add1_trust_object(int a1, int a2)
{
  int v2;
  int v3;
  int *v4;
  int v5;
  int v6;
  int *v7;
  int v8;

  v2 = 0;
  v3 = (int)(uintptr_t)(OBJ_dup(a2));
  if ( v3 != 0 )
  {
    v4 = (int *)sub_198E290(a1);
    v7 = v4;
    if ( v4 != nullptr )
    {
      v8 = *v4;
      if ( v8 != 0 )
        return sk_push(v8, v3);
      v8 = (int)(uintptr_t)(sk_new_null(v6, v5));
      *v7 = v8;
      if ( v8 != 0 )
        return sk_push(v8, v3);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: X509_add1_reject_object  (binary VA: 0x198e590)
// Original: X509_add1_reject_object
// ----------------------------------------------------------------------------
int X509_add1_reject_object(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v2 = 0;
  v3 = (int)(uintptr_t)(OBJ_dup(a2));
  if ( v3 != 0 )
  {
    v4 = sub_198E290(a1);
    v7 = v4;
    if ( v4 != 0 )
    {
      v8 = *(uint32_t *)(v4 + 4);
      if ( v8 != 0 )
        return sk_push(v8, v3);
      v8 = (int)(uintptr_t)(sk_new_null(v6, v5));
      *(uint32_t *)(v7 + 4) = v8;
      if ( v8 != 0 )
        return sk_push(v8, v3);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: X509_trust_clear  (binary VA: 0x198e610)
// Original: X509_trust_clear
// ----------------------------------------------------------------------------
uint32_t * X509_trust_clear(int a1)
{
  uint32_t *result;

  result = *(uint32_t **)(a1 + 100);
  if ( result != nullptr )
  {
    result = (uint32_t *)*result;
    if ( result != nullptr )
    {
      sk_pop_free(result, (int)(uintptr_t)(ASN1_OBJECT_free));
      result = *(uint32_t **)(a1 + 100);
      *result = 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_reject_clear  (binary VA: 0x198e660)
// Original: X509_reject_clear
// ----------------------------------------------------------------------------
uint32_t * X509_reject_clear(int a1)
{
  uint32_t *result;

  result = *(uint32_t **)(a1 + 100);
  if ( result != nullptr )
  {
    result = (uint32_t *)result[1];
    if ( result != nullptr )
    {
      sk_pop_free(result, (int)(uintptr_t)(ASN1_OBJECT_free));
      result = *(uint32_t **)(a1 + 100);
      result[1] = 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: d2i_X509_CERT_PAIR  (binary VA: 0x198e6c0)
// Original: d2i_X509_CERT_PAIR
// ----------------------------------------------------------------------------
int d2i_X509_CERT_PAIR(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&X509_CERT_PAIR_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_X509_CERT_PAIR  (binary VA: 0x198e700)
// Original: i2d_X509_CERT_PAIR
// ----------------------------------------------------------------------------
int i2d_X509_CERT_PAIR(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&X509_CERT_PAIR_it));
}

// ----------------------------------------------------------------------------
// Function: X509_CERT_PAIR_new  (binary VA: 0x198e740)
// Original: X509_CERT_PAIR_new
// ----------------------------------------------------------------------------
int X509_CERT_PAIR_new()
{
  return ASN1_item_new((int)(uintptr_t)(&X509_CERT_PAIR_it));
}

// ----------------------------------------------------------------------------
// Function: X509_CERT_PAIR_free  (binary VA: 0x198e770)
// Original: X509_CERT_PAIR_free
// ----------------------------------------------------------------------------
int X509_CERT_PAIR_free(char a1)
{
  return ASN1_item_free(a1, X509_CERT_PAIR_it);
}

// ----------------------------------------------------------------------------
// Function: BIO_vprintf  (binary VA: 0x198f910)
// Original: BIO_vprintf
// ----------------------------------------------------------------------------
int BIO_vprintf(int a1, int a2, int a3, char *a4, unsigned int *a5)
{
  int v5;
  int v6;
  int v7;
  typedef int _g4_t_v9;
  typedef uint8_t *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef void *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint8_t _g4_t_v14[2060];
  enum : size_t {
    _g4_s0 = 2160u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v13)) > _g4_s4 ? (28u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v14)) > _g4_s5 ? (32u + sizeof(_g4_t_v14)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);

  v10 = v14;
  v11 = 2048;
  v12 = nullptr;
  CRYPTO_push_info(a1, a2, (int)(uintptr_t)("doapr()"), (int)(uintptr_t)(&unk_1B15112), 0);
  sub_198EC90((const void **)&v10, &v12, &v11, &v9, &v13, a4, a5);
  if ( v12 != nullptr )
  {
    v5 = BIO_write(a3, v12, v9);
    CRYPTO_free(v12);
  }
  else
  {
    v5 = BIO_write(a3, v14, v9);
  }
  CRYPTO_pop_info(v7, v6);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: BIO_printf  (binary VA: 0x198fa00)
// Original: BIO_printf
// ----------------------------------------------------------------------------
int BIO_printf(int a1, int a2, int a3, char *a4, ...)
{
  va_list va;

  va_start(va, a4);
  return BIO_vprintf(a2, a1, a3, a4, g4_va_cast<unsigned int *>(va));
}

// ----------------------------------------------------------------------------
// Function: BIO_vsnprintf  (binary VA: 0x198fa40)
// Original: BIO_vsnprintf
// ----------------------------------------------------------------------------
int BIO_vsnprintf(const void *a1, int a2, char *a3, unsigned int *a4)
{
  int result;
  typedef int _g4_t_v5;
  typedef uint32_t _g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  sub_198EC90(&a1, nullptr, &a2, &v5, v6, a3, a4);
  result = -1;
  if ( v6[0] == 0 && v5 >= 0 )
    return v5;
  return result;
}

// ----------------------------------------------------------------------------
// Function: BIO_snprintf  (binary VA: 0x198faa0)
// Original: BIO_snprintf
// ----------------------------------------------------------------------------
int BIO_snprintf(const void *a1, int a2, char *a3, ...)
{
  va_list va;

  va_start(va, a3);
  return BIO_vsnprintf(a1, a2, a3, g4_va_cast<unsigned int *>(va));
}

// ----------------------------------------------------------------------------
// Function: BIO_f_buffer  (binary VA: 0x19906b0)
// Original: BIO_f_buffer
// ----------------------------------------------------------------------------
void * BIO_f_buffer()
{
  return &unk_20CB5C0;
}

// ----------------------------------------------------------------------------
// Function: BIO_set  (binary VA: 0x19906d0)
// Original: BIO_set
// ----------------------------------------------------------------------------
int BIO_set(uint32_t *a1, int a2)
{
  int (*v2)(uint32_t *);
  int v3;

  *a1 = a2;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 1;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[10] = 0;
  a1[9] = 0;
  a1[11] = 1;
  a1[12] = 0;
  a1[13] = 0;
  CRYPTO_new_ex_data(0, (int)(uintptr_t)(a1), (int)(uintptr_t)(a1 + 14));
  v2 = *(int (**)(uint32_t *))(a2 + 28);
  v3 = 1;
  if ( v2 != nullptr && v2(a1) == 0 )
  {
    LOWORD(v3) = 0;
    CRYPTO_free_ex_data(0, (int)(uintptr_t)(a1), (int)(uintptr_t)(a1 + 14));
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: BIO_new  (binary VA: 0x19907c0)
// Original: BIO_new
// ----------------------------------------------------------------------------
uint8_t * BIO_new(int a1)
{
  uint8_t *v1;
  void *v3;

  v1 = CRYPTO_malloc(64, (int)(uintptr_t)(&unk_1B15112), 0);
  if ( v1 != nullptr )
  {
    if ( BIO_set(v1, a1) == 0 )
    {
      v3 = v1;
      v1 = nullptr;
      CRYPTO_free(v3);
    }
  }
  else
  {
    ERR_put_error(32, 108, 65, &unk_1B15112, 0);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: BIO_free  (binary VA: 0x1990870)
// Original: BIO_free
// ----------------------------------------------------------------------------
int BIO_free(uint32_t *a1)
{
  int v1;
  int (*v3)(uint32_t *, int, uint32_t, uint32_t, uint32_t, int);
  void (*v4)(uint32_t *);

  v1 = 0;
  if ( a1 != nullptr )
  {
    LOWORD(v1) = 1;
    if ( CRYPTO_add_lock(a1 + 11, -1, 21, (int)(uintptr_t)(&unk_1B15112), 0) <= 0 )
    {
      v3 = (int (*)(uint32_t *, int, uint32_t, uint32_t, uint32_t, int))a1[1];
      if ( v3 == nullptr || (v1 = v3(a1, 1, 0, 0, 0, 1)) > 0 )
      {
        CRYPTO_free_ex_data(0, (int)(uintptr_t)(a1), (int)(uintptr_t)(a1 + 14));
        v1 = 1;
        if ( *a1 != 0 )
        {
          v4 = *(void (**)(uint32_t *))(*a1 + 32);
          if ( v4 != nullptr )
          {
            v4(a1);
            CRYPTO_free(a1);
          }
        }
      }
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: BIO_vfree  (binary VA: 0x1990960)
// Original: BIO_vfree
// ----------------------------------------------------------------------------
int BIO_vfree(uint32_t *a1)
{
  return BIO_free(a1);
}

// ----------------------------------------------------------------------------
// Function: BIO_clear_flags  (binary VA: 0x1990990)
// Original: BIO_clear_flags
// ----------------------------------------------------------------------------
int BIO_clear_flags(int a1, int a2)
{
  *(uint32_t *)(a1 + 20) &= ~a2;
  return ~a2;
}

// ----------------------------------------------------------------------------
// Function: BIO_test_flags  (binary VA: 0x19909a0)
// Original: BIO_test_flags
// ----------------------------------------------------------------------------
int BIO_test_flags(int a1, int a2)
{
  return *(uint32_t *)(a1 + 20) & a2;
}

// ----------------------------------------------------------------------------
// Function: BIO_set_flags  (binary VA: 0x19909b0)
// Original: BIO_set_flags
// ----------------------------------------------------------------------------
int BIO_set_flags(int a1, int a2)
{
  *(uint32_t *)(a1 + 20) |= a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: BIO_get_callback  (binary VA: 0x19909c0)
// Original: BIO_get_callback
// ----------------------------------------------------------------------------
int BIO_get_callback(int a1)
{
  return *(uint32_t *)(a1 + 4);
}

// ----------------------------------------------------------------------------
// Function: BIO_set_callback  (binary VA: 0x19909d0)
// Original: BIO_set_callback
// ----------------------------------------------------------------------------
int BIO_set_callback(int a1, int a2)
{
  *(uint32_t *)(a1 + 4) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: BIO_set_callback_arg  (binary VA: 0x19909e0)
// Original: BIO_set_callback_arg
// ----------------------------------------------------------------------------
int BIO_set_callback_arg(int a1, int a2)
{
  *(uint32_t *)(a1 + 8) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: BIO_get_callback_arg  (binary VA: 0x19909f0)
// Original: BIO_get_callback_arg
// ----------------------------------------------------------------------------
int BIO_get_callback_arg(int a1)
{
  return *(uint32_t *)(a1 + 8);
}

// ----------------------------------------------------------------------------
// Function: BIO_method_name  (binary VA: 0x1990a00)
// Original: BIO_method_name
// ----------------------------------------------------------------------------
int BIO_method_name(int a1)
{
  return *(uint32_t *)(*(uint32_t *)a1 + 4);
}

// ----------------------------------------------------------------------------
// Function: BIO_method_type  (binary VA: 0x1990a10)
// Original: BIO_method_type
// ----------------------------------------------------------------------------
int BIO_method_type(int a1)
{
  return **(uint32_t **)a1;
}

// ----------------------------------------------------------------------------
// Function: BIO_read  (binary VA: 0x1990a20)
// Original: BIO_read
// ----------------------------------------------------------------------------
int BIO_read(uint32_t *a1, int a2, int a3)
{
  int (*v3)(uint32_t *, int, int, int, uint32_t, int);
  int result;

  if ( a1 != nullptr && *a1 != 0 && *(uint32_t *)(*a1 + 12) != 0 )
  {
    v3 = (int (*)(uint32_t *, int, int, int, uint32_t, int))a1[1];
    if ( v3 == nullptr || (result = v3(a1, 2, a2, a3, 0, 1)) > 0 )
    {
      if ( a1[3] != 0 )
      {
        result = G4_VCALL<int>(a1, 12, a2, a3);
        if ( result > 0 )
          a1[12] += result;
        if ( v3 != nullptr )
          return v3(a1, 130, a2, a3, 0, result);
      }
      else
      {
        ERR_put_error(32, 111, 120, &unk_1B15112, 0);
        return -2;
      }
    }
  }
  else
  {
    ERR_put_error(32, 111, 121, &unk_1B15112, 0);
    return -2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BIO_write  (binary VA: 0x1990b70)
// Original: BIO_write
// ----------------------------------------------------------------------------
int BIO_write(uint32_t *a1, int a2, int a3)
{
  int result;
  int (*v4)(uint32_t *, int, int, int, uint32_t, int);

  result = 0;
  if ( a1 != nullptr )
  {
    v4 = (int (*)(uint32_t *, int, int, int, uint32_t, int))a1[1];
    if ( *a1 != 0 && *(uint32_t *)(*a1 + 8) != 0 )
    {
      if ( v4 == nullptr || (result = v4(a1, 3, a2, a3, 0, 1)) > 0 )
      {
        if ( a1[3] != 0 )
        {
          result = G4_VCALL<int>(a1, 8, a2, a3);
          if ( result > 0 )
            a1[13] += result;
          if ( v4 != nullptr )
            return v4(a1, 131, a2, a3, 0, result);
        }
        else
        {
          ERR_put_error(32, 113, 120, &unk_1B15112, 0);
          return -2;
        }
      }
    }
    else
    {
      ERR_put_error(32, 113, 121, &unk_1B15112, 0);
      return -2;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BIO_puts  (binary VA: 0x1990cc0)
// Original: BIO_puts
// ----------------------------------------------------------------------------
int BIO_puts(uint32_t *a1, int a2)
{
  int (*v2)(uint32_t *, int, int, uint32_t, uint32_t, int);
  int result;

  if ( a1 != nullptr && *a1 != 0 && *(uint32_t *)(*a1 + 16) != 0 )
  {
    v2 = (int (*)(uint32_t *, int, int, uint32_t, uint32_t, int))a1[1];
    if ( v2 == nullptr || (result = v2(a1, 4, a2, 0, 0, 1)) > 0 )
    {
      if ( a1[3] != 0 )
      {
        result = G4_VCALL<int>(a1, 16, a2);
        if ( result > 0 )
          a1[13] += result;
        if ( v2 != nullptr )
          return v2(a1, 132, a2, 0, 0, result);
      }
      else
      {
        ERR_put_error(32, 110, 120, &unk_1B15112, 0);
        return -2;
      }
    }
  }
  else
  {
    ERR_put_error(32, 110, 121, &unk_1B15112, 0);
    return -2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BIO_gets  (binary VA: 0x1990e00)
// Original: BIO_gets
// ----------------------------------------------------------------------------
int BIO_gets(uint32_t *a1, int a2, int a3)
{
  int (*v3)(uint32_t *, int, int, int, uint32_t, int);
  int result;

  if ( a1 != nullptr && *a1 != 0 && *(uint32_t *)(*a1 + 20) != 0 )
  {
    v3 = (int (*)(uint32_t *, int, int, int, uint32_t, int))a1[1];
    if ( v3 == nullptr || (result = v3(a1, 5, a2, a3, 0, 1)) > 0 )
    {
      if ( a1[3] != 0 )
      {
        result = G4_VCALL<int>(a1, 20, a2, a3);
        if ( v3 != nullptr )
          return v3(a1, 133, a2, a3, 0, result);
      }
      else
      {
        ERR_put_error(32, 104, 120, &unk_1B15112, 0);
        return -2;
      }
    }
  }
  else
  {
    ERR_put_error(32, 104, 121, &unk_1B15112, 0);
    return -2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BIO_indent  (binary VA: 0x1990f50)
// Original: BIO_indent
// ----------------------------------------------------------------------------
int BIO_indent(uint32_t *a1, int a2, int a3)
{
  int v3;
  int v4;

  v3 = 0;
  v4 = a3;
  if ( a2 >= 0 )
    v3 = a2;
  if ( v3 <= a3 )
    v4 = v3;
  while ( v4 != 0 )
  {
    --v4;
    if ( BIO_puts(a1, (int)(uintptr_t)(" ")) != 1 )
      return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: BIO_ctrl  (binary VA: 0x1990fc0)
// Original: BIO_ctrl
// ----------------------------------------------------------------------------
int BIO_ctrl(uint32_t *a1, int a2, int a3, int a4)
{
  int result;
  int (*v5)(uint32_t *, int, int, int);
  int (*v6)(uint32_t *, int, int, int, int, int);
  int v7;

  result = 0;
  if ( a1 != nullptr )
  {
    if ( *a1 != 0 && (v5 = *(int (**)(uint32_t *, int, int, int))(*a1 + 24)) != nullptr )
    {
      v6 = (int (*)(uint32_t *, int, int, int, int, int))a1[1];
      if ( v6 != nullptr )
      {
        result = v6(a1, 6, a4, a2, a3, 1);
        if ( result > 0 )
        {
          v7 = G4_VCALL<int>(a1, 24, a2, a3, a4);
          return v6(a1, 134, a4, a2, a3, v7);
        }
      }
      else
      {
        return v5(a1, a2, a3, a4);
      }
    }
    else
    {
      ERR_put_error(32, 103, 121, &unk_1B15112, 0);
      return -2;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BIO_ptr_ctrl  (binary VA: 0x19910f0)
// Original: BIO_ptr_ctrl
// ----------------------------------------------------------------------------
int BIO_ptr_ctrl(uint32_t *a1, int a2, int a3)
{
  int v3;
  int v4;
  uint32_t v6[4];

  v6[0] = 0;
  v3 = BIO_ctrl(a1, a2, a3, (int)(uintptr_t)(v6));
  v4 = 0;
  if ( v3 > 0 )
    return v6[0];
  return v4;
}

// ----------------------------------------------------------------------------
// Function: BIO_int_ctrl  (binary VA: 0x1991140)
// Original: BIO_int_ctrl
// ----------------------------------------------------------------------------
int BIO_int_ctrl(uint32_t *a1, int a2, int a3, int a4)
{
  uint32_t v5[4];

  v5[0] = a4;
  return BIO_ctrl(a1, a2, a3, (int)(uintptr_t)(v5));
}

// ----------------------------------------------------------------------------
// Function: BIO_callback_ctrl  (binary VA: 0x1991190)
// Original: BIO_callback_ctrl
// ----------------------------------------------------------------------------
int BIO_callback_ctrl(uint32_t *a1, int a2, int a3)
{
  int result;
  int (*v4)(uint32_t *, int, int);
  int (*v5)(uint32_t *, int, int *, int, uint32_t, int);
  int v6;

  result = 0;
  if ( a1 != nullptr )
  {
    if ( *a1 != 0 && (v4 = *(int (**)(uint32_t *, int, int))(*a1 + 36)) != nullptr )
    {
      v5 = (int (*)(uint32_t *, int, int *, int, uint32_t, int))a1[1];
      if ( v5 != nullptr )
      {
        result = v5(a1, 6, &a3, a2, 0, 1);
        if ( result > 0 )
        {
          v6 = G4_VCALL<int>(a1, 36, a2, a3);
          return v5(a1, 134, &a3, a2, 0, v6);
        }
      }
      else
      {
        return v4(a1, a2, a3);
      }
    }
    else
    {
      ERR_put_error(32, 131, 121, &unk_1B15112, 0);
      return -2;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BIO_ctrl_pending  (binary VA: 0x19912a0)
// Original: BIO_ctrl_pending
// ----------------------------------------------------------------------------
int BIO_ctrl_pending(uint32_t *a1)
{
  return BIO_ctrl(a1, 10, 0, 0);
}

// ----------------------------------------------------------------------------
// Function: BIO_ctrl_wpending  (binary VA: 0x19912e0)
// Original: BIO_ctrl_wpending
// ----------------------------------------------------------------------------
int BIO_ctrl_wpending(uint32_t *a1)
{
  return BIO_ctrl(a1, 13, 0, 0);
}

// ----------------------------------------------------------------------------
// Function: BIO_push  (binary VA: 0x1991320)
// Original: BIO_push
// ----------------------------------------------------------------------------
uint32_t * BIO_push(uint32_t *a1, uint32_t *a2)
{
  uint32_t *result;
  int v3;

  result = a2;
  v3 = (int)(uintptr_t)(a1);
  if ( a1 != nullptr )
  {
    while ( *(uint32_t *)(v3 + 36) != 0 )
      v3 = *(uint32_t *)(v3 + 36);
    *(uint32_t *)(v3 + 36) = (uint32_t)(uintptr_t)(a2);
    if ( a2 != nullptr )
      a2[10] = v3;
    BIO_ctrl(a1, 6, 0, v3);
    return a1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BIO_pop  (binary VA: 0x1991380)
// Original: BIO_pop
// ----------------------------------------------------------------------------
int BIO_pop(uint32_t *a1)
{
  int v1;
  int v2;
  int v3;

  v1 = 0;
  if ( a1 != nullptr )
  {
    v1 = a1[9];
    BIO_ctrl(a1, 7, 0, (int)(uintptr_t)(a1));
    v2 = a1[10];
    if ( v2 != 0 )
      *(uint32_t *)(v2 + 36) = a1[9];
    v3 = a1[9];
    if ( v3 != 0 )
      *(uint32_t *)(v3 + 40) = a1[10];
    a1[9] = 0;
    a1[10] = 0;
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: BIO_get_retry_BIO  (binary VA: 0x1991400)
// Original: BIO_get_retry_BIO
// ----------------------------------------------------------------------------
int BIO_get_retry_BIO(int a1, uint32_t *a2)
{
  int v2;
  int i;

  v2 = a1;
  for ( i = a1; BIO_test_flags(i, 8) != 0; i = *(uint32_t *)(i + 36) )
  {
    v2 = i;
    if ( *(uint32_t *)(i + 36) == 0 )
      break;
  }
  if ( a2 != nullptr )
    *a2 = *(uint32_t *)(v2 + 24);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: BIO_get_retry_reason  (binary VA: 0x1991460)
// Original: BIO_get_retry_reason
// ----------------------------------------------------------------------------
int BIO_get_retry_reason(int a1)
{
  return *(uint32_t *)(a1 + 24);
}

// ----------------------------------------------------------------------------
// Function: BIO_find_type  (binary VA: 0x1991470)
// Original: BIO_find_type
// ----------------------------------------------------------------------------
int * BIO_find_type(int **a1, int a2)
{
  int *result;
  int v3;

  result = (int *)a1;
  if ( a1 != nullptr )
  {
    do
    {
      if ( *result != 0 )
      {
        v3 = *(uint32_t *)*result;
        if ( (uint8_t)a2 != 0 )
        {
          if ( v3 == a2 )
            return result;
        }
        else if ( (v3 & a2) != 0 )
        {
          return result;
        }
      }
      result = (int *)result[9];
    }
    while ( result != nullptr );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BIO_next  (binary VA: 0x19914b0)
// Original: BIO_next
// ----------------------------------------------------------------------------
int BIO_next(int a1)
{
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 36);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: BIO_free_all  (binary VA: 0x19914d0)
// Original: BIO_free_all
// ----------------------------------------------------------------------------
uint32_t * BIO_free_all(uint32_t *a1)
{
  uint32_t *result;
  int v2;
  uint32_t *v3;

  result = a1;
  if ( a1 != nullptr )
  {
    while ( 1 )
    {
      v2 = result[11];
      v3 = (uint32_t *)result[9];
      result = (uint32_t *)BIO_free(result);
      if ( v2 > 1 || v3 == nullptr )
        break;
      result = v3;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BIO_dup_chain  (binary VA: 0x1991520)
// Original: BIO_dup_chain
// ----------------------------------------------------------------------------
uint32_t * BIO_dup_chain(int *a1)
{
  uint32_t *v1;
  int *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v6;

  v1 = nullptr;
  v2 = a1;
  v6 = nullptr;
  if ( a1 == nullptr )
    return v6;
  while ( 1 )
  {
    v3 = (uint32_t *)(BIO_new(*v2));
    v4 = v3;
    if ( v3 == nullptr )
      break;
    v3[1] = v2[1];
    v3[2] = v2[2];
    v3[3] = v2[3];
    v3[4] = v2[4];
    v3[5] = v2[5];
    v3[7] = v2[7];
    if ( BIO_ctrl(v2, 12, 0, (int)(uintptr_t)(v3)) == 0 )
    {
      BIO_free(v4);
      break;
    }
    if ( CRYPTO_dup_ex_data(0, (int)(uintptr_t)(v4 + 14), (int)(uintptr_t)(v2 + 14)) == 0 )
      break;
    if ( v6 != nullptr )
    {
      BIO_push(v1, v4);
      v2 = (int *)v2[9];
      if ( v2 == nullptr )
        return v6;
    }
    else
    {
      v2 = (int *)v2[9];
      v6 = v4;
      if ( v2 == nullptr )
        return v6;
    }
    v1 = v4;
  }
  if ( v6 == nullptr )
    return v6;
  BIO_free(v6);
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: BIO_copy_next_retry  (binary VA: 0x1991650)
// Original: BIO_copy_next_retry
// ----------------------------------------------------------------------------
int BIO_copy_next_retry(int a1)
{
  int v1;
  int result;

  v1 = BIO_test_flags(*(uint32_t *)(a1 + 36), 15);
  BIO_set_flags(a1, v1);
  result = *(uint32_t *)(*(uint32_t *)(a1 + 36) + 24);
  *(uint32_t *)(a1 + 24) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: BIO_get_ex_new_index  (binary VA: 0x19916a0)
// Original: BIO_get_ex_new_index
// ----------------------------------------------------------------------------
int BIO_get_ex_new_index(int a1, int a2, int a3, int a4, int a5)
{
  return CRYPTO_get_ex_new_index(0, a1, a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: BIO_set_ex_data  (binary VA: 0x19916f0)
// Original: BIO_set_ex_data
// ----------------------------------------------------------------------------
int BIO_set_ex_data(int a1, int a2, int a3)
{
  return CRYPTO_set_ex_data((int *)(a1 + 56), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: BIO_get_ex_data  (binary VA: 0x1991730)
// Original: BIO_get_ex_data
// ----------------------------------------------------------------------------
int BIO_get_ex_data(int a1, int a2)
{
  return CRYPTO_get_ex_data((uint32_t *)(a1 + 56), a2);
}

// ----------------------------------------------------------------------------
// Function: BIO_number_read  (binary VA: 0x1991760)
// Original: BIO_number_read
// ----------------------------------------------------------------------------
int BIO_number_read(int a1)
{
  int result;

  result = 0;
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 48);
  return result;
}

// ----------------------------------------------------------------------------
// Function: BIO_number_written  (binary VA: 0x1991770)
// Original: BIO_number_written
// ----------------------------------------------------------------------------
int BIO_number_written(int a1)
{
  int result;

  result = 0;
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 52);
  return result;
}

// ----------------------------------------------------------------------------
// Function: BIO_s_bio  (binary VA: 0x1992180)
// Original: BIO_s_bio
// ----------------------------------------------------------------------------
void * BIO_s_bio()
{
  return &unk_20CB600;
}

// ----------------------------------------------------------------------------
// Function: BIO_new_bio_pair  (binary VA: 0x19921a0)
// Original: BIO_new_bio_pair
// ----------------------------------------------------------------------------
int BIO_new_bio_pair(uint32_t *a1, int a2, uint32_t *a3, int a4)
{
  uint8_t *v4;
  void *v5;
  uint8_t *v6;
  int result;
  void *v8;

  v4 = nullptr;
  v5 = BIO_s_bio();
  v6 = BIO_new((int)(uintptr_t)(v5));
  result = 0;
  if ( v6 != nullptr )
  {
    v8 = BIO_s_bio();
    v4 = BIO_new((int)(uintptr_t)(v8));
    if ( v4 != nullptr
      && (a2 == 0 || BIO_ctrl(v6, 136, a2, 0) != 0)
      && (a4 == 0 || BIO_ctrl(v4, 136, a4, 0) != 0)
      && BIO_ctrl(v6, 138, 0, (int)(uintptr_t)(v4)) != 0 )
    {
      result = 1;
    }
    else
    {
      BIO_free(v6);
      if ( v4 != nullptr )
      {
        v6 = nullptr;
        BIO_free(v4);
        v4 = nullptr;
        result = 0;
      }
      else
      {
        result = 0;
        v6 = nullptr;
      }
    }
  }
  *a1 = (uint32_t)(uintptr_t)(v6);
  *a3 = (uint32_t)(uintptr_t)(v4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: BIO_ctrl_get_write_guarantee  (binary VA: 0x19922c0)
// Original: BIO_ctrl_get_write_guarantee
// ----------------------------------------------------------------------------
int BIO_ctrl_get_write_guarantee(uint32_t *a1)
{
  return BIO_ctrl(a1, 140, 0, 0);
}

// ----------------------------------------------------------------------------
// Function: BIO_ctrl_get_read_request  (binary VA: 0x1992300)
// Original: BIO_ctrl_get_read_request
// ----------------------------------------------------------------------------
int BIO_ctrl_get_read_request(uint32_t *a1)
{
  return BIO_ctrl(a1, 141, 0, 0);
}

// ----------------------------------------------------------------------------
// Function: BIO_ctrl_reset_read_request  (binary VA: 0x1992340)
// Original: BIO_ctrl_reset_read_request
// ----------------------------------------------------------------------------
bool BIO_ctrl_reset_read_request(uint32_t *a1)
{
  return BIO_ctrl(a1, 147, 0, 0) != 0;
}

// ----------------------------------------------------------------------------
// Function: BIO_nread0  (binary VA: 0x1992390)
// Original: BIO_nread0
// ----------------------------------------------------------------------------
int BIO_nread0(uint32_t *a1, int a2)
{
  if ( a1[3] != 0 )
    return BIO_ctrl(a1, 143, 0, a2);
  ERR_put_error(32, 124, 120, &unk_1B15112, 0);
  return -2;
}

// ----------------------------------------------------------------------------
// Function: BIO_nread  (binary VA: 0x1992410)
// Original: BIO_nread
// ----------------------------------------------------------------------------
int BIO_nread(uint32_t *a1, int a2, int a3)
{
  int result;

  if ( a1[3] != 0 )
  {
    result = BIO_ctrl(a1, 144, a3, a2);
    if ( result > 0 )
      a1[12] += result;
  }
  else
  {
    ERR_put_error(32, 123, 120, &unk_1B15112, 0);
    return -2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BIO_nwrite0  (binary VA: 0x19924a0)
// Original: BIO_nwrite0
// ----------------------------------------------------------------------------
int BIO_nwrite0(uint32_t *a1, int a2)
{
  if ( a1[3] != 0 )
    return BIO_ctrl(a1, 145, 0, a2);
  ERR_put_error(32, 122, 120, &unk_1B15112, 0);
  return -2;
}

// ----------------------------------------------------------------------------
// Function: BIO_nwrite  (binary VA: 0x1992520)
// Original: BIO_nwrite
// ----------------------------------------------------------------------------
int BIO_nwrite(uint32_t *a1, int a2, int a3)
{
  int result;

  if ( a1[3] != 0 )
  {
    result = BIO_ctrl(a1, 146, a3, a2);
    if ( result > 0 )
      a1[13] += result;
  }
  else
  {
    ERR_put_error(32, 125, 120, &unk_1B15112, 0);
    return -2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BIO_s_file  (binary VA: 0x1992bc0)
// Original: BIO_s_file
// ----------------------------------------------------------------------------
void * BIO_s_file()
{
  return &unk_20CB640;
}

// ----------------------------------------------------------------------------
// Function: BIO_new_fp  (binary VA: 0x1992be0)
// Original: BIO_new_fp
// ----------------------------------------------------------------------------
uint32_t * BIO_new_fp(int a1, int a2)
{
  void *v2;
  uint8_t *v3;
  uint32_t *v4;

  v2 = BIO_s_file();
  v3 = BIO_new((int)(uintptr_t)(v2));
  v4 = (uint32_t *)(v3);
  if ( v3 != nullptr )
  {
    BIO_set_flags((int)(uintptr_t)(v3), 0);
    BIO_ctrl(v4, 106, a2, a1);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: BIO_new_file  (binary VA: 0x1992c50)
// Original: BIO_new_file
// ----------------------------------------------------------------------------
uint32_t * BIO_new_file(char *filename, char *modes)
{
  int v2;
  int v3;
  FILE *v4;
  void *v5;
  uint8_t *v6;
  uint32_t *v7;
  uint32_t *v9;
  int v10;
  int v11;

  v4 = fopen(filename, modes);
  if ( v4 != nullptr )
  {
    v5 = BIO_s_file();
    v6 = BIO_new((int)(uintptr_t)(v5));
    v7 = (uint32_t *)(v6);
    if ( v6 != nullptr )
    {
      BIO_clear_flags((int)(uintptr_t)(v6), 0);
      BIO_ctrl(v7, 106, 1, (int)(uintptr_t)(v4));
    }
    else
    {
      fclose(v4);
    }
  }
  else
  {
    v9 = (uint32_t *)__errno(v3, v2);
    ERR_put_error(2, 1, *v9, &unk_1B15112, 0);
    ERR_add_error_data(5, "fopen('", filename, "','", modes, "')");
    v7 = nullptr;
    if ( *(uint32_t *)__errno(v11, v10) == 2 )
      ERR_put_error(32, 109, 128, &unk_1B15112, 0);
    else
      ERR_put_error(32, 109, 2, &unk_1B15112, 0);
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: BIO_s_mem  (binary VA: 0x19932f0)
// Original: BIO_s_mem
// ----------------------------------------------------------------------------
void * BIO_s_mem()
{
  return &unk_20CB680;
}

// ----------------------------------------------------------------------------
// Function: BIO_new_mem_buf  (binary VA: 0x1993310)
// Original: BIO_new_mem_buf
// ----------------------------------------------------------------------------
uint32_t * BIO_new_mem_buf(char *s, int a2)
{
  size_t v2;
  void *v3;
  uint32_t *result;
  size_t *v5;

  if ( s != nullptr )
  {
    v2 = a2;
    if ( a2 < 0 )
      v2 = strlen(s);
    v3 = BIO_s_mem();
    result = (uint32_t *)(BIO_new((int)(uintptr_t)(v3)));
    if ( result != nullptr )
    {
      v5 = (size_t *)result[8];
      v5[1] = (size_t)s;
      *v5 = v2;
      v5[2] = v2;
      result[7] = 0;
      result[5] |= 0x200u;
    }
  }
  else
  {
    ERR_put_error(32, 126, 115, &unk_1B15112, 0);
    return nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BIO_s_socket  (binary VA: 0x1993540)
// Original: BIO_s_socket
// ----------------------------------------------------------------------------
void * BIO_s_socket()
{
  return &unk_20CB6C0;
}

// ----------------------------------------------------------------------------
// Function: BIO_new_socket  (binary VA: 0x1993560)
// Original: BIO_new_socket
// ----------------------------------------------------------------------------
uint8_t * BIO_new_socket(int a1, int a2)
{
  void *v2;
  uint8_t *v3;

  v2 = BIO_s_socket();
  v3 = BIO_new((int)(uintptr_t)(v2));
  if ( v3 != nullptr )
    BIO_int_ctrl(v3, 104, a2, a1);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: BIO_sock_non_fatal_error  (binary VA: 0x19935c0)
// Original: BIO_sock_non_fatal_error
// ----------------------------------------------------------------------------
int BIO_sock_non_fatal_error(int a1)
{
  if ( a1 == 71 )
    return 1;
  if ( a1 <= 71 )
    return a1 == 4 || a1 == 11;
  return a1 == 107 || a1 >= 107 && (unsigned int)(a1 - 114) <= 1;
}

// ----------------------------------------------------------------------------
// Function: BIO_sock_should_retry  (binary VA: 0x1993600)
// Original: BIO_sock_should_retry
// ----------------------------------------------------------------------------
int BIO_sock_should_retry(int a1)
{
  int v1;
  int result;
  int *v3;

  result = 0;
  if ( (unsigned int)(a1 + 1) <= 1 )
  {
    v3 = (int *)__errno(v1, a1 + 1);
    return BIO_sock_non_fatal_error(*v3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_CTX_init  (binary VA: 0x19937c0)
// Original: BN_CTX_init
// ----------------------------------------------------------------------------
uint32_t * BN_CTX_init(uint32_t *a1)
{
  uint32_t *v1;
  uint32_t *result;
  uint32_t *v3;

  v1 = (uint32_t *)*a1;
  result = nullptr;
  if ( *a1 != 0 )
  {
    do
    {
      v3 = v1;
      do
      {
        if ( *v3 != 0 )
          BN_clear(v3);
        v3 += 5;
      }
      while ( v3 != v1 + 80 );
      v1 = (uint32_t *)v1[81];
    }
    while ( v1 != nullptr );
    result = (uint32_t *)*a1;
  }
  a1[1] = (uint32_t)(uintptr_t)(result);
  a1[3] = 0;
  a1[6] = 0;
  a1[8] = 0;
  a1[9] = 0;
  a1[10] = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_CTX_new  (binary VA: 0x1993840)
// Original: BN_CTX_new
// ----------------------------------------------------------------------------
uint32_t * BN_CTX_new()
{
  uint32_t *result;

  result = (uint32_t *)(CRYPTO_malloc(44, (int)(uintptr_t)(&unk_1B15112), 0));
  if ( result != nullptr )
  {
    result[2] = 0;
    result[1] = 0;
    *result = 0;
    result[4] = 0;
    result[3] = 0;
    result[5] = 0;
    result[7] = 0;
    result[6] = 0;
    result[8] = 0;
    result[9] = 0;
    result[10] = 0;
  }
  else
  {
    ERR_put_error(3, 106, 65, &unk_1B15112, 0);
    return nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_CTX_free  (binary VA: 0x1993900)
// Original: BN_CTX_free
// ----------------------------------------------------------------------------
int BN_CTX_free(void **a1)
{
  uint32_t *v1;
  uint32_t *v2;
  void *v3;
  int result;

  if ( a1 != nullptr )
  {
    if ( a1[7] != nullptr )
      CRYPTO_free(a1[5]);
    v1 = (uint32_t *)(*a1);
    if ( *a1 != nullptr )
    {
      do
      {
        v2 = v1 + 80;
        do
        {
          if ( *v1 != 0 )
            BN_clear_free(v1);
          v1 += 5;
        }
        while ( v1 != v2 );
        v3 = *a1;
        a1[1] = *((void **)*a1 + 81);
        CRYPTO_free(v3);
        v1 = (uint32_t *)(a1[1]);
        *a1 = v1;
      }
      while ( v1 != nullptr );
    }
    return CRYPTO_free(a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_CTX_start  (binary VA: 0x1993990)
// Original: BN_CTX_start
// ----------------------------------------------------------------------------
int BN_CTX_start(int a1)
{
  int v1;
  int v2;
  int v3;
  uint8_t *dest;
  int result;
  int v6;
  unsigned int v7;
  unsigned int v8;
  int v9;
  unsigned int v10;
  unsigned int v11;

  v1 = *(uint32_t *)(a1 + 36);
  if ( v1 != 0 || *(uint32_t *)(a1 + 40) != 0 )
  {
    result = v1 + 1;
    *(uint32_t *)(a1 + 36) = result;
  }
  else
  {
    v2 = *(uint32_t *)(a1 + 24);
    v3 = *(uint32_t *)(a1 + 32);
    if ( v2 != *(uint32_t *)(a1 + 28) )
    {
      dest = *(uint8_t **)(a1 + 20);
LABEL_5:
      *(uint32_t *)&dest[4 * v2] = v3;
      result = v2 + 1;
      *(uint32_t *)(a1 + 24) = result;
      return result;
    }
    v6 = 128;
    v7 = 32;
    if ( v2 != 0 )
    {
      v7 = (unsigned int)(3 * v2) >> 1;
      v6 = 4 * v7;
    }
    v10 = v7;
    dest = CRYPTO_malloc(v6, (int)(uintptr_t)(&unk_1B15112), 0);
    v8 = v10;
    if ( dest != nullptr )
    {
      v9 = *(uint32_t *)(a1 + 24);
      if ( v9 != 0 )
      {
        memcpy(dest, *(const void **)(a1 + 20), 4 * v9);
        v8 = v10;
      }
      if ( *(uint32_t *)(a1 + 28) != 0 )
      {
        v11 = v8;
        CRYPTO_free(*(void **)(a1 + 20));
        v8 = v11;
      }
      *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(dest);
      *(uint32_t *)(a1 + 28) = v8;
      v2 = *(uint32_t *)(a1 + 24);
      goto LABEL_5;
    }
    result = (int)(uintptr_t)(ERR_put_error(3, 129, 109, &unk_1B15112, 0));
    ++*(uint32_t *)(a1 + 36);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_CTX_end  (binary VA: 0x1993ae0)
// Original: BN_CTX_end
// ----------------------------------------------------------------------------
unsigned int BN_CTX_end(uint32_t *a1)
{
  int v1;
  int v2;
  int v3;
  unsigned int v4;
  unsigned int result;
  int v6;
  int v7;

  v1 = a1[9];
  if ( v1 != 0 )
  {
    result = v1 - 1;
    a1[9] = result;
  }
  else
  {
    v2 = a1[5];
    v3 = a1[6] - 1;
    a1[6] = v3;
    v4 = *(uint32_t *)(v2 + 4 * v3);
    result = a1[8];
    if ( result > v4 )
    {
      v6 = a1[3];
      result -= v4;
      v7 = ((uint8_t)v6 - 1) & 0xF;
      a1[3] = v6 - result;
      while ( result != 0 )
      {
        if ( v7 != 0 )
        {
          --v7;
        }
        else
        {
          a1[1] = *(uint32_t *)(a1[1] + 320);
          v7 = 15;
        }
        --result;
      }
    }
    a1[8] = v4;
    a1[10] = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_CTX_get  (binary VA: 0x1993b60)
// Original: BN_CTX_get
// ----------------------------------------------------------------------------
uint8_t * BN_CTX_get(int *a1)
{
  uint8_t *v1;
  int v2;
  int v3;
  int v4;
  uint8_t *v6;
  uint8_t *i;
  uint8_t *v8;
  uint8_t *v9;
  uint8_t *v10;

  v1 = nullptr;
  if ( a1[9] == 0 && a1[10] == 0 )
  {
    v2 = a1[3];
    if ( v2 == a1[4] )
    {
      v6 = CRYPTO_malloc(328, (int)(uintptr_t)(&unk_1B15112), 0);
      v10 = v6;
      if ( v6 == nullptr )
        goto LABEL_19;
      v1 = v6;
      v9 = v6 + 320;
      for ( i = v6; ; i = v8 )
      {
        v8 = i + 20;
        BN_init(i);
        if ( v8 == v9 )
          break;
      }
      *((uint32_t *)v10 + 80) = a1[2];
      *((uint32_t *)v10 + 81) = 0;
      if ( *a1 != 0 )
      {
        *(uint32_t *)(a1[2] + 324) = (uint32_t)(uintptr_t)(v10);
        a1[2] = (int)(uintptr_t)(v10);
        a1[1] = (int)(uintptr_t)(v10);
      }
      else
      {
        a1[2] = (int)(uintptr_t)(v10);
        a1[1] = (int)(uintptr_t)(v10);
        *a1 = (int)(uintptr_t)(v10);
      }
      a1[4] += 16;
      ++a1[3];
    }
    else
    {
      if ( v2 != 0 )
      {
        v3 = a1[1];
        v4 = a1[3] & 0xF;
        if ( (v2 & 0xF) == 0 )
        {
          v3 = *(uint32_t *)(v3 + 324);
          a1[1] = v3;
        }
      }
      else
      {
        v3 = *a1;
        v4 = 0;
        a1[1] = *a1;
      }
      v1 = (uint8_t *)(v3 + 20 * v4);
      a1[3] = v2 + 1;
    }
    if ( v1 != nullptr )
    {
      BN_set_word(v1, 0);
      ++a1[8];
      return v1;
    }
LABEL_19:
    a1[10] = 1;
    v1 = nullptr;
    ERR_put_error(3, 116, 109, &unk_1B15112, 0);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: BN_set_params  (binary VA: 0x1993e90)
// Original: BN_set_params
// ----------------------------------------------------------------------------
int BN_set_params(int a1, int a2, int a3, int a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  int v8;

  result = a4;
  if ( a1 >= 0 )
  {
    v5 = 31;
    if ( a1 <= 31 )
      v5 = a1;
    dword_2140584 = v5;
    dword_20CB6E8 = 1 << v5;
  }
  if ( a2 >= 0 )
  {
    v6 = 31;
    if ( a2 <= 31 )
      v6 = a2;
    dword_2140588 = v6;
    dword_20CB6EC = 1 << v6;
  }
  if ( a3 >= 0 )
  {
    v7 = 31;
    if ( a3 <= 31 )
      v7 = a3;
    dword_214058C = v7;
    dword_20CB6F0 = 1 << v7;
  }
  if ( a4 >= 0 )
  {
    v8 = 31;
    if ( a4 <= 31 )
      v8 = a4;
    dword_2140590 = v8;
    dword_20CB6F4 = 1 << v8;
    return 1 << v8;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_get_params  (binary VA: 0x1993f60)
// Original: BN_get_params
// ----------------------------------------------------------------------------
int BN_get_params(int a1)
{
  int result;

  switch ( a1 )
  {
    case 0:
      return dword_2140584;
    case 1:
      return dword_2140588;
    case 2:
      return dword_214058C;
    default:
      break;
  }
  result = 0;
  if ( a1 == 3 )
    return dword_2140590;
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_value_one  (binary VA: 0x1993fb0)
// Original: BN_value_one
// ----------------------------------------------------------------------------
void ** BN_value_one()
{
  return (void **)(&off_203EF2C);
}

// ----------------------------------------------------------------------------
// Function: BN_options  (binary VA: 0x1993fd0)
// Original: BN_options
// ----------------------------------------------------------------------------
void * BN_options()
{
  if ( dword_2140594 == 0 )
  {
    dword_2140594 = 1;
    BIO_snprintf(&unk_2140598, 16, "bn(%d,%d)", 64, 32);
  }
  return &unk_2140598;
}

// ----------------------------------------------------------------------------
// Function: BN_num_bits_word  (binary VA: 0x1994040)
// Original: BN_num_bits_word
// ----------------------------------------------------------------------------
int BN_num_bits_word(unsigned int a1)
{
  if ( (a1 & 0xFFFF0000) != 0 )
  {
    if ( (a1 & 0xFF000000) != 0 )
      return (uint8_t)byte_1D22300[HIBYTE(a1)] + 24;
    else
      return (uint8_t)byte_1D22300[HIWORD(a1)] + 16;
  }
  else if ( BYTE1(a1) != 0 )
  {
    return (uint8_t)byte_1D22300[a1 >> 8] + 8;
  }
  else
  {
    return (uint8_t)byte_1D22300[a1];
  }
}

// ----------------------------------------------------------------------------
// Function: BN_num_bits  (binary VA: 0x19940a0)
// Original: BN_num_bits
// ----------------------------------------------------------------------------
int BN_num_bits(uint32_t *a1)
{
  int result;
  int v2;

  result = 0;
  v2 = a1[1];
  if ( v2 != 0 )
    return 32 * (v2 - 1) + BN_num_bits_word(*(uint32_t *)(*a1 + 4 * (v2 - 1)));
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_clear_free  (binary VA: 0x19940f0)
// Original: BN_clear_free
// ----------------------------------------------------------------------------
void * BN_clear_free(uint8_t **a1)
{
  uint8_t *v1;
  void *result;

  if ( a1 != nullptr )
  {
    if ( *a1 != nullptr )
    {
      OPENSSL_cleanse(*a1, 4 * (uint32_t)(uintptr_t)(a1[2]));
      v1 = a1[4];
      if ( ((uint8_t)(uintptr_t)(v1) & 2) != 0 )
        goto LABEL_4;
      CRYPTO_free(*a1);
    }
    v1 = a1[4];
LABEL_4:
    result = OPENSSL_cleanse((uint8_t *)a1, 0x14u);
    if ( ((uint8_t)(uintptr_t)(v1) & 1) != 0 )
      return (void *)CRYPTO_free(a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_free  (binary VA: 0x1994180)
// Original: BN_free
// ----------------------------------------------------------------------------
void BN_free(void **a1)
{
  void *v1;

  if ( a1 != nullptr )
  {
    v1 = a1[4];
    if ( *a1 != nullptr && ((uint8_t)(uintptr_t)(v1) & 2) == 0 )
    {
      CRYPTO_free(*a1);
      v1 = a1[4];
      if ( ((uint8_t)(uintptr_t)(v1) & 1) == 0 )
        goto LABEL_5;
    }
    else if ( ((uint8_t)(uintptr_t)(v1) & 1) == 0 )
    {
LABEL_5:
      BYTE1(v1) |= 0x80u;
      *a1 = nullptr;
      a1[4] = v1;
      return;
    }
    CRYPTO_free(a1);
  }
}

// ----------------------------------------------------------------------------
// Function: BN_init  (binary VA: 0x1994200)
// Original: BN_init
// ----------------------------------------------------------------------------
uint32_t * BN_init(uint32_t *a1)
{
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: BN_new  (binary VA: 0x1994230)
// Original: BN_new
// ----------------------------------------------------------------------------
uint32_t * BN_new()
{
  uint32_t *result;

  result = (uint32_t *)(CRYPTO_malloc(20, (int)(uintptr_t)(&unk_1B15112), 0));
  if ( result != nullptr )
  {
    result[4] = 1;
    result[1] = 0;
    result[3] = 0;
    result[2] = 0;
    *result = 0;
  }
  else
  {
    ERR_put_error(3, 113, 65, &unk_1B15112, 0);
    return nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_copy  (binary VA: 0x1994340)
// Original: BN_copy
// ----------------------------------------------------------------------------
uint32_t * BN_copy(uint32_t *a1, uint32_t *a2)
{
  int v2;
  int v3;
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  bool v9;
  int v10;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  int v15;

  if ( a1 != a2 )
  {
    v2 = a2[1];
    if ( v2 > a1[2] )
    {
      if ( bn_expand2((int)(uintptr_t)(a1), a2[1]) == 0 )
        return nullptr;
      v2 = a2[1];
    }
    v3 = v2 >> 2;
    v15 = v2 >> 2;
    v13 = (uint32_t *)*a1;
    v14 = (uint32_t *)*a2;
    if ( v2 >> 2 > 0 )
    {
      v4 = (uint32_t *)*a2;
      v5 = (uint32_t *)*a1;
      v12 = v3;
      do
      {
        v6 = v4[1];
        v7 = v4[2];
        v8 = v4[3];
        v9 = v12-- == 1;
        *v5 = *v4;
        v5[1] = v6;
        v5[2] = v7;
        v5[3] = v8;
        v4 += 4;
        v5 += 4;
      }
      while ( !v9 );
      v13 += 4 * v15;
      v14 += 4 * v15;
      v2 = a2[1];
    }
    v10 = v2 & 3;
    if ( v10 != 2 )
    {
      if ( v10 != 3 )
      {
        if ( v10 != 1 )
        {
LABEL_10:
          a1[1] = v2;
          a1[3] = a2[3];
          return a1;
        }
LABEL_14:
        *v13 = *v14;
        v2 = a2[1];
        goto LABEL_10;
      }
      v13[2] = v14[2];
    }
    v13[1] = v14[1];
    goto LABEL_14;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: BN_dup  (binary VA: 0x1994480)
// Original: BN_dup
// ----------------------------------------------------------------------------
void ** BN_dup(uint32_t *a1)
{
  void **v1;
  void **v2;
  void **v4;

  v1 = nullptr;
  if ( a1 != nullptr )
  {
    v2 = (void **)BN_new();
    v1 = v2;
    if ( v2 != nullptr && BN_copy(v2, a1) == nullptr )
    {
      v4 = v1;
      v1 = nullptr;
      BN_free(v4);
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: BN_swap  (binary VA: 0x1994580)
// Original: BN_swap
// ----------------------------------------------------------------------------
int * BN_swap(int *a1, int *a2)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v3 = a2[4];
  v6 = a1[1];
  v7 = a1[2];
  v8 = a1[3];
  v4 = *a1;
  *a1 = *a2;
  v5 = a1[4];
  a1[1] = a2[1];
  a1[2] = a2[2];
  a1[3] = a2[3];
  a2[1] = v6;
  a2[2] = v7;
  *a2 = v4;
  a2[3] = v8;
  a1[4] = v5 & 1 | v3 & 2;
  a2[4] = v3 & 1 | v5 & 2;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: BN_clear  (binary VA: 0x1994610)
// Original: BN_clear
// ----------------------------------------------------------------------------
void * BN_clear(int a1)
{
  void *result;

  result = *(void **)a1;
  if ( *(uint32_t *)a1 != 0 )
    result = memset(result, 0, 4 * *(uint32_t *)(a1 + 8));
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 12) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_get_word  (binary VA: 0x1994670)
// Original: BN_get_word
// ----------------------------------------------------------------------------
int BN_get_word(uint32_t *a1)
{
  int result;

  result = -1;
  if ( (int)a1[1] <= 1 )
  {
    result = 0;
    if ( a1[1] == 1 )
      return *(uint32_t *)*a1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_set_word  (binary VA: 0x1994690)
// Original: BN_set_word
// ----------------------------------------------------------------------------
int BN_set_word(uint32_t *a1, int a2)
{
  uint32_t *v2;

  if ( (int)a1[2] <= 0 && bn_expand2((int)(uintptr_t)(a1), 1) == 0 )
    return 0;
  v2 = (uint32_t *)*a1;
  a1[3] = 0;
  *v2 = a2;
  a1[1] = a2 != 0;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: BN_bin2bn  (binary VA: 0x1994700)
// Original: BN_bin2bn
// ----------------------------------------------------------------------------
void ** BN_bin2bn(uint8_t *a1, int a2, void **a3)
{
  void **v3;
  int v5;
  int v6;
  unsigned int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v16;
  void **v17;
  char v18;
  int v19;
  void **v20;
  void **v21;

  v3 = a3;
  v5 = a2;
  v20 = nullptr;
  if ( a3 == nullptr )
  {
    v17 = (void **)BN_new();
    v20 = v17;
    v5 = a2;
    if ( v17 == nullptr )
      return v3;
    v3 = v17;
  }
  v6 = v5;
  if ( v5 == 0 )
  {
    v3[1] = nullptr;
    return v3;
  }
  v7 = v5 - 1;
  v8 = (v7 >> 2) + 1;
  if ( v8 > (int)(uintptr_t)(v3[2]) )
  {
    v19 = (v7 >> 2) + 1;
    v18 = v7;
    v16 = bn_expand2((int)(uintptr_t)(v3), v19);
    v8 = v19;
    LOBYTE(v7) = v18;
    if ( v16 == 0 )
    {
      v3 = nullptr;
      if ( v20 != nullptr )
      {
        BN_free(v20);
        return nullptr;
      }
      return v3;
    }
  }
  v9 = v7 & 3;
  v3[1] = (void *)v8;
  v3[3] = nullptr;
  v10 = 0;
  v21 = v3;
  do
  {
    while ( 1 )
    {
      v11 = v10 << 8;
      v12 = *a1++;
      v10 = v11 | v12;
      if ( v9 == 0 )
        break;
      --v9;
      if ( --v6 == 0 )
        goto LABEL_8;
    }
    --v8;
    *((uint32_t *)*v21 + v8) = v10;
    v10 = 0;
    --v6;
    v9 = 3;
  }
  while ( v6 != 0 );
LABEL_8:
  v3 = v21;
  v13 = (int)(uintptr_t)(v21[1]);
  if ( v13 <= 0 )
    return v3;
  v14 = (int)(uintptr_t)(*v21) + 4 * v13 + -4 * v13 - 4;
  do
  {
    if ( *(uint32_t *)(v14 + 4 * v13) != 0 )
      break;
    --v13;
  }
  while ( v13 != 0 );
  v21[1] = (void *)v13;
  return v21;
}

// ----------------------------------------------------------------------------
// Function: BN_bn2bin  (binary VA: 0x1994860)
// Original: BN_bn2bin
// ----------------------------------------------------------------------------
int BN_bn2bin(uint32_t *a1, uint8_t *a2)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int64_t v7; // rax
  int v8;
  int v9;
  int v11;

  v3 = BN_num_bits(a1);
  v4 = v3 + 14;
  v5 = v3 + 7;
  if ( v5 < 0 )
    v5 = v4;
  v6 = v5 >> 3;
  v11 = v6;
  if ( v6 != 0 )
  {
    LODWORD(v7) = v6 - 1;
    do
    {
      HIDWORD(v7) = v7;
      v8 = (int)v7 / 4;
      v9 = v7 % 4;
      LODWORD(v7) = v7 - 1;
      *a2++ = *(uint32_t *)(*a1 + 4 * v8) >> (8 * v9);
    }
    while ( (uint32_t)v7 != -1 );
  }
  return v11;
}

// ----------------------------------------------------------------------------
// Function: BN_ucmp  (binary VA: 0x19948e0)
// Original: BN_ucmp
// ----------------------------------------------------------------------------
int BN_ucmp(uint32_t *a1, uint32_t *a2)
{
  int result;
  int v3;
  unsigned int v4;
  unsigned int v5;

  result = a1[1] - a2[1];
  if ( result == 0 )
  {
    v3 = a1[1] - 1;
    if ( v3 >= 0 )
    {
      while ( 1 )
      {
        v4 = *(uint32_t *)(*a1 + 4 * v3);
        v5 = *(uint32_t *)(*a2 + 4 * v3);
        if ( v4 != v5 )
          break;
        if ( --v3 == -1 )
          return result;
      }
      return v5 < v4 ? 1 : -1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_cmp  (binary VA: 0x1994930)
// Original: BN_cmp
// ----------------------------------------------------------------------------
int BN_cmp(int *a1, uint32_t *a2)
{
  int v2;
  int result;
  int v4;
  int v5;
  int v6;
  int v7;
  unsigned int v8;
  bool v9;
  unsigned int v10;

  if ( a2 != nullptr && a1 != nullptr )
  {
    v2 = a1[3];
    if ( v2 != a2[3] )
      return v2 == 0 ? 1 : -1;
    v4 = a1[1];
    v5 = v2 == 0 ? -1 : 1;
    result = v2 == 0 ? 1 : -1;
    if ( v4 <= a2[1] )
    {
      if ( v4 < a2[1] )
        return v5;
      v6 = v4 - 1;
      if ( v6 < 0 )
        return 0;
      v7 = *a1;
      v8 = *(uint32_t *)(*a2 + 4 * v6);
      v9 = *(uint32_t *)(*a1 + 4 * v6) < v8;
      if ( *(uint32_t *)(*a1 + 4 * v6) <= v8 )
      {
        while ( !v9 )
        {
          if ( --v6 == -1 )
            return 0;
          v10 = *(uint32_t *)(*a2 + 4 * v6);
          v9 = *(uint32_t *)(v7 + 4 * v6) < v10;
          if ( *(uint32_t *)(v7 + 4 * v6) > v10 )
            return result;
        }
        return v5;
      }
    }
  }
  else
  {
    result = -1;
    if ( a1 == nullptr )
      return a2 != nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_set_bit  (binary VA: 0x1994a00)
// Original: BN_set_bit
// ----------------------------------------------------------------------------
int BN_set_bit(uint32_t *a1, int a2)
{
  char v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v8;

  v2 = a2;
  v3 = 0;
  if ( a2 >= 0 )
  {
    v4 = a1[1];
    v5 = a2 >> 5;
    if ( a2 >> 5 >= v4 )
    {
      if ( v5 < a1[2] )
        goto LABEL_4;
      v8 = bn_expand2((int)(uintptr_t)(a1), v5 + 1);
      v2 = a2;
      if ( v8 == 0 )
        return v3;
      v4 = a1[1];
      if ( v5 >= v4 )
      {
LABEL_4:
        v6 = 4 * v4;
        do
        {
          ++v4;
          *(uint32_t *)(*a1 + v6) = 0;
          v6 += 4;
        }
        while ( v5 >= v4 );
      }
      a1[1] = v5 + 1;
    }
    v3 = 1;
    *(uint32_t *)(*a1 + 4 * v5) |= 1 << v2;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: BN_clear_bit  (binary VA: 0x1994ac0)
// Original: BN_clear_bit
// ----------------------------------------------------------------------------
int BN_clear_bit(uint32_t *a1, int a2)
{
  int result;
  int v3;
  int v4;

  result = 0;
  if ( a2 >= 0 && a2 >> 5 < a1[1] )
  {
    LOBYTE(result) = 1;
    *(uint32_t *)(*a1 + 4 * (a2 >> 5)) &= ~(result << a2);
    v3 = a1[1];
    result = 1;
    if ( v3 > 0 )
    {
      v4 = *a1 + 4 * v3 - 4 - 4 * v3;
      do
      {
        if ( *(uint32_t *)(v4 + 4 * v3) != 0 )
          break;
        --v3;
      }
      while ( v3 != 0 );
      a1[1] = v3;
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_is_bit_set  (binary VA: 0x1994b20)
// Original: BN_is_bit_set
// ----------------------------------------------------------------------------
int BN_is_bit_set(uint32_t *a1, int a2)
{
  int result;

  result = 0;
  if ( a2 >= 0 && a2 >> 5 < a1[1] )
    return (*(uint32_t *)(*a1 + 4 * (a2 >> 5)) >> a2) & 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_mask_bits  (binary VA: 0x1994b50)
// Original: BN_mask_bits
// ----------------------------------------------------------------------------
int BN_mask_bits(uint32_t *a1, int a2)
{
  int result;
  int v3;
  int v4;

  result = 0;
  if ( a2 >= 0 )
  {
    v3 = a2 >> 5;
    if ( a2 >> 5 < a1[1] )
    {
      if ( (a2 & 0x1F) != 0 )
      {
        a1[1] = v3 + 1;
        *(uint32_t *)(*a1 + 4 * v3) &= ~(-1 << (a2 & 0x1F));
        v3 = a1[1];
      }
      else
      {
        a1[1] = v3;
      }
      result = 1;
      if ( v3 > 0 )
      {
        v4 = *a1 + 4 * v3 - 4 - 4 * v3;
        do
        {
          if ( *(uint32_t *)(v4 + 4 * v3) != 0 )
            break;
          --v3;
        }
        while ( v3 != 0 );
        a1[1] = v3;
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_set_negative  (binary VA: 0x1994bd0)
// Original: BN_set_negative
// ----------------------------------------------------------------------------
int64_t BN_set_negative(unsigned int a1, int a2)
{
  int64_t result; // rax

  result = a1;
  if ( a2 != 0 )
    HIDWORD(result) = *(uint32_t *)(a1 + 4) != 0;
  *(uint32_t *)(a1 + 12) = HIDWORD(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: BIO_f_zlib  (binary VA: 0x1996100)
// Original: BIO_f_zlib
// ----------------------------------------------------------------------------
void * BIO_f_zlib()
{
  return &unk_20CB740;
}

// ----------------------------------------------------------------------------
// Function: CONF_modules_load  (binary VA: 0x19963e0)
// Original: CONF_modules_load
// ----------------------------------------------------------------------------
int CONF_modules_load(int a1, int a2, char a3)
{
  int result;
  int string;
  int v5;
  int v6;
  int v7;
  char *s;
  char *v9;
  int i;
  uint32_t *v11;
  int v12;
  int v13;
  char *v14;
  int v15;
  int v16;
  void *v17;
  int v18;
  uint32_t *v19;
  uint32_t *v20;
  char *v21;
  int v22;
  void *v23;
  int (*v24)(uint32_t *, int);
  int v25;
  char v26;
  void (*v27)(uint32_t *);
  int v28;
  typedef void *_g4_t_v29;
  typedef size_t _g4_t_n;
  typedef char _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_section;
  typedef char *_g4_t_v34;
  typedef uint8_t _g4_t_v35[41];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v29)) > _g4_s0 ? (8u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_n)) > _g4_s1 ? (12u + sizeof(_g4_t_n)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v31)) > _g4_s2 ? (12u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v32)) > _g4_s3 ? (16u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_section)) > _g4_s4 ? (20u + sizeof(_g4_t_section)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v34)) > _g4_s5 ? (24u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (35u + sizeof(_g4_t_v35)) > _g4_s6 ? (35u + sizeof(_g4_t_v35)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_section &section = *reinterpret_cast<_g4_t_section *>(_g4_sf + 20u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 24u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 35u);

  result = 1;
  if ( a1 != 0 )
  {
    if ( a2 == 0 )
      goto LABEL_56;
    string = NCONF_get_string(a1, 0, a2);
    if ( string != 0 )
      goto LABEL_4;
    if ( (a3 & 0x20) != 0 )
    {
LABEL_56:
      string = NCONF_get_string(a1, 0, "openssl_conf");
      if ( string != 0 )
      {
LABEL_4:
        section = NCONF_get_section(a1, string);
        result = 0;
        if ( section == 0 )
          return result;
        v32 = 0;
        while ( 2 )
        {
          if ( v32 >= sk_num(section) )
            return 1;
          v7 = sk_value(section, v32);
          s = *(char **)(v7 + 4);
          v34 = *(char **)(v7 + 8);
          v9 = strrchr(s, 46);
          if ( v9 != nullptr )
            n = v9 - s;
          else
            n = strlen(s);
          for ( i = 0; i < sk_num(dword_21405A8); ++i )
          {
            v11 = (uint32_t *)sk_value(dword_21405A8, i);
            if ( strncmp((const char *)v11[1], s, n) == 0 )
              goto LABEL_23;
          }
          if ( (a3 & 8) != 0 )
            goto LABEL_14;
          v14 = (char *)NCONF_get_string(a1, v34, "path");
          if ( v14 == nullptr )
          {
            ERR_clear_error(v13, v12);
            v14 = s;
          }
          v15 = (int)(uintptr_t)(DSO_load(nullptr, v14, 0, 0));
          if ( v15 != 0 )
          {
            v29 = (void *)v15;
            v16 = DSO_bind_func(v15, "OPENSSL_init");
            v17 = v29;
            if ( v16 != 0 )
            {
              v18 = DSO_bind_func(v29, "OPENSSL_finish");
              v11 = sub_1996310((int)(uintptr_t)(v29), s, (int)(uintptr_t)(v29), v16, v18);
              v17 = v29;
              if ( v11 != nullptr )
              {
LABEL_23:
                v19 = (uint32_t *)(CRYPTO_malloc(20, (int)(uintptr_t)(&unk_1B15112), 0));
                v20 = v19;
                if ( v19 == nullptr )
                  goto LABEL_40;
                *v19 = (uint32_t)(uintptr_t)(v11);
                v19[1] = (uint32_t)(uintptr_t)(BUF_strdup(s));
                v21 = BUF_strdup(v34);
                v23 = (void *)v20[1];
                v20[2] = (uint32_t)(uintptr_t)(v21);
                v20[4] = 0;
                if ( v23 == nullptr )
                {
LABEL_37:
                  if ( v20[2] != 0 )
                    CRYPTO_free((void *)v20[2]);
                  CRYPTO_free(v20);
LABEL_40:
                  if ( (a3 & 4) == 0 )
                  {
                    ERR_put_error(14, 118, 109, &unk_1B15112, 0);
                    BIO_snprintf(v35, 13, "%-8d", -1);
                    ERR_add_error_data(6, "module=", s, ", value=", v34, ", retcode=", v35);
                    if ( (a3 & 1) != 0 )
                      goto LABEL_17;
                    return -1;
                  }
LABEL_16:
                  if ( (a3 & 1) != 0 )
                  {
LABEL_17:
                    ++v32;
                    continue;
                  }
                  return -1;
                }
                if ( v21 == nullptr )
                {
LABEL_36:
                  CRYPTO_free(v23);
                  goto LABEL_37;
                }
                v24 = (int (*)(uint32_t *, int))v11[2];
                if ( v24 != nullptr )
                {
                  if ( v24(v20, a1) <= 0 )
                  {
                    v26 = 1;
                    goto LABEL_32;
                  }
                  v25 = dword_21405AC;
                  v31 = 1;
                  if ( dword_21405AC != 0 )
                    goto LABEL_29;
                }
                else
                {
                  v25 = dword_21405AC;
                  v31 = 0;
                  if ( dword_21405AC != 0 )
                    goto LABEL_29;
                }
                v25 = (int)(uintptr_t)(sk_new_null(v22, v23));
                dword_21405AC = v25;
                if ( v25 == 0 )
                {
LABEL_31:
                  ERR_put_error(14, 115, 65, &unk_1B15112, 0);
                  v26 = v31;
LABEL_32:
                  v27 = (void (*)(uint32_t *))v11[3];
                  if ( v26 != 0 && v27 != nullptr )
                    v27(v20);
                  v23 = (void *)v20[1];
                  if ( v23 == nullptr )
                    goto LABEL_37;
                  goto LABEL_36;
                }
LABEL_29:
                if ( sk_push(v25, v20) != 0 )
                {
                  ++v11[4];
                  goto LABEL_17;
                }
                goto LABEL_31;
              }
              v28 = 0;
            }
            else
            {
              v28 = 112;
            }
            DSO_free(v17);
          }
          else
          {
            v28 = 110;
          }
          break;
        }
        ERR_put_error(14, 117, v28, &unk_1B15112, 0);
        ERR_add_error_data(4, "module=", s, ", path=", v14);
LABEL_14:
        if ( (a3 & 4) == 0 )
        {
          ERR_put_error(14, 118, 113, &unk_1B15112, 0);
          ERR_add_error_data(2, "module=", s);
        }
        goto LABEL_16;
      }
    }
    ERR_clear_error(v6, v5);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: CONF_modules_finish  (binary VA: 0x1996910)
// Original: CONF_modules_finish
// ----------------------------------------------------------------------------
int CONF_modules_finish()
{
  void **v0;
  uint32_t *v1;
  void (*v2)(void **);
  int result;

  while ( (int)sk_num(dword_21405AC) > 0 )
  {
    v0 = (void **)sk_pop(dword_21405AC);
    v1 = (uint32_t *)(*v0);
    v2 = *((void (**)(void **))*v0 + 3);
    if ( v2 != nullptr )
    {
      v2(v0);
      v1 = (uint32_t *)(*v0);
    }
    --v1[4];
    CRYPTO_free(v0[1]);
    CRYPTO_free(v0[2]);
    CRYPTO_free(v0);
  }
  result = sk_free((void *)dword_21405AC);
  dword_21405AC = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: CONF_modules_unload  (binary VA: 0x19969a0)
// Original: CONF_modules_unload
// ----------------------------------------------------------------------------
int CONF_modules_unload(int a1)
{
  int v1;
  int v2;
  int result;

  CONF_modules_finish();
  v1 = sk_num(dword_21405A8) - 1;
  if ( v1 >= 0 )
  {
    do
    {
      v2 = sk_value(dword_21405A8, v1);
      if ( *(int *)(v2 + 16) <= 0 && *(uint32_t *)v2 != 0 || a1 != 0 )
      {
        sk_delete(dword_21405A8, v1);
        if ( *(uint32_t *)v2 != 0 )
          DSO_free(*(void **)v2);
        CRYPTO_free(*(void **)(v2 + 4));
        CRYPTO_free((void *)v2);
      }
      --v1;
    }
    while ( v1 != -1 );
  }
  result = sk_num(dword_21405A8);
  if ( result == 0 )
  {
    result = sk_free((void *)dword_21405A8);
    dword_21405A8 = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: CONF_module_add  (binary VA: 0x1996a80)
// Original: CONF_module_add
// ----------------------------------------------------------------------------
bool CONF_module_add(char *a1, int a2, int a3)
{
  int v3;

  return sub_1996310(0, a1, v3, a2, a3) != nullptr;
}

// ----------------------------------------------------------------------------
// Function: CONF_modules_free  (binary VA: 0x1996ab0)
// Original: CONF_modules_free
// ----------------------------------------------------------------------------
int CONF_modules_free()
{
  CONF_modules_finish();
  return CONF_modules_unload(1);
}

// ----------------------------------------------------------------------------
// Function: CONF_imodule_get_name  (binary VA: 0x1996ae0)
// Original: CONF_imodule_get_name
// ----------------------------------------------------------------------------
int CONF_imodule_get_name(int a1)
{
  return *(uint32_t *)(a1 + 4);
}

// ----------------------------------------------------------------------------
// Function: CONF_imodule_get_value  (binary VA: 0x1996af0)
// Original: CONF_imodule_get_value
// ----------------------------------------------------------------------------
int CONF_imodule_get_value(int a1)
{
  return *(uint32_t *)(a1 + 8);
}

// ----------------------------------------------------------------------------
// Function: CONF_imodule_get_usr_data  (binary VA: 0x1996b00)
// Original: CONF_imodule_get_usr_data
// ----------------------------------------------------------------------------
int CONF_imodule_get_usr_data(int a1)
{
  return *(uint32_t *)(a1 + 16);
}

// ----------------------------------------------------------------------------
// Function: CONF_imodule_set_usr_data  (binary VA: 0x1996b10)
// Original: CONF_imodule_set_usr_data
// ----------------------------------------------------------------------------
int CONF_imodule_set_usr_data(int a1, int a2)
{
  *(uint32_t *)(a1 + 16) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: CONF_imodule_get_module  (binary VA: 0x1996b20)
// Original: CONF_imodule_get_module
// ----------------------------------------------------------------------------
int CONF_imodule_get_module(int a1)
{
  return *(uint32_t *)a1;
}

// ----------------------------------------------------------------------------
// Function: CONF_imodule_get_flags  (binary VA: 0x1996b30)
// Original: CONF_imodule_get_flags
// ----------------------------------------------------------------------------
int CONF_imodule_get_flags(int a1)
{
  return *(uint32_t *)(a1 + 12);
}

// ----------------------------------------------------------------------------
// Function: CONF_imodule_set_flags  (binary VA: 0x1996b40)
// Original: CONF_imodule_set_flags
// ----------------------------------------------------------------------------
int CONF_imodule_set_flags(int a1, int a2)
{
  *(uint32_t *)(a1 + 12) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: CONF_module_get_usr_data  (binary VA: 0x1996b50)
// Original: CONF_module_get_usr_data
// ----------------------------------------------------------------------------
int CONF_module_get_usr_data(int a1)
{
  return *(uint32_t *)(a1 + 20);
}

// ----------------------------------------------------------------------------
// Function: CONF_module_set_usr_data  (binary VA: 0x1996b60)
// Original: CONF_module_set_usr_data
// ----------------------------------------------------------------------------
int CONF_module_set_usr_data(int a1, int a2)
{
  *(uint32_t *)(a1 + 20) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: CONF_get1_default_config_file  (binary VA: 0x1996b70)
// Original: CONF_get1_default_config_file
// ----------------------------------------------------------------------------
int CONF_get1_default_config_file()
{
  char *v0;
  int v1;
  const char *default_cert_area;
  size_t v4;
  char *v5;

  v0 = getenv("OPENSSL_CONF");
  if ( v0 != nullptr )
    return (int)(uintptr_t)(BUF_strdup(v0));
  default_cert_area = (const char *)X509_get_default_cert_area();
  v4 = strlen(default_cert_area) + 13;
  v1 = (int)(uintptr_t)(CRYPTO_malloc(v4, (int)(uintptr_t)(&unk_1B15112), 0));
  if ( v1 != 0 )
  {
    v5 = (char *)X509_get_default_cert_area();
    BUF_strlcpy(v1, v5, v4);
    BUF_strlcat(v1, "/", v4);
    BUF_strlcat(v1, "openssl.cnf", v4);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: CONF_modules_load_file  (binary VA: 0x1996c40)
// Original: CONF_modules_load_file
// ----------------------------------------------------------------------------
int CONF_modules_load_file(void *a1, int a2, char a3)
{
  int v3;
  void *v4;
  int v6;
  int v7;
  int v8;

  v3 = NCONF_new(0);
  if ( v3 != 0 )
  {
    v4 = a1;
    if ( a1 == nullptr )
    {
      v4 = (void *)CONF_get1_default_config_file();
      if ( v4 == nullptr )
      {
        v8 = 0;
        goto LABEL_13;
      }
    }
    if ( (int)NCONF_load(v3, v4, 0) <= 0 )
    {
      v8 = 0;
      if ( (a3 & 0x10) != 0 && (ERR_peek_last_error() & 0xFFF) == 0x72 )
      {
        ERR_clear_error(v7, v6);
        v8 = 1;
      }
    }
    else
    {
      v8 = CONF_modules_load(v3, a2, a3);
    }
  }
  else
  {
    v8 = 0;
    v4 = nullptr;
  }
  if ( a1 == nullptr )
LABEL_13:
    CRYPTO_free(v4);
  NCONF_free(v3);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: CONF_parse_list  (binary VA: 0x1996d50)
// Original: CONF_parse_list
// ----------------------------------------------------------------------------
int CONF_parse_list(char *a1, int c, int a3, int (*a4)(char *, int, int), int a5)
{
  char *s;
  char *v6;
  char *v7;
  char *v8;
  uint8_t i;
  int result;

  s = a1;
  if ( a1 != nullptr )
  {
    while ( 1 )
    {
      if ( a3 != 0 )
      {
        for ( i = *s; *s != 0; i = *++s )
        {
          if ( isspace(i) == 0 )
            break;
        }
      }
      v6 = strchr(s, c);
      v7 = v6;
      if ( v6 == s || *s == 0 )
      {
        result = a4(nullptr, 0, a5);
        if ( result <= 0 )
          return result;
      }
      else
      {
        v8 = v6 - 1;
        if ( v6 == nullptr )
          v8 = &s[strlen(s) - 1];
        if ( a3 != 0 )
        {
          while ( isspace((uint8_t)*v8) != 0 )
            --v8;
        }
        result = a4(s, v8 - s + 1, a5);
        if ( result <= 0 )
          return result;
      }
      if ( v7 == nullptr )
        break;
      s = v7 + 1;
    }
    return 1;
  }
  else
  {
    ERR_put_error(14, 119, 115, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: DES_options  (binary VA: 0x1996ea0)
// Original: DES_options
// ----------------------------------------------------------------------------
void * DES_options()
{
  if ( dword_20CB768 != 0 )
  {
    BIO_snprintf(&unk_21405C0, 32, "des(%s,%s,%s,%s)", "idx", "cisc", "16", "long");
    dword_20CB768 = 0;
  }
  return &unk_21405C0;
}

// ----------------------------------------------------------------------------
// Function: DES_ecb_encrypt  (binary VA: 0x1996f30)
// Original: DES_ecb_encrypt
// ----------------------------------------------------------------------------
unsigned int DES_ecb_encrypt(uint8_t *a1, uint8_t *a2, int a3, int a4)
{
  int16_t v4; // eax^2
  char v5;
  char v6; // edx^2
  unsigned int v7;
  unsigned int v8;
  unsigned int result;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);

  v10 = (a1[3] << 24) | *a1 | (a1[2] << 16) | (a1[1] << 8);
  v11 = (a1[7] << 24) | a1[4] | (a1[6] << 16) | (a1[5] << 8);
  DES_encrypt1(&v10, a3, a4);
  v4 = HIWORD(v10);
  v5 = BYTE1(v10);
  *a2 = v10;
  a2[1] = v5;
  v6 = v4;
  a2[3] = HIBYTE(v4);
  v7 = v11;
  a2[4] = v11;
  a2[2] = v6;
  a2[5] = BYTE1(v7);
  v8 = HIWORD(v7);
  result = HIBYTE(v7);
  a2[6] = v8;
  a2[7] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: DES_set_odd_parity  (binary VA: 0x1996ff0)
// Original: DES_set_odd_parity
// ----------------------------------------------------------------------------
int DES_set_odd_parity(int a1)
{
  int result;

  for ( result = 0; result != 8; ++result )
    *(uint8_t *)(a1 + result) = byte_1D224A0[*(uint8_t *)(a1 + result)];
  return result;
}

// ----------------------------------------------------------------------------
// Function: DES_check_key_parity  (binary VA: 0x1997030)
// Original: DES_check_key_parity
// ----------------------------------------------------------------------------
char DES_check_key_parity(int a1)
{
  int v1;

  v1 = 0;
  while ( *(uint8_t *)(a1 + v1) == byte_1D224A0[*(uint8_t *)(a1 + v1)] )
  {
    if ( ++v1 == 8 )
      return 1;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: DES_is_weak_key  (binary VA: 0x1997070)
// Original: DES_is_weak_key
// ----------------------------------------------------------------------------
int DES_is_weak_key(void *s2)
{
  char *s1;

  s1 = (char *)&unk_1D225A0;
  while ( memcmp(s1, s2, 8u) != 0 )
  {
    s1 += 8;
    if ( s1 == (char *)&unk_1D22620 )
      return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: DES_set_key_unchecked  (binary VA: 0x19970e0)
// Original: DES_set_key_unchecked
// ----------------------------------------------------------------------------
int DES_set_key_unchecked(uint8_t *a1, uint32_t *a2)
{
  int v2;
  unsigned int v3;
  int v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  unsigned int v9;
  int v10;
  int v11;
  unsigned int v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  int result;
  unsigned int v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  int v22;
  int v23;
  unsigned int v24;
  int v25;
  unsigned int v26;
  int v27;
  int *v28;

  v2 = (a1[3] << 24) | *a1 | (a1[2] << 16) | (a1[1] << 8);
  v3 = (v2 ^ ((unsigned int)((a1[7] << 24) | a1[4] | (a1[6] << 16) | (a1[5] << 8)) >> 4)) & 0xF0F0F0F;
  v4 = v3 ^ v2;
  v5 = ((a1[7] << 24) | a1[4] | (a1[6] << 16) | (a1[5] << 8)) ^ (16 * v3);
  v6 = (((v4 ^ (v4 << 18)) & 0xCCCC0000) >> 18) ^ (v4 ^ (v4 << 18)) & 0xCCCC0000 ^ v4;
  v7 = (((v5 ^ (v5 << 18)) & 0xCCCC0000) >> 18) ^ (v5 ^ (v5 << 18)) & 0xCCCC0000 ^ v5;
  v8 = (v6 ^ (v7 >> 1)) & 0x55555555;
  v9 = v8 ^ v6;
  v10 = v7 ^ (2 * v8);
  v11 = (v10 ^ (v9 >> 8)) & 0xFF00FF;
  v12 = v11 ^ v10;
  v13 = v9 ^ (v11 << 8);
  v14 = (v13 ^ (v12 >> 1)) & 0x55555555;
  v15 = v14 ^ v13;
  v28 = (int *)&unk_1D22620;
  v16 = (((v12 ^ (2 * v14)) & 0xFF0000) >> 16)
      | ((uint8_t)(v12 ^ (2 * v14)) << 16)
      | ((uint16_t)v12 ^ (uint16_t)(2 * v14)) & 0xFF00
      | ((v15 & 0xF0000000) >> 4);
  result = v15 & 0xFFFFFFF;
  do
  {
    v24 = result;
    v25 = result;
    v26 = v16;
    if ( *v28 != 0 )
    {
      v18 = v16 << 26;
      v19 = (v24 >> 2) | (v25 << 26);
      v20 = v26 >> 2;
    }
    else
    {
      v18 = v16 << 27;
      v19 = (v24 >> 1) | (v25 << 27);
      v20 = v26 >> 1;
    }
    v27 = v20 | v18;
    result = v19 & 0xFFFFFFF;
    v16 = v27 & 0xFFFFFFF;
    v21 = dword_1D22960[((v19 & 0xFFFFFFFu) >> 22) & 0x38 | ((v19 & 0x100000) != 0) | ((v19 & 0xFFFFFFFu) >> 21) & 6]
        | dword_1D22660[v19 & 0x3F]
        | dword_1D22860[((v19 & 0xFFFFFFFu) >> 13) & 0xF | ((v19 & 0xFFFFFFFu) >> 14) & 0x30]
        | dword_1D22760[((uint8_t)v19 >> 6) | ((v19 & 0xFFFFFFFu) >> 7) & 0x3C];
    ++v28;
    v22 = dword_1D22D60[((v27 & 0xFFFFFFFu) >> 21) & 0xF | ((v27 & 0xFFFFFFFu) >> 22) & 0x30]
        | dword_1D22B60[((v27 & 0xFFFFFFFu) >> 7) & 3 | ((v27 & 0xFFFFFFFu) >> 8) & 0x3C]
        | dword_1D22A60[v27 & 0x3F]
        | dword_1D22C60[((v27 & 0xFFFFFFFu) >> 15) & 0x3F];
    v23 = v22 << 16;
    LOWORD(v22) = 0;
    *a2 = __builtin_rotateleft32(v23 | (uint16_t)v21, 2);
    a2[1] = __builtin_rotateleft32(v22 | HIWORD(v21), 6);
    a2 += 2;
  }
  while ( v28 != (int *)(uintptr_t)(dword_1D22660) );
  return result;
}

// ----------------------------------------------------------------------------
// Function: DES_set_key_checked  (binary VA: 0x1997350)
// Original: DES_set_key_checked
// ----------------------------------------------------------------------------
int DES_set_key_checked(void *a1, uint32_t *a2)
{
  int v2;
  int v3;
  int is_weak_key;

  LOBYTE(v2) = DES_check_key_parity((int)(uintptr_t)(a1));
  v3 = -1;
  if ( v2 != 0 )
  {
    is_weak_key = DES_is_weak_key(a1);
    v3 = -2;
    if ( is_weak_key == 0 )
    {
      DES_set_key_unchecked((uint8_t *)a1, a2);
      return 0;
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: DES_set_key  (binary VA: 0x19973b0)
// Original: DES_set_key
// ----------------------------------------------------------------------------
int DES_set_key(void *a1, uint32_t *a2)
{
  if ( shadow_DES_check_key != 0 )
    return DES_set_key_checked(a1, a2);
  DES_set_key_unchecked((uint8_t *)a1, a2);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: DES_key_sched  (binary VA: 0x1997400)
// Original: DES_key_sched
// ----------------------------------------------------------------------------
int DES_key_sched(void *a1, uint32_t *a2)
{
  return DES_set_key(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: d2i_DHparams  (binary VA: 0x1998240)
// Original: d2i_DHparams
// ----------------------------------------------------------------------------
int d2i_DHparams(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&DHparams_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_DHparams  (binary VA: 0x1998280)
// Original: i2d_DHparams
// ----------------------------------------------------------------------------
int i2d_DHparams(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&DHparams_it));
}

// ----------------------------------------------------------------------------
// Function: DH_generate_key  (binary VA: 0x1998880)
// Original: DH_generate_key
// ----------------------------------------------------------------------------
int DH_generate_key(int a1)
{
  return (*(int (**)(int))(*(uint32_t *)(a1 + 68) + 4))(a1);
}

// ----------------------------------------------------------------------------
// Function: DH_compute_key  (binary VA: 0x19988a0)
// Original: DH_compute_key
// ----------------------------------------------------------------------------
int DH_compute_key(int a1, int a2, int a3)
{
  return (*(int (**)(int, int, int))(*(uint32_t *)(a3 + 68) + 8))(a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: DH_OpenSSL  (binary VA: 0x19988d0)
// Original: DH_OpenSSL
// ----------------------------------------------------------------------------
char ** DH_OpenSSL()
{
  return (char **)(&off_20CB780);
}

// ----------------------------------------------------------------------------
// Function: DH_set_default_method  (binary VA: 0x19988f0)
// Original: DH_set_default_method
// ----------------------------------------------------------------------------
int DH_set_default_method(int a1)
{
  dword_21405E4 = a1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: DH_get_default_method  (binary VA: 0x1998910)
// Original: DH_get_default_method
// ----------------------------------------------------------------------------
char ** DH_get_default_method()
{
  char **result;

  result = (char **)dword_21405E4;
  if ( dword_21405E4 == 0 )
  {
    result = DH_OpenSSL();
    dword_21405E4 = (int)(uintptr_t)(result);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: DH_set_method  (binary VA: 0x1998950)
// Original: DH_set_method
// ----------------------------------------------------------------------------
int DH_set_method(int a1, int a2)
{
  void (*v2)(int);
  void (*v3)(int);

  v2 = *(void (**)(int))(*(uint32_t *)(a1 + 68) + 20);
  if ( v2 != nullptr )
    v2(a1);
  if ( *(uint32_t *)(a1 + 72) != 0 )
  {
    ENGINE_finish(*(uint32_t *)(a1 + 72));
    *(uint32_t *)(a1 + 72) = 0;
  }
  *(uint32_t *)(a1 + 68) = a2;
  v3 = *(void (**)(int))(a2 + 16);
  if ( v3 != nullptr )
    v3(a1);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: DH_new_method  (binary VA: 0x19989c0)
// Original: DH_new_method
// ----------------------------------------------------------------------------
uint32_t * DH_new_method(int a1)
{
  int default_DH;
  uint32_t *v2;
  int DH;
  int v4;
  int (*v5)(uint32_t *);
  void *v7;
  void *v8;
  void *v9;

  default_DH = a1;
  v2 = (uint32_t *)(CRYPTO_malloc(76, (int)(uintptr_t)(&unk_1B15112), 0));
  if ( v2 == nullptr )
  {
    ERR_put_error(5, 105, 65, &unk_1B15112, 0);
    return v2;
  }
  v2[17] = (uint32_t)(uintptr_t)(DH_get_default_method());
  if ( a1 != 0 )
  {
    if ( ENGINE_init(a1) == 0 )
    {
      ERR_put_error(5, 105, 38, &unk_1B15112, 0);
      v8 = v2;
      v2 = nullptr;
      CRYPTO_free(v8);
      return v2;
    }
    v2[18] = a1;
    goto LABEL_5;
  }
  default_DH = ENGINE_get_default_DH();
  v2[18] = default_DH;
  if ( default_DH != 0 )
  {
LABEL_5:
    DH = ENGINE_get_DH(default_DH);
    v2[17] = DH;
    if ( DH == 0 )
    {
      ERR_put_error(5, 105, 38, &unk_1B15112, 0);
      ENGINE_finish(v2[18]);
      v9 = v2;
      v2 = nullptr;
      CRYPTO_free(v9);
      return v2;
    }
  }
  v4 = v2[17];
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  v2[3] = 0;
  v2[4] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[9] = 0;
  v2[10] = 0;
  v2[11] = 0;
  v2[12] = 0;
  v2[13] = 0;
  v2[8] = 0;
  v2[14] = 1;
  v2[7] = *(uint32_t *)(v4 + 24);
  CRYPTO_new_ex_data(8, (int)(uintptr_t)(v2), (int)(uintptr_t)(v2 + 15));
  v5 = *(int (**)(uint32_t *))(v2[17] + 16);
  if ( v5 != nullptr && v5(v2) == 0 )
  {
    if ( v2[18] != 0 )
      ENGINE_finish(v2[18]);
    CRYPTO_free_ex_data(8, (int)(uintptr_t)(v2), (int)(uintptr_t)(v2 + 15));
    v7 = v2;
    v2 = nullptr;
    CRYPTO_free(v7);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: DH_new  (binary VA: 0x1998be0)
// Original: DH_new
// ----------------------------------------------------------------------------
uint32_t * DH_new()
{
  return DH_new_method(0);
}

// ----------------------------------------------------------------------------
// Function: DH_free  (binary VA: 0x1998c10)
// Original: DH_free
// ----------------------------------------------------------------------------
void DH_free(void *a1)
{
  void (*v1)(void *);

  if ( a1 != nullptr && CRYPTO_add_lock((uint32_t *)a1 + 14, -1, 26, (int)(uintptr_t)(&unk_1B15112), 0) <= 0 )
  {
    v1 = *(void (**)(void *))(*((uint32_t *)a1 + 17) + 20);
    if ( v1 != nullptr )
      v1(a1);
    if ( *((uint32_t *)a1 + 18) != 0 )
      ENGINE_finish(*((uint32_t *)a1 + 18));
    CRYPTO_free_ex_data(8, (int)(uintptr_t)(a1), (int)(uintptr_t)(a1) + 60);
    if ( *((uint32_t *)a1 + 2) != 0 )
      BN_clear_free(*((uint8_t ***)a1 + 2));
    if ( *((uint32_t *)a1 + 3) != 0 )
      BN_clear_free(*((uint8_t ***)a1 + 3));
    if ( *((uint32_t *)a1 + 9) != 0 )
      BN_clear_free(*((uint8_t ***)a1 + 9));
    if ( *((uint32_t *)a1 + 10) != 0 )
      BN_clear_free(*((uint8_t ***)a1 + 10));
    if ( *((uint32_t *)a1 + 11) != 0 )
      CRYPTO_free(*((void **)a1 + 11));
    if ( *((uint32_t *)a1 + 13) != 0 )
      BN_clear_free(*((uint8_t ***)a1 + 13));
    if ( *((uint32_t *)a1 + 5) != 0 )
      BN_clear_free(*((uint8_t ***)a1 + 5));
    if ( *((uint32_t *)a1 + 6) != 0 )
      BN_clear_free(*((uint8_t ***)a1 + 6));
    CRYPTO_free(a1);
  }
}

// ----------------------------------------------------------------------------
// Function: DH_up_ref  (binary VA: 0x1998d30)
// Original: DH_up_ref
// ----------------------------------------------------------------------------
bool DH_up_ref(int a1)
{
  return CRYPTO_add_lock((uint32_t *)(a1 + 56), 1, 26, (int)(uintptr_t)(&unk_1B15112), 0) > 1;
}

// ----------------------------------------------------------------------------
// Function: DH_get_ex_new_index  (binary VA: 0x1998d80)
// Original: DH_get_ex_new_index
// ----------------------------------------------------------------------------
int DH_get_ex_new_index(int a1, int a2, int a3, int a4, int a5)
{
  return CRYPTO_get_ex_new_index(8, a1, a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: DH_set_ex_data  (binary VA: 0x1998dd0)
// Original: DH_set_ex_data
// ----------------------------------------------------------------------------
int DH_set_ex_data(int a1, int a2, int a3)
{
  return CRYPTO_set_ex_data((int *)(a1 + 60), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: DH_get_ex_data  (binary VA: 0x1998e10)
// Original: DH_get_ex_data
// ----------------------------------------------------------------------------
int DH_get_ex_data(int a1, int a2)
{
  return CRYPTO_get_ex_data((uint32_t *)(a1 + 60), a2);
}

// ----------------------------------------------------------------------------
// Function: DH_size  (binary VA: 0x1998e40)
// Original: DH_size
// ----------------------------------------------------------------------------
int DH_size(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = BN_num_bits(*(uint32_t **)(a1 + 8));
  v2 = v1 + 14;
  v3 = v1 + 7;
  if ( v3 < 0 )
    v3 = v2;
  return v3 >> 3;
}

// ----------------------------------------------------------------------------
// Function: d2i_DSA_SIG  (binary VA: 0x199a230)
// Original: d2i_DSA_SIG
// ----------------------------------------------------------------------------
int d2i_DSA_SIG(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&DSA_SIG_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_DSA_SIG  (binary VA: 0x199a270)
// Original: i2d_DSA_SIG
// ----------------------------------------------------------------------------
int i2d_DSA_SIG(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&DSA_SIG_it));
}

// ----------------------------------------------------------------------------
// Function: DSA_SIG_new  (binary VA: 0x199a2b0)
// Original: DSA_SIG_new
// ----------------------------------------------------------------------------
int DSA_SIG_new()
{
  return ASN1_item_new((int)(uintptr_t)(&DSA_SIG_it));
}

// ----------------------------------------------------------------------------
// Function: DSA_SIG_free  (binary VA: 0x199a2e0)
// Original: DSA_SIG_free
// ----------------------------------------------------------------------------
int DSA_SIG_free(char a1)
{
  return ASN1_item_free(a1, DSA_SIG_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_DSAPrivateKey  (binary VA: 0x199a310)
// Original: d2i_DSAPrivateKey
// ----------------------------------------------------------------------------
int d2i_DSAPrivateKey(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&DSAPrivateKey_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_DSAPrivateKey  (binary VA: 0x199a350)
// Original: i2d_DSAPrivateKey
// ----------------------------------------------------------------------------
int i2d_DSAPrivateKey(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&DSAPrivateKey_it));
}

// ----------------------------------------------------------------------------
// Function: d2i_DSAparams  (binary VA: 0x199a390)
// Original: d2i_DSAparams
// ----------------------------------------------------------------------------
int d2i_DSAparams(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&DSAparams_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_DSAparams  (binary VA: 0x199a3d0)
// Original: i2d_DSAparams
// ----------------------------------------------------------------------------
int i2d_DSAparams(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&DSAparams_it));
}

// ----------------------------------------------------------------------------
// Function: d2i_DSAPublicKey  (binary VA: 0x199a410)
// Original: d2i_DSAPublicKey
// ----------------------------------------------------------------------------
int d2i_DSAPublicKey(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&DSAPublicKey_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_DSAPublicKey  (binary VA: 0x199a450)
// Original: i2d_DSAPublicKey
// ----------------------------------------------------------------------------
int i2d_DSAPublicKey(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&DSAPublicKey_it));
}

// ----------------------------------------------------------------------------
// Function: DSA_set_default_method  (binary VA: 0x199a4c0)
// Original: DSA_set_default_method
// ----------------------------------------------------------------------------
int DSA_set_default_method(int a1)
{
  dword_21405E8 = a1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: DSA_get_default_method  (binary VA: 0x199a4e0)
// Original: DSA_get_default_method
// ----------------------------------------------------------------------------
int DSA_get_default_method()
{
  int result;

  result = dword_21405E8;
  if ( dword_21405E8 == 0 )
  {
    result = (int)(uintptr_t)(DSA_OpenSSL());
    dword_21405E8 = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: DSA_set_method  (binary VA: 0x199a520)
// Original: DSA_set_method
// ----------------------------------------------------------------------------
int DSA_set_method(int a1, int a2)
{
  void (*v2)(int);
  void (*v3)(int);

  v2 = *(void (**)(int))(*(uint32_t *)(a1 + 60) + 28);
  if ( v2 != nullptr )
    v2(a1);
  if ( *(uint32_t *)(a1 + 64) != 0 )
  {
    ENGINE_finish(*(uint32_t *)(a1 + 64));
    *(uint32_t *)(a1 + 64) = 0;
  }
  *(uint32_t *)(a1 + 60) = a2;
  v3 = *(void (**)(int))(a2 + 24);
  if ( v3 != nullptr )
    v3(a1);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: DSA_new_method  (binary VA: 0x199a590)
// Original: DSA_new_method
// ----------------------------------------------------------------------------
uint32_t * DSA_new_method(int a1)
{
  int default_DSA;
  uint32_t *v2;
  int DSA;
  int v4;
  int (*v5)(uint32_t *);
  void *v7;
  void *v8;
  void *v9;

  default_DSA = a1;
  v2 = (uint32_t *)(CRYPTO_malloc(68, (int)(uintptr_t)(&unk_1B15112), 0));
  if ( v2 == nullptr )
  {
    ERR_put_error(10, 103, 65, &unk_1B15112, 0);
    return v2;
  }
  v2[15] = DSA_get_default_method();
  if ( a1 != 0 )
  {
    if ( ENGINE_init(a1) == 0 )
    {
      ERR_put_error(10, 103, 38, &unk_1B15112, 0);
      v8 = v2;
      v2 = nullptr;
      CRYPTO_free(v8);
      return v2;
    }
    v2[16] = a1;
    goto LABEL_5;
  }
  default_DSA = ENGINE_get_default_DSA();
  v2[16] = default_DSA;
  if ( default_DSA != 0 )
  {
LABEL_5:
    DSA = ENGINE_get_DSA(default_DSA);
    v2[15] = DSA;
    if ( DSA == 0 )
    {
      ERR_put_error(10, 103, 38, &unk_1B15112, 0);
      ENGINE_finish(v2[16]);
      v9 = v2;
      v2 = nullptr;
      CRYPTO_free(v9);
      return v2;
    }
  }
  v4 = v2[15];
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 1;
  v2[3] = 0;
  v2[4] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  v2[8] = 0;
  v2[9] = 0;
  v2[11] = 0;
  v2[12] = 1;
  v2[10] = *(uint32_t *)(v4 + 32);
  CRYPTO_new_ex_data(7, (int)(uintptr_t)(v2), (int)(uintptr_t)(v2 + 13));
  v5 = *(int (**)(uint32_t *))(v2[15] + 24);
  if ( v5 != nullptr && v5(v2) == 0 )
  {
    if ( v2[16] != 0 )
      ENGINE_finish(v2[16]);
    CRYPTO_free_ex_data(7, (int)(uintptr_t)(v2), (int)(uintptr_t)(v2 + 13));
    v7 = v2;
    v2 = nullptr;
    CRYPTO_free(v7);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: DSA_new  (binary VA: 0x199a7a0)
// Original: DSA_new
// ----------------------------------------------------------------------------
uint32_t * DSA_new()
{
  return DSA_new_method(0);
}

// ----------------------------------------------------------------------------
// Function: DSA_free  (binary VA: 0x199a7d0)
// Original: DSA_free
// ----------------------------------------------------------------------------
void DSA_free(void *a1)
{
  void (*v1)(void *);

  if ( a1 != nullptr && CRYPTO_add_lock((uint32_t *)a1 + 12, -1, 8, (int)(uintptr_t)(&unk_1B15112), 0) <= 0 )
  {
    v1 = *(void (**)(void *))(*((uint32_t *)a1 + 15) + 28);
    if ( v1 != nullptr )
      v1(a1);
    if ( *((uint32_t *)a1 + 16) != 0 )
      ENGINE_finish(*((uint32_t *)a1 + 16));
    CRYPTO_free_ex_data(7, (int)(uintptr_t)(a1), (int)(uintptr_t)(a1) + 52);
    if ( *((uint32_t *)a1 + 3) != 0 )
      BN_clear_free(*((uint8_t ***)a1 + 3));
    if ( *((uint32_t *)a1 + 4) != 0 )
      BN_clear_free(*((uint8_t ***)a1 + 4));
    if ( *((uint32_t *)a1 + 5) != 0 )
      BN_clear_free(*((uint8_t ***)a1 + 5));
    if ( *((uint32_t *)a1 + 6) != 0 )
      BN_clear_free(*((uint8_t ***)a1 + 6));
    if ( *((uint32_t *)a1 + 7) != 0 )
      BN_clear_free(*((uint8_t ***)a1 + 7));
    if ( *((uint32_t *)a1 + 8) != 0 )
      BN_clear_free(*((uint8_t ***)a1 + 8));
    if ( *((uint32_t *)a1 + 9) != 0 )
      BN_clear_free(*((uint8_t ***)a1 + 9));
    CRYPTO_free(a1);
  }
}

// ----------------------------------------------------------------------------
// Function: DSA_up_ref  (binary VA: 0x199a8e0)
// Original: DSA_up_ref
// ----------------------------------------------------------------------------
bool DSA_up_ref(int a1)
{
  return CRYPTO_add_lock((uint32_t *)(a1 + 48), 1, 8, (int)(uintptr_t)(&unk_1B15112), 0) > 1;
}

// ----------------------------------------------------------------------------
// Function: DSA_size  (binary VA: 0x199a930)
// Original: DSA_size
// ----------------------------------------------------------------------------
int DSA_size(int a1)
{
  int v1;
  int v2;
  bool v3;
  int v4;
  int v5;
  typedef char _g4_t_v7;
  typedef uint32_t _g4_t_v8[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);

  v1 = BN_num_bits(*(uint32_t **)(a1 + 16));
  v2 = v1 + 14;
  v3 = v1 + 7 < 0;
  v4 = v1 + 7;
  v8[1] = 2;
  v7 = -1;
  if ( v3 )
    v4 = v2;
  v8[0] = v4 >> 3;
  v8[2] = (uint32_t)(uintptr_t)(&v7);
  v5 = i2d_ASN1_INTEGER((int)(uintptr_t)(v8), nullptr);
  return ASN1_object_size(1, 2 * v5, 16);
}

// ----------------------------------------------------------------------------
// Function: DSA_get_ex_new_index  (binary VA: 0x199a9b0)
// Original: DSA_get_ex_new_index
// ----------------------------------------------------------------------------
int DSA_get_ex_new_index(int a1, int a2, int a3, int a4, int a5)
{
  return CRYPTO_get_ex_new_index(7, a1, a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: DSA_set_ex_data  (binary VA: 0x199aa00)
// Original: DSA_set_ex_data
// ----------------------------------------------------------------------------
int DSA_set_ex_data(int a1, int a2, int a3)
{
  return CRYPTO_set_ex_data((int *)(a1 + 52), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: DSA_get_ex_data  (binary VA: 0x199aa40)
// Original: DSA_get_ex_data
// ----------------------------------------------------------------------------
int DSA_get_ex_data(int a1, int a2)
{
  return CRYPTO_get_ex_data((uint32_t *)(a1 + 52), a2);
}

// ----------------------------------------------------------------------------
// Function: DSA_dup_DH  (binary VA: 0x199aa70)
// Original: DSA_dup_DH
// ----------------------------------------------------------------------------
uint32_t * DSA_dup_DH(int a1)
{
  uint32_t *v1;
  void **v2;
  void **v3;
  void **v4;
  void **v5;
  void *v7;

  v1 = nullptr;
  if ( a1 != 0 )
  {
    v1 = DH_new();
    if ( v1 != nullptr )
    {
      if ( *(uint32_t *)(a1 + 12) != 0 )
      {
        v2 = BN_dup(*(uint32_t **)(a1 + 12));
        v1[2] = (uint32_t)(uintptr_t)(v2);
        if ( v2 == nullptr )
          goto LABEL_14;
      }
      if ( *(uint32_t *)(a1 + 16) != 0 )
        v1[4] = BN_num_bits(*(uint32_t **)(a1 + 16));
      if ( *(uint32_t *)(a1 + 20) != 0 && (v3 = BN_dup(*(uint32_t **)(a1 + 20)), v1[3] = (uint32_t)(uintptr_t)(v3), v3 == nullptr)
        || *(uint32_t *)(a1 + 24) != 0 && (v4 = BN_dup(*(uint32_t **)(a1 + 24)), v1[5] = (uint32_t)(uintptr_t)(v4), v4 == nullptr)
        || *(uint32_t *)(a1 + 28) != 0 && (v5 = BN_dup(*(uint32_t **)(a1 + 28)), v1[6] = (uint32_t)(uintptr_t)(v5), v5 == nullptr) )
      {
LABEL_14:
        v7 = v1;
        v1 = nullptr;
        DH_free(v7);
      }
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: DSA_OpenSSL  (binary VA: 0x199b6b0)
// Original: DSA_OpenSSL
// ----------------------------------------------------------------------------
char ** DSA_OpenSSL()
{
  return (char **)(&off_20CB7C0);
}

// ----------------------------------------------------------------------------
// Function: DSA_do_sign  (binary VA: 0x199b6d0)
// Original: DSA_do_sign
// ----------------------------------------------------------------------------
int DSA_do_sign(int a1, int a2, int a3)
{
  return (*(int (**)(int, int, int))(*(uint32_t *)(a3 + 60) + 4))(a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: DSA_sign  (binary VA: 0x199b700)
// Original: DSA_sign
// ----------------------------------------------------------------------------
int DSA_sign(int a1, int a2, int a3, void *a4, int *a5, int a6)
{
  int *v6;
  int v7;

  v6 = a5;
  RAND_seed(a2, a3);
  v7 = DSA_do_sign(a2, a3, a6);
  if ( v7 != 0 )
  {
    *v6 = i2d_DSA_SIG(v7, &a4);
    DSA_SIG_free(v7);
    return 1;
  }
  else
  {
    *v6 = 0;
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: DSA_sign_setup  (binary VA: 0x199b7a0)
// Original: DSA_sign_setup
// ----------------------------------------------------------------------------
int DSA_sign_setup(int a1, int a2, int a3, int a4)
{
  return (*(int (**)(int, int, int, int))(*(uint32_t *)(a1 + 60) + 8))(a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: DSA_do_verify  (binary VA: 0x199b7d0)
// Original: DSA_do_verify
// ----------------------------------------------------------------------------
int DSA_do_verify(int a1, int a2, int a3, int a4)
{
  return (*(int (**)(int, int, int, int))(*(uint32_t *)(a4 + 60) + 12))(a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: DSA_verify  (binary VA: 0x199b800)
// Original: DSA_verify
// ----------------------------------------------------------------------------
int DSA_verify(int a1, int a2, int a3, char *a4, int a5, int a6)
{
  int v6;
  int v8[4];

  v8[0] = DSA_SIG_new();
  if ( v8[0] == 0 )
    return -1;
  v6 = -1;
  if ( d2i_DSA_SIG(v8, &a4, a5) != 0 )
    v6 = DSA_do_verify(a2, a3, v8[0], a6);
  DSA_SIG_free(v8[0]);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: EC_GROUP_get_basis_type  (binary VA: 0x199e6f0)
// Original: EC_GROUP_get_basis_type
// ----------------------------------------------------------------------------
int EC_GROUP_get_basis_type(int a1)
{
  int v1;
  int field_type;
  int v3;
  int v5;

  v1 = EC_GROUP_method_of(a1);
  field_type = EC_METHOD_get_field_type(v1);
  v3 = 0;
  if ( field_type != 407 )
    return v3;
  if ( *(uint32_t *)(a1 + 92) == 0 )
    return v3;
  v5 = 0;
  do
    ++v5;
  while ( *(uint32_t *)(a1 + 4 * v5 + 92) != 0 );
  v3 = 683;
  if ( v5 == 4 )
    return v3;
  LOBYTE(v3) = -86;
  if ( v5 != 2 )
    return 0;
  return v3;
}

// ----------------------------------------------------------------------------
// Function: EC_GROUP_get_trinomial_basis  (binary VA: 0x199e770)
// Original: EC_GROUP_get_trinomial_basis
// ----------------------------------------------------------------------------
int EC_GROUP_get_trinomial_basis(uint32_t *a1, uint32_t *a2)
{
  int result;
  int v3;

  result = 0;
  if ( a1 != nullptr )
  {
    if ( *(int (**)(int, int, int, int))(EC_GROUP_method_of(a1) + 20) == (int (*)(int, int, int, int))(uintptr_t)(ec_GF2m_simple_group_set_curve
)      && a1[23] != 0
      && (v3 = a1[24]) != 0
      && a1[25] == 0 )
    {
      result = 1;
      if ( a2 != nullptr )
        *a2 = v3;
    }
    else
    {
      ERR_put_error(16, 194, 66, &unk_1B15112, 0);
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EC_GROUP_get_pentanomial_basis  (binary VA: 0x199e820)
// Original: EC_GROUP_get_pentanomial_basis
// ----------------------------------------------------------------------------
int EC_GROUP_get_pentanomial_basis(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4)
{
  int result;
  int v5;

  result = 0;
  if ( a1 != nullptr )
  {
    if ( *(int (**)(int, int, int, int))(EC_GROUP_method_of(a1) + 20) == (int (*)(int, int, int, int))(uintptr_t)(ec_GF2m_simple_group_set_curve
)      && a1[23] != 0
      && a1[24] != 0
      && a1[25] != 0
      && (v5 = a1[26]) != 0
      && a1[27] == 0 )
    {
      if ( a2 != nullptr )
        *a2 = v5;
      if ( a3 != nullptr )
        *a3 = a1[25];
      result = 1;
      if ( a4 != nullptr )
        *a4 = a1[24];
    }
    else
    {
      ERR_put_error(16, 193, 66, &unk_1B15112, 0);
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: d2i_ECPKPARAMETERS  (binary VA: 0x199ea20)
// Original: d2i_ECPKPARAMETERS
// ----------------------------------------------------------------------------
int d2i_ECPKPARAMETERS(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&ECPKPARAMETERS_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_ECPKPARAMETERS  (binary VA: 0x199ea60)
// Original: i2d_ECPKPARAMETERS
// ----------------------------------------------------------------------------
int i2d_ECPKPARAMETERS(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&ECPKPARAMETERS_it));
}

// ----------------------------------------------------------------------------
// Function: d2i_EC_PRIVATEKEY  (binary VA: 0x199f8b0)
// Original: d2i_EC_PRIVATEKEY
// ----------------------------------------------------------------------------
int d2i_EC_PRIVATEKEY(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&EC_PRIVATEKEY_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_EC_PRIVATEKEY  (binary VA: 0x199f8f0)
// Original: i2d_EC_PRIVATEKEY
// ----------------------------------------------------------------------------
int i2d_EC_PRIVATEKEY(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&EC_PRIVATEKEY_it));
}

// ----------------------------------------------------------------------------
// Function: EC_PRIVATEKEY_new  (binary VA: 0x199f930)
// Original: EC_PRIVATEKEY_new
// ----------------------------------------------------------------------------
int EC_PRIVATEKEY_new()
{
  return ASN1_item_new((int)(uintptr_t)(&EC_PRIVATEKEY_it));
}

// ----------------------------------------------------------------------------
// Function: EC_PRIVATEKEY_free  (binary VA: 0x199f960)
// Original: EC_PRIVATEKEY_free
// ----------------------------------------------------------------------------
int EC_PRIVATEKEY_free(char a1)
{
  return ASN1_item_free(a1, EC_PRIVATEKEY_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_ECPKParameters  (binary VA: 0x199f990)
// Original: d2i_ECPKParameters
// ----------------------------------------------------------------------------
uint32_t * d2i_ECPKParameters(void **a1, char **a2, int a3)
{
  int *v3;
  char v4; // si
  uint32_t *v5;

  v3 = (int *)d2i_ECPKPARAMETERS(nullptr, a2, a3);
  v4 = (char)(uintptr_t)(v3);
  if ( v3 != nullptr )
  {
    v5 = sub_199DBF0(v3);
    if ( v5 != nullptr )
    {
      if ( a1 != nullptr )
      {
        if ( *a1 != nullptr )
          EC_GROUP_clear_free(*a1);
        *a1 = v5;
      }
      ECPKPARAMETERS_free(v4);
    }
    else
    {
      ERR_put_error(16, 145, 127, &unk_1B15112, 0);
    }
  }
  else
  {
    v5 = nullptr;
    ERR_put_error(16, 145, 117, &unk_1B15112, 0);
    ECPKPARAMETERS_free(0);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: i2d_ECPKParameters  (binary VA: 0x199fa90)
// Original: i2d_ECPKParameters
// ----------------------------------------------------------------------------
int i2d_ECPKParameters(int a1, void **a2)
{
  uint32_t *v2;
  int v3;

  v2 = sub_199EB00(a1, 0);
  if ( v2 != nullptr )
  {
    v3 = i2d_ECPKPARAMETERS((int)(uintptr_t)(v2), a2);
    if ( v3 == 0 )
      ERR_put_error(16, 191, 121, &unk_1B15112, 0);
    ECPKPARAMETERS_free((char)(uintptr_t)(v2));
  }
  else
  {
    v3 = 0;
    ERR_put_error(16, 191, 120, &unk_1B15112, 0);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: d2i_ECPrivateKey  (binary VA: 0x199fb60)
// Original: d2i_ECPrivateKey
// ----------------------------------------------------------------------------
uint32_t * d2i_ECPrivateKey(int *a1, char **a2, int a3)
{
  uint32_t *v3;
  uint32_t *v4;
  int *v5;
  uint32_t *v6;
  int v7;
  void **v8;
  uint32_t *v9;
  int v10;
  int *v11;
  uint8_t *v12;
  int v13;
  int v15;
  typedef void *_g4_t_v16;
  typedef int _g4_t_v17[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v17)) > _g4_s1 ? (44u + sizeof(_g4_t_v17)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);

  v17[0] = EC_PRIVATEKEY_new();
  if ( v17[0] == 0 )
  {
    v4 = nullptr;
    ERR_put_error(16, 146, 65, &unk_1B15112, 0);
    return v4;
  }
  v3 = (uint32_t *)d2i_EC_PRIVATEKEY(v17, a2, a3);
  v17[0] = (int)(uintptr_t)(v3);
  if ( v3 == nullptr )
  {
    ERR_put_error(16, 146, 16, &unk_1B15112, 0);
    v4 = nullptr;
    EC_PRIVATEKEY_free(v17[0]);
    return v4;
  }
  if ( a1 != nullptr )
  {
    v4 = (uint32_t *)*a1;
    if ( *a1 != 0 )
    {
      v5 = (int *)v3[2];
      if ( v5 != nullptr )
      {
LABEL_6:
        if ( v4[1] != 0 )
        {
          EC_GROUP_clear_free((void *)v4[1]);
          v5 = *(int **)(v17[0] + 8);
        }
        v6 = sub_199DBF0(v5);
        v4[1] = (uint32_t)(uintptr_t)(v6);
LABEL_9:
        if ( v6 != nullptr )
        {
          *v4 = *(uint32_t *)v17[0];
          v7 = *(uint32_t *)(v17[0] + 4);
          if ( v7 == 0 )
          {
            ERR_put_error(16, 146, 125, &unk_1B15112, 0);
            goto LABEL_22;
          }
          v8 = BN_bin2bn(*(uint8_t **)(v7 + 8), *(uint32_t *)v7, (void **)v4[3]);
          v4[3] = (uint32_t)(uintptr_t)(v8);
          if ( v8 == nullptr )
          {
            ERR_put_error(16, 146, 3, &unk_1B15112, 0);
            goto LABEL_22;
          }
          v9 = (uint32_t *)v17[0];
          if ( *(uint32_t *)(v17[0] + 12) == 0 )
            goto LABEL_18;
          if ( v4[2] != 0 )
            EC_POINT_clear_free((void *)v4[2]);
          v10 = (int)(uintptr_t)(EC_POINT_new(v4[1]));
          v4[2] = v10;
          if ( v10 != 0 )
          {
            v11 = *(int **)(v17[0] + 12);
            v12 = (uint8_t *)v11[2];
            v13 = *v11;
            v4[5] = *v12 & 0xFE;
            if ( EC_POINT_oct2point(v4[1], v10, v12, v13, 0) != 0 )
            {
              v9 = (uint32_t *)v17[0];
              goto LABEL_18;
            }
          }
        }
        ERR_put_error(16, 146, 16, &unk_1B15112, 0);
LABEL_22:
        v16 = v4;
        v4 = nullptr;
        EC_KEY_free(v16);
        v9 = (uint32_t *)v17[0];
        goto LABEL_18;
      }
LABEL_27:
      v6 = (uint32_t *)v4[1];
      goto LABEL_9;
    }
  }
  v15 = (int)(uintptr_t)(EC_KEY_new());
  v4 = (uint32_t *)v15;
  if ( v15 != 0 )
  {
    if ( a1 != nullptr )
      *a1 = v15;
    v5 = *(int **)(v17[0] + 8);
    if ( v5 != nullptr )
      goto LABEL_6;
    goto LABEL_27;
  }
  ERR_put_error(16, 146, 65, &unk_1B15112, 0);
  v9 = (uint32_t *)v17[0];
LABEL_18:
  if ( v9 != nullptr )
    EC_PRIVATEKEY_free((char)(uintptr_t)(v9));
  return v4;
}

// ----------------------------------------------------------------------------
// Function: i2d_ECPrivateKey  (binary VA: 0x199fe40)
// Original: i2d_ECPrivateKey
// ----------------------------------------------------------------------------
int i2d_ECPrivateKey(int *a1, void **a2)
{
  int *v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  uint8_t *v7;
  void *v8;
  int v9;
  int v11;
  uint32_t *v12;
  unsigned int v13;
  uint8_t *v14;
  uint32_t *v15;
  size_t v16;
  size_t v17;
  size_t v18;

  if ( a1 == nullptr || a1[1] == 0 || a1[3] == 0 )
  {
    ERR_put_error(16, 192, 67, &unk_1B15112, 0);
    return 0;
  }
  v2 = (int *)EC_PRIVATEKEY_new();
  v3 = v2;
  if ( v2 == nullptr )
  {
    v9 = 0;
    ERR_put_error(16, 192, 65, &unk_1B15112, 0);
    return v9;
  }
  *v2 = *a1;
  v4 = BN_num_bits((uint32_t *)a1[3]);
  v5 = v4 + 14;
  v6 = v4 + 7;
  if ( v6 < 0 )
    v6 = v5;
  v17 = v6 >> 3;
  v7 = CRYPTO_malloc(v6 >> 3, (int)(uintptr_t)(&unk_1B15112), 0);
  v8 = v7;
  if ( v7 != nullptr )
  {
    if ( BN_bn2bin((uint32_t *)a1[3], v7) == 0 )
    {
      ERR_put_error(16, 192, 3, &unk_1B15112, 0);
LABEL_10:
      v18 = 0;
      v9 = 0;
LABEL_11:
      CRYPTO_free(v8);
      goto LABEL_12;
    }
    if ( ASN1_STRING_set(v3[1], (char *)v8, v17) == 0 )
    {
LABEL_25:
      ERR_put_error(16, 192, 13, &unk_1B15112, 0);
      goto LABEL_10;
    }
    v11 = a1[4];
    if ( (v11 & 1) == 0 )
    {
      v15 = sub_199EB00(a1[1], v3[2]);
      v3[2] = (int)(uintptr_t)(v15);
      if ( v15 == nullptr )
        goto LABEL_35;
      v11 = a1[4];
    }
    if ( (v11 & 2) != 0 )
      goto LABEL_28;
    v12 = ASN1_STRING_type_new(3);
    v3[3] = (int)(uintptr_t)(v12);
    if ( v12 != nullptr )
    {
      v13 = EC_POINT_point2oct(a1[1], a1[2], a1[5], 0, 0, 0);
      if ( v17 >= v13 )
        goto LABEL_23;
      v16 = v13;
      v14 = CRYPTO_realloc(v8, v13, (int)(uintptr_t)(&unk_1B15112), 0);
      if ( v14 != nullptr )
      {
        v17 = v16;
        v8 = v14;
LABEL_23:
        if ( EC_POINT_point2oct(a1[1], a1[2], a1[5], v8, v17, 0) != 0 )
        {
          *(uint32_t *)(v3[3] + 12) &= 0xFFFFFFF0;
          *(uint32_t *)(v3[3] + 12) |= 8u;
          if ( ASN1_STRING_set(v3[3], (char *)v8, v17) == 0 )
            goto LABEL_25;
LABEL_28:
          v9 = i2d_EC_PRIVATEKEY((int)(uintptr_t)(v3), a2);
          v18 = 1;
          if ( v9 == 0 )
          {
            ERR_put_error(16, 192, 16, &unk_1B15112, 0);
            v18 = 0;
          }
          goto LABEL_11;
        }
LABEL_35:
        ERR_put_error(16, 192, 16, &unk_1B15112, 0);
        goto LABEL_10;
      }
    }
    ERR_put_error(16, 192, 65, &unk_1B15112, 0);
    goto LABEL_10;
  }
  v9 = 0;
  ERR_put_error(16, 192, 65, &unk_1B15112, 0);
  v18 = 0;
LABEL_12:
  EC_PRIVATEKEY_free((char)(uintptr_t)(v3));
  if ( v18 == 0 )
    return 0;
  return v9;
}

// ----------------------------------------------------------------------------
// Function: i2d_ECParameters  (binary VA: 0x19a0290)
// Original: i2d_ECParameters
// ----------------------------------------------------------------------------
int i2d_ECParameters(int a1, void **a2)
{
  if ( a1 != 0 )
    return i2d_ECPKParameters(*(uint32_t *)(a1 + 4), a2);
  ERR_put_error(16, 190, 67, &unk_1B15112, 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: d2i_ECParameters  (binary VA: 0x19a0300)
// Original: d2i_ECParameters
// ----------------------------------------------------------------------------
int d2i_ECParameters(int *a1, char **a2, int a3)
{
  int v3;
  int v5;

  if ( a2 == nullptr || *a2 == nullptr )
  {
    v3 = 0;
    ERR_put_error(16, 144, 67, &unk_1B15112, 0);
    return v3;
  }
  if ( a1 == nullptr || (v3 = *a1, *a1 == 0) )
  {
    v5 = (int)(uintptr_t)(EC_KEY_new());
    v3 = v5;
    if ( v5 == 0 )
    {
      ERR_put_error(16, 144, 65, &unk_1B15112, 0);
      return v3;
    }
    if ( a1 != nullptr )
      *a1 = v5;
  }
  if ( d2i_ECPKParameters((void **)(v3 + 4), a2, a3) == nullptr )
  {
    v3 = 0;
    ERR_put_error(16, 144, 16, &unk_1B15112, 0);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: EC_GROUP_new_by_curve_name  (binary VA: 0x19a0750)
// Original: EC_GROUP_new_by_curve_name
// ----------------------------------------------------------------------------
void * EC_GROUP_new_by_curve_name(int a1)
{
  void *v1;
  int v2;
  uint32_t *v3;
  int v4;
  void **v5;
  void *v7;
  void **v8;
  uint32_t *v9;
  void **v10;
  void **v11;
  void **v12;
  uint8_t *v13;
  void **v14;
  void **v15;
  size_t v16;
  void *v17;

  v1 = nullptr;
  if ( a1 <= 0 )
    return v1;
  v2 = 0;
  v3 = (uint32_t *)(&unk_203F420);
  while ( *v3 != a1 )
  {
    ++v2;
    v3 += 3;
    if ( v2 == 67 )
      goto LABEL_49;
  }
  v9 = *((uint32_t **)&unk_203F420 + 3 * v2 + 1);
  v8 = (void **)BN_CTX_new();
  if ( v8 == nullptr )
  {
    v1 = nullptr;
    ERR_put_error(16, 175, 65, &unk_1B15112, 0);
    v12 = nullptr;
    v11 = nullptr;
    v10 = nullptr;
    goto LABEL_37;
  }
  v16 = v9[1];
  v4 = v9[2];
  v13 = (uint8_t *)v9 + v16 + 16;
  v10 = BN_bin2bn(v13, v4, nullptr);
  if ( v10 == nullptr )
  {
    v11 = nullptr;
LABEL_36:
    v1 = nullptr;
    ERR_put_error(16, 175, 3, &unk_1B15112, 0);
    v12 = nullptr;
LABEL_37:
    v5 = nullptr;
    EC_GROUP_free(v1);
    v1 = nullptr;
    v14 = nullptr;
    v15 = nullptr;
    goto LABEL_18;
  }
  v11 = BN_bin2bn(&v13[v4], v4, nullptr);
  if ( v11 == nullptr )
    goto LABEL_36;
  v12 = BN_bin2bn(&v13[2 * v4], v4, nullptr);
  if ( v12 == nullptr )
    goto LABEL_36;
  if ( *v9 == 406 )
  {
    v1 = (void *)EC_GROUP_new_curve_GFp(v10, v11, v12, v8);
    if ( v1 == nullptr )
      goto LABEL_41;
  }
  else
  {
    v1 = (void *)EC_GROUP_new_curve_GF2m(v10, v11, v12, v8);
    if ( v1 == nullptr )
    {
LABEL_41:
      ERR_put_error(16, 175, 16, &unk_1B15112, 0);
      goto LABEL_37;
    }
  }
  v17 = (void *)EC_POINT_new(v1);
  if ( v17 == nullptr )
    goto LABEL_41;
  v14 = BN_bin2bn(&v13[3 * v4], v4, nullptr);
  if ( v14 != nullptr && (v15 = BN_bin2bn(&v13[4 * v4], v4, nullptr)) != nullptr )
  {
    if ( EC_POINT_set_affine_coordinates_GF2m(v1, v17, v14, v15, v8) != 0 )
    {
      v5 = BN_bin2bn(&v13[5 * v4], v4, nullptr);
      if ( v5 != nullptr && BN_set_word(v14, v9[3]) != 0 )
      {
        if ( EC_GROUP_set_generator(v1, v17, v5, v14) != 0 && (v16 == 0 || EC_GROUP_set_seed((int)(uintptr_t)(v1), v9 + 4, v16) != 0) )
          goto LABEL_17;
        ERR_put_error(16, 175, 16, &unk_1B15112, 0);
      }
      else
      {
        ERR_put_error(16, 175, 3, &unk_1B15112, 0);
      }
    }
    else
    {
      v5 = nullptr;
      ERR_put_error(16, 175, 16, &unk_1B15112, 0);
    }
  }
  else
  {
    v5 = nullptr;
    ERR_put_error(16, 175, 3, &unk_1B15112, 0);
    v15 = nullptr;
  }
  v7 = v1;
  v1 = nullptr;
  EC_GROUP_free(v7);
LABEL_17:
  EC_POINT_free(v17);
LABEL_18:
  if ( v8 != nullptr )
    BN_CTX_free(v8);
  if ( v10 != nullptr )
    BN_free(v10);
  if ( v11 != nullptr )
    BN_free(v11);
  if ( v12 != nullptr )
    BN_free(v12);
  if ( v5 != nullptr )
    BN_free(v5);
  if ( v14 != nullptr )
    BN_free(v14);
  if ( v15 != nullptr )
    BN_free(v15);
  if ( v1 != nullptr )
  {
    EC_GROUP_set_curve_name(v1, a1);
    return v1;
  }
LABEL_49:
  v1 = nullptr;
  ERR_put_error(16, 174, 129, &unk_1B15112, 0);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: EC_get_builtin_curves  (binary VA: 0x19a0c60)
// Original: EC_get_builtin_curves
// ----------------------------------------------------------------------------
int EC_get_builtin_curves(uint32_t *a1, unsigned int a2)
{
  uint32_t *v2;
  int v3;
  char *v4;
  char *v5;
  int v6;

  v2 = a1;
  if ( a2 != 0 && a1 != nullptr )
  {
    v3 = 67;
    if ( a2 <= 0x43 )
      v3 = a2;
    v4 = (char *)&unk_203F420;
    v5 = (char *)&unk_203F420 + 12 * v3;
    do
    {
      *v2 = *(uint32_t *)v4;
      v6 = *((uint32_t *)v4 + 2);
      v4 += 12;
      v2[1] = v6;
      v2 += 2;
    }
    while ( v4 != v5 );
  }
  return 67;
}

// ----------------------------------------------------------------------------
// Function: EC_GROUP_new_curve_GFp  (binary VA: 0x19a0cc0)
// Original: EC_GROUP_new_curve_GFp
// ----------------------------------------------------------------------------
void * EC_GROUP_new_curve_GFp(int a1, int a2, int a3, int a4)
{
  int v4;
  void *v5;
  unsigned int error;
  int v8;
  int v9;
  void *v10;

  v4 = (int)(uintptr_t)(EC_GFp_nist_method());
  v5 = (void *)EC_GROUP_new(v4);
  if ( v5 != nullptr && EC_GROUP_set_curve_GFp(v5, a1, a2, a3, a4) == 0 )
  {
    error = ERR_peek_last_error();
    if ( HIBYTE(error) != 16
      || (error & 0xFFF) - 135 > 1
      || (ERR_clear_error(v8, 16),
          EC_GROUP_clear_free(v5),
          v9 = (int)(uintptr_t)(EC_GFp_mont_method()),
          (v5 = (void *)EC_GROUP_new(v9)) != nullptr)
      && EC_GROUP_set_curve_GFp(v5, a1, a2, a3, a4) == 0 )
    {
      v10 = v5;
      v5 = nullptr;
      EC_GROUP_clear_free(v10);
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: EC_GROUP_new_curve_GF2m  (binary VA: 0x19a0db0)
// Original: EC_GROUP_new_curve_GF2m
// ----------------------------------------------------------------------------
void * EC_GROUP_new_curve_GF2m(int a1, int a2, int a3, int a4)
{
  int v4;
  void *v5;
  void *v6;
  void *v8;

  v4 = (int)(uintptr_t)(EC_GF2m_simple_method());
  v5 = (void *)EC_GROUP_new(v4);
  v6 = v5;
  if ( v5 != nullptr && EC_GROUP_set_curve_GF2m(v5, a1, a2, a3, a4) == 0 )
  {
    v8 = v6;
    v6 = nullptr;
    EC_GROUP_clear_free(v8);
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: EC_KEY_new  (binary VA: 0x19a0e20)
// Original: EC_KEY_new
// ----------------------------------------------------------------------------
uint32_t * EC_KEY_new()
{
  uint32_t *result;

  result = (uint32_t *)(CRYPTO_malloc(32, (int)(uintptr_t)(&unk_1B15112), 0));
  if ( result != nullptr )
  {
    *result = 1;
    result[1] = 0;
    result[2] = 0;
    result[3] = 0;
    result[4] = 0;
    result[5] = 4;
    result[6] = 1;
    result[7] = 0;
  }
  else
  {
    ERR_put_error(16, 182, 65, &unk_1B15112, 0);
    return nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EC_KEY_free  (binary VA: 0x19a0ed0)
// Original: EC_KEY_free
// ----------------------------------------------------------------------------
void EC_KEY_free(char *a1)
{
  if ( a1 != nullptr && CRYPTO_add_lock((uint32_t *)a1 + 6, -1, 33, (int)(uintptr_t)(&unk_1B15112), 0) <= 0 )
  {
    if ( *((uint32_t *)a1 + 1) != 0 )
      EC_GROUP_free(*((void **)a1 + 1));
    if ( *((uint32_t *)a1 + 2) != 0 )
      EC_POINT_free(*((void **)a1 + 2));
    if ( *((uint32_t *)a1 + 3) != 0 )
      BN_clear_free(*((uint8_t ***)a1 + 3));
    EC_EX_DATA_free_all_data(a1 + 28);
    OPENSSL_cleanse((uint8_t *)a1, 0x20u);
    CRYPTO_free(a1);
  }
}

// ----------------------------------------------------------------------------
// Function: EC_KEY_new_by_curve_name  (binary VA: 0x19a0f90)
// Original: EC_KEY_new_by_curve_name
// ----------------------------------------------------------------------------
char * EC_KEY_new_by_curve_name(int a1)
{
  char *v1;
  void *v2;
  char *v4;

  v1 = (char *)EC_KEY_new();
  if ( v1 != nullptr )
  {
    v2 = EC_GROUP_new_by_curve_name(a1);
    *((uint32_t *)v1 + 1) = (uint32_t)(uintptr_t)(v2);
    if ( v2 == nullptr )
    {
      v4 = v1;
      v1 = nullptr;
      EC_KEY_free(v4);
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: EC_KEY_copy  (binary VA: 0x19a0fe0)
// Original: EC_KEY_copy
// ----------------------------------------------------------------------------
int EC_KEY_copy(int a1, uint32_t *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  uint32_t *v7;
  int **i;
  int v9;

  if ( a2 == nullptr || a1 == 0 )
  {
    ERR_put_error(16, 178, 67, &unk_1B15112, 0);
    return 0;
  }
  if ( a2[1] != 0 )
  {
    v2 = EC_GROUP_method_of(a2[1]);
    if ( *(uint32_t *)(a1 + 4) != 0 )
      EC_GROUP_free(*(void **)(a1 + 4));
    v3 = (int)(uintptr_t)(EC_GROUP_new(v2));
    *(uint32_t *)(a1 + 4) = v3;
    if ( v3 == 0 || EC_GROUP_copy(v3, a2[1]) == 0 )
      return 0;
  }
  if ( a2[2] != 0 )
  {
    v4 = a2[1];
    if ( v4 != 0 )
    {
      if ( *(uint32_t *)(a1 + 8) != 0 )
      {
        EC_POINT_free(*(void **)(a1 + 8));
        v4 = a2[1];
      }
      v5 = (int)(uintptr_t)(EC_POINT_new(v4));
      *(uint32_t *)(a1 + 8) = v5;
      if ( v5 == 0 || EC_POINT_copy(v5, a2[2]) == 0 )
        return 0;
    }
  }
  v6 = (uint32_t *)a2[3];
  if ( v6 != nullptr )
  {
    v7 = *(uint32_t **)(a1 + 12);
    if ( v7 == nullptr )
    {
      v7 = BN_new();
      *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(v7);
      if ( v7 == nullptr )
        return 0;
      v6 = (uint32_t *)a2[3];
    }
    if ( BN_copy(v7, v6) == nullptr )
      return 0;
  }
  EC_EX_DATA_free_all_data(a1 + 28);
  for ( i = (int **)a2[7]; i != nullptr; i = (int **)*i )
  {
    v9 = ((int (*)(int *))i[2])(i[1]);
    if ( v9 == 0 || EC_EX_DATA_set_data(a1 + 28, v9, i[2], i[3], i[4]) == 0 )
      return 0;
  }
  *(uint32_t *)(a1 + 16) = a2[4];
  *(uint32_t *)(a1 + 20) = a2[5];
  *(uint32_t *)a1 = *a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: EC_KEY_dup  (binary VA: 0x19a11c0)
// Original: EC_KEY_dup
// ----------------------------------------------------------------------------
char * EC_KEY_dup(uint32_t *a1)
{
  char *v1;
  char *v3;

  v1 = (char *)EC_KEY_new();
  if ( v1 != nullptr && EC_KEY_copy((int)(uintptr_t)(v1), a1) == 0 )
  {
    v3 = v1;
    v1 = nullptr;
    EC_KEY_free(v3);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: EC_KEY_up_ref  (binary VA: 0x19a1220)
// Original: EC_KEY_up_ref
// ----------------------------------------------------------------------------
bool EC_KEY_up_ref(int a1)
{
  return CRYPTO_add_lock((uint32_t *)(a1 + 24), 1, 33, (int)(uintptr_t)(&unk_1B15112), 0) > 1;
}

// ----------------------------------------------------------------------------
// Function: EC_KEY_generate_key  (binary VA: 0x19a1270)
// Original: EC_KEY_generate_key
// ----------------------------------------------------------------------------
int EC_KEY_generate_key(uint32_t *a1)
{
  void **v1;
  void **v2;
  int order;
  void *v4;
  int v6;
  void **v7;
  void *v8;
  void *v9;
  void **v10;
  int v11;

  if ( a1 != nullptr && a1[1] != 0 )
  {
    v1 = (void **)BN_new();
    v11 = 0;
    if ( v1 != nullptr )
    {
      v10 = (void **)BN_CTX_new();
      if ( v10 != nullptr )
      {
        v2 = (void **)a1[3];
        if ( v2 != nullptr || (v7 = (void **)BN_new(), v4 = nullptr, v2 = v7, v7 != nullptr) )
        {
          order = EC_GROUP_get_order(a1[1], v1);
          v4 = nullptr;
          v11 = 0;
          if ( order != 0 )
          {
            do
            {
              if ( BN_rand_range(v2, v1) == 0 )
              {
                v4 = nullptr;
                v11 = 0;
                goto LABEL_7;
              }
            }
            while ( v2[1] == nullptr );
            v4 = (void *)a1[2];
            if ( v4 != nullptr || (v4 = (void *)EC_POINT_new(a1[1]), v11 = 0, v4 != nullptr) )
            {
              v9 = v4;
              v6 = EC_POINT_mul(a1[1], v4, v2, 0, 0, v10);
              v11 = 0;
              v4 = v9;
              if ( v6 != 0 )
              {
                a1[3] = (uint32_t)(uintptr_t)(v2);
                a1[2] = (uint32_t)(uintptr_t)(v9);
                v11 = 1;
              }
            }
          }
        }
      }
      else
      {
        v4 = nullptr;
        v2 = nullptr;
        v11 = 0;
      }
LABEL_7:
      v8 = v4;
      BN_free(v1);
      if ( v8 != nullptr && a1[2] == 0 )
        EC_POINT_free(v8);
      if ( v2 != nullptr && a1[3] == 0 )
        BN_free(v2);
      if ( v10 != nullptr )
        BN_CTX_free(v10);
    }
  }
  else
  {
    ERR_put_error(16, 179, 67, &unk_1B15112, 0);
    return 0;
  }
  return v11;
}

// ----------------------------------------------------------------------------
// Function: EC_KEY_check_key  (binary VA: 0x19a14a0)
// Original: EC_KEY_check_key
// ----------------------------------------------------------------------------
int EC_KEY_check_key(int a1)
{
  int v1;
  int v2;
  void *v3;
  int v4;
  void **v6;
  uint32_t *v7;

  if ( a1 == 0 || (v1 = *(uint32_t *)(a1 + 4)) == 0 || *(uint32_t *)(a1 + 8) == 0 )
  {
    v2 = 0;
    ERR_put_error(16, 177, 67, &unk_1B15112, 0);
    return v2;
  }
  if ( EC_POINT_is_at_infinity(v1, *(uint32_t *)(a1 + 8)) != 0 )
  {
    ERR_put_error(16, 177, 106, &unk_1B15112, 0);
    return 0;
  }
  v6 = (void **)BN_CTX_new();
  if ( v6 == nullptr )
    return 0;
  v2 = 0;
  v3 = (void *)EC_POINT_new(*(uint32_t *)(a1 + 4));
  if ( v3 != nullptr )
  {
    if ( EC_POINT_is_on_curve(*(uint32_t *)(a1 + 4), *(uint32_t *)(a1 + 8), v6) != 0 )
    {
      v4 = *(uint32_t *)(a1 + 4);
      if ( *(uint32_t *)(v4 + 12) != 0 )
      {
        v7 = (uint32_t *)(v4 + 8);
        if ( EC_POINT_mul(v4, v3, 0, *(uint32_t *)(a1 + 8), v4 + 8, v6) != 0 )
        {
          if ( EC_POINT_is_at_infinity(*(uint32_t *)(a1 + 4), v3) != 0 )
          {
            v2 = 1;
            if ( *(uint32_t *)(a1 + 12) != 0 )
            {
              if ( BN_cmp(*(int **)(a1 + 12), v7) < 0 )
              {
                if ( EC_POINT_mul(*(uint32_t *)(a1 + 4), v3, *(uint32_t *)(a1 + 12), 0, 0, v6) != 0 )
                {
                  if ( EC_POINT_cmp(*(uint32_t *)(a1 + 4), v3, *(uint32_t *)(a1 + 8), v6) != 0 )
                  {
                    v2 = 0;
                    ERR_put_error(16, 177, 123, &unk_1B15112, 0);
                  }
                }
                else
                {
                  v2 = 0;
                  ERR_put_error(16, 177, 16, &unk_1B15112, 0);
                }
              }
              else
              {
                LOWORD(v2) = 0;
                ERR_put_error(16, 177, 130, &unk_1B15112, 0);
              }
            }
          }
          else
          {
            v2 = 0;
            ERR_put_error(16, 177, 130, &unk_1B15112, 0);
          }
        }
        else
        {
          ERR_put_error(16, 177, 16, &unk_1B15112, 0);
        }
      }
      else
      {
        ERR_put_error(16, 177, 122, &unk_1B15112, 0);
      }
    }
    else
    {
      ERR_put_error(16, 177, 107, &unk_1B15112, 0);
    }
  }
  BN_CTX_free(v6);
  if ( v3 != nullptr )
    EC_POINT_free(v3);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: EC_KEY_get0_group  (binary VA: 0x19a1830)
// Original: EC_KEY_get0_group
// ----------------------------------------------------------------------------
int EC_KEY_get0_group(int a1)
{
  return *(uint32_t *)(a1 + 4);
}

// ----------------------------------------------------------------------------
// Function: EC_KEY_set_group  (binary VA: 0x19a1840)
// Original: EC_KEY_set_group
// ----------------------------------------------------------------------------
bool EC_KEY_set_group(int a1, int a2)
{
  int v2;

  if ( *(uint32_t *)(a1 + 4) != 0 )
    EC_GROUP_free(*(void **)(a1 + 4));
  v2 = (int)(uintptr_t)(EC_GROUP_dup(a2));
  *(uint32_t *)(a1 + 4) = v2;
  return v2 != 0;
}

// ----------------------------------------------------------------------------
// Function: EC_KEY_get0_private_key  (binary VA: 0x19a1890)
// Original: EC_KEY_get0_private_key
// ----------------------------------------------------------------------------
int EC_KEY_get0_private_key(int a1)
{
  return *(uint32_t *)(a1 + 12);
}

// ----------------------------------------------------------------------------
// Function: EC_KEY_set_private_key  (binary VA: 0x19a18a0)
// Original: EC_KEY_set_private_key
// ----------------------------------------------------------------------------
bool EC_KEY_set_private_key(int a1, uint32_t *a2)
{
  void **v2;

  if ( *(uint32_t *)(a1 + 12) != 0 )
    BN_clear_free(*(uint8_t ***)(a1 + 12));
  v2 = BN_dup(a2);
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(v2);
  return v2 != nullptr;
}

// ----------------------------------------------------------------------------
// Function: EC_KEY_get0_public_key  (binary VA: 0x19a18f0)
// Original: EC_KEY_get0_public_key
// ----------------------------------------------------------------------------
int EC_KEY_get0_public_key(int a1)
{
  return *(uint32_t *)(a1 + 8);
}

// ----------------------------------------------------------------------------
// Function: EC_KEY_set_public_key  (binary VA: 0x19a1900)
// Original: EC_KEY_set_public_key
// ----------------------------------------------------------------------------
bool EC_KEY_set_public_key(int a1, int a2)
{
  int v2;

  if ( *(uint32_t *)(a1 + 8) != 0 )
    EC_POINT_free(*(void **)(a1 + 8));
  v2 = (int)(uintptr_t)(EC_POINT_dup(a2, *(uint32_t *)(a1 + 4)));
  *(uint32_t *)(a1 + 8) = v2;
  return v2 != 0;
}

// ----------------------------------------------------------------------------
// Function: EC_KEY_get_enc_flags  (binary VA: 0x19a1960)
// Original: EC_KEY_get_enc_flags
// ----------------------------------------------------------------------------
int EC_KEY_get_enc_flags(int a1)
{
  return *(uint32_t *)(a1 + 16);
}

// ----------------------------------------------------------------------------
// Function: EC_KEY_set_enc_flags  (binary VA: 0x19a1970)
// Original: EC_KEY_set_enc_flags
// ----------------------------------------------------------------------------
int EC_KEY_set_enc_flags(int a1, int a2)
{
  *(uint32_t *)(a1 + 16) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: EC_KEY_get_conv_form  (binary VA: 0x19a1980)
// Original: EC_KEY_get_conv_form
// ----------------------------------------------------------------------------
int EC_KEY_get_conv_form(int a1)
{
  return *(uint32_t *)(a1 + 20);
}

// ----------------------------------------------------------------------------
// Function: EC_KEY_set_conv_form  (binary VA: 0x19a1990)
// Original: EC_KEY_set_conv_form
// ----------------------------------------------------------------------------
int EC_KEY_set_conv_form(int a1, int a2)
{
  int result;

  *(uint32_t *)(a1 + 20) = a2;
  result = *(uint32_t *)(a1 + 4);
  if ( result != 0 )
    return EC_GROUP_set_point_conversion_form(result, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: EC_KEY_get_key_method_data  (binary VA: 0x19a19d0)
// Original: EC_KEY_get_key_method_data
// ----------------------------------------------------------------------------
int EC_KEY_get_key_method_data(int a1, int a2, int a3, int a4)
{
  return (int)(uintptr_t)(EC_EX_DATA_get_data(*(uint32_t *)(a1 + 28), a2, a3, a4));
}

// ----------------------------------------------------------------------------
// Function: EC_KEY_insert_key_method_data  (binary VA: 0x19a1a10)
// Original: EC_KEY_insert_key_method_data
// ----------------------------------------------------------------------------
void EC_KEY_insert_key_method_data(int a1, int a2, int a3, int a4, int a5)
{
  CRYPTO_lock(9, 33, (int)(uintptr_t)(&unk_1B15112), 0);
  if ( EC_EX_DATA_get_data(*(uint32_t *)(a1 + 28), a3, a4, a5) == 0 )
    EC_EX_DATA_set_data(a1 + 28, a2, a3, a4, a5);
  CRYPTO_lock(10, 33, (int)(uintptr_t)(&unk_1B15112), 0);
}

// ----------------------------------------------------------------------------
// Function: EC_KEY_set_asn1_flag  (binary VA: 0x19a1af0)
// Original: EC_KEY_set_asn1_flag
// ----------------------------------------------------------------------------
int EC_KEY_set_asn1_flag(int a1, int a2)
{
  int result;

  result = *(uint32_t *)(a1 + 4);
  if ( result != 0 )
    return EC_GROUP_set_asn1_flag(*(uint32_t *)(a1 + 4), a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: EC_KEY_precompute_mult  (binary VA: 0x19a1b30)
// Original: EC_KEY_precompute_mult
// ----------------------------------------------------------------------------
int EC_KEY_precompute_mult(int a1, int a2)
{
  int result;

  result = 0;
  if ( *(uint32_t *)(a1 + 4) != 0 )
    return EC_GROUP_precompute_mult(*(uint32_t *)(a1 + 4), a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: EC_GROUP_new  (binary VA: 0x19a1b70)
// Original: EC_GROUP_new
// ----------------------------------------------------------------------------
uint32_t * EC_GROUP_new(int a1)
{
  uint32_t *v1;
  uint32_t *v2;
  void *v4;

  if ( a1 != 0 )
  {
    if ( *(uint32_t *)(a1 + 4) != 0 )
    {
      v1 = (uint32_t *)(CRYPTO_malloc(172, (int)(uintptr_t)(&unk_1B15112), 0));
      v2 = v1;
      if ( v1 != nullptr )
      {
        *v1 = a1;
        v1[17] = 0;
        v1[1] = 0;
        BN_init(v1 + 2);
        BN_init(v2 + 7);
        v2[12] = 0;
        v2[13] = 0;
        v2[14] = 4;
        v2[15] = 0;
        v2[16] = 0;
        if ( (*(int (**)(uint32_t *))(a1 + 4))(v2) == 0 )
        {
          v4 = v2;
          v2 = nullptr;
          CRYPTO_free(v4);
        }
      }
      else
      {
        ERR_put_error(16, 108, 65, &unk_1B15112, 0);
      }
    }
    else
    {
      v2 = nullptr;
      ERR_put_error(16, 108, 66, &unk_1B15112, 0);
    }
  }
  else
  {
    v2 = nullptr;
    ERR_put_error(16, 108, 108, &unk_1B15112, 0);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: EC_GROUP_method_of  (binary VA: 0x19a1cf0)
// Original: EC_GROUP_method_of
// ----------------------------------------------------------------------------
int EC_GROUP_method_of(int a1)
{
  return *(uint32_t *)a1;
}

// ----------------------------------------------------------------------------
// Function: EC_METHOD_get_field_type  (binary VA: 0x19a1d00)
// Original: EC_METHOD_get_field_type
// ----------------------------------------------------------------------------
int EC_METHOD_get_field_type(int a1)
{
  return *(uint32_t *)a1;
}

// ----------------------------------------------------------------------------
// Function: EC_GROUP_get0_generator  (binary VA: 0x19a1d10)
// Original: EC_GROUP_get0_generator
// ----------------------------------------------------------------------------
int EC_GROUP_get0_generator(int a1)
{
  return *(uint32_t *)(a1 + 4);
}

// ----------------------------------------------------------------------------
// Function: EC_GROUP_get_order  (binary VA: 0x19a1d20)
// Original: EC_GROUP_get_order
// ----------------------------------------------------------------------------
bool EC_GROUP_get_order(int a1, uint32_t *a2)
{
  uint32_t *v2;
  int v3;

  v2 = BN_copy(a2, (uint32_t *)(a1 + 8));
  v3 = 0;
  if ( v2 != nullptr )
    return a2[1] != 0;
  return v3;
}

// ----------------------------------------------------------------------------
// Function: EC_GROUP_get_cofactor  (binary VA: 0x19a1d70)
// Original: EC_GROUP_get_cofactor
// ----------------------------------------------------------------------------
bool EC_GROUP_get_cofactor(int a1, uint32_t *a2)
{
  uint32_t *v2;
  int v3;

  v2 = BN_copy(a2, (uint32_t *)(a1 + 28));
  v3 = 0;
  if ( v2 != nullptr )
    return *(uint32_t *)(a1 + 32) != 0;
  return v3;
}

// ----------------------------------------------------------------------------
// Function: EC_GROUP_set_curve_name  (binary VA: 0x19a1dc0)
// Original: EC_GROUP_set_curve_name
// ----------------------------------------------------------------------------
int EC_GROUP_set_curve_name(int a1, int a2)
{
  *(uint32_t *)(a1 + 48) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: EC_GROUP_get_curve_name  (binary VA: 0x19a1dd0)
// Original: EC_GROUP_get_curve_name
// ----------------------------------------------------------------------------
int EC_GROUP_get_curve_name(int a1)
{
  return *(uint32_t *)(a1 + 48);
}

// ----------------------------------------------------------------------------
// Function: EC_GROUP_set_asn1_flag  (binary VA: 0x19a1de0)
// Original: EC_GROUP_set_asn1_flag
// ----------------------------------------------------------------------------
int EC_GROUP_set_asn1_flag(int a1, int a2)
{
  *(uint32_t *)(a1 + 52) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: EC_GROUP_get_asn1_flag  (binary VA: 0x19a1df0)
// Original: EC_GROUP_get_asn1_flag
// ----------------------------------------------------------------------------
int EC_GROUP_get_asn1_flag(int a1)
{
  return *(uint32_t *)(a1 + 52);
}

// ----------------------------------------------------------------------------
// Function: EC_GROUP_set_point_conversion_form  (binary VA: 0x19a1e00)
// Original: EC_GROUP_set_point_conversion_form
// ----------------------------------------------------------------------------
int EC_GROUP_set_point_conversion_form(int a1, int a2)
{
  *(uint32_t *)(a1 + 56) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: EC_GROUP_get_point_conversion_form  (binary VA: 0x19a1e10)
// Original: EC_GROUP_get_point_conversion_form
// ----------------------------------------------------------------------------
int EC_GROUP_get_point_conversion_form(int a1)
{
  return *(uint32_t *)(a1 + 56);
}

// ----------------------------------------------------------------------------
// Function: EC_GROUP_set_seed  (binary VA: 0x19a1e20)
// Original: EC_GROUP_set_seed
// ----------------------------------------------------------------------------
size_t EC_GROUP_set_seed(int a1, void *src, size_t n)
{
  size_t v3;
  uint8_t *dest;

  v3 = n;
  if ( *(uint32_t *)(a1 + 60) != 0 )
  {
    CRYPTO_free(*(void **)(a1 + 60));
    *(uint32_t *)(a1 + 60) = 0;
    *(uint32_t *)(a1 + 64) = 0;
  }
  if ( n == 0 || src == nullptr )
    return 1;
  dest = CRYPTO_malloc(n, (int)(uintptr_t)(&unk_1B15112), 0);
  *(uint32_t *)(a1 + 60) = (uint32_t)(uintptr_t)(dest);
  if ( dest == nullptr )
    return 0;
  memcpy(dest, src, n);
  *(uint32_t *)(a1 + 64) = n;
  return v3;
}

// ----------------------------------------------------------------------------
// Function: EC_GROUP_get0_seed  (binary VA: 0x19a1ed0)
// Original: EC_GROUP_get0_seed
// ----------------------------------------------------------------------------
int EC_GROUP_get0_seed(int a1)
{
  return *(uint32_t *)(a1 + 60);
}

// ----------------------------------------------------------------------------
// Function: EC_GROUP_get_seed_len  (binary VA: 0x19a1ee0)
// Original: EC_GROUP_get_seed_len
// ----------------------------------------------------------------------------
int EC_GROUP_get_seed_len(int a1)
{
  return *(uint32_t *)(a1 + 64);
}

// ----------------------------------------------------------------------------
// Function: EC_GROUP_set_curve_GFp  (binary VA: 0x19a1ef0)
// Original: EC_GROUP_set_curve_GFp
// ----------------------------------------------------------------------------
int EC_GROUP_set_curve_GFp(int a1, int a2, int a3, int a4, int a5)
{
  int (*v5)(int, int, int, int, int);

  v5 = *(int (**)(int, int, int, int, int))(*(uint32_t *)a1 + 20);
  if ( v5 != nullptr )
    return v5(a1, a2, a3, a4, a5);
  ERR_put_error(16, 109, 66, &unk_1B15112, 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: EC_GROUP_get_curve_GFp  (binary VA: 0x19a1f70)
// Original: EC_GROUP_get_curve_GFp
// ----------------------------------------------------------------------------
int EC_GROUP_get_curve_GFp(int a1, int a2, int a3, int a4, int a5)
{
  int (*v5)(int, int, int, int, int);

  v5 = *(int (**)(int, int, int, int, int))(*(uint32_t *)a1 + 24);
  if ( v5 != nullptr )
    return v5(a1, a2, a3, a4, a5);
  ERR_put_error(16, 130, 66, &unk_1B15112, 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: EC_GROUP_set_curve_GF2m  (binary VA: 0x19a1ff0)
// Original: EC_GROUP_set_curve_GF2m
// ----------------------------------------------------------------------------
int EC_GROUP_set_curve_GF2m(int a1, int a2, int a3, int a4, int a5)
{
  int (*v5)(int, int, int, int, int);

  v5 = *(int (**)(int, int, int, int, int))(*(uint32_t *)a1 + 20);
  if ( v5 != nullptr )
    return v5(a1, a2, a3, a4, a5);
  ERR_put_error(16, 176, 66, &unk_1B15112, 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: EC_GROUP_get_curve_GF2m  (binary VA: 0x19a2070)
// Original: EC_GROUP_get_curve_GF2m
// ----------------------------------------------------------------------------
int EC_GROUP_get_curve_GF2m(int a1, int a2, int a3, int a4, int a5)
{
  int (*v5)(int, int, int, int, int);

  v5 = *(int (**)(int, int, int, int, int))(*(uint32_t *)a1 + 24);
  if ( v5 != nullptr )
    return v5(a1, a2, a3, a4, a5);
  ERR_put_error(16, 172, 66, &unk_1B15112, 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: EC_GROUP_get_degree  (binary VA: 0x19a20f0)
// Original: EC_GROUP_get_degree
// ----------------------------------------------------------------------------
int EC_GROUP_get_degree(int a1)
{
  int (*v1)(int);

  v1 = *(int (**)(int))(*(uint32_t *)a1 + 28);
  if ( v1 != nullptr )
    return v1(a1);
  ERR_put_error(16, 173, 66, &unk_1B15112, 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: EC_GROUP_check_discriminant  (binary VA: 0x19a2150)
// Original: EC_GROUP_check_discriminant
// ----------------------------------------------------------------------------
int EC_GROUP_check_discriminant(int a1, int a2)
{
  int (*v2)(int, int);

  v2 = *(int (**)(int, int))(*(uint32_t *)a1 + 32);
  if ( v2 != nullptr )
    return v2(a1, a2);
  ERR_put_error(16, 171, 66, &unk_1B15112, 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: EC_EX_DATA_set_data  (binary VA: 0x19a21c0)
// Original: EC_EX_DATA_set_data
// ----------------------------------------------------------------------------
int EC_EX_DATA_set_data(uint32_t *a1, int a2, int a3, int a4, int a5)
{
  int result;
  uint32_t *v6;
  uint32_t *v7;

  result = 0;
  if ( a1 != nullptr )
  {
    v6 = (uint32_t *)*a1;
    if ( *a1 != 0 )
    {
      while ( v6[2] != a3 || v6[3] != a4 || v6[4] != a5 )
      {
        v6 = (uint32_t *)*v6;
        if ( v6 == nullptr )
          goto LABEL_10;
      }
      ERR_put_error(16, 211, 108, &unk_1B15112, 0);
      return 0;
    }
    else
    {
LABEL_10:
      result = 1;
      if ( a2 != 0 )
      {
        v7 = (uint32_t *)(CRYPTO_malloc(20, (int)(uintptr_t)(&unk_1B15112), 0));
        result = 0;
        if ( v7 != nullptr )
        {
          v7[1] = a2;
          v7[2] = a3;
          v7[3] = a4;
          v7[4] = a5;
          *v7 = *a1;
          *a1 = (uint32_t)(uintptr_t)(v7);
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EC_EX_DATA_get_data  (binary VA: 0x19a22c0)
// Original: EC_EX_DATA_get_data
// ----------------------------------------------------------------------------
uint32_t * EC_EX_DATA_get_data(uint32_t *a1, int a2, int a3, int a4)
{
  uint32_t *result;

  result = nullptr;
  if ( a1 != nullptr )
  {
    result = a1;
    while ( result[2] != a2 || result[3] != a3 || result[4] != a4 )
    {
      result = (uint32_t *)*result;
      if ( result == nullptr )
        return result;
    }
    return (uint32_t *)result[1];
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EC_EX_DATA_free_data  (binary VA: 0x19a2300)
// Original: EC_EX_DATA_free_data
// ----------------------------------------------------------------------------
void EC_EX_DATA_free_data(void **a1, void *a2, void (*a3)(void *), void *a4)
{
  void **v4;
  void **v5;
  void *v6;

  v4 = a1;
  if ( a1 != nullptr )
  {
    v5 = (void **)*a1;
    if ( *a1 != nullptr )
    {
      while ( v5[2] != a2 || v5[3] != a3 || v5[4] != a4 )
      {
        v4 = v5;
        v5 = (void **)*v5;
        if ( v5 == nullptr )
          return;
      }
      v6 = *v5;
      a3(v5[1]);
      CRYPTO_free(*v4);
      *v4 = v6;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: EC_EX_DATA_clear_free_data  (binary VA: 0x19a2370)
// Original: EC_EX_DATA_clear_free_data
// ----------------------------------------------------------------------------
void EC_EX_DATA_clear_free_data(void **a1, void *a2, void *a3, void (*a4)(void *))
{
  void **v4;
  void **v5;
  void *v6;

  v4 = a1;
  if ( a1 != nullptr )
  {
    v5 = (void **)*a1;
    if ( *a1 != nullptr )
    {
      while ( v5[2] != a2 || v5[3] != a3 || v5[4] != a4 )
      {
        v4 = v5;
        v5 = (void **)*v5;
        if ( v5 == nullptr )
          return;
      }
      v6 = *v5;
      a4(v5[1]);
      CRYPTO_free(*v4);
      *v4 = v6;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: EC_EX_DATA_free_all_data  (binary VA: 0x19a23e0)
// Original: EC_EX_DATA_free_all_data
// ----------------------------------------------------------------------------
int EC_EX_DATA_free_all_data(void **a1)
{
  void (**v1)(uint32_t);
  void (*v2)(uint32_t);
  int result;

  if ( a1 != nullptr )
  {
    v1 = (void (**)(uint32_t))*a1;
    if ( *a1 != nullptr )
    {
      while ( 1 )
      {
        v2 = *v1;
        v1[3]((uint32_t)(uintptr_t)(v1[1]));
        result = CRYPTO_free(v1);
        if ( v2 == nullptr )
          break;
        v1 = (void (**)(uint32_t))v2;
      }
    }
    *a1 = nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EC_EX_DATA_clear_free_all_data  (binary VA: 0x19a2440)
// Original: EC_EX_DATA_clear_free_all_data
// ----------------------------------------------------------------------------
int EC_EX_DATA_clear_free_all_data(void **a1)
{
  void (**v1)(uint32_t);
  void (*v2)(uint32_t);
  int result;

  if ( a1 != nullptr )
  {
    v1 = (void (**)(uint32_t))*a1;
    if ( *a1 != nullptr )
    {
      while ( 1 )
      {
        v2 = *v1;
        v1[4]((uint32_t)(uintptr_t)(v1[1]));
        result = CRYPTO_free(v1);
        if ( v2 == nullptr )
          break;
        v1 = (void (**)(uint32_t))v2;
      }
    }
    *a1 = nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EC_POINT_new  (binary VA: 0x19a24a0)
// Original: EC_POINT_new
// ----------------------------------------------------------------------------
uint8_t * EC_POINT_new(int *a1)
{
  uint8_t *v1;
  int v2;
  void *v4;

  if ( a1 != nullptr )
  {
    if ( *(uint32_t *)(*a1 + 36) != 0 )
    {
      v1 = CRYPTO_malloc(68, (int)(uintptr_t)(&unk_1B15112), 0);
      if ( v1 != nullptr )
      {
        v2 = *a1;
        *(uint32_t *)v1 = *a1;
        if ( (*(int (**)(uint8_t *))(v2 + 36))(v1) == 0 )
        {
          v4 = v1;
          v1 = nullptr;
          CRYPTO_free(v4);
        }
      }
      else
      {
        ERR_put_error(16, 121, 65, &unk_1B15112, 0);
      }
    }
    else
    {
      v1 = nullptr;
      ERR_put_error(16, 121, 66, &unk_1B15112, 0);
    }
  }
  else
  {
    v1 = nullptr;
    ERR_put_error(16, 121, 67, &unk_1B15112, 0);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: EC_POINT_free  (binary VA: 0x19a25d0)
// Original: EC_POINT_free
// ----------------------------------------------------------------------------
void EC_POINT_free(void *a1)
{
  void (*v1)(void *);

  if ( a1 != nullptr )
  {
    v1 = *(void (**)(void *))(*(uint32_t *)a1 + 40);
    if ( v1 != nullptr )
      v1(a1);
    CRYPTO_free(a1);
  }
}

// ----------------------------------------------------------------------------
// Function: EC_GROUP_free  (binary VA: 0x19a2620)
// Original: EC_GROUP_free
// ----------------------------------------------------------------------------
void EC_GROUP_free(void **a1)
{
  void (*v1)(void **);

  if ( a1 != nullptr )
  {
    v1 = *((void (**)(void **))*a1 + 2);
    if ( v1 != nullptr )
      v1(a1);
    EC_EX_DATA_free_all_data(a1 + 17);
    if ( a1[1] != nullptr )
      EC_POINT_free(a1[1]);
    BN_free(a1 + 2);
    BN_free(a1 + 7);
    if ( a1[15] != nullptr )
      CRYPTO_free(a1[15]);
    CRYPTO_free(a1);
  }
}

// ----------------------------------------------------------------------------
// Function: EC_POINT_clear_free  (binary VA: 0x19a26a0)
// Original: EC_POINT_clear_free
// ----------------------------------------------------------------------------
void EC_POINT_clear_free(uint8_t *a1)
{
  void (*v1)(uint8_t *);

  if ( a1 != nullptr )
  {
    v1 = *(void (**)(uint8_t *))(*(uint32_t *)a1 + 44);
    if ( v1 != nullptr || (v1 = *(void (**)(uint8_t *))(*(uint32_t *)a1 + 40)) != nullptr )
      v1(a1);
    OPENSSL_cleanse(a1, 0x44u);
    CRYPTO_free(a1);
  }
}

// ----------------------------------------------------------------------------
// Function: EC_GROUP_clear_free  (binary VA: 0x19a2710)
// Original: EC_GROUP_clear_free
// ----------------------------------------------------------------------------
void EC_GROUP_clear_free(void **a1)
{
  void (*v1)(void **);

  if ( a1 != nullptr )
  {
    v1 = *((void (**)(void **))*a1 + 3);
    if ( v1 != nullptr || (v1 = *((void (**)(void **))*a1 + 2)) != nullptr )
      v1(a1);
    EC_EX_DATA_clear_free_all_data(a1 + 17);
    if ( a1[1] != nullptr )
      EC_POINT_clear_free((uint8_t *)a1[1]);
    BN_clear_free((uint8_t **)a1 + 2);
    BN_clear_free((uint8_t **)a1 + 7);
    if ( a1[15] != nullptr )
    {
      OPENSSL_cleanse((uint8_t *)a1[15], (size_t)a1[16]);
      CRYPTO_free(a1[15]);
    }
    OPENSSL_cleanse((uint8_t *)a1, 0xACu);
    CRYPTO_free(a1);
  }
}

// ----------------------------------------------------------------------------
// Function: EC_POINT_copy  (binary VA: 0x19a27c0)
// Original: EC_POINT_copy
// ----------------------------------------------------------------------------
int EC_POINT_copy(uint32_t *a1, uint32_t *a2)
{
  int (*v2)(uint32_t *, uint32_t *);
  int result;

  v2 = *(int (**)(uint32_t *, uint32_t *))(*a1 + 48);
  if ( v2 != nullptr )
  {
    if ( *a1 == *a2 )
    {
      result = 1;
      if ( a1 != a2 )
        return v2(a1, a2);
    }
    else
    {
      ERR_put_error(16, 114, 101, &unk_1B15112, 0);
      return 0;
    }
  }
  else
  {
    ERR_put_error(16, 114, 66, &unk_1B15112, 0);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EC_GROUP_set_generator  (binary VA: 0x19a2890)
// Original: EC_GROUP_set_generator
// ----------------------------------------------------------------------------
bool EC_GROUP_set_generator(int *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4)
{
  uint8_t *v4;
  int v5;

  if ( a2 == nullptr )
  {
    v5 = 0;
    ERR_put_error(16, 111, 67, &unk_1B15112, 0);
    return v5;
  }
  v4 = (uint8_t *)a1[1];
  if ( v4 != nullptr || (v5 = 0, v4 = EC_POINT_new(a1), a1[1] = (int)(uintptr_t)(v4), v4 != nullptr) )
  {
    v5 = 0;
    if ( EC_POINT_copy(v4, a2) != 0 )
    {
      if ( a3 != nullptr )
      {
        if ( BN_copy(a1 + 2, a3) == nullptr )
          return v5;
      }
      else
      {
        BN_set_word(a1 + 2, 0);
      }
      if ( a4 != nullptr )
      {
        return BN_copy(a1 + 7, a4) != nullptr;
      }
      else
      {
        v5 = 1;
        BN_set_word(a1 + 7, 0);
      }
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: EC_GROUP_copy  (binary VA: 0x19a29c0)
// Original: EC_GROUP_copy
// ----------------------------------------------------------------------------
int EC_GROUP_copy(int a1, int a2)
{
  int v2;
  uint32_t *v4;
  int v5;
  uint8_t *v6;
  uint32_t *v7;
  int v8;
  uint8_t *dest;

  if ( *(uint32_t *)(*(uint32_t *)a1 + 16) == 0 )
  {
    v2 = 0;
    ERR_put_error(16, 106, 66, &unk_1B15112, 0);
    return v2;
  }
  if ( *(uint32_t *)a1 != *(uint32_t *)a2 )
  {
    v2 = 0;
    ERR_put_error(16, 106, 101, &unk_1B15112, 0);
    return v2;
  }
  v2 = 1;
  if ( a1 == a2 )
    return v2;
  EC_EX_DATA_free_all_data((void **)(a1 + 68));
  v4 = *(uint32_t **)(a2 + 68);
  if ( v4 == nullptr )
  {
LABEL_12:
    v6 = *(uint8_t **)(a1 + 4);
    v7 = *(uint32_t **)(a2 + 4);
    if ( v7 != nullptr )
    {
      if ( v6 == nullptr )
      {
        v2 = 0;
        v6 = EC_POINT_new((int *)a1);
        *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v6);
        if ( v6 == nullptr )
          return v2;
        v7 = *(uint32_t **)(a2 + 4);
      }
      v2 = 0;
      if ( EC_POINT_copy(v6, v7) == 0 )
        return v2;
    }
    else if ( v6 != nullptr )
    {
      EC_POINT_clear_free(v6);
      *(uint32_t *)(a1 + 4) = 0;
    }
    v2 = 0;
    if ( BN_copy((uint32_t *)(a1 + 8), (uint32_t *)(a2 + 8)) != nullptr
      && BN_copy((uint32_t *)(a1 + 28), (uint32_t *)(a2 + 28)) != nullptr )
    {
      *(uint32_t *)(a1 + 48) = *(uint32_t *)(a2 + 48);
      *(uint32_t *)(a1 + 52) = *(uint32_t *)(a2 + 52);
      *(uint32_t *)(a1 + 56) = *(uint32_t *)(a2 + 56);
      v8 = *(uint32_t *)(a1 + 60);
      if ( *(uint32_t *)(a2 + 60) != 0 )
      {
        if ( v8 != 0 )
          CRYPTO_free(*(void **)(a1 + 60));
        v2 = 0;
        dest = CRYPTO_malloc(*(uint32_t *)(a2 + 64), (int)(uintptr_t)(&unk_1B15112), 0);
        *(uint32_t *)(a1 + 60) = (uint32_t)(uintptr_t)(dest);
        if ( dest == nullptr || memcpy(dest, *(const void **)(a2 + 60), *(uint32_t *)(a2 + 64)) == nullptr )
          return v2;
        *(uint32_t *)(a1 + 64) = *(uint32_t *)(a2 + 64);
      }
      else
      {
        if ( v8 != 0 )
          CRYPTO_free(*(void **)(a1 + 60));
        *(uint32_t *)(a1 + 60) = 0;
        *(uint32_t *)(a1 + 64) = 0;
      }
      return G4_VCALL<int>(a1, 16, a2);
    }
    return v2;
  }
  while ( 1 )
  {
    v5 = ((int (*)(uint32_t))v4[2])(v4[1]);
    if ( v5 == 0 || EC_EX_DATA_set_data((uint32_t *)(a1 + 68), v5, v4[2], v4[3], v4[4]) == 0 )
      return 0;
    v4 = (uint32_t *)*v4;
    if ( v4 == nullptr )
      goto LABEL_12;
  }
}

// ----------------------------------------------------------------------------
// Function: EC_GROUP_dup  (binary VA: 0x19a2c40)
// Original: EC_GROUP_dup
// ----------------------------------------------------------------------------
void ** EC_GROUP_dup(int *a1)
{
  void **v1;
  void **v2;
  void **v4;

  v1 = nullptr;
  if ( a1 != nullptr )
  {
    v2 = (void **)EC_GROUP_new(*a1);
    v1 = v2;
    if ( v2 != nullptr && EC_GROUP_copy((int)(uintptr_t)(v2), (int)(uintptr_t)(a1)) == 0 )
    {
      v4 = v1;
      v1 = nullptr;
      EC_GROUP_free(v4);
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: EC_POINT_dup  (binary VA: 0x19a2cb0)
// Original: EC_POINT_dup
// ----------------------------------------------------------------------------
uint8_t * EC_POINT_dup(uint32_t *a1, int *a2)
{
  uint8_t *v2;
  uint8_t *v3;
  void *v5;

  v2 = nullptr;
  if ( a1 != nullptr )
  {
    v3 = EC_POINT_new(a2);
    v2 = v3;
    if ( v3 != nullptr && EC_POINT_copy(v3, a1) == 0 )
    {
      v5 = v2;
      v2 = nullptr;
      EC_POINT_free(v5);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: EC_POINT_method_of  (binary VA: 0x19a2d20)
// Original: EC_POINT_method_of
// ----------------------------------------------------------------------------
int EC_POINT_method_of(int a1)
{
  return *(uint32_t *)a1;
}

// ----------------------------------------------------------------------------
// Function: EC_POINT_set_to_infinity  (binary VA: 0x19a2d30)
// Original: EC_POINT_set_to_infinity
// ----------------------------------------------------------------------------
int EC_POINT_set_to_infinity(int a1, uint32_t *a2)
{
  int (*v2)(int, uint32_t *);

  v2 = *(int (**)(int, uint32_t *))(*(uint32_t *)a1 + 52);
  if ( v2 != nullptr )
  {
    if ( *(uint32_t *)a1 == *a2 )
    {
      return v2(a1, a2);
    }
    else
    {
      ERR_put_error(16, 127, 101, &unk_1B15112, 0);
      return 0;
    }
  }
  else
  {
    ERR_put_error(16, 127, 66, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: EC_POINT_set_Jprojective_coordinates_GFp  (binary VA: 0x19a2df0)
// Original: EC_POINT_set_Jprojective_coordinates_GFp
// ----------------------------------------------------------------------------
int EC_POINT_set_Jprojective_coordinates_GFp(int a1, uint32_t *a2, int a3, int a4, int a5, int a6)
{
  int (*v6)(int, uint32_t *, int, int, int, int);

  v6 = *(int (**)(int, uint32_t *, int, int, int, int))(*(uint32_t *)a1 + 56);
  if ( v6 != nullptr )
  {
    if ( *(uint32_t *)a1 == *a2 )
    {
      return v6(a1, a2, a3, a4, a5, a6);
    }
    else
    {
      ERR_put_error(16, 126, 101, &unk_1B15112, 0);
      return 0;
    }
  }
  else
  {
    ERR_put_error(16, 126, 66, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: EC_POINT_get_Jprojective_coordinates_GFp  (binary VA: 0x19a2ed0)
// Original: EC_POINT_get_Jprojective_coordinates_GFp
// ----------------------------------------------------------------------------
int EC_POINT_get_Jprojective_coordinates_GFp(int a1, uint32_t *a2, int a3, int a4, int a5, int a6)
{
  int (*v6)(int, uint32_t *, int, int, int, int);

  v6 = *(int (**)(int, uint32_t *, int, int, int, int))(*(uint32_t *)a1 + 60);
  if ( v6 != nullptr )
  {
    if ( *(uint32_t *)a1 == *a2 )
    {
      return v6(a1, a2, a3, a4, a5, a6);
    }
    else
    {
      ERR_put_error(16, 117, 101, &unk_1B15112, 0);
      return 0;
    }
  }
  else
  {
    ERR_put_error(16, 117, 66, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: EC_POINT_set_affine_coordinates_GFp  (binary VA: 0x19a2fb0)
// Original: EC_POINT_set_affine_coordinates_GFp
// ----------------------------------------------------------------------------
int EC_POINT_set_affine_coordinates_GFp(int a1, uint32_t *a2, int a3, int a4, int a5)
{
  int (*v5)(int, uint32_t *, int, int, int);

  v5 = *(int (**)(int, uint32_t *, int, int, int))(*(uint32_t *)a1 + 64);
  if ( v5 != nullptr )
  {
    if ( *(uint32_t *)a1 == *a2 )
    {
      return v5(a1, a2, a3, a4, a5);
    }
    else
    {
      ERR_put_error(16, 124, 101, &unk_1B15112, 0);
      return 0;
    }
  }
  else
  {
    ERR_put_error(16, 124, 66, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: EC_POINT_set_affine_coordinates_GF2m  (binary VA: 0x19a3090)
// Original: EC_POINT_set_affine_coordinates_GF2m
// ----------------------------------------------------------------------------
int EC_POINT_set_affine_coordinates_GF2m(int a1, uint32_t *a2, int a3, int a4, int a5)
{
  int (*v5)(int, uint32_t *, int, int, int);

  v5 = *(int (**)(int, uint32_t *, int, int, int))(*(uint32_t *)a1 + 64);
  if ( v5 != nullptr )
  {
    if ( *(uint32_t *)a1 == *a2 )
    {
      return v5(a1, a2, a3, a4, a5);
    }
    else
    {
      ERR_put_error(16, 185, 101, &unk_1B15112, 0);
      return 0;
    }
  }
  else
  {
    ERR_put_error(16, 185, 66, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: EC_POINT_get_affine_coordinates_GFp  (binary VA: 0x19a3170)
// Original: EC_POINT_get_affine_coordinates_GFp
// ----------------------------------------------------------------------------
int EC_POINT_get_affine_coordinates_GFp(int a1, uint32_t *a2, int a3, int a4, int a5)
{
  int (*v5)(int, uint32_t *, int, int, int);

  v5 = *(int (**)(int, uint32_t *, int, int, int))(*(uint32_t *)a1 + 68);
  if ( v5 != nullptr )
  {
    if ( *(uint32_t *)a1 == *a2 )
    {
      return v5(a1, a2, a3, a4, a5);
    }
    else
    {
      ERR_put_error(16, 116, 101, &unk_1B15112, 0);
      return 0;
    }
  }
  else
  {
    ERR_put_error(16, 116, 66, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: EC_POINT_get_affine_coordinates_GF2m  (binary VA: 0x19a3250)
// Original: EC_POINT_get_affine_coordinates_GF2m
// ----------------------------------------------------------------------------
int EC_POINT_get_affine_coordinates_GF2m(int a1, uint32_t *a2, int a3, int a4, int a5)
{
  int (*v5)(int, uint32_t *, int, int, int);

  v5 = *(int (**)(int, uint32_t *, int, int, int))(*(uint32_t *)a1 + 68);
  if ( v5 != nullptr )
  {
    if ( *(uint32_t *)a1 == *a2 )
    {
      return v5(a1, a2, a3, a4, a5);
    }
    else
    {
      ERR_put_error(16, 183, 101, &unk_1B15112, 0);
      return 0;
    }
  }
  else
  {
    ERR_put_error(16, 183, 66, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: EC_POINT_set_compressed_coordinates_GFp  (binary VA: 0x19a3330)
// Original: EC_POINT_set_compressed_coordinates_GFp
// ----------------------------------------------------------------------------
int EC_POINT_set_compressed_coordinates_GFp(int a1, uint32_t *a2, int a3, int a4, int a5)
{
  int (*v5)(int, uint32_t *, int, int, int);

  v5 = *(int (**)(int, uint32_t *, int, int, int))(*(uint32_t *)a1 + 72);
  if ( v5 != nullptr )
  {
    if ( *(uint32_t *)a1 == *a2 )
    {
      return v5(a1, a2, a3, a4, a5);
    }
    else
    {
      ERR_put_error(16, 125, 101, &unk_1B15112, 0);
      return 0;
    }
  }
  else
  {
    ERR_put_error(16, 125, 66, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: EC_POINT_set_compressed_coordinates_GF2m  (binary VA: 0x19a3410)
// Original: EC_POINT_set_compressed_coordinates_GF2m
// ----------------------------------------------------------------------------
int EC_POINT_set_compressed_coordinates_GF2m(int a1, uint32_t *a2, int a3, int a4, int a5)
{
  int (*v5)(int, uint32_t *, int, int, int);

  v5 = *(int (**)(int, uint32_t *, int, int, int))(*(uint32_t *)a1 + 72);
  if ( v5 != nullptr )
  {
    if ( *(uint32_t *)a1 == *a2 )
    {
      return v5(a1, a2, a3, a4, a5);
    }
    else
    {
      ERR_put_error(16, 186, 101, &unk_1B15112, 0);
      return 0;
    }
  }
  else
  {
    ERR_put_error(16, 186, 66, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: EC_POINT_point2oct  (binary VA: 0x19a34f0)
// Original: EC_POINT_point2oct
// ----------------------------------------------------------------------------
int EC_POINT_point2oct(int a1, uint32_t *a2, int a3, int a4, int a5, int a6)
{
  int (*v6)(int, uint32_t *, int, int, int, int);

  v6 = *(int (**)(int, uint32_t *, int, int, int, int))(*(uint32_t *)a1 + 76);
  if ( v6 != nullptr )
  {
    if ( *(uint32_t *)a1 == *a2 )
    {
      return v6(a1, a2, a3, a4, a5, a6);
    }
    else
    {
      ERR_put_error(16, 123, 101, &unk_1B15112, 0);
      return 0;
    }
  }
  else
  {
    ERR_put_error(16, 123, 66, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: EC_POINT_oct2point  (binary VA: 0x19a35d0)
// Original: EC_POINT_oct2point
// ----------------------------------------------------------------------------
int EC_POINT_oct2point(int a1, uint32_t *a2, int a3, int a4, int a5)
{
  int (*v5)(int, uint32_t *, int, int, int);

  v5 = *(int (**)(int, uint32_t *, int, int, int))(*(uint32_t *)a1 + 80);
  if ( v5 != nullptr )
  {
    if ( *(uint32_t *)a1 == *a2 )
    {
      return v5(a1, a2, a3, a4, a5);
    }
    else
    {
      ERR_put_error(16, 122, 101, &unk_1B15112, 0);
      return 0;
    }
  }
  else
  {
    ERR_put_error(16, 122, 66, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: EC_POINT_add  (binary VA: 0x19a36b0)
// Original: EC_POINT_add
// ----------------------------------------------------------------------------
int EC_POINT_add(int *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int a5)
{
  int v5;
  int (*v6)(int *, uint32_t *, uint32_t *, uint32_t *, int);

  v5 = *a1;
  v6 = *(int (**)(int *, uint32_t *, uint32_t *, uint32_t *, int))(*a1 + 84);
  if ( v6 != nullptr )
  {
    if ( v5 == *a2 && v5 == *a3 && v5 == *a4 )
    {
      return v6(a1, a2, a3, a4, a5);
    }
    else
    {
      ERR_put_error(16, 112, 101, &unk_1B15112, 0);
      return 0;
    }
  }
  else
  {
    ERR_put_error(16, 112, 66, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: EC_POINT_dbl  (binary VA: 0x19a37a0)
// Original: EC_POINT_dbl
// ----------------------------------------------------------------------------
int EC_POINT_dbl(int *a1, uint32_t *a2, uint32_t *a3, int a4)
{
  int v4;
  int (*v5)(int *, uint32_t *, uint32_t *, int);

  v4 = *a1;
  v5 = *(int (**)(int *, uint32_t *, uint32_t *, int))(*a1 + 88);
  if ( v5 != nullptr )
  {
    if ( v4 == *a2 && v4 == *a3 )
    {
      return v5(a1, a2, a3, a4);
    }
    else
    {
      ERR_put_error(16, 115, 101, &unk_1B15112, 0);
      return 0;
    }
  }
  else
  {
    ERR_put_error(16, 115, 66, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: EC_POINT_invert  (binary VA: 0x19a3870)
// Original: EC_POINT_invert
// ----------------------------------------------------------------------------
int EC_POINT_invert(int *a1, uint32_t *a2, int a3)
{
  int v3;

  v3 = *a1;
  if ( *(uint32_t *)(*a1 + 88) != 0 )
  {
    if ( v3 == *a2 )
    {
      return (*(int (**)(int *, uint32_t *, int))(v3 + 92))(a1, a2, a3);
    }
    else
    {
      ERR_put_error(16, 210, 101, &unk_1B15112, 0);
      return 0;
    }
  }
  else
  {
    ERR_put_error(16, 210, 66, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: EC_POINT_is_at_infinity  (binary VA: 0x19a3940)
// Original: EC_POINT_is_at_infinity
// ----------------------------------------------------------------------------
int EC_POINT_is_at_infinity(int a1, uint32_t *a2)
{
  int (*v2)(int, uint32_t *);

  v2 = *(int (**)(int, uint32_t *))(*(uint32_t *)a1 + 96);
  if ( v2 != nullptr )
  {
    if ( *(uint32_t *)a1 == *a2 )
    {
      return v2(a1, a2);
    }
    else
    {
      ERR_put_error(16, 118, 101, &unk_1B15112, 0);
      return 0;
    }
  }
  else
  {
    ERR_put_error(16, 118, 66, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: EC_POINT_is_on_curve  (binary VA: 0x19a3a00)
// Original: EC_POINT_is_on_curve
// ----------------------------------------------------------------------------
int EC_POINT_is_on_curve(int a1, uint32_t *a2, int a3)
{
  int (*v3)(int, uint32_t *, int);

  v3 = *(int (**)(int, uint32_t *, int))(*(uint32_t *)a1 + 100);
  if ( v3 != nullptr )
  {
    if ( *(uint32_t *)a1 == *a2 )
    {
      return v3(a1, a2, a3);
    }
    else
    {
      ERR_put_error(16, 119, 101, &unk_1B15112, 0);
      return 0;
    }
  }
  else
  {
    ERR_put_error(16, 119, 66, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: EC_POINT_cmp  (binary VA: 0x19a3ad0)
// Original: EC_POINT_cmp
// ----------------------------------------------------------------------------
int EC_POINT_cmp(int *a1, uint32_t *a2, uint32_t *a3, int a4)
{
  int v4;
  int (*v5)(int *, uint32_t *, uint32_t *, int);

  v4 = *a1;
  v5 = *(int (**)(int *, uint32_t *, uint32_t *, int))(*a1 + 104);
  if ( v5 != nullptr )
  {
    if ( v4 == *a2 && v4 == *a3 )
    {
      return v5(a1, a2, a3, a4);
    }
    else
    {
      ERR_put_error(16, 113, 101, &unk_1B15112, 0);
      return 0;
    }
  }
  else
  {
    ERR_put_error(16, 113, 66, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: EC_GROUP_cmp  (binary VA: 0x19a3ba0)
// Original: EC_GROUP_cmp
// ----------------------------------------------------------------------------
int EC_GROUP_cmp(int *a1, int a2, int *a3)
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  bool v9;
  int v10;
  uint32_t *v11;
  int v12;
  int *v13;
  bool v14;
  uint32_t *v15;
  int field_type;
  uint8_t *v17;
  int curve_name;
  int *v19;
  int *v20;
  int *v21;
  int *v22;
  uint8_t *v23;
  uint8_t *v24;

  v3 = a3;
  v4 = EC_GROUP_method_of((int)(uintptr_t)(a1));
  field_type = EC_METHOD_get_field_type(v4);
  v5 = EC_GROUP_method_of(a2);
  v6 = EC_METHOD_get_field_type(v5);
  v7 = 1;
  if ( field_type != v6 )
    return v7;
  if ( EC_GROUP_get_curve_name((int)(uintptr_t)(a1)) != 0 && EC_GROUP_get_curve_name(a2) != 0 )
  {
    curve_name = EC_GROUP_get_curve_name((int)(uintptr_t)(a1));
    v10 = EC_GROUP_get_curve_name(a2);
    v7 = 0;
    if ( curve_name == v10 )
      return v7;
  }
  v20 = nullptr;
  if ( a3 == nullptr )
  {
    v13 = (int *)(BN_CTX_new());
    v3 = v13;
    v7 = -1;
    if ( v13 == nullptr )
      return v7;
    v20 = v13;
  }
  BN_CTX_start((int)(uintptr_t)(v3));
  v19 = (int *)BN_CTX_get(v3);
  v21 = (int *)BN_CTX_get(v3);
  v22 = (int *)BN_CTX_get(v3);
  v23 = BN_CTX_get(v3);
  v24 = BN_CTX_get(v3);
  v17 = BN_CTX_get(v3);
  if ( v17 != nullptr )
  {
    if ( G4_VCALL<int>(a1, 24, v19, v21, v22, v3) == 0
      || G4_VCALL<int>(a2, 24, v23, v24, v17, v3) == 0
      || BN_cmp(v19, v23) != 0
      || BN_cmp(v21, v24) != 0
      || BN_cmp(v22, v17) != 0
      || (v15 = (uint32_t *)EC_GROUP_get0_generator(a2),
          v11 = (uint32_t *)EC_GROUP_get0_generator((int)(uintptr_t)(a1)),
          EC_POINT_cmp(a1, v11, v15, (int)(uintptr_t)(v3)) != 0) )
    {
      v9 = true;
LABEL_8:
      v14 = v9;
      BN_CTX_end(v3);
      v7 = v14;
      if ( v20 != nullptr )
      {
        BN_CTX_free((void **)v3);
        return v14;
      }
      return v7;
    }
    if ( EC_GROUP_get_order((int)(uintptr_t)(a1), v19)
      && EC_GROUP_get_order(a2, v23)
      && EC_GROUP_get_cofactor((int)(uintptr_t)(a1), v21)
      && EC_GROUP_get_cofactor(a2, v24) )
    {
      v12 = BN_cmp(v19, v23);
      v9 = true;
      if ( v12 == 0 )
        v9 = BN_cmp(v21, v24) != 0;
      goto LABEL_8;
    }
  }
  BN_CTX_end(v3);
  v7 = -1;
  if ( v20 != nullptr )
  {
    BN_CTX_free((void **)v3);
    return -1;
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: EC_POINT_make_affine  (binary VA: 0x19a3ee0)
// Original: EC_POINT_make_affine
// ----------------------------------------------------------------------------
int EC_POINT_make_affine(int a1, uint32_t *a2, int a3)
{
  int (*v3)(int, uint32_t *, int);

  v3 = *(int (**)(int, uint32_t *, int))(*(uint32_t *)a1 + 108);
  if ( v3 != nullptr )
  {
    if ( *(uint32_t *)a1 == *a2 )
    {
      return v3(a1, a2, a3);
    }
    else
    {
      ERR_put_error(16, 120, 101, &unk_1B15112, 0);
      return 0;
    }
  }
  else
  {
    ERR_put_error(16, 120, 66, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: EC_POINTs_make_affine  (binary VA: 0x19a3fb0)
// Original: EC_POINTs_make_affine
// ----------------------------------------------------------------------------
int EC_POINTs_make_affine(int *a1, int a2, uint32_t **a3, int a4)
{
  int v4;
  int (*v5)(int *, int, uint32_t **, int);
  int v6;

  v4 = *a1;
  v5 = *(int (**)(int *, int, uint32_t **, int))(*a1 + 112);
  if ( v5 != nullptr )
  {
    if ( a2 == 0 )
      return v5(a1, a2, a3, a4);
    if ( v4 == **a3 )
    {
      v6 = 0;
      while ( ++v6 != a2 )
      {
        if ( v4 != *a3[v6] )
          goto LABEL_8;
      }
      return v5(a1, a2, a3, a4);
    }
LABEL_8:
    ERR_put_error(16, 136, 101, &unk_1B15112, 0);
    return 0;
  }
  else
  {
    ERR_put_error(16, 136, 66, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: EC_POINTs_mul  (binary VA: 0x19a4090)
// Original: EC_POINTs_mul
// ----------------------------------------------------------------------------
int EC_POINTs_mul(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int (*v7)(int, int, int, int, int, int, int);

  v7 = *(int (**)(int, int, int, int, int, int, int))(*(uint32_t *)a1 + 116);
  if ( v7 != nullptr )
    return v7(a1, a2, a3, a4, a5, a6, a7);
  else
    return ec_wNAF_mul(a1, a2, a3, a4, a5, a6, a7);
}

// ----------------------------------------------------------------------------
// Function: EC_POINT_mul  (binary VA: 0x19a4130)
// Original: EC_POINT_mul
// ----------------------------------------------------------------------------
int EC_POINT_mul(int a1, int a2, int a3, int a4, int a5, int a6)
{
  typedef int _g4_t_v7;
  typedef uint32_t _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  v8[0] = a5;
  v7 = a4;
  return EC_POINTs_mul(a1, a2, a3, a4 != 0 && a5 != 0, (int)(uintptr_t)(&v7), (int)(uintptr_t)(v8), a6);
}

// ----------------------------------------------------------------------------
// Function: EC_GROUP_precompute_mult  (binary VA: 0x19a41a0)
// Original: EC_GROUP_precompute_mult
// ----------------------------------------------------------------------------
int EC_GROUP_precompute_mult(int a1, int a2)
{
  int (*v2)(int, int);
  int result;

  if ( *(uint32_t *)(*(uint32_t *)a1 + 116) == 0 )
    return ec_wNAF_precompute_mult(a1, a2);
  v2 = *(int (**)(int, int))(*(uint32_t *)a1 + 120);
  result = 1;
  if ( v2 != nullptr )
    return v2(a1, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: EC_GROUP_have_precompute_mult  (binary VA: 0x19a4200)
// Original: EC_GROUP_have_precompute_mult
// ----------------------------------------------------------------------------
int EC_GROUP_have_precompute_mult(int a1)
{
  int (*v1)(int);
  int result;

  if ( *(uint32_t *)(*(uint32_t *)a1 + 116) == 0 )
    return ec_wNAF_have_precompute_mult(a1);
  v1 = *(int (**)(int))(*(uint32_t *)a1 + 124);
  result = 0;
  if ( v1 != nullptr )
    return v1(a1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: EC_POINT_point2bn  (binary VA: 0x19a5b50)
// Original: EC_POINT_point2bn
// ----------------------------------------------------------------------------
void ** EC_POINT_point2bn(int a1, uint32_t *a2, int a3, void **a4, int a5)
{
  int v5;
  uint8_t *v6;
  uint8_t *v7;
  void **v9;

  v5 = EC_POINT_point2oct(a1, a2, a3, 0, 0, a5);
  v9 = nullptr;
  if ( v5 != 0 )
  {
    v6 = CRYPTO_malloc(v5, (int)(uintptr_t)(&unk_1B15112), 0);
    v7 = v6;
    if ( v6 != nullptr )
    {
      if ( EC_POINT_point2oct(a1, a2, a3, (int)(uintptr_t)(v6), v5, a5) != 0 )
        v9 = BN_bin2bn(v7, v5, a4);
      CRYPTO_free(v7);
    }
  }
  return v9;
}

// ----------------------------------------------------------------------------
// Function: EC_POINT_bn2point  (binary VA: 0x19a5c40)
// Original: EC_POINT_bn2point
// ----------------------------------------------------------------------------
uint8_t * EC_POINT_bn2point(int *a1, uint32_t *a2, uint8_t *a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint8_t *v7;
  uint8_t *v8;
  void *v9;
  size_t v11;

  v4 = BN_num_bits(a2);
  v5 = v4 + 14;
  v6 = v4 + 7;
  if ( v6 < 0 )
    v6 = v5;
  v7 = nullptr;
  v11 = v6 >> 3;
  if ( v6 >> 3 != 0 )
  {
    v8 = CRYPTO_malloc(v11, (int)(uintptr_t)(&unk_1B15112), 0);
    v9 = v8;
    if ( v8 != nullptr )
    {
      if ( BN_bn2bin(a2, v8) != 0
        && ((v7 = a3, a3 != nullptr) || (v7 = EC_POINT_new(a1)) != nullptr)
        && EC_POINT_oct2point((int)(uintptr_t)(a1), v7, (int)(uintptr_t)(v9), v11, a4) == 0 )
      {
        if ( a3 == nullptr )
          EC_POINT_clear_free(v7);
        v7 = nullptr;
        CRYPTO_free(v9);
      }
      else
      {
        CRYPTO_free(v9);
      }
    }
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: EC_POINT_point2hex  (binary VA: 0x19a5d50)
// Original: EC_POINT_point2hex
// ----------------------------------------------------------------------------
uint8_t * EC_POINT_point2hex(int a1, uint32_t *a2, int a3, int a4)
{
  int v4;
  int v5;
  uint8_t *v6;
  uint8_t *v7;
  uint8_t *v8;
  int v9;
  int v10;
  bool v11;
  int v13;
  uint8_t *v14;
  uint8_t *v15;

  v4 = EC_POINT_point2oct(a1, a2, a3, 0, 0, a4);
  v5 = v4;
  v14 = nullptr;
  if ( v4 != 0 )
  {
    v6 = CRYPTO_malloc(v4, (int)(uintptr_t)(&unk_1B15112), 0);
    v15 = v6;
    if ( v6 != nullptr )
    {
      if ( EC_POINT_point2oct(a1, a2, a3, (int)(uintptr_t)(v6), v5, a4) != 0 )
      {
        v14 = CRYPTO_malloc(2 * v5 + 2, (int)(uintptr_t)(&unk_1B15112), 0);
        if ( v14 != nullptr )
        {
          v7 = v15;
          v8 = v14;
          v13 = v5;
          do
          {
            v9 = *v7++;
            v10 = v9;
            v11 = v13-- == 1;
            LOBYTE(v9) = a0123456789abcd /* "0123456789ABCDEF" */[v9 & 0xF];
            *v8 = *((uint8_t *)&dword_20B9FF4[-1391955] + (v10 >> 4) - 1);
            v8[1] = v9;
            v8 += 2;
          }
          while ( !v11 );
          v14[2 * v5] = 0;
        }
      }
      CRYPTO_free(v15);
    }
  }
  return v14;
}

// ----------------------------------------------------------------------------
// Function: EC_POINT_hex2point  (binary VA: 0x19a5e80)
// Original: EC_POINT_hex2point
// ----------------------------------------------------------------------------
uint8_t * EC_POINT_hex2point(int *a1, int a2, uint8_t *a3, int a4)
{
  uint8_t *v4;
  typedef void *_g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  v4 = nullptr;
  v6 = nullptr;
  if ( BN_hex2bn(&v6, a2) != 0 )
  {
    v4 = EC_POINT_bn2point(a1, v6, a3, a4);
    BN_clear_free((uint8_t **)v6);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: EC_KEY_print  (binary VA: 0x19a5ef0)
// Original: EC_KEY_print
// ----------------------------------------------------------------------------
int EC_KEY_print(int a1, int a2, int a3)
{
  int v3;
  void *v4;

  v3 = 0;
  v4 = (void *)EVP_PKEY_new();
  if ( v4 != nullptr && EVP_PKEY_set1_EC_KEY((char *)v4, a2) != 0 )
  {
    v3 = EVP_PKEY_print_private(a1, v4, a3, 0);
    EVP_PKEY_free(v4);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: EC_KEY_print_fp  (binary VA: 0x19a5f70)
// Original: EC_KEY_print_fp
// ----------------------------------------------------------------------------
int EC_KEY_print_fp(int a1, int a2, int a3)
{
  void *v3;
  uint8_t *v4;
  int v5;

  v3 = BIO_s_file();
  v4 = BIO_new((int)(uintptr_t)(v3));
  if ( v4 != nullptr )
  {
    BIO_ctrl(v4, 106, 0, a1);
    v5 = EC_KEY_print((int)(uintptr_t)(v4), a2, a3);
    BIO_free(v4);
  }
  else
  {
    v5 = 0;
    ERR_put_error(16, 181, 32, &unk_1B15112, 0);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: EC_GFp_mont_method  (binary VA: 0x19a74b0)
// Original: EC_GFp_mont_method
// ----------------------------------------------------------------------------
void * EC_GFp_mont_method()
{
  return &unk_20AC640;
}

// ----------------------------------------------------------------------------
// Function: EC_GFp_nist_method  (binary VA: 0x19a7920)
// Original: EC_GFp_nist_method
// ----------------------------------------------------------------------------
void * EC_GFp_nist_method()
{
  return &unk_20AC6E0;
}

// ----------------------------------------------------------------------------
// Function: EC_GFp_simple_method  (binary VA: 0x19ab830)
// Original: EC_GFp_simple_method
// ----------------------------------------------------------------------------
void * EC_GFp_simple_method()
{
  return &unk_20AC780;
}

// ----------------------------------------------------------------------------
// Function: ECDH_compute_key  (binary VA: 0x19ab850)
// Original: ECDH_compute_key
// ----------------------------------------------------------------------------
int ECDH_compute_key(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int result;

  v5 = (int)(uintptr_t)(ecdh_check(a4));
  result = 0;
  if ( v5 != 0 )
    return (*(int (**)(int, int, int, int, int))(*(uint32_t *)(v5 + 12) + 4))(a1, a2, a3, a4, a5);
  return result;
}

// ----------------------------------------------------------------------------
// Function: ECDH_set_default_method  (binary VA: 0x19ab930)
// Original: ECDH_set_default_method
// ----------------------------------------------------------------------------
int ECDH_set_default_method(int a1)
{
  dword_21405F0 = a1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: ECDH_get_default_method  (binary VA: 0x19ab950)
// Original: ECDH_get_default_method
// ----------------------------------------------------------------------------
int ECDH_get_default_method()
{
  int result;

  result = dword_21405F0;
  if ( dword_21405F0 == 0 )
  {
    result = (int)(uintptr_t)(ECDH_OpenSSL());
    dword_21405F0 = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ECDH_set_method  (binary VA: 0x19abb60)
// Original: ECDH_set_method
// ----------------------------------------------------------------------------
int ECDH_set_method(int a1, int a2)
{
  uint32_t *v2;
  int result;

  v2 = ecdh_check(a1);
  result = 0;
  if ( v2 != nullptr )
  {
    if ( v2[1] != 0 )
    {
      ENGINE_finish(v2[1]);
      v2[1] = 0;
    }
    v2[3] = a2;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ECDH_get_ex_new_index  (binary VA: 0x19abbc0)
// Original: ECDH_get_ex_new_index
// ----------------------------------------------------------------------------
int ECDH_get_ex_new_index(int a1, int a2, int a3, int a4, int a5)
{
  return CRYPTO_get_ex_new_index(13, a1, a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: ECDH_set_ex_data  (binary VA: 0x19abc10)
// Original: ECDH_set_ex_data
// ----------------------------------------------------------------------------
int ECDH_set_ex_data(int a1, int a2, int a3)
{
  uint32_t *v3;
  int result;

  v3 = ecdh_check(a1);
  result = 0;
  if ( v3 != nullptr )
    return CRYPTO_set_ex_data(v3 + 4, a2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: ECDH_get_ex_data  (binary VA: 0x19abc60)
// Original: ECDH_get_ex_data
// ----------------------------------------------------------------------------
int ECDH_get_ex_data(int a1, int a2)
{
  uint32_t *v2;
  int result;

  v2 = ecdh_check(a1);
  result = 0;
  if ( v2 != nullptr )
    return CRYPTO_get_ex_data(v2 + 4, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: ECDH_OpenSSL  (binary VA: 0x19ac0e0)
// Original: ECDH_OpenSSL
// ----------------------------------------------------------------------------
char ** ECDH_OpenSSL()
{
  return (char **)(&off_20CB7F0);
}

// ----------------------------------------------------------------------------
// Function: ECDSA_set_default_method  (binary VA: 0x19ac170)
// Original: ECDSA_set_default_method
// ----------------------------------------------------------------------------
int ECDSA_set_default_method(int a1)
{
  dword_21405F4 = a1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: ECDSA_get_default_method  (binary VA: 0x19ac190)
// Original: ECDSA_get_default_method
// ----------------------------------------------------------------------------
int ECDSA_get_default_method()
{
  int result;

  result = dword_21405F4;
  if ( dword_21405F4 == 0 )
  {
    result = (int)(uintptr_t)(ECDSA_OpenSSL());
    dword_21405F4 = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ECDSA_set_method  (binary VA: 0x19ac3a0)
// Original: ECDSA_set_method
// ----------------------------------------------------------------------------
int ECDSA_set_method(int a1, int a2)
{
  uint32_t *v2;
  int result;

  v2 = ecdsa_check(a1);
  result = 0;
  if ( v2 != nullptr )
  {
    if ( v2[1] != 0 )
    {
      ENGINE_finish(v2[1]);
      v2[1] = 0;
    }
    v2[3] = a2;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ECDSA_size  (binary VA: 0x19ac400)
// Original: ECDSA_size
// ----------------------------------------------------------------------------
int ECDSA_size(int a1)
{
  int v1;
  int v2;
  uint8_t **v3;
  uint8_t **v4;
  bool order;
  int v6;
  int v7;
  bool v8;
  int v9;
  int v10;
  typedef uint8_t **_g4_t_v12;
  typedef char _g4_t_v13;
  typedef uint32_t _g4_t_v14[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v13)) > _g4_s1 ? (28u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v14)) > _g4_s2 ? (32u + sizeof(_g4_t_v14)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);

  v1 = 0;
  if ( a1 != 0 )
  {
    v2 = EC_KEY_get0_group(a1);
    if ( v2 != 0 )
    {
      v3 = (uint8_t **)BN_new();
      v4 = v3;
      if ( v3 != nullptr )
      {
        order = EC_GROUP_get_order(v2, v3);
        v12 = v4;
        if ( order )
        {
          v6 = BN_num_bits(v4);
          v7 = v6 + 14;
          v8 = v6 + 7 < 0;
          v9 = v6 + 7;
          v14[1] = 2;
          v13 = -1;
          if ( v8 )
            v9 = v7;
          v14[0] = v9 >> 3;
          v14[2] = (uint32_t)(uintptr_t)(&v13);
          v10 = i2d_ASN1_INTEGER((int)(uintptr_t)(v14), nullptr);
          v1 = ASN1_object_size(1, 2 * v10, 16);
          v12 = v4;
        }
        BN_clear_free(v12);
      }
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: ECDSA_get_ex_new_index  (binary VA: 0x19ac4e0)
// Original: ECDSA_get_ex_new_index
// ----------------------------------------------------------------------------
int ECDSA_get_ex_new_index(int a1, int a2, int a3, int a4, int a5)
{
  return CRYPTO_get_ex_new_index(12, a1, a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: ECDSA_set_ex_data  (binary VA: 0x19ac530)
// Original: ECDSA_set_ex_data
// ----------------------------------------------------------------------------
int ECDSA_set_ex_data(int a1, int a2, int a3)
{
  uint32_t *v3;
  int result;

  v3 = ecdsa_check(a1);
  result = 0;
  if ( v3 != nullptr )
    return CRYPTO_set_ex_data(v3 + 4, a2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: ECDSA_get_ex_data  (binary VA: 0x19ac580)
// Original: ECDSA_get_ex_data
// ----------------------------------------------------------------------------
int ECDSA_get_ex_data(int a1, int a2)
{
  uint32_t *v2;
  int result;

  v2 = ecdsa_check(a1);
  result = 0;
  if ( v2 != nullptr )
    return CRYPTO_get_ex_data(v2 + 4, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: ECDSA_OpenSSL  (binary VA: 0x19ad3b0)
// Original: ECDSA_OpenSSL
// ----------------------------------------------------------------------------
char ** ECDSA_OpenSSL()
{
  return (char **)(&off_20CB800);
}

// ----------------------------------------------------------------------------
// Function: ECDSA_do_sign_ex  (binary VA: 0x19ad3d0)
// Original: ECDSA_do_sign_ex
// ----------------------------------------------------------------------------
int ECDSA_do_sign_ex(int a1, int a2, int a3, int a4, int a5)
{
  uint32_t *v5;
  int result;

  v5 = ecdsa_check(a5);
  result = 0;
  if ( v5 != nullptr )
    return (*(int (**)(int, int, int, int, int))(v5[3] + 4))(a1, a2, a3, a4, a5);
  return result;
}

// ----------------------------------------------------------------------------
// Function: ECDSA_do_sign  (binary VA: 0x19ad430)
// Original: ECDSA_do_sign
// ----------------------------------------------------------------------------
int ECDSA_do_sign(int a1, int a2, int a3)
{
  return ECDSA_do_sign_ex(a1, a2, 0, 0, a3);
}

// ----------------------------------------------------------------------------
// Function: ECDSA_sign_ex  (binary VA: 0x19ad480)
// Original: ECDSA_sign_ex
// ----------------------------------------------------------------------------
int ECDSA_sign_ex(int a1, int a2, int a3, char a4, uint32_t *a5, int a6, int a7, int a8)
{
  uint32_t *v8;
  int v9;

  v8 = a5;
  RAND_seed(a2, a3);
  v9 = ECDSA_do_sign_ex(a2, a3, a6, a7, a8);
  if ( v9 != 0 )
  {
    *v8 = i2d_ECDSA_SIG(v9, &a4);
    ECDSA_SIG_free(v9);
    return 1;
  }
  else
  {
    *v8 = 0;
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: ECDSA_sign  (binary VA: 0x19ad530)
// Original: ECDSA_sign
// ----------------------------------------------------------------------------
int ECDSA_sign(int a1, int a2, int a3, char a4, uint32_t *a5, int a6)
{
  return ECDSA_sign_ex(a1, a2, a3, a4, a5, 0, 0, a6);
}

// ----------------------------------------------------------------------------
// Function: ECDSA_sign_setup  (binary VA: 0x19ad590)
// Original: ECDSA_sign_setup
// ----------------------------------------------------------------------------
int ECDSA_sign_setup(int a1, int a2, int a3, int a4)
{
  uint32_t *v4;
  int result;

  v4 = ecdsa_check(a1);
  result = 0;
  if ( v4 != nullptr )
    return (*(int (**)(int, int, int, int))(v4[3] + 8))(a1, a2, a3, a4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: ECDSA_do_verify  (binary VA: 0x19ad5f0)
// Original: ECDSA_do_verify
// ----------------------------------------------------------------------------
int ECDSA_do_verify(int a1, int a2, int a3, int a4)
{
  uint32_t *v4;
  int result;

  v4 = ecdsa_check(a4);
  result = 0;
  if ( v4 != nullptr )
    return (*(int (**)(int, int, int, int))(v4[3] + 12))(a1, a2, a3, a4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: ECDSA_verify  (binary VA: 0x19ad650)
// Original: ECDSA_verify
// ----------------------------------------------------------------------------
int ECDSA_verify(int a1, int a2, int a3, char a4, int a5, int a6)
{
  int v6;
  int v8[4];

  v8[0] = ECDSA_SIG_new();
  if ( v8[0] == 0 )
    return -1;
  v6 = -1;
  if ( d2i_ECDSA_SIG(v8, &a4, a5) != 0 )
    v6 = ECDSA_do_verify(a2, a3, v8[0], a6);
  ECDSA_SIG_free(v8[0]);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_init  (binary VA: 0x19ad830)
// Original: ENGINE_init
// ----------------------------------------------------------------------------
int ENGINE_init(uint32_t *a1)
{
  int v1;

  v1 = (int)(uintptr_t)(a1);
  if ( a1 != nullptr )
  {
    CRYPTO_lock(9, 30, (int)(uintptr_t)(&unk_1B15112), 0);
    v1 = engine_unlocked_init(a1);
    CRYPTO_lock(10, 30, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  else
  {
    ERR_put_error(38, 119, 67, &unk_1B15112, 0);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_finish  (binary VA: 0x19ad8f0)
// Original: ENGINE_finish
// ----------------------------------------------------------------------------
int ENGINE_finish(uint32_t *a1)
{
  int v1;

  v1 = (int)(uintptr_t)(a1);
  if ( a1 != nullptr )
  {
    CRYPTO_lock(9, 30, (int)(uintptr_t)(&unk_1B15112), 0);
    v1 = engine_unlocked_finish(a1, 1);
    CRYPTO_lock(10, 30, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( v1 == 0 )
      ERR_put_error(38, 107, 106, &unk_1B15112, 0);
  }
  else
  {
    ERR_put_error(38, 107, 67, &unk_1B15112, 0);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_new  (binary VA: 0x19ada20)
// Original: ENGINE_new
// ----------------------------------------------------------------------------
int ENGINE_new()
{
  int v0;
  int v1;
  uint16_t *v2;
  unsigned int v3;
  uint16_t *v4;

  v0 = (int)(uintptr_t)(uintptr_t)(CRYPTO_malloc(112, (int)(uintptr_t)(&unk_1B15112), 0));
  v1 = v0;
  if ( v0 == 0 )
  {
    ERR_put_error(38, 122, 65, &unk_1B15112, 0);
    return v1;
  }
  v2 = (uint16_t *)v0;
  v3 = 112;
  if ( (v0 & 1) != 0 )
  {
    *(uint8_t *)v0 = 0;
    v2 = (uint16_t *)(v0 + 1);
    LOBYTE(v3) = 111;
  }
  if ( ((uint8_t)(uintptr_t)(v2) & 2) != 0 )
  {
    *v2 = 0;
    v3 -= 2;
    ++v2;
  }
  memset(v2, 0, 4 * (v3 >> 2));
  v4 = &v2[2 * (v3 >> 2)];
  if ( (v3 & 2) != 0 )
  {
    *v4++ = 0;
    if ( (v3 & 1) == 0 )
      goto LABEL_8;
  }
  else if ( (v3 & 1) == 0 )
  {
LABEL_8:
    *(uint32_t *)(v0 + 88) = 1;
    CRYPTO_new_ex_data(9, v0, v0 + 96);
    return v1;
  }
  *(uint8_t *)v4 = 0;
  goto LABEL_8;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_free  (binary VA: 0x19adcc0)
// Original: ENGINE_free
// ----------------------------------------------------------------------------
int ENGINE_free(uint32_t *a1)
{
  return engine_free_util(a1, 1);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_cleanup  (binary VA: 0x19addf0)
// Original: ENGINE_cleanup
// ----------------------------------------------------------------------------
int ENGINE_cleanup()
{
  if ( dword_21405F8 != 0 )
  {
    sk_pop_free((void *)dword_21405F8, (int)(uintptr_t)(sub_19AD9E0));
    dword_21405F8 = 0;
  }
  return RAND_set_rand_method(0);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_ex_new_index  (binary VA: 0x19ade40)
// Original: ENGINE_get_ex_new_index
// ----------------------------------------------------------------------------
int ENGINE_get_ex_new_index(int a1, int a2, int a3, int a4, int a5)
{
  return CRYPTO_get_ex_new_index(9, a1, a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_set_ex_data  (binary VA: 0x19ade90)
// Original: ENGINE_set_ex_data
// ----------------------------------------------------------------------------
int ENGINE_set_ex_data(int a1, int a2, int a3)
{
  return CRYPTO_set_ex_data((int *)(a1 + 96), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_ex_data  (binary VA: 0x19aded0)
// Original: ENGINE_get_ex_data
// ----------------------------------------------------------------------------
int ENGINE_get_ex_data(int a1, int a2)
{
  return CRYPTO_get_ex_data((uint32_t *)(a1 + 96), a2);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_set_id  (binary VA: 0x19adf00)
// Original: ENGINE_set_id
// ----------------------------------------------------------------------------
int ENGINE_set_id(uint32_t *a1, int a2)
{
  if ( a2 != 0 )
  {
    *a1 = a2;
    return 1;
  }
  else
  {
    ERR_put_error(38, 129, 67, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: ENGINE_set_name  (binary VA: 0x19adf70)
// Original: ENGINE_set_name
// ----------------------------------------------------------------------------
int ENGINE_set_name(int a1, int a2)
{
  if ( a2 != 0 )
  {
    *(uint32_t *)(a1 + 4) = a2;
    return 1;
  }
  else
  {
    ERR_put_error(38, 130, 67, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: ENGINE_set_destroy_function  (binary VA: 0x19adfe0)
// Original: ENGINE_set_destroy_function
// ----------------------------------------------------------------------------
int ENGINE_set_destroy_function(int a1, int a2)
{
  *(uint32_t *)(a1 + 52) = a2;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_set_init_function  (binary VA: 0x19ae000)
// Original: ENGINE_set_init_function
// ----------------------------------------------------------------------------
int ENGINE_set_init_function(int a1, int a2)
{
  *(uint32_t *)(a1 + 56) = a2;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_set_finish_function  (binary VA: 0x19ae020)
// Original: ENGINE_set_finish_function
// ----------------------------------------------------------------------------
int ENGINE_set_finish_function(int a1, int a2)
{
  *(uint32_t *)(a1 + 60) = a2;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_set_ctrl_function  (binary VA: 0x19ae040)
// Original: ENGINE_set_ctrl_function
// ----------------------------------------------------------------------------
int ENGINE_set_ctrl_function(int a1, int a2)
{
  *(uint32_t *)(a1 + 64) = a2;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_set_flags  (binary VA: 0x19ae060)
// Original: ENGINE_set_flags
// ----------------------------------------------------------------------------
int ENGINE_set_flags(int a1, int a2)
{
  *(uint32_t *)(a1 + 84) = a2;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_set_cmd_defns  (binary VA: 0x19ae080)
// Original: ENGINE_set_cmd_defns
// ----------------------------------------------------------------------------
int ENGINE_set_cmd_defns(int a1, int a2)
{
  *(uint32_t *)(a1 + 80) = a2;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_id  (binary VA: 0x19ae0a0)
// Original: ENGINE_get_id
// ----------------------------------------------------------------------------
int ENGINE_get_id(int a1)
{
  return *(uint32_t *)a1;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_name  (binary VA: 0x19ae0b0)
// Original: ENGINE_get_name
// ----------------------------------------------------------------------------
int ENGINE_get_name(int a1)
{
  return *(uint32_t *)(a1 + 4);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_destroy_function  (binary VA: 0x19ae0c0)
// Original: ENGINE_get_destroy_function
// ----------------------------------------------------------------------------
int ENGINE_get_destroy_function(int a1)
{
  return *(uint32_t *)(a1 + 52);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_init_function  (binary VA: 0x19ae0d0)
// Original: ENGINE_get_init_function
// ----------------------------------------------------------------------------
int ENGINE_get_init_function(int a1)
{
  return *(uint32_t *)(a1 + 56);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_finish_function  (binary VA: 0x19ae0e0)
// Original: ENGINE_get_finish_function
// ----------------------------------------------------------------------------
int ENGINE_get_finish_function(int a1)
{
  return *(uint32_t *)(a1 + 60);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_ctrl_function  (binary VA: 0x19ae0f0)
// Original: ENGINE_get_ctrl_function
// ----------------------------------------------------------------------------
int ENGINE_get_ctrl_function(int a1)
{
  return *(uint32_t *)(a1 + 64);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_flags  (binary VA: 0x19ae100)
// Original: ENGINE_get_flags
// ----------------------------------------------------------------------------
int ENGINE_get_flags(int a1)
{
  return *(uint32_t *)(a1 + 84);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_cmd_defns  (binary VA: 0x19ae110)
// Original: ENGINE_get_cmd_defns
// ----------------------------------------------------------------------------
int ENGINE_get_cmd_defns(int a1)
{
  return *(uint32_t *)(a1 + 80);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_static_state  (binary VA: 0x19ae120)
// Original: ENGINE_get_static_state
// ----------------------------------------------------------------------------
void * ENGINE_get_static_state()
{
  return &unk_21405FC;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_unregister_pkey_asn1_meths  (binary VA: 0x19ae230)
// Original: ENGINE_unregister_pkey_asn1_meths
// ----------------------------------------------------------------------------
int ENGINE_unregister_pkey_asn1_meths(int a1)
{
  return ((engine_table_unregister(&dword_2140600, a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_register_pkey_asn1_meths  (binary VA: 0x19ae260)
// Original: ENGINE_register_pkey_asn1_meths
// ----------------------------------------------------------------------------
int ENGINE_register_pkey_asn1_meths(int a1)
{
  int (*v1)(int, uint32_t, int *, uint32_t);
  int v2;
  int v3;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  v1 = *(int (**)(int, uint32_t, int *, uint32_t))(a1 + 48);
  v2 = 1;
  if ( v1 != nullptr )
  {
    v3 = v1(a1, 0, &v5, 0);
    if ( v3 > 0 )
      return engine_table_register(&dword_2140600, sub_19AE140, a1, v5, v3, 0);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_register_all_pkey_asn1_meths  (binary VA: 0x19ae300)
// Original: ENGINE_register_all_pkey_asn1_meths
// ----------------------------------------------------------------------------
int ENGINE_register_all_pkey_asn1_meths()
{
  int result;
  void *i;

  result = ENGINE_get_first();
  for ( i = (void *)result; result != 0; i = (void *)result )
  {
    ENGINE_register_pkey_asn1_meths((int)(uintptr_t)(i));
    result = ENGINE_get_next(i);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_set_default_pkey_asn1_meths  (binary VA: 0x19ae340)
// Original: ENGINE_set_default_pkey_asn1_meths
// ----------------------------------------------------------------------------
int ENGINE_set_default_pkey_asn1_meths(int a1)
{
  int (*v1)(int, uint32_t, int *, uint32_t);
  int v2;
  int v3;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  v1 = *(int (**)(int, uint32_t, int *, uint32_t))(a1 + 48);
  v2 = 1;
  if ( v1 != nullptr )
  {
    v3 = v1(a1, 0, &v5, 0);
    if ( v3 > 0 )
      return engine_table_register(&dword_2140600, sub_19AE140, a1, v5, v3, 1);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_pkey_asn1_meth_engine  (binary VA: 0x19ae3e0)
// Original: ENGINE_get_pkey_asn1_meth_engine
// ----------------------------------------------------------------------------
int ENGINE_get_pkey_asn1_meth_engine(int a1)
{
  return (int)(uintptr_t)(engine_table_select(&dword_2140600, a1));
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_pkey_asn1_meths  (binary VA: 0x19ae410)
// Original: ENGINE_get_pkey_asn1_meths
// ----------------------------------------------------------------------------
int ENGINE_get_pkey_asn1_meths(int a1)
{
  return *(uint32_t *)(a1 + 48);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_pkey_asn1_meth  (binary VA: 0x19ae420)
// Original: ENGINE_get_pkey_asn1_meth
// ----------------------------------------------------------------------------
int ENGINE_get_pkey_asn1_meth(int a1, int a2)
{
  int (*pkey_asn1_meths)(int, int *, uint32_t, int);
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  pkey_asn1_meths = (int (*)(int, int *, uint32_t, int))ENGINE_get_pkey_asn1_meths(a1);
  if ( pkey_asn1_meths != nullptr && pkey_asn1_meths(a1, &v4, 0, a2) != 0 )
    return v4;
  ERR_put_error(38, 193, 101, &unk_1B15112, 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_set_pkey_asn1_meths  (binary VA: 0x19ae4c0)
// Original: ENGINE_set_pkey_asn1_meths
// ----------------------------------------------------------------------------
int ENGINE_set_pkey_asn1_meths(int a1, int a2)
{
  *(uint32_t *)(a1 + 48) = a2;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_pkey_asn1_meth_str  (binary VA: 0x19ae570)
// Original: ENGINE_get_pkey_asn1_meth_str
// ----------------------------------------------------------------------------
int ENGINE_get_pkey_asn1_meth_str(int a1, char *s, size_t n)
{
  int (*v3)(int, uint32_t, int *, uint32_t);
  int v4;
  const char *v5;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef uint32_t _g4_t_v10[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v9)) > _g4_s2 ? (24u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v10)) > _g4_s3 ? (28u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);

  v3 = *(int (**)(int, uint32_t, int *, uint32_t))(a1 + 48);
  if ( v3 == nullptr )
    return 0;
  if ( n == -1 )
    n = strlen(s);
  v8 = v3(a1, 0, &v9, 0);
  v7 = 0;
  if ( v8 > 0 )
  {
    v4 = 0;
    while ( 1 )
    {
      (*(void (**)(int, uint32_t *, uint32_t, uint32_t))(a1 + 48))(a1, v10, 0, *(uint32_t *)(v9 + 4 * v4));
      v7 = v10[0];
      v5 = *(const char **)(v10[0] + 12);
      if ( strlen(v5) == n && strncasecmp(v5, s, n) == 0 )
        break;
      if ( ++v4 == v8 )
        return 0;
    }
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_pkey_asn1_find_str  (binary VA: 0x19ae670)
// Original: ENGINE_pkey_asn1_find_str
// ----------------------------------------------------------------------------
int ENGINE_pkey_asn1_find_str(uint32_t *a1, int a2, int a3)
{
  int v3;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v6)) > _g4_s1 ? (4u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v7)) > _g4_s2 ? (8u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v8)) > _g4_s3 ? (12u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  v5 = 0;
  v7 = a2;
  v8 = a3;
  v6 = 0;
  CRYPTO_lock(9, 30, (int)(uintptr_t)(&unk_1B15112), 0);
  engine_table_doall(dword_2140600, sub_19AE170, &v5);
  v3 = v5;
  if ( v5 != 0 )
    ++*(uint32_t *)(v5 + 88);
  *a1 = v3;
  CRYPTO_lock(10, 30, (int)(uintptr_t)(&unk_1B15112), 0);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_unregister_DH  (binary VA: 0x19ae760)
// Original: ENGINE_unregister_DH
// ----------------------------------------------------------------------------
int ENGINE_unregister_DH(int a1)
{
  return ((engine_table_unregister(&unk_2140604, a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_register_DH  (binary VA: 0x19ae790)
// Original: ENGINE_register_DH
// ----------------------------------------------------------------------------
int ENGINE_register_DH(int a1)
{
  int result;

  result = 1;
  if ( *(uint32_t *)(a1 + 16) != 0 )
    return engine_table_register(&unk_2140604, sub_19AE730, a1, &unk_1D26268, 1, 0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_register_all_DH  (binary VA: 0x19ae7f0)
// Original: ENGINE_register_all_DH
// ----------------------------------------------------------------------------
int ENGINE_register_all_DH()
{
  int result;
  void *i;

  result = ENGINE_get_first();
  for ( i = (void *)result; result != 0; i = (void *)result )
  {
    ENGINE_register_DH((int)(uintptr_t)(i));
    result = ENGINE_get_next(i);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_set_default_DH  (binary VA: 0x19ae830)
// Original: ENGINE_set_default_DH
// ----------------------------------------------------------------------------
int ENGINE_set_default_DH(int a1)
{
  int result;

  result = 1;
  if ( *(uint32_t *)(a1 + 16) != 0 )
    return engine_table_register(&unk_2140604, sub_19AE730, a1, &unk_1D26268, 1, 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_default_DH  (binary VA: 0x19ae890)
// Original: ENGINE_get_default_DH
// ----------------------------------------------------------------------------
int ENGINE_get_default_DH()
{
  return (int)(uintptr_t)(engine_table_select(&unk_2140604, 1));
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_DH  (binary VA: 0x19ae8c0)
// Original: ENGINE_get_DH
// ----------------------------------------------------------------------------
int ENGINE_get_DH(int a1)
{
  return *(uint32_t *)(a1 + 16);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_set_DH  (binary VA: 0x19ae8d0)
// Original: ENGINE_set_DH
// ----------------------------------------------------------------------------
int ENGINE_set_DH(int a1, int a2)
{
  *(uint32_t *)(a1 + 16) = a2;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_unregister_DSA  (binary VA: 0x19ae920)
// Original: ENGINE_unregister_DSA
// ----------------------------------------------------------------------------
int ENGINE_unregister_DSA(int a1)
{
  return ((engine_table_unregister(&unk_2140608, a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_register_DSA  (binary VA: 0x19ae950)
// Original: ENGINE_register_DSA
// ----------------------------------------------------------------------------
int ENGINE_register_DSA(int a1)
{
  int result;

  result = 1;
  if ( *(uint32_t *)(a1 + 12) != 0 )
    return engine_table_register(&unk_2140608, sub_19AE8F0, a1, &unk_1D2626C, 1, 0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_register_all_DSA  (binary VA: 0x19ae9b0)
// Original: ENGINE_register_all_DSA
// ----------------------------------------------------------------------------
int ENGINE_register_all_DSA()
{
  int result;
  void *i;

  result = ENGINE_get_first();
  for ( i = (void *)result; result != 0; i = (void *)result )
  {
    ENGINE_register_DSA((int)(uintptr_t)(i));
    result = ENGINE_get_next(i);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_set_default_DSA  (binary VA: 0x19ae9f0)
// Original: ENGINE_set_default_DSA
// ----------------------------------------------------------------------------
int ENGINE_set_default_DSA(int a1)
{
  int result;

  result = 1;
  if ( *(uint32_t *)(a1 + 12) != 0 )
    return engine_table_register(&unk_2140608, sub_19AE8F0, a1, &unk_1D2626C, 1, 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_default_DSA  (binary VA: 0x19aea50)
// Original: ENGINE_get_default_DSA
// ----------------------------------------------------------------------------
int ENGINE_get_default_DSA()
{
  return (int)(uintptr_t)(engine_table_select(&unk_2140608, 1));
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_DSA  (binary VA: 0x19aea80)
// Original: ENGINE_get_DSA
// ----------------------------------------------------------------------------
int ENGINE_get_DSA(int a1)
{
  return *(uint32_t *)(a1 + 12);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_set_DSA  (binary VA: 0x19aea90)
// Original: ENGINE_set_DSA
// ----------------------------------------------------------------------------
int ENGINE_set_DSA(int a1, int a2)
{
  *(uint32_t *)(a1 + 12) = a2;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_unregister_ECDH  (binary VA: 0x19aeae0)
// Original: ENGINE_unregister_ECDH
// ----------------------------------------------------------------------------
int ENGINE_unregister_ECDH(int a1)
{
  return ((engine_table_unregister(&unk_214060C, a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_register_ECDH  (binary VA: 0x19aeb10)
// Original: ENGINE_register_ECDH
// ----------------------------------------------------------------------------
int ENGINE_register_ECDH(int a1)
{
  int result;

  result = 1;
  if ( *(uint32_t *)(a1 + 20) != 0 )
    return engine_table_register(&unk_214060C, sub_19AEAB0, a1, &unk_1D26270, 1, 0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_register_all_ECDH  (binary VA: 0x19aeb70)
// Original: ENGINE_register_all_ECDH
// ----------------------------------------------------------------------------
int ENGINE_register_all_ECDH()
{
  int result;
  void *i;

  result = ENGINE_get_first();
  for ( i = (void *)result; result != 0; i = (void *)result )
  {
    ENGINE_register_ECDH((int)(uintptr_t)(i));
    result = ENGINE_get_next(i);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_set_default_ECDH  (binary VA: 0x19aebb0)
// Original: ENGINE_set_default_ECDH
// ----------------------------------------------------------------------------
int ENGINE_set_default_ECDH(int a1)
{
  int result;

  result = 1;
  if ( *(uint32_t *)(a1 + 20) != 0 )
    return engine_table_register(&unk_214060C, sub_19AEAB0, a1, &unk_1D26270, 1, 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_default_ECDH  (binary VA: 0x19aec10)
// Original: ENGINE_get_default_ECDH
// ----------------------------------------------------------------------------
int ENGINE_get_default_ECDH()
{
  return (int)(uintptr_t)(engine_table_select(&unk_214060C, 1));
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_ECDH  (binary VA: 0x19aec40)
// Original: ENGINE_get_ECDH
// ----------------------------------------------------------------------------
int ENGINE_get_ECDH(int a1)
{
  return *(uint32_t *)(a1 + 20);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_set_ECDH  (binary VA: 0x19aec50)
// Original: ENGINE_set_ECDH
// ----------------------------------------------------------------------------
int ENGINE_set_ECDH(int a1, int a2)
{
  *(uint32_t *)(a1 + 20) = a2;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_unregister_ECDSA  (binary VA: 0x19aeca0)
// Original: ENGINE_unregister_ECDSA
// ----------------------------------------------------------------------------
int ENGINE_unregister_ECDSA(int a1)
{
  return ((engine_table_unregister(&unk_2140610, a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_register_ECDSA  (binary VA: 0x19aecd0)
// Original: ENGINE_register_ECDSA
// ----------------------------------------------------------------------------
int ENGINE_register_ECDSA(int a1)
{
  int result;

  result = 1;
  if ( *(uint32_t *)(a1 + 24) != 0 )
    return engine_table_register(&unk_2140610, sub_19AEC70, a1, &unk_1D26274, 1, 0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_register_all_ECDSA  (binary VA: 0x19aed30)
// Original: ENGINE_register_all_ECDSA
// ----------------------------------------------------------------------------
int ENGINE_register_all_ECDSA()
{
  int result;
  void *i;

  result = ENGINE_get_first();
  for ( i = (void *)result; result != 0; i = (void *)result )
  {
    ENGINE_register_ECDSA((int)(uintptr_t)(i));
    result = ENGINE_get_next(i);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_set_default_ECDSA  (binary VA: 0x19aed70)
// Original: ENGINE_set_default_ECDSA
// ----------------------------------------------------------------------------
int ENGINE_set_default_ECDSA(int a1)
{
  int result;

  result = 1;
  if ( *(uint32_t *)(a1 + 24) != 0 )
    return engine_table_register(&unk_2140610, sub_19AEC70, a1, &unk_1D26274, 1, 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_default_ECDSA  (binary VA: 0x19aedd0)
// Original: ENGINE_get_default_ECDSA
// ----------------------------------------------------------------------------
int ENGINE_get_default_ECDSA()
{
  return (int)(uintptr_t)(engine_table_select(&unk_2140610, 1));
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_ECDSA  (binary VA: 0x19aee00)
// Original: ENGINE_get_ECDSA
// ----------------------------------------------------------------------------
int ENGINE_get_ECDSA(int a1)
{
  return *(uint32_t *)(a1 + 24);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_set_ECDSA  (binary VA: 0x19aee10)
// Original: ENGINE_set_ECDSA
// ----------------------------------------------------------------------------
int ENGINE_set_ECDSA(int a1, int a2)
{
  *(uint32_t *)(a1 + 24) = a2;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_unregister_pkey_meths  (binary VA: 0x19aee60)
// Original: ENGINE_unregister_pkey_meths
// ----------------------------------------------------------------------------
int ENGINE_unregister_pkey_meths(int a1)
{
  return ((engine_table_unregister(&unk_2140614, a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_register_pkey_meths  (binary VA: 0x19aee90)
// Original: ENGINE_register_pkey_meths
// ----------------------------------------------------------------------------
int ENGINE_register_pkey_meths(int a1)
{
  int (*v1)(int, uint32_t, int *, uint32_t);
  int v2;
  int v3;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  v1 = *(int (**)(int, uint32_t, int *, uint32_t))(a1 + 44);
  v2 = 1;
  if ( v1 != nullptr )
  {
    v3 = v1(a1, 0, &v5, 0);
    if ( v3 > 0 )
      return engine_table_register(&unk_2140614, sub_19AEE30, a1, v5, v3, 0);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_register_all_pkey_meths  (binary VA: 0x19aef30)
// Original: ENGINE_register_all_pkey_meths
// ----------------------------------------------------------------------------
int ENGINE_register_all_pkey_meths()
{
  int result;
  void *i;

  result = ENGINE_get_first();
  for ( i = (void *)result; result != 0; i = (void *)result )
  {
    ENGINE_register_pkey_meths((int)(uintptr_t)(i));
    result = ENGINE_get_next(i);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_set_default_pkey_meths  (binary VA: 0x19aef70)
// Original: ENGINE_set_default_pkey_meths
// ----------------------------------------------------------------------------
int ENGINE_set_default_pkey_meths(int a1)
{
  int (*v1)(int, uint32_t, int *, uint32_t);
  int v2;
  int v3;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  v1 = *(int (**)(int, uint32_t, int *, uint32_t))(a1 + 44);
  v2 = 1;
  if ( v1 != nullptr )
  {
    v3 = v1(a1, 0, &v5, 0);
    if ( v3 > 0 )
      return engine_table_register(&unk_2140614, sub_19AEE30, a1, v5, v3, 1);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_pkey_meth_engine  (binary VA: 0x19af010)
// Original: ENGINE_get_pkey_meth_engine
// ----------------------------------------------------------------------------
int ENGINE_get_pkey_meth_engine(int a1)
{
  return (int)(uintptr_t)(engine_table_select(&unk_2140614, a1));
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_pkey_meths  (binary VA: 0x19af040)
// Original: ENGINE_get_pkey_meths
// ----------------------------------------------------------------------------
int ENGINE_get_pkey_meths(int a1)
{
  return *(uint32_t *)(a1 + 44);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_pkey_meth  (binary VA: 0x19af050)
// Original: ENGINE_get_pkey_meth
// ----------------------------------------------------------------------------
int ENGINE_get_pkey_meth(int a1, int a2)
{
  int (*pkey_meths)(int, int *, uint32_t, int);
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  pkey_meths = (int (*)(int, int *, uint32_t, int))ENGINE_get_pkey_meths(a1);
  if ( pkey_meths != nullptr && pkey_meths(a1, &v4, 0, a2) != 0 )
    return v4;
  ERR_put_error(38, 192, 101, &unk_1B15112, 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_set_pkey_meths  (binary VA: 0x19af0f0)
// Original: ENGINE_set_pkey_meths
// ----------------------------------------------------------------------------
int ENGINE_set_pkey_meths(int a1, int a2)
{
  *(uint32_t *)(a1 + 44) = a2;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ERR_get_implementation  (binary VA: 0x19afbc0)
// Original: ERR_get_implementation
// ----------------------------------------------------------------------------
int ERR_get_implementation()
{
  sub_19AF690();
  return dword_2140620;
}

// ----------------------------------------------------------------------------
// Function: ERR_set_implementation  (binary VA: 0x19afbf0)
// Original: ERR_set_implementation
// ----------------------------------------------------------------------------
int ERR_set_implementation(int a1)
{
  int v1;

  CRYPTO_lock(9, 1, (int)(uintptr_t)(&unk_1B15112), 0);
  v1 = 0;
  if ( dword_2140620 == 0 )
  {
    LOWORD(v1) = 1;
    dword_2140620 = a1;
  }
  CRYPTO_lock(10, 1, (int)(uintptr_t)(&unk_1B15112), 0);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: ERR_load_ERR_strings  (binary VA: 0x19afc80)
// Original: ERR_load_ERR_strings
// ----------------------------------------------------------------------------
int ERR_load_ERR_strings()
{
  char *v0;
  int v1;
  char *v2;
  int *v3;
  int v4;
  char *src;
  char *v6;
  int errnum;
  char *v9;

  sub_19AF690();
  sub_19AF1F0(0, &dword_20CB820);
  sub_19AF1F0(0, &dword_20CB920);
  sub_19AF1F0(2, &dword_20CBA60);
  CRYPTO_lock(5, 1, (int)(uintptr_t)(&unk_1B15112), 0);
  errnum = 6;
  if ( dword_20CB81C != 0 )
  {
    CRYPTO_lock(6, 1, (int)(uintptr_t)(&unk_1B15112), 0);
    CRYPTO_lock(9, 1, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( dword_20CB81C == 0 )
    {
      CRYPTO_lock(10, 1, (int)(uintptr_t)(&unk_1B15112), 0);
      return sub_19AF1F0(2, ((int *)(&dword_2140640)));
    }
    v0 = (char *)&unk_2140A40;
    v1 = 1;
    v2 = (char *)((int *)(&dword_2140640));
    do
    {
      while ( 1 )
      {
        v3 = (int *)&v2[8 * v1 - 8];
        v4 = v3[1];
        *v3 = v1;
        if ( v4 == 0 )
        {
          v9 = v2;
          src = strerror(v1);
          v2 = v9;
          if ( src != nullptr )
          {
            strncpy(v0, src, 0x20u);
            v0[31] = 0;
            v3[1] = (int)(uintptr_t)(v0);
            v6 = v0;
            v2 = v9;
          }
          else
          {
            v6 = (char *)v3[1];
          }
          if ( v6 == nullptr )
            break;
        }
        ++v1;
        v0 += 32;
        if ( v1 == 128 )
          goto LABEL_10;
      }
      ++v1;
      v0 += 32;
      v3[1] = (int)(uintptr_t)("unknown");
    }
    while ( v1 != 128 );
LABEL_10:
    dword_20CB81C = 0;
    errnum = 10;
  }
  CRYPTO_lock(errnum, 1, (int)(uintptr_t)(&unk_1B15112), 0);
  return sub_19AF1F0(2, ((int *)(&dword_2140640)));
}


