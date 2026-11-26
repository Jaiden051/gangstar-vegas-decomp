// Decompiled from classes.dex (SourceFile: n.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import com.google.android.gms.internal.it;
import org.json.JSONObject;
class n {
    // Fields
    private static volatile com.amazon.device.associates.n$a a;
    private static final java.lang.StringBuilder b;

    // Methods
    static
    {
      a = null;
      b = new StringBuilder();
    }

    n()
    {
      super();
    }

    public static com.amazon.device.associates.br a(String p0)
    {
      com.amazon.device.associates.n$a v1;
      com.amazon.device.associates.n$a v2;
      com.amazon.device.associates.n$2 v3;
      com.amazon.device.associates.n$a v4;
      Object[] v8;
      v1 = a;
      if ( v1 == null || p0 == null )
        return null;
      v2 = a;
      if ( v2.a(p0) == null )
      {
        try
        {
          v3 = new com.amazon.device.associates.n$2(p0);
          v3.execute(new Void[0]);
          v3.get();
        }
        catch ( Exception v7 )
        {
          v8 = new Object[1];
          v8[0] = v7;
          p.b("PopoverCacheManager", "Fetching Product info from Service for " + p0 + " failed", v8);
          v7.printStackTrace();
        }
      }
      v4 = a;
      return v4.a(p0);
    }

    /* synthetic */ static com.amazon.device.associates.n$a a()
    {
      return a;
    }

    private static String a(java.util.List<String> p0)
    {
      java.util.Iterator i;
      b.setLength(0);
      for ( i = p0.iterator(); i.hasNext(); b.append((String)i.next()).append(",") )
        ;
      if ( b.length() <= 1 )
        return "";
      else
        return b.substring(0, b.length() - 1);
    }

    /* synthetic */ static void a(android.content.Context p0, String[] p1)
    {
      b(p0, p1);
    }

    private static void a(com.amazon.device.associates.n$a p0, String p1)
 throws org.json.JSONException {
      org.json.JSONArray JSONArray;
      int i;
      org.json.JSONObject JSONObject;
      if ( p1.length() >= 12 )
      {
        JSONArray = new org.json.JSONObject(p1.substring(12)).getJSONArray("results");
        for ( i = 0; i < JSONArray.length(); ++i )
        {
          JSONObject = JSONArray.getJSONObject(i);
          p0.a(JSONObject.getString("ASIN"), new com.amazon.device.associates.br(JSONObject.getString("ASIN"), JSONObject.getString("LargeImageUrl"), JSONObject.getString("Title"), JSONObject.getString("Price"), JSONObject.getString("Rating"), JSONObject.getString("TotalReviews"), JSONObject.getString("DetailPageURL"), JSONObject.getString("category")));
        }
      }
    }

    private static void a(String p0, com.amazon.device.associates.n$a p1)
 throws java.io.FileNotFoundException, java.io.IOException {
      java.io.File v2;
      java.io.ObjectOutputStream v3;
      v2 = new java.io.File(p0);
      if ( v2.exists() )
        v2.delete();
      v3 = new java.io.ObjectOutputStream(new java.io.FileOutputStream(v2));
      try
      {
        v3.writeObject(p1);
      }
      finally
      {
        v3.close();
      }
    }

    public static void a(String[] p0)
    {
      new com.amazon.device.associates.n$1(p0).execute(new Void[0]);
    }

    /* synthetic */ static boolean a(com.amazon.device.associates.n$a p0, String[] p1)
    {
      return b(p0, p1);
    }

    private static com.amazon.device.associates.n$a b(String p0)
 throws java.io.FileNotFoundException, java.io.IOException, ClassNotFoundException {
      java.io.File v1;
      java.io.ObjectInputStream v2;
      com.amazon.device.associates.n$a v3;
      v1 = new java.io.File(p0);
      if ( !v1.exists() )
      {
        p.c("PopoverCacheManager", "Cache file not found, creating object manually.");
        return new com.amazon.device.associates.n$a(null);
      }
      p.c("PopoverCacheManager", "Reading cache file....");
      v2 = new java.io.ObjectInputStream(new java.io.FileInputStream(v1));
      try
      {
        v3 = (com.amazon.device.associates.n$a)v2.readObject();
      }
      finally
      {
        v2.close();
      }
      if ( v3 == null )
        return new com.amazon.device.associates.n$a(null);
      return v3;
    }

