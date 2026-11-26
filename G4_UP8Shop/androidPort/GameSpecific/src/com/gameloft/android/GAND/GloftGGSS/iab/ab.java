// Decompiled from classes.dex (SourceFile: ab.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

import android.net.Uri;
final class ab implements java.lang.Runnable {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity$PurchaseItemTask a;

    // Methods
    ab(com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity$PurchaseItemTask p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      android.content.Intent v1;
      v1 = new android.content.Intent();
      v1.setData(Uri.parse(SamsungIAB2Activity$PurchaseItemTask.access$900(this.a).c()));
      v1.addFlags(0x10000000);
      this.a.a.a(1, true);
      try
      {
        this.a.a.startActivity(v1);
      }
      catch ( android.content.ActivityNotFoundException e )
      {
      }
    }

}
