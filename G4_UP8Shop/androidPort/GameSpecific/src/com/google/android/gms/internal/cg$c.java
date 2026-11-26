// Decompiled from classes.dex (SourceFile: cg$c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

final class cg$c {
    // Fields
    public final int a;
    public final android.view.ViewGroup.LayoutParams b;
    public final android.view.ViewGroup c;

    // Methods
    public cg$c(com.google.android.gms.internal.ey p0)
 throws com.google.android.gms.internal.cg$a {
      super();
      android.view.ViewParent Parent; // RETVAL
      this.b = p0.getLayoutParams();
      Parent = p0.getParent();
      if ( !(Parent instanceof android.view.ViewGroup) )
        throw new com.google.android.gms.internal.cg$a("Could not get the parent of the WebView for an overlay.");
      this.c = (android.view.ViewGroup)Parent;
      this.a = this.c.indexOfChild(p0);
      this.c.removeView(p0);
      p0.a(true);
    
    }

}
