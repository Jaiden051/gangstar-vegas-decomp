// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.apps.analytics;

public final class a {
    // Fields
    private boolean a;

    // Methods
    public a()
    {
      super();
      try
      {
        this.a = Class.forName("com.google.ads.AdRequest") != null;
      }
      catch ( ClassNotFoundException e )
      {
        this.a = false;
      }
    }

    private a(boolean p0)
    {
      super();
      this.a = p0;
    }

    final int a()
    {
      if ( this.a )
        return AdMobInfo.getInstance().a();
      else
        return 0;
    }

}
