#pragma once
// ============================================================================
// G4_UP8Shop/lib/glwebtools/decompiled/glwebtools_internal.h
// Library: glwebtools | Module: glwebtools_internal
// Binary Address Span: 0x13d52a0 .. 0x142be60 (190 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x13d52a0] (44 bytes) sub_13D52A0
// int sub_13D52A0(int a1);
// [0x13d76d0] (796 bytes) sub_13D76D0
// unsigned int sub_13D76D0(int a1, void **a2);
// [0x13d79f0] (796 bytes) sub_13D79F0
// unsigned int sub_13D79F0(int a1, void **a2);
// [0x13d7d10] (796 bytes) sub_13D7D10
// unsigned int sub_13D7D10(int a1, void **a2);
// [0x13d8030] (796 bytes) sub_13D8030
// unsigned int sub_13D8030(int a1, void **a2);
// [0x13d8350] (796 bytes) sub_13D8350
// unsigned int sub_13D8350(int a1, void **a2);
// [0x13d8ea0] (16 bytes) void glwebtools::CustomArgument::SetType<int>(void)
// void glwebtools::CustomArgument::SetType<int>(glwebtools::CustomArgument *this);
// [0x13d8eb0] (16 bytes) void glwebtools::CustomArgument::SetType<unsigned int>(void)
// void glwebtools::CustomArgument::SetType<unsigned int>(glwebtools::CustomArgument *this);
// [0x13d8ec0] (16 bytes) void glwebtools::CustomArgument::SetType<float>(void)
// void glwebtools::CustomArgument::SetType<float>(glwebtools::CustomArgument *this);
// [0x13d8ed0] (16 bytes) void glwebtools::CustomArgument::SetType<double>(void)
// void glwebtools::CustomArgument::SetType<double>(glwebtools::CustomArgument *this);
// [0x13d8ee0] (16 bytes) void glwebtools::CustomArgument::SetType<bool>(void)
// void glwebtools::CustomArgument::SetType<bool>(glwebtools::CustomArgument *this);
// [0x13d8ef0] (16 bytes) void glwebtools::CustomArgument::SetType<char const*>(void)
// void glwebtools::CustomArgument::SetType<char const*>(glwebtools::CustomArgument *this);
// [0x13d8f00] (16 bytes) void glwebtools::CustomArgument::SetType<std::string const&>(void)
// void glwebtools::CustomArgument::SetType<std::string const&>(glwebtools::CustomArgument *this);
// [0x13d8f10] (16 bytes) void glwebtools::CustomArgument::SetType<glwebtools::JSONValue const&>(void)
// void glwebtools::CustomArgument::SetType<glwebtools::JSONValue const&>(glwebtools::CustomArgument *this);
// [0x13d9940] (250 bytes) std::_Rb_tree<glwebtools::CustomAttribute,glwebtools::CustomAttribute,std::_Identity<glwebtools::CustomAttribute>,std::less<glwebtools::CustomAttribute>,glwebtools::SAllocator<glwebtools::CustomAttribute,(glwebtools::MemHint)4>>::find(glwebtools::CustomAttribute const&)const
// std::_Rb_tree<glwebtools::CustomAttribute, glwebtools::CustomAttribute, std::_Identity<glwebtools::CustomAttribute>, std::less<glwebtools::CustomAttribute>, glwebtools::SAllocator<glwebtools::CustomAttribute, (glwebtools::MemHint)4>> *std::_Rb_tree<glwebtools::CustomAttribute,glwebtools::CustomAttribute,std::_Identity<glwebtools::CustomAttribute>,std::less<glwebtools::CustomAttribute>,glwebtools::SAllocator<glwebtools::CustomAttribute,(glwebtools::MemHint)4>>::find(;
// [0x13d9a40] (169 bytes) std::_Rb_tree<glwebtools::CustomAttribute,glwebtools::CustomAttribute,std::_Identity<glwebtools::CustomAttribute>,std::less<glwebtools::CustomAttribute>,glwebtools::SAllocator<glwebtools::CustomAttribute,(glwebtools::MemHint)4>>::_M_erase(std::_Rb_tree_node<glwebtools::CustomAttribute> *)
// void std::_Rb_tree<glwebtools::CustomAttribute,glwebtools::CustomAttribute,std::_Identity<glwebtools::CustomAttribute>,std::less<glwebtools::CustomAttribute>,glwebtools::SAllocator<glwebtools::CustomAttribute,(glwebtools::MemHint)4>>::_M_erase(;
// [0x13d9af0] (104 bytes) sub_13D9AF0
// int sub_13D9AF0();
// [0x13dcac0] (127 bytes) std::_Rb_tree<std::string,std::pair<std::string const,glwebtools::TaskGroup *>,std::_Select1st<std::pair<std::string const,glwebtools::TaskGroup *>>,std::less<std::string>,glwebtools::SAllocator<std::pair<std::string const,glwebtools::TaskGroup *>,(glwebtools::MemHint)4>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,glwebtools::TaskGroup *>> *)
// void std::_Rb_tree<std::string,std::pair<std::string const,glwebtools::TaskGroup *>,std::_Select1st<std::pair<std::string const,glwebtools::TaskGroup *>>,std::less<std::string>,glwebtools::SAllocator<std::pair<std::string const,glwebtools::TaskGroup *>,(glwebtools::MemHint)4>>::_M_erase(;
// [0x13dcb40] (81 bytes) std::_Rb_tree<unsigned int,std::pair<unsigned int const,glwebtools::UrlConnectionCore *>,std::_Select1st<std::pair<unsigned int const,glwebtools::UrlConnectionCore *>>,std::less<unsigned int>,glwebtools::SAllocator<std::pair<unsigned int const,glwebtools::UrlConnectionCore *>,(glwebtools::MemHint)4>>::_M_erase(std::_Rb_tree_node<std::pair<unsigned int const,glwebtools::UrlConnectionCore *>> *)
// int std::_Rb_tree<unsigned int,std::pair<unsigned int const,glwebtools::UrlConnectionCore *>,std::_Select1st<std::pair<unsigned int const,glwebtools::UrlConnectionCore *>>,std::less<unsigned int>,glwebtools::SAllocator<std::pair<unsigned int const,glwebtools::UrlConnectionCore *>,(glwebtools::MemHint)4>>::_M_erase(;
// [0x13dcba0] (81 bytes) std::_Rb_tree<unsigned int,std::pair<unsigned int const,glwebtools::UrlRequestCore *>,std::_Select1st<std::pair<unsigned int const,glwebtools::UrlRequestCore *>>,std::less<unsigned int>,glwebtools::SAllocator<std::pair<unsigned int const,glwebtools::UrlRequestCore *>,(glwebtools::MemHint)4>>::_M_erase(std::_Rb_tree_node<std::pair<unsigned int const,glwebtools::UrlRequestCore *>> *)
// int std::_Rb_tree<unsigned int,std::pair<unsigned int const,glwebtools::UrlRequestCore *>,std::_Select1st<std::pair<unsigned int const,glwebtools::UrlRequestCore *>>,std::less<unsigned int>,glwebtools::SAllocator<std::pair<unsigned int const,glwebtools::UrlRequestCore *>,(glwebtools::MemHint)4>>::_M_erase(;
// [0x13dcc00] (226 bytes) std::_Rb_tree<unsigned int,std::pair<unsigned int const,glwebtools::UrlConnectionCore *>,std::_Select1st<std::pair<unsigned int const,glwebtools::UrlConnectionCore *>>,std::less<unsigned int>,glwebtools::SAllocator<std::pair<unsigned int const,glwebtools::UrlConnectionCore *>,(glwebtools::MemHint)4>>::_M_insert_(std::_Rb_tree_node_base const*,std::_Rb_tree_node_base const*,std::pair<unsigned int const,glwebtools::UrlConnectionCore *> const&)
// int *std::_Rb_tree<unsigned int,std::pair<unsigned int const,glwebtools::UrlConnectionCore *>,std::_Select1st<std::pair<unsigned int const,glwebtools::UrlConnectionCore *>>,std::less<unsigned int>,glwebtools::SAllocator<std::pair<unsigned int const,glwebtools::UrlConnectionCore *>,(glwebtools::MemHint)4>>::_M_insert_(;
// [0x13dccf0] (223 bytes) std::_Rb_tree<unsigned int,std::pair<unsigned int const,glwebtools::UrlConnectionCore *>,std::_Select1st<std::pair<unsigned int const,glwebtools::UrlConnectionCore *>>,std::less<unsigned int>,glwebtools::SAllocator<std::pair<unsigned int const,glwebtools::UrlConnectionCore *>,(glwebtools::MemHint)4>>::_M_insert_unique(std::pair<unsigned int const,glwebtools::UrlConnectionCore *> const&)
// int std::_Rb_tree<unsigned int,std::pair<unsigned int const,glwebtools::UrlConnectionCore *>,std::_Select1st<std::pair<unsigned int const,glwebtools::UrlConnectionCore *>>,std::less<unsigned int>,glwebtools::SAllocator<std::pair<unsigned int const,glwebtools::UrlConnectionCore *>,(glwebtools::MemHint)4>>::_M_insert_unique(;
// [0x13dcdd0] (391 bytes) std::_Rb_tree<unsigned int,std::pair<unsigned int const,glwebtools::UrlConnectionCore *>,std::_Select1st<std::pair<unsigned int const,glwebtools::UrlConnectionCore *>>,std::less<unsigned int>,glwebtools::SAllocator<std::pair<unsigned int const,glwebtools::UrlConnectionCore *>,(glwebtools::MemHint)4>>::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<unsigned int const,glwebtools::UrlConnectionCore *>>,std::pair<unsigned int const,glwebtools::UrlConnectionCore *> const&)
// int *std::_Rb_tree<unsigned int,std::pair<unsigned int const,glwebtools::UrlConnectionCore *>,std::_Select1st<std::pair<unsigned int const,glwebtools::UrlConnectionCore *>>,std::less<unsigned int>,glwebtools::SAllocator<std::pair<unsigned int const,glwebtools::UrlConnectionCore *>,(glwebtools::MemHint)4>>::_M_insert_unique_(;
// [0x13dcf60] (226 bytes) std::_Rb_tree<unsigned int,std::pair<unsigned int const,glwebtools::UrlRequestCore *>,std::_Select1st<std::pair<unsigned int const,glwebtools::UrlRequestCore *>>,std::less<unsigned int>,glwebtools::SAllocator<std::pair<unsigned int const,glwebtools::UrlRequestCore *>,(glwebtools::MemHint)4>>::_M_insert_(std::_Rb_tree_node_base const*,std::_Rb_tree_node_base const*,std::pair<unsigned int const,glwebtools::UrlRequestCore *> const&)
// int *std::_Rb_tree<unsigned int,std::pair<unsigned int const,glwebtools::UrlRequestCore *>,std::_Select1st<std::pair<unsigned int const,glwebtools::UrlRequestCore *>>,std::less<unsigned int>,glwebtools::SAllocator<std::pair<unsigned int const,glwebtools::UrlRequestCore *>,(glwebtools::MemHint)4>>::_M_insert_(;
// [0x13dd050] (223 bytes) std::_Rb_tree<unsigned int,std::pair<unsigned int const,glwebtools::UrlRequestCore *>,std::_Select1st<std::pair<unsigned int const,glwebtools::UrlRequestCore *>>,std::less<unsigned int>,glwebtools::SAllocator<std::pair<unsigned int const,glwebtools::UrlRequestCore *>,(glwebtools::MemHint)4>>::_M_insert_unique(std::pair<unsigned int const,glwebtools::UrlRequestCore *> const&)
// int std::_Rb_tree<unsigned int,std::pair<unsigned int const,glwebtools::UrlRequestCore *>,std::_Select1st<std::pair<unsigned int const,glwebtools::UrlRequestCore *>>,std::less<unsigned int>,glwebtools::SAllocator<std::pair<unsigned int const,glwebtools::UrlRequestCore *>,(glwebtools::MemHint)4>>::_M_insert_unique(;
// [0x13dd130] (391 bytes) std::_Rb_tree<unsigned int,std::pair<unsigned int const,glwebtools::UrlRequestCore *>,std::_Select1st<std::pair<unsigned int const,glwebtools::UrlRequestCore *>>,std::less<unsigned int>,glwebtools::SAllocator<std::pair<unsigned int const,glwebtools::UrlRequestCore *>,(glwebtools::MemHint)4>>::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<unsigned int const,glwebtools::UrlRequestCore *>>,std::pair<unsigned int const,glwebtools::UrlRequestCore *> const&)
// int *std::_Rb_tree<unsigned int,std::pair<unsigned int const,glwebtools::UrlRequestCore *>,std::_Select1st<std::pair<unsigned int const,glwebtools::UrlRequestCore *>>,std::less<unsigned int>,glwebtools::SAllocator<std::pair<unsigned int const,glwebtools::UrlRequestCore *>,(glwebtools::MemHint)4>>::_M_insert_unique_(;
// [0x13dd2c0] (283 bytes) std::_Rb_tree<std::string,std::pair<std::string const,glwebtools::TaskGroup *>,std::_Select1st<std::pair<std::string const,glwebtools::TaskGroup *>>,std::less<std::string>,glwebtools::SAllocator<std::pair<std::string const,glwebtools::TaskGroup *>,(glwebtools::MemHint)4>>::_M_insert_(std::_Rb_tree_node_base const*,std::_Rb_tree_node_base const*,std::pair<std::string const,glwebtools::TaskGroup *> const&)
// int *std::_Rb_tree<std::string,std::pair<std::string const,glwebtools::TaskGroup *>,std::_Select1st<std::pair<std::string const,glwebtools::TaskGroup *>>,std::less<std::string>,glwebtools::SAllocator<std::pair<std::string const,glwebtools::TaskGroup *>,(glwebtools::MemHint)4>>::_M_insert_(;
// [0x13dd3e0] (382 bytes) std::_Rb_tree<std::string,std::pair<std::string const,glwebtools::TaskGroup *>,std::_Select1st<std::pair<std::string const,glwebtools::TaskGroup *>>,std::less<std::string>,glwebtools::SAllocator<std::pair<std::string const,glwebtools::TaskGroup *>,(glwebtools::MemHint)4>>::_M_insert_unique(std::pair<std::string const,glwebtools::TaskGroup *> const&)
// int std::_Rb_tree<std::string,std::pair<std::string const,glwebtools::TaskGroup *>,std::_Select1st<std::pair<std::string const,glwebtools::TaskGroup *>>,std::less<std::string>,glwebtools::SAllocator<std::pair<std::string const,glwebtools::TaskGroup *>,(glwebtools::MemHint)4>>::_M_insert_unique(;
// [0x13dd560] (746 bytes) std::_Rb_tree<std::string,std::pair<std::string const,glwebtools::TaskGroup *>,std::_Select1st<std::pair<std::string const,glwebtools::TaskGroup *>>,std::less<std::string>,glwebtools::SAllocator<std::pair<std::string const,glwebtools::TaskGroup *>,(glwebtools::MemHint)4>>::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<std::string const,glwebtools::TaskGroup *>>,std::pair<std::string const,glwebtools::TaskGroup *> const&)
// int *std::_Rb_tree<std::string,std::pair<std::string const,glwebtools::TaskGroup *>,std::_Select1st<std::pair<std::string const,glwebtools::TaskGroup *>>,std::less<std::string>,glwebtools::SAllocator<std::pair<std::string const,glwebtools::TaskGroup *>,(glwebtools::MemHint)4>>::_M_insert_unique_(;
// [0x13ddd60] (634 bytes) std::vector<glwebtools::HandleManagerNode,glwebtools::SAllocator<glwebtools::HandleManagerNode,(glwebtools::MemHint)4>>::_M_insert_aux(__gnu_cxx::__normal_iterator<glwebtools::HandleManagerNode*,std::vector<glwebtools::HandleManagerNode,glwebtools::SAllocator<glwebtools::HandleManagerNode,(glwebtools::MemHint)4>>>,glwebtools::HandleManagerNode const&)
// int std::vector<glwebtools::HandleManagerNode,glwebtools::SAllocator<glwebtools::HandleManagerNode,(glwebtools::MemHint)4>>::_M_insert_aux(;
// [0x13df1e0] (950 bytes) std::vector<std::pair<std::string,glwebtools::JSONValue>,std::allocator<std::pair<std::string,glwebtools::JSONValue>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<std::pair<std::string,glwebtools::JSONValue>*,std::vector<std::pair<std::string,glwebtools::JSONValue>,std::allocator<std::pair<std::string,glwebtools::JSONValue>>>>,std::pair<std::string,glwebtools::JSONValue> const&)
// uint32_t *std::vector<std::pair<std::string,glwebtools::JSONValue>>::_M_insert_aux(void **a1, char *a2, int a3);
// [0x13df5a0] (803 bytes) std::vector<std::pair<unsigned int,glwebtools::JSONValue>,std::allocator<std::pair<unsigned int,glwebtools::JSONValue>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<std::pair<unsigned int,glwebtools::JSONValue>*,std::vector<std::pair<unsigned int,glwebtools::JSONValue>,std::allocator<std::pair<unsigned int,glwebtools::JSONValue>>>>,std::pair<unsigned int,glwebtools::JSONValue> const&)
// int std::vector<std::pair<unsigned int,glwebtools::JSONValue>>::_M_insert_aux(void **a1, char *a2, int *a3);
// [0x13df8d0] (100 bytes) sub_13DF8D0
// int sub_13DF8D0();
// [0x13e2c00] (329 bytes) std::_Rb_tree<glwebtools::CustomAttribute,glwebtools::CustomAttribute,std::_Identity<glwebtools::CustomAttribute>,std::less<glwebtools::CustomAttribute>,glwebtools::SAllocator<glwebtools::CustomAttribute,(glwebtools::MemHint)4>>::_M_insert_(std::_Rb_tree_node_base const*,std::_Rb_tree_node_base const*,glwebtools::CustomAttribute const&)
// int *std::_Rb_tree<glwebtools::CustomAttribute,glwebtools::CustomAttribute,std::_Identity<glwebtools::CustomAttribute>,std::less<glwebtools::CustomAttribute>,glwebtools::SAllocator<glwebtools::CustomAttribute,(glwebtools::MemHint)4>>::_M_insert_(;
// [0x13e2d50] (66 bytes) sub_13E2D50
// int sub_13E2D50();
// [0x13e50f0] (66 bytes) sub_13E50F0
// int sub_13E50F0();
// [0x13e5140] (1950 bytes) sub_13E5140
// int sub_13E5140(uint32_t *a1, uint8_t *a2);
// [0x13e5cb0] (27 bytes) sub_13E5CB0
// pthread_t sub_13E5CB0();
// [0x13e5cd0] (67 bytes) sub_13E5CD0
// int sub_13E5CD0(char a1, int a2);
// [0x13e5d20] (159 bytes) sub_13E5D20
// int sub_13E5D20(int *a1);
// [0x13e62b0] (81 bytes) sub_13E62B0
// int sub_13E62B0();
// [0x13e8140] (232 bytes) int glwebtools::operator>><std::string>(glwebtools::JsonReader const&,glwebtools::NameValuePair<std::string>)
// int glwebtools::operator>><std::string>(glwebtools::Json::Value *a1, int a2);
// [0x13e8230] (314 bytes) int glwebtools::operator<<<std::string const>(glwebtools::JsonWriter &,glwebtools::NameValuePair<std::string const>)
// glwebtools *glwebtools::operator<<<std::string const>(glwebtools::JsonWriter *a1, int a2);
// [0x13e8370] (66 bytes) sub_13E8370
// int sub_13E8370();
// [0x13e83c0] (245 bytes) glwebtools::internal::SHA256_Init(glwebtools::internal::_SHA256_CTX *)
// int glwebtools::internal::SHA256_Init(int a1);
// [0x13e84c0] (652 bytes) glwebtools::internal::SHA256_Transform(glwebtools::internal::_SHA256_CTX *,unsigned int const*)
// int *glwebtools::internal::SHA256_Transform(int *a1, int a2);
// [0x13e8750] (388 bytes) glwebtools::internal::SHA256_Update(glwebtools::internal::_SHA256_CTX *,unsigned char const*,unsigned int)
// void glwebtools::internal::SHA256_Update(int a1, char *src, size_t a3);
// [0x13e88e0] (655 bytes) glwebtools::internal::SHA256_Final(unsigned char *,glwebtools::internal::_SHA256_CTX *)
// int glwebtools::internal::SHA256_Final(int a1, int a2);
// [0x13e8b70] (269 bytes) glwebtools::internal::SHA256_End(glwebtools::internal::_SHA256_CTX *,char *)
// int glwebtools::internal::SHA256_End(int a1, int a2);
// [0x13e8c80] (115 bytes) glwebtools::internal::SHA256_Data(unsigned char const*,unsigned int,char *)
// int glwebtools::internal::SHA256_Data(glwebtools::internal *this, size_t a2, unsigned int a3);
// [0x13eae30] (47 bytes) sub_13EAE30
// int sub_13EAE30(uint16_t *a1);
// [0x13eae60] (129 bytes) sub_13EAE60
// int sub_13EAE60(int a1, uint32_t *a2);
// [0x13f17e0] (314 bytes) int glwebtools::operator<<<char const* const>(glwebtools::JsonWriter &,glwebtools::NameValuePair<char const* const>)
// glwebtools *glwebtools::operator<<<char const* const>(glwebtools::JsonWriter *a1, int a2);
// [0x13f1920] (314 bytes) int glwebtools::operator<<<char const[5]>(glwebtools::JsonWriter &,glwebtools::NameValuePair<char const[5]>)
// glwebtools *glwebtools::operator<<<char const[5]>(glwebtools::JsonWriter *a1, int a2);
// [0x13f1a60] (314 bytes) int glwebtools::operator<<<char const[6]>(glwebtools::JsonWriter &,glwebtools::NameValuePair<char const[6]>)
// glwebtools *glwebtools::operator<<<char const[6]>(glwebtools::JsonWriter *a1, int a2);
// [0x13f1ba0] (314 bytes) int glwebtools::operator<<<int const>(glwebtools::JsonWriter &,glwebtools::NameValuePair<int const>)
// glwebtools *glwebtools::operator<<<int const>(glwebtools::JsonWriter *a1, int a2);
// [0x13f1ce0] (314 bytes) int glwebtools::operator<<<double const>(glwebtools::JsonWriter &,glwebtools::NameValuePair<double const>)
// glwebtools *glwebtools::operator<<<double const>(glwebtools::JsonWriter *a1, int a2);
// [0x13f1e20] (169 bytes) std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,glwebtools::StringLowerCaseCompare<std::string>,glwebtools::SAllocator<std::pair<std::string const,std::string>,(glwebtools::MemHint)4>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,std::string>> *)
// void std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,glwebtools::StringLowerCaseCompare<std::string>,glwebtools::SAllocator<std::pair<std::string const,std::string>,(glwebtools::MemHint)4>>::_M_erase(;
// [0x13f1ed0] (66 bytes) sub_13F1ED0
// int sub_13F1ED0();
// [0x13f55a0] (277 bytes) std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,glwebtools::StringLowerCaseCompare<std::string>,glwebtools::SAllocator<std::pair<std::string const,std::string>,(glwebtools::MemHint)4>>::_M_insert_(std::_Rb_tree_node_base const*,std::_Rb_tree_node_base const*,std::pair<std::string const,std::string> const&)
// int *std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,glwebtools::StringLowerCaseCompare<std::string>,glwebtools::SAllocator<std::pair<std::string const,std::string>,(glwebtools::MemHint)4>>::_M_insert_(;
// [0x13f56c0] (249 bytes) std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,glwebtools::StringLowerCaseCompare<std::string>,glwebtools::SAllocator<std::pair<std::string const,std::string>,(glwebtools::MemHint)4>>::_M_insert_unique(std::pair<std::string const,std::string> const&)
// int std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,glwebtools::StringLowerCaseCompare<std::string>,glwebtools::SAllocator<std::pair<std::string const,std::string>,(glwebtools::MemHint)4>>::_M_insert_unique(;
// [0x13f57c0] (528 bytes) std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,glwebtools::StringLowerCaseCompare<std::string>,glwebtools::SAllocator<std::pair<std::string const,std::string>,(glwebtools::MemHint)4>>::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>,std::pair<std::string const,std::string> const&)
// int *std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,glwebtools::StringLowerCaseCompare<std::string>,glwebtools::SAllocator<std::pair<std::string const,std::string>,(glwebtools::MemHint)4>>::_M_insert_unique_(;
// [0x13f5a90] (133 bytes) sub_13F5A90
// int **sub_13F5A90();
// [0x13f5b20] (145 bytes) sub_13F5B20
// uint32_t *sub_13F5B20(int a1, uint32_t *a2, uint32_t *a3);
// [0x1400a20] (99 bytes) std::_Rb_tree<glwebtools::Json::Value::CZString,std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>,std::_Select1st<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>,std::less<glwebtools::Json::Value::CZString>,std::allocator<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>>::_M_erase(std::_Rb_tree_node<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>> *)
// void std::_Rb_tree<glwebtools::Json::Value::CZString,std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>,std::_Select1st<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>,std::less<glwebtools::Json::Value::CZString>,std::allocator<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>>::_M_erase( int a1, void **a2);
// [0x1400a90] (324 bytes) bool std::operator<<glwebtools::Json::Value::CZString,std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>,std::_Select1st<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>,std::less<glwebtools::Json::Value::CZString>,std::allocator<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>>(std::_Rb_tree<glwebtools::Json::Value::CZString,std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>,std::_Select1st<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>,std::less<glwebtools::Json::Value::CZString>,std::allocator<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>> const&,std::_Rb_tree<glwebtools::Json::Value::CZString,std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>,std::_Select1st<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>,std::less<glwebtools::Json::Value::CZString>,std::allocator<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>> const&)
// char `std::operator<<glwebtools::Json::Value::CZString,std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>,std::_Select1st<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>,std::less<glwebtools::Json::Value::CZString>,std::allocator<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>>`( const std::_Rb_tree<glwebtools::Json::Value::CZString, std::pair<glwebtools::Json::Value::CZString const, glwebtools::Json::Value>, std::_Select1st<std::pair<glwebtools::Json::Value::CZString const, glwebtools::Json::Value>>, std::less<glwebtools::Json::Value::CZString>, std::allocator<std::pair<glwebtools::Json::Value::CZString const, glwebtools::Json::Value>>> *a1, const std::_Rb_tree<glwebtools::Json::Value::CZString, std::pair<glwebtools::Json::Value::CZString const, glwebtools::Json::Value>, std::_Select1st<std::pair<glwebtools::Json::Value::CZString const, glwebtools::Json::Value>>, std::less<glwebtools::Json::Value::CZString>, std::allocator<std::pair<glwebtools::Json::Value::CZString const, glwebtools::Json::Value>>> *a2);
// [0x1400be0] (436 bytes) std::vector<glwebtools::Json::PathArgument const*,std::allocator<glwebtools::Json::PathArgument const*>>::_M_insert_aux(__gnu_cxx::__normal_iterator<glwebtools::Json::PathArgument const**,std::vector<glwebtools::Json::PathArgument const*,std::allocator<glwebtools::Json::PathArgument const*>>>,glwebtools::Json::PathArgument const* const&)
// void std::vector<glwebtools::Json::PathArgument const*>::_M_insert_aux(int a1, char *src, int *a3);
// [0x1400da0] (784 bytes) std::vector<glwebtools::Json::PathArgument,std::allocator<glwebtools::Json::PathArgument>>::_M_insert_aux(__gnu_cxx::__normal_iterator<glwebtools::Json::PathArgument*,std::vector<glwebtools::Json::PathArgument,std::allocator<glwebtools::Json::PathArgument>>>,glwebtools::Json::PathArgument const&)
// int std::vector<glwebtools::Json::PathArgument>::_M_insert_aux(int *a1, uint32_t *a2, int a3);
// [0x14010b0] (596 bytes) std::deque<glwebtools::Json::Reader::ErrorInfo,std::allocator<glwebtools::Json::Reader::ErrorInfo>>::_M_erase_at_end(std::_Deque_iterator<glwebtools::Json::Reader::ErrorInfo,glwebtools::Json::Reader::ErrorInfo&,glwebtools::Json::Reader::ErrorInfo*>)
// int std::deque<glwebtools::Json::Reader::ErrorInfo>::_M_erase_at_end(uint32_t *a1, int *a2);
// [0x1401310] (561 bytes) std::deque<glwebtools::Json::Value *,std::allocator<glwebtools::Json::Value *>>::push_back(glwebtools::Json::Value * const&)
// glwebtools::Json::Value **std::deque<glwebtools::Json::Value *>::push_back( std::deque<glwebtools::Json::Value *> *this, glwebtools::Json::Value **a2);
// [0x1401550] (288 bytes) std::_Rb_tree<glwebtools::Json::Value::CZString,std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>,std::_Select1st<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>,std::less<glwebtools::Json::Value::CZString>,std::allocator<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>>::_M_copy(std::_Rb_tree_node<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>> const*,std::_Rb_tree_node<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>*)
// uint32_t *std::_Rb_tree<glwebtools::Json::Value::CZString,std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>,std::_Select1st<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>,std::less<glwebtools::Json::Value::CZString>,std::allocator<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>>::_M_copy( int a1, uint32_t *a2, int a3);
// [0x1401670] (249 bytes) std::_Rb_tree<glwebtools::Json::Value::CZString,std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>,std::_Select1st<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>,std::less<glwebtools::Json::Value::CZString>,std::allocator<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>>::_M_insert_(std::_Rb_tree_node_base const*,std::_Rb_tree_node_base const*,std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value> const&)
// int *std::_Rb_tree<glwebtools::Json::Value::CZString,std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>,std::_Select1st<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>,std::less<glwebtools::Json::Value::CZString>,std::allocator<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>>::_M_insert_( int *a1, int a2, int a3, int a4, const char **a5);
// [0x1401770] (263 bytes) std::_Rb_tree<glwebtools::Json::Value::CZString,std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>,std::_Select1st<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>,std::less<glwebtools::Json::Value::CZString>,std::allocator<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>>::_M_insert_unique(std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value> const&)
// int std::_Rb_tree<glwebtools::Json::Value::CZString,std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>,std::_Select1st<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>,std::less<glwebtools::Json::Value::CZString>,std::allocator<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>>::_M_insert_unique( int a1, int a2, const char **a3);
// [0x1401880] (544 bytes) std::_Rb_tree<glwebtools::Json::Value::CZString,std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>,std::_Select1st<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>,std::less<glwebtools::Json::Value::CZString>,std::allocator<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>>::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>,std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value> const&)
// int *std::_Rb_tree<glwebtools::Json::Value::CZString,std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>,std::_Select1st<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>,std::less<glwebtools::Json::Value::CZString>,std::allocator<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>>::_M_insert_unique_( int *a1, int *a2, int a3, const char **a4);
// [0x1401aa0] (111 bytes) std::_Rb_tree<glwebtools::Json::Value::CZString,std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>,std::_Select1st<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>,std::less<glwebtools::Json::Value::CZString>,std::allocator<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>)
// void std::_Rb_tree<glwebtools::Json::Value::CZString,std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>,std::_Select1st<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>,std::less<glwebtools::Json::Value::CZString>,std::allocator<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>>::_M_erase_aux( int a1, int a2);
// [0x1401b10] (176 bytes) std::_Deque_base<glwebtools::Json::Value *,std::allocator<glwebtools::Json::Value *>>::_M_initialize_map(unsigned int)
// int std::_Deque_base<glwebtools::Json::Value *>::_M_initialize_map( std::_Deque_base<glwebtools::Json::Value *> *this, unsigned int a2);
// [0x1401bc0] (421 bytes) std::deque<glwebtools::Json::Reader::ErrorInfo,std::allocator<glwebtools::Json::Reader::ErrorInfo>>::_M_reallocate_map(unsigned int,bool)
// int std::deque<glwebtools::Json::Reader::ErrorInfo>::_M_reallocate_map( std::deque<glwebtools::Json::Reader::ErrorInfo> *this, unsigned int a2, bool a3);
// [0x1401d70] (467 bytes) std::deque<glwebtools::Json::Reader::ErrorInfo,std::allocator<glwebtools::Json::Reader::ErrorInfo>>::_M_reserve_elements_at_front(unsigned int)
// std::deque<glwebtools::Json::Reader::ErrorInfo> *std::deque<glwebtools::Json::Reader::ErrorInfo>::_M_reserve_elements_at_front( std::deque<glwebtools::Json::Reader::ErrorInfo> *this, std::deque<glwebtools::Json::Reader::ErrorInfo> *a2, unsigned int a3);
// [0x1401f50] (454 bytes) std::deque<glwebtools::Json::Reader::ErrorInfo,std::allocator<glwebtools::Json::Reader::ErrorInfo>>::_M_reserve_elements_at_back(unsigned int)
// std::deque<glwebtools::Json::Reader::ErrorInfo> *std::deque<glwebtools::Json::Reader::ErrorInfo>::_M_reserve_elements_at_back( std::deque<glwebtools::Json::Reader::ErrorInfo> *this, std::deque<glwebtools::Json::Reader::ErrorInfo> *a2, unsigned int a3);
// [0x1402120] (401 bytes) void std::fill<glwebtools::Json::Reader::ErrorInfo>(std::_Deque_iterator<glwebtools::Json::Reader::ErrorInfo,glwebtools::Json::Reader::ErrorInfo&,glwebtools::Json::Reader::ErrorInfo*> const&,std::_Deque_iterator<glwebtools::Json::Reader::ErrorInfo,glwebtools::Json::Reader::ErrorInfo&,glwebtools::Json::Reader::ErrorInfo*> const&,glwebtools::Json::Reader::ErrorInfo const&)
// unsigned int std::fill<glwebtools::Json::Reader::ErrorInfo>(int a1, uint32_t *a2, uint32_t *a3);
// [0x14022c0] (722 bytes) std::_Deque_iterator<glwebtools::Json::Reader::ErrorInfo,glwebtools::Json::Reader::ErrorInfo&,glwebtools::Json::Reader::ErrorInfo*> std::copy_backward<glwebtools::Json::Reader::ErrorInfo>(std::_Deque_iterator<glwebtools::Json::Reader::ErrorInfo,glwebtools::Json::Reader::ErrorInfo&,glwebtools::Json::Reader::ErrorInfo*>,std::_Deque_iterator<glwebtools::Json::Reader::ErrorInfo,glwebtools::Json::Reader::ErrorInfo&,glwebtools::Json::Reader::ErrorInfo*>,std::_Deque_iterator<glwebtools::Json::Reader::ErrorInfo,glwebtools::Json::Reader::ErrorInfo&,glwebtools::Json::Reader::ErrorInfo*>)
// int *std::copy_backward<glwebtools::Json::Reader::ErrorInfo>(int *a1, uint32_t *a2, int *a3, int *a4);
// [0x14025a0] (5282 bytes) std::deque<glwebtools::Json::Reader::ErrorInfo,std::allocator<glwebtools::Json::Reader::ErrorInfo>>::_M_insert_aux(std::_Deque_iterator<glwebtools::Json::Reader::ErrorInfo,glwebtools::Json::Reader::ErrorInfo&,glwebtools::Json::Reader::ErrorInfo*>,unsigned int,glwebtools::Json::Reader::ErrorInfo const&)
// int std::deque<glwebtools::Json::Reader::ErrorInfo>::_M_insert_aux( std::deque<glwebtools::Json::Reader::ErrorInfo> *a1, int *a2, int a3, uint32_t *a4);
// [0x1403a50] (116 bytes) sub_1403A50
// int **sub_1403A50();
// [0x14056c0] (81 bytes) sub_14056C0
// int sub_14056C0();
// [0x1406cb0] (612 bytes) std::deque<glwebtools::ServerSideEvent,std::allocator<glwebtools::ServerSideEvent>>::_M_push_back_aux(glwebtools::ServerSideEvent const&)
// int std::deque<glwebtools::ServerSideEvent>::_M_push_back_aux( std::deque<glwebtools::ServerSideEvent> *this, const glwebtools::ServerSideEvent *a2);
// [0x1407a50] (950 bytes) std::vector<glwebtools::ServerSideEventParser::Field,std::allocator<glwebtools::ServerSideEventParser::Field>>::_M_insert_aux(__gnu_cxx::__normal_iterator<glwebtools::ServerSideEventParser::Field*,std::vector<glwebtools::ServerSideEventParser::Field,std::allocator<glwebtools::ServerSideEventParser::Field>>>,glwebtools::ServerSideEventParser::Field const&)
// uint32_t *std::vector<glwebtools::ServerSideEventParser::Field>::_M_insert_aux(void **a1, char *a2, int a3);
// [0x14133a0] (939 bytes) std::vector<sociallib::SNSAchievementData,std::allocator<sociallib::SNSAchievementData>>::~vector()
// void std::vector<sociallib::SNSAchievementData>::~vector(std::vector<sociallib::SNSAchievementData> *this);
// [0x1413750] (668 bytes) std::vector<sociallib::SNSLikeData,std::allocator<sociallib::SNSLikeData>>::~vector()
// void std::vector<sociallib::SNSLikeData>::~vector(std::vector<sociallib::SNSLikeData> *this);
// [0x14139f0] (287 bytes) std::vector<sociallib::SNSLeaderboardRowData,std::allocator<sociallib::SNSLeaderboardRowData>>::vector(std::vector<sociallib::SNSLeaderboardRowData,std::allocator<sociallib::SNSLeaderboardRowData>> const&)
// int std::vector<sociallib::SNSLeaderboardRowData>::vector( std::vector<sociallib::SNSLeaderboardRowData> *this, const std::vector<sociallib::SNSLeaderboardRowData> *a2);
// [0x1413b10] (408 bytes) std::vector<sociallib::SNSLikeData,std::allocator<sociallib::SNSLikeData>>::vector(std::vector<sociallib::SNSLikeData,std::allocator<sociallib::SNSLikeData>> const&)
// int std::vector<sociallib::SNSLikeData>::vector( std::vector<sociallib::SNSLikeData> *this, const std::vector<sociallib::SNSLikeData> *a2);
// [0x1413cb0] (117 bytes) std::_Rb_tree<std::string,std::pair<std::string const,sociallib::SNSUserData>,std::_Select1st<std::pair<std::string const,sociallib::SNSUserData>>,std::less<std::string>,std::allocator<std::pair<std::string const,sociallib::SNSUserData>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,sociallib::SNSUserData>> *)
// void std::_Rb_tree<std::string,std::pair<std::string const,sociallib::SNSUserData>,std::_Select1st<std::pair<std::string const,sociallib::SNSUserData>>,std::less<std::string>,std::allocator<std::pair<std::string const,sociallib::SNSUserData>>>::_M_erase( int a1, void **a2);
// [0x1413f60] (81 bytes) std::_Rb_tree<int,std::pair<int const,sociallib::SNSWrapperBase *>,std::_Select1st<std::pair<int const,sociallib::SNSWrapperBase *>>,std::less<int>,std::allocator<std::pair<int const,sociallib::SNSWrapperBase *>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,sociallib::SNSWrapperBase *>> *)
// void std::_Rb_tree<int,std::pair<int const,sociallib::SNSWrapperBase *>,std::_Select1st<std::pair<int const,sociallib::SNSWrapperBase *>>,std::less<int>,std::allocator<std::pair<int const,sociallib::SNSWrapperBase *>>>::_M_erase( int a1, void **a2);
// [0x1413fc0] (81 bytes) std::_Rb_tree<sociallib::ClientSNSEnum,sociallib::ClientSNSEnum,std::_Identity<sociallib::ClientSNSEnum>,std::less<sociallib::ClientSNSEnum>,std::allocator<sociallib::ClientSNSEnum>>::_M_erase(std::_Rb_tree_node<sociallib::ClientSNSEnum> *)
// void std::_Rb_tree<sociallib::ClientSNSEnum,sociallib::ClientSNSEnum,std::_Identity<sociallib::ClientSNSEnum>,std::less<sociallib::ClientSNSEnum>,std::allocator<sociallib::ClientSNSEnum>>::_M_erase( int a1, void **a2);
// [0x1414020] (41 bytes) std::set<sociallib::ClientSNSEnum,std::less<sociallib::ClientSNSEnum>,std::allocator<sociallib::ClientSNSEnum>>::~set()
// void std::set<sociallib::ClientSNSEnum>::~set(void ***this);
// [0x1414050] (99 bytes) std::_Rb_tree<sociallib::SNSInterfaceDeviceEnum,std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum,std::less<sociallib::ClientSNSEnum>,std::allocator<sociallib::ClientSNSEnum>>>,std::_Select1st<std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum,std::less<sociallib::ClientSNSEnum>,std::allocator<sociallib::ClientSNSEnum>>>>,std::less<sociallib::SNSInterfaceDeviceEnum>,std::allocator<std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum,std::less<sociallib::ClientSNSEnum>,std::allocator<sociallib::ClientSNSEnum>>>>>::_M_erase(std::_Rb_tree_node<std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum,std::less<sociallib::ClientSNSEnum>,std::allocator<sociallib::ClientSNSEnum>>>> *)
// void std::_Rb_tree<sociallib::SNSInterfaceDeviceEnum,std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum>>,std::_Select1st<std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum>>>,std::less<sociallib::SNSInterfaceDeviceEnum>,std::allocator<std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum>>>>::_M_erase( int a1, void *a2);
// [0x14140c0] (41 bytes) std::map<sociallib::SNSInterfaceDeviceEnum,std::set<sociallib::ClientSNSEnum,std::less<sociallib::ClientSNSEnum>,std::allocator<sociallib::ClientSNSEnum>>,std::less<sociallib::SNSInterfaceDeviceEnum>,std::allocator<std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum,std::less<sociallib::ClientSNSEnum>,std::allocator<sociallib::ClientSNSEnum>>>>>::~map()
// void std::map<sociallib::SNSInterfaceDeviceEnum,std::set<sociallib::ClientSNSEnum>>::~map(void **this);
// [0x14140f0] (81 bytes) std::_Rb_tree<sociallib::ClientSNSEnum,std::pair<sociallib::ClientSNSEnum const,bool>,std::_Select1st<std::pair<sociallib::ClientSNSEnum const,bool>>,std::less<sociallib::ClientSNSEnum>,std::allocator<std::pair<sociallib::ClientSNSEnum const,bool>>>::_M_erase(std::_Rb_tree_node<std::pair<sociallib::ClientSNSEnum const,bool>> *)
// void std::_Rb_tree<sociallib::ClientSNSEnum,std::pair<sociallib::ClientSNSEnum const,bool>,std::_Select1st<std::pair<sociallib::ClientSNSEnum const,bool>>,std::less<sociallib::ClientSNSEnum>,std::allocator<std::pair<sociallib::ClientSNSEnum const,bool>>>::_M_erase( int a1, void **a2);
// [0x1414150] (41 bytes) std::map<sociallib::ClientSNSEnum,bool,std::less<sociallib::ClientSNSEnum>,std::allocator<std::pair<sociallib::ClientSNSEnum const,bool>>>::~map()
// void std::map<sociallib::ClientSNSEnum,bool>::~map(void ***this);
// [0x1414180] (237 bytes) std::_Rb_tree<sociallib::ClientSNSEnum,sociallib::ClientSNSEnum,std::_Identity<sociallib::ClientSNSEnum>,std::less<sociallib::ClientSNSEnum>,std::allocator<sociallib::ClientSNSEnum>>::_M_copy(std::_Rb_tree_node<sociallib::ClientSNSEnum> const*,std::_Rb_tree_node<sociallib::ClientSNSEnum>*)
// uint32_t *std::_Rb_tree<sociallib::ClientSNSEnum,sociallib::ClientSNSEnum,std::_Identity<sociallib::ClientSNSEnum>,std::less<sociallib::ClientSNSEnum>,std::allocator<sociallib::ClientSNSEnum>>::_M_copy( int a1, uint32_t *a2, int a3);
// [0x1414270] (172 bytes) std::_Rb_tree<sociallib::ClientSNSEnum,sociallib::ClientSNSEnum,std::_Identity<sociallib::ClientSNSEnum>,std::less<sociallib::ClientSNSEnum>,std::allocator<sociallib::ClientSNSEnum>>::_M_insert_(std::_Rb_tree_node_base const*,std::_Rb_tree_node_base const*,sociallib::ClientSNSEnum const&)
// int *std::_Rb_tree<sociallib::ClientSNSEnum,sociallib::ClientSNSEnum,std::_Identity<sociallib::ClientSNSEnum>,std::less<sociallib::ClientSNSEnum>,std::allocator<sociallib::ClientSNSEnum>>::_M_insert_( int *a1, int a2, int a3, int a4, uint32_t *a5);
// [0x1414320] (275 bytes) std::set<sociallib::ClientSNSEnum,std::less<sociallib::ClientSNSEnum>,std::allocator<sociallib::ClientSNSEnum>>::insert(sociallib::ClientSNSEnum const&)
// int std::set<sociallib::ClientSNSEnum>::insert(int a1, int a2, int *a3);
// [0x1414440] (549 bytes) std::_Rb_tree<std::string,std::pair<std::string const,sociallib::SNSUserData>,std::_Select1st<std::pair<std::string const,sociallib::SNSUserData>>,std::less<std::string>,std::allocator<std::pair<std::string const,sociallib::SNSUserData>>>::_M_copy(std::_Rb_tree_node<std::pair<std::string const,sociallib::SNSUserData>> const*,std::_Rb_tree_node<std::pair<std::string const,sociallib::SNSUserData>>*)
// int std::_Rb_tree<std::string,std::pair<std::string const,sociallib::SNSUserData>,std::_Select1st<std::pair<std::string const,sociallib::SNSUserData>>,std::less<std::string>,std::allocator<std::pair<std::string const,sociallib::SNSUserData>>>::_M_copy( int a1, int a2, int a3);
// [0x1414670] (267 bytes) std::_Rb_tree<sociallib::SNSInterfaceDeviceEnum,std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum,std::less<sociallib::ClientSNSEnum>,std::allocator<sociallib::ClientSNSEnum>>>,std::_Select1st<std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum,std::less<sociallib::ClientSNSEnum>,std::allocator<sociallib::ClientSNSEnum>>>>,std::less<sociallib::SNSInterfaceDeviceEnum>,std::allocator<std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum,std::less<sociallib::ClientSNSEnum>,std::allocator<sociallib::ClientSNSEnum>>>>>::_M_insert_(std::_Rb_tree_node_base const*,std::_Rb_tree_node_base const*,std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum,std::less<sociallib::ClientSNSEnum>,std::allocator<sociallib::ClientSNSEnum>>> const&)
// uint32_t *std::_Rb_tree<sociallib::SNSInterfaceDeviceEnum,std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum>>,std::_Select1st<std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum>>>,std::less<sociallib::SNSInterfaceDeviceEnum>,std::allocator<std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum>>>>::_M_insert_( uint32_t *a1, int a2, int a3, int a4, int *a5);
// [0x1414780] (223 bytes) std::_Rb_tree<sociallib::SNSInterfaceDeviceEnum,std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum,std::less<sociallib::ClientSNSEnum>,std::allocator<sociallib::ClientSNSEnum>>>,std::_Select1st<std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum,std::less<sociallib::ClientSNSEnum>,std::allocator<sociallib::ClientSNSEnum>>>>,std::less<sociallib::SNSInterfaceDeviceEnum>,std::allocator<std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum,std::less<sociallib::ClientSNSEnum>,std::allocator<sociallib::ClientSNSEnum>>>>>::_M_insert_unique(std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum,std::less<sociallib::ClientSNSEnum>,std::allocator<sociallib::ClientSNSEnum>>> const&)
// int std::_Rb_tree<sociallib::SNSInterfaceDeviceEnum,std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum>>,std::_Select1st<std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum>>>,std::less<sociallib::SNSInterfaceDeviceEnum>,std::allocator<std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum>>>>::_M_insert_unique( int a1, int a2, int *a3);
// [0x1414860] (391 bytes) std::_Rb_tree<sociallib::SNSInterfaceDeviceEnum,std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum,std::less<sociallib::ClientSNSEnum>,std::allocator<sociallib::ClientSNSEnum>>>,std::_Select1st<std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum,std::less<sociallib::ClientSNSEnum>,std::allocator<sociallib::ClientSNSEnum>>>>,std::less<sociallib::SNSInterfaceDeviceEnum>,std::allocator<std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum,std::less<sociallib::ClientSNSEnum>,std::allocator<sociallib::ClientSNSEnum>>>>>::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum,std::less<sociallib::ClientSNSEnum>,std::allocator<sociallib::ClientSNSEnum>>>>,std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum,std::less<sociallib::ClientSNSEnum>,std::allocator<sociallib::ClientSNSEnum>>> const&)
// int *std::_Rb_tree<sociallib::SNSInterfaceDeviceEnum,std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum>>,std::_Select1st<std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum>>>,std::less<sociallib::SNSInterfaceDeviceEnum>,std::allocator<std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum>>>>::_M_insert_unique_( int *a1, uint32_t *a2, int a3, int *a4);
// [0x14149f0] (254 bytes) std::map<sociallib::SNSInterfaceDeviceEnum,std::set<sociallib::ClientSNSEnum,std::less<sociallib::ClientSNSEnum>,std::allocator<sociallib::ClientSNSEnum>>,std::less<sociallib::SNSInterfaceDeviceEnum>,std::allocator<std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum,std::less<sociallib::ClientSNSEnum>,std::allocator<sociallib::ClientSNSEnum>>>>>::operator[](sociallib::SNSInterfaceDeviceEnum const&)
// int std::map<sociallib::SNSInterfaceDeviceEnum,std::set<sociallib::ClientSNSEnum>>::operator[]( uint32_t *a1, int *a2);
// [0x1414af0] (190 bytes) std::_Rb_tree<sociallib::ClientSNSEnum,std::pair<sociallib::ClientSNSEnum const,bool>,std::_Select1st<std::pair<sociallib::ClientSNSEnum const,bool>>,std::less<sociallib::ClientSNSEnum>,std::allocator<std::pair<sociallib::ClientSNSEnum const,bool>>>::_M_insert_(std::_Rb_tree_node_base const*,std::_Rb_tree_node_base const*,std::pair<sociallib::ClientSNSEnum const,bool> const&)
// int *std::_Rb_tree<sociallib::ClientSNSEnum,std::pair<sociallib::ClientSNSEnum const,bool>,std::_Select1st<std::pair<sociallib::ClientSNSEnum const,bool>>,std::less<sociallib::ClientSNSEnum>,std::allocator<std::pair<sociallib::ClientSNSEnum const,bool>>>::_M_insert_( int *a1, int a2, int a3, int a4, int *a5);
// [0x1414bb0] (223 bytes) std::_Rb_tree<sociallib::ClientSNSEnum,std::pair<sociallib::ClientSNSEnum const,bool>,std::_Select1st<std::pair<sociallib::ClientSNSEnum const,bool>>,std::less<sociallib::ClientSNSEnum>,std::allocator<std::pair<sociallib::ClientSNSEnum const,bool>>>::_M_insert_unique(std::pair<sociallib::ClientSNSEnum const,bool> const&)
// int std::_Rb_tree<sociallib::ClientSNSEnum,std::pair<sociallib::ClientSNSEnum const,bool>,std::_Select1st<std::pair<sociallib::ClientSNSEnum const,bool>>,std::less<sociallib::ClientSNSEnum>,std::allocator<std::pair<sociallib::ClientSNSEnum const,bool>>>::_M_insert_unique( int a1, int a2, int *a3);
// [0x1414c90] (391 bytes) std::_Rb_tree<sociallib::ClientSNSEnum,std::pair<sociallib::ClientSNSEnum const,bool>,std::_Select1st<std::pair<sociallib::ClientSNSEnum const,bool>>,std::less<sociallib::ClientSNSEnum>,std::allocator<std::pair<sociallib::ClientSNSEnum const,bool>>>::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<sociallib::ClientSNSEnum const,bool>>,std::pair<sociallib::ClientSNSEnum const,bool> const&)
// int *std::_Rb_tree<sociallib::ClientSNSEnum,std::pair<sociallib::ClientSNSEnum const,bool>,std::_Select1st<std::pair<sociallib::ClientSNSEnum const,bool>>,std::less<sociallib::ClientSNSEnum>,std::allocator<std::pair<sociallib::ClientSNSEnum const,bool>>>::_M_insert_unique_( int *a1, uint32_t *a2, int a3, int *a4);
// [0x1414e20] (190 bytes) std::_Rb_tree<int,std::pair<int const,sociallib::SNSWrapperBase *>,std::_Select1st<std::pair<int const,sociallib::SNSWrapperBase *>>,std::less<int>,std::allocator<std::pair<int const,sociallib::SNSWrapperBase *>>>::_M_insert_(std::_Rb_tree_node_base const*,std::_Rb_tree_node_base const*,std::pair<int const,sociallib::SNSWrapperBase *> const&)
// int *std::_Rb_tree<int,std::pair<int const,sociallib::SNSWrapperBase *>,std::_Select1st<std::pair<int const,sociallib::SNSWrapperBase *>>,std::less<int>,std::allocator<std::pair<int const,sociallib::SNSWrapperBase *>>>::_M_insert_( int *a1, int a2, int a3, int a4, int *a5);
// [0x1414ee0] (223 bytes) std::_Rb_tree<int,std::pair<int const,sociallib::SNSWrapperBase *>,std::_Select1st<std::pair<int const,sociallib::SNSWrapperBase *>>,std::less<int>,std::allocator<std::pair<int const,sociallib::SNSWrapperBase *>>>::_M_insert_unique(std::pair<int const,sociallib::SNSWrapperBase *> const&)
// int std::_Rb_tree<int,std::pair<int const,sociallib::SNSWrapperBase *>,std::_Select1st<std::pair<int const,sociallib::SNSWrapperBase *>>,std::less<int>,std::allocator<std::pair<int const,sociallib::SNSWrapperBase *>>>::_M_insert_unique( int a1, int a2, int *a3);
// [0x1414fc0] (391 bytes) std::_Rb_tree<int,std::pair<int const,sociallib::SNSWrapperBase *>,std::_Select1st<std::pair<int const,sociallib::SNSWrapperBase *>>,std::less<int>,std::allocator<std::pair<int const,sociallib::SNSWrapperBase *>>>::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<int const,sociallib::SNSWrapperBase *>>,std::pair<int const,sociallib::SNSWrapperBase *> const&)
// int *std::_Rb_tree<int,std::pair<int const,sociallib::SNSWrapperBase *>,std::_Select1st<std::pair<int const,sociallib::SNSWrapperBase *>>,std::less<int>,std::allocator<std::pair<int const,sociallib::SNSWrapperBase *>>>::_M_insert_unique_( int *a1, uint32_t *a2, int a3, int *a4);
// [0x14157a0] (1085 bytes) sub_14157A0
// int *sub_14157A0();
// [0x141b7c0] (66 bytes) sub_141B7C0
// int sub_141B7C0();
// [0x141cbc0] (1004 bytes) std::vector<std::string,std::allocator<std::string>>::_M_fill_insert(__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>,unsigned int,std::string const&)
// void std::vector<std::string>::_M_fill_insert(int *a1, uint32_t *a2, unsigned int a3, int a4);
// [0x141cfb0] (108 bytes) sub_141CFB0
// int sub_141CFB0();
// [0x141d1d0] (68 bytes) sub_141D1D0
// int sub_141D1D0(int a1, int a2, int a3);
// [0x141ec80] (34 bytes) XP_API_MALLOC
// void *XP_API_MALLOC(size_t size);
// [0x141ecb0] (38 bytes) XP_API_FREE
// void XP_API_FREE(void *ptr);
// [0x141ece0] (40 bytes) XP_API_STRLEN
// size_t XP_API_STRLEN(const char *s);
// [0x141ed10] (42 bytes) XP_API_STRCMP
// int XP_API_STRCMP(char *s1, char *s2);
// [0x141ed40] (50 bytes) XP_API_STRNCMP
// int XP_API_STRNCMP(char *s1, char *s2, size_t n);
// [0x141ed80] (42 bytes) XP_API_STRCASECMP
// int XP_API_STRCASECMP(char *s1, char *s2);
// [0x141edb0] (131 bytes) XP_API_STRNEW
// void *XP_API_STRNEW(const char *src);
// [0x141ee40] (42 bytes) XP_API_STRCPY
// char *XP_API_STRCPY(char *dest, char *src);
// [0x141ee70] (50 bytes) XP_API_STRNCPY
// char *XP_API_STRNCPY(char *dest, char *src, size_t n);
// [0x141eeb0] (42 bytes) XP_API_STRCAT
// char *XP_API_STRCAT(char *dest, char *src);
// [0x141eee0] (108 bytes) XP_API_STRTRIM
// const char *XP_API_STRTRIM(const char *a1);
// [0x141ef50] (42 bytes) XP_API_STRSTR
// char *XP_API_STRSTR(char *haystack, char *needle);
// [0x141ef80] (100 bytes) XP_API_STRCHRFIND
// char *XP_API_STRCHRFIND(char *a1, uint8_t a2, int a3);
// [0x141eff0] (67 bytes) XP_API_STRCHR
// char *XP_API_STRCHR(char *s, char a2, int a3);
// [0x141f040] (9 bytes) XP_DEBUG_INIT
// void XP_DEBUG_INIT();
// [0x141f050] (9 bytes) XP_DEBUG_FINALIZE
// void XP_DEBUG_FINALIZE();
// [0x141f060] (9 bytes) XP_DEBUG_OUT
// void XP_DEBUG_OUT();
// [0x141f070] (34 bytes) XP_API_ATOI
// int XP_API_ATOI(char *nptr);
// [0x141f0a0] (72 bytes) XP_API_FTOA
// char *XP_API_FTOA(int a1, char *s);
// [0x141f0f0] (42 bytes) XP_API_ATOF
// long double XP_API_ATOF(char *nptr);
// [0x141f120] (233 bytes) XP_API_ITOA
// char *XP_API_ITOA(int a1, char *a2, int a3);
// [0x141f210] (160 bytes) ConvertUnicodeToUTF8(char *,unsigned short const*,int)
// int ConvertUnicodeToUTF8(char *a1, const uint16_t *a2, int a3);
// [0x141f2b0] (206 bytes) ConvertUTF8ToUnicode(unsigned short *,char const*,int)
// int ConvertUTF8ToUnicode(uint16_t *a1, const char *a2, int a3);
// [0x141f380] (132 bytes) TranslateUnicode2Utf8(char **,unsigned short *,int,int)
// int TranslateUnicode2Utf8(char **a1, uint16_t *a2, int a3, int a4);
// [0x141f410] (132 bytes) TranslateUtf82Unicode(unsigned short **,char *,int,int)
// int TranslateUtf82Unicode(uint16_t **a1, char *a2, int a3, int a4);
// [0x141f4a0] (193 bytes) UTF8ToUnicode_Old(unsigned short *,char const*)
// int UTF8ToUnicode_Old(uint16_t *a1, const char *a2);
// [0x141f570] (472 bytes) ConvertUnicodeToUTF8_Old(char *,unsigned short const*)
// int ConvertUnicodeToUTF8_Old(char *a1, const uint16_t *a2);
// [0x141f750] (93 bytes) XP_API_FILE_OPEN
// int XP_API_FILE_OPEN(char *filename, char *modes);
// [0x141f7b0] (79 bytes) XP_API_FILE_CLOSE
// int XP_API_FILE_CLOSE(int a1);
// [0x141f800] (68 bytes) XP_API_FILE_READ
// size_t XP_API_FILE_READ(void *ptr, size_t size, size_t n, int a4);
// [0x141f850] (68 bytes) XP_API_FILE_WRITE
// size_t XP_API_FILE_WRITE(void *ptr, size_t size, size_t n, int a4);
// [0x141f8a0] (180 bytes) XP_API_FILE_GET_LENGTH
// int XP_API_FILE_GET_LENGTH(int a1);
// [0x141f960] (119 bytes) XP_API_PARSE_DATA
// int XP_API_PARSE_DATA(int a1, uint8_t *a2, int a3, char a4);
// [0x141f9e0] (173 bytes) XP_API_PARSE_DATA_NEW
// int XP_API_PARSE_DATA_NEW(int a1, void **a2, int a3, char a4);
// [0x141fa90] (150 bytes) XP_API_GET_TIME
// uint64_t XP_API_GET_TIME();
// [0x141fb30] (60 bytes) SSEncDec_GetCharFromKeyByIndex(int)
// int SSEncDec_GetCharFromKeyByIndex(int a1);
// [0x141fb70] (52 bytes) SSEncDec_GetKeyFromChar(char)
// int SSEncDec_GetKeyFromChar(uint8_t a1);
// [0x141fbb0] (331 bytes) SSEncDec_ByteArray2Blob(unsigned char *,int)
// char *SSEncDec_ByteArray2Blob(uint8_t *a1, int a2);
// [0x141fd00] (60 bytes) SSEncDec_String2Blob(char *)
// char *SSEncDec_String2Blob(char *s);
// [0x141fd40] (219 bytes) SSEncDec_Blob2ByteArray(unsigned char **,char *)
// signed int SSEncDec_Blob2ByteArray(uint8_t **a1, char *s);
// [0x141fe20] (118 bytes) SSEncDec_Blob2String(char *)
// uint8_t *SSEncDec_Blob2String(char *s);
// [0x141fea0] (44 bytes) XP_API_GetNationality(char *)
// char *XP_API_GetNationality(char *a1);
// [0x141fed0] (117 bytes) XP_API_GET_RANDOM
// int XP_API_GET_RANDOM(const char *a1);
// [0x141ff50] (291 bytes) XP_API_IP_STR2INT
// int XP_API_IP_STR2INT(char *a1);
// [0x1420080] (104 bytes) XP_API_IP_INT2STR
// char *XP_API_IP_INT2STR(unsigned int a1, char *s);
// [0x14200f0] (54 bytes) XP_DEBUG_OPEN_SENDDATA_LOG(void)
// FILE *XP_DEBUG_OPEN_SENDDATA_LOG();
// [0x1420130] (38 bytes) XP_DEBUG_CLOSE_SENDDATA_LOG(void)
// int XP_DEBUG_CLOSE_SENDDATA_LOG();
// [0x1420160] (62 bytes) XP_DEBUG_SAVE_SENDDATA_LOG(char const*,int)
// size_t XP_DEBUG_SAVE_SENDDATA_LOG(const char *ptr, size_t n);
// [0x14201a0] (54 bytes) XP_DEBUG_OPEN_RECVDATA_LOG(void)
// FILE *XP_DEBUG_OPEN_RECVDATA_LOG();
// [0x14201e0] (38 bytes) XP_DEBUG_CLOSE_RECVDATA_LOG(void)
// int XP_DEBUG_CLOSE_RECVDATA_LOG();
// [0x1420210] (62 bytes) XP_DEBUG_SAVE_RECVDATA_LOG(char const*,int)
// size_t XP_DEBUG_SAVE_RECVDATA_LOG(const char *ptr, size_t n);
// [0x1420250] (101 bytes) getValue
// int getValue(int a1, uint8_t *a2, int a3, char a4);
// [0x14202c0] (118 bytes) XP_API_TOLOWER(char const*,char *)
// void XP_API_TOLOWER(char *a1, char *a2);
// [0x1420d10] (66 bytes) sub_1420D10
// int sub_1420D10();
// [0x1423d60] (127 bytes) std::_Rb_tree<sociallib::SNS_PERMISSION,std::pair<sociallib::SNS_PERMISSION const,std::string>,std::_Select1st<std::pair<sociallib::SNS_PERMISSION const,std::string>>,std::less<sociallib::SNS_PERMISSION>,std::allocator<std::pair<sociallib::SNS_PERMISSION const,std::string>>>::_M_erase(std::_Rb_tree_node<std::pair<sociallib::SNS_PERMISSION const,std::string>> *)
// void std::_Rb_tree<sociallib::SNS_PERMISSION,std::pair<sociallib::SNS_PERMISSION const,std::string>,std::_Select1st<std::pair<sociallib::SNS_PERMISSION const,std::string>>,std::less<sociallib::SNS_PERMISSION>,std::allocator<std::pair<sociallib::SNS_PERMISSION const,std::string>>>::_M_erase( int a1, void **a2);
// [0x1423ef0] (218 bytes) std::_Rb_tree<sociallib::SNS_PERMISSION,std::pair<sociallib::SNS_PERMISSION const,std::string>,std::_Select1st<std::pair<sociallib::SNS_PERMISSION const,std::string>>,std::less<sociallib::SNS_PERMISSION>,std::allocator<std::pair<sociallib::SNS_PERMISSION const,std::string>>>::_M_insert_(std::_Rb_tree_node_base const*,std::_Rb_tree_node_base const*,std::pair<sociallib::SNS_PERMISSION const,std::string> const&)
// int *std::_Rb_tree<sociallib::SNS_PERMISSION,std::pair<sociallib::SNS_PERMISSION const,std::string>,std::_Select1st<std::pair<sociallib::SNS_PERMISSION const,std::string>>,std::less<sociallib::SNS_PERMISSION>,std::allocator<std::pair<sociallib::SNS_PERMISSION const,std::string>>>::_M_insert_( int *a1, int a2, int a3, int a4, uint32_t *a5);
// [0x1423fd0] (223 bytes) std::_Rb_tree<sociallib::SNS_PERMISSION,std::pair<sociallib::SNS_PERMISSION const,std::string>,std::_Select1st<std::pair<sociallib::SNS_PERMISSION const,std::string>>,std::less<sociallib::SNS_PERMISSION>,std::allocator<std::pair<sociallib::SNS_PERMISSION const,std::string>>>::_M_insert_unique(std::pair<sociallib::SNS_PERMISSION const,std::string> const&)
// int std::_Rb_tree<sociallib::SNS_PERMISSION,std::pair<sociallib::SNS_PERMISSION const,std::string>,std::_Select1st<std::pair<sociallib::SNS_PERMISSION const,std::string>>,std::less<sociallib::SNS_PERMISSION>,std::allocator<std::pair<sociallib::SNS_PERMISSION const,std::string>>>::_M_insert_unique( int a1, int a2, int *a3);
// [0x14240b0] (391 bytes) std::_Rb_tree<sociallib::SNS_PERMISSION,std::pair<sociallib::SNS_PERMISSION const,std::string>,std::_Select1st<std::pair<sociallib::SNS_PERMISSION const,std::string>>,std::less<sociallib::SNS_PERMISSION>,std::allocator<std::pair<sociallib::SNS_PERMISSION const,std::string>>>::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<sociallib::SNS_PERMISSION const,std::string>>,std::pair<sociallib::SNS_PERMISSION const,std::string> const&)
// int *std::_Rb_tree<sociallib::SNS_PERMISSION,std::pair<sociallib::SNS_PERMISSION const,std::string>,std::_Select1st<std::pair<sociallib::SNS_PERMISSION const,std::string>>,std::less<sociallib::SNS_PERMISSION>,std::allocator<std::pair<sociallib::SNS_PERMISSION const,std::string>>>::_M_insert_unique_( int *a1, uint32_t *a2, int a3, int *a4);
// [0x1424240] (66 bytes) sub_1424240
// int sub_1424240();
// [0x1424290] (186 bytes) FacebookInstallEvent::FacebookInstallEvent(std::string const&)
// int FacebookInstallEvent::FacebookInstallEvent(glotv3::Event *a1, uint8_t **a2);
// [0x1424350] (45 bytes) FacebookInstallEvent::~FacebookInstallEvent()
// void FacebookInstallEvent::~FacebookInstallEvent(FacebookInstallEvent *this);
// [0x1424380] (67 bytes) FacebookInstallEvent::~FacebookInstallEvent()
// void FacebookInstallEvent::~FacebookInstallEvent(FacebookInstallEvent *this);
// [0x14243d0] (779 bytes) sub_14243D0
// int *sub_14243D0();
// [0x1426660] (561 bytes) std::deque<sociallib::GLWTManager::ServiceRequest *,std::allocator<sociallib::GLWTManager::ServiceRequest *>>::push_back(sociallib::GLWTManager::ServiceRequest * const&)
// char *std::deque<sociallib::GLWTManager::ServiceRequest *>::push_back(void **a1, uint32_t *a2);
// [0x14268a0] (176 bytes) std::_Deque_base<sociallib::GLWTManager::ServiceRequest *,std::allocator<sociallib::GLWTManager::ServiceRequest *>>::_M_initialize_map(unsigned int)
// int std::_Deque_base<sociallib::GLWTManager::ServiceRequest *>::_M_initialize_map( std::_Deque_base<sociallib::GLWTManager::ServiceRequest *> *this, unsigned int a2);
// [0x1427120] (66 bytes) sub_1427120
// int sub_1427120();
// [0x14285c0] (274 bytes) __gnu_cxx::__normal_iterator<char *,std::string> std::remove<__gnu_cxx::__normal_iterator<char *,std::string>,char>(__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>,char const&)
// uint32_t *std::remove<__gnu_cxx::__normal_iterator<char *,std::string>,char>( uint32_t *a1, uint8_t *a2, uint8_t *a3, char *a4);
// [0x14286e0] (66 bytes) sub_14286E0
// int sub_14286E0();
// [0x142b100] (271 bytes) std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_insert_(std::_Rb_tree_node_base const*,std::_Rb_tree_node_base const*,std::pair<std::string const,std::string> const&)
// int *std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_insert_( int *a1, int a2, int a3, int a4, const void **a5);
// [0x142b210] (746 bytes) std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>,std::pair<std::string const,std::string> const&)
// int *std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_insert_unique_( int *a1, uint32_t *a2, int a3, const void **a4);
// [0x142b500] (335 bytes) std::_Rb_tree<std::string,std::pair<std::string const,sociallib::SNSUserData>,std::_Select1st<std::pair<std::string const,sociallib::SNSUserData>>,std::less<std::string>,std::allocator<std::pair<std::string const,sociallib::SNSUserData>>>::_M_insert_(std::_Rb_tree_node_base const*,std::_Rb_tree_node_base const*,std::pair<std::string const,sociallib::SNSUserData> const&)
// int *std::_Rb_tree<std::string,std::pair<std::string const,sociallib::SNSUserData>,std::_Select1st<std::pair<std::string const,sociallib::SNSUserData>>,std::less<std::string>,std::allocator<std::pair<std::string const,sociallib::SNSUserData>>>::_M_insert_( int *a1, int a2, int a3, int a4, int a5);
// [0x142b650] (66 bytes) sub_142B650
// int sub_142B650();
// [0x142be60] (66 bytes) sub_142BE60
// int sub_142BE60();
