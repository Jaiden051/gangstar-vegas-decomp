// Decompiled from classes.dex (SourceFile: RequestParams.java) via IDA Pro 9.5 Dalvik Decompiler
package com.loopj.android.http;

import org.apache.http.client.utils.URLEncodedUtils;
public class RequestParams {
    // Fields
    private static java.lang.String d;
    protected java.util.concurrent.ConcurrentHashMap a;
    protected java.util.concurrent.ConcurrentHashMap b;
    protected java.util.concurrent.ConcurrentHashMap c;

    // Methods
    static
    {
      d = "UTF-8";
    }

    public RequestParams()
    {
      super();
      this.c();
    }

    private RequestParams(String p0, String p1)
    {
      super();
      this.c();
      this.a(p0, p1);
    }

    private RequestParams(java.util.Map<String, String> p0)
    {
      super();
      java.util.Iterator v2;
      java.util.Map.Entry v3;
      this.c();
      v2 = p0.entrySet().iterator();
      while ( v2.hasNext() )
      {
        v3 = (java.util.Map.Entry)v2.next();
        this.a((String)v3.getKey(), (String)v3.getValue());
      }
    
    }

    private RequestParams(Object[] p0)
    {
      super();
      int v2;
      int i;
      this.c();
      v2 = p0.length;
      if ( v2 % 2 != 0 )
        throw new IllegalArgumentException("Supplied arguments must be even");
      for ( i = 0; i < v2; i += 2 )
        this.a(String.valueOf(p0[i]), String.valueOf(p0[i + 1]));
    
    }

    private void a(String p0)
    {
      this.a.remove(p0);
      this.b.remove(p0);
      this.c.remove(p0);
    }

    private void a(String p0, java.io.File p1)
 throws java.io.FileNotFoundException {
      this.a(p0, new java.io.FileInputStream(p1), p1.getName());
    }

    private void a(String p0, java.io.InputStream p1)
    {
      this.a(p0, p1, null);
    }

    private void a(String p0, java.io.InputStream p1, String p2)
    {
      if ( p0 != null && p1 != null )
        this.b.put(p0, new com.loopj.android.http.f(p1, p2, null));
    }

    private void a(String p0, java.io.InputStream p1, String p2, String p3)
    {
      if ( p0 != null && p1 != null )
        this.b.put(p0, new com.loopj.android.http.f(p1, p2, null));
    }

    private void a(String p0, String p1)
    {
      if ( p0 != null && p1 != null )
        this.a.put(p0, p1);
    }

    private void a(String p0, java.util.ArrayList<String> p1)
    {
      if ( p0 != null && p1 != null )
        this.c.put(p0, p1);
    }

    private void c()
    {
      this.a = new java.util.concurrent.ConcurrentHashMap();
      this.b = new java.util.concurrent.ConcurrentHashMap();
      this.c = new java.util.concurrent.ConcurrentHashMap();
    }

    private java.util.List<org.apache.http.message.BasicNameValuePair> d()
    {
      java.util.List v1;
      java.util.Iterator v2;
      java.util.Map.Entry v3;
      java.util.Iterator v4;
      java.util.Map.Entry v5;
      java.util.Iterator i;
      v1 = new java.util.LinkedList();
      v2 = this.a.entrySet().iterator();
      while ( v2.hasNext() )
      {
        v3 = (java.util.Map.Entry)v2.next();
        v1.add(new org.apache.http.message.BasicNameValuePair((String)v3.getKey(), (String)v3.getValue()));
      }
      v4 = this.c.entrySet().iterator();
      while ( v4.hasNext() )
      {
        v5 = (java.util.Map.Entry)v4.next();
        for ( i = ((java.util.ArrayList)v5.getValue()).iterator();
              i.hasNext();
              v1.add(new org.apache.http.message.BasicNameValuePair((String)v5.getKey(), (String)i.next())) )
        {
          ;
        }
      }
      return v1;
    }

    public final org.apache.http.HttpEntity a()
    {
      com.loopj.android.http.SimpleMultipartEntity v2;
      java.util.Iterator v3;
      java.util.Map.Entry v4;
      int v5;
      java.util.Iterator v6;
      int v7;
      java.util.Map.Entry v8;
      com.loopj.android.http.f v9;
      boolean v10;
      java.util.Iterator v11;
      java.util.Map.Entry v12;
      java.util.Iterator i;
      if ( this.b.isEmpty() )
      {
        try
        {
          return new org.apache.http.client.entity.UrlEncodedFormEntity(this.d(), d);
        }
        catch ( java.io.UnsupportedEncodingException v15 )
        {
          v15.printStackTrace();
          return null;
        }
      }
      else
      {
        v2 = new com.loopj.android.http.SimpleMultipartEntity();
        v3 = this.a.entrySet().iterator();
        while ( v3.hasNext() )
        {
          v4 = (java.util.Map.Entry)v3.next();
          v2.a((String)v4.getKey(), (String)v4.getValue());
        }
        v5 = this.b.entrySet().size() - 1;
        v6 = this.b.entrySet().iterator();
        v7 = 0;
        while ( v6.hasNext() )
        {
          v8 = (java.util.Map.Entry)v6.next();
          v9 = (com.loopj.android.http.f)v8.getValue();
          if ( v9.a != null )
          {
            v10 = v7 == v5;
            if ( v9.c != null )
              v2.a((String)v8.getKey(), v9.a(), v9.a, v9.c, v10);
            else
              v2.a((String)v8.getKey(), v9.a(), v9.a, v10);
          }
          ++v7;
        }
        v11 = this.c.entrySet().iterator();
        while ( v11.hasNext() )
        {
          v12 = (java.util.Map.Entry)v11.next();
          for ( i = ((java.util.ArrayList)v12.getValue()).iterator(); i.hasNext(); v2.a((String)v12.getKey(), (String)i.next()) )
            ;
        }
      }
      return (org.apache.http.HttpEntity)v2;
    }

    protected final String b()
    {
      return URLEncodedUtils.format(this.d(), d);
    }

    public String toString()
    {
      StringBuilder v1;
      java.util.Iterator v2;
      java.util.Map.Entry v3;
      java.util.Iterator v4;
      java.util.Map.Entry v5;
      java.util.Iterator v6;
      java.util.Map.Entry v7;
      java.util.ArrayList v8;
      java.util.Iterator v9;
      String v10;
      v1 = new StringBuilder();
      v2 = this.a.entrySet().iterator();
      while ( v2.hasNext() )
      {
        v3 = (java.util.Map.Entry)v2.next();
        if ( v1.length() > 0 )
          v1.append("&");
        v1.append((String)v3.getKey());
        v1.append("=");
        v1.append((String)v3.getValue());
      }
      v4 = this.b.entrySet().iterator();
      while ( v4.hasNext() )
      {
        v5 = (java.util.Map.Entry)v4.next();
        if ( v1.length() > 0 )
          v1.append("&");
        v1.append((String)v5.getKey());
        v1.append("=");
        v1.append("FILE");
      }
      v6 = this.c.entrySet().iterator();
      while ( v6.hasNext() )
      {
        v7 = (java.util.Map.Entry)v6.next();
        if ( v1.length() > 0 )
          v1.append("&");
        v8 = (java.util.ArrayList)v7.getValue();
        v9 = v8.iterator();
        while ( v9.hasNext() )
        {
          v10 = (String)v9.next();
          if ( v8.indexOf(v10) != 0 )
            v1.append("&");
          v1.append((String)v7.getKey());
          v1.append("=");
          v1.append(v10);
        }
      }
      return v1.toString();
    }

}
