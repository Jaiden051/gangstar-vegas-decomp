// Decompiled from classes.dex (SourceFile: OpenFileActivityBuilder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive;

import com.google.android.gms.internal.hn;
public class OpenFileActivityBuilder {
    // Fields
    public static java.lang.String a;
    private java.lang.String b;
    private java.lang.String[] c;
    private com.google.android.gms.drive.DriveId d;

    // Methods
    public OpenFileActivityBuilder()
    {
      super();
    }

    private android.content.IntentSender a(com.google.android.gms.common.api.GoogleApiClient p0)
    {
      com.google.android.gms.drive.internal.aa v2; // RETVAL
    
      hn.a(p0.g(), "Client must be connected");
      if ( this.c == null )
        this.c = new String[0];
      v2 = ((com.google.android.gms.drive.internal.r)p0.a(Drive.a)).g();
      try
      {
        return v2.a(new com.google.android.gms.drive.internal.OpenFileIntentSenderRequest(this.b, this.c, this.d));
      }
      catch ( android.os.RemoteException v4 )
      {
        throw new RuntimeException("Unable to connect Drive Play Service", v4);
      }
    }

    private com.google.android.gms.drive.OpenFileActivityBuilder a(
            com.google.android.gms.drive.DriveId p0)
    {
      this.d = (com.google.android.gms.drive.DriveId)hn.f(p0);
      return this;
    }

    private com.google.android.gms.drive.OpenFileActivityBuilder a(String p0)
    {
      this.b = (String)hn.f(p0);
      return this;
    }

    private com.google.android.gms.drive.OpenFileActivityBuilder a(String[] p0)
    {
      hn.b(p0 != null, "mimeTypes may not be null");
      this.c = p0;
      return this;
    }

}
