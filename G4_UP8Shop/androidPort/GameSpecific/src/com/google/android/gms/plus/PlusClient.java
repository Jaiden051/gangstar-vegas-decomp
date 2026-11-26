// Decompiled from classes.dex (SourceFile: PlusClient.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.plus;

public class PlusClient implements com.google.android.gms.common.GooglePlayServicesClient {
    // Fields
    final com.google.android.gms.plus.internal.e a;

    // Methods
    PlusClient(com.google.android.gms.plus.internal.e p0)
    {
      super();
      this.a = p0;
    }

    private void a(com.google.android.gms.plus.PlusClient$OnAccessRevokedListener p0)
 throws android.os.RemoteException {
      this.a.c((com.google.android.gms.common.api.a$d)new com.google.android.gms.plus.PlusClient$7(this, p0));
    }

    private void a(com.google.android.gms.plus.PlusClient$OnMomentsLoadedListener p0)
 throws android.os.RemoteException {
      this.a.a((com.google.android.gms.common.api.a$d)new com.google.android.gms.plus.PlusClient$1(this, p0));
    }

    private void a(
            com.google.android.gms.plus.PlusClient$OnMomentsLoadedListener p0,
            int p1,
            String p2,
            android.net.Uri p3,
            String p4,
            String p5)
 throws android.os.RemoteException {
      this.a.a((com.google.android.gms.common.api.a$d)new com.google.android.gms.plus.PlusClient$2(this, p0), p1, p2, p3, p4, p5);
    }

    private void a(com.google.android.gms.plus.PlusClient$OnPeopleLoadedListener p0, int p1, String p2)
 throws android.os.RemoteException {
      this.a.a((com.google.android.gms.common.api.a$d)new com.google.android.gms.plus.PlusClient$3(this, p0), p1, p2);
    }

    private void a(com.google.android.gms.plus.PlusClient$OnPeopleLoadedListener p0, String p1)
 throws android.os.RemoteException {
      this.a.a((com.google.android.gms.common.api.a$d)new com.google.android.gms.plus.PlusClient$4(this, p0), p1);
    }

    private void a(
            com.google.android.gms.plus.PlusClient$OnPeopleLoadedListener p0,
            java.util.Collection<String> p1)
 throws android.os.RemoteException {
      this.a.a((com.google.android.gms.common.api.a$d)new com.google.android.gms.plus.PlusClient$5(this, p0), p1);
    }

    private void a(com.google.android.gms.plus.PlusClient$OnPeopleLoadedListener p0, String[] p1)
 throws android.os.RemoteException {
      this.a.a((com.google.android.gms.common.api.a$d)new com.google.android.gms.plus.PlusClient$6(this, p0), p1);
    }

    private void a(com.google.android.gms.plus.model.moments.Moment p0)
 throws android.os.RemoteException {
      this.a.a(null, p0);
    }

    private void a(String p0)
    {
      this.a.a(p0);
    }

    private String g()
    {
      return this.a.g();
    }

    private void h()
    {
      this.a.i();
    }

    public final void a()
 throws android.os.RemoteException {
      this.a.a();
    }

    public final void a(com.google.android.gms.common.GooglePlayServicesClient$ConnectionCallbacks p0)
    {
      this.a.a(p0);
    }

    public final void a(com.google.android.gms.common.GooglePlayServicesClient$OnConnectionFailedListener p0)
    {
      this.a.a(p0);
    }

    public final void b()
 throws android.os.RemoteException {
      this.a.b();
    }

    public final boolean b(com.google.android.gms.common.GooglePlayServicesClient$ConnectionCallbacks p0)
    {
      return this.a.b(p0);
    }

    public final boolean b(com.google.android.gms.common.GooglePlayServicesClient$OnConnectionFailedListener p0)
    {
      return this.a.b(p0);
    }

    public final void c(com.google.android.gms.common.GooglePlayServicesClient$ConnectionCallbacks p0)
    {
      this.a.c(p0);
    }

    public final void c(com.google.android.gms.common.GooglePlayServicesClient$OnConnectionFailedListener p0)
    {
      this.a.c(p0);
    }

    public final boolean c()
    {
      return this.a.c();
    }

    public final boolean d()
    {
      return this.a.D();
    }

    public final com.google.android.gms.plus.model.people.Person e()
    {
      return this.a.h();
    }

    final com.google.android.gms.plus.internal.e f()
    {
      return this.a;
    }

}
