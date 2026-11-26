// Decompiled from classes.dex (SourceFile: LoginButton.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

import android.graphics.Typeface;
import android.util.Log;
import com.facebook.Request;
import com.facebook.Session;
import com.facebook.internal.Utility;
import com.gameloft.android.GAND.GloftGGSS.R$styleable;
import java.util.Arrays;
public class LoginButton extends android.widget.Button {
    // Fields
    private static final java.lang.String TAG;
    private java.lang.String applicationId;
    private boolean confirmLogout;
    private boolean fetchUserInfo;
    private android.view.View.OnClickListener listenerCallback;
    private java.lang.String loginLogoutEventName;
    private java.lang.String loginText;
    private java.lang.String logoutText;
    private boolean nuxChecked;
    private long nuxDisplayTime;
    private com.facebook.widget.LoginButton$ToolTipMode nuxMode;
    private com.facebook.widget.ToolTipPopup nuxPopup;
    private com.facebook.widget.ToolTipPopup$Style nuxStyle;
    private android.support.v4.app.Fragment parentFragment;
    private com.facebook.widget.LoginButton$LoginButtonProperties properties;
    private com.facebook.internal.SessionTracker sessionTracker;
    private com.facebook.model.GraphUser user;
    private com.facebook.widget.LoginButton$UserInfoChangedCallback userInfoChangedCallback;
    private com.facebook.Session userInfoSession;

    // Methods
    static
    {
      TAG = com.facebook.widget.LoginButton.class.getName();
    }

    public LoginButton(android.content.Context p0)
    {
      super(p0);
      this.applicationId = null;
      this.user = null;
      this.userInfoSession = null;
      this.properties = new com.facebook.widget.LoginButton$LoginButtonProperties();
      this.loginLogoutEventName = "fb_login_view_usage";
      this.nuxStyle = ToolTipPopup$Style.BLUE;
      this.nuxMode = LoginButton$ToolTipMode.DEFAULT;
      this.nuxDisplayTime = 6000;
      this.initializeActiveSessionWithCachedToken(p0);
      this.finishInit();
    }

    public LoginButton(android.content.Context p0, android.util.AttributeSet p1)
    {
      super(p0, p1);
      this.applicationId = null;
      this.user = null;
      this.userInfoSession = null;
      this.properties = new com.facebook.widget.LoginButton$LoginButtonProperties();
      this.loginLogoutEventName = "fb_login_view_usage";
      this.nuxStyle = ToolTipPopup$Style.BLUE;
      this.nuxMode = LoginButton$ToolTipMode.DEFAULT;
      this.nuxDisplayTime = 6000;
      if ( p1.getStyleAttribute() == 0 )
      {
        this.setGravity(17);
        this.setTextColor(this.getResources().getColor(2131230769));
        this.setTextSize(0, this.getResources().getDimension(2131361874));
        this.setTypeface(Typeface.DEFAULT_BOLD);
        if ( this.isInEditMode() )
        {
          this.setBackgroundColor(this.getResources().getColor(2131230765));
          this.loginText = "Log in with Facebook";
        }
        else
        {
          this.setBackgroundResource(7);
          this.setCompoundDrawablesWithIntrinsicBounds(2130837530, 0, 0, 0);
          this.setCompoundDrawablePadding(this.getResources().getDimensionPixelSize(2131361873));
          this.setPadding(this.getResources().getDimensionPixelSize(2131361869), this.getResources().getDimensionPixelSize(2131361871), this.getResources().getDimensionPixelSize(2131361870), this.getResources().getDimensionPixelSize(2131361872));
        }
      }
      this.parseAttributes(p1);
      if ( !this.isInEditMode() )
        this.initializeActiveSessionWithCachedToken(p0);
    }

