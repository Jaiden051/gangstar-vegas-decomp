// Decompiled from classes.dex (SourceFile: RemoteMediaPlayer$b$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.cast;

class RemoteMediaPlayer$b$2 implements com.google.android.gms.cast.RemoteMediaPlayer$MediaChannelResult {
    // Fields
    final com.google.android.gms.common.api.Status a;
    final com.google.android.gms.cast.RemoteMediaPlayer$b b;

    // Methods
    RemoteMediaPlayer$b$2(com.google.android.gms.cast.RemoteMediaPlayer$b p0, com.google.android.gms.common.api.Status p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.a;
    }

    public final org.json.JSONObject b()
    {
      return null;
    }

}
