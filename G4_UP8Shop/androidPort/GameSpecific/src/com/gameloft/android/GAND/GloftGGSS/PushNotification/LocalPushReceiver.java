// Decompiled from classes.dex (SourceFile: LocalPushReceiver.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.PushNotification;

import android.os.Bundle;
public class LocalPushReceiver extends android.content.BroadcastReceiver {
    // Methods
    public LocalPushReceiver()
    {
      super();
    }

    public void onReceive(android.content.Context p0, android.content.Intent p1)
    {
      Boolean v3 = null;
      android.os.Bundle Extras = null; // RETVAL
      android.os.Bundle v5 = null;
      android.os.Bundle v6 = null;
      org.json.JSONObject v7 = null;
      android.os.Bundle Bundle = null; // RETVAL
      android.os.Bundle v9 = null;
      java.util.Iterator v10 = null;
      String v11 = null;
      String v12 = null;
      String v13 = null;
      String String = null;
      String v15 = null;
      String v16 = null;
      String v17 = null;
      String v18 = null;
      String v19 = null;
      String v20 = null;
      String v21 = null;
      String v22 = null;
      String v23 = null;
      String v24 = null;
      String v25 = null;
      String v26 = null;
      com.gameloft.android.GAND.GloftGGSS.PushNotification.f v27 = null;
      android.content.Intent v28 = null;
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
              _ehCatchPc = 5;
              LocalPushManager.Init(p0);
              if ( !("android.intent.action.BOOT_COMPLETED".equals(p1.getAction())) ) { _pc = 4; continue _sm; }
              v3 = Boolean.valueOf(false);
              _ehCatchPc = 2;
              Extras = p1.getExtras();
              v5 = Extras;
              if ( Extras != null && Extras.containsKey("pn_ddms_flag") && v5.getString("pn_ddms_flag").equals("1") )
              {
              Boolean.valueOf(true);
              LocalPushManager.TriggerAlarm(v5.getString("pn_alarm_id"));
              return;
              }
              _pc = 1;
              continue _sm;
            case 1:
              LocalPushManager.LoadAlarmInfo();
              return;
            case 2:
              _ehCatchPc = 5;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 3; continue _sm; }
              if ( v3.booleanValue() )
              return;
              _pc = 1;
              continue _sm;
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 4:
              v6 = p1.getExtras();
              v7 = new org.json.JSONObject();
              if ( v6 == null )
              return;
              Bundle = v6.getBundle(p0.getPackageName() + ".alarm_content");
              v9 = Bundle;
              if ( Bundle == null )
              return;
              v10 = Bundle.keySet().iterator();
              v11 = null;
              v12 = null;
              v13 = null;
              String = null;
              v15 = null;
              while ( true )
              {
              if ( !v10.hasNext() )
              {
              if ( v13 != null && v15 != null && !SimplifiedAndroidUtils.isTypeBlock(v13) )
              {
              if ( String == null || String.length() == 0 )
              String = p0.getString(2131165524);
              if ( v9.containsKey("customIcon") )
              {
              SimplifiedAndroidUtils.g = true;
              SimplifiedAndroidUtils.j = v9.getString("customIcon");
              }
              else
              {
              SimplifiedAndroidUtils.g = false;
              SimplifiedAndroidUtils.j = null;
              }
              if ( v9.containsKey("image") )
              {
              SimplifiedAndroidUtils.i = true;
              SimplifiedAndroidUtils.l = v9.getString("image");
              }
              else
              {
              SimplifiedAndroidUtils.i = false;
              SimplifiedAndroidUtils.l = null;
              }
              if ( v9.containsKey("sound") )
              {
              SimplifiedAndroidUtils.h = true;
              SimplifiedAndroidUtils.k = v9.getString("sound");
              }
              else
              {
              SimplifiedAndroidUtils.h = false;
              SimplifiedAndroidUtils.k = null;
              }
              SimplifiedAndroidUtils.generateNotification(
              p0,
              v15,
              String,
              v13,
              SimplifiedAndroidUtils.getLaunchIntent(p0, v15, v13, v11, v9),
              v9);
              try
              {
              if ( v12 != null && v12.length() > 0 )
              {
              LocalPushManager.CancelAlarm(v12);
              if ( SimplifiedAndroidUtils.n == null )
              {
              v27 = new com.gameloft.android.GAND.GloftGGSS.PushNotification.f(p0);
              SimplifiedAndroidUtils.n = v27;
              v27.a();
              }
              SimplifiedAndroidUtils.n.a("pn_alarm_id", v12);
              SimplifiedAndroidUtils.BackupDatabase();
              }
              v28 = new android.content.Intent("com.gameloft.android.GAND.GloftGGSS_pushbroadcast");
              v28.putExtra("get_broadcast_push", v7.toString());
              p0.sendBroadcast(v28);
              }
              catch ( Exception e )
              {
              }
              return;
              }
              return;
              }
              v16 = (String)v10.next();
              if ( v16.equals("body") )
              {
              v17 = v11;
              v18 = String;
              v19 = v12;
              v20 = v9.getString("body");
              v21 = v17;
              }
              else if ( v16.equals("subject") )
              {
              v23 = v11;
              v18 = v9.getString("subject");
              v19 = v12;
              v20 = v15;
              v21 = v23;
              }
              else if ( v16.equals("type") )
              {
              v13 = v9.getString("type");
              v24 = v11;
              v18 = String;
              v19 = v12;
              v20 = v15;
              v21 = v24;
              }
              else if ( v16.equals("url") )
              {
              v18 = String;
              v19 = v12;
              v20 = v15;
              v21 = v9.getString("url");
              }
              else
              {
              v25 = v11;
              v18 = String;
              if ( v16.equals("lID") )
              v19 = v9.getString("lID");
              else
              v19 = v12;
              v20 = v15;
              v21 = v25;
              }
              try
              {
              if ( v9.getString(v16) != null )
              v7.put(v16, v9.getString(v16));
              v22 = v21;
              v15 = v20;
              v12 = v19;
              String = v18;
              v11 = v22;
              continue;
              }
              catch ( Exception e )
              {
              v26 = v21;
              v15 = v20;
              v12 = v19;
              String = v18;
              v11 = v26;
              }
              }



            case 5:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 6; continue _sm; }
              _pc = 7;
              continue _sm;
            case 6:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 7:
              return;
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

}
