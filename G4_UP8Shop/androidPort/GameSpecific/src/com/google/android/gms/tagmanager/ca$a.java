// Decompiled from classes.dex (SourceFile: ca$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class ca$a implements com.google.android.gms.tagmanager.da$a {
    // Fields
    final com.google.android.gms.tagmanager.ca a;

    // Methods
    ca$a(com.google.android.gms.tagmanager.ca p0)
    {
      super();
      this.a = p0;
    
    }

    public final void a(com.google.android.gms.tagmanager.ap p0)
    {
      ca.a(this.a, p0.a());
    }

    public final void b(com.google.android.gms.tagmanager.ap p0)
    {
      ca.a(this.a, p0.a());
      bh.C("Permanent failure dispatching hitId: " + p0.a());
    }

    public final void c(com.google.android.gms.tagmanager.ap p0)
    {
      long v2;
      v2 = p0.b();
      if ( v2 != 0 )
      {
        if ( v2 + 14400000 < ca.a(this.a).a() )
        {
          ca.a(this.a, p0.a());
          bh.C("Giving up on failed hitId: " + p0.a());
        }
      }
      else
      {
        ca.a(this.a, p0.a(), ca.a(this.a).a());
      }
    }

}
