// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd806c):
//   ../../../../../lib/boost/smart_ptr/enable_shared_from_this.hpp
// Referenced by 1 function(s) in libGangstar4.so

#pragma once

// ============================================================================
// Referencing Function: 0x1272270 .. 0x12726ca (1114 bytes)
// Symbol:               _ZN6chatv28Requests19IArionServerRequest7ExecuteEv
// Demangled:            chatv2::Requests::IArionServerRequest::Execute(void)
// ============================================================================
/*
// bad sp value at call has been detected, the output may be wrong!
int chatv2::Requests::IArionServerRequest::Execute(chatv2::Requests::IArionServerRequest *this)
{
  chatv2::Requests::IArionServerRequest *v1;
  void *v2;
  void *v3;
  int result;
  int v5;
  volatile int32_t *v6;
  int32_t v7;
  int32_t v8; // ett
  chatv2::Requests::IArionServerRequest *v9;
  int v10;
  int v11;
  volatile int32_t *v12;
  int (*v13)(int, int *);
  volatile int32_t *v14;
  volatile int32_t *v15;
  char *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  uint32_t v34[3];
  int v35;
  int v36;
  volatile int32_t *v37;
  int v38;
  int v39;
  int v40;
  int v41;
  volatile int32_t *v42;
  int (*v43)(int, int, int);
  int v44;
  int v45;
  int v46;
  volatile int32_t *v47;
  int v48;
  int v49;
  chatv2::Requests::IArionServerRequest **v50;
  chatv2::Requests::IArionServerRequest *v51;

  v50 = &this;
  v1 = this;
  std::string::__construct_from_cstr((int)v34, " IArionServerRequest execute\n", (int)&v33 + 1);
  std::string::__construct_from_cstr((int)&v35, "ChatLib", (int)&v33);
  chatv2::Utils::Log(
    3,
    0,
    &v35,
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Requests/Arion/IArionServerRequest.cpp",
    59,
    v34);
  v2 = (void *)(v35 - 12);
  if ( (uint32_t *)(v35 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
  {
    v16 = (char *)&v33 + 2;
    std::string::_Rep::_M_destroy(v2);
  }
  v3 = (void *)(v34[0] - 12);
  if ( (uint32_t *)(v34[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v34[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v16 = (char *)&v33 + 3;
    std::string::_Rep::_M_destroy(v3);
  }
  result = (*(int (**)(chatv2::Requests::IArionServerRequest *, char *, int, int, int, int, int, int, int, uint32_t *, int, int, int, int, int, int, uint32_t, uint32_t, uint32_t, int, int, volatile int32_t *, int, int, int, int, volatile int32_t *, int (*)(int, int, int), int, int, int, volatile int32_t *, int, int))(*(uint32_t *)v1 + 24))(
             v1,
             v16,
             v17,
             v18,
             v19,
             v20,
             v21,
             v22,
             v23,
             v34,
             v26,
             v28,
             v30,
             v31,
             v32,
             v33,
             v34[0],
             v34[1],
             v34[2],
             v35,
             v36,
             v37,
             v38,
             v39,
             v40,
             v41,
             v42,
             v43,
             v44,
             v45,
             v46,
             v47,
             v48,
             v49);
  v29 = result;
  if ( result != 0 )
  {
    v5 = *(uint32_t *)v1;
    v51 = v1;
    result = (*(int (**)(int *))(v5 + 28))(&v36);
    if ( v36 != 0 )
    {
      v6 = *((volatile int32_t **)v1 + 6);
      if ( v6 == nullptr )
        goto LABEL_30;
      v7 = *((uint32_t *)v6 + 1);
      do
      {
        if ( v7 == 0 )
          break;
        v8 = v7;
        v7 = __sync_val_compare_and_swap(v6 + 1, v7, v7 + 1);
      }
      while ( v8 != v7 );
      if ( v7 == 0 )
LABEL_30:
        std::terminate();
      v9 = nullptr;
      v27 = *((uint32_t *)v1 + 5);
      if ( v27 != 0 )
        v9 = (chatv2::Requests::IArionServerRequest *)(v27 + 20);
      if ( v9 != (chatv2::Requests::IArionServerRequest *)((char *)v1 + 20) )
        __assert2(
          "../../../../../lib/boost/smart_ptr/enable_shared_from_this.hpp",
          50,
          "boost::shared_ptr<T> boost::enable_shared_from_this<T>::shared_from_this() [with T = chatv2::Requests::IArionServerRequest]",
          "p.get() == this");
      v10 = *((uint32_t *)v1 + 7);
      __sync_add_and_fetch(v6 + 1, 1);
      __sync_add_and_fetch(v6 + 1, 1);
      __sync_add_and_fetch(v6 + 1, 1);
      __sync_add_and_fetch(v6 + 1, 1);
      if ( __sync_fetch_and_add(v6 + 1, 0xFFFFFFFF) == 1 )
      {
        v24 = v10;
        (*(void (**)(volatile int32_t *))(*v6 + 8))(v6);
        v10 = v24;
        if ( __sync_fetch_and_add(v6 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (**)(volatile int32_t *))(*v6 + 12))(v6);
          v10 = v24;
        }
      }
      if ( __sync_fetch_and_add(v6 + 1, 0xFFFFFFFF) == 1 )
      {
        v25 = v10;
        (*(void (**)(volatile int32_t *))(*v6 + 8))(v6);
        v10 = v25;
        if ( __sync_fetch_and_add(v6 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (**)(volatile int32_t *))(*v6 + 12))(v6);
          v10 = v25;
        }
      }
      v43 = chatv2::Core::ArionExecutor::OnHTTPResponseReceived;
      v46 = v27;
      v44 = 0;
      v45 = v10;
      v47 = v6;
      __sync_add_and_fetch(v6 + 1, 1);
      if ( __sync_fetch_and_add(v6 + 1, 0xFFFFFFFF) == 1 )
      {
        (*(void (**)(volatile int32_t *))(*v6 + 8))(v6);
        if ( __sync_fetch_and_add(v6 + 2, 0xFFFFFFFF) == 1 )
          (*(void (**)(volatile int32_t *))(*v6 + 12))(v6);
      }
      if ( __sync_fetch_and_add(v6 + 1, 0xFFFFFFFF) == 1 )
      {
        (*(void (**)(volatile int32_t *))(*v6 + 8))(v6);
        if ( __sync_fetch_and_add(v6 + 2, 0xFFFFFFFF) == 1 )
          (*(void (**)(volatile int32_t *))(*v6 + 12))(v6);
      }
      v11 = v36;
      if ( v36 == 0 )
      {
        __assert2(
          "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::C"
          "onnectivity::HTTPRequest, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPRequest::Self*]",
          "px != 0");
        v11 = v36;
      }
      boost::function<void (*)(boost::shared_ptr<chatv2::Connectivity::HTTPResponse>)>::operator=<boost::_bi::bind_t<void,boost::_mfi::mf2<void,chatv2::Core::ArionExecutor,boost::shared_ptr<chatv2::Requests::IArionServerRequest>,boost::shared_ptr<chatv2::Connectivity::HTTPResponse>>,boost::_bi::list3<boost::_bi::value<chatv2::Core::ArionExecutor*>,boost::_bi::value<boost::shared_ptr<chatv2::Requests::IArionServerRequest>>,boost::arg<1>>>>(
        v11 + 204,
        &v43);
      v12 = v47;
      if ( v47 != nullptr && __sync_fetch_and_add(v47 + 1, 0xFFFFFFFF) == 1 )
      {
        (*(void (**)(volatile int32_t *))(*v12 + 8))(v12);
        if ( __sync_fetch_and_add(v12 + 2, 0xFFFFFFFF) == 1 )
          (*(void (**)(volatile int32_t *))(*v12 + 12))(v12);
      }
      if ( __sync_fetch_and_add(v6 + 1, 0xFFFFFFFF) == 1 )
      {
        (*(void (**)(volatile int32_t *))(*v6 + 8))(v6);
        if ( __sync_fetch_and_add(v6 + 2, 0xFFFFFFFF) == 1 )
          (*(void (**)(volatile int32_t *))(*v6 + 12))(v6);
      }
      v13 = *(int (**)(int, int *))(*(uint32_t *)v29 + 32);
      v41 = v36;
      v42 = v37;
      if ( v37 != nullptr )
        __sync_add_and_fetch(v37 + 1, 1);
      result = v13(v29, &v41);
      v14 = v42;
      if ( v42 != nullptr )
      {
        result = __sync_fetch_and_add(v42 + 1, 0xFFFFFFFF);
        if ( result == 1 )
        {
          result = (*(int (**)(volatile int32_t *))(*v14 + 8))(v14);
          if ( __sync_fetch_and_add(v14 + 2, 0xFFFFFFFF) == 1 )
            result = (*(int (**)(volatile int32_t *))(*v14 + 12))(v14);
        }
      }
    }
    v15 = v37;
    if ( v37 != nullptr )
    {
      result = __sync_fetch_and_add(v37 + 1, 0xFFFFFFFF);
      if ( result == 1 )
      {
        result = (*(int (**)(volatile int32_t *))(*v15 + 8))(v15);
        if ( __sync_fetch_and_add(v15 + 2, 0xFFFFFFFF) == 1 )
          return (*(int (**)(volatile int32_t *))(*v15 + 12))(v15);
      }
    }
  }
  return result;
}

*/
