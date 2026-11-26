// Decompiled from classes.dex (SourceFile: h.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class h extends com.google.android.gms.tagmanager.aj {
    // Fields
    private static final java.lang.String a;
    private final android.content.Context b;

    // Methods
    static
    {
      a = com.google.android.gms.internal.a.e.toString();
    }

    public h(android.content.Context p0)
    {
      super(a, new String[0]);
      this.b = p0;
    }

    public final com.google.android.gms.internal.d$a a(java.util.Map<String, com.google.android.gms.internal.d$a> p0)
    {
      try
      {
        return dh.r(Integer.valueOf((this.b.getPackageManager().getPackageInfo(this.b.getPackageName(), 0)).versionCode));
      }
      catch ( android.content.pm.PackageManager.NameNotFoundException v4 )
      {
        bh.A("Package name " + this.b.getPackageName() + " not found. " + v4.getMessage());
        return dh.mY();
      }
    }

    public final boolean a()
    {
      return true;
    }

}
