// Decompiled from classes.dex (SourceFile: SessionTracker$ActiveSessionBroadcastReceiver.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

import com.facebook.Session;
class SessionTracker$ActiveSessionBroadcastReceiver extends android.content.BroadcastReceiver {
    // Fields
    final com.facebook.internal.SessionTracker this$0;

    // Methods
    private SessionTracker$ActiveSessionBroadcastReceiver(com.facebook.internal.SessionTracker p0)
    {
      super();
      this.this$0 = p0;
    
    }

    /* synthetic */ SessionTracker$ActiveSessionBroadcastReceiver(
            com.facebook.internal.SessionTracker p0,
            com.facebook.internal.SessionTracker$1 p1)
    {
      this(p0);
    }

    public void onReceive(
            android.content.Context p0,
            android.content.Intent p1)
    {
      com.facebook.Session ActiveSession;
      if ( "com.facebook.sdk.ACTIVE_SESSION_SET".equals(p1.getAction()) )
      {
        ActiveSession = Session.getActiveSession();
        if ( ActiveSession != null )
          ActiveSession.addCallback(SessionTracker.access$100(this.this$0));
      }
    }

}
