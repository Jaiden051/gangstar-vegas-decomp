#pragma once
// ============================================================================
// G4_UP8Shop/lib/openssl/decompiled/openssl_internal_0_part01.h
// Library: openssl | Module: openssl_internal_0_part01
// Binary Address Span: 0x194e3b0 .. 0x1981ec0 (500 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x194e3b0] (268 bytes) sub_194E3B0
// wchar_t **sub_194E3B0(wchar_t **a1, wchar_t *s2, size_t n);
// [0x194e4d0] (68 bytes) sub_194E4D0
// wchar_t **sub_194E4D0(wchar_t **a1, wchar_t *s);
// [0x194e520] (109 bytes) sub_194E520
// wchar_t **sub_194E520(wchar_t **a1, wchar_t *a2, size_t a3, size_t a4);
// [0x194e590] (41 bytes) sub_194E590
// wchar_t **sub_194E590(wchar_t **a1, wchar_t *a2, size_t a3);
// [0x194e5c0] (68 bytes) sub_194E5C0
// wchar_t **sub_194E5C0(wchar_t **a1, wchar_t *s);
// [0x194e610] (175 bytes) sub_194E610
// wchar_t **sub_194E610(wchar_t **a1, size_t a2, int a3, size_t n, wchar_t c);
// [0x194e6c0] (39 bytes) sub_194E6C0
// wchar_t **sub_194E6C0(wchar_t **a1, int a2, int a3, size_t a4, wchar_t a5);
// [0x194e6f0] (126 bytes) sub_194E6F0
// wchar_t **sub_194E6F0(wchar_t **a1, size_t a2, unsigned int a3, size_t a4, wchar_t a5);
// [0x194e770] (105 bytes) sub_194E770
// uint32_t *sub_194E770(uint32_t *a1, wchar_t **a2, int a3, wchar_t a4);
// [0x194e7e0] (87 bytes) sub_194E7E0
// wchar_t **sub_194E7E0(wchar_t **a1, size_t a2, size_t a3, wchar_t a4);
// [0x194e840] (54 bytes) sub_194E840
// wchar_t **sub_194E840(wchar_t **a1, size_t a2, wchar_t a3);
// [0x194e880] (58 bytes) sub_194E880
// wchar_t **sub_194E880(wchar_t **a1, wchar_t a2);
// [0x194e8c0] (58 bytes) sub_194E8C0
// wchar_t **sub_194E8C0(wchar_t **a1, int a2, size_t a3, wchar_t a4);
// [0x194e900] (124 bytes) sub_194E900
// uint32_t *sub_194E900(uint32_t *a1, wchar_t **a2, int a3, int a4);
// [0x194e980] (97 bytes) sub_194E980
// uint32_t *sub_194E980(uint32_t *a1, wchar_t **a2, int a3);
// [0x194e9f0] (104 bytes) sub_194E9F0
// wchar_t **sub_194E9F0(wchar_t **a1, size_t a2, unsigned int a3);
// [0x194ea60] (464 bytes) sub_194EA60
// wchar_t **sub_194EA60(wchar_t **a1, size_t a2, wchar_t *a3, size_t a4);
// [0x194ec30] (76 bytes) sub_194EC30
// wchar_t **sub_194EC30(wchar_t **a1, size_t a2, wchar_t *s);
// [0x194ec80] (125 bytes) sub_194EC80
// wchar_t **sub_194EC80(wchar_t **a1, size_t a2, wchar_t *a3, size_t a4, size_t a5);
// [0x194ed00] (22 bytes) sub_194ED00
// wchar_t **sub_194ED00(wchar_t **a1, int a2, wchar_t *a3, size_t a4);
// [0x194ed20] (46 bytes) sub_194ED20
// wchar_t **sub_194ED20(wchar_t **a1, size_t a2, wchar_t **a3);
// [0x194ed50] (46 bytes) sub_194ED50
// wchar_t *sub_194ED50(wchar_t **a1);
// [0x194ed80] (103 bytes) sub_194ED80
// wchar_t *sub_194ED80(wchar_t **a1);
// [0x194ee10] (58 bytes) sub_194EE10
// wchar_t **sub_194EE10(wchar_t **a1, wchar_t **a2);
// [0x194ee50] (41 bytes) sub_194EE50
// wchar_t *sub_194EE50(wchar_t **a1, int a2);
// [0x194ee80] (57 bytes) sub_194EE80
// wchar_t *sub_194EE80(wchar_t **a1);
// [0x194eec0] (34 bytes) sub_194EEC0
// wchar_t *sub_194EEC0(wchar_t **a1);
// [0x194eef0] (64 bytes) sub_194EEF0
// uint32_t *sub_194EEF0(uint32_t *a1, wchar_t **a2);
// [0x194ef30] (58 bytes) sub_194EF30
// wchar_t **sub_194EF30(wchar_t **a1, wchar_t **a2);
// [0x194ef70] (64 bytes) sub_194EF70
// uint32_t *sub_194EF70(uint32_t *a1, wchar_t **a2);
// [0x194efb0] (93 bytes) sub_194EFB0
// wchar_t *sub_194EFB0(wchar_t **a1, unsigned int a2);
// [0x194f010] (36 bytes) sub_194F010
// int sub_194F010(int a1);
// [0x194f040] (173 bytes) sub_194F040
// int sub_194F040(int a1, int a2, int a3);
// [0x194f0f0] (68 bytes) sub_194F0F0
// int sub_194F0F0(int a1, int a2);
// [0x194f140] (138 bytes) sub_194F140
// void sub_194F140(int *a1, unsigned int a2);
// [0x194f1d0] (132 bytes) sub_194F1D0
// int sub_194F1D0(int *a1, int a2);
// [0x194f260] (210 bytes) sub_194F260
// int *sub_194F260(int *a1, size_t n, wchar_t a3);
// [0x194f340] (157 bytes) sub_194F340
// int *sub_194F340(int *a1, size_t a2, wchar_t a3);
// [0x194f3e0] (37 bytes) sub_194F3E0
// int *sub_194F3E0(int *a1, size_t a2);
// [0x194f410] (265 bytes) sub_194F410
// int *sub_194F410(int *a1, wchar_t *a2, size_t n);
// [0x194f530] (68 bytes) sub_194F530
// int *sub_194F530(int *a1, wchar_t *s);
// [0x194f590] (68 bytes) sub_194F590
// int *sub_194F590(int *a1, wchar_t *s);
// [0x194f5e0] (243 bytes) sub_194F5E0
// int *sub_194F5E0(int *a1, int *a2, unsigned int a3, size_t a4);
// [0x194f6e0] (197 bytes) sub_194F6E0
// int *sub_194F6E0(int *a1, const wchar_t **a2);
// [0x194f7c0] (57 bytes) sub_194F7C0
// void sub_194F7C0(int *a1);
// [0x194f800] (126 bytes) sub_194F800
// int *sub_194F800(int *a1, int a2);
// [0x194f880] (99 bytes) sub_194F880
// int sub_194F880(int *a1, int *a2);
// [0x194f8f0] (160 bytes) sub_194F8F0
// int *sub_194F8F0(int *a1, int *a2);
// [0x194f9a0] (156 bytes) sub_194F9A0
// int *sub_194F9A0(int *a1, wchar_t *s, const wchar_t **a3);
// [0x194fa40] (138 bytes) sub_194FA40
// int *sub_194FA40(int *a1, wchar_t a2, const wchar_t **a3);
// [0x194fad0] (100 bytes) sub_194FAD0
// int *sub_194FAD0(int *a1, int *a2, const wchar_t **a3);
// [0x194fb40] (175 bytes) sub_194FB40
// uint32_t *sub_194FB40(wchar_t *s2, wchar_t *a2);
// [0x194fbf0] (48 bytes) sub_194FBF0
// uint32_t *sub_194FBF0(uint32_t *a1, wchar_t *a2, wchar_t *a3);
// [0x194fc20] (239 bytes) sub_194FC20
// wchar_t *sub_194FC20(wchar_t *s2, wchar_t *a2);
// [0x194fd10] (48 bytes) sub_194FD10
// wchar_t *sub_194FD10(wchar_t **a1, wchar_t *a2, wchar_t *a3);
// [0x194fd40] (125 bytes) sub_194FD40
// wchar_t *sub_194FD40(wchar_t **a1, uint32_t *a2, unsigned int a3, unsigned int a4);
// [0x194fdc0] (125 bytes) sub_194FDC0
// wchar_t *sub_194FDC0(wchar_t **a1, uint32_t *a2, unsigned int a3, unsigned int a4);
// [0x194fe40] (97 bytes) sub_194FE40
// wchar_t **sub_194FE40(wchar_t **a1, uint32_t *a2, unsigned int a3, unsigned int a4);
// [0x194feb0] (239 bytes) sub_194FEB0
// wchar_t *sub_194FEB0(wchar_t *s2, wchar_t *a2);
// [0x194ffa0] (48 bytes) sub_194FFA0
// wchar_t *sub_194FFA0(wchar_t **a1, wchar_t *a2, wchar_t *a3);
// [0x194ffd0] (51 bytes) sub_194FFD0
// wchar_t *sub_194FFD0(wchar_t **a1, wchar_t *a2, int a3);
// [0x1950010] (91 bytes) sub_1950010
// wchar_t *sub_1950010(wchar_t **a1, wchar_t *s);
// [0x1950070] (51 bytes) sub_1950070
// wchar_t *sub_1950070(wchar_t **a1, wchar_t *a2, int a3);
// [0x19500b0] (491 bytes) sub_19500B0
// wchar_t **sub_19500B0(wchar_t **a1, size_t a2, unsigned int a3, wchar_t *a4, size_t n);
// [0x19502a0] (76 bytes) sub_19502A0
// wchar_t **sub_19502A0(wchar_t **a1, int a2, int a3, wchar_t *a4, size_t a5);
// [0x19502f0] (76 bytes) sub_19502F0
// wchar_t **sub_19502F0(wchar_t **a1, int a2, int a3, wchar_t *a4, size_t a5);
// [0x1950340] (76 bytes) sub_1950340
// wchar_t **sub_1950340(wchar_t **a1, int a2, int a3, wchar_t *a4, size_t a5);
// [0x1950390] (76 bytes) sub_1950390
// wchar_t **sub_1950390(wchar_t **a1, int a2, int a3, wchar_t *a4, size_t a5);
// [0x19503e0] (39 bytes) sub_19503E0
// wchar_t **sub_19503E0(wchar_t **a1, int a2, int a3, wchar_t *a4, size_t a5);
// [0x1950410] (84 bytes) sub_1950410
// wchar_t **sub_1950410(wchar_t **a1, size_t a2, unsigned int a3, wchar_t *s);
// [0x1950470] (141 bytes) sub_1950470
// wchar_t **sub_1950470(wchar_t **a1, size_t a2, unsigned int a3, wchar_t *a4, size_t a5, size_t a6);
// [0x1950500] (54 bytes) sub_1950500
// wchar_t **sub_1950500(wchar_t **a1, size_t a2, unsigned int a3, wchar_t **a4);
// [0x1950540] (53 bytes) sub_1950540
// wchar_t **sub_1950540(wchar_t **a1, int a2, int a3, wchar_t *a4, size_t a5);
// [0x1950580] (110 bytes) sub_1950580
// wchar_t **sub_1950580(wchar_t **a1, int a2, int a3, wchar_t *s);
// [0x19505f0] (82 bytes) sub_19505F0
// wchar_t **sub_19505F0(wchar_t **a1, int a2, int a3, wchar_t **a4);
// [0x1950670] (22 bytes) std::bad_alloc::what(void)const
// const char *std::bad_alloc::what();
// [0x1950690] (45 bytes) std::bad_alloc::~bad_alloc()
// void std::bad_alloc::~bad_alloc(std::bad_alloc *this);
// [0x19506c0] (56 bytes) std::bad_alloc::~bad_alloc()
// void std::bad_alloc::~bad_alloc(std::bad_alloc *this);
// [0x1950700] (22 bytes) std::bad_cast::what(void)const
// const char *std::bad_cast::what();
// [0x1950720] (45 bytes) std::bad_cast::~bad_cast()
// void std::bad_cast::~bad_cast(std::bad_cast *this);
// [0x1950750] (56 bytes) std::bad_cast::~bad_cast()
// void std::bad_cast::~bad_cast(std::bad_cast *this);
// [0x1950790] (22 bytes) std::bad_typeid::what(void)const
// const char *std::bad_typeid::what();
// [0x19507b0] (45 bytes) std::bad_typeid::~bad_typeid()
// void std::bad_typeid::~bad_typeid(std::bad_typeid *this);
// [0x19507e0] (56 bytes) std::bad_typeid::~bad_typeid()
// void std::bad_typeid::~bad_typeid(std::bad_typeid *this);
// [0x1950820] (106 bytes) __cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*,void **)const
// int __cxxabiv1::__class_type_info::__do_upcast( __cxxabiv1::__class_type_info *this, const __cxxabiv1::__class_type_info *a2, void **a3);
// [0x1950890] (19 bytes) __cxxabiv1::__class_type_info::__do_find_public_src(int,void const*,__cxxabiv1::__class_type_info const*,void const*)const
// int __cxxabiv1::__class_type_info::__do_find_public_src( __cxxabiv1::__class_type_info *this, int a2, const void *a3, const __cxxabiv1::__class_type_info *a4, const void *a5);
// [0x19508b0] (45 bytes) __cxxabiv1::__class_type_info::~__class_type_info()
// void __cxxabiv1::__class_type_info::~__class_type_info(__cxxabiv1::__class_type_info *this);
// [0x19508e0] (56 bytes) __cxxabiv1::__class_type_info::~__class_type_info()
// void __cxxabiv1::__class_type_info::~__class_type_info(__cxxabiv1::__class_type_info *this);
// [0x1950920] (123 bytes) __cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*,void const*,__cxxabiv1::__class_type_info::__upcast_result &)const
// int __cxxabiv1::__class_type_info::__do_upcast(int a1, int a2, int a3, uint32_t *a4);
// [0x19509a0] (136 bytes) __cxxabiv1::__class_type_info::__do_catch(std::type_info const*,void **,unsigned int)const
// int __cxxabiv1::__class_type_info::__do_catch( __cxxabiv1::__class_type_info *this, const type_info *a2, void **a3, unsigned int a4);
// [0x1950a30] (177 bytes) __cxxabiv1::__class_type_info::__do_dyncast(int,__cxxabiv1::__class_type_info::__sub_kind,__cxxabiv1::__class_type_info const*,void const*,__cxxabiv1::__class_type_info const*,void const*,__cxxabiv1::__class_type_info::__dyncast_result &)const
// int __cxxabiv1::__class_type_info::__do_dyncast( int a1, int a2, int a3, int a4, int a5, int a6, int a7, uint32_t *a8);
// [0x1950af0] (38 bytes) operator delete(void *,std::nothrow_t const&)
// void operator delete(void *ptr);
// [0x1950b20] (281 bytes) __dynamic_cast
// void *_dynamic_cast( const void *lpsrc, const __class_type_info *lpstype, const __class_type_info *lpdtype, ptrdiff_t s2d);
// [0x1950c3c] (64 bytes) sub_1950C3C
// void __noreturn sub_1950C3C();
// [0x1950c80] (374 bytes) __cxa_allocate_exception
// void *_cxa_allocate_exception(size_t thrown_size);
// [0x1950e00] (215 bytes) __cxa_free_exception
// void _cxa_free_exception(void *a1);
// [0x1950ee0] (342 bytes) __cxa_allocate_dependent_exception
// uint8_t *_cxa_allocate_dependent_exception();
// [0x1951040] (220 bytes) __cxa_free_dependent_exception
// void _cxa_free_dependent_exception(int *ptr);
// [0x1951120] (26 bytes) sub_1951120
// void sub_1951120();
// [0x1951140] (67 bytes) __cxa_bad_cast
// void __noreturn _cxa_bad_cast();
// [0x1951190] (67 bytes) __cxa_bad_typeid
// void __noreturn _cxa_bad_typeid();
// [0x19511e0] (12 bytes) __cxa_get_exception_ptr
// void *_cxa_get_exception_ptr(void *a1);
// [0x19511f0] (150 bytes) __cxa_begin_catch
// void *_cxa_begin_catch(void *a1);
// [0x1951290] (167 bytes) __cxa_end_catch
// void _cxa_end_catch();
// [0x1951340] (35 bytes) std::uncaught_exception(void)
// bool std::uncaught_exception();
// [0x1951370] (27 bytes) std::exception::~exception()
// void std::exception::~exception(std::exception *this);
// [0x1951390] (45 bytes) std::bad_exception::~bad_exception()
// void std::bad_exception::~bad_exception(std::bad_exception *this);
// [0x19513c0] (27 bytes) __cxxabiv1::__forced_unwind::~__forced_unwind()
// void __cxxabiv1::__forced_unwind::~__forced_unwind(__cxxabiv1::__forced_unwind *this);
// [0x19513e0] (27 bytes) __cxxabiv1::__foreign_exception::~__foreign_exception()
// void __cxxabiv1::__foreign_exception::~__foreign_exception(__cxxabiv1::__foreign_exception *this);
// [0x1951400] (22 bytes) std::exception::what(void)const
// const char *std::exception::what();
// [0x1951420] (22 bytes) std::bad_exception::what(void)const
// const char *std::bad_exception::what();
// [0x1951440] (56 bytes) __cxxabiv1::__foreign_exception::~__foreign_exception()
// void __cxxabiv1::__foreign_exception::~__foreign_exception(__cxxabiv1::__foreign_exception *this);
// [0x1951480] (56 bytes) __cxxabiv1::__forced_unwind::~__forced_unwind()
// void __cxxabiv1::__forced_unwind::~__forced_unwind(__cxxabiv1::__forced_unwind *this);
// [0x19514c0] (56 bytes) std::bad_exception::~bad_exception()
// void std::bad_exception::~bad_exception(std::bad_exception *this);
// [0x1951500] (56 bytes) std::exception::~exception()
// void std::exception::~exception(std::exception *this);
// [0x1951540] (76 bytes) sub_1951540
// void sub_1951540(int *ptr);
// [0x1951590] (68 bytes) sub_1951590
// int sub_1951590(int a1);
// [0x19515e0] (78 bytes) __cxa_get_globals_fast
// void *_cxa_get_globals_fast();
// [0x1951630] (155 bytes) __cxa_get_globals
// uint32_t *_cxa_get_globals();
// [0x19516d0] (92 bytes) sub_19516D0
// int sub_19516D0();
// [0x1951730] (77 bytes) sub_1951730
// char *sub_1951730(char *result, uint32_t *a2);
// [0x1951780] (126 bytes) sub_1951780
// int sub_1951780(char a1, int a2);
// [0x1951800] (288 bytes) sub_1951800
// int sub_1951800(char a1, char *a2, char *a3, uint32_t *a4);
// [0x1951920] (225 bytes) sub_1951920
// char *sub_1951920(int a1, char *a2, int a3);
// [0x1951a10] (156 bytes) sub_1951A10
// int sub_1951A10(int a1, int a2);
// [0x1951ab0] (157 bytes) sub_1951AB0
// int sub_1951AB0(int a1, int a2, uint32_t *a3, int a4);
// [0x1951b50] (1407 bytes) __gxx_personality_v0
// char _gxx_personality_v0(int a1, int a2, int a3, int a4, uint32_t *a5, int a6);
// [0x19520d0] (253 bytes) __cxa_call_unexpected
// void __noreturn _cxa_call_unexpected(void *a1);
// [0x19521d0] (78 bytes) __cxxabiv1::__terminate(void (*)(void))
// void __noreturn __cxxabiv1::__terminate(void (*a1)());
// [0x1952220] (35 bytes) std::terminate(void)
// void __noreturn std::terminate();
// [0x1952250] (27 bytes) __cxxabiv1::__unexpected(void (*)(void))
// void __noreturn __cxxabiv1::__unexpected(void (*a1)());
// [0x1952270] (35 bytes) std::unexpected(void)
// void __noreturn std::unexpected();
// [0x19522a0] (31 bytes) std::set_terminate(void (*)(void))
// void (__noreturn *std::set_terminate(void (*a1)()))();
// [0x19522c0] (31 bytes) std::set_unexpected(void (*)(void))
// void (__noreturn *std::set_unexpected(void (*a1)()))();
// [0x19522e0] (92 bytes) sub_19522E0
// void sub_19522E0(unsigned int a1, int a2);
// [0x1952340] (111 bytes) __cxa_throw
// void __noreturn _cxa_throw(void *a1, type_info *lptinfo, void (*a3)(void *));
// [0x19523b0] (99 bytes) __cxa_rethrow
// void __noreturn _cxa_rethrow();
// [0x1952420] (166 bytes) __cxa_guard_acquire
// int _cxa_guard_acquire(__guard *a1);
// [0x19524d0] (96 bytes) __cxa_guard_abort
// void _cxa_guard_abort(__guard *a1);
// [0x1952530] (104 bytes) __cxa_guard_release
// void _cxa_guard_release(__guard *a1);
// [0x19525a0] (28 bytes) std::set_new_handler(void (*)(void))
// int std::set_new_handler(void (*a1)());
// [0x19525c0] (131 bytes) operator new(unsigned int,std::nothrow_t const&)
// void *operator new(size_t a1);
// [0x1952650] (42 bytes) operator new[](unsigned int,std::nothrow_t const&)
// void *operator new[](size_t a1);
// [0x1952680] (51 bytes) __cxa_pure_virtual
// void __noreturn _cxa_pure_virtual();
// [0x19526c0] (45 bytes) __cxxabiv1::__si_class_type_info::~__si_class_type_info()
// void __cxxabiv1::__si_class_type_info::~__si_class_type_info(__cxxabiv1::__si_class_type_info *this);
// [0x19526f0] (56 bytes) __cxxabiv1::__si_class_type_info::~__si_class_type_info()
// void __cxxabiv1::__si_class_type_info::~__si_class_type_info(__cxxabiv1::__si_class_type_info *this);
// [0x1952730] (128 bytes) __cxxabiv1::__si_class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*,void const*,__cxxabiv1::__class_type_info::__upcast_result &)const
// int __cxxabiv1::__si_class_type_info::__do_upcast(int a1, int a2, int a3, uint32_t *a4);
// [0x19527b0] (334 bytes) __cxxabiv1::__si_class_type_info::__do_dyncast(int,__cxxabiv1::__class_type_info::__sub_kind,__cxxabiv1::__class_type_info const*,void const*,__cxxabiv1::__class_type_info const*,void const*,__cxxabiv1::__class_type_info::__dyncast_result &)const
// int __cxxabiv1::__si_class_type_info::__do_dyncast( int a1, int a2, int a3, int a4, int a5, int a6, int a7, uint32_t *a8);
// [0x1952900] (196 bytes) __cxxabiv1::__si_class_type_info::__do_find_public_src(int,void const*,__cxxabiv1::__class_type_info const*,void const*)const
// int __cxxabiv1::__si_class_type_info::__do_find_public_src( char **this, int a2, const void *a3, char **a4, const void *a5);
// [0x19529d0] (24 bytes) sub_19529D0
// uint32_t *sub_19529D0(uint32_t *a1);
// [0x19529f0] (9 bytes) sub_19529F0
// int sub_19529F0();
// [0x1952a00] (9 bytes) sub_1952A00
// int sub_1952A00();
// [0x1952a10] (9 bytes) sub_1952A10
// int sub_1952A10();
// [0x1952a20] (69 bytes) sub_1952A20
// bool sub_1952A20(int a1, int a2);
// [0x1952a70] (42 bytes) sub_1952A70
// void sub_1952A70(uint32_t *a1);
// [0x1952aa0] (45 bytes) __cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info()
// void __cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info(__cxxabiv1::__vmi_class_type_info *this);
// [0x1952ad0] (56 bytes) __cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info()
// void __cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info(__cxxabiv1::__vmi_class_type_info *this);
// [0x1952b10] (1643 bytes) __cxxabiv1::__vmi_class_type_info::__do_dyncast(int,__cxxabiv1::__class_type_info::__sub_kind,__cxxabiv1::__class_type_info const*,void const*,__cxxabiv1::__class_type_info const*,void const*,__cxxabiv1::__class_type_info::__dyncast_result &)const
// int __cxxabiv1::__vmi_class_type_info::__do_dyncast( uint32_t *a1, int a2, int a3, const char **a4, uint32_t *a5, int a6, uint32_t *a7, int *a8);
// [0x1953180] (546 bytes) __cxxabiv1::__vmi_class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*,void const*,__cxxabiv1::__class_type_info::__upcast_result &)const
// int __cxxabiv1::__vmi_class_type_info::__do_upcast(int a1, int a2, uint32_t *a3, uint32_t *a4);
// [0x19533b0] (226 bytes) __cxxabiv1::__vmi_class_type_info::__do_find_public_src(int,void const*,__cxxabiv1::__class_type_info const*,void const*)const
// int __cxxabiv1::__vmi_class_type_info::__do_find_public_src( __cxxabiv1::__vmi_class_type_info *this, int a2, char *a3, const __cxxabiv1::__class_type_info *a4, char *a5);
// [0x19534a0] (26 bytes) sub_19534A0
// int sub_19534A0(int a1, int a2, int a3, int a4, uint32_t *a5, int a6, int a7, uint32_t *a8);
// [0x19534c0] (16 bytes) sub_19534C0
// int sub_19534C0(int a1, int a2, int a3, int a4, uint32_t *a5);
// [0x19534d0] (26 bytes) sub_19534D0
// int sub_19534D0(int a1, int a2, int a3, int a4, uint32_t *a5, int a6, int a7, uint32_t *a8);
// [0x19534f0] (12 bytes) sub_19534F0
// int sub_19534F0();
// [0x1953500] (12 bytes) sub_1953500
// int sub_1953500();
// [0x1953510] (18 bytes) sub_1953510
// unsigned int sub_1953510(int a1, int a2, int a3, int a4, unsigned int a5);
// [0x1953530] (12 bytes) sub_1953530
// int sub_1953530();
// [0x1953540] (16 bytes) sub_1953540
// int sub_1953540(int a1, int a2, int a3, int a4, uint32_t *a5);
// [0x1953550] (9 bytes) sub_1953550
// int sub_1953550();
// [0x1953560] (113 bytes) sub_1953560
// uint32_t *sub_1953560(uint32_t *a1);
// [0x19535e0] (56 bytes) sub_19535E0
// void sub_19535E0(uint32_t *a1);
// [0x1953620] (113 bytes) sub_1953620
// uint32_t *sub_1953620(uint32_t *a1);
// [0x19536a0] (56 bytes) sub_19536A0
// void sub_19536A0(uint32_t *a1);
// [0x19536e0] (105 bytes) sub_19536E0
// int sub_19536E0(uint32_t *a1, int a2);
// [0x1953750] (77 bytes) sub_1953750
// int sub_1953750(uint32_t *a1, char a2, int a3);
// [0x19537a0] (105 bytes) sub_19537A0
// int sub_19537A0(uint32_t *a1, int a2);
// [0x1953810] (77 bytes) sub_1953810
// int sub_1953810(uint32_t *a1, char a2, int a3);
// [0x1953860] (572 bytes) sub_1953860
// uint32_t *sub_1953860(uint32_t *a1, int a2);
// [0x1953aa0] (579 bytes) sub_1953AA0
// uint32_t *sub_1953AA0(uint32_t *a1, int a2);
// [0x1953cf0] (104 bytes) sub_1953CF0
// void sub_1953CF0(int a1);
// [0x1953d60] (111 bytes) sub_1953D60
// volatile int32_t **sub_1953D60( volatile int32_t **a1, int a2, volatile int32_t **a3);
// [0x1953dd0] (164 bytes) sub_1953DD0
// uint8_t *sub_1953DD0(int a1, uint8_t *a2, char a3);
// [0x1953e80] (136 bytes) sub_1953E80
// char sub_1953E80(uint8_t *a1, int a2, uint8_t **a3);
// [0x1953f10] (255 bytes) sub_1953F10
// int sub_1953F10(uint32_t *a1, uint32_t *a2, uint8_t *a3);
// [0x1954010] (261 bytes) sub_1954010
// int sub_1954010(uint32_t *a1, uint32_t *a2, uint8_t *a3);
// [0x1954120] (295 bytes) sub_1954120
// int sub_1954120( int a1, int *a2, unsigned int a3, unsigned int a4, wchar_t **a5, char *a6, unsigned int a7, char **a8);
// [0x1954250] (183 bytes) sub_1954250
// int sub_1954250( int a1, int *a2, char *a3, unsigned int a4, const char **a5, wchar_t *a6, unsigned int a7, wchar_t **a8);
// [0x1954310] (12 bytes) sub_1954310
// int sub_1954310();
// [0x1954320] (12 bytes) sub_1954320
// int sub_1954320();
// [0x1954330] (156 bytes) sub_1954330
// int sub_1954330(int a1, int *a2, char *a3, unsigned int a4, int a5);
// [0x19543d0] (56 bytes) sub_19543D0
// int sub_19543D0(int a1, char *s1, char *s2);
// [0x1954410] (50 bytes) sub_1954410
// size_t sub_1954410(int a1, char *dest, char *src, size_t n);
// [0x1954450] (56 bytes) sub_1954450
// int sub_1954450(int a1, wchar_t *s1, wchar_t *s2);
// [0x1954490] (50 bytes) sub_1954490
// size_t sub_1954490(int a1, wchar_t *s1, wchar_t *s2, size_t n);
// [0x19544d0] (60 bytes) sub_19544D0
// size_t **sub_19544D0(size_t **a1, int a2, int a3, int a4, int a5, size_t **a6);
// [0x1954510] (60 bytes) sub_1954510
// int *sub_1954510(int *a1, int a2, int a3, int a4, int a5, int *a6);
// [0x1954550] (246 bytes) sub_1954550
// void sub_1954550(int a1, char *s, size_t maxsize, char *format, struct tm *tp);
// [0x1954650] (913 bytes) sub_1954650
// int sub_1954650(int a1);
// [0x19549f0] (306 bytes) sub_19549F0
// void sub_19549F0(int a1, wchar_t *s, size_t maxsize, wchar_t *format, struct tm *tp);
// [0x1954b30] (913 bytes) sub_1954B30
// int sub_1954B30(int a1);
// [0x1954ed0] (77 bytes) sub_1954ED0
// void __noreturn sub_1954ED0(uint64_t *a1);
// [0x1954f20] (545 bytes) __gnu_cxx::__verbose_terminate_handler(void)
// void __noreturn __gnu_cxx::__verbose_terminate_handler();
// [0x1955150] (156 bytes) sub_1955150
// uint32_t *sub_1955150(uint32_t *a1, int a2, int a3, int a4);
// [0x19551f0] (96 bytes) sub_19551F0
// uint32_t *sub_19551F0(uint32_t *a1, int a2, int a3);
// [0x1955250] (164 bytes) sub_1955250
// uint32_t *sub_1955250(int a1, uint32_t *a2, int a3);
// [0x1955300] (512 bytes) sub_1955300
// uint32_t *sub_1955300(int a1, int a2);
// [0x1955500] (118 bytes) sub_1955500
// int sub_1955500(int result, char a2);
// [0x1955580] (203 bytes) sub_1955580
// uint32_t *sub_1955580(int a1, uint32_t *a2);
// [0x1955650] (127 bytes) sub_1955650
// int sub_1955650(char **a1);
// [0x19556d0] (91 bytes) sub_19556D0
// int sub_19556D0(int a1);
// [0x1955730] (111 bytes) sub_1955730
// uint32_t *sub_1955730(uint32_t *a1);
// [0x19557a0] (223 bytes) sub_19557A0
// uint32_t *sub_19557A0(int a1);
// [0x1955880] (142 bytes) sub_1955880
// int sub_1955880(int a1, int a2);
// [0x1955910] (36 bytes) sub_1955910
// int sub_1955910(uint32_t *a1, int a2);
// [0x1955940] (228 bytes) sub_1955940
// void sub_1955940(void *src, size_t n, int a3);
// [0x1955a30] (2133 bytes) sub_1955A30
// uint32_t *sub_1955A30(int a1);
// [0x1956290] (167 bytes) sub_1956290
// int sub_1956290(uint32_t *a1);
// [0x1956340] (87 bytes) sub_1956340
// uint32_t *sub_1956340(uint32_t *a1, int a2);
// [0x19563a0] (435 bytes) sub_19563A0
// uint32_t *sub_19563A0(uint32_t *a1);
// [0x1956560] (741 bytes) sub_1956560
// uint32_t *sub_1956560(int a1);
// [0x1956850] (1514 bytes) sub_1956850
// uint32_t *sub_1956850(int a1, int a2);
// [0x1956e40] (330 bytes) sub_1956E40
// uint32_t *sub_1956E40(int a1, int a2);
// [0x1956f90] (296 bytes) sub_1956F90
// uint32_t *sub_1956F90(uint32_t *a1);
// [0x19570c0] (1095 bytes) sub_19570C0
// uint32_t *sub_19570C0(uint32_t *a1);
// [0x1957510] (259 bytes) sub_1957510
// uint32_t *sub_1957510(uint32_t *a1);
// [0x1957620] (155 bytes) sub_1957620
// uint32_t *sub_1957620(uint32_t *a1);
// [0x19576c0] (1037 bytes) sub_19576C0
// uint32_t *sub_19576C0(int a1);
// [0x1957ad0] (169 bytes) sub_1957AD0
// size_t sub_1957AD0(int a1, const char *s);
// [0x1957b80] (11619 bytes) sub_1957B80
// char sub_1957B80(int a1, int a2, int a3);
// [0x195a8f0] (43 bytes) sub_195A8F0
// char sub_195A8F0(int a1, int a2);
// [0x195a920] (217 bytes) sub_195A920
// char sub_195A920(int a1, uint32_t *a2);
// [0x195aa00] (1680 bytes) sub_195AA00
// char sub_195AA00(int a1, uint32_t *a2);
// [0x195b090] (768 bytes) sub_195B090
// int sub_195B090(int a1, int *a2, int **a3);
// [0x195b390] (987 bytes) sub_195B390
// char sub_195B390(int a1, int **a2, int a3);
// [0x195b770] (681 bytes) sub_195B770
// int sub_195B770(int a1, int *a2, int *a3);
// [0x195ba20] (504 bytes) sub_195BA20
// int sub_195BA20(int a1, int *a2);
// [0x195bc20] (240 bytes) sub_195BC20
// char sub_195BC20(int a1, uint32_t *a2);
// [0x195bd10] (775 bytes) sub_195BD10
// bool sub_195BD10(char *a1, void (*a2)(uint8_t *, int, int), int a3);
// [0x195c020] (357 bytes) __cxa_demangle
// char *_cxa_demangle(const char *lpmangled, char *lpout, size_t *lpoutlen, int *lpstatus);
// [0x195c190] (55 bytes) __gcclibcxx_demangle_callback
// unsigned int _gcclibcxx_demangle_callback(char *a1, void (*a2)(uint8_t *, int, int), int a3);
// [0x195c1d0] (60 bytes) __cxa_current_exception_type
// type_info *_cxa_current_exception_type();
// [0x195c20c] (59 bytes) __popcountsi2
// int _popcountsi2(unsigned int a1);
// [0x195c248] (106 bytes) __fixunssfdi
// int _fixunssfdi(float a1);
// [0x195c2b4] (106 bytes) __fixunsdfdi
// int _fixunsdfdi(double a1);
// [0x195c320] (349 bytes) __divdi3
// int64_t _divdi3(int64_t a1, int64_t a2);
// [0x195c480] (394 bytes) __moddi3
// int _moddi3(int64_t a1, int64_t a2);
// [0x195c60c] (261 bytes) __udivdi3
// unsigned int _udivdi3(uint64_t a1, unsigned int a2, unsigned int a3);
// [0x195c714] (272 bytes) __umoddi3
// int _umoddi3(uint64_t a1, int64_t a2);
// [0x195c824] (49 bytes) sub_195C824
// char *sub_195C824(char *result, uint32_t *a2);
// [0x195c855] (76 bytes) sub_195C855
// char *sub_195C855(char *result, int *a2);
// [0x195c8a1] (54 bytes) sub_195C8A1
// int sub_195C8A1(int a1, int a2, int a3, uint32_t *a4);
// [0x195c8d7] (128 bytes) sub_195C8D7
// void sub_195C8D7();
// [0x195c957] (78 bytes) _Unwind_GetGR
// int Unwind_GetGR(int a1, int a2);
// [0x195c9a5] (238 bytes) sub_195C9A5
// int sub_195C9A5(int a1, int a2);
// [0x195ca93] (11 bytes) _Unwind_GetCFA
// int Unwind_GetCFA(int a1);
// [0x195ca9e] (88 bytes) _Unwind_SetGR
// uint32_t *Unwind_SetGR(int a1, int a2, int a3);
// [0x195caf6] (11 bytes) _Unwind_GetIP
// int Unwind_GetIP(int a1);
// [0x195cb01] (22 bytes) _Unwind_GetIPInfo
// int Unwind_GetIPInfo(int a1, uint32_t *a2);
// [0x195cb17] (14 bytes) _Unwind_SetIP
// int Unwind_SetIP(int a1, int a2);
// [0x195cb25] (11 bytes) _Unwind_GetLanguageSpecificData
// int Unwind_GetLanguageSpecificData(int a1);
// [0x195cb30] (11 bytes) _Unwind_GetRegionStart
// int Unwind_GetRegionStart(int a1);
// [0x195cb3b] (51 bytes) _Unwind_FindEnclosingFunction
// int Unwind_FindEnclosingFunction(int a1);
// [0x195cb6e] (11 bytes) _Unwind_GetDataRelBase
// int Unwind_GetDataRelBase(int a1);
// [0x195cb79] (11 bytes) _Unwind_GetTextRelBase
// int Unwind_GetTextRelBase(int a1);
// [0x195cb84] (266 bytes) sub_195CB84
// char *sub_195CB84(int a1, char a2, char *a3, int *a4);
// [0x195cc8e] (1553 bytes) sub_195CC8E
// int sub_195CC8E(char *a1, unsigned int a2, int a3, int a4);
// [0x195d29f] (640 bytes) sub_195D29F
// int sub_195D29F(int a1, int a2);
// [0x195d51f] (75 bytes) sub_195D51F
// int sub_195D51F(int a1, int a2);
// [0x195d56a] (1151 bytes) sub_195D56A
// char *sub_195D56A(char *a1, unsigned int a2, uint32_t *a3, int a4);
// [0x195d9e9] (678 bytes) sub_195D9E9
// int sub_195D9E9(uint32_t *a1, int a2);
// [0x195dc8f] (194 bytes) sub_195DC8F
// int sub_195DC8F(uint32_t *a1, int a2, int a3);
// [0x195dd51] (190 bytes) sub_195DD51
// int sub_195DD51(uint32_t *a1, uint32_t *a2);
// [0x195de0f] (179 bytes) sub_195DE0F
// int sub_195DE0F(uint32_t *a1, uint32_t *a2);
// [0x195dec2] (189 bytes) __frame_state_for
// int _frame_state_for(int a1, int a2);
// [0x195df7f] (5 bytes) sub_195DF7F
// void sub_195DF7F();
// [0x195df84] (342 bytes) _Unwind_RaiseException
// int Unwind_RaiseException(int a1, int a2, uint32_t *a3);
// [0x195e0da] (172 bytes) _Unwind_ForcedUnwind
// int Unwind_ForcedUnwind(int a1, int a2, uint32_t *a3, int a4, int a5);
// [0x195e186] (168 bytes) _Unwind_Resume
// void __noreturn Unwind_Resume(int a1, int a2, uint32_t *a3);
// [0x195e22e] (194 bytes) _Unwind_Resume_or_Rethrow
// void __noreturn Unwind_Resume_or_Rethrow(int a1, int a2, uint32_t *a3);
// [0x195e2f0] (29 bytes) _Unwind_DeleteException
// int (*Unwind_DeleteException(int a1))(int, int, int, int);
// [0x195e30d] (129 bytes) _Unwind_Backtrace
// int Unwind_Backtrace(int (*a1)(uint32_t *, int, int, int), int a2);
// [0x195e390] (37 bytes) sub_195E390
// int sub_195E390(int a1, int a2, int a3);
// [0x195e3b5] (140 bytes) sub_195E3B5
// int sub_195E3B5( int result, int (*a2)(int, int, uint32_t, int), int a3, int a4, int a5);
// [0x195e441] (117 bytes) sub_195E441
// int sub_195E441(int a1, int (*a2)(int, int, uint32_t, int), int a3);
// [0x195e4b6] (80 bytes) sub_195E4B6
// int sub_195E4B6(char a1);
// [0x195e506] (72 bytes) sub_195E506
// int sub_195E506(char a1, int a2);
// [0x195e54e] (257 bytes) sub_195E54E
// uint16_t *sub_195E54E( char a1, uint16_t *a2, uint16_t *a3, unsigned int *a4);
// [0x195e64f] (196 bytes) sub_195E64F
// int sub_195E64F(int a1);
// [0x195e713] (17 bytes) sub_195E713
// int sub_195E713(int a1);
// [0x195e724] (287 bytes) sub_195E724
// int sub_195E724(uint32_t *a1, int a2);
// [0x195e843] (227 bytes) sub_195E843
// int sub_195E843(int a1, int *a2, int a3);
// [0x195e926] (126 bytes) sub_195E926
// int sub_195E926(int a1, int a2, int a3);
// [0x195e9a4] (126 bytes) sub_195E9A4
// int sub_195E9A4(int a1, int a2, int a3);
// [0x195ea22] (256 bytes) sub_195EA22
// int sub_195EA22(int a1, int a2, int a3);
// [0x195eb22] (72 bytes) sub_195EB22
// int sub_195EB22(char a1, int a2);
// [0x195eb6a] (1171 bytes) sub_195EB6A
// int sub_195EB6A(int *a1, unsigned int a2, unsigned int *a3);
// [0x195effd] (1279 bytes) sub_195EFFD
// int sub_195EFFD(int a1, unsigned int a2);
// [0x195f4fc] (119 bytes) __register_frame_info_bases
// int _register_frame_info_bases(uint32_t *a1, uint32_t *a2, int a3, int a4);
// [0x195f573] (39 bytes) __register_frame_info
// int _register_frame_info(uint32_t *a1, uint32_t *a2);
// [0x195f59a] (53 bytes) __register_frame
// void _register_frame(uint32_t *a1);
// [0x195f5cf] (111 bytes) __register_frame_info_table_bases
// int _register_frame_info_table_bases(int a1, uint32_t *a2, int a3, int a4);
// [0x195f63e] (39 bytes) __register_frame_info_table
// int _register_frame_info_table(int a1, uint32_t *a2);
// [0x195f665] (45 bytes) __register_frame_table
// int _register_frame_table(int a1);
// [0x195f692] (197 bytes) __deregister_frame_info_bases
// int _deregister_frame_info_bases(uint32_t *a1);
// [0x195f757] (32 bytes) __deregister_frame_info
// int _deregister_frame_info(uint32_t *a1);
// [0x195f777] (49 bytes) __deregister_frame
// void _deregister_frame(uint32_t *a1);
// [0x195f7a8] (358 bytes) _Unwind_Find_FDE
// int Unwind_Find_FDE(unsigned int a1, uint32_t *a2);
// [0x195f910] (366 bytes) sub_195F910
// uint16_t *sub_195F910(int a1, char a2, uint16_t *a3, unsigned int *a4);
// [0x195fa7e] (442 bytes) __gcc_personality_v0
// int _gcc_personality_v0(int a1, char a2, int a3, int a4, int a5, int a6);
// [0x195fc38] (55 bytes) sub_195FC38
// int sub_195FC38();
// [0x195fc6f] (81 bytes) sub_195FC6F
// void sub_195FC6F(int *ptr);
// [0x195fcc0] (414 bytes) __emutls_get_address
// uint32_t *_emutls_get_address(unsigned int *a1);
// [0x195fe5e] (51 bytes) __emutls_register_common
// unsigned int *_emutls_register_common(unsigned int *a1, unsigned int a2, unsigned int a3, unsigned int a4);
// [0x195fea0] (593 bytes) sub_195FEA0
// void sub_195FEA0();
// [0x1960100] (952 bytes) sub_1960100
// void sub_1960100(int a1, uint32_t *a2);
// [0x19604c0] (235 bytes) sub_19604C0
// char *sub_19604C0(int a1, void **a2);
// [0x19605b8] (1 bytes) nullsub_871
// void nullsub_871();
// [0x19605c0] (9 bytes) Java_com_gameloft_android_GAND_GloftGGSS_PopUpsBridgeClass_nativeOnErrorMessage
// void Java_com_gameloft_android_GAND_GloftGGSS_PopUpsBridgeClass_nativeOnErrorMessage();
// [0x19605d0] (159 bytes) Java_com_gameloft_android_GAND_GloftGGSS_PopUpsBridgeClass_nativeOnViewState
// void Java_com_gameloft_android_GAND_GloftGGSS_PopUpsBridgeClass_nativeOnViewState(int a1, int a2, int a3);
// [0x1960670] (274 bytes) sub_1960670
// pthread_mutex_t **sub_1960670(int a1);
// [0x1960798] (1 bytes) nullsub_872
// void nullsub_872();
// [0x19607a0] (744 bytes) sub_19607A0
// uint8_t *sub_19607A0(uint8_t *a1);
// [0x1960a90] (277 bytes) sub_1960A90
// bool sub_1960A90(int a1, size_t **a2);
// [0x1960bb0] (22 bytes) sub_1960BB0
// int sub_1960BB0();
// [0x1960bd0] (118 bytes) sub_1960BD0
// int sub_1960BD0(int a1);
// [0x1960c50] (60 bytes) sub_1960C50
// size_t **sub_1960C50(size_t **a1, int a2, int a3, size_t **a4);
// [0x1960c90] (596 bytes) sub_1960C90
// int sub_1960C90(int a1, Json::Value *a2);
// [0x1960ef0] (465 bytes) sub_1960EF0
// Json::Value *sub_1960EF0(Json::Value *a1, int a2);
// [0x19610d0] (156 bytes) sub_19610D0
// int sub_19610D0(int a1, uint32_t *a2);
// [0x1961170] (156 bytes) sub_1961170
// int sub_1961170(int a1, uint32_t *a2);
// [0x1961210] (312 bytes) sub_1961210
// int sub_1961210(int a1, uint32_t *a2, int a3);
// [0x1961350] (1426 bytes) sub_1961350
// size_t **sub_1961350(size_t **a1, uint8_t a2);
// [0x19618f0] (1373 bytes) sub_19618F0
// size_t **sub_19618F0(size_t **a1, int *a2, int a3);
// [0x19623b0] (759 bytes) sub_19623B0
// size_t **sub_19623B0(size_t **a1, int a2, Json::Value *a3, int a4);
// [0x1962750] (281 bytes) sub_1962750
// int sub_1962750(int a1, int a2);
// [0x1962870] (52 bytes) sub_1962870
// int sub_1962870(int a1, int a2);
// [0x19628b0] (784 bytes) sub_19628B0
// int sub_19628B0(int a1);
// [0x1962be8] (1 bytes) nullsub_873
// void nullsub_873();
// [0x1962bf0] (43 bytes) sub_1962BF0
// int sub_1962BF0(int a1, int a2);
// [0x1962c20] (22 bytes) sub_1962C20
// void *sub_1962C20();
// [0x1962c40] (95 bytes) sub_1962C40
// int sub_1962C40(int a1, int a2, char a3);
// [0x1962ca0] (98 bytes) sub_1962CA0
// int sub_1962CA0(int a1, int a2, char a3);
// [0x1962d10] (39 bytes) sub_1962D10
// int sub_1962D10(int a1, int a2);
// [0x1962d40] (728 bytes) sub_1962D40
// int sub_1962D40();
// [0x1963020] (9 bytes) sub_1963020
// void sub_1963020();
// [0x1963030] (159 bytes) sub_1963030
// void sub_1963030(int a1);
// [0x19630d0] (128 bytes) sub_19630D0
// int sub_19630D0(uint32_t *a1);
// [0x1963150] (200 bytes) sub_1963150
// size_t **sub_1963150(size_t **a1, const void **a2);
// [0x1963250] (380 bytes) sub_1963250
// void sub_1963250(int a1);
// [0x19633d0] (913 bytes) sub_19633D0
// void sub_19633D0(size_t **a1, int a2, size_t **a3);
// [0x1963770] (138 bytes) sub_1963770
// void sub_1963770(int a1, int a2);
// [0x19639d0] (42 bytes) sub_19639D0
// int sub_19639D0(int a1, int a2);
// [0x1963a00] (34 bytes) sub_1963A00
// int sub_1963A00(int a1, int a2);
// [0x1963a30] (85 bytes) sub_1963A30
// int sub_1963A30(int a1);
// [0x1963a90] (132 bytes) sub_1963A90
// int sub_1963A90(int a1, const void **a2);
// [0x1963b20] (309 bytes) sub_1963B20
// bool sub_1963B20(int a1, uint8_t **a2);
// [0x1963c60] (86 bytes) sub_1963C60
// int sub_1963C60(int a1, int a2);
// [0x1963cc0] (86 bytes) sub_1963CC0
// int sub_1963CC0(int a1, int a2);
// [0x1963d20] (1415 bytes) sub_1963D20
// int sub_1963D20(int a1, void **a2);
// [0x19642b0] (759 bytes) sub_19642B0
// void sub_19642B0(uint32_t *a1);
// [0x19645b0] (762 bytes) sub_19645B0
// void sub_19645B0();
// [0x19648b0] (1397 bytes) sub_19648B0
// bool sub_19648B0(size_t **a1);
// [0x1964e30] (4350 bytes) sub_1964E30
// int sub_1964E30(int a1, size_t **a2, Json::Value *a3, glwebtools::Mutex *a4, int a5, int a6);
// [0x1966c10] (833 bytes) sub_1966C10
// size_t **sub_1966C10(size_t **a1, int a2);
// [0x1967340] (2371 bytes) Java_com_gameloft_android_GAND_GloftGGSS_PopUpsBridgeClass_nativeOnAssetTracking
// int Java_com_gameloft_android_GAND_GloftGGSS_PopUpsBridgeClass_nativeOnAssetTracking(int a1, int a2, int a3);
// [0x1967c90] (1492 bytes) sub_1967C90
// int sub_1967C90(int a1, unsigned int *a2);
// [0x19684f0] (1064 bytes) sub_19684F0
// void sub_19684F0(int a1);
// [0x1968928] (1 bytes) nullsub_874
// void nullsub_874();
// [0x1968960] (564 bytes) sub_1968960
// int *sub_1968960(int *a1, int *a2);
// [0x1968ba0] (1617 bytes) sub_1968BA0
// int sub_1968BA0(int a1, int a2, int *a3);
// [0x1969200] (468 bytes) sub_1969200
// const char *sub_1969200();
// [0x19693e0] (391 bytes) sub_19693E0
// void sub_19693E0(char *a1);
// [0x1969570] (383 bytes) sub_1969570
// void sub_1969570(int a1);
// [0x19696f0] (352 bytes) sub_19696F0
// int sub_19696F0(const void **a1);
// [0x1969850] (220 bytes) sub_1969850
// pthread_mutex_t **sub_1969850(int a1);
// [0x1969930] (264 bytes) sub_1969930
// pthread_mutex_t **sub_1969930();
// [0x1969a40] (22 bytes) sub_1969A40
// int sub_1969A40();
// [0x1969a70] (209 bytes) sub_1969A70
// int sub_1969A70(uint32_t *a1, const void **a2);
// [0x1969b50] (50 bytes) sub_1969B50
// int sub_1969B50();
// [0x1969b90] (415 bytes) sub_1969B90
// bool sub_1969B90(char *a1);
// [0x1969d30] (295 bytes) sub_1969D30
// int sub_1969D30(int a1);
// [0x1969e60] (387 bytes) sub_1969E60
// int sub_1969E60(const void **a1);
// [0x1969ff0] (440 bytes) sub_1969FF0
// int sub_1969FF0(const void **a1);
// [0x196a1b0] (2354 bytes) sub_196A1B0
// size_t **sub_196A1B0(size_t **a1, uint8_t **a2);
// [0x196aaf0] (253 bytes) sub_196AAF0
// int sub_196AAF0(int a1, size_t **a2);
// [0x196abf0] (1340 bytes) sub_196ABF0
// int sub_196ABF0(uint8_t **a1, int *a2);
// [0x196b130] (377 bytes) sub_196B130
// bool sub_196B130(uint8_t **a1);
// [0x196b2b0] (358 bytes) sub_196B2B0
// size_t **sub_196B2B0(size_t **a1, uint8_t **a2, char a3);
// [0x196b420] (100 bytes) sub_196B420
// uint32_t *sub_196B420(int a1, size_t **a2);
// [0x196b490] (105 bytes) sub_196B490
// size_t *sub_196B490(int a1, int a2);
// [0x196b500] (134 bytes) sub_196B500
// void sub_196B500(int a1);
// [0x196b590] (107 bytes) sub_196B590
// int sub_196B590(int a1, int a2);
// [0x196b600] (153 bytes) sub_196B600
// int *sub_196B600(char *a1);
// [0x196b6a0] (117 bytes) sub_196B6A0
// void sub_196B6A0(int a1);
// [0x196b720] (935 bytes) sub_196B720
// void sub_196B720(uint32_t *a1);
// [0x196c170] (619 bytes) sub_196C170
// void sub_196C170(uint32_t *a1, const void **a2);
// [0x196c3e0] (2359 bytes) sub_196C3E0
// void sub_196C3E0(int a1, int a2, uint32_t *a3);
// [0x196cd20] (617 bytes) sub_196CD20
// int *sub_196CD20(int a1);
// [0x196cf90] (391 bytes) sub_196CF90
// int sub_196CF90(int a1, const void **a2);
// [0x196d120] (2802 bytes) sub_196D120
// void sub_196D120(int a1);
// [0x196dc20] (9215 bytes) sub_196DC20
// void sub_196DC20(int a1);
// [0x1970020] (86 bytes) sub_1970020
// void __noreturn sub_1970020();
// [0x19702c0] (4678 bytes) sub_19702C0
// int sub_19702C0(int a1, const void **a2, size_t *a3);
// [0x1971510] (276 bytes) sub_1971510
// const char *sub_1971510();
// [0x1971630] (630 bytes) sub_1971630
// void sub_1971630(int *a1, size_t **a2, size_t **a3);
// [0x19718b0] (61 bytes) sub_19718B0
// char sub_19718B0(char *name);
// [0x19718f0] (192 bytes) sub_19718F0
// int *sub_19718F0(const void **a1);
// [0x19719b0] (836 bytes) sub_19719B0
// void sub_19719B0(int *a1, char *s, int *a3);
// [0x1971d00] (52 bytes) sub_1971D00
// void sub_1971D00(int *a1, uint8_t a2, int *a3);
// [0x1971d40] (618 bytes) sub_1971D40
// int sub_1971D40(size_t **a1, int *a2);
// [0x1971fb0] (1710 bytes) sub_1971FB0
// size_t **sub_1971FB0(size_t **a1);
// [0x1972660] (111 bytes) sub_1972660
// uint8_t *sub_1972660(const void **a1);
// [0x1972700] (49 bytes) sub_1972700
// void sub_1972700(int *a1, int *a2);
// [0x1972740] (53 bytes) sub_1972740
// int16_t sub_1972740(uint8_t *a1);
// [0x1972780] (53 bytes) sub_1972780
// int16_t sub_1972780(uint8_t **a1);
// [0x19727c0] (2054 bytes) sub_19727C0
// int sub_19727C0(const char **a1, size_t **a2);
// [0x1972fd0] (6001 bytes) sub_1972FD0
// int sub_1972FD0(int a1, __m128i *a2, uint32_t *a3, int a4, unsigned int a5);
// [0x1974750] (175 bytes) sub_1974750
// int sub_1974750(char *s1, char *s2, unsigned int a3);
// [0x1974800] (3216 bytes) sub_1974800
// char *sub_1974800( int a1, int a2, int a3, int a4, int a5, int a6, int a7, uint8_t a8, __int128 a9, int (*a10)(int, int, unsigned int, int), void (*a11)(int, int), int (*a12)(int, int), int a13, int a14, int a15, int a16, unsigned int a17, int a18, int a19, int a20, unsigned int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46);
// [0x1975490] (3143 bytes) sub_1975490
// char *sub_1975490( int a1, int a2, int a3, int a4, int a5, int a6, const void *a7, uint8_t a8, int a9, int a10, int a11, int a12, int (*a13)(int, int, char *, int), int a14, int (*a15)(int, int), int (*a16)(int, int, unsigned int, int), void (*a17)(int, int), int (*a18)(int, int), int a19, int a20, int a21, int a22, unsigned int a23, int a24, int a25, int a26, unsigned int a27, char *a28, char *a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52);
// [0x19760e0] (164 bytes) sub_19760E0
// int sub_19760E0(uint32_t *a1);
// [0x1976190] (55 bytes) sub_1976190
// int sub_1976190(int a1, uint32_t *a2);
// [0x19761d0] (6880 bytes) sub_19761D0
// int sub_19761D0(int a1, __m128i *a2, int a3, unsigned int a4, int a5, unsigned int a6, int a7, unsigned int a8);
// [0x1977cb0] (87 bytes) sub_1977CB0
// int sub_1977CB0(int a1);
// [0x1977d10] (125 bytes) sub_1977D10
// int sub_1977D10(int a1);
// [0x1977d90] (626 bytes) sub_1977D90
// int sub_1977D90(int a1, char *s, unsigned int a3);
// [0x1978050] (95 bytes) sub_1978050
// int sub_1978050(int a1, uint32_t *a2);
// [0x19780b0] (4503 bytes) sub_19780B0
// int sub_19780B0(int a1, uint32_t *a2, uint32_t *a3, int a4, char *a5);
// [0x1979250] (53 bytes) sub_1979250
// int sub_1979250(int a1);
// [0x1979290] (53 bytes) sub_1979290
// int sub_1979290(int a1, char *a2);
// [0x19792d0] (53 bytes) sub_19792D0
// int sub_19792D0(int a1, uint32_t *a2, uint32_t *a3, int a4);
// [0x1979310] (878 bytes) sub_1979310
// int sub_1979310(uint32_t *a1, int a2, unsigned int a3);
// [0x19796e0] (191 bytes) sub_19796E0
// int sub_19796E0(int a1, int a2, unsigned int a3);
// [0x19797a0] (199 bytes) sub_19797A0
// int sub_19797A0(int a1);
// [0x1979870] (196 bytes) sub_1979870
// int sub_1979870(int a1, uint8_t *a2, unsigned int a3);
// [0x1979970] (87 bytes) sub_1979970
// int sub_1979970(int a1, int a2);
// [0x1979a00] (24 bytes) sub_1979A00
// uint32_t *sub_1979A00(uint32_t *a1);
// [0x1979a20] (24 bytes) sub_1979A20
// uint32_t *sub_1979A20(uint32_t *a1);
// [0x1979a40] (24 bytes) sub_1979A40
// uint32_t *sub_1979A40(uint32_t *a1);
// [0x1979a60] (28 bytes) sub_1979A60
// int sub_1979A60(int a1);
// [0x1979a80] (9 bytes) sub_1979A80
// int sub_1979A80();
// [0x1979a90] (9 bytes) sub_1979A90
// int sub_1979A90();
// [0x1979aa0] (28 bytes) sub_1979AA0
// int sub_1979AA0(int a1);
// [0x1979ac0] (9 bytes) sub_1979AC0
// int sub_1979AC0();
// [0x1979ad0] (9 bytes) sub_1979AD0
// int sub_1979AD0();
// [0x1979ae0] (28 bytes) sub_1979AE0
// int sub_1979AE0(int a1);
// [0x1979b00] (9 bytes) sub_1979B00
// int sub_1979B00();
// [0x1979b10] (9 bytes) sub_1979B10
// int sub_1979B10();
// [0x1979b20] (42 bytes) sub_1979B20
// void sub_1979B20(uint32_t *a1);
// [0x1979b50] (42 bytes) sub_1979B50
// void sub_1979B50(uint32_t *a1);
// [0x1979b80] (42 bytes) sub_1979B80
// void sub_1979B80(uint32_t *a1);
// [0x1979bb0] (42 bytes) sub_1979BB0
// void sub_1979BB0(glotv3::Event *a1);
// [0x1979be0] (42 bytes) sub_1979BE0
// void sub_1979BE0(glotv3::Event *a1);
// [0x1979c10] (42 bytes) sub_1979C10
// void sub_1979C10(glotv3::Event *a1);
// [0x1979c40] (64 bytes) sub_1979C40
// void sub_1979C40(glotv3::Event *a1);
// [0x1979c80] (64 bytes) sub_1979C80
// void sub_1979C80(glotv3::Event *a1);
// [0x1979cc0] (64 bytes) sub_1979CC0
// void sub_1979CC0(glotv3::Event *a1);
// [0x1979d00] (1374 bytes) sub_1979D00
// void sub_1979D00(glotv3::Event *a1, uint8_t *a2);
// [0x197a260] (1307 bytes) sub_197A260
// void sub_197A260(glotv3::Event *a1, int a2);
// [0x197a780] (1414 bytes) sub_197A780
// void sub_197A780(glotv3::Event *a1, int a2);
// [0x197ad10] (418 bytes) sub_197AD10
// int sub_197AD10(int a1);
// [0x197aec0] (418 bytes) sub_197AEC0
// int sub_197AEC0(int a1);
// [0x197b070] (418 bytes) sub_197B070
// int sub_197B070(uint8_t *a1);
// [0x197b220] (801 bytes) sub_197B220
// int *sub_197B220();
// [0x197b550] (389 bytes) sub_197B550
// void sub_197B550(int a1, uint8_t **a2);
// [0x197b6e0] (391 bytes) sub_197B6E0
// int sub_197B6E0(int a1, int a2, uint8_t **a3);
// [0x197b870] (141 bytes) sub_197B870
// void sub_197B870(int a1, DataSharing **a2, uint8_t **a3);
// [0x197b900] (131 bytes) sub_197B900
// void sub_197B900(int a1, uint8_t **a2);
// [0x197b990] (161 bytes) sub_197B990
// size_t **sub_197B990(size_t **a1, int a2, DataSharing **a3);
// [0x197ba40] (46 bytes) sub_197BA40
// int sub_197BA40(int a1, DataSharing **a2, DataSharing **a3);
// [0x197ba70] (36 bytes) sub_197BA70
// int sub_197BA70(int a1, DataSharing **a2);
// [0x197be40] (911 bytes) sub_197BE40
// uint32_t *sub_197BE40(uint32_t *a1, int a2);
// [0x197c1d0] (30 bytes) sub_197C1D0
// uint32_t *sub_197C1D0(uint32_t *a1);
// [0x197c1f0] (1158 bytes) sub_197C1F0
// void sub_197C1F0(int a1, const void **a2);
// [0x197c676] (86 bytes) sub_197C676
// void __noreturn sub_197C676();
// [0x197c6d0] (4910 bytes) sub_197C6D0
// int sub_197C6D0(int a1, const void **a2, size_t *a3);
// [0x197da00] (2091 bytes) std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_copy(std::_Rb_tree_node<std::string> const*,std::_Rb_tree_node<std::string>*)
// int std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_copy( int a1, int a2, int a3);
// [0x197e230] (228 bytes) sub_197E230
// const char *sub_197E230();
// [0x197e320] (249 bytes) sub_197E320
// int sub_197E320(int a1, int a2, int a3, int a4);
// [0x197e4a0] (89 bytes) sub_197E4A0
// bool sub_197E4A0(float *a1, int a2, int a3);
// [0x197e500] (105 bytes) sub_197E500
// int sub_197E500(Json::Value *a1, const char **a2);
// [0x197e570] (97 bytes) sub_197E570
// void sub_197E570();
// [0x197e5e0] (1471 bytes) sub_197E5E0
// Json::Value *sub_197E5E0(Json::Value *a1, char **a2);
// [0x197eba0] (1667 bytes) sub_197EBA0
// int sub_197EBA0(int a1, const char **a2);
// [0x197f230] (4438 bytes) sub_197F230
// uint8_t *sub_197F230(uint8_t *a1, const char **a2);
// [0x1980390] (4624 bytes) sub_1980390
// uint8_t *sub_1980390(uint8_t *a1, int a2);
// [0x19815a0] (470 bytes) sub_19815A0
// int sub_19815A0();
// [0x1981780] (15 bytes) sub_1981780
// bool sub_1981780(int a1, int a2);
// [0x1981790] (34 bytes) sub_1981790
// int sub_1981790(int a1, FILE *stream);
// [0x19817c0] (111 bytes) sub_19817C0
// int sub_19817C0(int a1, FILE *stream, int off, int a4);
// [0x1981830] (34 bytes) sub_1981830
// int sub_1981830(int a1, FILE *stream);
// [0x1981860] (58 bytes) sub_1981860
// size_t sub_1981860(int a1, FILE *s, void *ptr, size_t n);
// [0x19818a0] (58 bytes) sub_19818A0
// size_t sub_19818A0(int a1, FILE *stream, void *ptr, size_t n);
// [0x19818e0] (112 bytes) sub_19818E0
// FILE *sub_19818E0(int a1, const char *filename, char a3);
// [0x1981950] (85 bytes) sub_1981950
// FILE *(**sub_1981950( FILE *(**a1)(int a1, const char *filename, char a3)))(int a1, const char *filename, char a3);
// [0x1981e40] (22 bytes) OPENSSL_ia32cap_loc
// void *OPENSSL_ia32cap_loc();
// [0x1981e60] (9 bytes) OPENSSL_cpuid_setup
// void OPENSSL_cpuid_setup();
// [0x1981e70] (57 bytes) OPENSSL_showfatal
// int OPENSSL_showfatal(char *format, ...);
// [0x1981eb0] (9 bytes) OPENSSL_isservice
// int OPENSSL_isservice();
// [0x1981ec0] (59 bytes) OpenSSLDie
// void __noreturn OpenSSLDie(const char *a1, int a2, const char *a3);
