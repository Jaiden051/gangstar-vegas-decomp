// Decompiled from classes.dex (SourceFile: RemoteMediaPlayer$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.cast;

class RemoteMediaPlayer$a implements com.google.android.gms.internal.gq {
    // Fields
    final com.google.android.gms.cast.RemoteMediaPlayer a;
    private com.google.android.gms.common.api.GoogleApiClient b;
    private long c;

    // Methods
    public RemoteMediaPlayer$a(com.google.android.gms.cast.RemoteMediaPlayer p0)
    {
      super();
      this.a = p0;
      this.c = 0;
    
    }

    public final long a()
    {
      long v1;
      v1 = this.c + 1;
      this.c = v1;
      return v1;
    }

    public final void a(com.google.android.gms.common.api.GoogleApiClient p0)
    {
      this.b = p0;
    }

    public final void a(String p0, String p1, long p2)
 throws java.io.IOException, android.os.RemoteException {
      if ( this.b == null )
        throw new java.io.IOException("No GoogleApiClient available");
      Cast.f.a(this.b, p0, p1).a((com.google.android.gms.common.api.ResultCallback)new com.google.android.gms.cast.RemoteMediaPlayer$a$a(this, p2));
    }

}
