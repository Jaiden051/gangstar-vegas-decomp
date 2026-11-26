// Decompiled from classes.dex (SourceFile: Decomp_do$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class Decomp_do$3 implements java.lang.Runnable {
    // Fields
    final com.google.android.gms.internal.Decomp_do a;

    // Methods
    Decomp_do$3(com.google.android.gms.internal.Decomp_do p0)
    {
      super();
      this.a = p0;
    
    }

    public void run()
    {
      Object v1; // RETVAL
      Object v2;
      v1 = Decomp_do.a(this.a);
      v2 = v1;
      synchronized ( v2 )
      {
        if ( Decomp_do.c(this.a).e == -2 )
        {
          Decomp_do.d(this.a).f().a((com.google.android.gms.internal.ez$a)this.a);
          if ( Decomp_do.c(this.a).e == -3 )
          {
            ev.C("Loading URL in WebView: " + Decomp_do.c(this.a).b);
            Decomp_do.d(this.a).loadUrl(Decomp_do.c(this.a).b);
          }
          else
          {
            ev.C("Loading HTML in WebView.");
            Decomp_do.d(this.a).loadDataWithBaseURL(ep.v(Decomp_do.c(this.a).b), Decomp_do.c(this.a).c, "text/html", "UTF-8", null);
          }
        }
        com.gameloft.android.DecompRT.monitorExit(v2);
        return;
      }
    }

}
