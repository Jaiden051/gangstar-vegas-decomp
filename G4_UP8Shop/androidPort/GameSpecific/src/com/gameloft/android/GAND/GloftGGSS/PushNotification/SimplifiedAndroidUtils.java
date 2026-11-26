// Decompiled from classes.dex (SourceFile: SimplifiedAndroidUtils.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.PushNotification;

import android.app.PendingIntent;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Environment;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.Device;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.SUtils;
import com.gameloft.android.GAND.GloftGGSS.Game;
import com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller;
import java.net.URLDecoder;
import java.net.URLEncoder;
import java.util.Locale;
public class SimplifiedAndroidUtils {
    // Fields
    static java.lang.String A;
    static java.lang.String B;
    static java.lang.String C;
    static java.lang.String D;
    static java.lang.String E;
    static long F;
    static java.lang.String G;
    static java.lang.String H;
    static java.lang.String I;
    static java.lang.String J;
    static java.lang.String K;
    static int L;
    static int M;
    static int N;
    static int O;
    static int P;
    static final java.lang.String[] Q;
    static final boolean R;
    public static java.lang.String S;
    public static java.lang.String T;
    static final java.lang.String U;
    private static java.lang.String V;
    private static java.lang.String W;
    private static boolean X;
    private static boolean Y;
    private static java.lang.String Z;
    public static java.lang.String a;
    private static java.lang.String aa;
    public static java.lang.String b;
    public static java.lang.String c;
    public static java.lang.String d;
    public static java.lang.String e;
    public static java.lang.String f;
    public static boolean g;
    public static boolean h;
    public static boolean i;
    public static java.lang.String j;
    public static java.lang.String k;
    public static java.lang.String l;
    static com.gameloft.android.GAND.GloftGGSS.PushNotification.SimplifiedAndroidUtils m;
    public static com.gameloft.android.GAND.GloftGGSS.PushNotification.f n;
    static java.lang.String o;
    static java.lang.String q;
    static java.lang.String r;
    static java.lang.String s;
    static java.lang.String t;
    static java.lang.String u;
    static java.lang.String v;
    public static android.os.Bundle w;
    public static java.lang.ref.WeakReference x;
    static java.lang.String y;
    static java.lang.String z;
    private android.content.BroadcastReceiver ab;
    com.google.android.gms.gcm.GoogleCloudMessaging p;

    // Methods
    static
    {
      String[] v0;
      X = false;
      Y = false;
      g = false;
      h = false;
      i = false;
      j = null;
      k = null;
      l = null;
      m = null;
      n = null;
      v0 = new String[4];
      v0[0] = "gcm";
      v0[1] = "adm";
      v0[2] = "nnapi";
      v0[3] = "none";
      Q = v0;
      R = Build.VERSION.SDK_INT < 8;
      U = Environment.getExternalStorageDirectory() + "/Android/data/com.gameloft.android.GAND.GloftGGSS";
    }

    public SimplifiedAndroidUtils()
    {
      super();
      this.p = null;
    }

    public static void AddEndpointRecordToDB(String p0)
    {
      com.gameloft.android.GAND.GloftGGSS.PushNotification.f v1;
      android.content.ContentValues v2;
      if ( n != null )
      {
        if ( !isEmptyOrNull(p0) )
        {
          v2 = new android.content.ContentValues();
          v2.put("_id", "1");
          v2.put("transport", "gcm");
          v2.put("registration_id", p0);
          n.b(v2);
          BackupDatabase();
        }
      }
      else
      {
        v1 = new com.gameloft.android.GAND.GloftGGSS.PushNotification.f((android.content.Context)x.get());
        n = v1;
        v1.a();
      }
    }

    private static void AddPNMessageIDToPreferences(String p0, String p1)
    {
      java.util.List<String> PNMessageIdForType;
      String v3;
      java.util.Iterator i;
      String v5;
      android.content.SharedPreferences.Editor v6;
      PNMessageIdForType = GetPNMessageIdForType(p1);
      if ( PNMessageIdForType == null )
        PNMessageIdForType = new java.util.ArrayList();
      PNMessageIdForType.add(p0);
      v3 = "";
      for ( i = PNMessageIdForType.iterator(); i.hasNext(); v3 = v3 + (String)i.next() + "|" )
        ;
      v5 = "LocalPNType_" + p1;
      v6 = Prefs.get((android.content.Context)x.get()).edit();
      v6.putString(v5, v3);
      v6.commit();
    }

