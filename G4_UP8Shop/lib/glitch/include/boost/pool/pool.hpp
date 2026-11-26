// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd95d0):
//   ../../../../../lib/glitch/include/boost/pool/pool.hpp
// Referenced by 12 function(s) in libGangstar4.so

#pragma once

// ============================================================================
// Referencing Function: 0x13210f0 .. 0x1321367 (631 bytes)
// Symbol:               sub_13210F0
// Demangled:            sub_13210F0
// ============================================================================
/*
int sub_13210F0(unsigned int *a1)
{
  int v2;
  int v3;
  unsigned int nusers;
  int v5;
  int v6;
  int result;
  unsigned int *count;
  int v9;
  unsigned int *v10;
  int v11;
  unsigned int *v12;
  unsigned int *v13;
  unsigned int *v14;
  int v15;
  unsigned int *v16;
  unsigned int **v17;
  int (**v18)(std::exception *);
  int (**v19)(std::exception *);
  int (**v20)(std::exception *);

  if ( boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::get_pool(void)::f == 0 )
  {
    boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::get_pool(void)::f = 1;
    if ( &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage != nullptr )
    {
      v2 = pthread_mutex_init(
             &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage,
             nullptr);
      if ( v2 != 0 )
      {
        sub_1235D60(&v18, v2, "boost:: mutex constructor failed in pthread_mutex_init");
        v18 = off_2049568;
        std::terminate();
      }
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__count = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__owner = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__kind = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__nusers = 204;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__spins = 128;
      unk_21171F8 = 128;
      unk_21171FC = 0;
    }
  }
  do
    v3 = pthread_mutex_lock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage);
  while ( v3 == 4 );
  if ( v3 != 0 )
  {
    sub_1235D60(&v19, v3, "boost: mutex lock failed in pthread_mutex_lock");
    v19 = off_20495E0;
    std::terminate();
  }
  nusers = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__nusers;
  if ( boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__nusers <= 3 )
  {
    nusers = 4;
  }
  else if ( (boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__size[16]
           & 3) != 0 )
  {
    nusers = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__nusers
           + 4
           - (boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__size[16]
            & 3);
    v5 = nusers & 3;
    if ( nusers <= 3 )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/pool/pool.hpp",
        353,
        "boost::pool<UserAllocator>::size_type boost::pool<UserAllocator>::alloc_size() const [with UserAllocator = glotv"
        "3::event_new_delete, boost::pool<UserAllocator>::size_type = unsigned int]",
        "s >= min_alloc_size");
      v5 = nusers;
    }
    if ( v5 != 0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/pool/pool.hpp",
        354,
        "boost::pool<UserAllocator>::size_type boost::pool<UserAllocator>::alloc_size() const [with UserAllocator = glotv"
        "3::event_new_delete, boost::pool<UserAllocator>::size_type = unsigned int]",
        "s % min_align == 0");
  }
  v6 = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__nusers
     / nusers
     + (boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__nusers
      % nusers != 0);
  if ( v6 != 0 )
  {
    count = (unsigned int *)boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__count;
    v9 = nusers * v6;
    if ( boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__count != 0
      && (unsigned int)a1 >= boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__count )
    {
      while ( 1 )
      {
        v13 = (unsigned int *)*count;
        if ( *count == 0 || a1 < v13 )
          break;
        count = (unsigned int *)*count;
      }
      v17 = (unsigned int **)count;
      v14 = (unsigned int *)((char *)a1 + nusers * ((v9 - nusers) / nusers));
      *v14 = (unsigned int)v13;
      if ( a1 != v14 )
      {
        v15 = -nusers;
        v16 = (unsigned int *)((char *)v14 + v15);
        if ( a1 == (unsigned int *)((char *)v14 + v15) )
        {
          v16 = v14;
        }
        else
        {
          while ( 1 )
          {
            *v16 = (unsigned int)v14;
            if ( a1 == (unsigned int *)((char *)v16 + v15) )
              break;
            v14 = v16;
            v16 = (unsigned int *)((char *)v16 + v15);
          }
        }
        *a1 = (unsigned int)v16;
      }
      *v17 = a1;
    }
    else
    {
      v10 = (unsigned int *)((char *)a1 + nusers * ((v9 - nusers) / nusers));
      *v10 = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__count;
      if ( a1 != v10 )
      {
        v11 = -nusers;
        v12 = (unsigned int *)((char *)v10 + v11);
        if ( a1 == (unsigned int *)((char *)v10 + v11) )
        {
          v12 = v10;
        }
        else
        {
          while ( 1 )
          {
            *v12 = (unsigned int)v10;
            if ( a1 == (unsigned int *)((char *)v12 + v11) )
              break;
            v10 = v12;
            v12 = (unsigned int *)((char *)v12 + v11);
          }
        }
        *a1 = (unsigned int)v12;
      }
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__count = (unsigned int)a1;
    }
  }
  do
    result = pthread_mutex_unlock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage);
  while ( result == 4 );
  if ( result != 0 )
  {
    sub_1235D60(&v20, result, "boost: mutex unlock failed in pthread_mutex_unlock");
    v20 = off_20495E0;
    std::terminate();
  }
  return result;
}

*/

