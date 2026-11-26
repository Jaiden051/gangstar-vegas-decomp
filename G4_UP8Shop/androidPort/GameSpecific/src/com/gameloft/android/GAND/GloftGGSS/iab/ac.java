// Decompiled from classes.dex (SourceFile: ac.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

import android.net.Uri;
final class ac implements java.lang.Runnable {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity$RestoreTransactionTask a;

    // Methods
    ac(com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity$RestoreTransactionTask p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      android.content.Intent v1;
      v1 = new android.content.Intent();
      v1.setData(Uri.parse(SamsungIAB2Activity$RestoreTransactionTask.access$1000(this.a).c()));
      v1.addFlags(0x10000000);
      this.a.a.a(1, null, true);
      try
      {
        this.a.a.startActivity(v1);
      }
      catch ( android.content.ActivityNotFoundException e )
      {
      }
    }

}
