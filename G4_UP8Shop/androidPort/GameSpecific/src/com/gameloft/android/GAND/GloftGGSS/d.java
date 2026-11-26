// Decompiled from classes.dex (SourceFile: d.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import android.net.Uri;
final class d extends java.lang.Thread {
    // Fields
    final java.lang.String a;
    final java.lang.String b;

    // Methods
    d(String p0, String p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    
    }

    public final void run()
    {
      java.util.ArrayList v1; // RETVAL
      Object v2;
      v1 = DataSharing.access$000();
      v2 = v1;
      synchronized ( v2 )
      {
        DataSharing.AddOrUpdate(
          Uri.parse("content://" + DataSharing.access$100().getPackageName() + ".KeyProvider/key/"),
          this.a,
          this.b);
        com.gameloft.android.DecompRT.monitorExit(v2);
      }
    }

}
