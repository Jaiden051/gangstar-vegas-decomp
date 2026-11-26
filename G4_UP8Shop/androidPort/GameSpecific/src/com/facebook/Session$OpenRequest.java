// Decompiled from classes.dex (SourceFile: Session$OpenRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

public final class Session$OpenRequest extends com.facebook.Session$AuthorizationRequest {
    // Fields
    private static long serialVersionUID;

    // Methods
    public Session$OpenRequest(android.app.Activity p0)
    {
      super(p0);
    }

    public Session$OpenRequest(android.support.v4.app.Fragment p0)
    {
      super(p0);
    }



    public final com.facebook.Session$OpenRequest setCallback(com.facebook.Session$StatusCallback p0)
    {
      super.setCallback(p0);
      return this;
    }



    public final com.facebook.Session$OpenRequest setDefaultAudience(
            com.facebook.SessionDefaultAudience p0)
    {
      super.setDefaultAudience(p0);
      return this;
    }



    public final com.facebook.Session$OpenRequest setLoginBehavior(
            com.facebook.SessionLoginBehavior p0)
    {
      super.setLoginBehavior(p0);
      return this;
    }





    public final com.facebook.Session$OpenRequest setPermissions(java.util.List<String> p0)
    {
      super.setPermissions(p0);
      return this;
    }

    public final com.facebook.Session$OpenRequest setPermissions(String[] p0)
    {
      super.setPermissions(p0);
      return this;
    }



    public final com.facebook.Session$OpenRequest setRequestCode(int p0)
    {
      super.setRequestCode(p0);
      return this;
    }

}
