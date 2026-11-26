// Decompiled from classes.dex (SourceFile: InAppPurchaseActivity.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.ads.purchase;

import com.google.android.gms.internal.dj;
import com.google.android.gms.internal.ev;
public final class InAppPurchaseActivity extends android.app.Activity {
    // Fields
    public static java.lang.String a;
    public static java.lang.String b;
    private com.google.android.gms.internal.de c;

    // Methods
    public InAppPurchaseActivity()
    {
      super();
    }

    protected final void onActivityResult(int p0, int p1, android.content.Intent p2)
    {
      try
      {
        if ( this.c != null )
          this.c.a(p0, p1, p2);
      }
      catch ( android.os.RemoteException v4 )
      {
        ev.c("Could not forward onActivityResult to in-app purchase manager:", v4);
      }
      super.onActivityResult(p0, p1, p2);
    }

    protected final void onCreate(android.os.Bundle p0)
    {
      super.onCreate(p0);
      this.c = dj.d(this);
      if ( this.c != null )
      {
        try
        {
          this.c.a();
        }
        catch ( android.os.RemoteException v2 )
        {
          ev.c("Could not forward onCreate to in-app purchase manager:", v2);
          this.finish();
        }
      }
      else
      {
        ev.D("Could not create in-app purchase manager.");
        this.finish();
      }
    }

    protected final void onDestroy()
    {
      try
      {
        if ( this.c != null )
          this.c.b();
      }
      catch ( android.os.RemoteException v1 )
      {
        ev.c("Could not forward onDestroy to in-app purchase manager:", v1);
      }
      super.onDestroy();
    }

}
