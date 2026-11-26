// Decompiled from classes.dex (SourceFile: ix$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.util.Log;
public final class ix$a extends com.google.android.gms.internal.iy$a {
    // Fields
    private final int a;
    private android.app.Activity b;

    // Methods
    public ix$a(int p0, android.app.Activity p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    private void a(android.app.Activity p0)
    {
      this.b = p0;
    }

    /* synthetic */ static void a(com.google.android.gms.internal.ix$a p0, android.app.Activity p1)
    {
      p0.b = p1;
    }

    public final void a(int p0, android.os.Bundle p1)
    {
      android.content.Intent v3;
      android.app.PendingIntent PendingResult; // RETVAL
      android.app.PendingIntent v6;
      com.google.android.gms.common.ConnectionResult v7;
      android.app.PendingIntent v9; // RETVAL
    
      if ( p0 == 1 )
      {
        v3 = new android.content.Intent();
        v3.putExtras(p1);
        PendingResult = this.b.createPendingResult(this.a, v3, 0x40000000);
        if ( PendingResult != null )
        {
          try
          {
            PendingResult.send(1);
          }
          catch ( android.app.PendingIntent.CanceledException v5 )
          {
            Log.w("AddressClientImpl", "Exception settng pending result", v5);
          }
        }
      }
      else
      {
        v6 = null;
        if ( p1 != null )
          v6 = (android.app.PendingIntent)p1.getParcelable("com.google.android.gms.identity.intents.EXTRA_PENDING_INTENT");
        v7 = new com.google.android.gms.common.ConnectionResult(p0, v6);
        if ( v7.a() )
        {
          try
          {
            v7.a(this.b, this.a);
          }
          catch ( android.content.IntentSender.SendIntentException v8 )
          {
            Log.w("AddressClientImpl", "Exception starting pending intent", v8);
          }
        }
        else
        {
          try
          {
            v9 = this.b.createPendingResult(this.a, new android.content.Intent(), 0x40000000);
            if ( v9 != null )
              v9.send(1);
          }
          catch ( android.app.PendingIntent.CanceledException v10 )
          {
            Log.w("AddressClientImpl", "Exception setting pending result", v10);
          }
        }
      }
    }

}
