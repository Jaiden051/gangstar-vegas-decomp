// Decompiled from classes.dex (SourceFile: au$11.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

import android.util.Log;
class au$11 implements java.util.concurrent.Callable {
    // Fields
    final android.os.ParcelFileDescriptor a;
    final byte[] b;
    final com.google.android.gms.wearable.internal.au c;

    // Methods
    au$11(com.google.android.gms.wearable.internal.au p0, android.os.ParcelFileDescriptor p1, byte[] p2)
    {
      super();
      this.c = p0;
      this.a = p1;
      this.b = (byte[])p2;
    
    }

    private Boolean a()
    {
      android.os.ParcelFileDescriptor a;
      android.os.ParcelFileDescriptor.AutoCloseOutputStream v2;
      Boolean v3;
      if ( Log.isLoggable("WearableClient", 3) )
        Log.d("WearableClient", "processAssets: writing data to FD : " + this.a);
      a = this.a;
      v2 = new android.os.ParcelFileDescriptor.AutoCloseOutputStream(a);
      try
      {
        try
        {
          v2.write(this.b);
          v2.flush();
          if ( Log.isLoggable("WearableClient", 3) )
            Log.d("WearableClient", "processAssets: wrote data: " + this.a);
          v3 = Boolean.valueOf(true);
          try
          {
            if ( Log.isLoggable("WearableClient", 3) )
              Log.d("WearableClient", "processAssets: closing: " + this.a);
            v2.close();
            return v3;
          }
          catch ( java.io.IOException e )
          {
          }
          return v3;
        }
        catch ( java.io.IOException e )
        {
          Log.w("WearableClient", "processAssets: writing data failed: " + this.a);
        }
      }
      catch ( Throwable v5 )
      {
        try
        {
          if ( Log.isLoggable("WearableClient", 3) )
            Log.d("WearableClient", "processAssets: closing: " + this.a);
          v2.close();
        }
        catch ( java.io.IOException e )
        {
        }
        throw v5;
      }
      try
      {
        if ( Log.isLoggable("WearableClient", 3) )
          Log.d("WearableClient", "processAssets: closing: " + this.a);
        v2.close();
        return Boolean.valueOf(false);
      }
      catch ( java.io.IOException e )
      {
      }
      return Boolean.valueOf(false);
    }

    /* synthetic */ public Object call()
    {
      return this.a();
    }

}
