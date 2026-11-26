// Decompiled from classes.dex (SourceFile: Session$AuthorizationRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import java.util.Arrays;
import java.util.Collections;
import java.util.UUID;
public class Session$AuthorizationRequest implements java.io.Serializable {
    // Fields
    private static long serialVersionUID;
    private java.lang.String applicationId;
    private final java.lang.String authId;
    private com.facebook.SessionDefaultAudience defaultAudience;
    private boolean isLegacy;
    private final java.util.Map loggingExtras;
    private com.facebook.SessionLoginBehavior loginBehavior;
    private java.util.List permissions;
    private int requestCode;
    private final com.facebook.Session$StartActivityDelegate startActivityDelegate;
    private com.facebook.Session$StatusCallback statusCallback;
    private java.lang.String validateSameFbidAsToken;

    // Methods
    Session$AuthorizationRequest(android.app.Activity p0)
    {
      super();
      this.loginBehavior = SessionLoginBehavior.SSO_WITH_FALLBACK;
      this.requestCode = 64206;
      this.isLegacy = false;
      this.permissions = Collections.emptyList();
      this.defaultAudience = SessionDefaultAudience.FRIENDS;
      this.authId = UUID.randomUUID().toString();
      this.loggingExtras = new java.util.HashMap();
      this.startActivityDelegate = (com.facebook.Session$StartActivityDelegate)new com.facebook.Session$AuthorizationRequest$1(this, p0);
    }

    Session$AuthorizationRequest(android.support.v4.app.Fragment p0)
    {
      super();
      this.loginBehavior = SessionLoginBehavior.SSO_WITH_FALLBACK;
      this.requestCode = 64206;
      this.isLegacy = false;
      this.permissions = Collections.emptyList();
      this.defaultAudience = SessionDefaultAudience.FRIENDS;
      this.authId = UUID.randomUUID().toString();
      this.loggingExtras = new java.util.HashMap();
      this.startActivityDelegate = (com.facebook.Session$StartActivityDelegate)new com.facebook.Session$AuthorizationRequest$2(this, p0);
    }

    private Session$AuthorizationRequest(
            com.facebook.SessionLoginBehavior p0,
            int p1,
            java.util.List<String> p2,
            String p3,
            boolean p4,
            String p5,
            String p6)
    {
      super();
      this.loginBehavior = SessionLoginBehavior.SSO_WITH_FALLBACK;
      this.requestCode = 64206;
      this.isLegacy = false;
      this.permissions = Collections.emptyList();
      this.defaultAudience = SessionDefaultAudience.FRIENDS;
      this.authId = UUID.randomUUID().toString();
      this.loggingExtras = new java.util.HashMap();
      this.startActivityDelegate = (com.facebook.Session$StartActivityDelegate)new com.facebook.Session$AuthorizationRequest$3(this);
      this.loginBehavior = p0;
      this.requestCode = p1;
      this.permissions = p2;
      this.defaultAudience = SessionDefaultAudience.valueOf(p3);
      this.isLegacy = p4;
      this.applicationId = p5;
      this.validateSameFbidAsToken = p6;
    }

    /* synthetic */ Session$AuthorizationRequest(
            com.facebook.SessionLoginBehavior p0,
            int p1,
            java.util.List p2,
            String p3,
            boolean p4,
            String p5,
            String p6,
            com.facebook.Session$1 p7)
    {
      this(p0, p1, p2, p3, p4, p5, p6);
    }

    /* synthetic */ static com.facebook.SessionDefaultAudience access$1000(
            com.facebook.Session$AuthorizationRequest p0)
    {
      return p0.defaultAudience;
    }

    /* synthetic */ static com.facebook.Session$StartActivityDelegate access$1800(
            com.facebook.Session$AuthorizationRequest p0)
    {
      return p0.startActivityDelegate;
    }

    /* synthetic */ static java.util.Map access$500(
            com.facebook.Session$AuthorizationRequest p0)
    {
      return p0.loggingExtras;
    }