// ============================================================================
// Referencing Function: 0x13290a0 .. 0x1329480 (992 bytes)
// Symbol:               sub_13290A0
// Demangled:            sub_13290A0
// ============================================================================
/*
unsigned int sub_13290A0()
{
  int v0;
  int v1;
  unsigned int nusers;
  int v3;
  unsigned int count;
  unsigned int *v5;
  unsigned int v6;
  unsigned int spins;
  int v8;
  unsigned int v9;
  unsigned int owner;
  int *v11;
  int v12;
  unsigned int v14;
  unsigned int v15;
  int *v16;
  unsigned int i;
  int *v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  unsigned int v24;
  unsigned int *p_count;
  unsigned int v26;
  int (**v27)(std::exception *);
  int (**v28)(std::exception *);
  int (**v29)(std::exception *);

  if ( boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::get_pool(void)::f == 0 )
  {
    boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::get_pool(void)::f = 1;
    if ( &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage != nullptr )
    {
      v0 = pthread_mutex_init(
             &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage,
             nullptr);
      if ( v0 != 0 )
      {
        sub_1235D60(&v27, v0, "boost:: mutex constructor failed in pthread_mutex_init");
        v27 = off_2049568;
        std::terminate();
      }
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__count = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__owner = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__kind = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__nusers = 204;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__spins = 128;
      unk_21171F8 = 128;
      unk_21171FC = 0;
    }
  }
  do
    v1 = pthread_mutex_lock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage);
  while ( v1 == 4 );
  if ( v1 != 0 )
  {
    sub_1235D60(&v28, v1, "boost: mutex lock failed in pthread_mutex_lock");
    v28 = off_20495E0;
    std::terminate();
  }
  nusers = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__nusers;
  if ( nusers <= 3 )
  {
    nusers = 4;
  }
  else if ( (nusers & 3) != 0 )
  {
    nusers = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__nusers
           + 4
           - (boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__nusers
            & 3);
    v3 = nusers & 3;
    if ( nusers <= 3 )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/pool/pool.hpp",
        353,
        "boost::pool<UserAllocator>::size_type boost::pool<UserAllocator>::alloc_size() const [with UserAllocator = glotv"
        "3::event_new_delete, boost::pool<UserAllocator>::size_type = unsigned int]",
        "s >= min_alloc_size");
      v3 = nusers;
    }
    if ( v3 != 0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/pool/pool.hpp",
        354,
        "boost::pool<UserAllocator>::size_type boost::pool<UserAllocator>::alloc_size() const [with UserAllocator = glotv"
        "3::event_new_delete, boost::pool<UserAllocator>::size_type = unsigned int]",
        "s % min_align == 0");
  }
  v21 = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__nusers
      / nusers
      + (boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__nusers
       % nusers != 0);
  if ( v21 != 0 )
  {
    count = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__count;
    p_count = &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__count;
    if ( count != 0 )
    {
      while ( 2 )
      {
        v5 = (unsigned int *)count;
        v6 = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__nusers
           / nusers
           + (boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__nusers
            % nusers != 0);
        while ( --v6 != 0 )
        {
          if ( (unsigned int *)*v5 != (unsigned int *)((char *)v5 + nusers) )
          {
            count = *v5;
            p_count = v5;
            goto LABEL_20;
          }
          v5 = (unsigned int *)*v5;
        }
        if ( v5 != nullptr )
        {
          v24 = count;
          *p_count = *v5;
          goto LABEL_32;
        }
LABEL_20:
        if ( count != 0 )
          continue;
        break;
      }
    }
  }
  spins = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__spins;
  if ( v21 >= spins )
    spins = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__nusers
          / nusers
          + (boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__nusers
           % nusers != 0);
  boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__spins = spins;
  v8 = nusers * spins + 8;
  v24 = operator new[](v8, (const std::nothrow_t *)&std::nothrow);
  if ( v24 == 0 )
  {
    v19 = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__spins;
    if ( v21 >= v19 )
      goto LABEL_58;
    v20 = v19 >> 1;
    if ( v21 >= v20 )
      v20 = v21;
    boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__spins = v20;
    v8 = nusers * v20 + 8;
    v24 = operator new[](v8, (const std::nothrow_t *)&std::nothrow);
    if ( v24 == 0 )
    {
LABEL_58:
      do
LABEL_32:
        v12 = pthread_mutex_unlock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage);
      while ( v12 == 4 );
      if ( v12 != 0 )
      {
        sub_1235D60(&v29, v12, "boost: mutex unlock failed in pthread_mutex_unlock");
        v29 = off_20495E0;
        std::terminate();
      }
      return v24;
    }
  }
  v9 = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__spins;
  if ( v21 < v9 )
  {
    sub_60EFD0(
      &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__align
    + 1,
      v24 + nusers * v21,
      v8 - nusers * v21 - 8,
      nusers);
    v9 = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__spins;
    v22 = unk_21171FC;
    if ( unk_21171FC == 0 )
      goto LABEL_26;
  }
  else
  {
    v22 = unk_21171FC;
    if ( unk_21171FC == 0 )
    {
LABEL_26:
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__spins = 2 * v9;
LABEL_27:
      owner = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__owner;
      if ( owner != 0 && v24 >= owner )
      {
        v16 = (int *)(owner
                    + boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__kind
                    - 4);
        for ( i = *(uint32_t *)(owner
                            + boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__kind
                            - 8); i != 0 && v24 >= i; i = *(v16 - 1) )
          v16 = (int *)(i + *v16 - 4);
        v23 = *v16;
        v18 = (int *)(v24 + v8 - 4);
        *(v18 - 1) = i;
        *v18 = v23;
        *(v16 - 1) = v24;
        *v16 = v8;
      }
      else
      {
        v11 = (int *)(v24 + v8 - 4);
        *(v11 - 1) = owner;
        *v11 = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__kind;
        boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__owner = v24;
        boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__kind = v8;
      }
      goto LABEL_32;
    }
  }
  v26 = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__nusers;
  if ( v22 > nusers * v9 / v26 )
  {
    v14 = 2 * v9;
    v15 = v22 * v26 / nusers;
    if ( v14 <= v15 )
      v15 = v14;
    boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::storage.__spins = v15;
  }
  goto LABEL_27;
}

*/