    public LoginButton(android.content.Context p0, android.util.AttributeSet p1, int p2)
    {
      super(p0, p1, p2);
      this.applicationId = null;
      this.user = null;
      this.userInfoSession = null;
      this.properties = new com.facebook.widget.LoginButton$LoginButtonProperties();
      this.loginLogoutEventName = "fb_login_view_usage";
      this.nuxStyle = ToolTipPopup$Style.BLUE;
      this.nuxMode = LoginButton$ToolTipMode.DEFAULT;
      this.nuxDisplayTime = 6000;
      this.parseAttributes(p1);
      this.initializeActiveSessionWithCachedToken(p0);
    }

    /* synthetic */ static String access$000()
    {
      return TAG;
    }

    /* synthetic */ static com.facebook.widget.LoginButton$LoginButtonProperties access$1000(
            com.facebook.widget.LoginButton p0)
    {
      return p0.properties;
    }

    /* synthetic */ static String access$1500(com.facebook.widget.LoginButton p0)
    {
      return p0.loginLogoutEventName;
    }

    /* synthetic */ static android.view.View.OnClickListener access$1600(com.facebook.widget.LoginButton p0)
    {
      return p0.listenerCallback;
    }

    /* synthetic */ static void access$1700(com.facebook.widget.LoginButton p0)
    {
      p0.fetchUserInfo();
    }

    /* synthetic */ static void access$1800(com.facebook.widget.LoginButton p0)
    {
      p0.setButtonText();
    }

    /* synthetic */ static void access$300(
            com.facebook.widget.LoginButton p0,
            com.facebook.internal.Utility$FetchedAppSettings p1)
    {
      p0.showNuxPerSettings(p1);
    }

    /* synthetic */ static com.facebook.internal.SessionTracker access$400(com.facebook.widget.LoginButton p0)
    {
      return p0.sessionTracker;
    }

    /* synthetic */ static com.facebook.model.GraphUser access$500(com.facebook.widget.LoginButton p0)
    {
      return p0.user;
    }

    /* synthetic */ static com.facebook.model.GraphUser access$502(
            com.facebook.widget.LoginButton p0,
            com.facebook.model.GraphUser p1)
    {
      p0.user = p1;
      return p1;
    }

    /* synthetic */ static com.facebook.widget.LoginButton$UserInfoChangedCallback access$600(
            com.facebook.widget.LoginButton p0)
    {
      return p0.userInfoChangedCallback;
    }

    /* synthetic */ static boolean access$700(com.facebook.widget.LoginButton p0)
    {
      return p0.confirmLogout;
    }

    /* synthetic */ static String access$800(com.facebook.widget.LoginButton p0)
    {
      return p0.applicationId;
    }

    /* synthetic */ static android.support.v4.app.Fragment access$900(com.facebook.widget.LoginButton p0)
    {
      return p0.parentFragment;
    }

    private void checkNuxSettings()
    {
      if ( this.nuxMode == LoginButton$ToolTipMode.DISPLAY_ALWAYS )
        this.displayNux(this.getResources().getString(2131165522));
      else
        new com.facebook.widget.LoginButton$1(this, Utility.getMetadataApplicationId(this.getContext())).execute((Void[])null);
    }

    private void displayNux(String p0)
    {
      this.nuxPopup = new com.facebook.widget.ToolTipPopup(p0, this);
      this.nuxPopup.setStyle(this.nuxStyle);
      this.nuxPopup.setNuxDisplayTime(this.nuxDisplayTime);
      this.nuxPopup.show();
    }

    private void fetchUserInfo()
    {
      com.facebook.Session OpenSession; // RETVAL
      com.facebook.Session v2;
      com.facebook.Request[] v3;
      if ( this.fetchUserInfo )
      {
        OpenSession = this.sessionTracker.getOpenSession();
        v2 = OpenSession;
        if ( OpenSession != null )
        {
          if ( OpenSession != this.userInfoSession )
          {
            v3 = new com.facebook.Request[1];
            v3[0] = Request.newMeRequest(
                      OpenSession,
                      (com.facebook.Request$GraphUserCallback)new com.facebook.widget.LoginButton$2(this, OpenSession));
            Request.executeBatchAsync(v3);
            this.userInfoSession = v2;
          }
        }
        else
        {
          this.user = null;
          if ( this.userInfoChangedCallback != null )
            this.userInfoChangedCallback.onUserInfoFetched(this.user);
        }
      }
    }

