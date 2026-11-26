// Decompiled from classes.dex (SourceFile: bc.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import android.os.Looper;
class bc {
    // Fields
    private static volatile java.util.Map a;
    private static volatile android.os.Handler b;

    // Methods
    static
    {
      a = new java.util.HashMap();
      b = null;
    }

    bc()
    {
      super();
    }

    static android.os.Handler a()
    {
      android.os.Handler v0;
      Object v1;
      android.os.Handler v2;
      v0 = b;
      if ( v0 != null )
        return b;
      v1 = com.amazon.device.associates.bc.class;
      synchronized ( v1 )
      {
        v2 = b;
        if ( v2 == null )
          b = new android.os.Handler(Looper.getMainLooper());
        return b;
      }
    }

}
