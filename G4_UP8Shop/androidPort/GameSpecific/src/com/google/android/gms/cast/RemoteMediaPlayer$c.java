// Decompiled from classes.dex (SourceFile: RemoteMediaPlayer$c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.cast;

final class RemoteMediaPlayer$c implements com.google.android.gms.cast.RemoteMediaPlayer$MediaChannelResult {
    // Fields
    private final com.google.android.gms.common.api.Status a;
    private final org.json.JSONObject b;

    // Methods
    RemoteMediaPlayer$c(com.google.android.gms.common.api.Status p0, org.json.JSONObject p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.a;
    }

    public final org.json.JSONObject b()
    {
      return this.b;
    }

}
