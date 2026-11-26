// Decompiled from classes.dex (SourceFile: h.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

import com.google.android.gms.drive.Drive;
import com.google.android.gms.internal.hn;
public class h {
    // Fields
    protected com.google.android.gms.drive.MetadataChangeSet a;
    private java.lang.Integer b;
    private java.lang.String c;
    private com.google.android.gms.drive.DriveId d;
    private final int e;

    // Methods
    public h(int p0)
    {
      super();
      this.e = 0;
    }

    public final android.content.IntentSender a(com.google.android.gms.common.api.GoogleApiClient p0)
    {
      com.google.android.gms.drive.internal.aa v2; // RETVAL
      com.google.android.gms.drive.internal.aa v3;
      int v4;
      int v6; // RETVAL
    
      hn.b(this.a, "Must provide initial metadata to CreateFileActivityBuilder.");
      hn.a(p0.g(), "Client must be connected");
      v2 = ((com.google.android.gms.drive.internal.r)p0.a(Drive.a)).g();
      v3 = v2;
      if ( this.b != null )
      {
        v6 = this.b.intValue();
        v4 = v6;
      }
      else
      {
        v4 = -1;
      }
      try
      {
        return v3.a(new com.google.android.gms.drive.internal.CreateFileIntentSenderRequest(this.a.b(), v4, this.c, this.d, this.e));
      }
      catch ( android.os.RemoteException v7 )
      {
        throw new RuntimeException("Unable to connect Drive Play Service", v7);
      }
    }

    public final void a(int p0)
    {
      this.b = Integer.valueOf(p0);
    }

    public final void a(com.google.android.gms.drive.DriveId p0)
    {
      this.d = (com.google.android.gms.drive.DriveId)hn.f(p0);
    }

    public final void a(com.google.android.gms.drive.MetadataChangeSet p0)
    {
      this.a = (com.google.android.gms.drive.MetadataChangeSet)hn.f(p0);
    }

    public final void a(String p0)
    {
      this.c = (String)hn.f(p0);
    }

}
