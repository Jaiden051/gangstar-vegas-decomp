// Decompiled from classes.dex (SourceFile: ki.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class ki implements com.google.android.gms.panorama.PanoramaApi$PanoramaResult {
    // Fields
    private final com.google.android.gms.common.api.Status a;
    private final android.content.Intent b;

    // Methods
    public ki(com.google.android.gms.common.api.Status p0, android.content.Intent p1)
    {
      super();
      this.a = (com.google.android.gms.common.api.Status)hn.f(p0);
      this.b = p1;
    }

    public com.google.android.gms.common.api.Status D_()
    {
      return this.a;
    }

    public android.content.Intent b()
    {
      return this.b;
    }

}
