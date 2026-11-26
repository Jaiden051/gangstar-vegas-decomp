// Decompiled from classes.dex (SourceFile: GCMRegistrar.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gcm;

import android.app.PendingIntent;
import android.content.pm.PackageInfo;
import android.os.Build;
import android.util.Log;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.Device;
public final class GCMRegistrar {
    // Fields
    public static long a;
    private static java.lang.String b;
    private static java.lang.String c;
    private static java.lang.String d;
    private static java.lang.String e;
    private static int f;
    private static java.lang.String g;
    private static java.lang.String h;
    private static java.lang.String i;
    private static java.lang.String j;
    private static java.lang.String k;
    private static com.google.android.gcm.GCMBroadcastReceiver l;
    private static java.lang.String m;

    // Methods
    private GCMRegistrar()
    {
      super();
      throw new UnsupportedOperationException();
    }

    public static void checkDevice(android.content.Context p0)
    {
      int v1;
      android.content.pm.PackageManager PackageManager; // RETVAL
    
      v1 = Build.VERSION.SDK_INT;
      if ( v1 < 8 )
        throw new UnsupportedOperationException("Device must be at least API Level 8 (instead of " + v1 + ")");
      PackageManager = p0.getPackageManager();
      try
      {
        PackageManager.getPackageInfo("com.google.android.gsf", 0);
      }
      catch ( android.content.pm.PackageManager.NameNotFoundException e )
      {
        throw new UnsupportedOperationException("Device does not have package com.google.android.gsf");
      }
    }

    public static void checkManifest(android.content.Context p0)
    {
      android.content.pm.PackageManager PackageManager;
      String PackageName;
      String v3; // RETVAL
      android.content.pm.PermissionInfo PermissionInfo; // RETVAL
      android.content.pm.PackageInfo PackageInfo; // RETVAL
      android.content.pm.ActivityInfo[] receivers;
      java.util.Set v7;
      int v8;
      int i;
      android.content.pm.ActivityInfo v10;
      PackageManager = p0.getPackageManager();
      PackageName = p0.getPackageName();
      v3 = PackageName + ".permission.C2D_MESSAGE";
      try
      {
        PermissionInfo = PackageManager.getPermissionInfo(v3, 4096);
      }
      catch ( android.content.pm.PackageManager.NameNotFoundException e )
      {
        throw new IllegalStateException("Application does not define permission " + v3);
      }
      try
      {
        PackageInfo = PackageManager.getPackageInfo(PackageName, 2);
      }
      catch ( android.content.pm.PackageManager.NameNotFoundException e )
      {
        throw new IllegalStateException("Could not get receivers for package " + PackageName);
      }
      receivers = PackageInfo.receivers;
      if ( receivers == null || receivers.length == 0 )
        throw new IllegalStateException("No receiver for package " + PackageName);
      if ( Log.isLoggable("GCMRegistrar", 2) )
        Log.v("GCMRegistrar", "number of receivers for " + PackageName + ": " + receivers.length);
      v7 = new java.util.HashSet();
      v8 = receivers.length;
      for ( i = 0; i < v8; ++i )
      {
        v10 = receivers[i];
        if ( "com.google.android.c2dm.permission.SEND".equals(v10.permission) )
          v7.add(v10.name);
      }
      if ( v7.isEmpty() )
        throw new IllegalStateException("No receiver allowed to receive com.google.android.c2dm.permission.SEND");
      checkReceiver(p0, v7, "com.google.android.c2dm.intent.REGISTRATION");
      checkReceiver(p0, v7, "com.google.android.c2dm.intent.RECEIVE");
    }

    private static void checkReceiver(android.content.Context p0, java.util.Set<String> p1, String p2)
    {
      android.content.pm.PackageManager PackageManager;
      android.content.Intent v4;
      java.util.List BroadcastReceivers;
      java.util.Iterator v6;
      String name;
      PackageManager = p0.getPackageManager();
      v4 = new android.content.Intent(p2);
      v4.setPackage(p0.getPackageName());
      BroadcastReceivers = PackageManager.queryBroadcastReceivers(v4, 32);
      if ( BroadcastReceivers.isEmpty() )
        throw new IllegalStateException("No receivers for action " + p2);
      if ( Log.isLoggable("GCMRegistrar", 2) )
        Log.v("GCMRegistrar", "Found " + BroadcastReceivers.size() + " receivers for action " + p2);
      v6 = BroadcastReceivers.iterator();
      while ( v6.hasNext() )
      {
        name = ((android.content.pm.ResolveInfo)v6.next()).activityInfo.name;
        if ( !p1.contains(name) )
          throw new IllegalStateException("Receiver "
                                        + name
                                        + " is not set with permission com.google.android.c2dm.permission.SEND");
      }
    }