    private static void AddPNRecordToDB(android.os.Bundle p0, String p1, String p2)
    {
      String String;
      String v4;
      String v5;
      String v6;
      com.gameloft.android.GAND.GloftGGSS.PushNotification.f v7;
      android.content.ContentValues v8;
      String = p0.getString("creation_time");
      v4 = p0.getString("schedule_time");
      v5 = p0.getString("type");
      v6 = p0.getString("body");
      if ( n != null )
      {
        if ( !isEmptyOrNull(String)
          && !isEmptyOrNull(v4)
          && !isEmptyOrNull(p1)
          && !isEmptyOrNull(v5)
          && !isEmptyOrNull(v6)
          && !isEmptyOrNull(p2) )
        {
          v8 = new android.content.ContentValues();
          v8.put("pn_alarm_id", p2);
          v8.put("creation_time", String);
          v8.put("schedule_time", v4);
          v8.put("message_group", p1);
          v8.put("type", v5);
          v8.put("message_content", v6);
          n.a(v8);
          BackupDatabase();
        }
      }
      else
      {
        v7 = new com.gameloft.android.GAND.GloftGGSS.PushNotification.f((android.content.Context)x.get());
        n = v7;
        v7.a();
      }
    }

    public static void BackupDatabase()
    {
      java.io.File v0;
      java.io.File v1;
      java.io.FileInputStream v2;
      java.io.FileOutputStream v3;
      byte[] i;
      int v5; // RETVAL
    
      try
      {
        v0 = new java.io.File(getSDFolder());
        if ( !v0.exists() )
          v0.mkdirs();
        if ( v0.exists() )
        {
          v1 = new java.io.File("/data/data/com.gameloft.android.GAND.GloftGGSS/databases/PN.db");
          if ( v1.exists() )
          {
            v2 = new java.io.FileInputStream(v1);
            v3 = new java.io.FileOutputStream(getSDFolder() + "/PN.db");
            for ( i = new byte[1024]; ; v3.write(i, 0, v5) )
            {
              v5 = v2.read(i);
              if ( v5 <= 0 )
                break;
            }
            v3.flush();
            v3.close();
            v2.close();
          }
        }
      }
      catch ( java.io.IOException e )
      {
      }
    }

    private static void ClearGroup(int p0)
    {
      String v1;
      android.content.SharedPreferences.Editor v2;
      v1 = "LocalPNType_" + Integer.toString(p0);
      v2 = Prefs.get((android.content.Context)x.get()).edit();
      v2.putString(v1, null);
      v2.commit();
      GetPNMessageIdForType(Integer.toString(p0));
    }

    private static void ClearStack(android.content.Context p0, int p1)
    {
      String v2;
      android.content.SharedPreferences.Editor v3;
      if ( p0 != null )
      {
        v2 = "PN_stackID_".concat(Integer.toString(p1 + 32));
        v3 = Prefs.get(p0).edit();
        v3.putInt(v2, 1);
        v3.commit();
        ClearStackMessages(p0, p1);
      }
    }

    private static void ClearStackMessages(android.content.Context p0, int p1)
    {
      android.content.SharedPreferences.Editor v2;
      int i;
      v2 = Prefs.get(p0).edit();
      for ( i = 0; i < 33; ++i )
        v2.putString("PN_stackMSG_".concat(Integer.toString(p1 + 32)).concat("_" + Integer.toString(i + 1)), null);
      v2.commit();
    }

    public static int DeleteMessageGroup(int p0)
    {
      java.util.List PNMessageIdForType;
      java.util.Iterator v4;
      String v5;
      if ( GetPNMessageIdForType(Integer.toString(p0 + 101)) != null )
      {
        PNMessageIdForType = GetPNMessageIdForType(Integer.toString(p0 + 101));
        p0 += 101;
      }
      else if ( GetPNMessageIdForType(Integer.toString(p0 + 201)) != null )
      {
        PNMessageIdForType = GetPNMessageIdForType(Integer.toString(p0 + 201));
        p0 += 201;
      }
      else
      {
        PNMessageIdForType = GetPNMessageIdForType(Integer.toString(p0));
      }
      if ( PNMessageIdForType == null )
        return 1;
      v4 = PNMessageIdForType.iterator();
      while ( v4.hasNext() )
      {
        v5 = (String)v4.next();
        try
        {
          if ( isEmptyOrNull(v5) || !v5.startsWith("PN_LID_") )
            return 1;
          LocalPushManager.CancelAlarm(v5);
        }
        catch ( Exception e )
        {
          return 1;
        }
      }
      ClearGroup(p0);
      ClearStack((android.content.Context)x.get(), p0);
      if ( n != null )
      {
        n.a("message_group", Integer.toString(p0));
        BackupDatabase();
      }
      return 0;
    }

