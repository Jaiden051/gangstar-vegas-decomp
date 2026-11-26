// Decompiled from classes.dex (SourceFile: PlusOneDummyView$b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.plus;

import android.content.res.Resources;
class PlusOneDummyView$b implements com.google.android.gms.plus.PlusOneDummyView$d {
    // Fields
    private android.content.Context a;

    // Methods
    private PlusOneDummyView$b(android.content.Context p0)
    {
      super();
      this.a = p0;
    }

    /* synthetic */ PlusOneDummyView$b(android.content.Context p0, int p1)
    {
      this(p0);
    }

    public final android.graphics.drawable.Drawable a(int p0)
    {
      android.content.res.Resources Resources; // RETVAL
      String v3;
      try
      {
        Resources = this.a.createPackageContext("com.google.android.gms", 4).getResources();
        switch ( p0 )
        {
          case 0:
            v3 = "ic_plusone_small";
            break;
          case 1:
            v3 = "ic_plusone_medium";
            break;
          case 2:
            v3 = "ic_plusone_tall";
            break;
          default:
            v3 = "ic_plusone_standard";
            break;
        }
        return Resources.getDrawable(Resources.getIdentifier(v3, "drawable", "com.google.android.gms"));
      }
      catch ( android.content.pm.PackageManager.NameNotFoundException e )
      {
        return null;
      }
    }

    public final boolean a()
    {
      try
      {
        this.a.createPackageContext("com.google.android.gms", 4).getResources();
        return true;
      }
      catch ( android.content.pm.PackageManager.NameNotFoundException e )
      {
        return false;
      }
    }

}
