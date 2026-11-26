// Decompiled from classes.dex (SourceFile: AuthorizationClient$AuthorizationRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class AuthorizationClient$AuthorizationRequest implements java.io.Serializable {
    // Fields
    private static long serialVersionUID;
    private final java.lang.String applicationId;
    private final java.lang.String authId;
    private final com.facebook.SessionDefaultAudience defaultAudience;
    private boolean isLegacy;
    private boolean isRerequest;
    private final com.facebook.SessionLoginBehavior loginBehavior;
    private java.util.List permissions;
    private final java.lang.String previousAccessToken;
    private final int requestCode;
    private final transient com.facebook.AuthorizationClient$StartActivityDelegate startActivityDelegate;

    // Methods
    AuthorizationClient$AuthorizationRequest(
            com.facebook.SessionLoginBehavior p0,
            int p1,
            boolean p2,
            java.util.List<String> p3,
            com.facebook.SessionDefaultAudience p4,
            String p5,
            String p6,
            com.facebook.AuthorizationClient$StartActivityDelegate p7,
            String p8)
    {
      super();
      this.isLegacy = false;
      this.isRerequest = false;
      this.loginBehavior = p0;
      this.requestCode = p1;
      this.isLegacy = p2;
      this.permissions = p3;
      this.defaultAudience = p4;
      this.applicationId = p5;
      this.previousAccessToken = p6;
      this.startActivityDelegate = p7;
      this.authId = p8;
    }

    String getApplicationId()
    {
      return this.applicationId;
    }

    String getAuthId()
    {
      return this.authId;
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

    String getPreviousAccessToken()
    {
      return this.previousAccessToken;
    }

    int getRequestCode()
    {
      return this.requestCode;
    }

    com.facebook.AuthorizationClient$StartActivityDelegate getStartActivityDelegate()
    {
      return this.startActivityDelegate;
    }

    boolean isLegacy()
    {
      return this.isLegacy;
    }

    boolean isRerequest()
    {
      return this.isRerequest;
    }

    boolean needsNewTokenValidation()
    {
      return this.previousAccessToken != null && !this.isLegacy;
    }

    void setIsLegacy(boolean p0)
    {
      this.isLegacy = p0;
    }

    void setPermissions(java.util.List<String> p0)
    {
      this.permissions = p0;
    }

    void setRerequest(boolean p0)
    {
      this.isRerequest = p0;
    }

}