    private static void b(android.content.Context p0, String[] p1)
    {
      String[] v2;
      StringBuilder v3;
      String v4;
      String v5; // RETVAL
      String v6;
      com.amazon.device.associates.n$a v7;
      com.amazon.device.associates.n$a v9;
      Object[] v11;
      java.io.File v12;
      com.amazon.device.associates.n$a v13;
      com.amazon.device.associates.n$a v15;
      if ( p1 != null && p1.length > 20 )
      {
        p.d(
          "PopoverCacheManager",
          "The asin list for prefetching has exceeded limit. " + p1.length + ", trimming it down to first 20. ");
        v2 = new String[20];
        System.arraycopy(p1, 0, v2, 0, 20);
        p1 = v2;
      }
      v3 = new StringBuilder();
      if ( p0.getCacheDir() != null )
        v4 = p0.getCacheDir().getAbsolutePath() + "/";
      else
        v4 = "/";
      v5 = v3.append(v4).append("POD.db").toString();
      v6 = v5;
      try
      {
        try
        {
          v7 = b(v5);
          if ( v7.a() || b(v7, p1) )
            a(v6, v7);
          a = v7;
          v9 = a;
          if ( v9 == null )
          {
            p.a("PopoverCacheManager", "Failed to initialize cache, so constructing it using default constructor");
            a = new com.amazon.device.associates.n$a(null);
          }
          return;
        }
        catch ( Exception v10 )
        {
          v11 = new Object[1];
          v11[0] = v10;
          p.a("PopoverCacheManager", "Error initializing cache manager", v11);
          p.c("PopoverCacheManager", "As cache file must have been corrupted, deleting it.");
          v12 = new java.io.File(v5);
          if ( v12.exists() )
            v12.delete();
        }
      }
      catch ( Throwable v14 )
      {
        v15 = a;
        if ( v15 == null )
        {
          p.a("PopoverCacheManager", "Failed to initialize cache, so constructing it using default constructor");
          a = new com.amazon.device.associates.n$a(null);
        }
        throw v14;
      }
      v13 = a;
      if ( v13 == null )
      {
        p.a("PopoverCacheManager", "Failed to initialize cache, so constructing it using default constructor");
        a = new com.amazon.device.associates.n$a(null);
      }
      return;
    }

    private static boolean b(com.amazon.device.associates.n$a p0, String[] p1)
    {
      java.util.List v2;
      int v3;
      int i;
      Object v5;
      boolean v6;
      int j;
      int v8;
      java.util.List v9;
      com.amazon.device.associates.aq v10;
      String v12; // RETVAL
      Object[] v13;
      v2 = new java.util.ArrayList(p1.length);
      v3 = p1.length;
      for ( i = 0; i < v3; ++i )
      {
        v5 = p1[i];
        if ( v5 != null && !((String)v5).trim().equals("") && p0.a((String)v5) == null )
          v2.add(v5);
      }
      if ( v2.size() <= 0 )
        return false;
      p.c("PopoverCacheManager", "Quering service to get popover data for: " + v2);
      v6 = false;
      for ( j = 0; j < v2.size(); j += 5 )
      {
        if ( j + 5 >= v2.size() )
          v8 = v2.size();
        else
          v8 = j + 5;
        v9 = v2.subList(j, v8);
        v10 = new com.amazon.device.associates.aq("http://ws-na.amazon-adsystem.com/widgets/q");
        v10.a("TemplateId", "MobileAssociates");
        v10.a("ServiceVersion", "20070822");
        v10.a("MarketPlace", "US");
        v10.a("Operation", "GetDetails");
        v10.a("InstanceId", "1367560449185");
        v10.a("ItemId", a(v9));
        try
        {
          v10.a(s.a);
          if ( v10.b() == 200 )
          {
            a(p0, v10.a());
            v6 = true;
            continue;
          }
          p.a("PopoverCacheManager", "Widget Server didn't return data, error code: " + v10.b());
        }
        catch ( Exception v11 )
        {
          v12 = "Error loading Popover Preview data for " + v9;
          v13 = new Object[1];
          v13[0] = v11;
          p.b("PopoverCacheManager", v12, v13);
        }
      }
      n$a.a(p0, new java.util.Date());
      return v6;
    }

}
