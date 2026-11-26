// Decompiled from classes.dex (SourceFile: ad.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

import android.net.Uri;
import android.os.Build;
final class ad implements java.lang.Runnable {
    // Fields
    final android.app.Activity a;
    final com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Utils b;

    // Methods
    ad(com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Utils p0, android.app.Activity p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void run()
    {
      int v1;
      android.content.Intent v2;
      v1 = 1;
      v2 = new android.content.Intent();
      v2.setData(Uri.parse("samsungapps://ProductDetail/com.sec.android.iap"));
      if ( Build.VERSION.SDK_INT < 12 )
        v2.addFlags(335544320);
      else
        v2.addFlags(335544352);
      SamsungHelper.IABResultCallBack(1);
      try
      {
        this.b.F.startActivity(v2);
      }
      catch ( android.content.ActivityNotFoundException e )
      {
        v1 = 0;
        this.b.b(this.a);
      }
      if ( v1 != 0 )
        this.a.finish();
    }

}
