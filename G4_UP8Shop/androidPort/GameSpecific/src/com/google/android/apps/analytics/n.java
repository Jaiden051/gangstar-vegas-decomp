// Decompiled from classes.dex (SourceFile: n.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.apps.analytics;

final class n implements com.google.android.apps.analytics.p {
    // Fields
    final com.google.android.apps.analytics.NetworkDispatcher$DispatcherThread a;

    // Methods
    private n(com.google.android.apps.analytics.NetworkDispatcher$DispatcherThread p0)
    {
      super();
      this.a = p0;
    
    }

    /* synthetic */ n(com.google.android.apps.analytics.NetworkDispatcher$DispatcherThread p0, int p1)
    {
      this(p0);
    }

    public final void a()
    {
      com.google.android.apps.analytics.i v1;
      if ( NetworkDispatcher$DispatcherThread.access$400(this.a) != null )
      {
        v1 = NetworkDispatcher$DispatcherThread.access$400(this.a).a();
        if ( v1 != null )
          NetworkDispatcher$DispatcherThread.access$900(this.a).a(v1.b);
      }
    }

    public final void a(int p0)
    {
      NetworkDispatcher$DispatcherThread.access$502(this.a, p0);
    }

    public final void a(boolean p0)
    {
      NetworkDispatcher$DispatcherThread.access$1002(this.a, 1);
    }

}
