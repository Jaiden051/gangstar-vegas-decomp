// Decompiled from classes.dex (SourceFile: ResponseReceiver.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

public final class ResponseReceiver extends android.content.BroadcastReceiver {
    // Fields
    private static final java.lang.String a;

    // Methods
    static
    {
      a = com.amazon.device.associates.ResponseReceiver.class.getName();
    }

    public ResponseReceiver()
    {
      super();
    }

    public final void onReceive(android.content.Context p0, android.content.Intent p1)
    {
      com.amazon.device.associates.m v3;
      try
      {
        v3 = (com.amazon.device.associates.m)AssociatesAPI.getShoppingService();
        if ( v3 != null )
          v3.a(p0, p1);
      }
      catch ( Exception v4 )
      {
        x.a(a, "Error in handling broadcast: " + v4);
      }
    }

}
