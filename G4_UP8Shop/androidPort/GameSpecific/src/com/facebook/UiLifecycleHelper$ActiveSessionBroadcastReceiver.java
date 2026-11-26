// Decompiled from classes.dex (SourceFile: UiLifecycleHelper$ActiveSessionBroadcastReceiver.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class UiLifecycleHelper$ActiveSessionBroadcastReceiver extends android.content.BroadcastReceiver {
    // Fields
    final com.facebook.UiLifecycleHelper this$0;

    // Methods
    private UiLifecycleHelper$ActiveSessionBroadcastReceiver(com.facebook.UiLifecycleHelper p0)
    {
      super();
      this.this$0 = p0;
    
    }

    /* synthetic */ UiLifecycleHelper$ActiveSessionBroadcastReceiver(com.facebook.UiLifecycleHelper p0, com.facebook.UiLifecycleHelper$1 p1)
    {
      this(p0);
    }

    public void onReceive(
            android.content.Context p0,
            android.content.Intent p1)
    {
      com.facebook.Session ActiveSession;
      com.facebook.Session v4;
      if ( "com.facebook.sdk.ACTIVE_SESSION_SET".equals(p1.getAction()) )
      {
        ActiveSession = Session.getActiveSession();
        if ( ActiveSession != null && UiLifecycleHelper.access$100(this.this$0) != null )
          ActiveSession.addCallback(UiLifecycleHelper.access$100(this.this$0));
      }
      else if ( "com.facebook.sdk.ACTIVE_SESSION_UNSET".equals(p1.getAction()) )
      {
        v4 = Session.getActiveSession();
        if ( v4 != null && UiLifecycleHelper.access$100(this.this$0) != null )
          v4.removeCallback(UiLifecycleHelper.access$100(this.this$0));
      }
    }

}
