// Decompiled from classes.dex (SourceFile: ey$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class ey$a extends android.content.MutableContextWrapper {
    // Fields
    private android.app.Activity a;
    private android.content.Context b;

    // Methods
    public ey$a(android.content.Context p0)
    {
      super(p0);
      this.setBaseContext(p0);
    }

    public final android.content.Context a()
    {
      return this.a;
    }

    public void setBaseContext(android.content.Context p0)
    {
      android.app.Activity v2;
      this.b = p0.getApplicationContext();
      if ( p0 instanceof android.app.Activity )
        v2 = (android.app.Activity)p0;
      else
        v2 = null;
      this.a = v2;
      super.setBaseContext(this.b);
    }

    public void startActivity(android.content.Intent p0)
    {
      if ( this.a != null )
      {
        this.a.startActivity(p0);
      }
      else
      {
        p0.setFlags(0x10000000);
        this.b.startActivity(p0);
      }
    }

}
