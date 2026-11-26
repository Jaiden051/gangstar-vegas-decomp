// Decompiled from classes.dex (SourceFile: MediaTrack$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.cast;

import com.google.android.gms.internal.gj;
public class MediaTrack$Builder {
    // Fields
    private final com.google.android.gms.cast.MediaTrack a;

    // Methods
    private MediaTrack$Builder(long p0, int p2)
    {
      super();
      this.a = new com.google.android.gms.cast.MediaTrack(p0, p2);
    }

    private com.google.android.gms.cast.MediaTrack$Builder a(int p0)
    {
      this.a.a(p0);
      return this;
    }

    private com.google.android.gms.cast.MediaTrack$Builder a(String p0)
    {
      this.a.a(p0);
      return this;
    }

    private com.google.android.gms.cast.MediaTrack$Builder a(java.util.Locale p0)
    {
      this.a.d(gj.b(p0));
      return this;
    }

    private com.google.android.gms.cast.MediaTrack$Builder a(org.json.JSONObject p0)
    {
      this.a.a(p0);
      return this;
    }

    private com.google.android.gms.cast.MediaTrack a()
    {
      return this.a;
    }

    private com.google.android.gms.cast.MediaTrack$Builder b(String p0)
    {
      this.a.b(p0);
      return this;
    }

    private com.google.android.gms.cast.MediaTrack$Builder c(String p0)
    {
      this.a.c(p0);
      return this;
    }

    private com.google.android.gms.cast.MediaTrack$Builder d(String p0)
    {
      this.a.d(p0);
      return this;
    }

}