// ============================================================================
// Referencing Function: 0x13476c0 .. 0x1347c18 (1368 bytes)
// Symbol:               _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv312EventOfErrorENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEE7destroyEv
// Demangled:            boost::detail::sp_counted_impl_pda<glotv3::EventOfError *,boost::detail::sp_ms_deleter<glotv3::EventOfError>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::destroy(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1349610 .. 0x1349f1d (2317 bytes)
// Symbol:               _ZN6glotv312EventOfError8s_OfTypeENS_6errors5codes5CodesESs
// Demangled:            glotv3::EventOfError::s_OfType(glotv3::errors::codes::Codes,std::string)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1355bd0 .. 0x1355e48 (632 bytes)
// Symbol:               _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv315AsyncHTTPClientENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorIS3_NS2_23async_client_new_deleteENS_5mutexELj16ELj0EEEE7destroyEv
// Demangled:            boost::detail::sp_counted_impl_pda<glotv3::AsyncHTTPClient *,boost::detail::sp_ms_deleter<glotv3::AsyncHTTPClient>,boost::pool_allocator<glotv3::AsyncHTTPClient,glotv3::async_client_new_delete,boost::mutex,16u,0u>>::destroy(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1355e50 .. 0x13560c8 (632 bytes)
// Symbol:               _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv39EventListENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorIS3_NS2_21event_list_new_deleteENS_5mutexELj16ELj0EEEE7destroyEv
// Demangled:            boost::detail::sp_counted_impl_pda<glotv3::EventList *,boost::detail::sp_ms_deleter<glotv3::EventList>,boost::pool_allocator<glotv3::EventList,glotv3::event_list_new_delete,boost::mutex,16u,0u>>::destroy(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13560d0 .. 0x135626a (410 bytes)
// Symbol:               sub_13560D0
// Demangled:            sub_13560D0
// ============================================================================

// ============================================================================
// Referencing Function: 0x1356300 .. 0x13565c0 (704 bytes)
// Symbol:               sub_1356300
// Demangled:            sub_1356300
// ============================================================================

// ============================================================================
// Referencing Function: 0x13570b0 .. 0x1357370 (704 bytes)
// Symbol:               sub_13570B0
// Demangled:            sub_13570B0
// ============================================================================

// ============================================================================
// Referencing Function: 0x135eba0 .. 0x1361787 (11239 bytes)
// Symbol:               _ZN6glotv325SingletonMutexedProcessor12AsyncNetworkEv
// Demangled:            glotv3::SingletonMutexedProcessor::AsyncNetwork(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x136cbe0 .. 0x136ce78 (664 bytes)
// Symbol:               sub_136CBE0
// Demangled:            sub_136CBE0
// ============================================================================

// ============================================================================
// Referencing Function: 0x136cf40 .. 0x136d201 (705 bytes)
// Symbol:               sub_136CF40
// Demangled:            sub_136CF40
// ============================================================================
