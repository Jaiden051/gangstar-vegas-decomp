// Decompiled from classes.dex (SourceFile: AppLinkNavigation.java) via IDA Pro 9.5 Dalvik Decompiler
package bolts;

import android.content.pm.ApplicationInfo;
import android.net.Uri;
public class AppLinkNavigation {
    // Fields
    private static java.lang.String a;
    private static java.lang.String b;
    private static java.lang.String c;
    private static java.lang.String d;
    private static java.lang.String e;
    private static java.lang.String f;
    private static bolts.g g;
    private final bolts.d h;
    private final android.os.Bundle i;
    private final android.os.Bundle j;

    // Methods
    private AppLinkNavigation(bolts.d p0, android.os.Bundle p1, android.os.Bundle p2)
    {
      super();
      if ( p0 == null )
        throw new IllegalArgumentException("appLink must not be null.");
      this.h = p0;
      this.i = new android.os.Bundle();
      this.j = new android.os.Bundle();
    }

    private android.os.Bundle a(android.content.Context p0)
    {
      android.os.Bundle v2;
      android.os.Bundle v3;
      String PackageName; // RETVAL
      android.content.pm.ApplicationInfo ApplicationInfo; // RETVAL
      String String; // RETVAL
    
      v2 = new android.os.Bundle();
      v3 = new android.os.Bundle();
      if ( p0 != null )
      {
        PackageName = p0.getPackageName();
        if ( PackageName != null )
          v3.putString("package", PackageName);
        ApplicationInfo = p0.getApplicationInfo();
        if ( ApplicationInfo != null )
        {
          String = p0.getString(ApplicationInfo.labelRes);
          if ( String != null )
            v3.putString("app_name", String);
        }
      }
      v2.putAll(this.j);
      v2.putString("target_url", this.h.a().toString());
      v2.putString("version", "1.0");
      v2.putString("user_agent", "Bolts Android 1.1.2");
      v2.putBundle("referer_app_link", v3);
      v2.putBundle("extras", this.i);
      return v2;
    }

    private bolts.d a()
    {
      return this.h;
    }

    private Object a(Object p0) throws org.json.JSONException
    {
      int v2;
      org.json.JSONArray v4;
      java.util.Iterator i;
      org.json.JSONArray v6;
      android.util.SparseArray v7;
      org.json.JSONArray v8;
      boolean[] v9;
      int v10;
      org.json.JSONArray v11;
      char[] v12;
      int v13;
      org.json.JSONArray v14;
      CharSequence[] v15;
      int v16;
      org.json.JSONArray v17;
      double[] v18;
      int v19;
      org.json.JSONArray v20;
      float[] v21;
      int v22;
      org.json.JSONArray v23;
      int[] v24;
      int v25;
      org.json.JSONArray v26;
      long[] v27;
      int v28;
      org.json.JSONArray v29;
      short[] v30;
      int v31;
      org.json.JSONArray v32;
      String[] v33;
      int v34;
      v2 = 0;
      if ( p0 instanceof android.os.Bundle )
        return this.a((android.os.Bundle)p0);
      if ( p0 instanceof CharSequence )
        return p0.toString();
      if ( p0 instanceof java.util.List )
      {
        v4 = new org.json.JSONArray();
        for ( i = ((java.util.List)p0).iterator(); i.hasNext(); v4.put(this.a(i.next())) )
          ;
        return v4;
      }
      else if ( p0 instanceof android.util.SparseArray )
      {
        v6 = new org.json.JSONArray();
        v7 = (android.util.SparseArray)p0;
        while ( v2 < v7.size() )
        {
          v6.put(v7.keyAt(v2), this.a(v7.valueAt(v2)));
          ++v2;
        }
        return v6;
      }
      else
      {
        if ( p0 instanceof Character )
          return p0.toString();
        if ( !(p0 instanceof Boolean) )
        {
          if ( p0 instanceof Number )
          {
            if ( p0 instanceof Double || p0 instanceof Float )
              return Double.valueOf(((Number)p0).doubleValue());
            else
              return Long.valueOf(((Number)p0).longValue());
          }
          else if ( p0 instanceof boolean[] )
          {
            v8 = new org.json.JSONArray();
            v9 = (boolean[])p0;
            v10 = v9.length;
            while ( v2 < v10 )
              v8.put(this.a(Boolean.valueOf(v9[v2++])));
            return v8;
          }
          else if ( p0 instanceof char[] )
          {
            v11 = new org.json.JSONArray();
            v12 = (char[])p0;
            v13 = v12.length;
            while ( v2 < v13 )
              v11.put(this.a(Character.valueOf(v12[v2++])));
            return v11;
          }
          else if ( p0 instanceof CharSequence[] )
          {
            v14 = new org.json.JSONArray();
            v15 = (CharSequence[])p0;
            v16 = v15.length;
            while ( v2 < v16 )
              v14.put(this.a(v15[v2++]));
            return v14;
          }
          else if ( p0 instanceof double[] )
          {
            v17 = new org.json.JSONArray();
            v18 = (double[])p0;
            v19 = v18.length;
            while ( v2 < v19 )
              v17.put(this.a(Double.valueOf(v18[v2++])));
            return v17;
          }
          else if ( p0 instanceof float[] )
          {
            v20 = new org.json.JSONArray();
            v21 = (float[])p0;
            v22 = v21.length;
            while ( v2 < v22 )
              v20.put(this.a(Float.valueOf(v21[v2++])));
            return v20;
          }
          else if ( p0 instanceof int[] )
          {
            v23 = new org.json.JSONArray();
            v24 = (int[])p0;
            v25 = v24.length;
            while ( v2 < v25 )
              v23.put(this.a(Integer.valueOf(v24[v2++])));
            return v23;
          }
          else if ( p0 instanceof long[] )
          {
            v26 = new org.json.JSONArray();
            v27 = (long[])p0;
            v28 = v27.length;
            while ( v2 < v28 )
              v26.put(this.a(Long.valueOf(v27[v2++])));
            return v26;
          }
          else if ( p0 instanceof short[] )
          {
            v29 = new org.json.JSONArray();
            v30 = (short[])p0;
            v31 = v30.length;
            while ( v2 < v31 )
              v29.put(this.a(Short.valueOf(v30[v2++])));
            return v29;
          }
          else if ( p0 instanceof String[] )
          {
            v32 = new org.json.JSONArray();
            v33 = (String[])p0;
            v34 = v33.length;
            while ( v2 < v34 )
              v32.put(this.a(v33[v2++]));
            return v32;
          }
          else
          {
            return null;
          }
        }
      }
      return p0;
    }

