// Decompiled from classes.dex (SourceFile: f.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import android.net.Uri;
final class f extends java.lang.Thread {
    // Fields
    final java.lang.String a;

    // Methods
    f(String p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      java.util.ArrayList v1; // RETVAL
      Object v2;
      int v3;
      int i;
      android.net.Uri v5;
      v1 = DataSharing.access$000();
      v2 = v1;
      synchronized ( v2 )
      {
        v3 = DataSharing.access$000().size();
        for ( i = 0; ; ++i )
        {
          if ( i >= v3 )
          {
            com.gameloft.android.DecompRT.monitorExit(v2);
            return;
          }
          v5 = Uri.parse("content://" + (String)DataSharing.access$000().get(i) + "/key/");
          try
          {
            DataSharing.access$100().getContentResolver().delete(v5, "key='" + this.a + "'", null);
            continue;
          }
          catch ( Exception e )
          {
          }
        }
      }
    }

}