    private void finishInit()
    {
      super.setOnClickListener((android.view.View.OnClickListener)new com.facebook.widget.LoginButton$LoginClickListener(this, null));
      this.setButtonText();
      if ( !this.isInEditMode() )
      {
        this.sessionTracker = new com.facebook.internal.SessionTracker(this.getContext(), (com.facebook.Session$StatusCallback)new com.facebook.widget.LoginButton$LoginButtonCallback(this, null), null, false);
        this.fetchUserInfo();
      }
    }

    private boolean initializeActiveSessionWithCachedToken(android.content.Context p0)
    {
      boolean v2;
      com.facebook.Session ActiveSession; // RETVAL
    
      v2 = false;
      if ( p0 != null )
      {
        ActiveSession = Session.getActiveSession();
        if ( ActiveSession != null )
        {
          return ActiveSession.isOpened();
        }
        else if ( Utility.getMetadataApplicationId(p0) != null )
        {
          return Session.openActiveSessionFromCache(p0) != null;
        }
      }
      return v2;
    }

    private void parseAttributes(android.util.AttributeSet p0)
    {
      android.content.res.TypedArray v2;
      v2 = this.getContext().obtainStyledAttributes(p0, R$styleable.S);
      this.confirmLogout = v2.getBoolean(0, true);
      this.fetchUserInfo = v2.getBoolean(1, true);
      this.loginText = v2.getString(2);
      this.logoutText = v2.getString(3);
      v2.recycle();
    }

    private void setButtonText()
    {
      String logoutText;
      if ( this.sessionTracker != null && this.sessionTracker.getOpenSession() != null )
      {
        if ( this.logoutText != null )
          logoutText = this.logoutText;
        else
          logoutText = this.getResources().getString(2131165498);
      }
      else if ( this.loginText != null )
      {
        logoutText = this.loginText;
      }
      else
      {
        logoutText = this.getResources().getString(2131165499);
      }
      this.setText(logoutText);
    }

    private void showNuxPerSettings(com.facebook.internal.Utility$FetchedAppSettings p0)
    {
      if ( p0 != null && p0.getNuxEnabled() && this.getVisibility() == 0 )
        this.displayNux(p0.getNuxContent());
    }

    public void clearPermissions()
    {
      this.properties.clearPermissions();
    }

    public void dismissToolTip()
    {
      if ( this.nuxPopup != null )
      {
        this.nuxPopup.dismiss();
        this.nuxPopup = null;
      }
    }

    public com.facebook.SessionDefaultAudience getDefaultAudience()
    {
      return this.properties.getDefaultAudience();
    }

    public com.facebook.SessionLoginBehavior getLoginBehavior()
    {
      return this.properties.getLoginBehavior();
    }

    public com.facebook.widget.LoginButton$OnErrorListener getOnErrorListener()
    {
      return this.properties.getOnErrorListener();
    }

    java.util.List<String> getPermissions()
    {
      return this.properties.getPermissions();
    }

    public com.facebook.Session$StatusCallback getSessionStatusCallback()
    {
      return this.properties.getSessionStatusCallback();
    }

    public long getToolTipDisplayTime()
    {
      return this.nuxDisplayTime;
    }

    public com.facebook.widget.LoginButton$ToolTipMode getToolTipMode()
    {
      return this.nuxMode;
    }

    public com.facebook.widget.LoginButton$UserInfoChangedCallback getUserInfoChangedCallback()
    {
      return this.userInfoChangedCallback;
    }

    void handleError(Exception p0)
    {
      if ( LoginButton$LoginButtonProperties.access$2000(this.properties) != null )
      {
        if ( p0 instanceof com.facebook.FacebookException )
          LoginButton$LoginButtonProperties.access$2000(this.properties).onError((com.facebook.FacebookException)p0);
        else
          LoginButton$LoginButtonProperties.access$2000(this.properties).onError(new com.facebook.FacebookException(p0));
      }
    }

