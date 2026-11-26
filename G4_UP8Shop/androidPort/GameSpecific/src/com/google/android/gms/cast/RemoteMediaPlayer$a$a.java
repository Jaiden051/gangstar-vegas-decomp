// Decompiled from classes.dex (SourceFile: RemoteMediaPlayer$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.cast;

final class RemoteMediaPlayer$a$a implements com.google.android.gms.common.api.ResultCallback {
    // Fields
    final com.google.android.gms.cast.RemoteMediaPlayer$a a;
    private final long b;

    // Methods
    RemoteMediaPlayer$a$a(com.google.android.gms.cast.RemoteMediaPlayer$a p0, long p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    
    }

    private void a(com.google.android.gms.common.api.Status p0)
 throws android.os.RemoteException {
      if ( !p0.e() )
        RemoteMediaPlayer.e(this.a.a).a(this.b, p0.g());
    }

    /* synthetic */ public final void a(com.google.android.gms.common.api.Result p0)
 throws android.os.RemoteException {
      com.google.android.gms.common.api.Status v2;
      v2 = (com.google.android.gms.common.api.Status)p0;
      if ( !v2.e() )
        RemoteMediaPlayer.e(this.a.a).a(this.b, v2.g());
    }

}
