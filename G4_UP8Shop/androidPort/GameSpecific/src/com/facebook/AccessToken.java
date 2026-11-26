// Decompiled from classes.dex (SourceFile: AccessToken.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import android.text.TextUtils;
import com.facebook.internal.Utility;
import com.facebook.internal.Validate;
import java.util.Arrays;
import java.util.Collections;
public final class AccessToken implements java.io.Serializable {
    // Fields
    static java.lang.String ACCESS_TOKEN_KEY;
    private static final java.util.Date ALREADY_EXPIRED_EXPIRATION_TIME;
    private static final com.facebook.AccessTokenSource DEFAULT_ACCESS_TOKEN_SOURCE;
    private static final java.util.Date DEFAULT_EXPIRATION_TIME;
    private static final java.util.Date DEFAULT_LAST_REFRESH_TIME;
    static java.lang.String EXPIRES_IN_KEY;
    private static final java.util.Date MAX_DATE;
    private static final java.util.Date MIN_DATE;
    private static long serialVersionUID;
    private final java.util.List declinedPermissions;
    private final java.util.Date expires;
    private final java.util.Date lastRefresh;
    private final java.util.List permissions;
    private final com.facebook.AccessTokenSource source;
    private final java.lang.String token;

    // Methods
    static
    {
      java.util.Date v0;
      MIN_DATE = new java.util.Date(0x8000000000000000L);
      v0 = new java.util.Date(0x7FFFFFFFFFFFFFFFL);
      MAX_DATE = v0;
      DEFAULT_EXPIRATION_TIME = v0;
      DEFAULT_LAST_REFRESH_TIME = new java.util.Date();
      DEFAULT_ACCESS_TOKEN_SOURCE = AccessTokenSource.FACEBOOK_APPLICATION_WEB;
      ALREADY_EXPIRED_EXPIRATION_TIME = MIN_DATE;
    }

    AccessToken(
            String p0,
            java.util.Date p1,
            java.util.List<String> p2,
            java.util.List<String> p3,
            com.facebook.AccessTokenSource p4,
            java.util.Date p5)
    {
      super();
      if ( p2 == null )
        p2 = Collections.emptyList();
      if ( p3 == null )
        p3 = Collections.emptyList();
      this.expires = p1;
      this.permissions = Collections.unmodifiableList(p2);
      this.declinedPermissions = Collections.unmodifiableList(p3);
      this.token = p0;
      this.source = p4;
      this.lastRefresh = p5;
    }

    private void appendPermissions(StringBuilder p0)
    {
      p0.append(" permissions:");
      if ( this.permissions != null )
      {
        p0.append("[");
        p0.append(TextUtils.join(", ", this.permissions));
        p0.append("]");
      }
      else
      {
        p0.append("null");
      }
    }

    static com.facebook.AccessToken createEmptyToken()
    {
      return new com.facebook.AccessToken("", ALREADY_EXPIRED_EXPIRATION_TIME, null, null, AccessTokenSource.NONE, DEFAULT_LAST_REFRESH_TIME);
    }

    private static com.facebook.AccessToken createFromBundle(
            java.util.List<String> p0,
            android.os.Bundle p1,
            com.facebook.AccessTokenSource p2,
            java.util.Date p3)
    {
      String String;
      java.util.Date BundleLongAsDate;
      String = p1.getString("access_token");
      BundleLongAsDate = getBundleLongAsDate(p1, "expires_in", p3);
      if ( !Utility.isNullOrEmpty(String) && BundleLongAsDate != null )
        return new com.facebook.AccessToken(String, BundleLongAsDate, p0, null, p2, new java.util.Date());
      else
        return null;
    }

    static com.facebook.AccessToken createFromCache(android.os.Bundle p0)
    {
      return new com.facebook.AccessToken(p0.getString("com.facebook.TokenCachingStrategy.Token"), TokenCachingStrategy.getDate(
                                                                                                     p0,
                                                                                                     "com.facebook.TokenCachi" +
                                                                                                     "ngStrategy.ExpirationDate"), getPermissionsFromBundle(p0, "com.facebook.TokenCachingStrategy.Permissions"), getPermissionsFromBundle(p0, "com.facebook.TokenCachingStrategy.DeclinedPermissions"), TokenCachingStrategy.getSource(p0), TokenCachingStrategy.getDate(p0, "com.facebook.TokenCachingStrategy.LastRefreshDate"));
    }