    public static int GetDeviceToken(int p0)
    {
      if ( isEmptyOrNull(GetRegistrationID()) )
      {
        if ( !Q[p0].equals("gcm") )
          return 1;
        requestGoogleToken();
      }
      else
      {
        nativeSendRegistrationData(GetRegistrationID());
        AddEndpointRecordToDB(GetRegistrationID());
      }
      return 0;
    }

    private static java.util.List<String> GetPNMessageIdForType(String p0)
    {
      String String; // RETVAL
      java.util.List v2;
      java.util.StringTokenizer v4;
      String = Prefs.get((android.content.Context)x.get()).getString("LocalPNType_" + p0, null);
      if ( String == null )
        return null;
      v4 = new java.util.StringTokenizer(String, "|");
      v2 = new java.util.ArrayList();
      while ( v4.hasMoreTokens() )
        v2.add(v4.nextToken());
      return v2;
    }

    public static String GetRegistrationID()
    {
      String GCMRegistrationId;
      GCMRegistrationId = getGCMRegistrationId((android.content.Context)x.get());
      if ( isEmptyOrNull(GCMRegistrationId) )
        return "";
      return GCMRegistrationId;
    }

    public static void Init(android.app.Activity p0)
    {
      com.gameloft.android.GAND.GloftGGSS.PushNotification.f v1;
      x = new java.lang.ref.WeakReference(p0);
      if ( m == null )
        m = new com.gameloft.android.GAND.GloftGGSS.PushNotification.SimplifiedAndroidUtils();
      LocalPushManager.Init();
      nativeInit();
      Prefs.init(p0);
      initTheme(p0);
      X = true;
      initWithIntent(p0.getIntent());
      m.ab = new com.gameloft.android.GAND.GloftGGSS.PushNotification.h();
      com.gameloft.android.GAND.GloftGGSS.CompatUtil.registerReceiverCompat(p0, m.ab, new android.content.IntentFilter("com.gameloft.android.GAND.GloftGGSS_pushbroadcast"));
      if ( n == null )
      {
        v1 = new com.gameloft.android.GAND.GloftGGSS.PushNotification.f(p0);
        n = v1;
        v1.a();
        BackupDatabase();
      }
    }

    public static String IsAppLaunchedFromPN()
    {
      return getMessagePayload(w);
    }

    public static boolean IsDontDisturbEnable()
    {
      return DontDisturbPolicy.isDontDisturbEnable((android.content.Context)x.get());
    }

    static boolean IsDontDisturbeTime()
    {
      return DontDisturbPolicy.isDontDisturbeTime((android.content.Context)x.get());
    }

    public static boolean IsEnable()
    {
      return Prefs.isEnabled((android.content.Context)x.get());
    }

    public static void LaunchAppFromPN(android.content.Context p0, android.content.Intent p1)
    {
      android.content.Intent v2;
      try
      {
        v2 = new android.content.Intent();
        v2.setClassName("com.gameloft.android.GAND.GloftGGSS", "com.gameloft.android.GAND.GloftGGSS.Game");
        v2.setFlags(0x10000000);
        v2.replaceExtras(p1);
        X = true;
        if ( Game.getActivityContext() != null )
        {
          v2.setAction("android.intent.action.MAIN");
          v2.addCategory("android.intent.category.LAUNCHER");
          X = false;
          initWithIntent(p1);
        }
        p0.startActivity(v2);
      }
      catch ( Exception e )
      {
      }
    }

    public static void LaunchPNClearStack(android.content.Context p0, android.content.Intent p1)
    {
      android.os.Bundle Extras; // RETVAL
      int Int; // RETVAL
    
      try
      {
        Extras = p1.getExtras();
        if ( Extras != null )
        {
          Int = Extras.getInt("pn_group_ID", -1);
          if ( Int >= 0 )
            ClearStack(p0, Int);
        }
      }
      catch ( Exception e )
      {
      }
    }

