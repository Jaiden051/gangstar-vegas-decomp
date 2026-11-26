// Decompiled from classes.dex (SourceFile: ActivityRecognitionClient.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.location;

public class ActivityRecognitionClient implements com.google.android.gms.common.GooglePlayServicesClient {
    // Fields
    private final com.google.android.gms.internal.jh a;

    // Methods
    private ActivityRecognitionClient(
            android.content.Context p0,
            com.google.android.gms.common.GooglePlayServicesClient$ConnectionCallbacks p1,
            com.google.android.gms.common.GooglePlayServicesClient$OnConnectionFailedListener p2)
    {
      super();
      this.a = new com.google.android.gms.internal.jh(p0, p1, p2, "activity_recognition");
    }

    private void a(long p0, android.app.PendingIntent p2)
    {
      try
      {
        this.a.a(p0, p2);
      }
      catch ( android.os.RemoteException v3 )
      {
        throw new IllegalStateException(v3);
      }
    }

    private void a(android.app.PendingIntent p0)
    {
      try
      {
        this.a.a(p0);
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new IllegalStateException(v2);
      }
    }

    public final void a()
 throws android.os.RemoteException {
      this.a.a();
    }

    public final void a(
            com.google.android.gms.common.GooglePlayServicesClient$ConnectionCallbacks p0)
    {
      this.a.a(p0);
    }

    public final void a(
            com.google.android.gms.common.GooglePlayServicesClient$OnConnectionFailedListener p0)
    {
      this.a.a(p0);
    }

    public final void b()
 throws android.os.RemoteException {
      this.a.b();
    }

    public final boolean b(
            com.google.android.gms.common.GooglePlayServicesClient$ConnectionCallbacks p0)
    {
      return this.a.b(p0);
    }

    public final boolean b(
            com.google.android.gms.common.GooglePlayServicesClient$OnConnectionFailedListener p0)
    {
      return this.a.b(p0);
    }

    public final void c(
            com.google.android.gms.common.GooglePlayServicesClient$ConnectionCallbacks p0)
    {
      this.a.c(p0);
    }

    public final void c(
            com.google.android.gms.common.GooglePlayServicesClient$OnConnectionFailedListener p0)
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

}
