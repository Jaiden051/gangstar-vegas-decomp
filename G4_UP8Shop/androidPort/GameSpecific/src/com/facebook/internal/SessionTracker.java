// Decompiled from classes.dex (SourceFile: SessionTracker.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

import android.support.v4.content.LocalBroadcastManager;
import com.facebook.Session;
public class SessionTracker {
    // Fields
    private final android.support.v4.content.LocalBroadcastManager broadcastManager;
    private final com.facebook.Session$StatusCallback callback;
    private boolean isTracking;
    private final android.content.BroadcastReceiver receiver;
    private com.facebook.Session session;

    // Methods
    public SessionTracker(android.content.Context p0, com.facebook.Session$StatusCallback p1)
    {
      this(p0, p1, null);
    }

    SessionTracker(android.content.Context p0, com.facebook.Session$StatusCallback p1, com.facebook.Session p2)
    {
      this(p0, p1, p2, true);
    }

    public SessionTracker(
            android.content.Context p0,
            com.facebook.Session$StatusCallback p1,
            com.facebook.Session p2,
            boolean p3)
    {
      super();
      this.isTracking = false;
      this.callback = (com.facebook.Session$StatusCallback)new com.facebook.internal.SessionTracker$CallbackWrapper(this, p1);
      this.session = p2;
      this.receiver = new com.facebook.internal.SessionTracker$ActiveSessionBroadcastReceiver(this, null);
      this.broadcastManager = LocalBroadcastManager.getInstance(p0);
      if ( p3 )
        this.startTracking();
    }

    /* synthetic */ static com.facebook.Session$StatusCallback access$100(
            com.facebook.internal.SessionTracker p0)
    {
      return p0.callback;
    }

    /* synthetic */ static com.facebook.Session access$200(com.facebook.internal.SessionTracker p0)
    {
      return p0.session;
    }

    private void addBroadcastReceiver()
    {
      android.content.IntentFilter v1;
      v1 = new android.content.IntentFilter();
      v1.addAction("com.facebook.sdk.ACTIVE_SESSION_SET");
      v1.addAction("com.facebook.sdk.ACTIVE_SESSION_UNSET");
      this.broadcastManager.registerReceiver(this.receiver, v1);
    }

    public com.facebook.Session getOpenSession()
    {
      com.facebook.Session Session; // RETVAL
      com.facebook.Session v2;
      Session = this.getSession();
      v2 = Session;
      if ( Session == null || !Session.isOpened() )
        return null;
      return v2;
    }

    public com.facebook.Session getSession()
    {
      if ( this.session != null )
        return this.session;
      else
        return Session.getActiveSession();
    }

    public boolean isTracking()
    {
      return this.isTracking;
    }

    public boolean isTrackingActiveSession()
    {
      return this.session == null;
    }

    public void setSession(com.facebook.Session p0)
    {
      com.facebook.Session ActiveSession; // RETVAL
    
      if ( p0 != null )
      {
        if ( this.session != null )
        {
          this.session.removeCallback(this.callback);
        }
        else
        {
          ActiveSession = Session.getActiveSession();
          if ( ActiveSession != null )
            ActiveSession.removeCallback(this.callback);
          this.broadcastManager.unregisterReceiver(this.receiver);
        }
        this.session = p0;
        this.session.addCallback(this.callback);
      }
      else if ( this.session != null )
      {
        this.session.removeCallback(this.callback);
        this.session = null;
        this.addBroadcastReceiver();
        if ( this.getSession() != null )
          this.getSession().addCallback(this.callback);
      }
    }

    public void startTracking()
    {
      if ( !this.isTracking )
      {
        if ( this.session == null )
          this.addBroadcastReceiver();
        if ( this.getSession() != null )
          this.getSession().addCallback(this.callback);
        this.isTracking = true;
      }
    }

    public void stopTracking()
    {
      com.facebook.Session Session; // RETVAL
    
      if ( this.isTracking )
      {
        Session = this.getSession();
        if ( Session != null )
          Session.removeCallback(this.callback);
        this.broadcastManager.unregisterReceiver(this.receiver);
        this.isTracking = false;
      }
    }

}
