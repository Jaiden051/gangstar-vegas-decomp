// Decompiled from classes.dex (SourceFile: af.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

import com.sec.android.iap.IAPConnector$Stub;
import com.sec.android.iap.IAPConnector;
final class af implements android.content.ServiceConnection {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.iab.ak a;
    final com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Utils b;

    // Methods
    af(com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Utils p0, com.gameloft.android.GAND.GloftGGSS.iab.ak p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void onServiceConnected(android.content.ComponentName p0, android.os.IBinder p1)
    {
      SamsungIAB2Utils.access$002(this.b, IAPConnector$Stub.asInterface(p1));
      if ( SamsungIAB2Utils.access$000(this.b) != null && this.a != null )
      {
        this.b.G = true;
        this.a.a(0);
      }
      else
      {
        this.b.G = false;
        this.a.a(2);
      }
    }

    public final void onServiceDisconnected(android.content.ComponentName p0)
    {
      SamsungIAB2Utils.access$002(this.b, null);
    }

}
