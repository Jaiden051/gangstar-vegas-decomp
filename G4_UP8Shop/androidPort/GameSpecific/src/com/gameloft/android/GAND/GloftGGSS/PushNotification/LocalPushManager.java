// Decompiled from classes.dex (SourceFile: LocalPushManager.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.PushNotification;

import android.app.PendingIntent;
import android.os.SystemClock;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.SUtils;
import java.util.Calendar;
import java.util.Locale;
public class LocalPushManager {
    // Fields
    public static int a;
    public static int b;
    public static java.lang.String c;
    public static java.lang.String d;
    public static java.lang.String e;

    // Methods
    public LocalPushManager()
    {
      super();
    }

    public static void CancelAlarm(String p0)
    {
      android.content.Context Context;
      android.content.SharedPreferences.Editor v2;
      Context = SUtils.getContext();
      ((android.app.AlarmManager)Context.getSystemService("alarm")).cancel(PendingIntent.getBroadcast(
                                                                             Context,
                                                                             Integer.parseInt(p0.substring(7)),
                                                                             new android.content.Intent(Context, com.gameloft.android.GAND.GloftGGSS.PushNotification.LocalPushReceiver.class),
                                                                             0x8000000));
      v2 = Prefs.get(Context).edit();
      v2.remove(p0);
      v2.commit();
    }

    public static void CancelAll()
    {
      android.content.Context Context;
      android.content.SharedPreferences v1;
      android.content.SharedPreferences.Editor v2;
      android.content.Intent v3;
      int i;
      String v5;
      Context = SUtils.getContext();
      v1 = Prefs.get(Context);
      v2 = v1.edit();
      v3 = new android.content.Intent(Context, com.gameloft.android.GAND.GloftGGSS.PushNotification.LocalPushReceiver.class);
      for ( i = 100; i >= 0; --i )
      {
        v5 = "PN_LID_" + i;
        if ( v1.contains(v5) )
        {
          ((android.app.AlarmManager)Context.getSystemService("alarm")).cancel(PendingIntent.getBroadcast(
                                                                                 Context,
                                                                                 i,
                                                                                 v3,
                                                                                 0x8000000));
          v2.remove(v5);
        }
      }
      v2.putInt("PN_AID", 0);
      v2.commit();
    }

    static void Init()
    {
      android.content.Context Context; // RETVAL
    
      Context = SUtils.getContext();
      if ( Context != null )
        Prefs.get(Context);
    }

    static void Init(android.content.Context p0)
    {
      if ( SUtils.getContext() == null )
        SUtils.setContext(p0);
      Init();
    }

    public static void LoadAlarmInfo()
    {
      android.content.SharedPreferences v0;
      String v1;
      String v2;
      int v3;
      int i;
      android.os.Bundle v5;
      int v6;
      String v7;
      String String;
      int v9;
      int v10;
      int v11;
      String v12;
      String v13;
      int v14;
      String v15;
      v0 = Prefs.get(SUtils.getContext());
      v1 = "";
      v2 = "";
      v3 = 0;
      for ( i = v0.getInt("PN_AID", 0); i >= 0; --i )
      {
        if ( v0.contains("PN_LID_" + i) )
        {
          v5 = new android.os.Bundle();
          v6 = v3;
          v7 = v2;
          String = v0.getString("PN_LID_" + i, null);
          v9 = 0;
          while ( v6 < String.length() )
          {
            v10 = String.indexOf("|key|");
            v11 = String.indexOf("=", v10);
            v12 = String.substring(v10 + 5, v11);
            v13 = String.substring(v11 + 1);
            if ( v13.contains("|key|") )
              v14 = v13.indexOf("|key|");
            else
              v14 = v13.length();
            v15 = v13.substring(0, v14);
            if ( "delay".equals(v12) )
            {
              v9 = Integer.parseInt(v15);
            }
            else if ( "schedule_time".equals(v12) )
            {
              v1 = v15;
            }
            else if ( "lID".equals(v12) )
            {
              v7 = v15;
            }
            v5.putString(v12, v15);
            String = v13;
            v6 = v14;
          }
          if ( !isExpired(v1) )
            SetRestoredAlarm(v7, i, v5, v9);
        }
        else
        {
          v6 = v3;
          v7 = v2;
        }
        v2 = v7;
        v3 = v6;
      }
    }

    public static void SaveAlarmInfo(String p0, String p1, android.os.Bundle p2)
    {
      String v3;
      java.util.Iterator v4;
      String v5;
      String v6;
      android.content.SharedPreferences.Editor v7;
      v3 = "";
      v4 = p2.keySet().iterator();
      if ( p2 != null )
      {
        while ( v4.hasNext() )
        {
          v5 = (String)v4.next();
          if ( v5 != null && p2.getString(v5) != null && p2.getString(v5).length() > 0 )
            v6 = v3 + "|key|" + v5 + "=" + p2.getString(v5);
          else
            v6 = v3;
          v3 = v6;
        }
        v3 = v3 + "|key|delay=" + p1;
      }
      v7 = Prefs.get(SUtils.getContext()).edit();
      v7.putString(p0, v3);
      v7.commit();
    }