    /* synthetic */ static boolean access$600(com.facebook.Session$AuthorizationRequest p0)
    {
      return p0.isLegacy;
    }

    /* synthetic */ static com.facebook.SessionLoginBehavior access$700(
            com.facebook.Session$AuthorizationRequest p0)
    {
      return p0.loginBehavior;
    }

    /* synthetic */ static int access$800(com.facebook.Session$AuthorizationRequest p0)
    {
      return p0.requestCode;
    }

    /* synthetic */ static java.util.List access$900(
            com.facebook.Session$AuthorizationRequest p0)
    {
      return p0.permissions;
    }

    private void readObject(java.io.ObjectInputStream p0)
 throws java.io.InvalidObjectException {
      throw new java.io.InvalidObjectException("Cannot readObject, serialization proxy required");
    }

    String getApplicationId()
    {
      return this.applicationId;
    }

    String getAuthId()
    {
      return this.authId;
    }

    com.facebook.AuthorizationClient$AuthorizationRequest getAuthorizationClientRequest()
    {
      return new com.facebook.AuthorizationClient$AuthorizationRequest(this.loginBehavior, this.requestCode, this.isLegacy, this.permissions, this.defaultAudience, this.applicationId, this.validateSameFbidAsToken, (com.facebook.AuthorizationClient$StartActivityDelegate)new com.facebook.Session$AuthorizationRequest$4(this), this.authId);
    }

    com.facebook.Session$StatusCallback getCallback()
    {
      return this.statusCallback;
    }

    com.facebook.SessionDefaultAudience getDefaultAudience()
    {
      return this.defaultAudience;
    }

    com.facebook.SessionLoginBehavior getLoginBehavior()
    {
      return this.loginBehavior;
    }

    java.util.List<String> getPermissions()
    {
      return this.permissions;
    }

    int getRequestCode()
    {
      return this.requestCode;
    }

    com.facebook.Session$StartActivityDelegate getStartActivityDelegate()
    {
      return this.startActivityDelegate;
    }

    String getValidateSameFbidAsToken()
    {
      return this.validateSameFbidAsToken;
    }

    boolean isLegacy()
    {
      return this.isLegacy;
    }

    void setApplicationId(String p0)
    {
      this.applicationId = p0;
    }

    com.facebook.Session$AuthorizationRequest setCallback(
            com.facebook.Session$StatusCallback p0)
    {
      this.statusCallback = p0;
      return this;
    }

    com.facebook.Session$AuthorizationRequest setDefaultAudience(
            com.facebook.SessionDefaultAudience p0)
    {
      if ( p0 != null )
        this.defaultAudience = p0;
      return this;
    }

    public void setIsLegacy(boolean p0)
    {
      this.isLegacy = p0;
    }

    com.facebook.Session$AuthorizationRequest setLoginBehavior(
            com.facebook.SessionLoginBehavior p0)
    {
      if ( p0 != null )
        this.loginBehavior = p0;
      return this;
    }

    com.facebook.Session$AuthorizationRequest setPermissions(java.util.List<String> p0)
    {
      if ( p0 != null )
        this.permissions = p0;
      return this;
    }

    com.facebook.Session$AuthorizationRequest setPermissions(String[] p0)
    {
      return this.setPermissions(Arrays.asList(p0));
    }

    com.facebook.Session$AuthorizationRequest setRequestCode(int p0)
    {
      if ( p0 >= 0 )
        this.requestCode = p0;
      return this;
    }

    void setValidateSameFbidAsToken(String p0)
    {
      this.validateSameFbidAsToken = p0;
    }

    Object writeReplace()
    {
      return new com.facebook.Session$AuthorizationRequest$AuthRequestSerializationProxyV1(this.loginBehavior, this.requestCode, this.permissions, this.defaultAudience.name(), this.isLegacy, this.applicationId, this.validateSameFbidAsToken, null);
    }

}
