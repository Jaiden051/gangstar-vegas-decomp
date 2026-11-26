// Decompiled from classes.dex (SourceFile: DataSharing.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import android.net.Uri;
import android.text.TextUtils;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.SUtils;
public class DataSharing {
    // Fields
    private static java.util.ArrayList a;
    private static android.content.Context b;
    private static java.util.HashMap c;
    private static java.util.HashMap d;

    // Methods
    static
    {
      a = new java.util.ArrayList();
      b = null;
      c = new java.util.HashMap();
      d = new java.util.HashMap();
    }

    public DataSharing()
    {
      super();
    }

    public static void AddOrUpdate(android.net.Uri p0, String p1, String p2)
    {
      android.content.ContentValues v3;
      v3 = new android.content.ContentValues();
      v3.put("value", p2);
      try
      {
        if ( b.getContentResolver().update(p0, v3, "key='" + p1 + "'", null) <= 0 )
        {
          v3.put("key", p1);
          v3.put("value", p2);
          b.getContentResolver().insert(p0, v3);
        }
      }
      catch ( Exception e )
      {
      }
    }

    /* synthetic */ static java.util.ArrayList access$000()
    {
      return a;
    }

    /* synthetic */ static android.content.Context access$100()
    {
      return b;
    }

    public static void deleteSharedValue(String p0)
    {
      if ( c.containsKey(p0) || d.containsKey(p0) )
      {
        d.remove(p0);
        c.remove(p0);
        new com.gameloft.android.GAND.GloftGGSS.f(p0).start();
      }
    }

    public static void doNativeInit()
    {
      nativeInit();
    }

    private static void fillDBArray(android.net.Uri p0, boolean p1)
    {
      String[] v2;
      android.database.Cursor v3; // RETVAL
      android.database.Cursor v4;
      int i;
      v2 = new String[2];
      v2[0] = "key";
      v2[1] = "value";
      try
      {
        v3 = SUtils.getContext().getContentResolver().query(p0, v2, null, null, null);
        v4 = v3;
        if ( v3 != null )
        {
          v3.moveToFirst();
          for ( i = 0; i < v4.getCount(); ++i )
          {
            if ( p1 )
              d.put(v4.getString(0), v4.getString(1));
            else
              c.put(v4.getString(0), v4.getString(1));
            if ( !v4.isLast() )
              v4.moveToNext();
          }
          v4.close();
        }
      }
      catch ( Exception e )
      {
      }
    }

    public static android.content.Context getContext()
    {
      return b;
    }

    public static String getSharedValue(String p0)
    {
      CharSequence v1;
      if ( d.containsKey(p0) )
      {
        v1 = (String)d.get(p0);
        if ( TextUtils.isEmpty(v1) )
          return "";
      }
      else if ( c.containsKey(p0) )
      {
        v1 = (String)c.get(p0);
        if ( TextUtils.isEmpty(v1) )
          v1 = "";
        d.put(p0, v1);
        new com.gameloft.android.GAND.GloftGGSS.d(p0, (String)v1).start();
      }
      else
      {
        return "";
      }
      return (String)v1;
    }

    public static void init(android.content.Context p0)
    {
      java.util.List ContentProviders;
      int i;
      String authority;
      int j;
      android.net.Uri v5;
      if ( b == null )
      {
        b = p0;
        p0.getPackageManager().checkPermission("glshare.permission.ACCESS_SHARED_DATA", "com.gameloft.android.GAND.GloftGGSS");
        ContentProviders = b.getPackageManager().queryContentProviders(null, 0, 0);
        for ( i = 0; i < ContentProviders.size(); ++i )
        {
          authority = ((android.content.pm.ProviderInfo)ContentProviders.get(i)).authority;
          if ( authority.startsWith("com.gameloft") )
            a.add(authority);
        }
        for ( j = 0; j < a.size(); ++j )
        {
          v5 = Uri.parse("content://" + (String)a.get(j) + "/key/");
          if ( ((String)a.get(j)).contains(b.getPackageName()) )
            fillDBArray(v5, true);
          else
            fillDBArray(v5, false);
        }
      }
    }

    public static boolean isSharedValue(String p0)
    {
      String SharedValue; // RETVAL
    
      SharedValue = getSharedValue(p0);
      return SharedValue != null && !SharedValue.equals("");
    }

    public static native void nativeInit();

    public static void setSharedValue(String p0, String p1)
    {
      int v2;
      boolean v3;
      v2 = 0;
      v3 = c.containsKey(p0) && ((String)c.get(p0)).equals(p1);
      if ( d.containsKey(p0) && ((String)d.get(p0)).equals(p1) )
        v2 = 1;
      if ( v2 == 0 || !v3 )
      {
        d.put(p0, p1);
        c.put(p0, p1);
        new com.gameloft.android.GAND.GloftGGSS.e(p0, p1).start();
      }
    }

}
