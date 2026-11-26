// Decompiled from classes.dex (SourceFile: gw.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class gw extends android.widget.ImageView {
    public gw() { super(null); }
    // Fields
    private android.net.Uri a;
    private int b;
    private int c;
    private com.google.android.gms.internal.gw$a d;

    // Methods
    public final int a()
    {
      return this.b;
    }

    public final void a(int p0)
    {
      this.b = p0;
    }

    public final void a(android.net.Uri p0)
    {
      this.a = p0;
    }

    protected final void onDraw(android.graphics.Canvas p0)
    {
      if ( this.d != null )
      {
        this.getWidth();
        this.getHeight();
        p0.clipPath(this.d.a());
      }
      super.onDraw(p0);
      if ( this.c != 0 )
        p0.drawColor(this.c);
    }

}