    public static int SendMessage(android.os.Bundle p0, String p1, int p2)
    {
      String v3;
      int v4; // RETVAL
      int v5;
      String String;
      v3 = null;
      if ( p0 == null || isEmptyOrNull(p1) || p2 < 0 )
        return isEmptyOrNull(v3) ? 1 : 0;
      try
      {
        v4 = Integer.parseInt(p1);
        v5 = v4;
        if ( v4 > 0 && v4 < 2073600 )
        {
          String = p0.getString("type");
          if ( !isEmptyOrNull(String) )
          {
            if ( String.equals("launch") )
            {
              p2 += 101;
            }
            else if ( String.equals("info") )
            {
              p2 += 201;
            }
          }
          p0.putString("pn_group_ID", Integer.toString(p2));
          v3 = LocalPushManager.SetAlarm(p0, v5);
          AddPNMessageIDToPreferences(v3, Integer.toString(p2));
          AddPNRecordToDB(p0, Integer.toString(p2), v3);
        }
        return isEmptyOrNull(v3) ? 1 : 0;
      }
      catch ( Exception e )
      {
        return 1;
      }
    }

    public static void SetDontDisturbEnable(boolean p0)
    {
      DontDisturbPolicy.setDontDisturbEnable((android.content.Context)x.get(), p0);
    }

    public static void SetEnable(android.content.Context p0, boolean p1)
    {
      Prefs.setEnabled(p0, p1);
    }

    public static void SetEnable(boolean p0)
    {
      Prefs.setEnabled((android.content.Context)x.get(), p0);
    }

    public static void ShowAppDetailsSettings()
    {
      android.content.Intent v0;
      if ( Build.VERSION.SDK_INT >= 9 )
      {
        try
        {
          v0 = new android.content.Intent("android.settings.APPLICATION_DETAILS_SETTINGS");
          v0.setData(Uri.parse("package:com.gameloft.android.GAND.GloftGGSS"));
          ((android.app.Activity)x.get()).startActivity(v0);
        }
        catch ( android.content.ActivityNotFoundException e )
        {
          ((android.app.Activity)x.get()).startActivity(new android.content.Intent("android.settings.MANAGE_APPLICATIONS_SETTINGS"));
        }
      }
    }

    private void a()
    {
      new com.gameloft.android.GAND.GloftGGSS.PushNotification.i(this).a(new android.os.Bundle());
    }

    public static String decodeString(String p0)
    {
      try
      {
        return URLDecoder.decode(p0, "UTF-8");
      }
      catch ( Exception e )
      {
      }
      return p0;
    }

    static String encodeString(String p0)
    {
      try
      {
        return URLEncoder.encode(p0, "UTF-8");
      }
      catch ( Exception e )
      {
      }
      return p0;
    }