    static String clearRegistrationId(android.content.Context p0)
    {
      return setRegistrationId(p0, "");
    }

    private static int getAppVersion(android.content.Context p0)
    {
      try
      {
        return (p0.getPackageManager().getPackageInfo(p0.getPackageName(), 0)).versionCode;
      }
      catch ( android.content.pm.PackageManager.NameNotFoundException v3 )
      {
        throw new RuntimeException("Coult not get package name: " + v3);
      }
    }

    static int getBackoff(android.content.Context p0)
    {
      return getGCMPreferences(p0).getInt("backoff_ms", 3000);
    }

    static String getFlatSenderIds(String[] p0)
    {
      StringBuilder v1;
      int i;
      if ( p0 == null || p0.length == 0 )
        throw new IllegalArgumentException("No senderIds");
      v1 = new StringBuilder(p0[0]);
      for ( i = 1; i < p0.length; ++i )
        v1.append(',').append(p0[i]);
      return v1.toString();
    }

    private static android.content.SharedPreferences getGCMPreferences(android.content.Context p0)
    {
      return p0.getSharedPreferences("com.google.android.gcm", 0);
    }

    public static long getRegisterOnServerLifespan(android.content.Context p0)
    {
      return getGCMPreferences(p0).getLong("onServerLifeSpan", 604800000);
    }

    public static String getRegistrationId(android.content.Context p0)
    {
      android.content.SharedPreferences GCMPreferences;
      String String;
      int Int;
      int AppVersion; // RETVAL
    
      GCMPreferences = getGCMPreferences(p0);
      String = GCMPreferences.getString("regId", "");
      Int = GCMPreferences.getInt("appVersion", 0x80000000);
      AppVersion = getAppVersion(p0);
      if ( Int != 0x80000000 && Int != AppVersion )
      {
        Log.v("GCMRegistrar", "App version changed from " + Int + " to " + AppVersion + "; resetting registration id");
        clearRegistrationId(p0);
        return "";
      }
      return String;
    }

    static void internalRegister(android.content.Context p0, String[] p1)
    {
      String FlatSenderIds;
      android.content.Intent v3;
      FlatSenderIds = getFlatSenderIds(p1);
      Log.v("GCMRegistrar", "Registering app " + p0.getPackageName() + " of senders " + FlatSenderIds);
      v3 = new android.content.Intent("com.google.android.c2dm.intent.REGISTER");
      v3.setPackage("com.google.android.gsf");
      v3.putExtra("app", PendingIntent.getBroadcast(p0, 0, new android.content.Intent(), 0));
      v3.putExtra("sender", FlatSenderIds);
      p0.startService(v3);
    }

    static void internalUnregister(android.content.Context p0)
    {
      android.content.Intent v1;
      Log.v("GCMRegistrar", "Unregistering app " + p0.getPackageName());
      v1 = new android.content.Intent("com.google.android.c2dm.intent.UNREGISTER");
      v1.setPackage("com.google.android.gsf");
      v1.putExtra("app", PendingIntent.getBroadcast(p0, 0, new android.content.Intent(), 0));
      p0.startService(v1);
    }

    public static boolean isRegistered(android.content.Context p0)
    {
      return getRegistrationId(p0).length() > 0;
    }

    public static boolean isRegisteredOnServer(android.content.Context p0)
    {
      boolean v1;
      android.content.SharedPreferences GCMPreferences;
      boolean Boolean;
      long Long;
      v1 = false;
      GCMPreferences = getGCMPreferences(p0);
      Boolean = GCMPreferences.getBoolean("onServer", false);
      Log.v("GCMRegistrar", "Is registered on server: " + Boolean);
      if ( !Boolean )
        return Boolean;
      Long = GCMPreferences.getLong("onServerExpirationTime", -1);
      if ( System.currentTimeMillis() <= Long )
        return Boolean;
      Log.v("GCMRegistrar", "flag expired on: " + new java.sql.Timestamp(Long));
      return v1;
    }

