// Decompiled from classes.dex (SourceFile: Session$TokenRefreshRequestHandler.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import android.os.Looper;
class Session$TokenRefreshRequestHandler extends android.os.Handler {
    // Fields
    private java.lang.ref.WeakReference refreshRequestWeakReference;
    private java.lang.ref.WeakReference sessionWeakReference;

    // Methods
    Session$TokenRefreshRequestHandler(com.facebook.Session p0, com.facebook.Session$TokenRefreshRequest p1)
    {
      super(Looper.getMainLooper());
      this.sessionWeakReference = new java.lang.ref.WeakReference(p0);
      this.refreshRequestWeakReference = new java.lang.ref.WeakReference(p1);
    }

    public void handleMessage(android.os.Message p0)
    {
      String String;
      com.facebook.Session v3;
      android.content.ServiceConnection v4;
      String = p0.getData().getString("access_token");
      v3 = (com.facebook.Session)this.sessionWeakReference.get();
      if ( v3 != null && String != null )
        v3.extendTokenCompleted(p0.getData());
      v4 = (android.content.ServiceConnection)(com.facebook.Session$TokenRefreshRequest)this.refreshRequestWeakReference.get();
      if ( v4 != null )
      {
        Session.access$1500().unbindService(v4);
        Session$TokenRefreshRequest.access$1700((com.facebook.Session$TokenRefreshRequest)v4);
      }
    }

}
