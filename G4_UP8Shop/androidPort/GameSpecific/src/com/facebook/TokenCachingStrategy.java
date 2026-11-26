// Decompiled from classes.dex (SourceFile: TokenCachingStrategy.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import com.facebook.internal.Validate;
public abstract class TokenCachingStrategy {
    // Fields
    public static java.lang.String DECLINED_PERMISSIONS_KEY;
    public static java.lang.String EXPIRATION_DATE_KEY;
    private static long INVALID_BUNDLE_MILLISECONDS;
    private static java.lang.String IS_SSO_KEY;
    public static java.lang.String LAST_REFRESH_DATE_KEY;
    public static java.lang.String PERMISSIONS_KEY;
    public static java.lang.String TOKEN_KEY;
    public static java.lang.String TOKEN_SOURCE_KEY;
    public static java.lang.String USER_FBID_KEY;

    // Methods
    public TokenCachingStrategy()
    {
      super();
    }

    static java.util.Date getDate(android.os.Bundle p0, String p1)
    {
      java.util.Date v2;
      long Long; // RETVAL
    
      v2 = null;
      if ( p0 != null )
      {
        Long = p0.getLong(p1, 0x8000000000000000L);
        if ( Long != 0x8000000000000000L )
          return new java.util.Date(Long);
      }
      return v2;
    }

    public static java.util.Date getExpirationDate(android.os.Bundle p0)
    {
      Validate.notNull(p0, "bundle");
      return getDate(p0, "com.facebook.TokenCachingStrategy.ExpirationDate");
    }

    public static long getExpirationMilliseconds(android.os.Bundle p0)
    {
      Validate.notNull(p0, "bundle");
      return p0.getLong("com.facebook.TokenCachingStrategy.ExpirationDate");
    }

    public static java.util.Date getLastRefreshDate(android.os.Bundle p0)
    {
      Validate.notNull(p0, "bundle");
      return getDate(p0, "com.facebook.TokenCachingStrategy.LastRefreshDate");
    }

    public static long getLastRefreshMilliseconds(android.os.Bundle p0)
    {
      Validate.notNull(p0, "bundle");
      return p0.getLong("com.facebook.TokenCachingStrategy.LastRefreshDate");
    }

    public static java.util.List<String> getPermissions(android.os.Bundle p0)
    {
      Validate.notNull(p0, "bundle");
      return p0.getStringArrayList("com.facebook.TokenCachingStrategy.Permissions");
    }

    public static com.facebook.AccessTokenSource getSource(android.os.Bundle p0)
    {
      Validate.notNull(p0, "bundle");
      if ( p0.containsKey("com.facebook.TokenCachingStrategy.AccessTokenSource") )
        return (com.facebook.AccessTokenSource)p0.getSerializable("com.facebook.TokenCachingStrategy.AccessTokenSource");
      if ( p0.getBoolean("com.facebook.TokenCachingStrategy.IsSSO") )
        return AccessTokenSource.FACEBOOK_APPLICATION_WEB;
      return AccessTokenSource.WEB_VIEW;
    }

    public static String getToken(android.os.Bundle p0)
    {
      Validate.notNull(p0, "bundle");
      return p0.getString("com.facebook.TokenCachingStrategy.Token");
    }

    public static boolean hasTokenInformation(android.os.Bundle p0)
    {
      boolean v1;
      String String; // RETVAL
    
      v1 = false;
      if ( p0 != null )
      {
        String = p0.getString("com.facebook.TokenCachingStrategy.Token");
        if ( String != null && String.length() != 0 )
          return p0.getLong("com.facebook.TokenCachingStrategy.ExpirationDate", 0) != 0;
      }
      return v1;
    }

    static void putDate(android.os.Bundle p0, String p1, java.util.Date p2)
    {
      p0.putLong(p1, p2.getTime());
    }

    public static void putDeclinedPermissions(android.os.Bundle p0, java.util.List<String> p1)
    {
      java.util.ArrayList v2;
      Validate.notNull(p0, "bundle");
      Validate.notNull(p1, "value");
      if ( p1 instanceof java.util.ArrayList )
        v2 = (java.util.ArrayList)p1;
      else
        v2 = new java.util.ArrayList(p1);
      p0.putStringArrayList("com.facebook.TokenCachingStrategy.DeclinedPermissions", v2);
    }

    public static void putExpirationDate(android.os.Bundle p0, java.util.Date p1)
    {
      Validate.notNull(p0, "bundle");
      Validate.notNull(p1, "value");
      putDate(p0, "com.facebook.TokenCachingStrategy.ExpirationDate", p1);
    }

    public static void putExpirationMilliseconds(android.os.Bundle p0, long p1)
    {
      Validate.notNull(p0, "bundle");
      p0.putLong("com.facebook.TokenCachingStrategy.ExpirationDate", p1);
    }

    public static void putLastRefreshDate(android.os.Bundle p0, java.util.Date p1)
    {
      Validate.notNull(p0, "bundle");
      Validate.notNull(p1, "value");
      putDate(p0, "com.facebook.TokenCachingStrategy.LastRefreshDate", p1);
    }

    public static void putLastRefreshMilliseconds(android.os.Bundle p0, long p1)
    {
      Validate.notNull(p0, "bundle");
      p0.putLong("com.facebook.TokenCachingStrategy.LastRefreshDate", p1);
    }

    public static void putPermissions(android.os.Bundle p0, java.util.List<String> p1)
    {
      java.util.ArrayList v2;
      Validate.notNull(p0, "bundle");
      Validate.notNull(p1, "value");
      if ( p1 instanceof java.util.ArrayList )
        v2 = (java.util.ArrayList)p1;
      else
        v2 = new java.util.ArrayList(p1);
      p0.putStringArrayList("com.facebook.TokenCachingStrategy.Permissions", v2);
    }

    public static void putSource(android.os.Bundle p0, com.facebook.AccessTokenSource p1)
    {
      Validate.notNull(p0, "bundle");
      p0.putSerializable("com.facebook.TokenCachingStrategy.AccessTokenSource", p1);
    }

    public static void putToken(android.os.Bundle p0, String p1)
    {
      Validate.notNull(p0, "bundle");
      Validate.notNull(p1, "value");
      p0.putString("com.facebook.TokenCachingStrategy.Token", p1);
    }

    public abstract void clear();

    public abstract android.os.Bundle load();

    public abstract void save(android.os.Bundle p0);

}
