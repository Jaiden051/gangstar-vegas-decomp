// Decompiled from classes.dex (SourceFile: e.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import android.net.Uri;
final class e extends java.lang.Thread {
    // Fields
    final java.lang.String a;
    final java.lang.String b;

    // Methods
    e(String p0, String p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    
    }

    public final void run()
    {
      java.util.ArrayList v1; // RETVAL
      Object v2;
      int v3;
      int i;
      v1 = DataSharing.access$000();
      v2 = v1;
      synchronized ( v2 )
      {
        v3 = DataSharing.access$000().size();
        for ( i = 0; i < v3; ++i )
          DataSharing.AddOrUpdate(
            Uri.parse("content://" + (String)DataSharing.access$000().get(i) + "/key/"),
            this.a,
            this.b);
        com.gameloft.android.DecompRT.monitorExit(v2);
      }
    }

}