    private org.json.JSONObject a(android.os.Bundle p0) throws org.json.JSONException
    {
      org.json.JSONObject v2;
      java.util.Iterator v3;
      String v4;
      v2 = new org.json.JSONObject();
      v3 = p0.keySet().iterator();
      while ( v3.hasNext() )
      {
        v4 = (String)v3.next();
        v2.put(v4, this.a(p0.get(v4)));
      }
      return v2;
    }

    private android.os.Bundle b()
    {
      return this.j;
    }

    private bolts.AppLinkNavigation$NavigationResult b(android.content.Context p0)
    {
      android.content.pm.PackageManager PackageManager = null;
      android.os.Bundle v3 = null;
      android.os.Bundle v4;
      String PackageName; // RETVAL
      android.content.pm.ApplicationInfo ApplicationInfo; // RETVAL
      String String; // RETVAL
      java.util.Iterator v8;
      bolts.e v9;
      android.content.Intent v10;
      android.content.Intent v11 = null;
      bolts.AppLinkNavigation$NavigationResult v12;
      android.content.Intent v13 = null;
      bolts.AppLinkNavigation$NavigationResult v14 = null;
      android.net.Uri v16; // RETVAL
      android.net.Uri v17;
      org.json.JSONObject v18; // RETVAL
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            PackageManager = p0.getPackageManager();
            v3 = new android.os.Bundle();
            v4 = new android.os.Bundle();
            if ( p0 != null )
            {
            PackageName = p0.getPackageName();
            if ( PackageName != null )
            v4.putString("package", PackageName);
            ApplicationInfo = p0.getApplicationInfo();
            if ( ApplicationInfo != null )
            {
            String = p0.getString(ApplicationInfo.labelRes);
            if ( String != null )
            v4.putString("app_name", String);
            }
            }
            v3.putAll(this.j);
            v3.putString("target_url", this.h.a().toString());
            v3.putString("version", "1.0");
            v3.putString("user_agent", "Bolts Android 1.1.2");
            v3.putBundle("referer_app_link", v4);
            v3.putBundle("extras", this.i);
            v8 = this.h.b().iterator();
            while ( v8.hasNext() )
            {
            v9 = (bolts.e)v8.next();
            v10 = new android.content.Intent("android.intent.action.VIEW");
            if ( v9.a() != null )
            v10.setData(v9.a());
            else
            v10.setData(this.h.a());
            v10.setPackage(v9.c());
            if ( v9.b() != null )
            v10.setClassName(v9.c(), v9.b());
            v10.putExtra("al_applink_data", v3);
            if ( PackageManager.resolveActivity(v10, 0x10000) != null )
            {
            v11 = v10;
            { _pc = 1; continue _sm; }
            }
            }
            v11 = null;
            _pc = 1;
            continue _sm;
          }
          case 1: {
            v12 = AppLinkNavigation$NavigationResult.a;
            if ( v11 != null )
            {
            v13 = v11;
            v14 = AppLinkNavigation$NavigationResult.c;
            { _pc = 2; continue _sm; }
            }
            v16 = this.h.c();
            v17 = v16;
            if ( v16 != null )
            {
            try
            {
            v18 = this.a(v3);
            }
            catch ( org.json.JSONException v19 )
            {
            sendAppLinkNavigateEventBroadcast(p0, null, AppLinkNavigation$NavigationResult.a, v19);
            throw new RuntimeException(v19);
            }
            v13 = new android.content.Intent("android.intent.action.VIEW", v17.buildUpon().appendQueryParameter("al_applink_data", v18.toString()).build());
            v14 = AppLinkNavigation$NavigationResult.b;
            { _pc = 2; continue _sm; }
            }
            v14 = v12;
            v13 = null;
            _pc = 2;
            continue _sm;
          }
          case 2: {
            sendAppLinkNavigateEventBroadcast(p0, v13, v14, null);
            if ( v13 != null )
            p0.startActivity(v13);
            return v14;
            
          }
          default: throw new IllegalStateException("Unreachable");
        }
      }
    }

    private android.os.Bundle c()
    {
      return this.i;
    }

    public static bolts.g getDefaultResolver()
    {
      return g;
    }

    private static bolts.g getResolver(android.content.Context p0)
    {
      if ( getDefaultResolver() != null )
        return getDefaultResolver();
      else
        return (bolts.g)new bolts.WebViewAppLinkResolver(p0);
    }

    public static bolts.AppLinkNavigation$NavigationResult navigate(
            android.content.Context p0,
            bolts.d p1)
    {
      return new bolts.AppLinkNavigation(p1, null, null).b(p0);
    }

    public static bolts.Task<bolts.AppLinkNavigation$NavigationResult> navigateInBackground(
            android.content.Context p0,
            android.net.Uri p1)
    {
      return navigateInBackground(p0, p1, getResolver(p0));
    }

    public static bolts.Task<bolts.AppLinkNavigation$NavigationResult> navigateInBackground(
            android.content.Context p0,
            android.net.Uri p1,
            bolts.g p2)
    {
      return p2.getAppLinkFromUrlInBackground(p1).a((bolts.l)new bolts.f(p0), Task.b);
    }

    public static bolts.Task<bolts.AppLinkNavigation$NavigationResult> navigateInBackground(
            android.content.Context p0,
            String p1)
    {
      return navigateInBackground(p0, p1, getResolver(p0));
    }

    public static bolts.Task<bolts.AppLinkNavigation$NavigationResult> navigateInBackground(
            android.content.Context p0,
            String p1,
            bolts.g p2)
    {
      return navigateInBackground(p0, Uri.parse(p1), p2);
    }

    public static bolts.Task<bolts.AppLinkNavigation$NavigationResult> navigateInBackground(
            android.content.Context p0,
            java.net.URL p1)
    {
      return navigateInBackground(p0, p1, getResolver(p0));
    }

    public static bolts.Task<bolts.AppLinkNavigation$NavigationResult> navigateInBackground(
            android.content.Context p0,
            java.net.URL p1,
            bolts.g p2)
    {
      return navigateInBackground(p0, Uri.parse(p1.toString()), p2);
    }

    private static void sendAppLinkNavigateEventBroadcast(
            android.content.Context p0,
            android.content.Intent p1,
            bolts.AppLinkNavigation$NavigationResult p2,
            org.json.JSONException p3)
    {
      java.util.Map v4;
      String v5;
      v4 = new java.util.HashMap();
      if ( p3 != null )
        v4.put("error", p3.getLocalizedMessage());
      if ( p2.b() )
        v5 = "1";
      else
        v5 = "0";
      v4.put("success", v5);
      v4.put("type", p2.a());
      MeasurementEvent.sendBroadcastEvent(p0, "al_nav_out", p1, v4);
    }

    public static void setDefaultResolver(bolts.g p0)
    {
      g = p0;
    }

}
