// Decompiled from classes.dex (SourceFile: ls$b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Bundle;
import android.util.Log;
final class ls$b extends com.google.android.gms.internal.ls$a {
    // Fields
    final com.google.android.gms.internal.ls a;
    private final int b;

    // Methods
    public ls$b(com.google.android.gms.internal.ls p0, int p1)
    {
      super(0);
      this.a = p0;
      this.b = p1;
    
    }

    public final void a(int p0, android.os.Bundle p1)
    {
      com.google.android.gms.common.ConnectionResult v3;
      android.content.Intent v5;
      android.app.PendingIntent PendingResult; // RETVAL
    
      hn.b(p1, "Bundle should not be null");
      v3 = new com.google.android.gms.common.ConnectionResult(p0, (android.app.PendingIntent)p1.getParcelable("com.google.android.gms.wallet.EXTRA_PENDING_INTENT"));
      if ( v3.a() )
      {
        try
        {
          v3.a(ls.b(this.a), this.b);
        }
        catch ( android.content.IntentSender.SendIntentException v4 )
        {
          Log.w("WalletClientImpl", "Exception starting pending intent", v4);
        }
      }
      else
      {
        Log.e("WalletClientImpl", "Create Wallet Objects confirmation UI will not be shown connection result: " + v3);
        v5 = new android.content.Intent();
        v5.putExtra("com.google.android.gms.wallet.EXTRA_ERROR_CODE", 413);
        PendingResult = ls.b(this.a).createPendingResult(this.b, v5, 0x40000000);
        if ( PendingResult != null )
        {
          try
          {
            PendingResult.send(1);
          }
          catch ( android.app.PendingIntent.CanceledException v7 )
          {
            Log.w("WalletClientImpl", "Exception setting pending result", v7);
          }
        }
        else
        {
          Log.w("WalletClientImpl", "Null pending result returned for onWalletObjectsCreated");
        }
      }
    }

    public final void a(int p0, com.google.android.gms.wallet.FullWallet p1, android.os.Bundle p2)
    {
      android.app.PendingIntent v4;
      com.google.android.gms.common.ConnectionResult v5;
      android.content.Intent v7;
      int v8;
      android.app.PendingIntent PendingResult; // RETVAL
    
      v4 = null;
      if ( p2 != null )
        v4 = (android.app.PendingIntent)p2.getParcelable("com.google.android.gms.wallet.EXTRA_PENDING_INTENT");
      v5 = new com.google.android.gms.common.ConnectionResult(p0, v4);
      if ( v5.a() )
      {
        try
        {
          v5.a(ls.b(this.a), this.b);
        }
        catch ( android.content.IntentSender.SendIntentException v6 )
        {
          Log.w("WalletClientImpl", "Exception starting pending intent", v6);
        }
      }
      else
      {
        v7 = new android.content.Intent();
        if ( v5.b() )
        {
          v8 = -1;
          v7.putExtra("com.google.android.gms.wallet.EXTRA_FULL_WALLET", (android.os.Parcelable)p1);
        }
        else
        {
          v8 = p0 != 408 ? 1 : 0;
          v7.putExtra("com.google.android.gms.wallet.EXTRA_ERROR_CODE", p0);
        }
        PendingResult = ls.b(this.a).createPendingResult(this.b, v7, 0x40000000);
        if ( PendingResult != null )
        {
          try
          {
            PendingResult.send(v8);
          }
          catch ( android.app.PendingIntent.CanceledException v10 )
          {
            Log.w("WalletClientImpl", "Exception setting pending result", v10);
          }
        }
        else
        {
          Log.w("WalletClientImpl", "Null pending result returned for onFullWalletLoaded");
        }
      }
    }

    public final void a(int p0, com.google.android.gms.wallet.MaskedWallet p1, android.os.Bundle p2)
    {
      android.app.PendingIntent v4;
      com.google.android.gms.common.ConnectionResult v5;
      android.content.Intent v7;
      int v8;
      android.app.PendingIntent PendingResult; // RETVAL
    
      v4 = null;
      if ( p2 != null )
        v4 = (android.app.PendingIntent)p2.getParcelable("com.google.android.gms.wallet.EXTRA_PENDING_INTENT");
      v5 = new com.google.android.gms.common.ConnectionResult(p0, v4);
      if ( v5.a() )
      {
        try
        {
          v5.a(ls.b(this.a), this.b);
        }
        catch ( android.content.IntentSender.SendIntentException v6 )
        {
          Log.w("WalletClientImpl", "Exception starting pending intent", v6);
        }
      }
      else
      {
        v7 = new android.content.Intent();
        if ( v5.b() )
        {
          v8 = -1;
          v7.putExtra("com.google.android.gms.wallet.EXTRA_MASKED_WALLET", (android.os.Parcelable)p1);
        }
        else
        {
          v8 = p0 != 408 ? 1 : 0;
          v7.putExtra("com.google.android.gms.wallet.EXTRA_ERROR_CODE", p0);
        }
        PendingResult = ls.b(this.a).createPendingResult(this.b, v7, 0x40000000);
        if ( PendingResult != null )
        {
          try
          {
            PendingResult.send(v8);
          }
          catch ( android.app.PendingIntent.CanceledException v10 )
          {
            Log.w("WalletClientImpl", "Exception setting pending result", v10);
          }
        }
        else
        {
          Log.w("WalletClientImpl", "Null pending result returned for onMaskedWalletLoaded");
        }
      }
    }

    public final void a(int p0, boolean p1, android.os.Bundle p2)
    {
      android.content.Intent v4;
      android.app.PendingIntent PendingResult; // RETVAL
    
      v4 = new android.content.Intent();
      v4.putExtra("com.google.android.gm.wallet.EXTRA_IS_USER_PREAUTHORIZED", p1);
      PendingResult = ls.b(this.a).createPendingResult(this.b, v4, 0x40000000);
      if ( PendingResult != null )
      {
        try
        {
          PendingResult.send(-1);
        }
        catch ( android.app.PendingIntent.CanceledException v6 )
        {
          Log.w("WalletClientImpl", "Exception setting pending result", v6);
        }
      }
      else
      {
        Log.w("WalletClientImpl", "Null pending result returned for onPreAuthorizationDetermined");
      }
    }

}
