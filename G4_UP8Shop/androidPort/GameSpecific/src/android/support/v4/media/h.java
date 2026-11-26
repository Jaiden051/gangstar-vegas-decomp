// Decompiled from classes.dex (SourceFile: h.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.media;

import android.util.Log;
final class h extends android.content.BroadcastReceiver {
    // Fields
    final android.support.v4.media.e a;

    // Methods
    h(android.support.v4.media.e p0)
    {
      super();
      this.a = p0;
    
    }

    public final void onReceive(android.content.Context p0, android.content.Intent p1)
    {
      try
      {
        this.a.d.a((android.view.KeyEvent)p1.getParcelableExtra("android.intent.extra.KEY_EVENT"));
      }
      catch ( ClassCastException v3 )
      {
        Log.w("TransportController", v3);
      }
    }

}
