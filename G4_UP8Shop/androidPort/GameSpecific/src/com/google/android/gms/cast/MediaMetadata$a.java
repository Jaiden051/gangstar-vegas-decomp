// Decompiled from classes.dex (SourceFile: MediaMetadata$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.cast;

class MediaMetadata$a {
    // Fields
    private final java.util.Map a;
    private final java.util.Map b;
    private final java.util.Map c;

    // Methods
    public MediaMetadata$a()
    {
      super();
      this.a = new java.util.HashMap();
      this.b = new java.util.HashMap();
      this.c = new java.util.HashMap();
    }

    public final com.google.android.gms.cast.MediaMetadata$a a(String p0, String p1, int p2)
    {
      this.a.put(p0, p1);
      this.b.put(p1, p0);
      this.c.put(p0, Integer.valueOf(p2));
      return this;
    }

    public final String a(String p0)
    {
      return (String)this.a.get(p0);
    }

    public final String b(String p0)
    {
      return (String)this.b.get(p0);
    }

    public final int c(String p0)
    {
      Integer v2;
      v2 = (Integer)this.c.get(p0);
      if ( v2 != null )
        return v2.intValue();
      else
        return 0;
    }

}
