// Decompiled from classes.dex (SourceFile: k.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.metadata.internal;

import com.google.android.gms.common.data.DataHolder;
import java.util.Collections;
public class k extends com.google.android.gms.drive.metadata.b {
    // Methods
    public k(String p0, int p1)
    {
      super(p0, 4300000);
    }

    private void a(android.os.Bundle p0, java.util.Collection<String> p1)
    {
      p0.putStringArrayList(this.a(), new java.util.ArrayList(p1));
    }

    public static final java.util.Collection<String> aO(String p0)
 throws org.json.JSONException {
      java.util.Collection v3;
      org.json.JSONArray v4;
      int i;
      if ( p0 == null )
        return null;
      v3 = new java.util.ArrayList();
      v4 = new org.json.JSONArray(p0);
      for ( i = 0; i < v4.length(); ++i )
        v3.add(v4.getString(i));
      return Collections.unmodifiableCollection(v3);
    }

    private java.util.Collection<String> c(android.os.Bundle p0)
    {
      return p0.getStringArrayList(this.a());
    }

    /* synthetic */ protected final void a(android.os.Bundle p0, Object p1)
    {
      p0.putStringArrayList(this.a(), new java.util.ArrayList((java.util.Collection)p1));
    }

    /* synthetic */ protected final Object b(android.os.Bundle p0)
    {
      return p0.getStringArrayList(this.a());
    }

    /* synthetic */ protected final Object b(com.google.android.gms.common.data.DataHolder p0, int p1, int p2)
    {
      return this.c(p0, p1, p2);
    }

    protected final java.util.Collection<String> c(com.google.android.gms.common.data.DataHolder p0, int p1, int p2)
    {
      try
      {
        return aO(p0.c(this.a(), p1, p2));
      }
      catch ( org.json.JSONException v5 )
      {
        throw new IllegalStateException("DataHolder supplied invalid JSON", v5);
      }
    }

}
