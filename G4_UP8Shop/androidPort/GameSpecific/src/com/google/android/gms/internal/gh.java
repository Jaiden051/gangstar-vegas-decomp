// Decompiled from classes.dex (SourceFile: gh.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.text.TextUtils;
public abstract class gh {
    // Fields
    private final java.lang.String a;
    protected final com.google.android.gms.internal.go b;
    private com.google.android.gms.internal.gq c;

    // Methods
    protected gh(String p0, String p1, String p2)
    {
      super();
      gj.ak(p0);
      this.a = p0;
      this.b = new com.google.android.gms.internal.go(p1);
      if ( !TextUtils.isEmpty(p2) )
        this.b.a(p2);
    }

    public void a(long p0, int p2)
 throws org.json.JSONException, java.io.IOException, android.os.RemoteException {
      ;
    }

    public final void a(com.google.android.gms.internal.gq p0)
    {
      this.c = p0;
      if ( this.c == null )
        this.e();
    }

    public void a(String p0)
 throws android.os.RemoteException {
      ;
    }

    protected final void a(String p0, long p1, String p3)
 throws java.io.IOException, android.os.RemoteException {
      Object[] v4;
      v4 = new Object[2];
      v4[0] = p0;
      v4[1] = 0;
      this.b.a("Sending text message: %s to: %s", v4);
      this.c.a(this.a, p0, p1);
    }

    public final String c()
    {
      return this.a;
    }

    protected final long d()
    {
      return this.c.a();
    }

    public void e()
    {
      ;
    }

}
