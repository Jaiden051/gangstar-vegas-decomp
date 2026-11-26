// Decompiled from classes.dex (SourceFile: ResponseReceiver.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap;

public final class ResponseReceiver extends android.content.BroadcastReceiver {
    // Fields
    private static final java.lang.String TAG;

    // Methods
    static
    {
      TAG = com.amazon.device.iap.ResponseReceiver.class.getSimpleName();
    }

    public ResponseReceiver()
    {
      super();
    }

    public final void onReceive(android.content.Context p0, android.content.Intent p1)
    {
      try
      {
        com.amazon.device.iap.internal.d.d().a(p0, p1);
      }
      catch ( Exception v3 )
      {
        com.amazon.device.iap.internal.util.e.b(TAG, "Error in onReceive: " + v3);
      }
    }

}