    public static void generateNotification(
            android.content.Context p0,
            String p1,
            String p2,
            String p3,
            android.content.Intent p4,
            android.os.Bundle p5)
    {
      long v6;
      int v7;
      String String;
      android.content.SharedPreferences v9;
      int v10;
      int v11;
      int Int;
      String[] v13;
      int i;
      android.content.Intent v15;
      android.content.Intent v16;
      int v17;
      String[] v18;
      int v19;
      com.gameloft.android.GAND.GloftGGSS.PushNotification.PushBuilder Builder; // RETVAL
      com.gameloft.android.GAND.GloftGGSS.PushNotification.PushBuilder v21;
      android.content.SharedPreferences.Editor v22;
      v6 = System.currentTimeMillis();
      v7 = -1;
      String = p5.getString("pn_group_ID");
      if ( !isEmptyOrNull(String) )
      {
        try
        {
          v7 = Integer.parseInt(String);
        }
        catch ( Exception e )
        {
        }
      }
      v9 = Prefs.get(p0);
      if ( (p3.equals("launch") || p3.equals("info")) && Build.VERSION.SDK_INT >= 11 )
      {
        if ( v7 == -1 )
        {
          if ( p3.equals("launch") )
            v10 = 100;
          else
            v10 = 200;
        }
        else if ( p3.equals("launch") )
        {
          v10 = 101;
        }
        else
        {
          v10 = 201;
        }
        v11 = v10 + 32;
        Int = v9.getInt("PN_stackID_".concat(Integer.toString(v10 + 32)), 1);
        if ( Int == 0 )
          Int = 31;
        v13 = new String[Int];
        v13[Int - 1] = p1;
        for ( i = 0; i < Int - 1; ++i )
          v13[i] = v9.getString("PN_stackMSG_".concat(Integer.toString(v11)).concat("_" + Integer.toString(i + 1)), "");
        v15 = new android.content.Intent("com.gameloft.android.GAND.GloftGGSS.PNDeleteBroadcast");
        v15.putExtra("pn_group_ID", v10);
        p4.putExtra("pn_group_ID", v10);
        v16 = v15;
        v17 = Int;
        v18 = v13;
        v19 = v11;
      }
      else
      {
        v18 = null;
        v17 = 0;
        v19 = v9.getInt("notificationID", 0);
        v16 = null;
      }
      initTheme(p0);
      p4.putExtra("pn_lib_intent", true);
      Builder = PushBuilder.getBuilder(p0);
      v21 = Builder;
      Builder.b(p2);
      Builder.a(p1);
      Builder.a(v6);
      Builder.a(true);
      if ( v17 > 1 )
        Builder.a(v17);
      if ( v18 != null )
        Builder.a(v18);
      if ( v16 != null )
        Builder.b(PendingIntent.getBroadcast(p0, v19, v16, 0x8000000));
      if ( p3.equals("play") || p3.equals("launch") || p3.equals("info") )
        v21.a(PendingIntent.getBroadcast(p0, v19, p4, 0x8000000));
      else
        v21.a(PendingIntent.getActivity(p0, v19, p4, 0x8000000));
      ((android.app.NotificationManager)p0.getSystemService("notification")).notify(v19, v21.a());
      v22 = v9.edit();
      if ( (p3.equals("launch") || p3.equals("info")) && Build.VERSION.SDK_INT >= 11 )
      {
        v22.putString("PN_stackMSG_".concat(Integer.toString(v19)).concat("_" + Integer.toString(v17 % 32)), p1);
        v22.putInt("PN_stackID_".concat(Integer.toString(v19)), (v17 + 1) % 32);
      }
      else
      {
        v22.putInt("notificationID", (v19 + 1) % 32);
      }
      v22.commit();
    }

    private static int getAppVersion(android.content.Context p0)
    {
      int v1;
      v1 = 0;
      try
      {
        return (p0.getPackageManager().getPackageInfo(p0.getPackageName(), 0)).versionCode;
      }
      catch ( android.content.pm.PackageManager.NameNotFoundException e )
      {
      }
      return v1;
    }

    private static String getGCMRegistrationId(android.content.Context p0)
    {
      android.content.SharedPreferences v1;
      String String;
      v1 = Prefs.get(p0);
      String = v1.getString("PN_regId", "");
      if ( isEmptyOrNull(String) )
        return "";
      if ( v1.getInt("PN_appVersion", 0x80000000) != getAppVersion(p0) || isRegistrationExpired() )
        return "";
      return String;
    }

    public static android.content.Intent getLaunchIntent(
            android.content.Context p0,
            String p1,
            String p2,
            String p3,
            android.os.Bundle p4)
    {
      android.content.Intent v5;
      if ( p2.equals("url") || p2.equals("igpcode") )
      {
        if ( !isEmptyOrNull(p3) )
        {
          try
          {
            if ( p2.equals("igpcode") )
            {
              if ( SUtils.getContext() == null )
                SUtils.setContext(p0);
              p3 = p3
                 + "&udid="
                 + Device.getSerial()
                 + "&hdidfv="
                 + Device.getHDIDFV()
                 + "&androidid="
                 + Device.getAndroidId()
                 + "&ver=1.8.2f"
                 + "&d="
                 + encodeString(Build.MODEL)
                 + "&f="
                 + encodeString(Device.getDeviceFirmware())
                 + "&game_ver=1.8.2f"
                 + "&country="
                 + encodeString(Device.getNetworkCountryIso())
                 + "&lg="
                 + encodeString(Locale.getDefault().getLanguage());
            }
            v5 = new android.content.Intent("android.intent.action.VIEW", Uri.parse(p3));
            v5.setFlags(0x10000000);
            return v5;
          }
          catch ( Exception e )
          {
          }
        }
        v5 = new android.content.Intent();
        v5.setFlags(0x10000000);
        return v5;
      }
      if ( p2.equals("play") || p2.equals("launch") )
      {
        v5 = new android.content.Intent("com.gameloft.android.GAND.GloftGGSS.PNBroadcast");
        if ( p4 != null )
          v5.putExtra("pn_data_bundle", p4);
        if ( p2.equals("play") )
          v5.putExtra("pn_goto_multiplayer", true);
      }
      else
      {
        v5 = new android.content.Intent("com.gameloft.android.GAND.GloftGGSS.PNDeleteBroadcast");
        if ( p4 != null )
          v5.putExtra("pn_data_bundle", p4);
      }
      return v5;
    }