    public static com.facebook.AccessToken createFromExistingAccessToken(
            String p0,
            java.util.Date p1,
            java.util.Date p2,
            com.facebook.AccessTokenSource p3,
            java.util.List<String> p4)
    {
      java.util.Date v5;
      java.util.Date v6;
      com.facebook.AccessTokenSource v7;
      if ( p1 != null )
        v5 = p1;
      else
        v5 = DEFAULT_EXPIRATION_TIME;
      if ( p2 != null )
        v6 = p2;
      else
        v6 = DEFAULT_LAST_REFRESH_TIME;
      if ( p3 != null )
        v7 = p3;
      else
        v7 = DEFAULT_ACCESS_TOKEN_SOURCE;
      return new com.facebook.AccessToken(p0, v5, p4, null, v7, v6);
    }

    public static com.facebook.AccessToken createFromNativeLinkingIntent(android.content.Intent p0)
    {
      com.facebook.AccessToken v1;
      v1 = null;
      Validate.notNull(p0, "intent");
      if ( p0.getExtras() != null )
        return createFromBundle(null, p0.getExtras(), AccessTokenSource.FACEBOOK_APPLICATION_WEB, new java.util.Date());
      return v1;
    }

    static com.facebook.AccessToken createFromNativeLogin(
            android.os.Bundle p0,
            com.facebook.AccessTokenSource p1)
    {
      return createNew(
               p0.getStringArrayList("com.facebook.platform.extra.PERMISSIONS"),
               null,
               p0.getString("com.facebook.platform.extra.ACCESS_TOKEN"),
               getBundleLongAsDate(p0, "com.facebook.platform.extra.EXPIRES_SECONDS_SINCE_EPOCH", new java.util.Date(0)),
               p1);
    }

    static com.facebook.AccessToken createFromRefresh(com.facebook.AccessToken p0, android.os.Bundle p1)
    {
      if ( p0.source != AccessTokenSource.FACEBOOK_APPLICATION_WEB
        && p0.source != AccessTokenSource.FACEBOOK_APPLICATION_NATIVE
        && p0.source != AccessTokenSource.FACEBOOK_APPLICATION_SERVICE )
      {
        throw new com.facebook.FacebookException("Invalid token source: " + p0.source);
      }
      return createNew(
               p0.getPermissions(),
               p0.getDeclinedPermissions(),
               p1.getString("access_token"),
               getBundleLongAsDate(p1, "expires_in", new java.util.Date(0)),
               p0.source);
    }

    static com.facebook.AccessToken createFromString(
            String p0,
            java.util.List<String> p1,
            com.facebook.AccessTokenSource p2)
    {
      return new com.facebook.AccessToken(p0, DEFAULT_EXPIRATION_TIME, p1, null, p2, DEFAULT_LAST_REFRESH_TIME);
    }

    static com.facebook.AccessToken createFromTokenWithRefreshedPermissions(
            com.facebook.AccessToken p0,
            java.util.List<String> p1,
            java.util.List<String> p2)
    {
      return new com.facebook.AccessToken(p0.token, p0.expires, p1, p2, p0.source, p0.lastRefresh);
    }

    static com.facebook.AccessToken createFromWebBundle(
            java.util.List<String> p0,
            android.os.Bundle p1,
            com.facebook.AccessTokenSource p2)
    {
      java.util.Date BundleLongAsDate;
      String String;
      String v5;
      String v6;
      java.util.List v7;
      BundleLongAsDate = getBundleLongAsDate(p1, "expires_in", new java.util.Date());
      String = p1.getString("access_token");
      v5 = p1.getString("granted_scopes");
      if ( !Utility.isNullOrEmpty(v5) )
        p0 = new java.util.ArrayList(Arrays.asList(v5.split(",")));
      v6 = p1.getString("denied_scopes");
      v7 = null;
      if ( !Utility.isNullOrEmpty(v6) )
        v7 = new java.util.ArrayList(Arrays.asList(v6.split(",")));
      return createNew(p0, v7, String, BundleLongAsDate, p2);
    }

    private static com.facebook.AccessToken createNew(
            java.util.List<String> p0,
            java.util.List<String> p1,
            String p2,
            java.util.Date p3,
            com.facebook.AccessTokenSource p4)
    {
      if ( !Utility.isNullOrEmpty(p2) && p3 != null )
        return new com.facebook.AccessToken(p2, p3, p0, p1, p4, new java.util.Date());
      else
        return createEmptyToken();
    }

