// Decompiled from classes.dex (SourceFile: l.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

import android.util.Log;
import java.util.Collections;
public class l implements com.google.android.gms.wearable.DataItem {
    // Fields
    private android.net.Uri a;
    private byte[] b;
    private java.util.Map c;

    // Methods
    public l(com.google.android.gms.wearable.DataItem p0)
    {
      super();
      java.util.HashMap v2;
      java.util.Iterator v3;
      java.util.Map.Entry v4;
      this.a = p0.a();
      this.b = p0.b();
      v2 = new java.util.HashMap();
      v3 = p0.c().entrySet().iterator();
      while ( v3.hasNext() )
      {
        v4 = (java.util.Map.Entry)v3.next();
        if ( v4.getKey() != null )
          v2.put(v4.getKey(), ((com.google.android.gms.wearable.DataItemAsset)v4.getValue()).h());
      }
      this.c = Collections.unmodifiableMap(v2);
    
    }

    private String a(boolean p0)
    {
      StringBuilder v2;
      StringBuilder v3;
      Object v4;
      java.util.Iterator v7;
      String v8;
      v2 = new StringBuilder("DataItemEntity[");
      v2.append("@");
      v2.append(Integer.toHexString(this.hashCode()));
      v3 = new StringBuilder(",dataSz=");
      if ( this.b != null )
        v4 = Integer.valueOf(this.b.length);
      else
        v4 = "null";
      v2.append(v3.append(v4).toString());
      v2.append(", numAssets=" + this.c.size());
      v2.append(", uri=" + this.a);
      if ( p0 )
      {
        v2.append("]\n  assets: ");
        v7 = this.c.keySet().iterator();
        while ( v7.hasNext() )
        {
          v8 = (String)v7.next();
          v2.append("\n    " + v8 + ": " + this.c.get(v8));
        }
        v2.append("\n  ]");
        return v2.toString();
      }
      else
      {
        v2.append("]");
        return v2.toString();
      }
    }

    private com.google.android.gms.wearable.DataItem d()
    {
      return (com.google.android.gms.wearable.DataItem)this;
    }

    public final android.net.Uri a()
    {
      return this.a;
    }

    public final com.google.android.gms.wearable.DataItem a(byte[] p0)
    {
      throw new UnsupportedOperationException();
    }

    public final byte[] b()
    {
      return this.b;
    }

    public final java.util.Map<String, com.google.android.gms.wearable.DataItemAsset> c()
    {
      return this.c;
    }

    /* synthetic */ public final Object h()
    {
      return this;
    }

    public final boolean i_()
    {
      return true;
    }

    public String toString()
    {
      boolean isLoggable;
      StringBuilder v2;
      StringBuilder v3;
      Object v4;
      java.util.Iterator v7;
      String v8;
      isLoggable = Log.isLoggable("DataItem", 3);
      v2 = new StringBuilder("DataItemEntity[");
      v2.append("@");
      v2.append(Integer.toHexString(this.hashCode()));
      v3 = new StringBuilder(",dataSz=");
      if ( this.b != null )
        v4 = Integer.valueOf(this.b.length);
      else
        v4 = "null";
      v2.append(v3.append(v4).toString());
      v2.append(", numAssets=" + this.c.size());
      v2.append(", uri=" + this.a);
      if ( isLoggable )
      {
        v2.append("]\n  assets: ");
        v7 = this.c.keySet().iterator();
        while ( v7.hasNext() )
        {
          v8 = (String)v7.next();
          v2.append("\n    " + v8 + ": " + this.c.get(v8));
        }
        v2.append("\n  ]");
        return v2.toString();
      }
      else
      {
        v2.append("]");
        return v2.toString();
      }
    }

}
