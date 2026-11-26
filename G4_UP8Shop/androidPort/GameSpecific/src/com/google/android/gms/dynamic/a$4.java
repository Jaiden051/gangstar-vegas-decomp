// Decompiled from classes.dex (SourceFile: a$4.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.dynamic;

class a$4 implements com.google.android.gms.dynamic.a$a {
    // Fields
    final android.widget.FrameLayout a;
    final android.view.LayoutInflater b;
    final android.view.ViewGroup c;
    final android.os.Bundle d;
    final com.google.android.gms.dynamic.a e;

    // Methods
    a$4(
            com.google.android.gms.dynamic.a p0,
            android.widget.FrameLayout p1,
            android.view.LayoutInflater p2,
            android.view.ViewGroup p3,
            android.os.Bundle p4)
    {
      super();
      this.e = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
      this.d = p4;
    
    }

    public final int a()
    {
      return 2;
    }

    public final void b()
    {
      this.a.removeAllViews();
      this.a.addView(com.google.android.gms.dynamic.a.b(this.e).a(this.b, this.c, this.d));
    }

}
