// Decompiled from classes.dex (SourceFile: AppEventsLogger$AccessTokenAppIdPair.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import com.facebook.internal.Utility;
class AppEventsLogger$AccessTokenAppIdPair implements java.io.Serializable {
    // Fields
    private static long serialVersionUID;
    private final java.lang.String accessToken;
    private final java.lang.String applicationId;

    // Methods
    AppEventsLogger$AccessTokenAppIdPair(com.facebook.Session p0)
    {
      this(p0.getAccessToken(), p0.getApplicationId());
    }

    AppEventsLogger$AccessTokenAppIdPair(String p0, String p1)
    {
      super();
      if ( Utility.isNullOrEmpty(p0) )
        p0 = null;
      this.accessToken = p0;
      this.applicationId = p1;
    }

    private Object writeReplace()
    {
      return new com.facebook.AppEventsLogger$AccessTokenAppIdPair$SerializationProxyV1(this.accessToken, this.applicationId, null);
    }

    public boolean equals(Object p0)
    {
      boolean v2;
      com.facebook.AppEventsLogger$AccessTokenAppIdPair v4;
      v2 = false;
      if ( p0 instanceof com.facebook.AppEventsLogger$AccessTokenAppIdPair )
      {
        v4 = (com.facebook.AppEventsLogger$AccessTokenAppIdPair)p0;
        if ( Utility.areObjectsEqual(v4.accessToken, this.accessToken) )
          return Utility.areObjectsEqual(v4.applicationId, this.applicationId);
      }
      return v2;
    }

    String getAccessToken()
    {
      return this.accessToken;
    }

    String getApplicationId()
    {
      return this.applicationId;
    }

    public int hashCode()
    {
      int v1;
      int v2;
      v1 = 0;
      if ( this.accessToken != null )
        v2 = this.accessToken.hashCode();
      else
        v2 = 0;
      if ( this.applicationId != null )
        v1 = this.applicationId.hashCode();
      return v2 ^ v1;
    }

}
