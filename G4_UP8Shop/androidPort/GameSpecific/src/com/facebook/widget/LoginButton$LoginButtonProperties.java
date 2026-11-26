// Decompiled from classes.dex (SourceFile: LoginButton$LoginButtonProperties.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

import android.util.Log;
import com.facebook.SessionDefaultAudience;
import com.facebook.SessionLoginBehavior;
import com.facebook.internal.SessionAuthorizationType;
import com.facebook.internal.Utility;
import java.util.Collections;
class LoginButton$LoginButtonProperties {
    // Fields
    private com.facebook.internal.SessionAuthorizationType authorizationType;
    private com.facebook.SessionDefaultAudience defaultAudience;
    private com.facebook.SessionLoginBehavior loginBehavior;
    private com.facebook.widget.LoginButton$OnErrorListener onErrorListener;
    private java.util.List permissions;
    private com.facebook.Session$StatusCallback sessionStatusCallback;

    // Methods
    LoginButton$LoginButtonProperties()
    {
      super();
      this.defaultAudience = SessionDefaultAudience.FRIENDS;
      this.permissions = Collections.emptyList();
      this.authorizationType = null;
      this.loginBehavior = SessionLoginBehavior.SSO_WITH_FALLBACK;
    }

    /* synthetic */ static com.facebook.SessionDefaultAudience access$1100(
            com.facebook.widget.LoginButton$LoginButtonProperties p0)
    {
      return p0.defaultAudience;
    }

    /* synthetic */ static java.util.List access$1200(
            com.facebook.widget.LoginButton$LoginButtonProperties p0)
    {
      return p0.permissions;
    }

    /* synthetic */ static com.facebook.SessionLoginBehavior access$1300(
            com.facebook.widget.LoginButton$LoginButtonProperties p0)
    {
      return p0.loginBehavior;
    }

    /* synthetic */ static com.facebook.internal.SessionAuthorizationType access$1400(
            com.facebook.widget.LoginButton$LoginButtonProperties p0)
    {
      return p0.authorizationType;
    }

    /* synthetic */ static com.facebook.Session$StatusCallback access$1900(
            com.facebook.widget.LoginButton$LoginButtonProperties p0)
    {
      return p0.sessionStatusCallback;
    }

    /* synthetic */ static com.facebook.widget.LoginButton$OnErrorListener access$2000(
            com.facebook.widget.LoginButton$LoginButtonProperties p0)
    {
      return p0.onErrorListener;
    }

    private boolean validatePermissions(
            java.util.List<String> p0,
            com.facebook.internal.SessionAuthorizationType p1,
            com.facebook.Session p2)
    {
      if ( SessionAuthorizationType.PUBLISH.equals(p1) && Utility.isNullOrEmpty(p0) )
        throw new IllegalArgumentException("Permissions for publish actions cannot be null or empty.");
      if ( p2 == null || !p2.isOpened() || Utility.isSubset(p0, p2.getPermissions()) )
        return true;
      Log.e(LoginButton.access$000(), "Cannot set additional permissions when session is already open.");
      return false;
    }

    public void clearPermissions()
    {
      this.permissions = null;
      this.authorizationType = null;
    }

    public com.facebook.SessionDefaultAudience getDefaultAudience()
    {
      return this.defaultAudience;
    }

    public com.facebook.SessionLoginBehavior getLoginBehavior()
    {
      return this.loginBehavior;
    }

    public com.facebook.widget.LoginButton$OnErrorListener getOnErrorListener()
    {
      return this.onErrorListener;
    }

    java.util.List<String> getPermissions()
    {
      return this.permissions;
    }

    public com.facebook.Session$StatusCallback getSessionStatusCallback()
    {
      return this.sessionStatusCallback;
    }

    public void setDefaultAudience(com.facebook.SessionDefaultAudience p0)
    {
      this.defaultAudience = p0;
    }

    public void setLoginBehavior(com.facebook.SessionLoginBehavior p0)
    {
      this.loginBehavior = p0;
    }

    public void setOnErrorListener(com.facebook.widget.LoginButton$OnErrorListener p0)
    {
      this.onErrorListener = p0;
    }

    public void setPublishPermissions(java.util.List<String> p0, com.facebook.Session p1)
    {
      if ( SessionAuthorizationType.READ.equals(this.authorizationType) )
        throw new UnsupportedOperationException("Cannot call setPublishPermissions after setReadPermissions has been called.");
      if ( this.validatePermissions(p0, SessionAuthorizationType.PUBLISH, p1) )
      {
        this.permissions = p0;
        this.authorizationType = SessionAuthorizationType.PUBLISH;
      }
    }

    public void setReadPermissions(java.util.List<String> p0, com.facebook.Session p1)
    {
      if ( SessionAuthorizationType.PUBLISH.equals(this.authorizationType) )
        throw new UnsupportedOperationException("Cannot call setReadPermissions after setPublishPermissions has been called.");
      if ( this.validatePermissions(p0, SessionAuthorizationType.READ, p1) )
      {
        this.permissions = p0;
        this.authorizationType = SessionAuthorizationType.READ;
      }
    }

    public void setSessionStatusCallback(com.facebook.Session$StatusCallback p0)
    {
      this.sessionStatusCallback = p0;
    }

}
