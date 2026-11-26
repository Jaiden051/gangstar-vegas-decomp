// Decompiled from classes.dex (SourceFile: MeasurementEvent.java) via IDA Pro 9.5 Dalvik Decompiler
package bolts;

import android.net.Uri;
import android.support.v4.content.LocalBroadcastManager;
import android.util.Log;
import com.facebook.AppLinkData;
public class MeasurementEvent {
    // Fields
    public static java.lang.String a;
    public static java.lang.String b;
    public static java.lang.String c;
    public static java.lang.String d;
    public static java.lang.String e;
    private android.content.Context f;
    private java.lang.String g;
    private android.os.Bundle h;

    // Methods
    private MeasurementEvent(android.content.Context p0, String p1, android.os.Bundle p2)
    {
      super();
      this.f = p0.getApplicationContext();
      this.g = p1;
      this.h = p2;
    }

    private void a()
    {
      Class v1;
      Class[] v2;
      java.lang.reflect.Method Method;
      Class[] v4;
      java.lang.reflect.Method v5;
      Object[] v6;
      Object v7;
      android.content.Intent v8;
      Object[] v9;
      if ( this.g == null )
        Log.d(this.getClass().getName(), "Event name is required");
      try
      {
        v1 = Class.forName("android.support.v4.content.LocalBroadcastManager");
        v2 = new Class[1];
        v2[0] = android.content.Context.class;
        Method = v1.getMethod("getInstance", v2);
        v4 = new Class[1];
        v4[0] = android.content.Intent.class;
        v5 = v1.getMethod("sendBroadcast", v4);
        v6 = new Object[1];
        v6[0] = this.f;
        v7 = Method.invoke(null, v6);
        v8 = new android.content.Intent("com.parse.bolts.measurement_event");
        v8.putExtra("event_name", this.g);
        v8.putExtra("event_args", this.h);
        v9 = new Object[1];
        v9[0] = v8;
        v5.invoke(v7, v9);
      }
      catch ( Exception e )
      {
        Log.d(
          this.getClass().getName(),
          "LocalBroadcastManager in android support library is required to raise bolts event.");
      }
    }

