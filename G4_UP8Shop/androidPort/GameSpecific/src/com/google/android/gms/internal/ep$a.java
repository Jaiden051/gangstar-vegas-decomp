// Decompiled from classes.dex (SourceFile: ep$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

final class ep$a extends android.content.BroadcastReceiver {
    // Methods
    private ep$a()
    {
      super();
    }

    /* synthetic */ ep$a(int p0)
    {
      this();
    }

    public final void onReceive(android.content.Context p0, android.content.Intent p1)
    {
      if ( "android.intent.action.USER_PRESENT".equals(p1.getAction()) )
      {
        ep.p(true);
      }
      else if ( "android.intent.action.SCREEN_OFF".equals(p1.getAction()) )
      {
        ep.p(false);
      }
    }

}
