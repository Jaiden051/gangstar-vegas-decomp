// Decompiled from classes.dex (SourceFile: Session$NewPermissionsRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

public final class Session$NewPermissionsRequest extends com.facebook.Session$AuthorizationRequest {
    // Fields
    private static long serialVersionUID;

    // Methods
    public Session$NewPermissionsRequest(android.app.Activity p0, java.util.List<String> p1)
    {
      super(p0);
      this.setPermissions(p1);
    }

    public Session$NewPermissionsRequest(android.app.Activity p0, String[] p1)
    {
      super(p0);
      this.setPermissions(p1);
    }

    public Session$NewPermissionsRequest(android.support.v4.app.Fragment p0, java.util.List<String> p1)
    {
      super(p0);
      this.setPermissions(p1);
    }

    public Session$NewPermissionsRequest(android.support.v4.app.Fragment p0, String[] p1)
    {
      super(p0);
      this.setPermissions(p1);
    }

    final com.facebook.AuthorizationClient$AuthorizationRequest getAuthorizationClientRequest()
    {
      com.facebook.AuthorizationClient$AuthorizationRequest result; // RETVAL
    
      result = super.getAuthorizationClientRequest();
      result.setRerequest(true);
      return result;
    }



    public final com.facebook.Session$NewPermissionsRequest setCallback(
            com.facebook.Session$StatusCallback p0)
    {
      super.setCallback(p0);
      return this;
    }



    public final com.facebook.Session$NewPermissionsRequest setDefaultAudience(
            com.facebook.SessionDefaultAudience p0)
    {
      super.setDefaultAudience(p0);
      return this;
    }



    public final com.facebook.Session$NewPermissionsRequest setLoginBehavior(
            com.facebook.SessionLoginBehavior p0)
    {
      super.setLoginBehavior(p0);
      return this;
    }



    public final com.facebook.Session$NewPermissionsRequest setRequestCode(int p0)
    {
      super.setRequestCode(p0);
      return this;
    }

}
