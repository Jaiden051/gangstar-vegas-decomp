#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_collide.h
// Library: havok | Module: havok_collide
// Binary Address Span: 0x1591960 .. 0x1aafbd0 (520 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1591960] (22 bytes) hkcdPlanarCsgOperand::GeomSource::staticClass(void)
// void *hkcdPlanarCsgOperand::GeomSource::staticClass();
// [0x1591980] (22 bytes) hkcdPlanarCsgOperand::staticClass(void)
// void *hkcdPlanarCsgOperand::staticClass();
// [0x1591bc0] (22 bytes) hkcdPlanarGeometryPolygonCollection::staticClass(void)
// void *hkcdPlanarGeometryPolygonCollection::staticClass();
// [0x1591cc0] (18 bytes) hkcdOperandImpl::SrcPoly::less(hkcdOperandImpl::SrcPoly const&,hkcdOperandImpl::SrcPoly const&)
// bool hkcdOperandImpl::SrcPoly::less(hkcdOperandImpl::SrcPoly *this, const hkcdOperandImpl::SrcPoly *a2);
// [0x1591d00] (106 bytes) hkcdPlanarGeometryPrimitives::Collection<28>::~Collection()
// void hkcdPlanarGeometryPrimitives::Collection<28>::~Collection( hkcdPlanarGeometryPrimitives::Collection<28> *this);
// [0x1591d70] (106 bytes) hkcdConvexCellsCollection::~hkcdConvexCellsCollection()
// void hkcdConvexCellsCollection::~hkcdConvexCellsCollection(hkcdConvexCellsCollection *this);
// [0x1591de0] (163 bytes) hkcdPlanarGeometryPrimitives::Collection<28>::~Collection()
// void hkcdPlanarGeometryPrimitives::Collection<28>::~Collection( hkcdPlanarGeometryPrimitives::Collection<28> *this);
// [0x1591e90] (163 bytes) hkcdConvexCellsCollection::~hkcdConvexCellsCollection()
// void hkcdConvexCellsCollection::~hkcdConvexCellsCollection(hkcdConvexCellsCollection *this);
// [0x1591f40] (745 bytes) hkcdPlanarSolid::ArrayMgr::~ArrayMgr()
// void hkcdPlanarSolid::ArrayMgr::~ArrayMgr(hkcdPlanarSolid::ArrayMgr *this);
// [0x1592230] (793 bytes) hkcdPlanarSolid::ArrayMgr::~ArrayMgr()
// void hkcdPlanarSolid::ArrayMgr::~ArrayMgr(hkcdPlanarSolid::ArrayMgr *this);
// [0x1592550] (83 bytes) hkcdPlanarCsgOperand::hkcdPlanarCsgOperand(void)
// void hkcdPlanarCsgOperand::hkcdPlanarCsgOperand(hkcdPlanarCsgOperand *this);
// [0x15925b0] (34 bytes) hkcdPlanarCsgOperand::hkcdPlanarCsgOperand(hkFinishLoadedObjectFlag)
// uint32_t *hkcdPlanarCsgOperand::hkcdPlanarCsgOperand(uint32_t *a1);
// [0x15925e0] (32 bytes) hkcdPlanarCsgOperand::GeomSource::GeomSource(void)
// hkcdPlanarCsgOperand::GeomSource *hkcdPlanarCsgOperand::GeomSource::GeomSource( hkcdPlanarCsgOperand::GeomSource *this);
// [0x1592600] (100 bytes) hkcdPlanarCsgOperand::GeomSource::GeomSource(hkcdPlanarCsgOperand const&,int)
// hkcdPlanarCsgOperand::GeomSource *hkcdPlanarCsgOperand::GeomSource::GeomSource( hkcdPlanarCsgOperand::GeomSource *this, const hkcdPlanarCsgOperand *a2, int a3);
// [0x1592670] (9 bytes) hkcdPlanarCsgOperand::GeomSource::GeomSource(hkFinishLoadedObjectFlag)
// void hkcdPlanarCsgOperand::GeomSource::GeomSource();
// [0x1592680] (94 bytes) hkcdPlanarCsgOperand::GeomSource::~GeomSource()
// void hkcdPlanarCsgOperand::GeomSource::~GeomSource(hkcdPlanarCsgOperand::GeomSource *this);
// [0x15926e0] (661 bytes) hkcdPlanarCsgOperand::~hkcdPlanarCsgOperand()
// void hkcdPlanarCsgOperand::~hkcdPlanarCsgOperand(hkcdPlanarCsgOperand *this);
// [0x1592980] (93 bytes) hkcdPlanarCsgOperand::~hkcdPlanarCsgOperand()
// void hkcdPlanarCsgOperand::~hkcdPlanarCsgOperand(hkcdPlanarCsgOperand *this);
// [0x15929e0] (370 bytes) hkcdPlanarCsgOperand::getOrCreateConvexCellTree(bool,bool)
// int hkcdPlanarCsgOperand::getOrCreateConvexCellTree(hkcdPlanarCsgOperand *this, bool a2, bool a3);
// [0x1592b60] (143 bytes) hkcdPlanarCsgOperand::setPlanesCollection(hkcdPlanarGeometryPlanesCollection const*,int const*)
// int hkcdPlanarCsgOperand::setPlanesCollection( hkcdPlanarCsgOperand *this, const hkcdPlanarGeometryPlanesCollection *a2, int *a3);
// [0x1592bf0] (113 bytes) hkcdPlanarCsgOperand::shiftPlaneIds(int)
// int hkcdPlanarCsgOperand::shiftPlaneIds(hkcdPlanarCsgOperand *this, int a2);
// [0x1592c70] (47 bytes) hkcdPlanarCsgOperand::getPlanesCollection(void)const
// int hkcdPlanarCsgOperand::getPlanesCollection(hkcdPlanarCsgOperand *this);
// [0x1592ca0] (661 bytes) hkcdPlanarCsgOperand::buildFinalGeometry(hkRefPtr<hkcdPlanarGeometry> &)
// volatile int32_t *hkcdPlanarCsgOperand::buildFinalGeometry( volatile int32_t **a1, volatile int32_t **a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);
// [0x1592f40] (1977 bytes) hkcdPlanarCsgOperand::createOperandWithSharedDataAndClonedPlanes(hkcdPlanarCsgOperand const*,hkRefPtr<hkcdPlanarCsgOperand> &)
// 0x1592f40 hkcdPlanarCsgOperand::createOperandWithSharedDataAndClonedPlanes(hkcdPlanarCsgOperand const*,hkRefPtr<hkcdPlanarCsgOperand> &)
// [0x1593700] (315 bytes) hkcdPlanarCsgOperand::createGeometryFromGeometrySource(int,hkcdPlanarGeometry *,unsigned int,hkArray<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkContainerHeapAllocator> &,hkArray<int,hkContainerHeapAllocator> &)
// int hkcdPlanarCsgOperand::createGeometryFromGeometrySource( hkcdPlanarCsgOperand *a1, int a2, int a3, int a4, int a5, hkcdPlanarGeometryPlanesCollection *a6);
// [0x1593840] (113 bytes) hkcdPlanarCsgOperand::collectUsedPlaneIds(hkBitField &)const
// int hkcdPlanarCsgOperand::collectUsedPlaneIds(hkcdPlanarCsgOperand *this, hkBitField *a2);
// [0x15938c0] (325 bytes) hkcdPlanarCsgOperand::addGeometrySource(hkcdPlanarCsgOperand::GeomSource const&)
// int hkcdPlanarCsgOperand::addGeometrySource( hkcdPlanarCsgOperand *this, const hkcdPlanarCsgOperand::GeomSource *a2);
// [0x1593a10] (431 bytes) hkcdPlanarGeometryPrimitives::Collection<28>::clear(void)
// int hkcdPlanarGeometryPrimitives::Collection<28>::clear(hkcdPlanarGeometryPrimitives::Collection<28> *this);
// [0x1593fc0] (1046 bytes) hkcdPlanarGeometryPrimitives::CollectionManager<hkcdPlanarGeometryPolygonCollection>::getUnusedCollection(hkRefPtr<hkcdPlanarGeometryPolygonCollection> &)
// int hkcdPlanarGeometryPrimitives::CollectionManager<hkcdPlanarGeometryPolygonCollection>::getUnusedCollection( uint32_t *a1, hkcdPlanarGeometryPrimitives::Collection<28> **a2);
// [0x15943e0] (1206 bytes) hkcdPlanarGeometryPrimitives::CollectionManager<hkcdPlanarSolid::ArrayMgr>::getUnusedCollection(hkRefPtr<hkcdPlanarSolid::ArrayMgr> &)
// int hkcdPlanarGeometryPrimitives::CollectionManager<hkcdPlanarSolid::ArrayMgr>::getUnusedCollection( uint32_t *a1, hkcdPlanarGeometryPrimitives::Collection<28> **a2);
// [0x15948a0] (4328 bytes) hkcdPlanarCsgOperand::buildGeometryFrom2GeomSources(hkcdPlanarGeometryPrimitives::CollectionManager<hkcdPlanarGeometryPolygonCollection> *,hkcdPlanarGeometryPrimitives::CollectionManager<hkcdPlanarSolid::ArrayMgr> *,hkcdPlanarSolid*,int)
// 0x15948a0 hkcdPlanarCsgOperand::buildGeometryFrom2GeomSources(hkcdPlanarGeometryPrimitives::CollectionManager<hkcdPlanarGeometryPolygonCollection> *,hkcdPlanarGeometryPrimitives::CollectionManager<hkcdPlanarSolid::ArrayMgr> *,hkcdPlanarSolid*,int)
// [0x1595990] (605 bytes) hkcdPlanarGeometryPrimitives::Collection<28>::copy(hkcdPlanarGeometryPrimitives::Collection<28> const&)
// __m128i *hkcdPlanarGeometryPrimitives::Collection<28>::copy( hkcdPlanarGeometryPrimitives::Collection<28> *this, const hkcdPlanarGeometryPrimitives::Collection<28> *a2);
// [0x1595bf0] (1126 bytes) hkcdPlanarGeometryPrimitives::CollectionManager<hkcdConvexCellsCollection>::getUnusedCollection(hkRefPtr<hkcdConvexCellsCollection> &)
// int hkcdPlanarGeometryPrimitives::CollectionManager<hkcdConvexCellsCollection>::getUnusedCollection( uint32_t *a1, hkcdPlanarGeometryPrimitives::Collection<28> **a2);
// [0x1596af0] (597 bytes) hkcdPlanarCsgOperand::buildDanglingGeometry(bool,bool,hkcdPlanarSolid *)
// int hkcdPlanarCsgOperand::buildDanglingGeometry( hkcdPlanarCsgOperand *this, int a2, int a3, hkcdPlanarSolid *a4);
// [0x1596e70] (1782 bytes) hkcdPlanarCsgOperand::copyData(hkcdPlanarCsgOperand const&,bool,bool,bool,bool)
// int hkcdPlanarCsgOperand::copyData( hkcdPlanarCsgOperand *this, const hkcdPlanarCsgOperand *a2, bool a3, bool a4, bool a5, bool a6);
// [0x1597570] (2094 bytes) hkcdPlanarCsgOperand::copyData(hkcdPlanarCsgOperand const&,hkcdPlanarGeometryPlanesCollection *,hkcdPlanarGeometryPrimitives::CollectionManager<hkcdPlanarGeometryPolygonCollection> *,hkcdPlanarGeometryPrimitives::CollectionManager<hkcdConvexCellsCollection> *,bool,bool,bool)
// int hkcdPlanarCsgOperand::copyData( hkcdPlanarCsgOperand *this, const hkcdPlanarCsgOperand *a2, hkcdPlanarGeometryPlanesCollection *a3, hkcdPlanarGeometryPrimitives::CollectionManager<hkcdPlanarGeometryPolygonCollection> *a4, hkcdPlanarGeometryPrimitives::CollectionManager<hkcdConvexCellsCollection> *a5, hkcdPlanarGeometryPrimitives::Collection<28> *a6, int a7, volatile int32_t *a8);
// [0x1597da0] (661 bytes) hkcdPlanarCsgOperand::simplifyFromBoundaries(void)
// void hkcdPlanarCsgOperand::simplifyFromBoundaries( hkcdPlanarCsgOperand *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, unsigned int a14, int a15, int a16, int a17, int a18);
// [0x1598040] (7950 bytes) hkcdPlanarCsgOperand::buildGeometryFromGeomSources(bool,bool)
// void hkcdPlanarCsgOperand::buildGeometryFromGeomSources(hkcdPlanarCsgOperand *this, bool a2, bool a3);
// [0x1599f50] (665 bytes) hkcdPlanarCsgOperand::removeUnusedPlanes(void)
// int hkcdPlanarCsgOperand::removeUnusedPlanes(hkcdPlanarCsgOperand *this);
// [0x159a380] (22 bytes) hkcdShape::staticClass(void)
// void *hkcdShape::staticClass();
// [0x159a3a0] (22 bytes) hkcdShapeDispatchType::staticClass(void)
// void *hkcdShapeDispatchType::staticClass();
// [0x159a3c0] (22 bytes) hkcdShapeInfoCodecType::staticClass(void)
// void *hkcdShapeInfoCodecType::staticClass();
// [0x159a3e0] (22 bytes) hkcdShapeType::staticClass(void)
// void *hkcdShapeType::staticClass();
// [0x159a760] (29 bytes) hkcdShape::hkcdShape(hkFinishLoadedObjectFlag)
// uint32_t *hkcdShape::hkcdShape(uint32_t *a1);
// [0x159a780] (9 bytes) hkcdPlanarEntity::extractGeometry(hkGeometry &)const
// void hkcdPlanarEntity::extractGeometry();
// [0x159a790] (18 bytes) hkcdVertexGeometryImpl::VertexLinePair::less(hkcdVertexGeometryImpl::VertexLinePair const&,hkcdVertexGeometryImpl::VertexLinePair const&)
// bool hkcdVertexGeometryImpl::VertexLinePair::less( hkcdVertexGeometryImpl::VertexLinePair *this, const hkcdVertexGeometryImpl::VertexLinePair *a2);
// [0x159a7b0] (18 bytes) hkcdVertexGeometryImpl::VertexLinePair::equal(hkcdVertexGeometryImpl::VertexLinePair const&,hkcdVertexGeometryImpl::VertexLinePair const&)
// bool hkcdVertexGeometryImpl::VertexLinePair::equal( hkcdVertexGeometryImpl::VertexLinePair *this, const hkcdVertexGeometryImpl::VertexLinePair *a2);
// [0x159a870] (122 bytes) hkcdPlanarEntity::~hkcdPlanarEntity()
// void hkcdPlanarEntity::~hkcdPlanarEntity(hkcdPlanarEntity *this);
// [0x159a8f0] (106 bytes) hkcdVertexGeometry::VPolygonCollectionBase::~VPolygonCollectionBase()
// void hkcdVertexGeometry::VPolygonCollectionBase::~VPolygonCollectionBase( hkcdVertexGeometry::VPolygonCollectionBase *this);
// [0x159a960] (106 bytes) hkcdVertexGeometry::VPolygonCollection::~VPolygonCollection()
// void hkcdVertexGeometry::VPolygonCollection::~VPolygonCollection(hkcdVertexGeometry::VPolygonCollection *this);
// [0x159abb0] (178 bytes) hkcdPlanarEntity::~hkcdPlanarEntity()
// void hkcdPlanarEntity::~hkcdPlanarEntity(hkcdPlanarEntity *this);
// [0x159ac70] (163 bytes) hkcdVertexGeometry::VPolygonCollectionBase::~VPolygonCollectionBase()
// void hkcdVertexGeometry::VPolygonCollectionBase::~VPolygonCollectionBase( hkcdVertexGeometry::VPolygonCollectionBase *this);
// [0x159ad20] (163 bytes) hkcdVertexGeometry::VPolygonCollection::~VPolygonCollection()
// void hkcdVertexGeometry::VPolygonCollection::~VPolygonCollection(hkcdVertexGeometry::VPolygonCollection *this);
// [0x159add0] (450 bytes) hkcdVertexGeometry::~hkcdVertexGeometry()
// void hkcdVertexGeometry::~hkcdVertexGeometry(hkcdVertexGeometry *this);
// [0x159afa0] (93 bytes) hkcdVertexGeometry::~hkcdVertexGeometry()
// void hkcdVertexGeometry::~hkcdVertexGeometry(hkcdVertexGeometry *this);
// [0x159c840] (591 bytes) hkcdMathErrorBoundsCalculator::Vector::setMul(hkcdMathErrorBoundsCalculator::Vector const&,hkcdMathErrorBoundsCalculator::Vector const&)
// unsigned int hkcdMathErrorBoundsCalculator::Vector::setMul( hkcdMathErrorBoundsCalculator::Vector *this, const hkcdMathErrorBoundsCalculator::Vector *a2, const hkcdMathErrorBoundsCalculator::Vector *a3);
// [0x159ca90] (918 bytes) hkcdMathErrorBoundsCalculator::Vector::setCross(hkcdMathErrorBoundsCalculator::Vector const&,hkcdMathErrorBoundsCalculator::Vector const&)
// int hkcdMathErrorBoundsCalculator::Vector::setCross( hkcdMathErrorBoundsCalculator::Vector *this, const hkcdMathErrorBoundsCalculator::Vector *a2, const hkcdMathErrorBoundsCalculator::Vector *a3);
// [0x159ce30] (3663 bytes) hkcdPlanarGeometryPredicates::computeIntersectionDeterminants(hkVector4d const&,hkVector4d const&,hkVector4d const&,hkcdMathErrorBoundsCalculator::Vector &)
// int hkcdPlanarGeometryPredicates::computeIntersectionDeterminants(int64_t *a1, int a2, int64_t *a3, int a4);
// [0x159dc80] (748 bytes) hkcdPlanarGeometryPlanesCollection::getPlane(hkHandle<unsigned int,268435455u,hkcdPlanarGeometryPrimitives::PlaneIdDiscriminant>,hkcdPlanarGeometryPrimitives::Plane &)const
// int hkcdPlanarGeometryPlanesCollection::getPlane(int a1, int a2, int a3);
// [0x159df70] (408 bytes) hkcdVertexGeometry::VPolygonCollectionBase::VPolygonCollectionBase(void)
// hkcdVertexGeometry::VPolygonCollectionBase *hkcdVertexGeometry::VPolygonCollectionBase::VPolygonCollectionBase( hkcdVertexGeometry::VPolygonCollectionBase *this);
// [0x159e110] (273 bytes) hkcdVertexGeometry::hkcdVertexGeometry(hkcdPlanarGeometryPlanesCollection *,hkcdPlanarEntityDebugger *)
// void (**hkcdVertexGeometry::hkcdVertexGeometry( uint32_t *a1, int a2, int a3))(hkcdVertexGeometry::VPolygonCollection *__hidden this);
// [0x159e230] (594 bytes) hkcdVertexGeometry::VPolygonCollectionBase::VPolygonCollectionBase(hkcdVertexGeometry::VPolygonCollectionBase const&)
// hkcdVertexGeometry::VPolygonCollectionBase *hkcdVertexGeometry::VPolygonCollectionBase::VPolygonCollectionBase( hkcdVertexGeometry::VPolygonCollectionBase *this, const hkcdVertexGeometry::VPolygonCollectionBase *a2);
// [0x159e490] (756 bytes) hkcdVertexGeometry::remapVertices(hkArray<int,hkContainerHeapAllocator> const&)
// int hkcdVertexGeometry::remapVertices( hkcdVertexGeometry *this, const hkArray<int, hkContainerHeapAllocator> *a2);
// [0x159e790] (68 bytes) hkcdVertexGeometry::remapLines(hkArray<int,hkContainerHeapAllocator> const&)
// int hkcdVertexGeometry::remapLines(hkcdVertexGeometry *this, const hkArray<int, hkContainerHeapAllocator> *a2);
// [0x159e7e0] (327 bytes) hkcdVertexGeometry::remapEdges(hkArray<int,hkContainerHeapAllocator> const&)
// int hkcdVertexGeometry::remapEdges(hkcdVertexGeometry *this, const hkArray<int, hkContainerHeapAllocator> *a2);
// [0x159e930] (286 bytes) hkcdVertexGeometry::getAllPolygonIds(hkArray<hkHandle<unsigned int,0u,hkcdVertexGeometry::VPolygonCollectionBase::VPolygonIdDiscriminant>,hkContainerHeapAllocator> &)
// int *hkcdVertexGeometry::getAllPolygonIds(int a1, hkMemoryAllocator *a2);
// [0x159f020] (2428 bytes) hkcdPlanarGeometryPrimitives::Collection<28>::blockAlloc(unsigned int &)
// int hkcdPlanarGeometryPrimitives::Collection<28>::blockAlloc( hkcdPlanarGeometryPrimitives::Collection<28> *this, unsigned int *a2);
// [0x159f9a0] (76 bytes) hkcdPlanarGeometryPrimitives::Collection<28>::getNextAllocatedAddress(unsigned int)const
// unsigned int hkcdPlanarGeometryPrimitives::Collection<28>::getNextAllocatedAddress( hkcdPlanarGeometryPrimitives::Collection<28> *this, unsigned int a2);
// [0x15a1510] (3774 bytes) hkcdVertexGeometry::weldVertices(void)
// int hkcdVertexGeometry::weldVertices(hkcdVertexGeometry *this);
// [0x15a3600] (16593 bytes) hkcdVertexGeometry::repairTJunctions(void)
// int hkcdVertexGeometry::repairTJunctions(hkcdVertexGeometry *this);
// [0x15a7910] (1941 bytes) hkcdVertexGeometry::weldIdenticalVertices(void)
// int hkcdVertexGeometry::weldIdenticalVertices(hkcdVertexGeometry *this);
// [0x15a8250] (1767 bytes) hkcdVertexGeometry::weldIdenticalLines(void)
// int hkcdVertexGeometry::weldIdenticalLines(hkcdVertexGeometry *this);
// [0x15a8ae0] (6796 bytes) hkcdVertexGeometry::weldLines(void)
// int hkcdVertexGeometry::weldLines(hkcdVertexGeometry *this);
// [0x15aa710] (1767 bytes) hkcdVertexGeometry::weldIdenticalEdges(void)
// int hkcdVertexGeometry::weldIdenticalEdges(hkcdVertexGeometry *this);
// [0x15aae00] (1303 bytes) hkcdVertexGeometry::createFromPlanarGeometry(hkcdPlanarGeometry const*,hkArray<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkContainerHeapAllocator> const&)
// hkcdVertexGeometry *hkcdVertexGeometry::createFromPlanarGeometry(int a1, int a2);
// [0x15ab320] (140 bytes) hkcdVertexGeometry::createFromPlanarGeometry(hkcdPlanarGeometry const*)
// hkcdVertexGeometry *hkcdVertexGeometry::createFromPlanarGeometry(hkcdVertexGeometry *this);
// [0x15ab400] (22 bytes) hkcdPlanarGeometry::staticClass(void)
// void *hkcdPlanarGeometry::staticClass();
// [0x15ab550] (22 bytes) hkcdPlanarEntity::staticClass(void)
// void *hkcdPlanarEntity::staticClass();
// [0x15ab6b0] (277 bytes) hkcdConvexCellsTree2D::~hkcdConvexCellsTree2D()
// void hkcdConvexCellsTree2D::~hkcdConvexCellsTree2D(hkcdConvexCellsTree2D *this);
// [0x15ab7d0] (277 bytes) hkcdConvexCellsTree<hkcdPlanarGeometryPolygonCollection::Polygon,hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkcdPlanarGeometry>::~hkcdConvexCellsTree()
// void hkcdConvexCellsTree<hkcdPlanarGeometryPolygonCollection::Polygon,hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkcdPlanarGeometry>::~hkcdConvexCellsTree( hkcdConvexCellsTree<hkcdPlanarGeometryPolygonCollection::Polygon, hkHandle<unsigned int, 0u, hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>, hkcdPlanarGeometry> *this);
// [0x15ab8f0] (333 bytes) hkcdConvexCellsTree<hkcdPlanarGeometryPolygonCollection::Polygon,hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkcdPlanarGeometry>::~hkcdConvexCellsTree()
// void hkcdConvexCellsTree<hkcdPlanarGeometryPolygonCollection::Polygon,hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkcdPlanarGeometry>::~hkcdConvexCellsTree( hkcdConvexCellsTree<hkcdPlanarGeometryPolygonCollection::Polygon, hkHandle<unsigned int, 0u, hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>, hkcdPlanarGeometry> *this);
// [0x15aba40] (333 bytes) hkcdConvexCellsTree2D::~hkcdConvexCellsTree2D()
// void hkcdConvexCellsTree2D::~hkcdConvexCellsTree2D(hkcdConvexCellsTree2D *this);
// [0x15adb30] (525 bytes) hkcdPlanarGeometrySimplifier::execute(hkcdPlanarGeometry *,hkcdVertexGeometry const*)
// int hkcdPlanarGeometrySimplifier::execute(hkcdPlanarGeometrySimplifier *this, hkcdPlanarGeometry *a2);
// [0x15add40] (1089 bytes) hkcdPlanarGeometrySimplifier::buildSimplifyingSolidForPolygonGroup(hkcdPlanarGeometry *,hkcdVertexGeometry const*,hkArray<hkHandle<unsigned int,0u,hkcdVertexGeometry::VPolygonCollectionBase::VPolygonIdDiscriminant>,hkContainerHeapAllocator> const&,hkcdPlanarSolid *)
// int hkcdPlanarGeometrySimplifier::buildSimplifyingSolidForPolygonGroup( hkcdPlanarGeometry *a1, const hkcdVertexGeometry *a2, uint32_t *a3, hkcdPlanarSolid *a4);
// [0x15ae190] (96 bytes) hkcdConvexCellsTreeImpl::vectorEq(hkIntVector const&,hkIntVector const&)
// int hkcdConvexCellsTreeImpl::vectorEq(uint32_t *a1, uint32_t *a2);
// [0x15ae1f0] (151 bytes) hkcdConvexCellsTreeImpl::vectorLess(hkIntVector const&,hkIntVector const&)
// unsigned int hkcdConvexCellsTreeImpl::vectorLess(uint32_t *a1, uint32_t *a2);
// [0x15ae290] (277 bytes) hkcdConvexCellsTree<hkcdConvexCellsCollection::Cell,hkHandle<unsigned int,0u,hkcdConvexCellsCollection::CellIdDiscriminant>,hkcdConvexCellsCollection>::~hkcdConvexCellsTree()
// void hkcdConvexCellsTree<hkcdConvexCellsCollection::Cell,hkHandle<unsigned int,0u,hkcdConvexCellsCollection::CellIdDiscriminant>,hkcdConvexCellsCollection>::~hkcdConvexCellsTree( hkcdConvexCellsTree<hkcdConvexCellsCollection::Cell, hkHandle<unsigned int, 0u, hkcdConvexCellsCollection::CellIdDiscriminant>, hkcdConvexCellsCollection> *this);
// [0x15ae3b0] (285 bytes) hkcdConvexCellsTree3D::~hkcdConvexCellsTree3D()
// void hkcdConvexCellsTree3D::~hkcdConvexCellsTree3D(hkcdConvexCellsTree3D *this);
// [0x15ae4d0] (93 bytes) hkcdConvexCellsTree3D::~hkcdConvexCellsTree3D()
// void hkcdConvexCellsTree3D::~hkcdConvexCellsTree3D(hkcdConvexCellsTree3D *this);
// [0x15ae530] (333 bytes) hkcdConvexCellsTree<hkcdConvexCellsCollection::Cell,hkHandle<unsigned int,0u,hkcdConvexCellsCollection::CellIdDiscriminant>,hkcdConvexCellsCollection>::~hkcdConvexCellsTree()
// void hkcdConvexCellsTree<hkcdConvexCellsCollection::Cell,hkHandle<unsigned int,0u,hkcdConvexCellsCollection::CellIdDiscriminant>,hkcdConvexCellsCollection>::~hkcdConvexCellsTree( hkcdConvexCellsTree<hkcdConvexCellsCollection::Cell, hkHandle<unsigned int, 0u, hkcdConvexCellsCollection::CellIdDiscriminant>, hkcdConvexCellsCollection> *this);
// [0x15ae680] (326 bytes) hkcdConvexCellsTree3D::hkcdConvexCellsTree3D(hkcdConvexCellsCollection *,hkcdPlanarGeometry *,hkcdConvexCellsTree3D const&)
// void hkcdConvexCellsTree3D::hkcdConvexCellsTree3D( hkcdConvexCellsTree3D *this, hkcdConvexCellsCollection *a2, hkcdPlanarGeometry *a3, const hkcdConvexCellsTree3D *a4);
// [0x15ae7d0] (408 bytes) hkcdConvexCellsTree3D::hkcdConvexCellsTree3D(hkcdConvexCellsCollection *,hkcdPlanarGeometry *,bool)
// void hkcdConvexCellsTree3D::hkcdConvexCellsTree3D( hkcdConvexCellsTree3D *this, hkcdConvexCellsCollection *a2, hkcdPlanarGeometry *a3, bool a4);
// [0x15ae970] (279 bytes) hkcdConvexCellsTree3D::collectLeafCells(hkArray<hkHandle<unsigned int,0u,hkcdConvexCellsCollection::CellIdDiscriminant>,hkContainerHeapAllocator> &)const
// int *hkcdConvexCellsTree3D::collectLeafCells(int a1, hkMemoryAllocator *a2);
// [0x15aea90] (296 bytes) hkcdConvexCellsTree3D::collectSolidCells(hkArray<hkHandle<unsigned int,0u,hkcdConvexCellsCollection::CellIdDiscriminant>,hkContainerHeapAllocator> &)const
// int *hkcdConvexCellsTree3D::collectSolidCells(int a1, hkMemoryAllocator *a2);
// [0x15aebc0] (678 bytes) hkcdConvexCellsTree3D::getUniquePolygonIdsFromCellIds(hkArray<hkHandle<unsigned int,0u,hkcdConvexCellsCollection::CellIdDiscriminant>,hkContainerHeapAllocator> const&,hkArray<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkContainerHeapAllocator> &)
// int hkcdConvexCellsTree3D::getUniquePolygonIdsFromCellIds(int a1, int *a2, int *a3);
// [0x15aee70] (1205 bytes) hkcdConvexCellsTree3D::markBoundaryCells(hkcdPlanarGeometry const&,hkArray<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkContainerHeapAllocator> const&,hkcdPlanarEntityDebugger *)
// int hkcdConvexCellsTree3D::markBoundaryCells(int a1, int a2, uint32_t *a3);
// [0x15af330] (1137 bytes) hkcdConvexCellsTree3D::computeSolidRegionIslands(hkArray<hkArray<hkHandle<unsigned int,0u,hkcdConvexCellsCollection::CellIdDiscriminant>,hkContainerHeapAllocator>,hkContainerHeapAllocator> &)
// int hkcdConvexCellsTree3D::computeSolidRegionIslands(int a1, int *a2);
// [0x15af7b0] (372 bytes) hkcdConvexCellsTree3D::findOutputCell(void)
// hkcdConvexCellsTree3D *hkcdConvexCellsTree3D::findOutputCell(hkcdConvexCellsTree3D *this, int a2);
// [0x15af930] (1063 bytes) hkcdConvexCellsTree3D::inferCellsLabels(hkcdPlanarEntityDebugger *)
// unsigned int hkcdConvexCellsTree3D::inferCellsLabels(int a1);
// [0x15afd60] (246 bytes) hkcdConvexCellsTree3D::relabelCellsFromSolid(hkcdPlanarSolid const*)
// unsigned int hkcdConvexCellsTree3D::relabelCellsFromSolid( hkcdConvexCellsTree3D *this, const hkcdPlanarSolid *a2);
// [0x15afe60] (233 bytes) hkcdConvexCellsTree3D::reassignSolidGeomLabels(hkcdPlanarGeometry const&,hkcdPlanarSolid *,hkArray<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkContainerHeapAllocator> const&,hkcdPlanarEntityDebugger *)
// int hkcdConvexCellsTree3D::reassignSolidGeomLabels(int a1, int a2, int a3, uint32_t *a4);
// [0x15aff50] (1094 bytes) hkcdConvexCellsTree3D::extractBoundaryPolygonsFromCellIds(hkArray<hkHandle<unsigned int,0u,hkcdConvexCellsCollection::CellIdDiscriminant>,hkContainerHeapAllocator> const&,hkcdPlanarGeometry &,hkArray<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkContainerHeapAllocator> &)
// int hkcdConvexCellsTree3D::extractBoundaryPolygonsFromCellIds(int a1, int *a2, hkcdPlanarGeometry *a3, int *a4);
// [0x15b03a0] (678 bytes) hkcdConvexCellsTree3D::buildSolidFromSubsetOfCells(hkArray<hkHandle<unsigned int,0u,hkcdConvexCellsCollection::CellIdDiscriminant>,hkContainerHeapAllocator> const&)
// int hkcdConvexCellsTree3D::buildSolidFromSubsetOfCells(int a1, int *a2);
// [0x15b0650] (547 bytes) hkcdConvexCellsTree3D::createBoundaryCell(void)
// hkcdConvexCellsTree3D *hkcdConvexCellsTree3D::createBoundaryCell(hkcdConvexCellsTree3D *this, int a2);
// [0x15b0880] (4365 bytes) hkcdConvexCellsTree3D::extractCellGeometry(hkHandle<unsigned int,0u,hkcdConvexCellsCollection::CellIdDiscriminant>,hkGeometry &)const
// int hkcdConvexCellsTree3D::extractCellGeometry(int a1, int a2, uint32_t *a3);
// [0x15b1990] (496 bytes) hkcdConvexCellsTree3D::hkcdConvexCellsTree3D(hkcdPlanarGeometry *,bool)
// void hkcdConvexCellsTree3D::hkcdConvexCellsTree3D(hkcdConvexCellsTree3D *this, hkcdPlanarGeometry *a2, bool a3);
// [0x15b1b80] (1265 bytes) hkcdPlanarGeometryPrimitives::Collection<28>::blockFree(unsigned int,unsigned int)
// unsigned int hkcdPlanarGeometryPrimitives::Collection<28>::blockFree( hkcdPlanarGeometryPrimitives::Collection<28> *this, unsigned int a2, unsigned int a3);
// [0x15b2080] (1264 bytes) hkcdConvexCellsTree3D::updateConnectivity(hkcdPlanarSolid *,hkHandle<unsigned int,0u,hkcdConvexCellsCollection::CellIdDiscriminant>,hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkHandle<unsigned int,268435455u,hkcdPlanarGeometryPrimitives::PlaneIdDiscriminant>)
// unsigned int hkcdConvexCellsTree3D::updateConnectivity(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x15b2570] (5544 bytes) hkcdConvexCellsTree3D::splitCell(hkcdPlanarSolid *,hkHandle<unsigned int,0u,hkcdConvexCellsCollection::CellIdDiscriminant>,hkHandle<unsigned int,268435455u,hkcdPlanarGeometryPrimitives::PlaneIdDiscriminant>,hkHandle<unsigned int,0u,hkcdConvexCellsCollection::CellIdDiscriminant>&,hkHandle<unsigned int,0u,hkcdConvexCellsCollection::CellIdDiscriminant>&)
// int hkcdConvexCellsTree3D::splitCell(int a1, int a2, int a3, int a4, int *a5, int *a6);
// [0x15b3b20] (765 bytes) hkcdConvexCellsTree3D::buildFromSolid(hkcdPlanarSolid *)
// int hkcdConvexCellsTree3D::buildFromSolid(hkcdConvexCellsTree3D *this, hkcdPlanarSolid *a2);
// [0x15b3e20] (1075 bytes) hkcdConvexCellsTree<hkcdConvexCellsCollection::Cell,hkHandle<unsigned int,0u,hkcdConvexCellsCollection::CellIdDiscriminant>,hkcdConvexCellsCollection>::hkcdConvexCellsTree(hkcdConvexCellsTree<hkcdConvexCellsCollection::Cell,hkHandle<unsigned int,0u,hkcdConvexCellsCollection::CellIdDiscriminant>,hkcdConvexCellsCollection> const&)
// __m128i *hkcdConvexCellsTree<hkcdConvexCellsCollection::Cell,hkHandle<unsigned int,0u,hkcdConvexCellsCollection::CellIdDiscriminant>,hkcdConvexCellsCollection>::hkcdConvexCellsTree( hkcdConvexCellsTree<hkcdConvexCellsCollection::Cell, hkHandle<unsigned int, 0u, hkcdConvexCellsCollection::CellIdDiscriminant>, hkcdConvexCellsCollection> *this, const hkcdConvexCellsTree<hkcdConvexCellsCollection::Cell, hkHandle<unsigned int, 0u, hkcdConvexCellsCollection::CellIdDiscriminant>, hkcdConvexCellsCollection> *a2);
// [0x15b4260] (100 bytes) hkcdConvexCellsTree3D::hkcdConvexCellsTree3D(hkcdConvexCellsTree3D const&)
// void hkcdConvexCellsTree3D::hkcdConvexCellsTree3D(hkcdConvexCellsTree3D *this, const hkcdConvexCellsTree3D *a2);
// [0x15b42d0] (6964 bytes) hkcdConvexCellsTree3D::computeCellVertices(hkHandle<unsigned int,0u,hkcdConvexCellsCollection::CellIdDiscriminant>,hkArray<hkVector4f,hkContainerHeapAllocator> &,bool)const
// double *hkcdConvexCellsTree3D::computeCellVertices(int a1, int a2, int *a3, char a4);
// [0x15b5e10] (1587 bytes) hkcdConvexCellsTree3D::removeCellsOfType(hkcdConvexCellsCollection::Labels)
// unsigned int hkcdConvexCellsTree3D::removeCellsOfType(int a1, int a2);
// [0x15b6450] (1226 bytes) hkcdConvexCellsTree3D::debugPrint(void)const
// int hkcdConvexCellsTree3D::debugPrint(hkcdConvexCellsTree3D *this);
// [0x15b6970] (22 bytes) hkcdPlanarGeometryPlanesCollection::staticClass(void)
// void *hkcdPlanarGeometryPlanesCollection::staticClass();
// [0x15b6b30] (168 bytes) hkcdPlanarSolid::NodeStorage::~NodeStorage()
// void hkcdPlanarSolid::NodeStorage::~NodeStorage(hkcdPlanarSolid::NodeStorage *this);
// [0x15b6be0] (111 bytes) hkcdPlanarSolid::NodeStorage::~NodeStorage()
// void hkcdPlanarSolid::NodeStorage::~NodeStorage(hkcdPlanarSolid::NodeStorage *this);
// [0x15b6c50] (22 bytes) hkcdPlanarSolid::NodeStorage::staticClass(void)
// void *hkcdPlanarSolid::NodeStorage::staticClass();
// [0x15b6c70] (22 bytes) hkcdPlanarSolid::Node::staticClass(void)
// void *hkcdPlanarSolid::Node::staticClass();
// [0x15b6c90] (22 bytes) hkcdPlanarSolid::staticClass(void)
// void *hkcdPlanarSolid::staticClass();
// [0x15b6f30] (22 bytes) hkcdPlanarGeometryPrimitives::Plane::staticClass(void)
// void *hkcdPlanarGeometryPrimitives::Plane::staticClass();
// [0x15b7040] (1050 bytes) hkcdBspBooleanImpl::initializeStackWithLeavesForDualOp(hkcdPlanarCsgOperand *,hkcdPlanarCsgOperand *,hkHandle<unsigned int,4294967295u,hkcdPlanarSolid::NodeIdDiscriminant>,hkArray<hkcdBspBooleanImpl::StackEntry,hkContainerHeapAllocator> &)
// int hkcdBspBooleanImpl::initializeStackWithLeavesForDualOp( int a1, int a2, int a3, int a4, hkMemoryAllocator *a5);
// [0x15b7460] (2597 bytes) hkcdBspBooleanImpl::doMerge(hkcdPlanarCsgOperand const*,hkcdPlanarGeometryBooleanUtil::Operation,hkcdPlanarCsgOperand*,hkcdPlanarCsgOperand*)
// int hkcdBspBooleanImpl::doMerge(int a1, int a2, int a3, int a4, int a5);
// [0x15b7e90] (578 bytes) hkcdBspBooleanImpl::initializeStackWithLeaves(hkcdPlanarSolid const*,hkArray<hkcdBspBooleanImpl::StackEntry,hkContainerHeapAllocator> &)
// uint32_t *hkcdBspBooleanImpl::initializeStackWithLeaves(int a1, uint32_t *a2, hkMemoryAllocator *a3);
// [0x15b80e0] (1285 bytes) hkcdBspBooleanImpl::finalizeInPlaceMerge(hkcdPlanarCsgOperand &,bool)
// int hkcdBspBooleanImpl::finalizeInPlaceMerge(hkcdBspBooleanImpl *this, hkcdPlanarCsgOperand *a2, bool a3);
// [0x15b85f0] (490 bytes) hkcdBspBooleanImpl::setOperatorsForInPlaceMerge(hkcdPlanarCsgOperand *,hkcdPlanarGeometry &)
// int hkcdBspBooleanImpl::setOperatorsForInPlaceMerge( hkcdBspBooleanImpl *this, hkcdPlanarCsgOperand *a2, hkcdPlanarGeometry *a3);
// [0x15b87e0] (490 bytes) hkcdBspBooleanImpl::setOperatorsForInPlaceMerge2d(hkcdPlanarCsgOperand *,hkcdPlanarGeometry &,hkHandle<unsigned int,268435455u,hkcdPlanarGeometryPrimitives::PlaneIdDiscriminant>)
// int hkcdBspBooleanImpl::setOperatorsForInPlaceMerge2d(int a1, int a2, hkcdPlanarGeometry *a3, int a4);
// [0x15b89d0] (121 bytes) hkcdPlanarGeometryBooleanUtil::setOperatorsForInPlaceMerge(hkcdPlanarCsgOperand *,hkcdPlanarGeometry &)
// hkcdBspBooleanImpl *hkcdPlanarGeometryBooleanUtil::setOperatorsForInPlaceMerge( hkcdPlanarGeometryBooleanUtil *this, hkcdPlanarCsgOperand *a2);
// [0x15b8a50] (282 bytes) hkcdPlanarGeometryBooleanUtil::finalizeInPlaceMerge(hkcdPlanarGeometryBooleanUtil::BooleanState *,hkcdPlanarCsgOperand *,bool)
// int hkcdPlanarGeometryBooleanUtil::finalizeInPlaceMerge( hkcdBspBooleanImpl *a1, hkcdPlanarCsgOperand *a2, char a3);
// [0x15b8b70] (2382 bytes) hkcdPlanarGeometryBooleanUtil::addCoplanarPolygonsToMeshPairedIntersectionTest(hkcdPlanarGeometry &,hkArray<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkContainerHeapAllocator> const&,int,hkArray<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkContainerHeapAllocator>&)
// int hkcdPlanarGeometryBooleanUtil::addCoplanarPolygonsToMeshPairedIntersectionTest( int a1, unsigned int *a2, int a3, int *a4);
// [0x15b94c0] (1237 bytes) hkcdBspBooleanImpl::finalizeInPlaceMerge2d(hkcdPlanarCsgOperand &,bool)
// int hkcdBspBooleanImpl::finalizeInPlaceMerge2d(hkcdBspBooleanImpl *this, hkcdPlanarCsgOperand *a2, bool a3);
// [0x15b99a0] (1110 bytes) hkcdPlanarSolid::classifyPolygons(hkcdPlanarGeometry &,hkArray<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkContainerHeapAllocator> const&,hkArray<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkContainerHeapAllocator>&,hkArray<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkContainerHeapAllocator>&,hkArray<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkContainerHeapAllocator>&,hkcdPlanarSolid::ArrayMgr *)const
// int hkcdPlanarSolid::classifyPolygons(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
// [0x15b9e00] (949 bytes) hkcdBspBooleanImpl::merge(hkcdPlanarGeometryBooleanUtil::Operation,bool,bool,bool)
// int hkcdBspBooleanImpl::merge(int *a1, int a2, int a3, int a4, char a5);
// [0x15ba710] (66 bytes) hkcdPlanarGeometryBooleanUtil::mergeInPlace(hkcdPlanarGeometryBooleanUtil::BooleanState *,hkcdPlanarCsgOperand const*,hkcdPlanarGeometryBooleanUtil::Operation,bool)
// int hkcdPlanarGeometryBooleanUtil::mergeInPlace(int a1, int a2, int a3, char a4);
// [0x15bad50] (3466 bytes) hkcdBspBooleanImpl::setOperands(hkcdPlanarCsgOperand const*,hkcdPlanarCsgOperand const*,int,hkcdPlanarGeometryBooleanUtil::Operation,bool,hkcdPlanarGeometryPrimitives::CollectionManager<hkcdPlanarGeometryPolygonCollection> *,hkcdPlanarGeometryPrimitives::CollectionManager<hkcdConvexCellsCollection> *)
// 0x15bad50 hkcdBspBooleanImpl::setOperands(hkcdPlanarCsgOperand const*,hkcdPlanarCsgOperand const*,int,hkcdPlanarGeometryBooleanUtil::Operation,bool,hkcdPlanarGeometryPrimitives::CollectionManager<hkcdPlanarGeometryPolygonCollection> *,hkcdPlanarGeometryPrimitives::CollectionManager<hkcdConvexCellsCollection> *)
// [0x15bbae0] (1109 bytes) hkcdPlanarGeometryBooleanUtil::compute(hkcdPlanarCsgOperand const*,hkcdPlanarGeometryBooleanUtil::Operation,hkcdPlanarCsgOperand const*,hkRefPtr<hkcdPlanarCsgOperand const> *,hkRefPtr<hkcdPlanarCsgOperand const> *,bool,bool,hkcdPlanarGeometryPrimitives::CollectionManager<hkcdPlanarGeometryPolygonCollection> *,hkcdPlanarGeometryPrimitives::CollectionManager<hkcdConvexCellsCollection> *)
// int *hkcdPlanarGeometryBooleanUtil::compute( hkcdPlanarCsgOperand *a1, int a2, hkcdPlanarCsgOperand *a3, hkcdPlanarCsgOperand **a4, int *a5, int a6, char a7, hkArray<int, hkContainerHeapAllocator> *a8, hkcdPlanarGeometryPrimitives::CollectionManager<hkcdConvexCellsCollection> *a9);
// [0x15bbf40] (3618 bytes) hkcdPlanarGeometryBooleanUtil::addCoplanarPolygonsToMesh(hkcdPlanarGeometry &,hkArray<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkContainerHeapAllocator> const&,int,hkArray<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkContainerHeapAllocator>&)
// int hkcdPlanarGeometryBooleanUtil::addCoplanarPolygonsToMesh( hkcdPlanarGeometry *a1, unsigned int *a2, unsigned int a3, int *a4);
// [0x15bcd70] (19 bytes) hkcdBspImpl::MatPoly::less(hkcdBspImpl::MatPoly const&,hkcdBspImpl::MatPoly const&)
// bool hkcdBspImpl::MatPoly::less(hkcdBspImpl::MatPoly *this, const hkcdBspImpl::MatPoly *a2);
// [0x15bcd90] (277 bytes) hkcdPlanarSolid::~hkcdPlanarSolid()
// void hkcdPlanarSolid::~hkcdPlanarSolid(hkcdPlanarSolid *this);
// [0x15bceb0] (93 bytes) hkcdPlanarSolid::~hkcdPlanarSolid()
// void hkcdPlanarSolid::~hkcdPlanarSolid(hkcdPlanarSolid *this);
// [0x15bcf10] (372 bytes) hkcdPlanarSolid::hkcdPlanarSolid(hkcdPlanarGeometryPlanesCollection const*,int,hkcdPlanarEntityDebugger *)
// void (**hkcdPlanarSolid::hkcdPlanarSolid( uint32_t *a1, int a2, int a3, int a4))(hkcdPlanarSolid::NodeStorage *__hidden this);
// [0x15bd090] (247 bytes) hkcdPlanarSolid::hkcdPlanarSolid(hkcdPlanarSolid::NodeStorage *,hkHandle<unsigned int,4294967295u,hkcdPlanarSolid::NodeIdDiscriminant>,hkcdPlanarGeometryPlanesCollection const*,hkcdPlanarEntityDebugger *)
// int hkcdPlanarSolid::hkcdPlanarSolid(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x15bd190] (582 bytes) hkcdPlanarSolid::hkcdPlanarSolid(hkcdPlanarSolid const&)
// 0x15bd190 hkcdPlanarSolid::hkcdPlanarSolid(hkcdPlanarSolid const&)
// [0x15bd3e0] (34 bytes) hkcdPlanarSolid::hkcdPlanarSolid(hkFinishLoadedObjectFlag)
// uint32_t *hkcdPlanarSolid::hkcdPlanarSolid(uint32_t *a1);
// [0x15bd410] (29 bytes) hkcdPlanarSolid::clear(void)
// hkcdPlanarSolid *hkcdPlanarSolid::clear(hkcdPlanarSolid *this);
// [0x15bd430] (752 bytes) hkcdPlanarSolid::buildConvex(hkHandle<unsigned int,268435455u,hkcdPlanarGeometryPrimitives::PlaneIdDiscriminant> const*,int)
// int hkcdPlanarSolid::buildConvex(int a1, int a2, int a3);
// [0x15bd720] (2946 bytes) hkcdPlanarSolid::setPlanesCollection(hkcdPlanarGeometryPlanesCollection const*,int *,bool)
// hkcdPlanarSolid *hkcdPlanarSolid::setPlanesCollection( hkcdPlanarSolid *this, const hkcdPlanarGeometryPlanesCollection *a2, int *a3, bool a4);
// [0x15be2b0] (87 bytes) hkcdPlanarSolid::shiftPlaneIds(int)
// uint32_t *hkcdPlanarSolid::shiftPlaneIds(hkcdPlanarSolid *this, int a2);
// [0x15be310] (134 bytes) hkcdPlanarSolid::collectUsedPlaneIds(hkBitField &)const
// uint32_t *hkcdPlanarSolid::collectUsedPlaneIds(hkcdPlanarSolid *this, hkBitField *a2);
// [0x15be3a0] (375 bytes) hkcdPlanarSolid::collapseIdenticalLabels(void)
// int hkcdPlanarSolid::collapseIdenticalLabels(hkcdPlanarSolid *this);
// [0x15be520] (761 bytes) hkcdPlanarSolid::optimizeStorage(void)
// int hkcdPlanarSolid::optimizeStorage(hkcdPlanarSolid *this);
// [0x15be820] (262 bytes) hkcdPlanarSolid::pickSplittingPlane(hkcdPlanarGeometry const&,hkPseudoRandomGenerator &,hkHandle<unsigned int,268435455u,hkcdPlanarGeometryPrimitives::PlaneIdDiscriminant> const*,int,hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant> const*,int)
// int hkcdPlanarSolid::pickSplittingPlane(int a1, int a2, int a3, int a4, unsigned int a5, uint32_t *a6, int a7);
// [0x15be930] (5750 bytes) hkcdPlanarSolid::buildTree(hkcdPlanarGeometry &,hkPseudoRandomGenerator &,hkArray<hkHandle<unsigned int,268435455u,hkcdPlanarGeometryPrimitives::PlaneIdDiscriminant>,hkContainerHeapAllocator> &,hkArray<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkContainerHeapAllocator> const&,bool,hkcdPlanarEntityDebugger *)
// int hkcdPlanarSolid::buildTree(int a1, int a2, int a3, unsigned int *a4, unsigned int *a5, uint8_t a6);
// [0x15bffb0] (5606 bytes) hkcdPlanarSolid::buildTree2D(hkcdPlanarGeometry &,hkPseudoRandomGenerator &,hkArray<hkHandle<unsigned int,268435455u,hkcdPlanarGeometryPrimitives::PlaneIdDiscriminant>,hkContainerHeapAllocator> &,hkArray<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkContainerHeapAllocator> const&,hkcdPlanarEntityDebugger *)
// int hkcdPlanarSolid::buildTree2D(int a1, int a2, int a3, unsigned int *a4, unsigned int *a5);
// [0x15c15a0] (360 bytes) hkcdPlanarSolid::collapseUnknownLabels(void)
// int hkcdPlanarSolid::collapseUnknownLabels(hkcdPlanarSolid *this);
// [0x15c1710] (4006 bytes) hkcdPlanarSolid::classifyInsideOrBoundaryPolygons(hkcdPlanarGeometry &,hkArray<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkContainerHeapAllocator> const&,hkArray<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkContainerHeapAllocator>&,hkcdPlanarSolid::ArrayMgr *)
// int hkcdPlanarSolid::classifyInsideOrBoundaryPolygons(int a1, int a2, unsigned int *a3, int *a4);
// [0x15c26c0] (220 bytes) hkcdPlanarSolid::computeMaxDepth(void)const
// int hkcdPlanarSolid::computeMaxDepth(hkcdPlanarSolid *this);
// [0x15c27a0] (61 bytes) hkcdPlanarSolid::computeNumLeafNodes(void)const
// int hkcdPlanarSolid::computeNumLeafNodes(hkcdPlanarSolid *this);
// [0x15c27e0] (82 bytes) hkcdPlanarSolid::computeNumNodesWithLabel(unsigned int)const
// int hkcdPlanarSolid::computeNumNodesWithLabel(hkcdPlanarSolid *this, unsigned int a2);
// [0x15c2d20] (9847 bytes) hkcdPlanarSolid::classifyPolygons(hkcdPlanarGeometry &,hkHandle<unsigned int,4294967295u,hkcdPlanarSolid::NodeIdDiscriminant>,hkArray<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkContainerHeapAllocator> const&,hkArray<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkContainerHeapAllocator>&,hkArray<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkContainerHeapAllocator>&,hkArray<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkContainerHeapAllocator>&,hkcdPlanarSolid::ArrayMgr &)const
// int hkcdPlanarSolid::classifyPolygons( int a1, int a2, int a3, uint32_t *a4, int *a5, int *a6, int *a7, uint32_t *a8);
// [0x15c60f0] (1360 bytes) hkcdPlanarSolid::computeBoundary(hkcdConvexCellsTree3D *,hkcdPlanarGeometry &,hkcdPlanarEntityDebugger *)
// int hkcdPlanarSolid::computeBoundary(int a1, int a2, hkcdPlanarGeometry *a3);
// [0x15c6640] (400 bytes) hkcdPlanarSolid::dbgPrint(void)const
// int hkcdPlanarSolid::dbgPrint(hkcdPlanarSolid *this);
// [0x15c67d0] (151 bytes) hkcdPlaneWeldUtilImpl::vectorLess(hkIntVector const&,hkIntVector const&)
// unsigned int hkcdPlaneWeldUtilImpl::vectorLess(uint32_t *a1, uint32_t *a2);
// [0x15c6dd0] (3920 bytes) hkcdPlanarGeometryWeldUtil::weldPlanes(hkArray<hkcdPlanarGeometryPrimitives::Plane,hkContainerHeapAllocator> const&,hkArray<hkcdPlanarGeometryPrimitives::Plane,hkContainerHeapAllocator>&,hkArray<int,hkContainerHeapAllocator> &)
// int hkcdPlanarGeometryWeldUtil::weldPlanes(uint32_t *a1, int *a2, int *a3);
// [0x15c7d20] (5209 bytes) hkcdPlanarGeometryWeldUtil::computeMappingBetweenPlaneSets(hkArray<hkcdPlanarGeometryPrimitives::Plane,hkContainerHeapAllocator> const&,hkArray<hkcdPlanarGeometryPrimitives::Plane,hkContainerHeapAllocator> const&,hkArray<int,hkContainerHeapAllocator> &,int)
// int hkcdPlanarGeometryWeldUtil::computeMappingBetweenPlaneSets(uint32_t *a1, uint32_t *a2, int *a3, int a4);
// [0x15c9180] (670 bytes) hkcdPlanarGeometryWeldUtil::getPotentiallyCollidingPoints(hkArray<hkIntVector,hkContainerHeapAllocator> &,unsigned int,hkArray<hkKeyPair,hkContainerHeapAllocator> &)
// int hkcdPlanarGeometryWeldUtil::getPotentiallyCollidingPoints(uint32_t *a1, unsigned int a2, int a3);
// [0x15c9420] (106 bytes) hkcdPlanarGeometryPolygonCollection::~hkcdPlanarGeometryPolygonCollection()
// void hkcdPlanarGeometryPolygonCollection::~hkcdPlanarGeometryPolygonCollection( hkcdPlanarGeometryPolygonCollection *this);
// [0x15c9490] (163 bytes) hkcdPlanarGeometryPolygonCollection::~hkcdPlanarGeometryPolygonCollection()
// void hkcdPlanarGeometryPolygonCollection::~hkcdPlanarGeometryPolygonCollection( hkcdPlanarGeometryPolygonCollection *this);
// [0x15c9540] (408 bytes) hkcdPlanarGeometryPolygonCollection::hkcdPlanarGeometryPolygonCollection(void)
// void hkcdPlanarGeometryPolygonCollection::hkcdPlanarGeometryPolygonCollection( hkcdPlanarGeometryPolygonCollection *this);
// [0x15c96e0] (594 bytes) hkcdPlanarGeometryPolygonCollection::hkcdPlanarGeometryPolygonCollection(hkcdPlanarGeometryPolygonCollection const&)
// void hkcdPlanarGeometryPolygonCollection::hkcdPlanarGeometryPolygonCollection( hkcdPlanarGeometryPolygonCollection *this, const hkcdPlanarGeometryPolygonCollection *a2);
// [0x15c9940] (29 bytes) hkcdPlanarGeometryPolygonCollection::hkcdPlanarGeometryPolygonCollection(hkFinishLoadedObjectFlag)
// uint32_t *hkcdPlanarGeometryPolygonCollection::hkcdPlanarGeometryPolygonCollection(uint32_t *a1);
// [0x15c9960] (1272 bytes) hkcdPlanarGeometryPolygonCollection::compactStorage(void)
// unsigned int hkcdPlanarGeometryPolygonCollection::compactStorage(hkcdPlanarGeometryPolygonCollection *this);
// [0x15c9e60] (337 bytes) hkcdPlanarGeometryPlanesCollection::~hkcdPlanarGeometryPlanesCollection()
// void hkcdPlanarGeometryPlanesCollection::~hkcdPlanarGeometryPlanesCollection( hkcdPlanarGeometryPlanesCollection *this);
// [0x15c9fc0] (93 bytes) hkcdPlanarGeometryPlanesCollection::~hkcdPlanarGeometryPlanesCollection()
// void hkcdPlanarGeometryPlanesCollection::~hkcdPlanarGeometryPlanesCollection( hkcdPlanarGeometryPlanesCollection *this);
// [0x15ca020] (8016 bytes) hkcdPlanarGeometryPrimitives::Plane::simplify(void)
// int64_t hkcdPlanarGeometryPrimitives::Plane::simplify(hkcdPlanarGeometryPrimitives::Plane *this);
// [0x15cbf70] (2305 bytes) hkcdPlanarGeometryPrimitives::Plane::computeApproxEquation(void)
// hkcdPlanarGeometryPrimitives::Plane *hkcdPlanarGeometryPrimitives::Plane::computeApproxEquation( hkcdPlanarGeometryPrimitives::Plane *this);
// [0x15cc880] (513 bytes) hkcdPlanarGeometryPlanesCollection::hkcdPlanarGeometryPlanesCollection(hkFinishLoadedObjectFlag)
// hkcdPlanarGeometryPrimitives::Plane *hkcdPlanarGeometryPlanesCollection::hkcdPlanarGeometryPlanesCollection( uint32_t *a1, int a2);
// [0x15cca90] (1133 bytes) hkcdPlanarGeometryPlanesCollection::createBoundaryPlanes(void)
// hkcdPlanarGeometryPrimitives::Plane *hkcdPlanarGeometryPlanesCollection::createBoundaryPlanes( hkcdPlanarGeometryPlanesCollection *this);
// [0x15ccf00] (473 bytes) hkcdPlanarGeometryPlanesCollection::hkcdPlanarGeometryPlanesCollection(void)
// void hkcdPlanarGeometryPlanesCollection::hkcdPlanarGeometryPlanesCollection( hkcdPlanarGeometryPlanesCollection *this);
// [0x15cd0e0] (921 bytes) hkcdPlanarGeometryPlanesCollection::hkcdPlanarGeometryPlanesCollection(hkAabb const&,int)
// void hkcdPlanarGeometryPlanesCollection::hkcdPlanarGeometryPlanesCollection( hkcdPlanarGeometryPlanesCollection *this, const hkAabb *a2, int a3);
// [0x15cd480] (64 bytes) hkcdPlanarGeometryPlanesCollection::computeMappingBetweenPlaneSets(hkcdPlanarGeometryPlanesCollection const*,hkcdPlanarGeometryPlanesCollection const*,hkArray<int,hkContainerHeapAllocator> &)
// int hkcdPlanarGeometryPlanesCollection::computeMappingBetweenPlaneSets( hkcdPlanarGeometryPlanesCollection *this, const hkcdPlanarGeometryPlanesCollection *a2, const hkcdPlanarGeometryPlanesCollection *a3);
// [0x15cd4c0] (2247 bytes) hkcdPlanarGeometryPlanesCollection::computeMaxNumUsedBits(int &,int &)const
// int *hkcdPlanarGeometryPlanesCollection::computeMaxNumUsedBits( hkcdPlanarGeometryPlanesCollection *this, int *a2, int *a3);
// [0x15cdd90] (12816 bytes) hkcdPlanarGeometryPlanesCollection::applyTransform(hkQTransform const&,int,bool,int,int)
// int hkcdPlanarGeometryPlanesCollection::applyTransform( __m128i a1, hkcdPlanarGeometryPlanesCollection *this, const hkQTransform *a3, char a4, bool a5, int a6, int a7);
// [0x15d0fa0] (719 bytes) hkcdPlanarGeometryPlanesCollection::append(hkcdPlanarGeometryPlanesCollection const&,hkArray<hkHandle<unsigned int,268435455u,hkcdPlanarGeometryPrimitives::PlaneIdDiscriminant>,hkContainerHeapAllocator> *)
// int hkcdPlanarGeometryPlanesCollection::append( hkcdPlanarGeometryPlanesCollection *this, const hkcdPlanarGeometryPlanesCollection *a2, hkArray<hkHandle<unsigned int, 268435455u, hkcdPlanarGeometryPrimitives::PlaneIdDiscriminant>, hkContainerHeapAllocator> *a3);
// [0x15d1270] (373 bytes) hkcdPlanarGeometryPlanesCollection::weldPlanes(hkArray<int,hkContainerHeapAllocator> *)
// int hkcdPlanarGeometryPlanesCollection::weldPlanes( hkcdPlanarGeometryPlanesCollection *this, hkArray<int, hkContainerHeapAllocator> *a2);
// [0x15d13f0] (858 bytes) hkcdPlanarGeometryPlanesCollection::removePlanes(hkBitField const&,hkArray<int,hkContainerHeapAllocator> *)
// int hkcdPlanarGeometryPlanesCollection::removePlanes( hkcdPlanarGeometryPlanesCollection *this, const hkBitField *a2, hkArray<int, hkContainerHeapAllocator> *a3);
// [0x15d1890] (513 bytes) hkcdPlanarGeometryPlanesCollection::hkcdPlanarGeometryPlanesCollection(hkcdPlanarGeometryPlanesCollection const&)
// void hkcdPlanarGeometryPlanesCollection::hkcdPlanarGeometryPlanesCollection( hkcdPlanarGeometryPlanesCollection *this, const hkcdPlanarGeometryPlanesCollection *a2);
// [0x15d1aa0] (899 bytes) hkcdPlanarGeometryPlanesCollection::createMergedCollection(hkcdPlanarGeometryPlanesCollection const*,hkcdPlanarGeometryPlanesCollection const*,hkArray<int,hkContainerHeapAllocator> *)
// int *hkcdPlanarGeometryPlanesCollection::createMergedCollection( hkcdPlanarGeometryPlanesCollection *this, const hkcdPlanarGeometryPlanesCollection *a2, const hkcdPlanarGeometryPlanesCollection *a3);
// [0x15d1e60] (163 bytes) hkcdPlanarGeometry::VertexStorage::~VertexStorage()
// void hkcdPlanarGeometry::VertexStorage::~VertexStorage(hkcdPlanarGeometry::VertexStorage *this);
// [0x15d2130] (106 bytes) hkcdPlanarGeometry::VertexStorage::~VertexStorage()
// void hkcdPlanarGeometry::VertexStorage::~VertexStorage(hkcdPlanarGeometry::VertexStorage *this);
// [0x15d21a0] (434 bytes) hkcdPlanarGeometry::~hkcdPlanarGeometry()
// void hkcdPlanarGeometry::~hkcdPlanarGeometry(hkcdPlanarGeometry *this);
// [0x15d2360] (93 bytes) hkcdPlanarGeometry::~hkcdPlanarGeometry()
// void hkcdPlanarGeometry::~hkcdPlanarGeometry(hkcdPlanarGeometry *this);
// [0x15d2cf0] (271 bytes) hkcdMathErrorBoundsCalculator::ulp(hkVector4d const&,hkVector4d&)
// int hkcdMathErrorBoundsCalculator::ulp(uint32_t *a1, __m128d *a2);
// [0x15d2e00] (716 bytes) hkcdPlanarGeometryPredicates::sameOrientation(hkcdPlanarGeometryPrimitives::Plane const&,hkcdPlanarGeometryPrimitives::Plane const&)
// bool hkcdPlanarGeometryPredicates::sameOrientation( hkcdPlanarGeometryPredicates *this, const hkcdPlanarGeometryPrimitives::Plane *a2);
// [0x15d30d0] (627 bytes) hkcdPlanarGeometryPredicates::computeApproxDet4(hkcdPlanarGeometryPrimitives::Plane const&,hkcdPlanarGeometryPrimitives::Plane const&,hkcdPlanarGeometryPrimitives::Plane const&,hkcdPlanarGeometryPrimitives::Plane const&,hkVector4dComparison &,hkVector4dComparison &)
// bool hkcdPlanarGeometryPredicates::computeApproxDet4( double *a1, double *a2, double *a3, double *a4, int *a5, uint32_t *a6);
// [0x15d3350] (247 bytes) hkcdPlanarGeometry::hkcdPlanarGeometry(hkcdPlanarGeometryPlanesCollection *,hkcdPlanarGeometryPolygonCollection *,hkcdPlanarEntityDebugger *)
// void (**hkcdPlanarGeometry::hkcdPlanarGeometry( uint32_t *a1, int a2, int a3, int a4))(hkcdPlanarGeometry *__hidden this);
// [0x15d3450] (1242 bytes) hkcdPlanarGeometry::hkcdPlanarGeometry(hkcdPlanarGeometry const&)
// void hkcdPlanarGeometry::hkcdPlanarGeometry(hkcdPlanarGeometry *this, const hkcdPlanarGeometry *a2);
// [0x15d3930] (9 bytes) hkcdPlanarGeometry::weldPolygonVertices(void)
// void hkcdPlanarGeometry::weldPolygonVertices();
// [0x15d3940] (405 bytes) hkcdPlanarGeometry::approxClassify(hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkHandle<unsigned int,268435455u,hkcdPlanarGeometryPrimitives::PlaneIdDiscriminant>)const
// int hkcdPlanarGeometry::approxClassify(int *a1, int a2, int a3);
// [0x15d3ae0] (456 bytes) hkcdPlanarGeometry::copyVerticesCacheFrom(hkcdPlanarGeometry const&)
// 0x15d3ae0 hkcdPlanarGeometry::copyVerticesCacheFrom(hkcdPlanarGeometry const&)
// [0x15d3cb0] (1234 bytes) hkcdPlanarGeometry::transformVerticesCache(hkQTransform const&,bool)
// double *hkcdPlanarGeometry::transformVerticesCache(hkcdPlanarGeometry *this, __m128 *a2, bool a3);
// [0x15d4e00] (5547 bytes) hkcdPlanarGeometryPredicates::computeExactDet4(hkcdPlanarGeometryPrimitives::Plane const&,hkcdPlanarGeometryPrimitives::Plane const&,hkcdPlanarGeometryPrimitives::Plane const&,hkcdPlanarGeometryPrimitives::Plane const&,hkVector4dComparison &,hkVector4dComparison &)
// int hkcdPlanarGeometryPredicates::computeExactDet4(int a1, int a2, int a3, int a4, int *a5, int *a6);
// [0x15d63b0] (260 bytes) hkcdPlanarGeometry::shiftPlaneIds(int)
// unsigned int hkcdPlanarGeometry::shiftPlaneIds(hkcdPlanarGeometry *this, int a2);
// [0x15d64c0] (220 bytes) hkcdPlanarGeometry::checkPlanesConsistency(void)const
// int hkcdPlanarGeometry::checkPlanesConsistency(hkcdPlanarGeometry *this);
// [0x15d65a0] (129 bytes) hkcdPlanarGeometry::remapPolygonMaterialIds(hkArray<unsigned int,hkContainerHeapAllocator> &)
// unsigned int hkcdPlanarGeometry::remapPolygonMaterialIds( hkcdPlanarGeometry *this, hkArray<unsigned int, hkContainerHeapAllocator> *a2);
// [0x15d6630] (137 bytes) hkcdPlanarGeometry::containsPolygonsWithInvalidMaterial(void)const
// unsigned int hkcdPlanarGeometry::containsPolygonsWithInvalidMaterial(hkcdPlanarGeometry *this);
// [0x15d66c0] (238 bytes) hkcdPlanarGeometry::collectUsedPlaneIds(hkBitField &)const
// unsigned int hkcdPlanarGeometry::collectUsedPlaneIds(hkcdPlanarGeometry *this, hkBitField *a2);
// [0x15d67b0] (135 bytes) hkcdPlanarGeometry::collectUsedMaterialIds(hkBitField &)const
// unsigned int hkcdPlanarGeometry::collectUsedMaterialIds(hkcdPlanarGeometry *this, hkBitField *a2);
// [0x15d6840] (169 bytes) hkcdPlanarGeometry::getAllPolygons(hkArray<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkContainerHeapAllocator> &)const
// unsigned int hkcdPlanarGeometry::getAllPolygons(int a1, hkMemoryAllocator *a2);
// [0x15d68f0] (662 bytes) hkcdPlanarGeometry::setPlanesCollection(hkcdPlanarGeometryPlanesCollection *,int const*)
// hkcdPlanarGeometry *hkcdPlanarGeometry::setPlanesCollection( hkcdPlanarGeometry *this, hkcdPlanarGeometryPlanesCollection *a2, const int *a3);
// [0x15d6b90] (86 bytes) hkcdPlanarGeometryPrimitives::Collection<28>::getPrevAllocatedAddress(int)const
// int hkcdPlanarGeometryPrimitives::Collection<28>::getPrevAllocatedAddress( hkcdPlanarGeometryPrimitives::Collection<28> *this, int a2);
// [0x15d6bf0] (601 bytes) hkcdPlanarGeometryPrimitives::Collection<28>::create(int)
// unsigned int hkcdPlanarGeometryPrimitives::Collection<28>::create( hkcdPlanarGeometryPrimitives::Collection<28> *this, int a2);
// [0x15d6e50] (385 bytes) hkcdPlanarGeometry::hkcdPlanarGeometry(hkcdPlanarGeometryPlanesCollection *,int,hkcdPlanarEntityDebugger *)
// unsigned int hkcdPlanarGeometry::hkcdPlanarGeometry(uint32_t *a1, int a2, int a3, int a4);
// [0x15d6fe0] (2319 bytes) hkcdPlanarGeometryPredicates::Orientation hkcdPlanarGeometryPredicates::orientation<12>(hkcdPlanarGeometryPrimitives::Plane const&,hkcdPlanarGeometryPrimitives::Plane const&,hkcdPlanarGeometryPrimitives::Plane const&,hkcdPlanarGeometryPrimitives::Plane const&,hkIntVector const&,hkcdPlanarGeometryPredicates::OrientationCacheBase<12> *)
// int hkcdPlanarGeometryPredicates::orientation<12>( double *a1, double *a2, double *a3, double *a4, uint32_t *a5, int a6);
// [0x15d78f0] (1565 bytes) hkcdPlanarGeometry::clipPolygon(hkHandle<unsigned int,268435455u,hkcdPlanarGeometryPrimitives::PlaneIdDiscriminant>,hkHandle<unsigned int,268435455u,hkcdPlanarGeometryPrimitives::PlaneIdDiscriminant>*&,hkHandle<unsigned int,268435455u,hkcdPlanarGeometryPrimitives::PlaneIdDiscriminant>*&,int,hkHandle<unsigned int,268435455u,hkcdPlanarGeometryPrimitives::PlaneIdDiscriminant> const*,int)
// int hkcdPlanarGeometry::clipPolygon(int a1, int a2, int *a3, int *a4, int a5, int a6, int a7);
// [0x15d7f10] (1069 bytes) hkcdPlanarGeometry::classify(hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkHandle<unsigned int,268435455u,hkcdPlanarGeometryPrimitives::PlaneIdDiscriminant>)const
// int hkcdPlanarGeometry::classify(uint32_t *a1, int a2, int a3);
// [0x15d83e0] (137 bytes) hkcdPlanarGeometryPrimitives::Collection<28>::remove(unsigned int,unsigned int,unsigned int)
// int hkcdPlanarGeometryPrimitives::Collection<28>::remove( hkcdPlanarGeometryPrimitives::Collection<28> *this, unsigned int a2, unsigned int a3, unsigned int a4);
// [0x15d8470] (128 bytes) hkcdPlanarGeometry::removePolygons(hkArray<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkContainerHeapAllocator> const&)
// unsigned int hkcdPlanarGeometry::removePolygons(int a1, uint32_t *a2);
// [0x15d84f0] (293 bytes) hkcdPlanarGeometry::keepPolygons(hkArray<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkContainerHeapAllocator> const&)
// unsigned int hkcdPlanarGeometry::keepPolygons(int a1, uint32_t *a2);
// [0x15d8620] (970 bytes) hkcdPlanarGeometryPrimitives::Collection<28>::expandStorage(unsigned int)
// unsigned int hkcdPlanarGeometryPrimitives::Collection<28>::expandStorage( hkcdPlanarGeometryPrimitives::Collection<28> *this, unsigned int a2);
// [0x15d89f0] (246 bytes) hkcdPlanarGeometryPrimitives::Collection<28>::insert(unsigned int)
// unsigned int hkcdPlanarGeometryPrimitives::Collection<28>::insert( hkcdPlanarGeometryPrimitives::Collection<28> *this, unsigned int a2);
// [0x15d8af0] (188 bytes) hkcdPlanarGeometry::addPolygon(hkHandle<unsigned int,268435455u,hkcdPlanarGeometryPrimitives::PlaneIdDiscriminant>,unsigned int,int)
// int *hkcdPlanarGeometry::addPolygon(int *a1, int a2, int a3, int a4, int a5);
// [0x15d8d40] (732 bytes) hkcdPlanarGeometryPredicates::approximateIntersectionFast(hkcdPlanarGeometryPrimitives::Plane const(&)[3],hkVector4d &)
// double *hkcdPlanarGeometryPredicates::approximateIntersectionFast(hkcdPlanarGeometryPredicates *a1, double *a2);
// [0x15d9020] (865 bytes) hkcdPlanarGeometry::recomputeVerticesCache(int)
// unsigned int hkcdPlanarGeometry::recomputeVerticesCache(hkcdPlanarGeometry *this, int a2);
// [0x15d9390] (75 bytes) hkcdPlanarGeometry::hkcdPlanarGeometry(hkFinishLoadedObjectFlag)
// hkcdPlanarGeometry *hkcdPlanarGeometry::hkcdPlanarGeometry(hkcdPlanarGeometry *a1, int a2);
// [0x15d93e0] (511 bytes) hkcdPlanarGeometry::computePolygonApproxVertices(hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant> const&)
// unsigned int hkcdPlanarGeometry::computePolygonApproxVertices(uint32_t *a1, uint32_t *a2);
// [0x15d95e0] (4475 bytes) hkcdPlanarGeometry::split(hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkHandle<unsigned int,268435455u,hkcdPlanarGeometryPrimitives::PlaneIdDiscriminant>,hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>&,hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>&)
// hkLifoAllocator *hkcdPlanarGeometry::split(uint32_t *a1, int a2, int a3, uint32_t *a4, uint32_t *a5);
// [0x15da760] (997 bytes) hkcdPlanarGeometry::extractPolygonGeometry(hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkGeometry &)const
// uint32_t *hkcdPlanarGeometry::extractPolygonGeometry(int a1, hkSimdInt<256> *a2, int *a3);
// [0x15dab50] (1195 bytes) hkcdPlanarGeometry::extractPolygonsGeometry(hkArray<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkContainerHeapAllocator> const&,hkGeometry &)const
// uint32_t *hkcdPlanarGeometry::extractPolygonsGeometry(int a1, uint32_t *a2, uint32_t *a3);
// [0x15db000] (1648 bytes) hkcdPlanarGeometry::extractGeometry(hkGeometry &)const
// int hkcdPlanarGeometry::extractGeometry(hkcdPlanarGeometryPrimitives::Collection<28> **this, hkGeometry *a2);
// [0x15db730] (1664 bytes) hkcdPlanarGeometry::appendGeometryPolygons(hkcdPlanarGeometry const&,int *,unsigned int,hkArray<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkContainerHeapAllocator> const&,hkArray<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkContainerHeapAllocator>&,bool,int)
// int hkcdPlanarGeometry::appendGeometryPolygons( uint32_t *a1, int a2, int a3, unsigned int a4, uint32_t *a5, hkMemoryAllocator *a6, char a7, int a8);
// [0x15dbe10] (2239 bytes) hkcdPlanarGeometry::check2dIntersection(hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant> const&,hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant> const&)const
// int hkcdPlanarGeometry::check2dIntersection(uint32_t *a1, uint32_t *a2, uint32_t *a3);
// [0x15dc6d0] (1266 bytes) hkcdPlanarGeometry::check2dIntersection(hkcdPlanarGeometry const&,hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant> const&,hkcdPlanarGeometry const&,hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant> const&)
// int hkcdPlanarGeometry::check2dIntersection(int a1, uint32_t *a2, int a3, uint32_t *a4);
// [0x15dcbd0] (1630 bytes) hkcdPlanarGeometry::appendGeometryPolygons(hkcdPlanarGeometry const&,hkArray<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkContainerHeapAllocator> const&,bool,hkArray<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkContainerHeapAllocator>&,int)
// int hkcdPlanarGeometry::appendGeometryPolygons(int a1, int a2, uint32_t *a3, char a4, int *a5, int a6);
// [0x15dd230] (604 bytes) hkcdPlanarGeometry::getAllPolygonsPlanes(hkArray<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkContainerHeapAllocator> const&,hkArray<hkHandle<unsigned int,268435455u,hkcdPlanarGeometryPrimitives::PlaneIdDiscriminant>,hkContainerHeapAllocator> &,bool)const
// hkArrayUtil *hkcdPlanarGeometry::getAllPolygonsPlanes(int a1, uint32_t *a2, int *a3, char a4);
// [0x15dd490] (461 bytes) hkcdPlanarGeometry::weldPlanes(hkArray<int,hkContainerHeapAllocator> *)
// void hkcdPlanarGeometry::weldPlanes( const hkcdPlanarGeometryPlanesCollection **this, hkArray<int, hkContainerHeapAllocator> *a2);
// [0x15dd660] (708 bytes) hkcdPlanarGeometry::checkPolygonCachedValues(hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant> const&)
// int hkcdPlanarGeometry::checkPolygonCachedValues(uint32_t *a1, uint32_t *a2);
// [0x15dd930] (1125 bytes) hkcdPlanarGeometry::checkPolygonConvexity(hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant> const&)
// int hkcdPlanarGeometry::checkPolygonConvexity(uint32_t *a1, uint32_t *a2);
// [0x15ddda0] (1662 bytes) hkcdConvexCellsTree2D::createBoundaryCell(void)
// hkcdConvexCellsTree2D *hkcdConvexCellsTree2D::createBoundaryCell(hkcdConvexCellsTree2D *this, uint32_t *a2);
// [0x15de420] (652 bytes) hkcdConvexCellsTree2D::buildFromSolid(hkcdPlanarSolid *)
// int hkcdConvexCellsTree2D::buildFromSolid(hkcdConvexCellsTree2D *this, hkcdPlanarSolid *a2);
// [0x15de6b0] (348 bytes) hkcdConvexCellsTree<hkcdPlanarGeometryPolygonCollection::Polygon,hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkcdPlanarGeometry>::hkcdConvexCellsTree(hkcdPlanarGeometry*)
// unsigned int hkcdConvexCellsTree<hkcdPlanarGeometryPolygonCollection::Polygon,hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkcdPlanarGeometry>::hkcdConvexCellsTree( hkcdConvexCellsTree<hkcdPlanarGeometryPolygonCollection::Polygon, hkHandle<unsigned int, 0u, hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>, hkcdPlanarGeometry> *this, hkcdPlanarGeometry *a2);
// [0x15de810] (242 bytes) hkcdConvexCellsTree2D::hkcdConvexCellsTree2D(hkcdPlanarGeometry *,hkHandle<unsigned int,268435455u,hkcdPlanarGeometryPrimitives::PlaneIdDiscriminant>)
// hkcdPlanarGeometry *hkcdConvexCellsTree2D::hkcdConvexCellsTree2D( volatile int32_t **a1, hkcdPlanarGeometryPlanesCollection **a2, volatile int32_t *a3);
// [0x15de910] (42 bytes) hkcdPlanarGeometryPrimitives::Plane::Plane(hkFinishLoadedObjectFlag)
// hkcdPlanarGeometryPrimitives::Plane *hkcdPlanarGeometryPrimitives::Plane::Plane( hkcdPlanarGeometryPrimitives::Plane *a1, hkcdPlanarGeometryPrimitives::Plane *a2);
// [0x15e02d0] (95 bytes) hkcdPlanarGeometryPrimitives::Plane::getExactOffset(hkSimdInt<128> &)const
// int64_t hkcdPlanarGeometryPrimitives::Plane::getExactOffset( hkcdPlanarGeometryPrimitives::Plane *this, hkSimdInt<128> *a2);
// [0x15e0330] (5217 bytes) hkcdPlanarGeometryPredicates::approximateEdgeDirection(hkcdPlanarGeometryPrimitives::Plane const&,hkcdPlanarGeometryPrimitives::Plane const&,hkIntVector &)
// int *hkcdPlanarGeometryPredicates::approximateEdgeDirection(int a1, int a2, int *a3);
// [0x15e17a0] (833 bytes) hkcdPlanarGeometryPredicates::approximateEdgeDirectionFast(hkcdPlanarGeometryPrimitives::Plane const&,hkcdPlanarGeometryPrimitives::Plane const&,hkIntVector &)
// uint32_t *hkcdPlanarGeometryPredicates::approximateEdgeDirectionFast( __m128i a1, int a2, double *a3, uint32_t *a4);
// [0x15e1af0] (1889 bytes) hkcdPlanarGeometryPredicates::orientation(hkcdPlanarGeometryPrimitives::Plane const&,hkcdPlanarGeometryPrimitives::Plane const&,hkcdPlanarGeometryPrimitives::Plane const&,hkcdPlanarGeometryPrimitives::Plane const&)
// int hkcdPlanarGeometryPredicates::orientation( hkcdPlanarGeometryPredicates *this, const hkcdPlanarGeometryPrimitives::Plane *a2, const hkcdPlanarGeometryPrimitives::Plane *a3, const hkcdPlanarGeometryPrimitives::Plane *a4);
// [0x15e2260] (6907 bytes) hkcdPlanarGeometryPredicates::computeIntersectionDeterminants(hkcdPlanarGeometryPrimitives::Plane const(&)[3],hkSimdInt<256> *,hkSimdInt<256> *,hkSimdInt<256> *,hkSimdInt<256> *)
// __m128 *hkcdPlanarGeometryPredicates::computeIntersectionDeterminants( hkcdPlanarGeometryPredicates *this, __m128 *a2, __m128 *a3, __m128 *a4, hkSimdInt<256> *a5);
// [0x15e3d60] (954 bytes) hkcdPlanarGeometryPredicates::edgeOnPlane(hkcdPlanarGeometryPrimitives::Plane const&,hkcdPlanarGeometryPrimitives::Plane const&,hkcdPlanarGeometryPrimitives::Plane const&)
// int hkcdPlanarGeometryPredicates::edgeOnPlane( hkcdPlanarGeometryPredicates *this, const hkcdPlanarGeometryPrimitives::Plane *a2, const hkcdPlanarGeometryPrimitives::Plane *a3);
// [0x15e4430] (5908 bytes) hkcdPlanarGeometryPredicates::coplanar(hkcdPlanarGeometryPrimitives::Plane const&,hkcdPlanarGeometryPrimitives::Plane const&,hkcdPlanarGeometryPrimitives::Plane const&,hkcdPlanarGeometryPrimitives::Plane const*,int)
// int hkcdPlanarGeometryPredicates::coplanar( hkcdPlanarGeometryPredicates *this, const hkcdPlanarGeometryPrimitives::Plane *a2, const hkcdPlanarGeometryPrimitives::Plane *a3, const hkcdPlanarGeometryPrimitives::Plane *a4, const hkcdPlanarGeometryPrimitives::Plane *a5);
// [0x15e5b50] (5407 bytes) hkcdPlanarGeometryPredicates::coplanar(hkVector4d const&,hkcdPlanarGeometryPrimitives::Plane const&,hkcdPlanarGeometryPrimitives::Plane const&,hkcdPlanarGeometryPrimitives::Plane const&,hkcdPlanarGeometryPrimitives::Plane const*,int)
// int hkcdPlanarGeometryPredicates::coplanar( double *a1, hkcdPlanarGeometryPrimitives::Plane *a2, hkcdPlanarGeometryPrimitives::Plane *a3, uint32_t *a4, int a5, int a6);
// [0x15edb60] (2410 bytes) hkcdPlanarGeometryPredicates::computeExactTriangleWinding(hkcdPlanarGeometryPrimitives::Plane const(&)[3],hkcdPlanarGeometryPrimitives::Plane const(&)[3],hkcdPlanarGeometryPrimitives::Plane const(&)[3],hkcdPlanarGeometryPrimitives::Plane const&,int,int,int)
// int hkcdPlanarGeometryPredicates::computeExactTriangleWinding( hkcdPlanarGeometryPredicates *this, hkcdPlanarGeometryPrimitives::Plane (*a2)[3], hkcdPlanarGeometryPrimitives::Plane (*a3)[3], const hkcdPlanarGeometryPrimitives::Plane (*a4)[3], const hkcdPlanarGeometryPrimitives::Plane *a5, int a6, int a7);
// [0x15ee4d0] (3299 bytes) hkcdPlanarGeometryPredicates::estimateTriangleWinding(hkcdPlanarGeometryPrimitives::Plane const(&)[3],hkcdPlanarGeometryPrimitives::Plane const(&)[3],hkcdPlanarGeometryPrimitives::Plane const(&)[3],hkcdPlanarGeometryPrimitives::Plane const&,int,int,int)
// int hkcdPlanarGeometryPredicates::estimateTriangleWinding( hkcdPlanarGeometryPredicates *this, hkcdPlanarGeometryPrimitives::Plane (*a2)[3], hkcdPlanarGeometryPrimitives::Plane (*a3)[3], const hkcdPlanarGeometryPrimitives::Plane (*a4)[3], const hkcdPlanarGeometryPrimitives::Plane *a5, int a6, int a7);
// [0x15ef2f0] (22 bytes) hkcdStaticPvs::BlockHeader::staticClass(void)
// void *hkcdStaticPvs::BlockHeader::staticClass();
// [0x15ef310] (22 bytes) hkcdStaticPvs::staticClass(void)
// void *hkcdStaticPvs::staticClass();
// [0x15ef4f0] (22 bytes) hkcdStaticTree::Codec3Axis::staticClass(void)
// void *hkcdStaticTree::Codec3Axis::staticClass();
// [0x15ef510] (22 bytes) hkcdStaticTree::Codec3Axis4::staticClass(void)
// void *hkcdStaticTree::Codec3Axis4::staticClass();
// [0x15ef530] (22 bytes) hkcdStaticTree::Codec3Axis5::staticClass(void)
// void *hkcdStaticTree::Codec3Axis5::staticClass();
// [0x15ef550] (22 bytes) hkcdStaticTree::Codec3Axis6::staticClass(void)
// void *hkcdStaticTree::Codec3Axis6::staticClass();
// [0x15ef570] (22 bytes) hkcdStaticTree::CodecRaw::staticClass(void)
// void *hkcdStaticTree::CodecRaw::staticClass();
// [0x15ef910] (22 bytes) hkcdFourAabb::staticClass(void)
// void *hkcdFourAabb::staticClass();
// [0x15efd80] (22 bytes) hkcdStaticTree::DefaultTreeStorage32::staticClass(void)
// void *hkcdStaticTree::DefaultTreeStorage32::staticClass();
// [0x15efda0] (22 bytes) hkcdStaticTree::DefaultTreeStorage4::staticClass(void)
// void *hkcdStaticTree::DefaultTreeStorage4::staticClass();
// [0x15efdc0] (22 bytes) hkcdStaticTree::DefaultTreeStorage5::staticClass(void)
// void *hkcdStaticTree::DefaultTreeStorage5::staticClass();
// [0x15efde0] (22 bytes) hkcdStaticTree::DefaultTreeStorage6::staticClass(void)
// void *hkcdStaticTree::DefaultTreeStorage6::staticClass();
// [0x15f0460] (22 bytes) hkcdDynamicTree::Codec18::staticClass(void)
// void *hkcdDynamicTree::Codec18::staticClass();
// [0x15f0480] (22 bytes) hkcdDynamicTree::Codec32::staticClass(void)
// void *hkcdDynamicTree::Codec32::staticClass();
// [0x15f04a0] (22 bytes) hkcdDynamicTree::CodecInt16::IntAabb::staticClass(void)
// void *hkcdDynamicTree::CodecInt16::IntAabb::staticClass();
// [0x15f04c0] (22 bytes) hkcdDynamicTree::CodecInt16::staticClass(void)
// void *hkcdDynamicTree::CodecInt16::staticClass();
// [0x15f04e0] (22 bytes) hkcdDynamicTree::CodecRawUint::staticClass(void)
// void *hkcdDynamicTree::CodecRawUint::staticClass();
// [0x15f0500] (22 bytes) hkcdDynamicTree::CodecRawUlong::staticClass(void)
// void *hkcdDynamicTree::CodecRawUlong::staticClass();
// [0x15f0af0] (22 bytes) hkcdDynamicTree::AnisotropicMetric::staticClass(void)
// void *hkcdDynamicTree::AnisotropicMetric::staticClass();
// [0x15f0b10] (22 bytes) hkcdDynamicTree::BalanceMetric::staticClass(void)
// void *hkcdDynamicTree::BalanceMetric::staticClass();
// [0x15f0b30] (22 bytes) hkcdDynamicTree::CentroidMetric::staticClass(void)
// void *hkcdDynamicTree::CentroidMetric::staticClass();
// [0x15f0e10] (22 bytes) hkcdAdf::staticClass(void)
// void *hkcdAdf::staticClass();
// [0x15f0f70] (22 bytes) hkcdSimdTree::Node::staticClass(void)
// void *hkcdSimdTree::Node::staticClass();
// [0x15f0f90] (22 bytes) hkcdSimdTree::staticClass(void)
// void *hkcdSimdTree::staticClass();
// [0x15f1680] (22 bytes) hkcdDynamicTree::DynamicStorage16::staticClass(void)
// void *hkcdDynamicTree::DynamicStorage16::staticClass();
// [0x15f16a0] (22 bytes) hkcdDynamicTree::DynamicStorage32::staticClass(void)
// void *hkcdDynamicTree::DynamicStorage32::staticClass();
// [0x15f16c0] (22 bytes) hkcdDynamicTree::DynamicStorageInt16::staticClass(void)
// void *hkcdDynamicTree::DynamicStorageInt16::staticClass();
// [0x15f16e0] (22 bytes) hkcdDynamicTree::DynamicStoragePtr::staticClass(void)
// void *hkcdDynamicTree::DynamicStoragePtr::staticClass();
// [0x15f1f60] (22 bytes) hkcdStaticAabbTree::staticClass(void)
// void *hkcdStaticAabbTree::staticClass();
// [0x15f23e0] (22 bytes) hkcdDynamicTree::DefaultTree32Storage::staticClass(void)
// void *hkcdDynamicTree::DefaultTree32Storage::staticClass();
// [0x15f2400] (22 bytes) hkcdDynamicTree::DefaultTree48Storage::staticClass(void)
// void *hkcdDynamicTree::DefaultTree48Storage::staticClass();
// [0x15f2420] (22 bytes) hkcdDynamicTree::DefaultTreeInt16Storage::staticClass(void)
// void *hkcdDynamicTree::DefaultTreeInt16Storage::staticClass();
// [0x15f2440] (22 bytes) hkcdDynamicTree::DefaultTreePtrStorage::staticClass(void)
// void *hkcdDynamicTree::DefaultTreePtrStorage::staticClass();
// [0x15f2c50] (22 bytes) hkcdStaticMeshTreeBase::Section::SharedVertices::staticClass(void)
// void *hkcdStaticMeshTreeBase::Section::SharedVertices::staticClass();
// [0x15f2c70] (22 bytes) hkcdStaticMeshTreeBase::Section::Primitives::staticClass(void)
// void *hkcdStaticMeshTreeBase::Section::Primitives::staticClass();
// [0x15f2c90] (22 bytes) hkcdStaticMeshTreeBase::Section::DataRuns::staticClass(void)
// void *hkcdStaticMeshTreeBase::Section::DataRuns::staticClass();
// [0x15f2cb0] (22 bytes) hkcdStaticMeshTreeBase::Section::staticClass(void)
// void *hkcdStaticMeshTreeBase::Section::staticClass();
// [0x15f2cd0] (22 bytes) hkcdStaticMeshTreeBase::Primitive::staticClass(void)
// void *hkcdStaticMeshTreeBase::Primitive::staticClass();
// [0x15f2cf0] (22 bytes) hkcdStaticMeshTreeBase::staticClass(void)
// void *hkcdStaticMeshTreeBase::staticClass();
// [0x15f2d10] (22 bytes) hkcdStaticMeshTreeDefaultDataRun::staticClass(void)
// void *hkcdStaticMeshTreeDefaultDataRun::staticClass();
// [0x15f3620] (22 bytes) hkcdStaticTree::DynamicStorage32::staticClass(void)
// void *hkcdStaticTree::DynamicStorage32::staticClass();
// [0x15f3640] (22 bytes) hkcdStaticTree::DynamicStorage4::staticClass(void)
// void *hkcdStaticTree::DynamicStorage4::staticClass();
// [0x15f3660] (22 bytes) hkcdStaticTree::DynamicStorage5::staticClass(void)
// void *hkcdStaticTree::DynamicStorage5::staticClass();
// [0x15f3680] (22 bytes) hkcdStaticTree::DynamicStorage6::staticClass(void)
// void *hkcdStaticTree::DynamicStorage6::staticClass();
// [0x15f3c10] (29 bytes) hkcdSimdTree::IParallelBuild::IRunnable::~IRunnable()
// void hkcdSimdTree::IParallelBuild::IRunnable::~IRunnable(hkcdSimdTree::IParallelBuild::IRunnable *this);
// [0x15f3c30] (9 bytes) hkcdSimdTreeUtils::Build::EmptyRunnable::run(void)
// void hkcdSimdTreeUtils::Build::EmptyRunnable::run();
// [0x15f3c40] (29 bytes) hkcdSimdTreeUtils::Build::IRefit::~IRefit()
// void hkcdSimdTreeUtils::Build::IRefit::~IRefit(hkcdSimdTreeUtils::Build::IRefit *this);
// [0x15f3c60] (29 bytes) hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromICustomRefit>::~RefitT()
// void hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromICustomRefit>::~RefitT( hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromICustomRefit> *this);
// [0x15f3c80] (29 bytes) hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromSpheres>::~RefitT()
// void hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromSpheres>::~RefitT( hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromSpheres> *this);
// [0x15f3ca0] (29 bytes) hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs16>::~RefitT()
// void hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs16>::~RefitT( hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs16> *this);
// [0x15f3cc0] (29 bytes) hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs>::~RefitT()
// void hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs>::~RefitT( hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs> *this);
// [0x15f3ce0] (29 bytes) hkcdSimdTreeUtils::Build::Task::~Task()
// void hkcdSimdTreeUtils::Build::Task::~Task(hkcdSimdTreeUtils::Build::Task *this);
// [0x15f3d00] (29 bytes) hkcdSimdTreeUtils::Build::EmptyRunnable::~EmptyRunnable()
// void hkcdSimdTreeUtils::Build::EmptyRunnable::~EmptyRunnable(hkcdSimdTreeUtils::Build::EmptyRunnable *this);
// [0x15f3d20] (45 bytes) hkcdSimdTreeUtils::Build::IRefit::~IRefit()
// void hkcdSimdTreeUtils::Build::IRefit::~IRefit(hkcdSimdTreeUtils::Build::IRefit *this);
// [0x15f3d50] (45 bytes) hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromICustomRefit>::~RefitT()
// void hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromICustomRefit>::~RefitT( hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromICustomRefit> *this);
// [0x15f3d80] (45 bytes) hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromSpheres>::~RefitT()
// void hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromSpheres>::~RefitT( hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromSpheres> *this);
// [0x15f3db0] (45 bytes) hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs16>::~RefitT()
// void hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs16>::~RefitT( hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs16> *this);
// [0x15f3de0] (45 bytes) hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs>::~RefitT()
// void hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs>::~RefitT( hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs> *this);
// [0x15f3e10] (78 bytes) hkcdSimdTreeUtils::Build::EmptyRunnable::~EmptyRunnable()
// void hkcdSimdTreeUtils::Build::EmptyRunnable::~EmptyRunnable(hkcdSimdTreeUtils::Build::EmptyRunnable *this);
// [0x15f3e60] (78 bytes) hkcdSimdTreeUtils::Build::Task::~Task()
// void hkcdSimdTreeUtils::Build::Task::~Task(hkcdSimdTreeUtils::Build::Task *this);
// [0x15f3eb0] (78 bytes) hkcdSimdTree::IParallelBuild::IRunnable::~IRunnable()
// void hkcdSimdTree::IParallelBuild::IRunnable::~IRunnable(hkcdSimdTree::IParallelBuild::IRunnable *this);
// [0x15f3f00] (111 bytes) hkcdSimdTree::~hkcdSimdTree()
// void hkcdSimdTree::~hkcdSimdTree(hkcdSimdTree *this);
// [0x15f3f70] (150 bytes) hkcdSimdTree::~hkcdSimdTree()
// void hkcdSimdTree::~hkcdSimdTree(hkcdSimdTree *this);
// [0x15f4010] (466 bytes) hkcdDynamicSimdTree::~hkcdDynamicSimdTree()
// void hkcdDynamicSimdTree::~hkcdDynamicSimdTree(pthread_mutex_t *this);
// [0x15f41f0] (505 bytes) hkcdDynamicSimdTree::~hkcdDynamicSimdTree()
// void hkcdDynamicSimdTree::~hkcdDynamicSimdTree(pthread_mutex_t *this);
// [0x15f47e0] (221 bytes) hkcdFourAabb::getCompoundAabb(hkAabb *)const
// float *hkcdFourAabb::getCompoundAabb(hkcdFourAabb *this, __m128 *a2);
// [0x15f48c0] (453 bytes) hkcdSimdTreeUtils::CompactAndCount_GenericSimd::compactAndCount(hkVector4fComparison const&,hkIntVector const&,hkIntVector*)
// int hkcdSimdTreeUtils::CompactAndCount_GenericSimd::compactAndCount(int *a1, unsigned int *a2, _OWORD *a3);
// [0x15f4a90] (530 bytes) hkcdSimdTree::clear(void)
// uint32_t *hkcdSimdTree::clear(hkcdSimdTree *this);
// [0x15f4cb0] (2303 bytes) hkcdDynamicSimdTree::refitBranch(int)
// int hkcdDynamicSimdTree::refitBranch(hkcdDynamicSimdTree *this, int a2);
// [0x15f55b0] (267 bytes) hkcdSimdTreeUtils::getMaxDepth(hkcdSimdTree::Node const*,int,int)
// int hkcdSimdTreeUtils::getMaxDepth(hkcdSimdTreeUtils *this, const hkcdSimdTree::Node *a2, int a3);
// [0x15f56c0] (388 bytes) hkcdSimdTreeUtils::Build::splitRange(hkcdSimdTree::BuildContext &,hkcdSimdTreeUtils::Build::Range const&,int,float,int,hkcdSimdTreeUtils::Build::Range*,hkcdSimdTreeUtils::Build::Range*)
// int hkcdSimdTreeUtils::Build::splitRange(int a1, int *a2, int a3, float a4, int a5, uint32_t *a6, uint32_t *a7);
// [0x15f5850] (699 bytes) hkcdSimdTreeUtils::Build::splitRangeInTwo(hkcdSimdTree::BuildContext &,hkcdSimdTreeUtils::Build::Range const&,hkcdSimdTreeUtils::Build::Range*,hkcdSimdTreeUtils::Build::Range*)
// int hkcdSimdTreeUtils::Build::splitRangeInTwo(int a1, int *a2, uint32_t *a3, uint32_t *a4);
// [0x15f5b10] (1290 bytes) hkcdSimdTreeUtils::Build::splitRangeInFourSinglePass(hkcdSimdTree::BuildContext &,hkcdSimdTreeUtils::Build::Range const&,hkcdSimdTreeUtils::Build::Range*)
// int hkcdSimdTreeUtils::Build::splitRangeInFourSinglePass(int a1, int *a2, uint32_t *a3);
// [0x15f6020] (622 bytes) hkcdSimdTreeUtils::Build::createChildren(hkcdSimdTree::BuildContext const&,hkcdSimdTreeUtils::Build::Range const*,int,hkcdSimdTree::Node const*,hkcdSimdTree::Node*,hkcdSimdTree::Node* restrict&,hkcdSimdTreeUtils::Build::Range*,int &)
// __m128i *hkcdSimdTreeUtils::Build::createChildren( int a1, int *a2, int a3, int a4, __m128i *a5, uint32_t *a6, int a7, uint32_t *a8);
// [0x15f6290] (1480 bytes) hkcdSimdTreeUtils::Build::buildHierarchy(hkcdSimdTree::BuildContext &,hkcdSimdTreeUtils::Build::Range const&,hkcdSimdTree::Node *,hkcdSimdTree::Node *&)
// __m128i *hkcdSimdTreeUtils::Build::buildHierarchy(int a1, int *a2, int a3, uint32_t *a4);
// [0x15f6860] (296 bytes) hkcdSimdTreeUtils::Build::Task::run(void)
// int hkcdSimdTreeUtils::Build::Task::run(volatile int32_t **this);
// [0x15f6990] (571 bytes) hkcdSimdTree::hkcdSimdTree(hkFinishLoadedObjectFlag)
// uint32_t *hkcdSimdTree::hkcdSimdTree(int *a1, uint32_t *a2);
// [0x15f6bd0] (53 bytes) hkcdSimdTree::getDepth(unsigned int)const
// int hkcdSimdTree::getDepth(hkcdSimdTreeUtils **this, hkcdSimdTree::Node *a2);
// [0x15f6c10] (295 bytes) hkcdSimdTree::countLeaves(int,bool)const
// int hkcdSimdTree::countLeaves(hkcdSimdTree *this, int a2, bool a3);
// [0x15f6d40] (401 bytes) hkcdSimdTree::countLeaves(hkArray<int,hkContainerHeapAllocator> &)const
// int hkcdSimdTree::countLeaves(hkcdSimdTree *this, hkArray<int, hkContainerHeapAllocator> *a2);
// [0x15f6ee0] (763 bytes) hkcdDynamicSimdTree::clear(bool)
// int hkcdDynamicSimdTree::clear(hkcdDynamicSimdTree *this, bool a2);
// [0x15f71e0] (448 bytes) hkcdDynamicSimdTree::reserveLeaves(int,bool)
// int hkcdDynamicSimdTree::reserveLeaves(hkcdDynamicSimdTree *this, int a2, bool a3);
// [0x15f73a0] (160 bytes) hkcdDynamicSimdTree::allocateLeaf(void)
// int hkcdDynamicSimdTree::allocateLeaf(hkcdDynamicSimdTree *this);
// [0x15f7440] (122 bytes) hkcdDynamicSimdTree::releaseLeaf(int)
// int hkcdDynamicSimdTree::releaseLeaf(hkcdDynamicSimdTree *this, int a2);
// [0x15f74c0] (143 bytes) hkcdDynamicSimdTree::getLeafAabb(int,hkAabb *)const
// hkAabb *hkcdDynamicSimdTree::getLeafAabb(hkcdDynamicSimdTree *this, int a2, hkAabb *a3);
// [0x15f7550] (149 bytes) hkcdDynamicSimdTree::refitLeaf(int,hkAabb const&)
// int hkcdDynamicSimdTree::refitLeaf(hkcdDynamicSimdTree *this, int a2, const hkAabb *a3);
// [0x15f75f0] (1072 bytes) hkcdDynamicSimdTree::refitAllLeaves(int,hkcdDynamicSimdTree::AabbProvider const*,int *)
// int hkcdDynamicSimdTree::refitAllLeaves( hkcdDynamicSimdTree *a1, int a2, int a3, uint32_t *a4, int a5, int a6, int *a7, int a8, int a9, int a10, int a11);
// [0x15f7a20] (1192 bytes) hkcdDynamicSimdTree::removeLeaf(int,hkcdDynamicSimdTree::ThreadContext *)
// int hkcdDynamicSimdTree::removeLeaf(hkcdDynamicSimdTree *a1, int a2, hkMemoryAllocator *a3);
// [0x15f7ed0] (1492 bytes) hkcdDynamicSimdTree::initializeThreadContexts(hkcdDynamicSimdTree::ThreadContext *,int,int)
// int hkcdDynamicSimdTree::initializeThreadContexts(int *a1, int *a2, int a3, int a4);
// [0x15f84b0] (420 bytes) hkcdDynamicSimdTree::releaseThreadContexts(hkcdDynamicSimdTree::ThreadContext *,int)
// unsigned int *hkcdDynamicSimdTree::releaseThreadContexts(uint32_t *a1, unsigned int *a2, int a3);
// [0x15f90d0] (1669 bytes) hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromICustomRefit>::refitBranch(hkVector4f const*,int,hkcdSimdTree::Node *,int,int)const
// int hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromICustomRefit>::refitBranch( hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromICustomRefit> *this, uint64_t a2, hkcdSimdTree::Node *a3, int a4, int a5);
// [0x15f9760] (1285 bytes) hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromICustomRefit>::refitNode(hkVector4f const*,int,hkcdSimdTree::Node const*,hkcdSimdTree::Node*)const
// int hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromICustomRefit>::refitNode( hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromICustomRefit> *this, uint64_t a2, const hkcdSimdTree::Node *a3, __m128 *a4);
// [0x15fa9e0] (2093 bytes) hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromSpheres>::refitBranch(hkVector4f const*,int,hkcdSimdTree::Node *,int,int)const
// int hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromSpheres>::refitBranch( hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromSpheres> *this, uint64_t a2, hkcdSimdTree::Node *a3, int a4, int a5);
// [0x15fb210] (1669 bytes) hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromSpheres>::refitNode(hkVector4f const*,int,hkcdSimdTree::Node const*,hkcdSimdTree::Node*)const
// int hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromSpheres>::refitNode( hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromSpheres> *this, uint64_t a2, const hkcdSimdTree::Node *a3, __m128 *a4);
// [0x15fcc90] (1917 bytes) hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs>::refitBranch(hkVector4f const*,int,hkcdSimdTree::Node *,int,int)const
// int hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs>::refitBranch( hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs> *this, uint64_t a2, hkcdSimdTree::Node *a3, int a4, int a5);
// [0x15fd410] (1429 bytes) hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs>::refitNode(hkVector4f const*,int,hkcdSimdTree::Node const*,hkcdSimdTree::Node*)const
// int hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs>::refitNode( hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs> *this, uint64_t a2, const hkcdSimdTree::Node *a3, __m128 *a4);
// [0x15fd9b0] (771 bytes) hkcdSimdTreeUtils::Build::IRefit::GetClusterAabb<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs16>::operator()(unsigned int,hkAabb *)const
// int hkcdSimdTreeUtils::Build::IRefit::GetClusterAabb<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs16>::operator()(;
// [0x15feeb0] (2497 bytes) hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs16>::refitBranch(hkVector4f const*,int,hkcdSimdTree::Node *,int,int)const
// void hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs16>::refitBranch( hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs16> *this, const hkVector4f *a2, int a3, hkcdSimdTree::Node *a4, int a5, int a6);
// [0x15ff880] (2741 bytes) hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs16>::refitNode(hkVector4f const*,int,hkcdSimdTree::Node const*,hkcdSimdTree::Node*)const
// void hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs16>::refitNode( hkcdSimdTreeUtils::Build::RefitT<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs16> *this, const hkVector4f *a2, int a3, const hkcdSimdTree::Node *a4, __m128 *a5);
// [0x1600340] (3610 bytes) hkcdSimdTreeUtils::Build::build(hkcdSimdTree::BuildContext &,hkcdSimdTree&,hkcdSimdTreeUtils::Build::IRefit const*)
// int hkcdSimdTreeUtils::Build::build(int a1, hkcdSimdTree *a2, int a3);
// [0x1601160] (73 bytes) hkcdSimdTree::buildFromAabbs(hkcdSimdTree::BuildContext &,hkAabb const*)
// int hkcdSimdTree::buildFromAabbs(hkcdSimdTree *a1, int a2, int a3);
// [0x16011b0] (73 bytes) hkcdSimdTree::buildFromSpheres(hkcdSimdTree::BuildContext &,hkVector4f const*)
// int hkcdSimdTree::buildFromSpheres(hkcdSimdTree *a1, int a2, int a3);
// [0x1601200] (73 bytes) hkcdSimdTree::buildCustom(hkcdSimdTree::BuildContext &,hkcdSimdTree::ICustomRefit const*)
// int hkcdSimdTree::buildCustom(hkcdSimdTree *a1, int a2, int a3);
// [0x1601250] (3902 bytes) hkcdSimdTree::checkIntegrity(void)const
// int hkcdSimdTree::checkIntegrity(hkcdSimdTree *this);
// [0x1602190] (1020 bytes) hkcdSimdTree::runDiagnostics(void)
// void hkcdSimdTree::runDiagnostics();
// [0x1602590] (2081 bytes) hkcdDynamicSimdTree::checkIntegrity(void)const
// int hkcdDynamicSimdTree::checkIntegrity(hkcdDynamicSimdTree *this);
// [0x1602dc0] (864 bytes) hkcdDynamicSimdTree::allocateNode(bool)
// int hkcdDynamicSimdTree::allocateNode(pthread_mutex_t *this, bool a2);
// [0x1603120] (1331 bytes) hkcdDynamicSimdTree::insertLeaf(int,hkAabb const&,int,hkcdDynamicSimdTree::ThreadContext *)
// unsigned int hkcdDynamicSimdTree::insertLeaf( pthread_mutex_t *a1, int a2, float *a3, unsigned int Node, uint32_t *a5);
// [0x1603660] (743 bytes) hkcdDynamicSimdTree::updateLeaf(int,hkAabb const&,bool,hkcdDynamicSimdTree::ThreadContext *)
// bool hkcdDynamicSimdTree::updateLeaf(pthread_mutex_t *a1, int a2, float *a3, char a4, hkMemoryAllocator *a5);
// [0x1603950] (2866 bytes) hkcdSimdTree::buildFromAabbs(hkcdSimdTree::BuildContext &,hkIntSpaceUtil const&,hkAabb16 const*,int)
// void hkcdSimdTree::buildFromAabbs(hkcdSimdTree *a1, int a2, const void *a3, int a4, int a5);
// [0x16044e0] (22 bytes) hkcdDynamicAabbTree::staticClass(void)
// void *hkcdDynamicAabbTree::staticClass();
// [0x16045e0] (165 bytes) hkcdStaticAabbTree::~hkcdStaticAabbTree()
// void hkcdStaticAabbTree::~hkcdStaticAabbTree(hkcdStaticAabbTree *this);
// [0x1604690] (93 bytes) hkcdStaticAabbTree::~hkcdStaticAabbTree()
// void hkcdStaticAabbTree::~hkcdStaticAabbTree(hkcdStaticAabbTree *this);
// [0x16046f0] (45 bytes) hkcdStaticAabbTree::hkcdStaticAabbTree(void)
// void hkcdStaticAabbTree::hkcdStaticAabbTree(hkcdStaticAabbTree *this);
// [0x1604720] (44 bytes) hkcdStaticAabbTree::hkcdStaticAabbTree(hkFinishLoadedObjectFlag)
// int hkcdStaticAabbTree::hkcdStaticAabbTree(int a1, int a2);
// [0x1604750] (19 bytes) hkcdStaticAabbTree::getMemoryFootPrint(void)const
// int hkcdStaticAabbTree::getMemoryFootPrint(hkcdStaticAabbTree *this);
// [0x1604770] (23 bytes) hkcdStaticAabbTree::getNumLeaves(void)const
// int hkcdStaticAabbTree::getNumLeaves(hkcdStaticAabbTree *this);
// [0x1604790] (326 bytes) hkcdDynamicTree::DynamicStorage<0,hkcdDynamicTree::AnisotropicMetric,hkcdDynamicTree::CodecRawUint>::reserveNodes(int)
// hkcdDynamicTree::DynamicStorage<0, hkcdDynamicTree::AnisotropicMetric, hkcdDynamicTree::CodecRawUint> *hkcdDynamicTree::DynamicStorage<0,hkcdDynamicTree::AnisotropicMetric,hkcdDynamicTree::CodecRawUint>::reserveNodes( hkcdDynamicTree::DynamicStorage<0, hkcdDynamicTree::AnisotropicMetric, hkcdDynamicTree::CodecRawUint> *this, int *a2, int a3);
// [0x16048e0] (2403 bytes) hkcdStaticAabbTree::buildFromDynamicTree(hkcdDynamicAabbTree const*)
// int hkcdStaticAabbTree::buildFromDynamicTree(hkcdStaticAabbTree *this, const hkcdDynamicAabbTree *a2);
// [0x1605cc0] (1361 bytes) hkcdStaticAabbTree::castSphere(hkVector4f const&,hkVector4f const&,hkSimdFloat32 const&,hkcdAabbTreeQueries::RaycastCollector *)const
// int hkcdStaticAabbTree::castSphere(int a1, float *a2, unsigned int *a3, float *a4, int a5);
// [0x1606910] (394 bytes) hkcdStaticAabbTree::queryAabb(hkAabb const&,hkcdAabbTreeQueries::AabbCollector *)const
// int hkcdStaticAabbTree::queryAabb(int a1, float *a2, int a3);
// [0x1607090] (402 bytes) hkcdStaticAabbTree::queryAabb(hkAabb const&,hkArray<unsigned int,hkContainerTempAllocator> &)const
// int hkcdStaticAabbTree::queryAabb(int a1, float *a2, int a3);
// [0x1607be0] (482 bytes) hkcdStaticAabbTree::getClosestPoint(hkVector4f const&,hkSimdFloat32 const&,hkcdAabbTreeQueries::ClosestPointCollector *,hkVector4f&)const
// int hkcdStaticAabbTree::getClosestPoint(int a1, float *a2, float *a3, int a4, float *a5);
// [0x160a7b0] (354 bytes) hkcdStaticAabbTree::getAllPairs(hkcdAabbTreeQueries::AllPairsCollector *)const
// int hkcdStaticAabbTree::getAllPairs(float a1, int a2, int a3);
// [0x160a920] (370 bytes) hkcdStaticAabbTree::getAllPairs(hkcdStaticAabbTree const*,hkcdAabbTreeQueries::AllPairsCollector *)const
// int hkcdStaticAabbTree::getAllPairs(float a1, int a2, int a3, int a4);
// [0x160b4a0] (1345 bytes) hkcdStaticAabbTree::castRay(hkVector4f const&,hkVector4f const&,hkcdAabbTreeQueries::RaycastCollector *)const
// int hkcdStaticAabbTree::castRay(int a1, float *a2, unsigned int *a3, int a4);
// [0x160b9f0] (161 bytes) hkcdDynamicAabbTree::~hkcdDynamicAabbTree()
// void hkcdDynamicAabbTree::~hkcdDynamicAabbTree(hkcdDynamicAabbTree *this);
// [0x160baa0] (93 bytes) hkcdDynamicAabbTree::~hkcdDynamicAabbTree()
// void hkcdDynamicAabbTree::~hkcdDynamicAabbTree(hkcdDynamicAabbTree *this);
// [0x160bb00] (136 bytes) hkcdDynamicAabbTree::hkcdDynamicAabbTree(void)
// void hkcdDynamicAabbTree::hkcdDynamicAabbTree(hkcdDynamicAabbTree *this);
// [0x160bb90] (44 bytes) hkcdDynamicAabbTree::hkcdDynamicAabbTree(hkFinishLoadedObjectFlag)
// int hkcdDynamicAabbTree::hkcdDynamicAabbTree(int a1, int a2);
// [0x160bbc0] (794 bytes) hkcdDynamicAabbTree::remove(unsigned int)
// unsigned int hkcdDynamicAabbTree::remove(hkcdDynamicAabbTree *this, unsigned int a2);
// [0x160bee0] (102 bytes) hkcdDynamicAabbTree::clear(void)
// int hkcdDynamicAabbTree::clear(hkcdDynamicAabbTree *this);
// [0x160bf50] (23 bytes) hkcdDynamicAabbTree::getLeafData(unsigned int)
// int hkcdDynamicAabbTree::getLeafData(hkcdDynamicAabbTree *this, unsigned int a2);
// [0x160bf70] (25 bytes) hkcdDynamicAabbTree::getMemoryFootPrint(void)const
// int hkcdDynamicAabbTree::getMemoryFootPrint(hkcdDynamicAabbTree *this);
// [0x160bf90] (23 bytes) hkcdDynamicAabbTree::getNumLeaves(void)const
// int hkcdDynamicAabbTree::getNumLeaves(hkcdDynamicAabbTree *this);
// [0x160bfb0] (89 bytes) hkcdDynamicAabbTree::reserveLeaves(int)
// hkcdDynamicAabbTree *hkcdDynamicAabbTree::reserveLeaves(hkcdDynamicAabbTree *this, int a2, int a3);
// [0x160c010] (1357 bytes) hkcdDynamicAabbTree::insert(hkAabb const&,unsigned int)
// int hkcdDynamicAabbTree::insert(hkcdDynamicAabbTree *this, const hkAabb *a2, unsigned int a3);
// [0x160c560] (102 bytes) hkcdDynamicAabbTree::insertPoint(hkVector4f const&,unsigned int)
// int hkcdDynamicAabbTree::insertPoint(hkcdDynamicAabbTree *this, const hkVector4f *a2, unsigned int a3);
// [0x160c5d0] (1501 bytes) hkcdDynamicAabbTree::tryInsert(hkAabb const&,unsigned int,hkResult &)
// int hkcdDynamicAabbTree::tryInsert(int a1, uint32_t *a2, int a3, uint32_t *a4);
// [0x160cbb0] (109 bytes) hkcdDynamicAabbTree::tryInsertPoint(hkVector4f const&,unsigned int,hkResult &)
// int hkcdDynamicAabbTree::tryInsertPoint(int a1, int *a2, int a3, uint32_t *a4);
// [0x160cc20] (2033 bytes) hkcdDynamicAabbTree::update(unsigned int,hkAabb const&)
// unsigned int hkcdDynamicAabbTree::update(hkcdDynamicAabbTree *this, unsigned int a2, const hkAabb *a3);
// [0x160d420] (2216 bytes) hkcdDynamicAabbTree::rebuildFast(int)
// int hkcdDynamicAabbTree::rebuildFast(hkcdDynamicAabbTree *this, int a2);
// [0x160dcd0] (2272 bytes) hkcdDynamicAabbTree::optimizeIncremental(int,int)
// int hkcdDynamicAabbTree::optimizeIncremental(hkcdDynamicAabbTree *this, int a2, int a3);
// [0x160f3f0] (1361 bytes) hkcdDynamicAabbTree::castSphere(hkVector4f const&,hkVector4f const&,hkSimdFloat32 const&,hkcdAabbTreeQueries::RaycastCollector *)const
// int hkcdDynamicAabbTree::castSphere(int a1, int a2, unsigned int *a3, int *a4, int a5);
// [0x160ff40] (394 bytes) hkcdDynamicAabbTree::queryAabb(hkAabb const&,hkcdAabbTreeQueries::AabbCollector *)const
// int hkcdDynamicAabbTree::queryAabb(int a1, float *a2, int a3);
// [0x1610410] (434 bytes) hkcdDynamicAabbTree::queryAabb(hkAabb const&,hkArray<unsigned int,hkContainerTempAllocator> &)const
// uint32_t *hkcdDynamicAabbTree::queryAabb(uint32_t *a1, int a2, float *a3, int a4);
// [0x1610cf0] (474 bytes) hkcdDynamicAabbTree::getClosestPoint(hkVector4f const&,hkSimdFloat32 const&,hkVector4f&)const
// int hkcdDynamicAabbTree::getClosestPoint(int a1, float *a2, float *a3, float *a4);
// [0x1610ed0] (474 bytes) hkcdDynamicAabbTree::getClosestPoint(hkVector4f const&,hkSimdFloat32 const&,hkcdAabbTreeQueries::ClosestPointCollector *,hkVector4f&)const
// int hkcdDynamicAabbTree::getClosestPoint(int a1, float *a2, float *a3, int a4, float *a5);
// [0x1611f70] (370 bytes) hkcdDynamicAabbTree::getAllPairs(hkcdDynamicAabbTree const*,hkcdAabbTreeQueries::AllPairsCollector *)const
// int hkcdDynamicAabbTree::getAllPairs(float a1, int a2, int a3, int a4);
// [0x16120f0] (354 bytes) hkcdDynamicAabbTree::getAllPairs(hkcdAabbTreeQueries::AllPairsCollector *)const
// int hkcdDynamicAabbTree::getAllPairs(float a1, int a2, int a3);
// [0x16123f0] (15654 bytes) hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>::rebuildBranchSAH(unsigned int,hkBool,int,int)
// uint32_t *hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>::rebuildBranchSAH( uint32_t *a1, int *a2, int a3, char a4, int a5, int a6);
// [0x1616120] (190 bytes) hkcdDynamicAabbTree::rebuild(void)
// hkcdDynamicAabbTree *hkcdDynamicAabbTree::rebuild(hkcdDynamicAabbTree *this, int a2);
// [0x16168e0] (1345 bytes) hkcdDynamicAabbTree::castRay(hkVector4f const&,hkVector4f const&,hkcdAabbTreeQueries::RaycastCollector *)const
// int hkcdDynamicAabbTree::castRay(int a1, float *a2, unsigned int *a3, int a4);
// [0x1616e30] (9 bytes) hkcdStaticMeshTreeBase::hkcdStaticMeshTreeBase(hkFinishLoadedObjectFlag)
// void hkcdStaticMeshTreeBase::hkcdStaticMeshTreeBase();
// [0x1616e40] (236 bytes) hkcdStaticMeshTreeBase::setKeyFilter(hkArray<unsigned int,hkContainerHeapAllocator> &,unsigned int,bool)const
// int hkcdStaticMeshTreeBase::setKeyFilter( hkcdStaticMeshTreeBase *this, hkArray<unsigned int, hkContainerHeapAllocator> *a2, unsigned int a3, bool a4);
// [0x1616f30] (181 bytes) hkcdStaticMeshTreeBase::getKeyFilter(hkArray<unsigned int,hkContainerHeapAllocator> const&,unsigned int)const
// bool hkcdStaticMeshTreeBase::getKeyFilter( hkcdStaticMeshTreeBase *this, const hkArray<unsigned int, hkContainerHeapAllocator> *a2, unsigned int a3);
// [0x1616ff0] (118 bytes) hkcdStaticMeshTreeBase::setSectionFilter(hkArray<unsigned int,hkContainerHeapAllocator> &,int,bool)const
// int hkcdStaticMeshTreeBase::setSectionFilter( hkcdStaticMeshTreeBase *this, hkArray<unsigned int, hkContainerHeapAllocator> *a2, int a3, bool a4);
// [0x1617070] (46 bytes) hkcdStaticMeshTreeBase::getSectionFilter(hkArray<unsigned int,hkContainerHeapAllocator> const&,int)const
// bool hkcdStaticMeshTreeBase::getSectionFilter( hkcdStaticMeshTreeBase *this, const hkArray<unsigned int, hkContainerHeapAllocator> *a2, int a3);
// [0x16170a0] (196 bytes) hkcdStaticMeshTreeBase::Connectivity::reset(void)
// int hkcdStaticMeshTreeBase::Connectivity::reset(hkcdStaticMeshTreeBase::Connectivity *this);
// [0x1617170] (23 bytes) hkcdStaticMeshTreeBase::Connectivity::getMemoryFootPrint(void)const
// int hkcdStaticMeshTreeBase::Connectivity::getMemoryFootPrint(hkcdStaticMeshTreeBase::Connectivity *this);
// [0x1617190] (747 bytes) hkcdStaticMeshTreeBase::Connectivity::link(hkcdStaticMeshTreeBase::Edge const&)const
// int hkcdStaticMeshTreeBase::Connectivity::link(int a1, int *a2, int a3);
// [0x1617870] (154 bytes) hkcdStaticMeshTreeBase::commitFilterChanges(hkArray<unsigned int,hkContainerHeapAllocator> &)const
// int hkcdStaticMeshTreeBase::commitFilterChanges( hkcdStaticMeshTreeBase *this, hkArray<unsigned int, hkContainerHeapAllocator> *a2);
// [0x1617910] (390 bytes) hkcdStaticMeshTreeBase::initializeFilter(hkArray<unsigned int,hkContainerHeapAllocator> &)const
// int hkcdStaticMeshTreeBase::initializeFilter( hkcdStaticMeshTreeBase *this, hkArray<unsigned int, hkContainerHeapAllocator> *a2);
// [0x1617ac0] (344 bytes) hkcdStaticTree::Codec3Axis::unpack(hkAabb const&,hkcdStaticTree::Codec3Axis const&,hkAabb&)
// const hkcdStaticTree::Codec3Axis *hkcdStaticTree::Codec3Axis::unpack( hkcdStaticTree::Codec3Axis *this, const hkAabb *a2, const hkcdStaticTree::Codec3Axis *a3);
// [0x1617c20] (341 bytes) hkcdStaticTree::Codec3Axis::pack(hkAabb const&,hkAabb const&,hkcdStaticTree::Codec3Axis&)
// int hkcdStaticTree::Codec3Axis::pack(hkcdStaticTree::Codec3Axis *this, const hkAabb *a2, const hkAabb *a3);
// [0x1640940] (3720 bytes) hkcdPointTriangleDistanceSquared(hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f*,hkVector4f*)
// const hkVector4f *hkcdPointTriangleDistanceSquared( const hkVector4f *a1, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4, hkVector4f *a5, hkVector4f *a6, float *a7);
// [0x16417d0] (1836 bytes) hkcdSupportingVertexPointsTranposed(hkFourTransposedPointsf const*,int,hkVector4f const&,hkcdVertex *)
// uint32_t *hkcdSupportingVertexPointsTranposed(float *a1, int a2, float *a3, uint32_t *a4);
// [0x1645450] (38 bytes) hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>::Tree(void)
// hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32> *hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>::Tree( hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32> *this);
// [0x1645480] (245 bytes) hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>::countLeaves(unsigned int)const
// int hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>::countLeaves( hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32> *this, unsigned int a2);
// [0x16471a0] (1213 bytes) hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>::internalInsert(unsigned int,unsigned int)
// unsigned int hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>::internalInsert( hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32> *this, unsigned int a2, unsigned int a3);
// [0x1647660] (326 bytes) hkcdDynamicTree::DynamicStorage<0,hkcdDynamicTree::AnisotropicMetric,hkcdDynamicTree::CodecRawUlong>::reserveNodes(int)
// hkcdDynamicTree::DynamicStorage<0, hkcdDynamicTree::AnisotropicMetric, hkcdDynamicTree::CodecRawUlong> *hkcdDynamicTree::DynamicStorage<0,hkcdDynamicTree::AnisotropicMetric,hkcdDynamicTree::CodecRawUlong>::reserveNodes( hkcdDynamicTree::DynamicStorage<0, hkcdDynamicTree::AnisotropicMetric, hkcdDynamicTree::CodecRawUlong> *this, int *a2, int a3);
// [0x16477b0] (1213 bytes) hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>::internalInsert(unsigned long,unsigned long)
// unsigned int hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>::internalInsert( hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr> *this, unsigned int a2, unsigned int a3);
// [0x1647c70] (255 bytes) hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>::updateAabbFromChildren(unsigned long)
// unsigned int hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>::updateAabbFromChildren( hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr> *this, unsigned int a2);
// [0x16487b0] (255 bytes) hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>::updateAabbFromChildren(unsigned int)
// unsigned int hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>::updateAabbFromChildren( hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32> *this, unsigned int a2);
// [0x1649970] (11379 bytes) hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>::rebuildBranchSAH(unsigned long,hkBool,int,int)
// uint32_t *hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>::rebuildBranchSAH( uint32_t *a1, int *a2, int a3, char a4, int a5, uint32_t *a6);
// [0x1654780] (29 bytes) hkcdGskBase::ShapeInterface::~ShapeInterface()
// void hkcdGskBase::ShapeInterface::~ShapeInterface(hkcdGskBase::ShapeInterface *this);
// [0x1654ba0] (78 bytes) hkcdGskBase::ShapeInterface::~ShapeInterface()
// void hkcdGskBase::ShapeInterface::~ShapeInterface(hkcdGskBase::ShapeInterface *this);
// [0x16571a0] (1324 bytes) hkcdClosestPointSegmentSegment(hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f&,hkVector4f&,hkSimdFloat32 &)
// int *hkcdClosestPointSegmentSegment( int *a1, float *a2, float *a3, float *a4, float *a5, int a6, int a7, float *a8);
// [0x16576d0] (2874 bytes) hkcdGskBase::findClosestTriangle(hkVector4f const&,hkVector4f const*,hkSimdFloat32 const&,bool)
// int hkcdGskBase::findClosestTriangle(float *a1, float *a2, float *a3, char a4);
// [0x165bc00] (4245 bytes) hkcdGskBase::_processEdgeTriangle(hkVector4f *,hkVector4f *,unsigned int,hkVector4f *)
// char hkcdGskBase::_processEdgeTriangle( hkcdGskBase *this, __m128 *a2, __m128 *a3, unsigned int a4, hkVector4f *a5);
// [0x165cca0] (4852 bytes) hkcdGskBase::reduceDimension(hkPadSpu<int> &,hkPadSpu<int> &,hkVector4f &,bool)
// int hkcdGskBase::reduceDimension(__m128 *a1, int *a2, int *a3, int a4, hkVector4f *a5);
// [0x16612f0] (2961 bytes) hkcdGskImpl<IConvexOverlapImpl::ShapeInterface>::getClosestPointImpl(IConvexOverlapImpl::ShapeInterface const*,void const*,void const*,hkcdGsk::GetClosestPointInput const&,hkVector4f const*,hkPadSpu<int> &,hkPadSpu<int> &,hkcdGsk::GetClosestPointOutput &)
// int hkcdGskImpl<IConvexOverlapImpl::ShapeInterface>::getClosestPointImpl( __m128 *a1, int a2, int *a3, int a4, int a5, uint32_t *a6, int *a7, int *a8, int a9);
// [0x1695220] (2434 bytes) hkcdRayCastCylinder(hkcdRay const&,hkVector4f const&,hkVector4f const&,hkSimdFloat32 const&,hkSimdFloat32*,hkVector4f*)
// int hkcdRayCastCylinder(float *a1, float *a2, float *a3, float *a4, float *a5, _OWORD *a6);
// [0x16d2e90] (3625 bytes) hkcdRayCastConvex(hkcdRay const&,hkVector4f const*,int,hkSimdFloat32 const&,hkSimdFloat32*,hkVector4f*,hkFlags<hkcdRayQueryFlags::Enum,unsigned int>)
// int *hkcdRayCastConvex( int *a1, float *a2, float *a3, int a4, float *a5, float *a6, uint32_t *a7, char a8);
// [0x16da7f0] (1959 bytes) hkcdRayCastBox(hkcdRay const&,hkVector4f const&,hkSimdFloat32 *,hkVector4f*)
// int hkcdRayCastBox(int a1, float *a2, float *a3, float *a4);
// [0x17b7f20] (29 bytes) hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::CustomGeometryConverter::~CustomGeometryConverter()
// void hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::CustomGeometryConverter::~CustomGeometryConverter( hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun>::CustomGeometryConverter *this);
// [0x17b7f40] (12 bytes) hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::CustomGeometryConverter::isKeyConvertionAllowed(unsigned int)const
// int hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::CustomGeometryConverter::isKeyConvertionAllowed();
// [0x17b7f70] (45 bytes) hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::CustomGeometryConverter::~CustomGeometryConverter()
// void hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::CustomGeometryConverter::~CustomGeometryConverter( hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun>::CustomGeometryConverter *this);
// [0x17b8050] (1208 bytes) hkcdRayCastSphere(hkcdRay const&,hkVector4f const&,hkSimdFloat32 *,hkVector4f*,hkFlags<hkcdRayQueryFlags::Enum,unsigned int>)
// int *hkcdRayCastSphere(int *a1, int a2, float *a3, float *a4, __m128 *a5, char a6);
// [0x17b8910] (1051 bytes) hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::Decoder::decodePrimitive(int,hkVector4f *)const
// int hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::Decoder::decodePrimitive( hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun>::Decoder *this, int a2, hkVector4f *a3);
// [0x17b8d30] (164 bytes) hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::Decoder::getPrimitiveData(int)const
// int hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::Decoder::getPrimitiveData( hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun>::Decoder *this, int a2);
// [0x17b9410] (756 bytes) hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::Decoder::getPrimitiveAabb(int,hkAabb &)const
// int hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::Decoder::getPrimitiveAabb( hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun>::Decoder *this, int a2, hkAabb *a3);
// [0x17b9a00] (4739 bytes) hkcdRayCastCapsule(hkcdRay const&,hkVector4f const&,hkVector4f const&,hkSimdFloat32 const&,hkSimdFloat32*,hkVector4f*,hkcdRayCastCapsuleHitType *,hkFlags<hkcdRayQueryFlags::Enum,unsigned int>)
// int *hkcdRayCastCapsule( int a1, int a2, int a3, int a4, int *a5, int a6, __m128 *a7, __m128 *a8, float *a9, float *a10, __m128 *a11, uint32_t *a12, char a13);
// [0x17bac90] (164 bytes) hkcdStaticMeshTreeBase::VertexCODEC<unsigned long long,21,21>::setupParameters(hkAabb const&,hkcdStaticMeshTreeBase::CodecParameters &)
// int hkcdStaticMeshTreeBase::VertexCODEC<unsigned long long,21,21>::setupParameters(float *a1, int a2);
// [0x17bad40] (316 bytes) hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage4>::getNodeAabb(int,hkAabb &)const
// int hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage4>::getNodeAabb( hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage4> *this, int a2, hkAabb *a3);
// [0x17becc0] (4564 bytes) hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::Decoder::getCustomPrimitiveVertices(int,hkAabb const&,hkVector4f *,int)const
// int hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::Decoder::getCustomPrimitiveVertices( hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun>::Decoder *this, int a2, const hkAabb *a3, hkVector4f *a4, int a5);
// [0x17c4420] (368 bytes) hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::CustomGeometryConverter::appendVerticesAsConvexHull(hkVector4f const*,int,int,hkGeometry &)
// void hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::CustomGeometryConverter::appendVerticesAsConvexHull( hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun>::CustomGeometryConverter *this, const hkVector4f *a2, int a3, hkGeometry *a4);
// [0x17c4590] (1220 bytes) hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::CustomGeometryConverter::appendCustomPrimitiveToGeometry(hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::Decoder const&,int,hkGeometry &)const
// void hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::CustomGeometryConverter::appendCustomPrimitiveToGeometry( hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun>::CustomGeometryConverter *this, hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage4> **a2, int a3, hkGeometry *a4);
// [0x17cfc60] (843 bytes) hkcdRay_setDirection(hkVector4f const&,hkSimdFloat32 const&,hkcdRay *)
// int hkcdRay_setDirection(unsigned int *a1, float *a2, int a3);
// [0x17cffb0] (249 bytes) hkcdIntersectRayAabb(hkcdRay const&,hkAabb const&,hkSimdFloat32 *)
// bool hkcdIntersectRayAabb(float *a1, float *a2, float *a3);
// [0x17d0d20] (630 bytes) hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16>::internalRemove(unsigned short,hkAabb const&)
// int hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16>::internalRemove( hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16> *this, uint16_t a2, const hkAabb *a3);
// [0x17d1400] (127 bytes) hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16>::updateAabbFromChildren(unsigned short)
// int hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16>::updateAabbFromChildren( hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16> *this, uint16_t a2);
// [0x17d1480] (279 bytes) hkcdDynamicTree::DynamicStorage<0,hkcdDynamicTree::AnisotropicMetric,hkcdDynamicTree::Codec32>::reserveNodes(int)
// hkcdDynamicTree::DynamicStorage<0, hkcdDynamicTree::AnisotropicMetric, hkcdDynamicTree::Codec32> *hkcdDynamicTree::DynamicStorage<0,hkcdDynamicTree::AnisotropicMetric,hkcdDynamicTree::Codec32>::reserveNodes( hkcdDynamicTree::DynamicStorage<0, hkcdDynamicTree::AnisotropicMetric, hkcdDynamicTree::Codec32> *this, int a2, int a3);
// [0x17d1c70] (1137 bytes) hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16>::internalInsert(unsigned short,unsigned short)
// int hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16>::internalInsert( hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16> *this, uint16_t a2, uint16_t a3);
// [0x17d2360] (1220 bytes) hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16>::kineticUpdate(unsigned short,hkAabb const&)
// float *hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16>::kineticUpdate( hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16> *this, uint16_t a2, const hkAabb *a3);
// [0x17d2830] (1300 bytes) hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16>::update(unsigned short,hkAabb const&)
// int hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16>::update( hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16> *this, uint16_t a2, const hkAabb *a3);
// [0x17d3e10] (206 bytes) hkcdDynamicTree::InplaceStorage<8,hkcdDynamicTree::AnisotropicMetric,hkcdDynamicTree::CodecRawUlong>::releaseAll(void)
// void *hkcdDynamicTree::InplaceStorage<8,hkcdDynamicTree::AnisotropicMetric,hkcdDynamicTree::CodecRawUlong>::releaseAll( hkcdDynamicTree::InplaceStorage<8, hkcdDynamicTree::AnisotropicMetric, hkcdDynamicTree::CodecRawUlong> *this);
// [0x17d97a0] (9380 bytes) hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16>::rebuildBranchSAH(unsigned short,hkBool,int,int)
// uint32_t *hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16>::rebuildBranchSAH( uint32_t *a1, hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16> *a2, uint16_t a3, char a4, int a5, float a6);
// [0x17e1f00] (43 bytes) hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider>::getVertex(int,hkVector4f &)const
// int hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider>::getVertex( hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun>::BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider> *this, int a2, hkVector4f *a3);
// [0x17e1f30] (27 bytes) hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider>::getNumVertices(void)const
// int hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider>::getNumVertices( hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun>::BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider> *this);
// [0x17e2980] (162 bytes) hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider>::~BuildGeometryProvider()
// void hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider>::~BuildGeometryProvider( hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun>::BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider> *this);
// [0x17e2bc0] (201 bytes) hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider>::~BuildGeometryProvider()
// void hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider>::~BuildGeometryProvider( hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun>::BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider> *this);
// [0x17e34d0] (38 bytes) hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>::Tree(void)
// hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr> *hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>::Tree( hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr> *this);
// [0x17e3b40] (1457 bytes) hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::getTriangleVertices(unsigned int,hkVector4f *)const
// int hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::getTriangleVertices( hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun> *this, unsigned int a2, hkVector4f *a3);
// [0x17e4100] (242 bytes) hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::Decoder::setSection(int,bool)
// hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun>::Decoder *hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::Decoder::setSection( hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun>::Decoder *this, int a2, bool a3);
// [0x17e4200] (81 bytes) hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider>::getIndices(int,int *)const
// int hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider>::getIndices( hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun>::BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider> *this, int a2, int *a3);
// [0x17e4260] (149 bytes) hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider>::getVertices(int,hkVector4f *)const
// int hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider>::getVertices( hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun>::BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider> *this, int a2, hkVector4f *a3);
// [0x17e4300] (1038 bytes) hkcdStaticMeshTreeBase::VertexCODEC<unsigned int,11,11>::encode(hkAabb const&,hkVector4f const&,unsigned int &)
// int hkcdStaticMeshTreeBase::VertexCODEC<unsigned int,11,11>::encode( hkcdStaticMeshTreeBase::VertexCODEC<unsigned int, 11, 11> *this, const hkAabb *a2, const hkVector4f *a3);
// [0x17e4710] (1150 bytes) hkcdStaticMeshTreeBase::VertexCODEC<unsigned long long,21,21>::encode(hkAabb const&,hkVector4f const&,unsigned long long &)
// int hkcdStaticMeshTreeBase::VertexCODEC<unsigned long long,21,21>::encode( hkcdStaticMeshTreeBase::VertexCODEC<unsigned long long, 21, 21> *this, const hkAabb *a2, const hkVector4f *a3);
// [0x17e50e0] (1018 bytes) hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>::computeCost(void)const
// hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr> *hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>::computeCost( hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr> *this, int *a2);
// [0x17e54e0] (1439 bytes) hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>::balance(int,unsigned long)
// unsigned int hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>::balance( hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr> *this, int a2, int a3);
// [0x17e6df0] (1919 bytes) hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>::detachBranch(unsigned long,unsigned long,hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>&)
// int hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>::detachBranch( hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr> *this, unsigned int a2, unsigned int a3, hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr> *a4);
// [0x17e9240] (18720 bytes) bool hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::Utilities::buildStep3<hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider>>(hkcdStaticMeshTreeBase::BuildConfig const&,hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::Utilities::QuantizersInfos &,hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider> &,hkcdStaticMeshTreeBase::BuildMapping &,hkArray<hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::Quad,hkContainerHeapAllocator> &,hkArray<hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::SubTree,hkContainerHeapAllocator> &,hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::DynamicTree &,hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>&)
// int hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::Utilities::buildStep3<hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider>>( long double a1, __m128 a2, int a3, int a4, int *a5, uint32_t *a6, uint32_t *a7, int *a8, hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr> *a9, int *a10);
// [0x17edb60] (10809 bytes) bool hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::Utilities::buildStep12<hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider>>(hkcdStaticMeshTreeBase::BuildConfig const&,hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider> &,hkcdStaticMeshTreeBase::BuildMapping &,hkArray<hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::Quad,hkContainerHeapAllocator> &,hkArray<hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::SubTree,hkContainerHeapAllocator> &,hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::DynamicTree &)
// int hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::Utilities::buildStep12<hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider>>( long double a1, int a2, hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun>::BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider> *a3, hkArray<unsigned int, hkContainerHeapAllocator> *a4, int *a5, hkMemoryAllocator *a6, uint32_t *a7);
// [0x18018c0] (651 bytes) hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>::internalRemove(unsigned int,hkAabb const&)
// int hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>::internalRemove( hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32> *this, unsigned int a2, const hkAabb *a3);
// [0x1801e10] (1293 bytes) hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>::kineticUpdate(unsigned int,hkAabb const&)
// unsigned int hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>::kineticUpdate( hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32> *this, unsigned int a2, const hkAabb *a3);
// [0x1802760] (212 bytes) hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>::update(unsigned int,hkAabb const&)
// unsigned int hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>::update( hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32> *this, unsigned int a2, const hkAabb *a3);
// [0x1a9ced0] (809 bytes) hkcdTriangleUtil::isDegenerate(hkVector4f const&,hkVector4f const&,hkVector4f const&,hkSimdFloat32 const&)
// bool hkcdTriangleUtil::isDegenerate(float *a1, float *a2, float *a3, float *a4);
// [0x1a9d200] (2154 bytes) hkcdTriangleUtil::calcBarycentricCoordinates(hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f&)
// const hkVector4f *hkcdTriangleUtil::calcBarycentricCoordinates( hkcdTriangleUtil *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4, const hkVector4f *a5);
// [0x1a9da70] (1010 bytes) hkcdTriangleUtil::calcBarycentricCoordinatesDeprecated(hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f&)
// const hkVector4f *hkcdTriangleUtil::calcBarycentricCoordinatesDeprecated( hkcdTriangleUtil *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4, const hkVector4f *a5);
// [0x1a9de70] (2032 bytes) hkcdTriangleUtil::clipWithPlane(hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f const&,hkSimdFloat32 const&,hkVector4f*)
// int hkcdTriangleUtil::clipWithPlane(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6);
// [0x1a9e660] (1213 bytes) hkcdTriangleUtil::checkForFlatConvexQuad(hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f const&,float)
// bool hkcdTriangleUtil::checkForFlatConvexQuad( hkcdTriangleUtil *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4, const hkVector4f *a5);
// [0x1a9eb20] (29 bytes) hkcdGskBase::RayCastShapeInterface<hkcdGsk_Vector4Shape>::~RayCastShapeInterface()
// void hkcdGskBase::RayCastShapeInterface<hkcdGsk_Vector4Shape>::~RayCastShapeInterface( hkcdGskBase::RayCastShapeInterface<hkcdGsk_Vector4Shape> *this);
// [0x1a9eb40] (29 bytes) hkcdGsk_Vector4ShapeInterface::~hkcdGsk_Vector4ShapeInterface()
// void hkcdGsk_Vector4ShapeInterface::~hkcdGsk_Vector4ShapeInterface(hkcdGsk_Vector4ShapeInterface *this);
// [0x1a9eb60] (78 bytes) hkcdGsk_Vector4ShapeInterface::~hkcdGsk_Vector4ShapeInterface()
// void hkcdGsk_Vector4ShapeInterface::~hkcdGsk_Vector4ShapeInterface(hkcdGsk_Vector4ShapeInterface *this);
// [0x1a9ebb0] (78 bytes) hkcdGskBase::RayCastShapeInterface<hkcdGsk_Vector4Shape>::~RayCastShapeInterface()
// void hkcdGskBase::RayCastShapeInterface<hkcdGsk_Vector4Shape>::~RayCastShapeInterface( hkcdGskBase::RayCastShapeInterface<hkcdGsk_Vector4Shape> *this);
// [0x1a9ec00] (1773 bytes) hkcdSupportingVertexPoints(hkcdVertex const*,int,hkVector4f const&,hkcdVertex*)
// uint32_t *hkcdSupportingVertexPoints(int a1, int a2, float *a3, uint32_t *a4);
// [0x1a9f2f0] (108 bytes) hkcdGskBase::RayCastShapeInterface<hkcdGsk_Vector4Shape>::getSupportingVertices(void const*,hkVector4f const&,void const*,hkTransformf const&,hkcdVertex *,hkcdVertex *,hkVector4f*)const
// uint32_t *hkcdGskBase::RayCastShapeInterface<hkcdGsk_Vector4Shape>::getSupportingVertices( int a1, int *a2, float *a3, int a4, int a5, uint32_t *a6, uint32_t *a7, uint32_t *a8);
// [0x1a9f360] (7689 bytes) hkcdSupportingVertexPoints2(hkcdVertex const*,int,hkcdVertex const*,int,hkVector4f const&,hkTransformf const&,hkcdVertex*,hkcdVertex*,hkVector4f*)
// int hkcdSupportingVertexPoints2( int a1, int a2, int a3, int a4, float *a5, float *a6, uint32_t *a7, int a8, float *a9);
// [0x1aa1170] (100 bytes) hkcdGsk_Vector4ShapeInterface::getSupportingVertices(void const*,hkVector4f const&,void const*,hkTransformf const&,hkcdVertex *,hkcdVertex *,hkVector4f*)const
// int hkcdGsk_Vector4ShapeInterface::getSupportingVertices( int a1, int *a2, float *a3, int *a4, float *a5, uint32_t *a6, int a7, float *a8);
// [0x1aa1d80] (135 bytes) hkcdGsk::linearCast(hkcdVertex const*,int,hkcdVertex const*,int,hkcdGsk::LinearCastInput const&,hkcdGsk::Cache *,hkcdGsk::LinearCastOutput &)
// int hkcdGsk::linearCast(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
// [0x1aa1e10] (2728 bytes) hkcdGskImpl<hkcdGsk_Vector4ShapeInterface>::getClosestPointImpl(hkcdGsk_Vector4ShapeInterface const*,void const*,void const*,hkcdGsk::GetClosestPointInput const&,hkVector4f const*,hkPadSpu<int> &,hkPadSpu<int> &,hkcdGsk::GetClosestPointOutput &)
// int hkcdGskImpl<hkcdGsk_Vector4ShapeInterface>::getClosestPointImpl( __m128 *a1, int a2, int *a3, int *a4, int a5, uint32_t *a6, int *a7, int *a8, int a9);
// [0x1aa28c0] (422 bytes) hkcdGsk::getClosestPoint(hkcdVertex const*,int,hkcdVertex const*,int,hkcdGsk::GetClosestPointInput const&,hkcdGsk::Cache *,hkcdGsk::GetClosestPointOutput &)
// int hkcdGsk::getClosestPoint(int a1, int a2, int a3, int a4, int a5, uint8_t *a6, int a7);
// [0x1aa2a70] (422 bytes) hkcdGsk::getClosestPoint(void const*,hkcdVertex const*,int,void const*,hkcdVertex const*,int,hkcdGsk::GetClosestPointInput const&,hkcdGsk::Cache *,hkcdGsk::GetClosestPointOutput &)
// int hkcdGsk::getClosestPoint(int a1, int a2, int a3, int a4, int a5, int a6, int a7, uint8_t *a8, int a9);
// [0x1aa36a0] (370 bytes) hkcdGsk::rayCast(hkFourTransposedPointsf const*,int,hkcdGsk::RayCastInput const&,hkcdGsk::RayCastOutput &)
// int hkcdGsk::rayCast(int a1, int32_t *a2, float *a3, float *a4);
// [0x1aa3820] (160 bytes) hkcdGsk::rayCast(hkcdVertex const*,int,hkcdGsk::RayCastInput const&,hkcdGsk::RayCastOutput &)
// int hkcdGsk::rayCast(int32_t *a1, int32_t *a2, float *a3, float *a4);
// [0x1aa38c0] (2907 bytes) hkcdConvexPenetrationUtil::convertResultToFeature(hkcdWingedEdge &,hkcdWingedEdge::Triangle *,hkcdGsk::GetClosestPointOutput *)
// float *hkcdConvexPenetrationUtil::convertResultToFeature(uint32_t *a1, int a2, uint32_t *a3, float *a4);
// [0x1aa4420] (5635 bytes) hkcdConvexPenetrationUtil::builtTetrahedron(hkcdGsk::GetClosestPointOutput &,hkcdGsk::GetClosestPointStatus &)
// uint32_t *hkcdConvexPenetrationUtil::builtTetrahedron(uint32_t *a1, int a2, int a3, uint32_t *a4);
// [0x1aa5a30] (3311 bytes) hkcdConvexPenetrationUtil::calculatePenetrationDepth(hkcdGsk::GetClosestPointOutput &)
// int hkcdConvexPenetrationUtil::calculatePenetrationDepth(int a1, float *a2);
// [0x1aa6720] (4520 bytes) hkcdGskBase::handlePenetration(hkcdGskBase::ShapeInterface const*,void const*,void const*,hkTransformf const&,hkPadSpu<int> &,hkPadSpu<int> &,hkcdGsk::GetClosestPointOutput &,hkVector4f *)
// int hkcdGskBase::handlePenetration( __m128 *a1, int *a2, int a3, int a4, uint32_t *a5, int *a6, int *a7, int a8, uint32_t *a9);
// [0x1aa78d0] (66 bytes) hkcdGskBase::processEdgeTriangle(hkVector4f *,hkVector4f *,unsigned int,hkVector4f *)
// char hkcdGskBase::processEdgeTriangle( hkcdGskBase *this, hkVector4f *a2, hkVector4f *a3, unsigned int a4, hkVector4f *a5);
// [0x1aa7920] (185 bytes) hkcdConvexPenetrationUtil::getPointForSimplex(hkVector4f const&,hkcdWingedEdge::Vertex *)
// int hkcdConvexPenetrationUtil::getPointForSimplex( hkcdConvexPenetrationUtil *this, const hkVector4f *a2, Vertex *a3);
// [0x1aa79e0] (360 bytes) hkcdConvexPenetrationUtil::findBestProjection(hkVector4f const&,hkVector4f const&,hkcdWingedEdge::Vertex &)
// hkcdConvexPenetrationUtil *hkcdConvexPenetrationUtil::findBestProjection( hkcdConvexPenetrationUtil *this, const hkVector4f *a2, const hkVector4f *a3, Vertex *a4, Vertex *a5);
// [0x1aa7b50] (9 bytes) hkcdWingedEdge::codeBegin(void)
// void hkcdWingedEdge::codeBegin();
// [0x1aa7b60] (422 bytes) hkcdWingedEdge::findVisibleTriangles(hkcdWingedEdge::Triangle *,hkVector4f const&,hkPadSpu<int> &,hkPadSpu<hkcdWingedEdge::Edge *> &)
// int hkcdWingedEdge::findVisibleTriangles(int a1, int a2, float *a3, uint32_t *a4, uint32_t *a5);
// [0x1aa7d10] (368 bytes) hkcdWingedEdge::Triangle::calculateTriangleData(void)
// hkcdWingedEdge::Triangle *hkcdWingedEdge::Triangle::calculateTriangleData(float **this);
// [0x1aa7e80] (350 bytes) hkcdWingedEdge::addTetrahedron(void)
// hkcdWingedEdge::Triangle *hkcdWingedEdge::addTetrahedron(hkcdWingedEdge *this);
// [0x1aa7fe0] (9 bytes) hkcdWingedEdge::codeEnd(void)
// void hkcdWingedEdge::codeEnd();
// [0x1aa7ff0] (422 bytes) hkcdWingedEdge::findTriangleNearestOrigin(hkcdWingedEdge::Triangle *)
// hkcdWingedEdge::Triangle *hkcdWingedEdge::findTriangleNearestOrigin( hkcdWingedEdge *this, hkcdWingedEdge::Triangle *a2);
// [0x1aa81a0] (1734 bytes) hkcdWingedEdge::find2ClosestMultiTriangles(hkcdWingedEdge&,hkcdWingedEdge&,hkVector4f &,hkcdWingedEdge::Triangle *&,hkcdWingedEdge::Triangle *&)
// hkcdWingedEdge *hkcdWingedEdge::find2ClosestMultiTriangles( hkcdWingedEdge *this, hkcdWingedEdge *a2, hkcdWingedEdge *a3, float **a4, hkcdWingedEdge::Triangle **a5);
// [0x1aa8870] (12182 bytes) hkcdIntersectTriangleTriangle(hkVector4f const(&)[3],hkVector4f const(&)[3])
// bool hkcdIntersectTriangleTriangle(const hkVector4f (*a1)[3], const hkVector4f (*a2)[3]);
// [0x1aab810] (3773 bytes) hkcdRayCastTriangle::sphereCastTriangle(hkcdRay const&,hkSimdFloat32 const&,hkVector4f const&,hkVector4f const&,hkVector4f const&,hkSimdFloat32*,hkVector4f*)
// int hkcdRayCastTriangle::sphereCastTriangle( float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7);
// [0x1aac6d0] (6688 bytes) hkcdRayCastTriangle::hkcdSegmentBundleTriangleIntersect(hkcdRayBundle const&,hkVector4f const&,hkVector4f const&,hkVector4f const&,hkSimdFloat32 const&,hkFourTransposedPointsf &,hkVector4f&)
// int *hkcdRayCastTriangle::hkcdSegmentBundleTriangleIntersect( int *a1, int a2, float *a3, float *a4, float *a5, float *a6, int a7, float *a8);
// [0x1aae0f0] (1415 bytes) hkcdRayCastTriangle::fastUsingZeroTolerance(hkcdRay const&,hkVector4f const&,hkVector4f const&,hkVector4f const&,hkFlags<hkcdRayQueryFlags::Enum,unsigned int>,hkSimdFloat32 &,hkVector4f&)
// uint32_t *hkcdRayCastTriangle::fastUsingZeroTolerance( uint32_t *a1, float *a2, float *a3, float *a4, float *a5, char a6, float *a7, int a8);
// [0x1aae680] (5451 bytes) hkcdRayCastResult hkcdRayCastTriangle::_rayTriangleImpl<true,true,true>(hkcdRay const&,hkVector4f const&,hkVector4f const&,hkVector4f const&,hkFlags<hkcdRayQueryFlags::Enum,unsigned int>,hkSimdFloat32 &,hkVector4f&)
// int *hkcdRayCastTriangle::_rayTriangleImpl<true,true,true>( int *a1, float *a2, float *a3, float *a4, float *a5, int a6, float *a7, int a8);
// [0x1aafbd0] (94 bytes) hkcdRayCastTriangle::safeUsingDynamicTolerance(hkcdRay const&,hkVector4f const&,hkVector4f const&,hkVector4f const&,hkFlags<hkcdRayQueryFlags::Enum,unsigned int>,hkSimdFloat32 &,hkVector4f&)
// int *hkcdRayCastTriangle::safeUsingDynamicTolerance( int *a1, float *a2, float *a3, float *a4, float *a5, int a6, float *a7, int a8);