    public static String getMessagePayload(android.os.Bundle p0)
    {
      java.util.Iterator v1 = null;
      org.json.JSONObject v2 = null;
      String v3 = null;
      String v4 = null;
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
              if ( !(p0 != null) ) { _pc = 4; continue _sm; }
              _ehCatchPc = 2;
              v1 = p0.keySet().iterator();
              v2 = new org.json.JSONObject();
              while ( v1.hasNext() )
              {
              v3 = (String)v1.next();
              if ( v3.equals("pn_launch_game") )
              p0.getInt(v3);
              v2.put(v3, p0.get(v3));
              }
              v4 = v2.toString();
              _pc = 1;
              continue _sm;
            case 1:
              w = null;
              return v4;
            case 2:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 3; continue _sm; }
              _pc = 4;
              continue _sm;
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 4:
              v4 = "";
              _pc = 1;
              continue _sm;
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

    private static String getSDFolder()
    {
      String PreferenceString;
      PreferenceString = SUtils.getPreferenceString("SDFolder", GameInstaller.mPreferencesName);
      if ( PreferenceString == "" )
        return "/sdcard/Android/data/com.gameloft.android.GAND.GloftGGSS/files";
      return PreferenceString;
    }

    static void initTheme(android.content.Context p0)
    {
      PushTheme.init(p0);
    }

    static void initWithIntent(android.content.Intent p0)
    {
      int v1;
      android.os.Bundle Extras; // RETVAL
      android.os.Bundle v3;
      android.os.Bundle Bundle; // RETVAL
      android.os.Bundle v5;
      int Int;
      v1 = 1;
      if ( p0 != null )
      {
        Extras = p0.getExtras();
        v3 = Extras;
        if ( Extras != null && Extras.getBoolean("pn_lib_intent", false) )
        {
          Y = v3.getBoolean("pn_goto_multiplayer", false);
          w = new android.os.Bundle();
          Bundle = v3.getBundle("pn_data_bundle");
          if ( Bundle != null )
            w.putAll(Bundle);
          w.putInt("pn_launch_game", com.gameloft.android.DecompRT.b2i(X));
          v5 = w;
          if ( !Y )
            v1 = 0;
          v5.putInt("pn_goto_multiplayer", v1);
          v3.remove("pn_goto_multiplayer");
          v3.remove("pn_data_bundle");
          Int = v3.getInt("pn_group_ID", -1);
          if ( Int >= 0 )
            ClearStack((android.content.Context)x.get(), Int);
        }
      }
    }

    private static boolean isEmptyOrNull(String p0)
    {
      return p0 == null || p0.length() == 0;
    }

    private static boolean isRegistrationExpired()
    {
      return System.currentTimeMillis() > Prefs.get((android.content.Context)x.get()).getLong("PN_regId_ExpirationTimeMs", -1);
    }

    public static boolean isTypeBlock(String p0)
    {
      return false;
    }

    public static native void nativeInit();

    public static native void nativeSendPNData(java.lang.String p0);

    public static native void nativeSendRegistrationData(java.lang.String p0);

    private static void requestGoogleToken()
    {
      if ( !R )
      {
        if ( isEmptyOrNull(GetRegistrationID()) )
        {
          if ( m == null )
            m = new com.gameloft.android.GAND.GloftGGSS.PushNotification.SimplifiedAndroidUtils();
          new com.gameloft.android.GAND.GloftGGSS.PushNotification.i(m).a(new android.os.Bundle());
        }
        else
        {
          setTokenReady();
        }
      }
    }

    public static void setGCMRegistrationId(android.content.Context p0, String p1)
    {
      android.content.SharedPreferences v2;
      int AppVersion;
      long v4;
      android.content.SharedPreferences.Editor v5;
      v2 = Prefs.get(p0);
      AppVersion = getAppVersion(p0);
      v4 = System.currentTimeMillis() + 604800000;
      v5 = v2.edit();
      v5.putString("PN_regId", p1);
      v5.putInt("PN_appVersion", AppVersion);
      v5.putLong("PN_regId_ExpirationTimeMs", v4);
      v5.commit();
    }

    public static void setTokenReady()
    {
      ;
    }

}
