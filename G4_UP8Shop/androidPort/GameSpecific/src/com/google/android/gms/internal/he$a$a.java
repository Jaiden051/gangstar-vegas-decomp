// Decompiled from classes.dex (SourceFile: he$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class he$a$a implements android.content.ServiceConnection {
    // Fields
    final com.google.android.gms.internal.he$a a;

    // Methods
    public he$a$a(com.google.android.gms.internal.he$a p0)
    {
      super();
      this.a = p0;
    
    }

    public void onServiceConnected(android.content.ComponentName p0, android.os.IBinder p1)
    {
      java.util.HashMap v3; // RETVAL
      Object v4;
      java.util.Iterator i;
      v3 = he.a(this.a.a);
      v4 = v3;
      synchronized ( v4 )
      {
        he$a.a(this.a, p1);
        he$a.a(this.a, p0);
        for ( i = he$a.a(this.a).iterator();
              i.hasNext();
              ((com.google.android.gms.internal.hc$f)i.next()).onServiceConnected(p0, p1) )
        {
          ;
        }
        he$a.a(this.a, 1);
        com.gameloft.android.DecompRT.monitorExit(v4);
      }
    }

    public void onServiceDisconnected(android.content.ComponentName p0)
    {
      java.util.HashMap v2; // RETVAL
      Object v3;
      java.util.Iterator i;
      v2 = he.a(this.a.a);
      v3 = v2;
      synchronized ( v3 )
      {
        he$a.a(this.a, (android.os.IBinder)null);
        he$a.a(this.a, p0);
        for ( i = he$a.a(this.a).iterator();
              i.hasNext();
              ((com.google.android.gms.internal.hc$f)i.next()).onServiceDisconnected(p0) )
        {
          ;
        }
        he$a.a(this.a, 2);
        com.gameloft.android.DecompRT.monitorExit(v3);
      }
    }

}
