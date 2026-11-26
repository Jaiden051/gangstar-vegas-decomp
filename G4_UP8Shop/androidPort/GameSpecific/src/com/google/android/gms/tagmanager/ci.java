// Decompiled from classes.dex (SourceFile: ci.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class ci extends com.google.android.gms.tagmanager.aj {
    // Fields
    private static final java.lang.String a;
    private final android.content.Context b;

    // Methods
    static
    {
      a = com.google.android.gms.internal.a.w.toString();
    }

    public ci(android.content.Context p0)
    {
      super(a, new String[0]);
      this.b = p0;
    }

    public final com.google.android.gms.internal.d$a a(java.util.Map<String, com.google.android.gms.internal.d$a> p0)
    {
      android.util.DisplayMetrics v2;
      v2 = new android.util.DisplayMetrics();
      ((android.view.WindowManager)this.b.getSystemService("window")).getDefaultDisplay().getMetrics(v2);
      return dh.r(v2.widthPixels + "x" + v2.heightPixels);
    }

    public final boolean a()
    {
      return true;
    }

}
