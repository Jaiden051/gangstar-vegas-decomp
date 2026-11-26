// Decompiled from classes.dex (SourceFile: GCMIntentService.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import com.gameloft.android.GAND.GloftGGSS.PushNotification.Prefs;
import com.gameloft.android.GAND.GloftGGSS.PushNotification.SimplifiedAndroidUtils;
import com.google.android.gcm.GCMRegistrar;
public class GCMIntentService extends com.google.android.gcm.GCMBaseIntentService {
    // Fields
    static java.util.Vector a;

    // Methods
    public GCMIntentService()
    {
      super(new String[] { "108176907654" });
      if ( a == null )
        a = new java.util.Vector();
    }

    protected final void a()
    {
      ;
    }

    protected final void a(android.content.Context p0)
    {
      GCMRegistrar.isRegisteredOnServer(p0);
    }

    protected final void a(android.content.Context p0, android.content.Intent p1)
    {
      android.os.Bundle Extras; // RETVAL
      android.os.Bundle v4;
      String String; // RETVAL
      Object v6;
      java.util.Iterator v7;
      org.json.JSONObject v8;
      String v9;
      String v10;
      String v11;
      String v12;
      String v13;
      String v14;
      String v15;
      android.content.Intent v16;
      Extras = p1.getExtras();
      v4 = Extras;
      if ( Extras == null )
        return;
      try
      {
        String = Extras.getString("id");
        v6 = String;
        if ( String == null || a.contains(String) )
          return;
        if ( a.size() > 5 )
          a.clear();
        a.add(v6);
      }
      catch ( Exception e )
      {
      }
      if ( Prefs.isEnabled(p0) )
      {
        v7 = v4.keySet().iterator();
        v8 = new org.json.JSONObject();
        while ( v7.hasNext() )
        {
          v9 = (String)v7.next();
          try
          {
            v8.put(v9, v4.get(v9));
          }
          catch ( Exception e )
          {
          }
        }
        if ( v4 != null && !v4.isEmpty() )
        {
          v10 = v4.getString("subject");
          v11 = v4.getString("reply_to");
          v12 = v4.getString("title");
          v13 = v4.getString("type");
          v14 = v4.getString("body");
          v15 = v4.getString("url");
          if ( v10 == null || v10.length() == 0 )
          {
            if ( v12 != null && v12.length() > 0 )
              v10 = v12;
            else
              v10 = p0.getString(2131165524);
          }
          if ( v13 != null && v14 != null && !SimplifiedAndroidUtils.isTypeBlock(v13) )
          {
            if ( v13.equals("play") && v11 != null )
              v4.putString("friend_id", v11);
            if ( v4.containsKey("customIcon") )
            {
              SimplifiedAndroidUtils.g = true;
              SimplifiedAndroidUtils.j = v4.getString("customIcon");
            }
            else
            {
              SimplifiedAndroidUtils.g = false;
              SimplifiedAndroidUtils.j = null;
            }
            if ( v4.containsKey("image") )
            {
              SimplifiedAndroidUtils.i = true;
              SimplifiedAndroidUtils.l = v4.getString("image");
            }
            else
            {
              SimplifiedAndroidUtils.i = false;
              SimplifiedAndroidUtils.l = null;
            }
            if ( v4.containsKey("sound") )
            {
              SimplifiedAndroidUtils.h = true;
              SimplifiedAndroidUtils.k = v4.getString("sound");
            }
            else
            {
              SimplifiedAndroidUtils.h = false;
              SimplifiedAndroidUtils.k = null;
            }
            SimplifiedAndroidUtils.generateNotification(
              p0,
              v14,
              v10,
              v13,
              SimplifiedAndroidUtils.getLaunchIntent(p0, v14, v13, v15, v4),
              v4);
            try
            {
              v16 = new android.content.Intent("com.gameloft.android.GAND.GloftGGSS_pushbroadcast");
              v16.putExtra("get_broadcast_push", v8.toString());
              this.sendBroadcast(v16);
            }
            catch ( Exception e )
            {
            }
          }
        }
      }
    }

    protected final void a(String p0)
    {
      if ( p0 != null && p0.length() > 0 )
      {
        SimplifiedAndroidUtils.setTokenReady();
        SimplifiedAndroidUtils.nativeSendRegistrationData(p0);
        SimplifiedAndroidUtils.AddEndpointRecordToDB(p0);
      }
    }

    protected final boolean a(android.content.Context p0, String p1)
    {
      return super.a(p0, p1);
    }

    public final void b()
    {
      ;
    }

}