    private static java.util.Date getBundleLongAsDate(android.os.Bundle p0, String p1, java.util.Date p2)
    {
      Object v5 = null; // RETVAL
      long v6 = 0L;
      int _ehCatchPc = -1;
      Throwable _ehEx = null;
      Throwable _ehCaught = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        try
        {
          switch ( _pc )
          {
            case 0:
              if ( p0 == null )
              return null;
              v5 = p0.get(p1);
              if ( v5 instanceof Long )
              {
              v6 = ((Long)v5).longValue();
              { _pc = 1; continue _sm; }
              }
              if ( !(v5 instanceof String) )
              return null;
              _ehCatchPc = 2;
              v6 = Long.parseLong((String)v5);
              _pc = 1;
              continue _sm;
            case 1:
              if ( v6 != 0 )
              return new java.util.Date(1000 * v6 + p2.getTime());
              else
              return new java.util.Date(0x7FFFFFFFFFFFFFFFL);
            case 2:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof NumberFormatException) ) { _pc = 3; continue _sm; }
              return null;
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
          }
        }
        catch ( Throwable _ehT )
        {
          if ( _ehCatchPc >= 0 )
          {
            _ehEx = _ehT;
            _pc = _ehCatchPc;
            continue _sm;
          }
          throw com.gameloft.android.DecompRT.sneakyThrow(_ehT);
        }
      }
}

    static java.util.List<String> getPermissionsFromBundle(android.os.Bundle p0, String p1)
    {
      java.util.ArrayList StringArrayList; // RETVAL
    
      StringArrayList = p0.getStringArrayList(p1);
      if ( StringArrayList != null )
        return Collections.unmodifiableList(new java.util.ArrayList(StringArrayList));
      else
        return Collections.emptyList();
    }

    private void readObject(java.io.ObjectInputStream p0)
 throws java.io.InvalidObjectException {
      throw new java.io.InvalidObjectException("Cannot readObject, serialization proxy required");
    }

    private String tokenToString()
    {
      if ( this.token == null )
        return "null";
      if ( Settings.isLoggingBehaviorEnabled(LoggingBehavior.INCLUDE_ACCESS_TOKENS) )
        return this.token;
      return "ACCESS_TOKEN_REMOVED";
    }

    private Object writeReplace()
    {
      return new com.facebook.AccessToken$SerializationProxyV2(this.token, this.expires, this.permissions, this.declinedPermissions, this.source, this.lastRefresh, null);
    }

    public final java.util.List<String> getDeclinedPermissions()
    {
      return this.declinedPermissions;
    }

    public final java.util.Date getExpires()
    {
      return this.expires;
    }

    public final java.util.Date getLastRefresh()
    {
      return this.lastRefresh;
    }

    public final java.util.List<String> getPermissions()
    {
      return this.permissions;
    }

    public final com.facebook.AccessTokenSource getSource()
    {
      return this.source;
    }

    public final String getToken()
    {
      return this.token;
    }

    final boolean isInvalid()
    {
      return Utility.isNullOrEmpty(this.token) || new java.util.Date().after(this.expires);
    }

    final android.os.Bundle toCacheBundle()
    {
      android.os.Bundle v1;
      v1 = new android.os.Bundle();
      v1.putString("com.facebook.TokenCachingStrategy.Token", this.token);
      TokenCachingStrategy.putDate(v1, "com.facebook.TokenCachingStrategy.ExpirationDate", this.expires);
      v1.putStringArrayList("com.facebook.TokenCachingStrategy.Permissions", new java.util.ArrayList(this.permissions));
      v1.putStringArrayList("com.facebook.TokenCachingStrategy.DeclinedPermissions", new java.util.ArrayList(this.declinedPermissions));
      v1.putSerializable("com.facebook.TokenCachingStrategy.AccessTokenSource", this.source);
      TokenCachingStrategy.putDate(v1, "com.facebook.TokenCachingStrategy.LastRefreshDate", this.lastRefresh);
      return v1;
    }

    public final String toString()
    {
      StringBuilder v1;
      v1 = new StringBuilder();
      v1.append("{AccessToken");
      v1.append(" token:").append(this.tokenToString());
      this.appendPermissions(v1);
      v1.append("}");
      return v1.toString();
    }

}