    private static android.os.Bundle getApplinkLogData(
            android.content.Context p0,
            String p1,
            android.os.Bundle p2,
            android.content.Intent p3)
    {
      android.os.Bundle v4 = null;
      android.content.ComponentName v5 = null; // RETVAL
      android.content.ComponentName v6 = null;
      java.util.Iterator v7 = null;
      String v8 = null;
      Object v9 = null; // RETVAL
      Object v10 = null;
      java.util.Iterator v11 = null;
      String v12 = null;
      String v13 = null;
      String v14 = null;
      android.net.Uri v15 = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v4 = new android.os.Bundle();
            v5 = p3.resolveActivity(p0.getPackageManager());
            v6 = v5;
            if ( v5 != null )
            v4.putString("class", v5.getShortClassName());
            if ( "al_nav_out".equals(p1) )
            {
            if ( v6 != null )
            v4.putString("package", v6.getPackageName());
            if ( p3.getData() != null )
            v4.putString("outputURL", p3.getData().toString());
            if ( p3.getScheme() != null )
            v4.putString("outputURLScheme", p3.getScheme());
            }
            else if ( "al_nav_in".equals(p1) )
            {
            if ( p3.getData() != null )
            v4.putString("inputURL", p3.getData().toString());
            if ( p3.getScheme() != null )
            v4.putString("inputURLScheme", p3.getScheme());
            }
            v7 = p2.keySet().iterator();
            _pc = 1;
            continue _sm;
          case 1:
            if ( !(v7.hasNext()) ) { _pc = 6; continue _sm; }
            v8 = (String)v7.next();
            v9 = p2.get(v8);
            v10 = v9;
            if ( !(v9 instanceof android.os.Bundle) ) { _pc = 5; continue _sm; }
            v11 = ((android.os.Bundle)v9).keySet().iterator();
            _pc = 2;
            continue _sm;
          case 2:
            if ( !v11.hasNext() )
            { _pc = 1; continue _sm; }
            v12 = (String)v11.next();
            v13 = objectToJSONString(((android.os.Bundle)v10).get(v12));
            if ( !(v8.equals("referer_app_link")) ) { _pc = 3; continue _sm; }
            _pc = 4;
            continue _sm;
          case 3:
            v4.putString(v8 + "/" + v12, v13);
            _pc = 2;
            continue _sm;
          case 4:
            if ( v12.equalsIgnoreCase("url") )
            {
            v4.putString("refererURL", v13);
            }
            else if ( v12.equalsIgnoreCase("app_name") )
            {
            v4.putString("refererAppName", v13);
            }
            else
            {
            if ( !v12.equalsIgnoreCase("package") )
            { _pc = 3; continue _sm; }
            v4.putString("sourceApplication", v13);
            }
            _pc = 2;
            continue _sm;
          case 5:
            v14 = objectToJSONString(v9);
            if ( v8.equals("target_url") )
            {
            v15 = Uri.parse(v14);
            v4.putString("targetURL", v15.toString());
            v4.putString("targetURLHost", v15.getHost());
            }
            else
            {
            v4.putString(v8, v14);
            }
            _pc = 1;
            continue _sm;
          case 6:
            return v4;
        }
      }
}

    private static String objectToJSONString(Object p0)
    {
      String v1;
      v1 = null;
      if ( p0 == null )
        return v1;
      if ( p0 instanceof org.json.JSONArray || p0 instanceof org.json.JSONObject )
        return p0.toString();
      try
      {
        if ( p0 instanceof java.util.Collection )
        {
          v1 = new org.json.JSONArray((java.util.Collection)p0).toString();
        }
        else
        {
          if ( !(p0 instanceof java.util.Map) )
            return p0.toString();
          v1 = new org.json.JSONObject((java.util.Map)p0).toString();
        }
      }
      catch ( Exception e )
      {
      }
      return v1;
    }

    static void sendBroadcastEvent(
            android.content.Context p0,
            String p1,
            android.content.Intent p2,
            java.util.Map<String, String> p3)
    {
      android.os.Bundle v4;
      android.os.Bundle AppLinkData; // RETVAL
      android.os.Bundle ApplinkLogData = null;
      java.util.Iterator v7;
      String v8;
      android.net.Uri Data; // RETVAL
      android.os.Bundle Extras; // RETVAL
      android.os.Bundle v11;
      java.util.Iterator v12;
      String v13;
      bolts.MeasurementEvent v14;
      Class v15;
      Class[] v16;
      java.lang.reflect.Method Method;
      Class[] v18;
      java.lang.reflect.Method v19;
      Object[] v20;
      Object v21;
      android.content.Intent v22;
      Object[] v23;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            v4 = new android.os.Bundle();
            if ( p2 != null )
            {
            AppLinkData = AppLinks.getAppLinkData(p2);
            if ( AppLinkData != null )
            {
            ApplinkLogData = getApplinkLogData(p0, p1, AppLinkData, p2);
            { _pc = 1; continue _sm; }
            }
            Data = p2.getData();
            if ( Data != null )
            v4.putString("intentData", Data.toString());
            Extras = p2.getExtras();
            v11 = Extras;
            if ( Extras != null )
            {
            v12 = Extras.keySet().iterator();
            while ( v12.hasNext() )
            {
            v13 = (String)v12.next();
            v4.putString(v13, objectToJSONString(v11.get(v13)));
            }
            }
            }
            ApplinkLogData = v4;
            _pc = 1;
            continue _sm;
          }
          case 1: {
            if ( p3 != null )
            {
            v7 = p3.keySet().iterator();
            while ( v7.hasNext() )
            {
            v8 = (String)v7.next();
            ApplinkLogData.putString(v8, (String)p3.get(v8));
            }
            }
            v14 = new bolts.MeasurementEvent(p0, p1, ApplinkLogData);
            if ( v14.g == null )
            Log.d(v14.getClass().getName(), "Event name is required");
            try
            {
            v15 = Class.forName("android.support.v4.content.LocalBroadcastManager");
            v16 = new Class[1];
            v16[0] = android.content.Context.class;
            Method = v15.getMethod("getInstance", v16);
            v18 = new Class[1];
            v18[0] = android.content.Intent.class;
            v19 = v15.getMethod("sendBroadcast", v18);
            v20 = new Object[1];
            v20[0] = v14.f;
            v21 = Method.invoke(null, v20);
            v22 = new android.content.Intent("com.parse.bolts.measurement_event");
            v22.putExtra("event_name", v14.g);
            v22.putExtra("event_args", v14.h);
            v23 = new Object[1];
            v23[0] = v22;
            v19.invoke(v21, v23);
            }
            catch ( Exception e )
            {
            Log.d(
            v14.getClass().getName(),
            "LocalBroadcastManager in android support library is required to raise bolts event.");
            }
            
            break _sm;
          }
          default: break _sm;
        }
      }
    }

}
