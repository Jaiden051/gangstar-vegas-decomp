// Decompiled from classes.dex (SourceFile: DataSharingGangstar.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import android.net.Uri;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.Encrypter;
public class DataSharingGangstar {
    // Fields
    private static java.util.ArrayList a;
    private static android.content.Context b;

    // Methods
    static
    {
      a = new java.util.ArrayList();
      b = null;
    }

    public DataSharingGangstar()
    {
      super();
    }

    public static void AddOrUpdate(android.net.Uri p0, String p1, String p2)
    {
      String v3;
      android.content.ContentValues v4;
      v3 = Encrypter.crypt(p2);
      v4 = new android.content.ContentValues();
      v4.put("value", v3);
      try
      {
        if ( b.getContentResolver().update(p0, v4, "key='" + p1 + "'", null) <= 0 )
        {
          v4.put("key", p1);
          v4.put("value", v3);
          b.getContentResolver().insert(p0, v4);
        }
      }
      catch ( Exception e )
      {
      }
    }

    public static void deleteSharedValue(String p0)
    {
      int v1;
      int i;
      android.net.Uri v3;
      v1 = a.size();
      for ( i = 0; i < v1; ++i )
      {
        v3 = Uri.parse("content://" + (String)a.get(i) + "/key/");
        try
        {
          b.getContentResolver().delete(v3, "key='" + p0 + "'", null);
          continue;
        }
        catch ( Exception e )
        {
        }
      }
    }

    public static void doNativeInit()
    {
      nativeInit();
    }

    public static android.content.Context getContext()
    {
      return b;
    }

    public static String getSharedValue(String p0)
    {
      String[] v1 = null;
      String v2 = null;
      android.net.Uri v3 = null;
      android.database.Cursor v4 = null; // RETVAL
      android.database.Cursor v5 = null;
      String String = null; // RETVAL
      String i = null;
      String v9 = null;
      int v10 = 0;
      int v11 = 0;
      String v12 = null;
      android.net.Uri v13 = null;
      android.database.Cursor v14 = null; // RETVAL
      android.database.Cursor v15 = null;
      String v16 = null; // RETVAL
      String v17 = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v1 = new String[2];
            v1[0] = "key";
            v1[1] = "value";
            v2 = "content://" + b.getPackageName() + ".KeyProviderGangstar/key/";
            v3 = Uri.parse(v2);
            try
            {
            v4 = b.getContentResolver().query(v3, v1, "key='" + p0 + "'", null, "value ASC ");
            v5 = v4;
            if ( v4 != null )
            {
            if ( v4.moveToFirst() )
            {
            String = v5.getString(v5.getColumnIndex("value"));
            v5.close();
            return Encrypter.decrypt(String).trim();
            }
            v5.close();
            }
            v9 = "";
            }
            catch ( Exception e )
            {
            v9 = "";
            }
            
            v10 = a.size();
            v11 = 0;
            i = v9;
            _pc = 1;
            continue _sm;
          case 1:
            if ( v11 >= v10 )
            return i;
            v12 = "content://" + (String)a.get(v11) + "/key/";
            v13 = Uri.parse(v12);
            try
            {
            v14 = b.getContentResolver().query(v13, v1, "key='" + p0 + "'", null, "value ASC ");
            v15 = v14;
            if ( v14 == null || !v14.moveToFirst() )
            {
            v17 = i;
            { _pc = 2; continue _sm; }
            }
            v16 = v15.getString(v15.getColumnIndex("value"));
            v17 = v16;
            try
            {
            v15.close();
            i = Encrypter.decrypt(v16).trim();
            AddOrUpdate(v3, p0, v17);
            }
            catch ( Exception e )
            {
            { _pc = 2; continue _sm; }
            }
            return i;
            }
            catch ( Exception e )
            {
            v17 = i;
            }
            
            _pc = 2;
            continue _sm;
          case 2:
            ++v11;
            _pc = 3;
            continue _sm;
          case 3:
            i = v17;
            _pc = 1;
            continue _sm;
        }
      }
}

    public static void init(android.content.Context p0)
    {
      java.util.List ContentProviders;
      int i;
      String authority;
      b = p0;
      p0.getPackageManager().checkPermission("glshare.permission.ACCESS_SHARED_DATA", "com.gameloft.android.GAND.GloftGGSS");
      ContentProviders = b.getPackageManager().queryContentProviders(null, 0, 0);
      for ( i = 0; i < ContentProviders.size(); ++i )
      {
        authority = ((android.content.pm.ProviderInfo)ContentProviders.get(i)).authority;
        if ( authority.startsWith("com.gameloft") )
          a.add(authority);
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
      int i;
      v2 = a.size();
      for ( i = 0; i < v2; ++i )
        AddOrUpdate(Uri.parse("content://" + (String)a.get(i) + "/key/"), p0, p1);
    }

}
