// Decompiled from classes.dex (SourceFile: c$b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

final class c$b extends com.gameloft.android.DecompRT.EnumBase<c$b> {
    // Fields
    public static final com.amazon.device.associates.c$b a;
    public static final com.amazon.device.associates.c$b b;
    public static final com.amazon.device.associates.c$b c;
    private static final com.amazon.device.associates.c$b[] e;
    private final java.lang.String d;

    // Methods
    static
    {
      com.amazon.device.associates.c$b[] v0;
      a = new com.amazon.device.associates.c$b("MP3_ALBUM", 0, "Digital Music Album");
      b = new com.amazon.device.associates.c$b("MP3_TRACK", 1, "Digital Music Track");
      c = new com.amazon.device.associates.c$b("OTHERS", 2, "Others");
      v0 = new com.amazon.device.associates.c$b[3];
      v0[0] = a;
      v0[1] = b;
      v0[2] = c;
      e = (com.amazon.device.associates.c$b[])v0;
    }

    private c$b(String p0, int p1, String p2)
    {
      super(p0, p1);
      this.d = p2;
    }

    public static com.amazon.device.associates.c$b a(String p0)
    {
      com.amazon.device.associates.c$b v1;
      com.amazon.device.associates.c$b[] v3;
      int v4;
      int i;
      if ( p0 != null )
      {
        v3 = values();
        v4 = v3.length;
        for ( i = 0; i < v4; ++i )
        {
          v1 = v3[i];
          if ( v1.d.equals(p0) )
            return v1;
        }
      }
      return c;
    }

    public static com.amazon.device.associates.c$b valueOf(String p0)
    {
      return (com.amazon.device.associates.c$b)com.gameloft.android.DecompRT.EnumBase.valueOf(com.amazon.device.associates.c$b.class, p0);
    }

    public static com.amazon.device.associates.c$b[] values()
    {
      return (com.amazon.device.associates.c$b[])e.clone();
    }

}
