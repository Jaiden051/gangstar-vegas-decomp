// Decompiled from classes.dex (SourceFile: FreezableUtils.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.data;

public final class FreezableUtils {
    // Methods
    public FreezableUtils()
    {
      super();
    }

    public static <T, E extends com.google.android.gms.common.data.Freezable<T>> java.util.ArrayList<T> freeze(
            java.util.ArrayList<E> p0)
    {
      java.util.ArrayList v1;
      int v2;
      int i;
      v1 = new java.util.ArrayList(p0.size());
      v2 = p0.size();
      for ( i = 0; i < v2; ++i )
        v1.add(((com.google.android.gms.common.data.Freezable)p0.get(i)).h());
      return v1;
    }

    public static <T, E extends com.google.android.gms.common.data.Freezable<T>> java.util.ArrayList<T> freeze(
            E[] p0)
    {
      java.util.ArrayList v1;
      int i;
      v1 = new java.util.ArrayList(p0.length);
      for ( i = 0; i < p0.length; ++i )
        v1.add(p0[i].h());
      return v1;
    }

    public static <T, E extends com.google.android.gms.common.data.Freezable<T>> java.util.ArrayList<T> freezeIterable(
            Iterable<E> p0)
    {
      java.util.ArrayList v1;
      java.util.Iterator i;
      v1 = new java.util.ArrayList();
      for ( i = p0.iterator(); i.hasNext(); v1.add(((com.google.android.gms.common.data.Freezable)i.next()).h()) )
        ;
      return v1;
    }

}
