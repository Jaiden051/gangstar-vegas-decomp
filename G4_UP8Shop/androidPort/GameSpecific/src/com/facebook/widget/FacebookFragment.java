// Decompiled from classes.dex (SourceFile: FacebookFragment.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

import com.facebook.Session;
import com.facebook.SessionLoginBehavior;
import com.facebook.internal.SessionAuthorizationType;
class FacebookFragment extends android.support.v4.app.Fragment {
    // Fields
    private com.facebook.internal.SessionTracker sessionTracker;

    // Methods
    FacebookFragment()
    {
      super();
    }

    private void openSession(
            String p0,
            java.util.List<String> p1,
            com.facebook.SessionLoginBehavior p2,
            int p3,
            com.facebook.internal.SessionAuthorizationType p4)
    {
      com.facebook.Session Session; // RETVAL
      com.facebook.Session v7;
      com.facebook.Session$OpenRequest v8;
      if ( this.sessionTracker != null )
      {
        Session = this.sessionTracker.getSession();
        v7 = Session;
        if ( Session == null || Session.getState().isClosed() )
        {
          v7 = new com.facebook.Session$Builder(this.getActivity()).setApplicationId(p0).build();
          Session.setActiveSession(v7);
        }
        if ( !v7.isOpened() )
        {
          v8 = new com.facebook.Session$OpenRequest(this).setPermissions(p1).setLoginBehavior(p2).setRequestCode(p3);
          if ( SessionAuthorizationType.PUBLISH.equals(p4) )
            v7.openForPublish(v8);
          else
            v7.openForRead(v8);
        }
      }
    }

    protected final void closeSession()
    {
      com.facebook.Session OpenSession; // RETVAL
    
      if ( this.sessionTracker != null )
      {
        OpenSession = this.sessionTracker.getOpenSession();
        if ( OpenSession != null )
          OpenSession.close();
      }
    }

    protected final void closeSessionAndClearTokenInformation()
    {
      com.facebook.Session OpenSession; // RETVAL
    
      if ( this.sessionTracker != null )
      {
        OpenSession = this.sessionTracker.getOpenSession();
        if ( OpenSession != null )
          OpenSession.closeAndClearTokenInformation();
      }
    }

    protected final String getAccessToken()
    {
      String v1;
      com.facebook.Session OpenSession; // RETVAL
    
      v1 = null;
      if ( this.sessionTracker != null )
      {
        OpenSession = this.sessionTracker.getOpenSession();
        if ( OpenSession != null )
          return OpenSession.getAccessToken();
      }
      return v1;
    }

    protected final java.util.Date getExpirationDate()
    {
      java.util.Date v1;
      com.facebook.Session OpenSession; // RETVAL
    
      v1 = null;
      if ( this.sessionTracker != null )
      {
        OpenSession = this.sessionTracker.getOpenSession();
        if ( OpenSession != null )
          return OpenSession.getExpirationDate();
      }
      return v1;
    }

    protected final com.facebook.Session getSession()
    {
      if ( this.sessionTracker != null )
        return this.sessionTracker.getSession();
      else
        return null;
    }

    protected final java.util.List<String> getSessionPermissions()
    {
      java.util.List v1;
      com.facebook.Session Session; // RETVAL
    
      v1 = null;
      if ( this.sessionTracker != null )
      {
        Session = this.sessionTracker.getSession();
        if ( Session != null )
          return Session.getPermissions();
      }
      return v1;
    }

    protected final com.facebook.SessionState getSessionState()
    {
      com.facebook.SessionState v1;
      com.facebook.Session Session; // RETVAL
    
      v1 = null;
      if ( this.sessionTracker != null )
      {
        Session = this.sessionTracker.getSession();
        if ( Session != null )
          return Session.getState();
      }
      return v1;
    }

    protected final boolean isSessionOpen()
    {
      boolean v1;
      v1 = false;
      if ( this.sessionTracker != null )
        return this.sessionTracker.getOpenSession() != null;
      return v1;
    }

    public void onActivityCreated(android.os.Bundle p0)
    {
      super.onActivityCreated(p0);
      this.sessionTracker = new com.facebook.internal.SessionTracker(this.getActivity(), (com.facebook.Session$StatusCallback)new com.facebook.widget.FacebookFragment$DefaultSessionStatusCallback(this, null));
    }

    public void onActivityResult(int p0, int p1, android.content.Intent p2)
 {
      super.onActivityResult(p0, p1, p2);
      this.sessionTracker.getSession().onActivityResult(this.getActivity(), p0, p1, p2);
    }

    public void onDestroy()
    {
      super.onDestroy();
      this.sessionTracker.stopTracking();
    }

    protected void onSessionStateChange(com.facebook.SessionState p0, Exception p1)
    {
      ;
    }

    protected final void openSession()
    {
      this.openSessionForRead(null, null);
    }

    protected final void openSessionForPublish(String p0, java.util.List<String> p1)
    {
      this.openSessionForPublish(p0, p1, SessionLoginBehavior.SSO_WITH_FALLBACK, 64206);
    }

    protected final void openSessionForPublish(
            String p0,
            java.util.List<String> p1,
            com.facebook.SessionLoginBehavior p2,
            int p3)
    {
      this.openSession(p0, p1, p2, p3, SessionAuthorizationType.PUBLISH);
    }

    protected final void openSessionForRead(String p0, java.util.List<String> p1)
    {
      this.openSessionForRead(p0, p1, SessionLoginBehavior.SSO_WITH_FALLBACK, 64206);
    }

    protected final void openSessionForRead(
            String p0,
            java.util.List<String> p1,
            com.facebook.SessionLoginBehavior p2,
            int p3)
    {
      this.openSession(p0, p1, p2, p3, SessionAuthorizationType.READ);
    }

    public void setSession(com.facebook.Session p0)
    {
      if ( this.sessionTracker != null )
        this.sessionTracker.setSession(p0);
    }

}