    public static synchronized void onDestroy(android.content.Context p0)
    {
      if ( l != null )
      {
        Log.v("GCMRegistrar", "Unregistering receiver");
        p0.unregisterReceiver(l);
        l = null;
      }
    }

    public static void register(android.content.Context p0, String[] p1)
    {
      resetBackoff(p0);
      internalRegister(p0, p1);
    }

    static void resetBackoff(android.content.Context p0)
    {
      Log.d("GCMRegistrar", "resetting backoff for " + p0.getPackageName());
      setBackoff(p0, 3000);
    }

    static void setBackoff(android.content.Context p0, int p1)
    {
      android.content.SharedPreferences.Editor v2;
      v2 = getGCMPreferences(p0).edit();
      v2.putInt("backoff_ms", p1);
      v2.commit();
    }

    public static void setRegisterOnServerLifespan(android.content.Context p0, long p1)
    {
      android.content.SharedPreferences.Editor v2;
      v2 = getGCMPreferences(p0).edit();
      v2.putLong("onServerLifeSpan", p1);
      v2.commit();
    }

    public static void setRegisteredOnServer(android.content.Context p0, boolean p1)
    {
      android.content.SharedPreferences.Editor v2;
      long v3;
      v2 = getGCMPreferences(p0).edit();
      v2.putBoolean("onServer", p1);
      v3 = getRegisterOnServerLifespan(p0) + System.currentTimeMillis();
      Log.v("GCMRegistrar", "Setting registeredOnServer status as " + p1 + " until " + new java.sql.Timestamp(v3));
      v2.putLong("onServerExpirationTime", v3);
      v2.commit();
    }

    static String setRegistrationId(android.content.Context p0, String p1)
    {
      android.content.SharedPreferences GCMPreferences;
      String String;
      int AppVersion;
      android.content.SharedPreferences.Editor v5;
      GCMPreferences = getGCMPreferences(p0);
      String = GCMPreferences.getString("regId", "");
      AppVersion = getAppVersion(p0);
      Log.v("GCMRegistrar", "Saving regId on app version " + AppVersion);
      v5 = GCMPreferences.edit();
      v5.putString("regId", p1);
      v5.putInt("appVersion", AppVersion);
      v5.commit();
      return String;
    }

    static synchronized void setRetryBroadcastReceiver(android.content.Context p0)
    {
      String PackageName; // RETVAL
      android.content.IntentFilter v2;
      String v3;
      if ( l == null )
      {
        if ( m != null )
        {
          try
          {
            try
            {
              l = (com.google.android.gcm.GCMBroadcastReceiver)Class.forName(m).newInstance();
            }
            catch ( Exception e )
            {
              Log.e(
                "GCMRegistrar",
                "Could not create instance of "
              + m
              + ". Using "
              + com.google.android.gcm.GCMBroadcastReceiver.class.getName()
              + " directly.");
              l = new com.google.android.gcm.GCMBroadcastReceiver();
            }
          }
          finally
          {
          }
        }
        else
        {
          Log.e("GCMRegistrar", "internal error: retry receiver class not set yet");
          l = new com.google.android.gcm.GCMBroadcastReceiver();
        }
        PackageName = p0.getPackageName();
        v2 = new android.content.IntentFilter("com.google.android.gcm.intent.RETRY");
        v2.addCategory(PackageName);
        v3 = PackageName + ".permission.C2D_MESSAGE";
        Log.v("GCMRegistrar", "Registering receiver");
        com.gameloft.android.GAND.GloftGGSS.CompatUtil.registerReceiverCompat(p0, l, v2, v3, null);
      }
    }

    static void setRetryReceiverClassName(String p0)
    {
      Log.v("GCMRegistrar", "Setting the name of retry receiver class to " + p0);
      m = p0;
    }

    public static void unregister(android.content.Context p0)
    {
      resetBackoff(p0);
      internalUnregister(p0);
    }

}
