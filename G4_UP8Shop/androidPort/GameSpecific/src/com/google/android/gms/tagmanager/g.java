// Decompiled from classes.dex (SourceFile: g.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class g extends com.google.android.gms.tagmanager.aj {
    // Fields
    private static final java.lang.String a;
    private final android.content.Context b;

    // Methods
    static
    {
      a = com.google.android.gms.internal.a.d.toString();
    }

    public g(android.content.Context p0)
    {
      super(a, new String[0]);
      this.b = p0;
    }

    public final com.google.android.gms.internal.d$a a(java.util.Map<String, com.google.android.gms.internal.d$a> p0)
    {
      android.content.pm.PackageManager PackageManager;
      try
      {
        PackageManager = this.b.getPackageManager();
        return dh.r(PackageManager.getApplicationLabel(PackageManager.getApplicationInfo(this.b.getPackageName(), 0)).toString());
      }
      catch ( android.content.pm.PackageManager.NameNotFoundException v5 )
      {
        bh.b("App name is not found.", v5);
        return dh.mY();
      }
    }

    public final boolean a()
    {
      return true;
    }

}