    static String SecondsToHours(int p0)
    {
      return p0 / 86400
           + " Days "
           + p0 % 86400 / 3600L
           + " Hours "
           + p0 % 86400 % 3600L / 60
           + " Minutes "
           + p0 % 86400 % 3600L % 60
           + " Seconds";
    }

    static String SetAlarm(android.os.Bundle p0, int p1)
    {
      int Slot;
      android.content.Context Context;
      android.content.SharedPreferences.Editor v4;
      String PackageName;
      android.content.Intent v6;
      Slot = getSlot();
      Context = SUtils.getContext();
      v4 = Prefs.get(Context).edit();
      v4.putInt("PN_AID", Slot);
      v4.commit();
      Calendar.getInstance().add(13, p1);
      PackageName = Context.getPackageName();
      p0.putString("lID", "PN_LID_" + Slot);
      v6 = new android.content.Intent(Context, com.gameloft.android.GAND.GloftGGSS.PushNotification.LocalPushReceiver.class);
      v6.putExtra(PackageName + ".alarm_content", p0);
      ((android.app.AlarmManager)Context.getSystemService("alarm")).set(2, SystemClock.elapsedRealtime() + 1000 * p1, PendingIntent.getBroadcast(Context, Slot, v6, 0x8000000));
      SaveAlarmInfo("PN_LID_" + Slot, Integer.toString(p1), p0);
      return "PN_LID_" + Slot;
    }

    static void SetRestoredAlarm(String p0, int p1, android.os.Bundle p2, int p3)
    {
      android.content.Context Context;
      String PackageName; // RETVAL
      android.content.Intent v6;
      getSlot();
      Context = SUtils.getContext();
      Calendar.getInstance().add(13, p3);
      PackageName = Context.getPackageName();
      p2.putString("lID", p0);
      v6 = new android.content.Intent(Context, com.gameloft.android.GAND.GloftGGSS.PushNotification.LocalPushReceiver.class);
      v6.putExtra(PackageName + ".alarm_content", p2);
      ((android.app.AlarmManager)Context.getSystemService("alarm")).set(2, SystemClock.elapsedRealtime() + 1000 * p3, PendingIntent.getBroadcast(Context, p1, v6, 0x8000000));
      SaveAlarmInfo(p0, Integer.toString(p3), p2);
    }

    public static void TriggerAlarm(String p0)
    {
      int v1;
      android.content.Context Context; // RETVAL
      android.content.Context v3;
      android.content.SharedPreferences v4;
      String v5;
      String String;
      android.os.Bundle v7;
      int v8;
      int v9;
      String v10;
      String v11;
      int v12;
      String v13;
      String v14;
      String PackageName;
      int v16;
      android.content.Intent v17;
      com.gameloft.android.GAND.GloftGGSS.PushNotification.f v18;
      v1 = 0;
      try
      {
        Context = SUtils.getContext();
        v3 = Context;
        if ( Context != null )
        {
          v4 = Prefs.get(Context);
          v5 = "";
          if ( v4.contains(p0) )
          {
            String = v4.getString(p0, null);
            v7 = new android.os.Bundle();
            while ( v1 < String.length() )
            {
              v8 = String.indexOf("|key|");
              v9 = String.indexOf("=", v8);
              v10 = String.substring(v8 + 5, v9);
              v11 = String.substring(v9 + 1);
              if ( v11.contains("|key|") )
                v12 = v11.indexOf("|key|");
              else
                v12 = v11.length();
              v13 = v11.substring(0, v12);
              if ( "schedule_time".equals(v10) )
                v5 = v13;
              else
                "lID".equals(v10);
              v7.putString(v10, v13);
              v14 = v11;
              v1 = v12;
              String = v14;
            }
            if ( isExpired(v5) )
            {
              CancelAlarm(p0);
              if ( SimplifiedAndroidUtils.n == null )
              {
                v18 = new com.gameloft.android.GAND.GloftGGSS.PushNotification.f(v3);
                SimplifiedAndroidUtils.n = v18;
                v18.a();
              }
              SimplifiedAndroidUtils.n.a("pn_alarm_id", p0);
              SimplifiedAndroidUtils.BackupDatabase();
            }
            else
            {
              PackageName = v3.getPackageName();
              v16 = Integer.parseInt(p0.substring(7));
              v17 = new android.content.Intent(v3, com.gameloft.android.GAND.GloftGGSS.PushNotification.LocalPushReceiver.class);
              v17.putExtra(PackageName + ".alarm_content", v7);
              ((android.app.AlarmManager)v3.getSystemService("alarm")).set(2, SystemClock.elapsedRealtime(), PendingIntent.getBroadcast(v3, v16, v17, 0x8000000));
            }
          }
        }
      }
      catch ( Exception e )
      {
      }
    }

    static int getSlot()
    {
      android.content.SharedPreferences v0;
      int i;
      v0 = Prefs.get(SUtils.getContext());
      for ( i = 0; v0.contains("PN_LID_" + i); ++i )
        ;
      return i;
    }

    static boolean isExpired(String p0)
    {
      try
      {
        return new java.text.SimpleDateFormat("EEE MMM dd kk:mm:ss yyyy", Locale.getDefault()).parse(p0).before(new java.util.Date());
      }
      catch ( Exception e )
      {
        return true;
      }
    }

}
