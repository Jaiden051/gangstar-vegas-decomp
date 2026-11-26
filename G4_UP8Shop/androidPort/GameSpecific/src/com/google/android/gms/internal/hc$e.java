// Decompiled from classes.dex (SourceFile: hc$e.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class hc$e extends com.google.android.gms.internal.hi$a {
    // Fields
    private com.google.android.gms.internal.hc a;

    // Methods
    public hc$e(com.google.android.gms.internal.hc p0)
    {
      super();
      this.a = p0;
    }

    public final void a(int p0, android.os.IBinder p1, android.os.Bundle p2)
 throws android.os.RemoteException {
      hn.b("onPostInitComplete can be called only once per call to getServiceFromBroker", this.a);
      this.a.a(p0, p1, p2);
      this.a = null;
    }

}
