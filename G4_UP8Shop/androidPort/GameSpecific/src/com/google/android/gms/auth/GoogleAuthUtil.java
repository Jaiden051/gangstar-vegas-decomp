// Decompiled from classes.dex (SourceFile: GoogleAuthUtil.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.auth;

import android.accounts.AccountManager;
import android.content.ContentResolver;
import android.content.Intent;
import android.text.TextUtils;
import android.util.Log;
import com.google.android.gms.common.GooglePlayServicesUtil;
import com.google.android.gms.internal.ge;
import com.google.android.gms.internal.hn;
import com.google.android.gms.internal.s$a;
public final class GoogleAuthUtil {
    // Fields
    public static java.lang.String a;
    public static final java.lang.String b;
    public static final java.lang.String c;
    public static java.lang.String d;
    public static java.lang.String e;
    public static java.lang.String f;
    private static final android.content.ComponentName g;
    private static final android.content.ComponentName h;
    private static final android.content.Intent i;
    private static final android.content.Intent j;

    // Methods
    static
    {
      b = "callerUid";
      c = "androidPackageName";
      g = new android.content.ComponentName("com.google.android.gms", "com.google.android.gms.auth.GetToken");
      h = new android.content.ComponentName("com.google.android.gms", "com.google.android.gms.recovery.RecoveryService");
      i = new android.content.Intent().setPackage("com.google.android.gms").setComponent(g);
      j = new android.content.Intent().setPackage("com.google.android.gms").setComponent(h);
    }

    private GoogleAuthUtil()
    {
      super();
    }

    private static String a(android.content.Context p0, String p1, String p2, android.os.Bundle p3)
 throws com.google.android.gms.auth.UserRecoverableNotifiedException {
      int v6;
      com.google.android.gms.auth.GoogleAuthUtil$a v7;
      if ( p3 == null )
        p3 = new android.os.Bundle();
      return getToken(p0, p1, p2, p3);
    }

    private static boolean ac(String p0)
    {
      return "NetworkError".equals(p0) || "ServiceUnavailable".equals(p0) || "Timeout".equals(p0);
    }

    private static boolean ad(String p0)
    {
      return "BadAuthentication".equals(p0)
          || "CaptchaRequired".equals(p0)
          || "DeviceManagementRequiredOrSyncDisabled".equals(p0)
          || "NeedPermission".equals(p0)
          || "NeedsBrowser".equals(p0)
          || "UserCancel".equals(p0)
          || "AppDownloadRequired".equals(p0);
    }

    private static boolean b(android.content.Context p0, int p1)
    {
      boolean v2;
      android.content.pm.PackageManager PackageManager; // RETVAL
    
      v2 = true;
      if ( p1 == 1 )
      {
        PackageManager = p0.getPackageManager();
        try
        {
          if ( !(PackageManager.getApplicationInfo("com.google.android.gms", 0x2000)).enabled )
            return false;
          return v2;
        }
        catch ( android.content.pm.PackageManager.NameNotFoundException e )
        {
        }
      }
      return false;
    }

    public static void clearToken(android.content.Context p0, String p1)
 throws com.google.android.gms.auth.GoogleAuthException, java.io.IOException, InterruptedException {
      android.content.Context ApplicationContext;
      android.os.Bundle v3;
      String v4;
      com.google.android.gms.common.a v5;
      android.os.Bundle v6;
      String String;
      ApplicationContext = p0.getApplicationContext();
      hn.az("Calling this from your main thread can lead to deadlock");
      w(ApplicationContext);
      v3 = new android.os.Bundle();
      v4 = (p0.getApplicationInfo()).packageName;
      v3.putString("clientPackageName", v4);
      if ( !v3.containsKey(c) )
        v3.putString(c, v4);
      v5 = new com.google.android.gms.common.a();
      if ( ApplicationContext.bindService(i, (android.content.ServiceConnection)v5, 1) )
      {
        try
        {
          try
          {
            v6 = s$a.a(v5.a()).a(p1, v3);
            String = v6.getString(ge.M);
            if ( !v6.getBoolean("booleanResult") )
              throw new com.google.android.gms.auth.GoogleAuthException(String);
            return;
          }
          catch ( android.os.RemoteException v8 )
          {
            Log.i("GoogleAuthUtil", "GMS remote exception ", v8);
            throw new java.io.IOException("remote exception");
          }
          catch ( InterruptedException e )
          {
            throw new com.google.android.gms.auth.GoogleAuthException("Interrupted");
          }
        }
        finally
        {
          ApplicationContext.unbindService((android.content.ServiceConnection)v5);
        }
      }
      throw new java.io.IOException("Could not bind to service with the given context.");
    }

    private static void g(android.content.Intent p0)
    {
      String v1; // RETVAL
    
      if ( p0 == null )
        throw new IllegalArgumentException("Callback cannot be null.");
      v1 = p0.toUri(1);
      try
      {
        Intent.parseUri(v1, 1);
      }
      catch ( java.net.URISyntaxException e )
      {
        throw new IllegalArgumentException("Parameter callback contains invalid data. It must be serializable using toUri() and parseUri().");
      }
    }