    public boolean onActivityResult(int p0, int p1, android.content.Intent p2)
    {
      com.facebook.Session Session;
      Session = this.sessionTracker.getSession();
      return Session != null && Session.onActivityResult((android.app.Activity)this.getContext(), p0, p1, p2);
    }

    protected void onAttachedToWindow()
    {
      super.onAttachedToWindow();
      if ( this.sessionTracker != null && !this.sessionTracker.isTracking() )
      {
        this.sessionTracker.startTracking();
        this.fetchUserInfo();
        this.setButtonText();
      }
    }

    protected void onDetachedFromWindow()
    {
      super.onDetachedFromWindow();
      if ( this.sessionTracker != null )
        this.sessionTracker.stopTracking();
      this.dismissToolTip();
    }

    protected void onDraw(android.graphics.Canvas p0)
    {
      super.onDraw(p0);
      if ( !this.nuxChecked && this.nuxMode != LoginButton$ToolTipMode.NEVER_DISPLAY && !this.isInEditMode() )
      {
        this.nuxChecked = true;
        this.checkNuxSettings();
      }
    }

    public void onFinishInflate()
    {
      super.onFinishInflate();
      this.finishInit();
    }

    protected void onVisibilityChanged(android.view.View p0, int p1)
    {
      super.onVisibilityChanged(p0, p1);
      if ( p1 != 0 )
        this.dismissToolTip();
    }

    public void setApplicationId(String p0)
    {
      this.applicationId = p0;
    }

    public void setDefaultAudience(com.facebook.SessionDefaultAudience p0)
    {
      this.properties.setDefaultAudience(p0);
    }

    public void setFragment(android.support.v4.app.Fragment p0)
    {
      this.parentFragment = p0;
    }

    public void setLoginBehavior(com.facebook.SessionLoginBehavior p0)
    {
      this.properties.setLoginBehavior(p0);
    }

    void setLoginLogoutEventName(String p0)
    {
      this.loginLogoutEventName = p0;
    }

    public void setOnClickListener(android.view.View.OnClickListener p0)
    {
      this.listenerCallback = p0;
    }

    public void setOnErrorListener(com.facebook.widget.LoginButton$OnErrorListener p0)
    {
      this.properties.setOnErrorListener(p0);
    }

    void setProperties(com.facebook.widget.LoginButton$LoginButtonProperties p0)
    {
      this.properties = p0;
    }

    public void setPublishPermissions(java.util.List<String> p0)
    {
      this.properties.setPublishPermissions(p0, this.sessionTracker.getSession());
    }

    public void setPublishPermissions(String[] p0)
    {
      this.properties.setPublishPermissions(Arrays.asList(p0), this.sessionTracker.getSession());
    }

    public void setReadPermissions(java.util.List<String> p0)
    {
      this.properties.setReadPermissions(p0, this.sessionTracker.getSession());
    }

    public void setReadPermissions(String[] p0)
    {
      this.properties.setReadPermissions(Arrays.asList(p0), this.sessionTracker.getSession());
    }

    public void setSession(com.facebook.Session p0)
    {
      this.sessionTracker.setSession(p0);
      this.fetchUserInfo();
      this.setButtonText();
    }

    public void setSessionStatusCallback(com.facebook.Session$StatusCallback p0)
    {
      this.properties.setSessionStatusCallback(p0);
    }

    public void setToolTipDisplayTime(long p0)
    {
      this.nuxDisplayTime = p0;
    }

    public void setToolTipMode(com.facebook.widget.LoginButton$ToolTipMode p0)
    {
      this.nuxMode = p0;
    }

    public void setToolTipStyle(com.facebook.widget.ToolTipPopup$Style p0)
    {
      this.nuxStyle = p0;
    }

    public void setUserInfoChangedCallback(com.facebook.widget.LoginButton$UserInfoChangedCallback p0)
    {
      this.userInfoChangedCallback = p0;
    }

}
