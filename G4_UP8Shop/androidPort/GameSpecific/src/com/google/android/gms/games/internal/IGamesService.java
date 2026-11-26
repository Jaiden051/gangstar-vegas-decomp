// Decompiled from classes.dex (SourceFile: IGamesService.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

public interface IGamesService extends android.os.IInterface {
    // Methods
    public abstract int a(com.google.android.gms.games.internal.IGamesCallbacks p0, byte[] p1, java.lang.String p2, java.lang.String p3) throws android.os.RemoteException;

    public abstract int a(byte[] p0, java.lang.String p1, java.lang.String[] p2) throws android.os.RemoteException;

    public abstract android.content.Intent a(int p0, int p1, boolean p2) throws android.os.RemoteException;

    public abstract android.content.Intent a(int p0, byte[] p1, int p2, java.lang.String p3) throws android.os.RemoteException;

    public abstract android.content.Intent a(com.google.android.gms.games.internal.multiplayer.ZInvitationCluster p0, java.lang.String p1, java.lang.String p2) throws android.os.RemoteException;

    public abstract android.content.Intent a(com.google.android.gms.games.internal.request.GameRequestCluster p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract android.content.Intent a(com.google.android.gms.games.multiplayer.realtime.RoomEntity p0, int p1) throws android.os.RemoteException;

    public abstract android.content.Intent a(java.lang.String p0, boolean p1, boolean p2, int p3) throws android.os.RemoteException;

    public abstract android.content.Intent a(int[] p0) throws android.os.RemoteException;

    public abstract android.content.Intent a(com.google.android.gms.games.multiplayer.ParticipantEntity[] p0, java.lang.String p1, java.lang.String p2, android.net.Uri p3, android.net.Uri p4) throws android.os.RemoteException;

    public abstract android.os.ParcelFileDescriptor a(android.net.Uri p0) throws android.os.RemoteException;

    public abstract java.lang.String a() throws android.os.RemoteException;

    public abstract java.lang.String a(java.lang.String p0) throws android.os.RemoteException;

    public abstract void a(int p0) throws android.os.RemoteException;

    public abstract void a(long p0) throws android.os.RemoteException;

    public abstract void a(long p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract void a(android.os.IBinder p0, android.os.Bundle p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.drive.Contents p0) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, int p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, int p1, int p2, int p3) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, int p1, int p2, boolean p3, boolean p4) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, int p1, int p2, java.lang.String[] p3, android.os.Bundle p4) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, int p1, boolean p2, boolean p3) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, int p1, int[] p2) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, long p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, long p1, java.lang.String p2) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, android.os.Bundle p1, int p2, int p3) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, android.os.IBinder p1, int p2, java.lang.String[] p3, android.os.Bundle p4, boolean p5, long p6) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, android.os.IBinder p1, java.lang.String p2, boolean p3, long p4) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, int p2) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, int p2, int p3, int p4, boolean p5) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, int p2, android.os.IBinder p3, android.os.Bundle p4) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, int p2, boolean p3) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, int p2, boolean p3, boolean p4) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, int p2, boolean p3, boolean p4, boolean p5, boolean p6) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, int p2, int[] p3) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, long p2) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, long p2, java.lang.String p3) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, android.os.IBinder p2, android.os.Bundle p3) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, com.google.android.gms.games.snapshot.SnapshotMetadataChange p2, com.google.android.gms.drive.Contents p3) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, java.lang.String p2) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, java.lang.String p2, int p3, int p4) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, java.lang.String p2, int p3, int p4, int p5) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, java.lang.String p2, int p3, int p4, int p5, boolean p6) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, java.lang.String p2, int p3, boolean p4, boolean p5) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, java.lang.String p2, com.google.android.gms.games.snapshot.SnapshotMetadataChange p3, com.google.android.gms.drive.Contents p4) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, java.lang.String p2, boolean p3) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, java.lang.String p2, int[] p3, int p4, boolean p5) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, java.lang.String p2, java.lang.String[] p3) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, java.lang.String p2, java.lang.String[] p3, boolean p4) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, boolean p2) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, byte[] p2, java.lang.String p3, com.google.android.gms.games.multiplayer.ParticipantResult[] p4) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, byte[] p2, com.google.android.gms.games.multiplayer.ParticipantResult[] p3) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, int[] p2) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, java.lang.String[] p2, int p3, byte[] p4, int p5) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, boolean p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, boolean p1, android.os.Bundle p2) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, boolean p1, java.lang.String[] p2) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, int[] p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, int[] p1, int p2, boolean p3) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String[] p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String[] p1, boolean p2) throws android.os.RemoteException;

    public abstract void a(java.lang.String p0, int p1) throws android.os.RemoteException;

    public abstract void a(java.lang.String p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract void a(java.lang.String p0, java.lang.String p1, int p2) throws android.os.RemoteException;

    public abstract void a(boolean p0) throws android.os.RemoteException;

    public abstract android.content.Intent b(int p0, int p1, boolean p2) throws android.os.RemoteException;

    public abstract android.os.Bundle b() throws android.os.RemoteException;

    public abstract java.lang.String b(java.lang.String p0) throws android.os.RemoteException;

    public abstract void b(long p0) throws android.os.RemoteException;

    public abstract void b(long p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract void b(com.google.android.gms.games.internal.IGamesCallbacks p0) throws android.os.RemoteException;

    public abstract void b(com.google.android.gms.games.internal.IGamesCallbacks p0, int p1, boolean p2, boolean p3) throws android.os.RemoteException;

    public abstract void b(com.google.android.gms.games.internal.IGamesCallbacks p0, long p1) throws android.os.RemoteException;

    public abstract void b(com.google.android.gms.games.internal.IGamesCallbacks p0, long p1, java.lang.String p2) throws android.os.RemoteException;

    public abstract void b(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract void b(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, int p2) throws android.os.RemoteException;

    public abstract void b(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, int p2, int p3, int p4, boolean p5) throws android.os.RemoteException;

    public abstract void b(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, int p2, android.os.IBinder p3, android.os.Bundle p4) throws android.os.RemoteException;

    public abstract void b(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, int p2, boolean p3) throws android.os.RemoteException;

    public abstract void b(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, int p2, boolean p3, boolean p4) throws android.os.RemoteException;

    public abstract void b(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, android.os.IBinder p2, android.os.Bundle p3) throws android.os.RemoteException;

    public abstract void b(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, java.lang.String p2) throws android.os.RemoteException;

    public abstract void b(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, java.lang.String p2, int p3, int p4, int p5, boolean p6) throws android.os.RemoteException;

    public abstract void b(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, java.lang.String p2, int p3, boolean p4, boolean p5) throws android.os.RemoteException;

    public abstract void b(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, java.lang.String p2, boolean p3) throws android.os.RemoteException;

    public abstract void b(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, boolean p2) throws android.os.RemoteException;

    public abstract void b(com.google.android.gms.games.internal.IGamesCallbacks p0, boolean p1) throws android.os.RemoteException;

    public abstract void b(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String[] p1) throws android.os.RemoteException;

    public abstract void b(java.lang.String p0, int p1) throws android.os.RemoteException;

    public abstract void b(java.lang.String p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract void b(java.lang.String p0, java.lang.String p1, int p2) throws android.os.RemoteException;

    public abstract void b(boolean p0) throws android.os.RemoteException;

    public abstract void c() throws android.os.RemoteException;

    public abstract void c(long p0) throws android.os.RemoteException;

    public abstract void c(long p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract void c(com.google.android.gms.games.internal.IGamesCallbacks p0) throws android.os.RemoteException;

    public abstract void c(com.google.android.gms.games.internal.IGamesCallbacks p0, int p1, boolean p2, boolean p3) throws android.os.RemoteException;

    public abstract void c(com.google.android.gms.games.internal.IGamesCallbacks p0, long p1) throws android.os.RemoteException;

    public abstract void c(com.google.android.gms.games.internal.IGamesCallbacks p0, long p1, java.lang.String p2) throws android.os.RemoteException;

    public abstract void c(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract void c(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, int p2) throws android.os.RemoteException;

    public abstract void c(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, int p2, boolean p3, boolean p4) throws android.os.RemoteException;

    public abstract void c(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, java.lang.String p2) throws android.os.RemoteException;

    public abstract void c(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, java.lang.String p2, boolean p3) throws android.os.RemoteException;

    public abstract void c(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, boolean p2) throws android.os.RemoteException;

    public abstract void c(com.google.android.gms.games.internal.IGamesCallbacks p0, boolean p1) throws android.os.RemoteException;

    public abstract void c(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String[] p1) throws android.os.RemoteException;

    public abstract void c(java.lang.String p0) throws android.os.RemoteException;

    public abstract void c(java.lang.String p0, int p1) throws android.os.RemoteException;

    public abstract int d(java.lang.String p0) throws android.os.RemoteException;

    public abstract java.lang.String d() throws android.os.RemoteException;

    public abstract void d(long p0) throws android.os.RemoteException;

    public abstract void d(long p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract void d(com.google.android.gms.games.internal.IGamesCallbacks p0) throws android.os.RemoteException;

    public abstract void d(com.google.android.gms.games.internal.IGamesCallbacks p0, int p1, boolean p2, boolean p3) throws android.os.RemoteException;

    public abstract void d(com.google.android.gms.games.internal.IGamesCallbacks p0, long p1) throws android.os.RemoteException;

    public abstract void d(com.google.android.gms.games.internal.IGamesCallbacks p0, long p1, java.lang.String p2) throws android.os.RemoteException;

    public abstract void d(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract void d(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, int p2, boolean p3, boolean p4) throws android.os.RemoteException;

    public abstract void d(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, java.lang.String p2) throws android.os.RemoteException;

    public abstract void d(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, boolean p2) throws android.os.RemoteException;

    public abstract void d(com.google.android.gms.games.internal.IGamesCallbacks p0, boolean p1) throws android.os.RemoteException;

    public abstract void d(java.lang.String p0, int p1) throws android.os.RemoteException;

    public abstract android.net.Uri e(java.lang.String p0) throws android.os.RemoteException;

    public abstract java.lang.String e() throws android.os.RemoteException;

    public abstract void e(long p0) throws android.os.RemoteException;

    public abstract void e(com.google.android.gms.games.internal.IGamesCallbacks p0) throws android.os.RemoteException;

    public abstract void e(com.google.android.gms.games.internal.IGamesCallbacks p0, int p1, boolean p2, boolean p3) throws android.os.RemoteException;

    public abstract void e(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract void e(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, int p2, boolean p3, boolean p4) throws android.os.RemoteException;

    public abstract void e(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, java.lang.String p2) throws android.os.RemoteException;

    public abstract void e(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, boolean p2) throws android.os.RemoteException;

    public abstract void e(com.google.android.gms.games.internal.IGamesCallbacks p0, boolean p1) throws android.os.RemoteException;

    public abstract void e(java.lang.String p0, int p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.data.DataHolder f() throws android.os.RemoteException;

    public abstract void f(com.google.android.gms.games.internal.IGamesCallbacks p0) throws android.os.RemoteException;

    public abstract void f(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract void f(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, int p2, boolean p3, boolean p4) throws android.os.RemoteException;

    public abstract void f(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1, java.lang.String p2) throws android.os.RemoteException;

    public abstract void f(com.google.android.gms.games.internal.IGamesCallbacks p0, boolean p1) throws android.os.RemoteException;

    public abstract void f(java.lang.String p0) throws android.os.RemoteException;

    public abstract android.content.Intent g(java.lang.String p0) throws android.os.RemoteException;

    public abstract void g(com.google.android.gms.games.internal.IGamesCallbacks p0) throws android.os.RemoteException;

    public abstract void g(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract boolean g() throws android.os.RemoteException;

    public abstract android.os.ParcelFileDescriptor h(java.lang.String p0) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.data.DataHolder h() throws android.os.RemoteException;

    public abstract com.google.android.gms.games.multiplayer.realtime.RoomEntity h(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract void h(com.google.android.gms.games.internal.IGamesCallbacks p0) throws android.os.RemoteException;

    public abstract int i() throws android.os.RemoteException;

    public abstract android.content.Intent i(java.lang.String p0) throws android.os.RemoteException;

    public abstract void i(com.google.android.gms.games.internal.IGamesCallbacks p0) throws android.os.RemoteException;

    public abstract void i(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract void j() throws android.os.RemoteException;

    public abstract void j(com.google.android.gms.games.internal.IGamesCallbacks p0) throws android.os.RemoteException;

    public abstract void j(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract android.content.Intent k() throws android.os.RemoteException;

    public abstract void k(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract android.content.Intent l() throws android.os.RemoteException;

    public abstract void l(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract android.content.Intent m() throws android.os.RemoteException;

    public abstract void m(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract android.content.Intent n() throws android.os.RemoteException;

    public abstract void n(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract android.content.Intent o() throws android.os.RemoteException;

    public abstract void o(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract android.content.Intent p() throws android.os.RemoteException;

    public abstract void p(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract android.content.Intent q() throws android.os.RemoteException;

    public abstract void q(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract int r() throws android.os.RemoteException;

    public abstract void r(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract int s() throws android.os.RemoteException;

    public abstract void s(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract int t() throws android.os.RemoteException;

    public abstract void t(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract android.content.Intent u() throws android.os.RemoteException;

    public abstract void u(com.google.android.gms.games.internal.IGamesCallbacks p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract void v() throws android.os.RemoteException;

    public abstract int w() throws android.os.RemoteException;

    public abstract int x() throws android.os.RemoteException;

    public abstract boolean y() throws android.os.RemoteException;

}