    public static String getToken(android.content.Context p0, String p1, String p2)
    {
      return getToken(p0, p1, p2, new android.os.Bundle());
    }

    public static String getToken(android.content.Context p0, String p1, String p2, android.os.Bundle p3)
    {
      android.content.Context ApplicationContext = null;
      android.os.Bundle v5 = null;
      String v6 = null;
      android.content.ServiceConnection v7 = null;
      android.os.Bundle v9 = null;
      String String = null;
      String v12 = null;
      android.content.Intent v13 = null;
      Throwable _cv_1 = null;
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
              ApplicationContext = p0.getApplicationContext();
              hn.az("Calling this from your main thread can lead to deadlock");
              w(ApplicationContext);
              if ( p3 != null )
              v5 = new android.os.Bundle(p3);
              else
              v5 = new android.os.Bundle();
              v6 = (p0.getApplicationInfo()).packageName;
              v5.putString("clientPackageName", v6);
              if ( !v5.containsKey(c) )
              v5.putString(c, v6);
              v7 = (android.content.ServiceConnection)new com.google.android.gms.common.a();
              if ( !ApplicationContext.bindService(i, v7, 1) )
              { _pc = 1; continue _sm; }
              _ehCatchPc = 2;
              try
              {
              v9 = s$a.a(((com.google.android.gms.common.a)v7).a()).a(p1, p2, v5);
              String = v9.getString("authtoken");
              if ( TextUtils.isEmpty(String) )
              {
              v12 = v9.getString("Error");
              v13 = (android.content.Intent)v9.getParcelable("userRecoveryIntent");
              if ( ad(v12) )
              throw new com.google.android.gms.auth.UserRecoverableAuthException(v12, v13);
              if ( ac(v12) )
              throw new java.io.IOException(v12);
              { _pc = 4; continue _sm; }
              }
              ApplicationContext.unbindService(v7);
              return String;
              }
              catch ( android.os.RemoteException v14 )
              {
              Log.i("GoogleAuthUtil", "GMS remote exception ", v14);
              throw new java.io.IOException("remote exception");
              }
              catch ( InterruptedException e )
              {
              throw new com.google.android.gms.auth.GoogleAuthException("Interrupted");
              }
              


            case 1:
              throw new java.io.IOException("Could not bind to service with the given context.");
            case 2:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 3; continue _sm; }
              _cv_1 = (Throwable)_ehCaught;
              ApplicationContext.unbindService(v7);
              throw _cv_1;
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 4:
              throw new com.google.android.gms.auth.GoogleAuthException(v12);
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

    public static String getTokenWithNotification(
            android.content.Context p0,
            String p1,
            String p2,
            android.os.Bundle p3)
 throws com.google.android.gms.auth.UserRecoverableNotifiedException {
      if ( p3 == null )
        p3 = new android.os.Bundle();
      p3.putBoolean("handle_notification", true);
      return a(p0, p1, p2, p3);
    }

    public static String getTokenWithNotification(
            android.content.Context p0,
            String p1,
            String p2,
            android.os.Bundle p3,
            android.content.Intent p4)
 throws com.google.android.gms.auth.UserRecoverableNotifiedException {
      g(p4);
      if ( p3 == null )
        p3 = new android.os.Bundle();
      p3.putParcelable("callback_intent", p4);
      p3.putBoolean("handle_notification", true);
      return a(p0, p1, p2, p3);
    }

    public static String getTokenWithNotification(
            android.content.Context p0,
            String p1,
            String p2,
            android.os.Bundle p3,
            String p4,
            android.os.Bundle p5)
 throws com.google.android.gms.auth.UserRecoverableNotifiedException {
      if ( TextUtils.isEmpty(p4) )
        throw new IllegalArgumentException("Authority cannot be empty or null.");
      if ( p3 == null )
        p3 = new android.os.Bundle();
      if ( p5 == null )
        p5 = new android.os.Bundle();
      ContentResolver.validateSyncExtrasBundle(p5);
      p3.putString("authority", p4);
      p3.putBundle("sync_extras", p5);
      p3.putBoolean("handle_notification", true);
      return a(p0, p1, p2, p3);
    }

    public static void invalidateToken(android.content.Context p0, String p1)
    {
      AccountManager.get(p0).invalidateAuthToken("com.google", p1);
    }

    private static void w(android.content.Context p0)
 throws com.google.android.gms.auth.GoogleAuthException, com.google.android.gms.auth.GooglePlayServicesAvailabilityException {
      try
      {
        GooglePlayServicesUtil.w(p0);
      }
      catch ( com.google.android.gms.common.GooglePlayServicesRepairableException v1 )
      {
        throw new com.google.android.gms.auth.GooglePlayServicesAvailabilityException(v1.a(), v1.getMessage(), v1.b());
      }
      catch ( com.google.android.gms.common.GooglePlayServicesNotAvailableException v2 )
      {
        throw new com.google.android.gms.auth.GoogleAuthException(v2.getMessage());
      }
    }

}
