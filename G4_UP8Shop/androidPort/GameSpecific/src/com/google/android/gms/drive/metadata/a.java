// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.metadata;

import com.google.android.gms.internal.hn;
import java.util.Collections;
public abstract class a<T> implements com.google.android.gms.drive.metadata.MetadataField<T> {
    // Fields
    private final java.lang.String a;
    private final java.util.Set b;
    private final java.util.Set c;
    private final int d;

    // Methods
    protected a(String p0, int p1)
    {
      super();
      this.a = (String)hn.b(p0, "fieldName");
      this.b = Collections.singleton(p0);
      this.c = Collections.emptySet();
      this.d = p1;
    }

    protected a(String p0, java.util.Collection<String> p1, java.util.Collection<String> p2, int p3)
    {
      super();
      this.a = (String)hn.b(p0, "fieldName");
      this.b = Collections.unmodifiableSet(new java.util.HashSet(p1));
      this.c = Collections.unmodifiableSet(new java.util.HashSet(p2));
      this.d = p3;
    }

    public final T a(android.os.Bundle p0)
    {
      hn.b(p0, "bundle");
      if ( p0.get(this.a) != null )
        return (T)this.b(p0);
      else
        return null;
    }

    public final T a(com.google.android.gms.common.data.DataHolder p0, int p1, int p2)
    {
      java.util.Iterator v4;
      v4 = this.b.iterator();
      while ( v4.hasNext() )
      {
        if ( p0.h((String)v4.next(), p1, p2) )
          return null;
      }
      return (T)this.b(p0, p1, p2);
    }

    public final String a()
    {
      return this.a;
    }

    protected abstract void a(android.os.Bundle p0, java.lang.Object p1);

    public final void a(
            com.google.android.gms.common.data.DataHolder p0,
            com.google.android.gms.drive.metadata.internal.MetadataBundle p1,
            int p2,
            int p3)
    {
      hn.b(p0, "dataHolder");
      hn.b(p1, "bundle");
      p1.b((com.google.android.gms.drive.metadata.MetadataField)this, this.a(p0, p2, p3));
    }

    public final void a(T p0, android.os.Bundle p1)
    {
      hn.b(p1, "bundle");
      if ( p0 != null )
        this.a(p1, p0);
      else
        p1.putString(this.a, null);
    }

    protected abstract java.lang.Object b(android.os.Bundle p0);

    protected abstract java.lang.Object b(com.google.android.gms.common.data.DataHolder p0, int p1, int p2);

    public final java.util.Collection<String> b()
    {
      return this.b;
    }

    public String toString()
    {
      return this.a;
    }

}
