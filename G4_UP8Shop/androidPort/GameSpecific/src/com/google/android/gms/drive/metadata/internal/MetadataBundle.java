// Decompiled from classes.dex (SourceFile: MetadataBundle.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.metadata.internal;

import android.util.Log;
import com.google.android.gms.internal.hl;
import com.google.android.gms.internal.hn;
public final class MetadataBundle implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    final android.os.Bundle b;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.metadata.internal.h();
    }

    MetadataBundle(int p0, android.os.Bundle p1)
    {
      super();
      java.util.List v3;
      java.util.Iterator v4;
      String v5;
      java.util.Iterator i;
      this.a = p0;
      this.b = (android.os.Bundle)hn.f(p1);
      this.b.setClassLoader(this.getClass().getClassLoader());
      v3 = new java.util.ArrayList();
      v4 = this.b.keySet().iterator();
      while ( v4.hasNext() )
      {
        v5 = (String)v4.next();
        if ( e.aN(v5) == null )
        {
          v3.add(v5);
          Log.w("MetadataBundle", "Ignored unknown metadata field in bundle: " + v5);
        }
      }
      for ( i = v3.iterator(); i.hasNext(); this.b.remove((String)i.next()) )
        ;
    
    }

    private MetadataBundle(android.os.Bundle p0)
    {
      this(1, p0);
    }

    public static <T> com.google.android.gms.drive.metadata.internal.MetadataBundle a(
            com.google.android.gms.drive.metadata.MetadataField<T> p0,
            T p1)
    {
      com.google.android.gms.drive.metadata.internal.MetadataBundle result; // RETVAL
    
      result = gA();
      result.b(p0, p1);
      return result;
    }

    public static com.google.android.gms.drive.metadata.internal.MetadataBundle a(
            com.google.android.gms.drive.metadata.internal.MetadataBundle p0)
    {
      return new com.google.android.gms.drive.metadata.internal.MetadataBundle(new android.os.Bundle(p0.b));
    }

    public static com.google.android.gms.drive.metadata.internal.MetadataBundle gA()
    {
      return new com.google.android.gms.drive.metadata.internal.MetadataBundle(new android.os.Bundle());
    }

    public final <T> T a(com.google.android.gms.drive.metadata.MetadataField<T> p0)
    {
      return (T)p0.a(this.b);
    }

    public final java.util.Set<com.google.android.gms.drive.metadata.MetadataField<?>> a()
    {
      java.util.Set v1;
      java.util.Iterator i;
      v1 = new java.util.HashSet();
      for ( i = this.b.keySet().iterator(); i.hasNext(); v1.add(e.aN((String)i.next())) )
        ;
      return v1;
    }

    public final <T> void b(com.google.android.gms.drive.metadata.MetadataField<T> p0, T p1)
    {
      if ( e.aN(p0.a()) == null )
        throw new IllegalArgumentException("Unregistered field: " + p0.a());
      p0.a(p1, this.b);
    }

    public final int describeContents()
    {
      return 0;
    }

    public final boolean equals(Object p0)
    {
      com.google.android.gms.drive.metadata.internal.MetadataBundle v4;
      java.util.Set v5;
      java.util.Iterator v6;
      String v7;
      if ( this == p0 )
        return true;
      if ( !(p0 instanceof com.google.android.gms.drive.metadata.internal.MetadataBundle) )
        return false;
      v4 = (com.google.android.gms.drive.metadata.internal.MetadataBundle)p0;
      v5 = this.b.keySet();
      if ( !v5.equals(v4.b.keySet()) )
        return false;
      v6 = v5.iterator();
      while ( v6.hasNext() )
      {
        v7 = (String)v6.next();
        if ( !hl.equal(this.b.get(v7), v4.b.get(v7)) )
          return false;
      }
      return true;
    }

    public final int hashCode()
    {
      java.util.Iterator v1;
      int v2;
      v1 = this.b.keySet().iterator();
      v2 = 1;
      while ( v1.hasNext() )
        v2 = this.b.get((String)v1.next()).hashCode() + 31 * v2;
      return v2;
    }

    public final String toString()
    {
      return "MetadataBundle [values=" + this.b + "]";
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.drive.metadata.internal.h.a(this, p0, p1);
    }

}
