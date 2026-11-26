// Decompiled from classes.dex (SourceFile: RemoteMediaPlayer$b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.cast;

abstract class RemoteMediaPlayer$b extends com.google.android.gms.cast.Cast$a {
    // Fields
    com.google.android.gms.internal.gr g;

    // Methods
    RemoteMediaPlayer$b()
    {
      super();
      this.g = (com.google.android.gms.internal.gr)new com.google.android.gms.cast.RemoteMediaPlayer$b$1(this);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)this.b(p0);
    }

    public final com.google.android.gms.cast.RemoteMediaPlayer$MediaChannelResult b(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.cast.RemoteMediaPlayer$MediaChannelResult)new com.google.android.gms.cast.RemoteMediaPlayer$b$2(this, p0);
    }

}
