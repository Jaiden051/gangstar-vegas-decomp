// Decompiled from classes.dex (SourceFile: o.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class o {
    // Fields
    public float a;
    public float b;
    boolean c;
    final com.gameloft.android.GAND.GloftGGSS.GL2JNIView d;

    // Methods
    public o(com.gameloft.android.GAND.GloftGGSS.GL2JNIView p0, float p1, float p2)
    {
      super();
      this.d = p0;
      this.c = false;
      this.a = 0.0f;
      this.b = 0.0f;
    
    }

    public final void a()
    {
      this.b = -71.0f;
      this.a = -71.0f;
    }

    public final void a(float p0, float p1)
    {
      this.a = p0;
      this.b = p1;
    }

    public final boolean b(float p0, float p1)
    {
      return p0 >= this.a - 70.0f && p0 <= this.a + 70.0f && p1 >= this.b - 70.0f && p1 <= this.b + 70.0f;
    }

}
