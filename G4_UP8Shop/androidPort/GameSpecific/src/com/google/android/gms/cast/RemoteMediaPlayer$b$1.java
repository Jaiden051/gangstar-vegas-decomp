// Decompiled from classes.dex (SourceFile: RemoteMediaPlayer$b$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.cast;

class RemoteMediaPlayer$b$1 implements com.google.android.gms.internal.gr {
    // Fields
    final com.google.android.gms.cast.RemoteMediaPlayer$b a;

    // Methods
    RemoteMediaPlayer$b$1(com.google.android.gms.cast.RemoteMediaPlayer$b p0)
    {
      super();
      this.a = p0;
    
    }

    public final void a()
 throws android.os.RemoteException {
      this.a.a((com.google.android.gms.common.api.Result)this.a.b(new com.google.android.gms.common.api.Status(4)));
    }

    public final void a(int p0, org.json.JSONObject p1)
 throws android.os.RemoteException {
      this.a.a((com.google.android.gms.common.api.Result)new com.google.android.gms.cast.RemoteMediaPlayer$c(new com.google.android.gms.common.api.Status(p0), p1));
    }

}
