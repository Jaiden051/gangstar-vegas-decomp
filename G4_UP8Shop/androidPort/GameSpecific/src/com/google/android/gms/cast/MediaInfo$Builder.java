// Decompiled from classes.dex (SourceFile: MediaInfo$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.cast;

import android.text.TextUtils;
public class MediaInfo$Builder {
    // Fields
    private final com.google.android.gms.cast.MediaInfo a;

    // Methods
    private MediaInfo$Builder(String p0)
    {
      super();
      if ( TextUtils.isEmpty(p0) )
        throw new IllegalArgumentException("Content ID cannot be empty");
      this.a = new com.google.android.gms.cast.MediaInfo(p0);
    }

    private com.google.android.gms.cast.MediaInfo$Builder a(int p0)
    {
      this.a.a(p0);
      return this;
    }

    private com.google.android.gms.cast.MediaInfo$Builder a(long p0)
    {
      this.a.a(p0);
      return this;
    }

    private com.google.android.gms.cast.MediaInfo$Builder a(com.google.android.gms.cast.MediaMetadata p0)
    {
      this.a.a(p0);
      return this;
    }

    private com.google.android.gms.cast.MediaInfo$Builder a(
            com.google.android.gms.cast.TextTrackStyle p0)
    {
      this.a.a(p0);
      return this;
    }

    private com.google.android.gms.cast.MediaInfo$Builder a(String p0)
    {
      this.a.a(p0);
      return this;
    }

    private com.google.android.gms.cast.MediaInfo$Builder a(
            java.util.List<com.google.android.gms.cast.MediaTrack> p0)
    {
      this.a.a(p0);
      return this;
    }

    private com.google.android.gms.cast.MediaInfo$Builder a(org.json.JSONObject p0)
    {
      this.a.a(p0);
      return this;
    }

    private com.google.android.gms.cast.MediaInfo a()
    {
      this.a.b();
      return this.a;
    }

}
